// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.FileSystemEnumerableFactory
#include "System/IO/FileSystemEnumerableFactory.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.IO.SearchOption
#include "System/IO/SearchOption.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.IO.FileSystemEnumerableFactory.CreateFileNameIterator
System::Collections::Generic::IEnumerable_1<::CsString*>* System::IO::FileSystemEnumerableFactory::CreateFileNameIterator(::CsString* path, ::CsString* originalUserPath, ::CsString* searchPattern, bool includeFiles, bool includeDirs, System::IO::SearchOption searchOption, bool checkHost) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerable_1<::CsString*>*>("System.IO", "FileSystemEnumerableFactory", "CreateFileNameIterator", path, originalUserPath, searchPattern, includeFiles, includeDirs, searchOption, checkHost));
}
