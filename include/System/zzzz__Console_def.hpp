#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::IO {
class TextReader;
}
namespace System::Text {
class Encoding;
}
namespace System::IO {
struct FileAccess;
}
namespace System {
class ConsoleCancelEventHandler;
}
namespace System::IO {
class Stream;
}
namespace System::IO {
class TextWriter;
}
namespace System {
struct ConsoleKeyInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class System__Console__WindowsConsole__WindowsCancelHandler;
}
namespace System {
class Console;
}
namespace System {
class System__Console__WindowsConsole;
}
// Type: ::WindowsCancelHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2583))
// CS Name: System.Console::WindowsConsole::WindowsCancelHandler
class CORDL_TYPE System__Console__WindowsConsole__WindowsCancelHandler : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~System__Console__WindowsConsole__WindowsCancelHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Console__WindowsConsole__WindowsCancelHandler", modifiers: " const&", def_value: None }]
constexpr System__Console__WindowsConsole__WindowsCancelHandler(System__Console__WindowsConsole__WindowsCancelHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Console__WindowsConsole__WindowsCancelHandler", modifiers: "&&", def_value: None }]
constexpr System__Console__WindowsConsole__WindowsCancelHandler(System__Console__WindowsConsole__WindowsCancelHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Console__WindowsConsole__WindowsCancelHandler(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr System__Console__WindowsConsole__WindowsCancelHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Console__WindowsConsole__WindowsCancelHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Console__WindowsConsole__WindowsCancelHandler& operator=(System__Console__WindowsConsole__WindowsCancelHandler&& o) noexcept = default;
  constexpr System__Console__WindowsConsole__WindowsCancelHandler& operator=(System__Console__WindowsConsole__WindowsCancelHandler const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit System__Console__WindowsConsole__WindowsCancelHandler(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x24bbf78 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x24bc03c size 0x14 virtual true final false
 bool Invoke(int32_t keyCode) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::WindowsConsole
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2584))
// CS Name: System.Console::WindowsConsole
class CORDL_TYPE System__Console__WindowsConsole : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using WindowsCancelHandler = GlobalNamespace::System__Console__WindowsConsole__WindowsCancelHandler;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Console__WindowsConsole() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Console__WindowsConsole", modifiers: " const&", def_value: None }]
constexpr System__Console__WindowsConsole(System__Console__WindowsConsole const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Console__WindowsConsole", modifiers: "&&", def_value: None }]
constexpr System__Console__WindowsConsole(System__Console__WindowsConsole&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Console__WindowsConsole(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Console__WindowsConsole& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Console__WindowsConsole& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Console__WindowsConsole& operator=(System__Console__WindowsConsole&& o) noexcept = default;
  constexpr System__Console__WindowsConsole& operator=(System__Console__WindowsConsole const& o) noexcept = default;
                


// Fields

static bool __declspec(property(get=__get_ctrlHandlerAdded, put=__set_ctrlHandlerAdded))  ctrlHandlerAdded;

static void __set_ctrlHandlerAdded(bool value) ;

static bool __get_ctrlHandlerAdded() ;

static GlobalNamespace::System__Console__WindowsConsole__WindowsCancelHandler __declspec(property(get=__get_cancelHandler, put=__set_cancelHandler))  cancelHandler;

static void __set_cancelHandler(GlobalNamespace::System__Console__WindowsConsole__WindowsCancelHandler value) ;

static GlobalNamespace::System__Console__WindowsConsole__WindowsCancelHandler __get_cancelHandler() ;


// Methods

/// @brief Method GetConsoleCP addr 0x24bbda8 size 0x68 virtual false final false
static int32_t GetConsoleCP() ;

/// @brief Method GetConsoleOutputCP addr 0x24bbe10 size 0x6c virtual false final false
static int32_t GetConsoleOutputCP() ;

/// @brief Method DoWindowsConsoleCancelEvent addr 0x24bbe7c size 0x60 virtual false final false
static bool DoWindowsConsoleCancelEvent(int32_t keyCode) ;

/// @brief Method GetInputCodePage addr 0x24baee0 size 0x4c virtual false final false
static int32_t GetInputCodePage() ;

/// @brief Method GetOutputCodePage addr 0x24baf2c size 0x4c virtual false final false
static int32_t GetOutputCodePage() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Console
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2585))
// CS Name: System.Console
class CORDL_TYPE Console : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using WindowsConsole = System::System__Console__WindowsConsole;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Console() = default;

// Ctor Parameters [CppParam { name: "", ty: "Console", modifiers: " const&", def_value: None }]
constexpr Console(Console const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Console", modifiers: "&&", def_value: None }]
constexpr Console(Console&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Console(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Console& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Console& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Console& operator=(Console&& o) noexcept = default;
  constexpr Console& operator=(Console const& o) noexcept = default;
                


// Fields

static System::IO::TextWriter __declspec(property(get=__get_stdout, put=__set_stdout))  stdout;

static void __set_stdout(System::IO::TextWriter value) ;

static System::IO::TextWriter __get_stdout() ;

static System::IO::TextWriter __declspec(property(get=__get_stderr, put=__set_stderr))  stderr;

static void __set_stderr(System::IO::TextWriter value) ;

static System::IO::TextWriter __get_stderr() ;

static System::IO::TextReader __declspec(property(get=__get_stdin, put=__set_stdin))  stdin;

static void __set_stdin(System::IO::TextReader value) ;

static System::IO::TextReader __get_stdin() ;

static System::Text::Encoding __declspec(property(get=__get_inputEncoding, put=__set_inputEncoding))  inputEncoding;

static void __set_inputEncoding(System::Text::Encoding value) ;

static System::Text::Encoding __get_inputEncoding() ;

static System::Text::Encoding __declspec(property(get=__get_outputEncoding, put=__set_outputEncoding))  outputEncoding;

static void __set_outputEncoding(System::Text::Encoding value) ;

static System::Text::Encoding __get_outputEncoding() ;

static System::ConsoleCancelEventHandler __declspec(property(get=__get_cancel_event, put=__set_cancel_event))  cancel_event;

static void __set_cancel_event(System::ConsoleCancelEventHandler value) ;

static System::ConsoleCancelEventHandler __get_cancel_event() ;


// Properties

static System::IO::TextWriter __declspec(property(get=get_Error))  Error;

static System::IO::TextWriter __declspec(property(get=get_Out))  Out;

static System::Text::Encoding __declspec(property(get=get_InputEncoding))  InputEncoding;

static System::Text::Encoding __declspec(property(get=get_OutputEncoding))  OutputEncoding;


// Methods

/// @brief Method SetupStreams addr 0x24baf78 size 0x3b0 virtual false final false
static void SetupStreams(System::Text::Encoding inputEncoding, System::Text::Encoding outputEncoding) ;

/// @brief Method get_Error addr 0x24bb610 size 0x58 virtual false final false
static System::IO::TextWriter get_Error() ;

/// @brief Method get_Out addr 0x24bb668 size 0x58 virtual false final false
static System::IO::TextWriter get_Out() ;

/// @brief Method Open addr 0x24bb6c0 size 0x15c virtual false final false
static System::IO::Stream Open(::cordl_internals::intptr_t handle, System::IO::FileAccess access, int32_t bufferSize) ;

/// @brief Method OpenStandardError addr 0x24bb580 size 0x90 virtual false final false
static System::IO::Stream OpenStandardError(int32_t bufferSize) ;

/// @brief Method OpenStandardInput addr 0x24bb460 size 0x90 virtual false final false
static System::IO::Stream OpenStandardInput(int32_t bufferSize) ;

/// @brief Method OpenStandardOutput addr 0x24bb4f0 size 0x90 virtual false final false
static System::IO::Stream OpenStandardOutput(int32_t bufferSize) ;

/// @brief Method SetOut addr 0x24bb81c size 0xe4 virtual false final false
static void SetOut(System::IO::TextWriter newOut) ;

/// @brief Method WriteLine addr 0x24bb900 size 0x74 virtual false final false
static void WriteLine(::StringW value) ;

/// @brief Method get_InputEncoding addr 0x24bb974 size 0x58 virtual false final false
static System::Text::Encoding get_InputEncoding() ;

/// @brief Method get_OutputEncoding addr 0x24bb9cc size 0x58 virtual false final false
static System::Text::Encoding get_OutputEncoding() ;

/// @brief Method ReadKey addr 0x24bba24 size 0x58 virtual false final false
static System::ConsoleKeyInfo ReadKey() ;

/// @brief Method ReadKey addr 0x24bba7c size 0x5c virtual false final false
static System::ConsoleKeyInfo ReadKey(bool intercept) ;

/// @brief Method DoConsoleCancelEvent addr 0x24bbbb0 size 0x1f8 virtual false final false
static void DoConsoleCancelEvent() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(GlobalNamespace::System__Console__WindowsConsole__WindowsCancelHandler);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::System__Console__WindowsConsole__WindowsCancelHandler, "System", "Console/WindowsConsole/WindowsCancelHandler");
NEED_NO_BOX(System::Console);
DEFINE_IL2CPP_ARG_TYPE(System::Console, "System", "Console");
NEED_NO_BOX(System::System__Console__WindowsConsole);
DEFINE_IL2CPP_ARG_TYPE(System::System__Console__WindowsConsole, "System", "Console/WindowsConsole");
