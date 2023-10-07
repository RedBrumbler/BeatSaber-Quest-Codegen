import * as fs from "https://deno.land/std@0.194.0/fs/mod.ts";
import * as path from "https://deno.land/std@0.194.0/path/mod.ts";

const UNITY_VERSION = "UNITY_2021";
const archTarget = "aarch64";
const apiLevel = 24;
const codegenHeaders = path.join(Deno.cwd(), "include");
const externHeaders = path.join(Deno.cwd(), "extern/includes");
const il2cppHeaders = path.join(
  Deno.cwd(),
  "extern/includes/libil2cpp/il2cpp/libil2cpp"
);

let ndkPath: string | undefined;

if (await fs.exists("ndkpath.txt")) {
  ndkPath = await Deno.readTextFile("ndkpath.txt");
} else {
  ndkPath = Deno.env.get("ANDROID_NDK_HOME");
}

if (ndkPath === undefined) {
  throw "No NDK path found!";
}

const clangPath = path.join(
  ndkPath,
  "toolchains",
  "llvm",
  "prebuilt",
  `${Deno.build.os}-${Deno.build.arch}`,
  "bin",
  `clang++`
);

const sysroot = path.join(
  ndkPath,
  "toolchains",
  "llvm",
  "prebuilt",
  `${Deno.build.os}-${Deno.build.arch}`,
  "sysroot"
);

console.log("Using clang", clangPath);

const files = [];

for await (const dirEntry of fs.walk(codegenHeaders, { includeFiles: false })) {
  // Namespace/Namespace.hpp
  const namespaceHeader = path.join(dirEntry.path, `${dirEntry.name}.hpp`);

  if (!(await fs.exists(namespaceHeader))) {
    console.log(`Skipping ${dirEntry.name}, header does not exist`);
    continue;
  }

  console.log(`Pushing header for compilation: ${dirEntry.path}`);
  files.push(namespaceHeader);
}

const fileCount = files.length;
const procCount = navigator.hardwareConcurrency;
const chunkSize = Math.ceil(fileCount / procCount);

console.log(`Building with ${procCount} processes, and chunks of size ${chunkSize}`);
const chunks = [];
for (let i = 0; i < fileCount; i += chunkSize) {
    chunks.push(files.slice(i, i + chunkSize));
}


const format_processes = []
for (let i = 0; i < chunks.length; i++) {
    format_processes.push(buildChunk(chunks[i]));
}

await Promise.all(format_processes);

async function buildChunk(headers: string[]) {
  console.log(`Building chunk made up of ${headers.length} files`);
  for await (const header of headers) {
    console.log(`Building header ${header}`);
    await buildHeader(header);
  }
}

async function buildHeader(headerPath: string) {
  const compileCommandsPath = path.join(Deno.cwd(), 'build', path.basename(headerPath)) + '.json.tmp';
  const buildPath = path.join(Deno.cwd(), 'build')
  if (!fs.existsSync(buildPath)) {
    await Deno.mkdir(buildPath, { recursive: true });
  }

  // "clang -cc1 test.h -emit-pch -o test.h.pch"
  const args = [
    // "-cc1", // C
    "-c", // C++
    `--sysroot=${sysroot}`,
    `--target=${archTarget}-linux-android${apiLevel}`,
    // clang build args
    "-stdlib=libc++",
    "-std=gnu++20",
    `-xc++-header`,
    `-I${codegenHeaders}`,
    `-I${externHeaders}`,
    `-isystem${il2cppHeaders}`,
    `-DNO_CODEGEN_USE`,
    `-DANDROID`,
    `-DNDEBUG`,
    `-DCOMPILE_TIME_OFFSET_CHECKS`,
    `-D${UNITY_VERSION}`,
    `-O3`,
    `-fdeclspec`,

    // PCH
    headerPath,
    "-o",
    `${headerPath}.pch`,
  ];

  const command = new Deno.Command(clangPath, {
    args: args,
    stdout: "inherit",
    stderr: "inherit",
  });

  const output = await command.output();

  // fixupCompileCommands(compileCommandsPath);

  if (!output.success) {
    console.error(`Failed to compile ${headerPath}`);
    console.error(`Command invocation:\n${clangPath} ${args.join(" ")}`);
    console.error("======================");
    Deno.exit(1);
  }
}

async function fixupCompileCommands(path: string) {
  const tempFile = await Deno.readTextFile(path)
  const tempJson = JSON.parse(tempFile.trim())


  const filePath = "./build/compile_commands.json";

  // create file if needed
  await fs.ensureFile(filePath)

  const defaultFileContents: string = await Deno.readTextFile(filePath);

  let fileJson: unknown[];
  if (defaultFileContents.trim() === "") {
    fileJson = []
  } else {
    fileJson = JSON.parse(defaultFileContents.trim())
  }

  const final = fileJson.concat(...tempJson)
  await Deno.writeTextFile(filePath, JSON.stringify(final));
}
