// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.ResultStateException
#include "NUnit/Framework/ResultStateException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ResultState
  class ResultState;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.TestRunner
namespace UnityEngine::TestTools::TestRunner {
  // Forward declaring type: UnityTestTimeoutException
  class UnityTestTimeoutException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TestTools::TestRunner::UnityTestTimeoutException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TestTools::TestRunner::UnityTestTimeoutException*, "UnityEngine.TestTools.TestRunner", "UnityTestTimeoutException");
// Type namespace: UnityEngine.TestTools.TestRunner
namespace UnityEngine::TestTools::TestRunner {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.TestRunner.UnityTestTimeoutException
  // [TokenAttribute] Offset: FFFFFFFF
  class UnityTestTimeoutException : public ::NUnit::Framework::ResultStateException {
    public:
    // public System.Void .ctor(System.Int32 timeout)
    // Offset: 0x2B74BC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityTestTimeoutException* New_ctor(int timeout) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TestTools::TestRunner::UnityTestTimeoutException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityTestTimeoutException*, creationType>(timeout)));
    }
    // static private System.String BuildMessage(System.Int32 timeout)
    // Offset: 0x2B74BF4
    static ::StringW BuildMessage(int timeout);
    // public override NUnit.Framework.Interfaces.ResultState get_ResultState()
    // Offset: 0x2B74C70
    // Implemented from: NUnit.Framework.ResultStateException
    // Base method: NUnit.Framework.Interfaces.ResultState ResultStateException::get_ResultState()
    ::NUnit::Framework::Interfaces::ResultState* get_ResultState();
    // public override System.String get_StackTrace()
    // Offset: 0x2B74CD8
    // Implemented from: System.Exception
    // Base method: System.String Exception::get_StackTrace()
    ::StringW get_StackTrace();
  }; // UnityEngine.TestTools.TestRunner.UnityTestTimeoutException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::UnityTestTimeoutException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::UnityTestTimeoutException::BuildMessage
// Il2CppName: BuildMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int)>(&UnityEngine::TestTools::TestRunner::UnityTestTimeoutException::BuildMessage)> {
  static const MethodInfo* get() {
    static auto* timeout = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::UnityTestTimeoutException*), "BuildMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timeout});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::UnityTestTimeoutException::get_ResultState
// Il2CppName: get_ResultState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Interfaces::ResultState* (UnityEngine::TestTools::TestRunner::UnityTestTimeoutException::*)()>(&UnityEngine::TestTools::TestRunner::UnityTestTimeoutException::get_ResultState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::UnityTestTimeoutException*), "get_ResultState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::UnityTestTimeoutException::get_StackTrace
// Il2CppName: get_StackTrace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::TestTools::TestRunner::UnityTestTimeoutException::*)()>(&UnityEngine::TestTools::TestRunner::UnityTestTimeoutException::get_StackTrace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::UnityTestTimeoutException*), "get_StackTrace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
