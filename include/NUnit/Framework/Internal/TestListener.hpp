// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Interfaces.ITestListener
#include "NUnit/Framework/Interfaces/ITestListener.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
  // Forward declaring type: ITestResult
  class ITestResult;
  // Forward declaring type: TestOutput
  class TestOutput;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestListener
  class TestListener;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Internal::TestListener);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Internal::TestListener*, "NUnit.Framework.Internal", "TestListener");
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.TestListener
  // [TokenAttribute] Offset: FFFFFFFF
  class TestListener : public ::Il2CppObject/*, public ::NUnit::Framework::Interfaces::ITestListener*/ {
    public:
    // Creating interface conversion operator: operator ::NUnit::Framework::Interfaces::ITestListener
    operator ::NUnit::Framework::Interfaces::ITestListener() noexcept {
      return *reinterpret_cast<::NUnit::Framework::Interfaces::ITestListener*>(this);
    }
    // Creating interface conversion operator: i_ITestListener
    inline ::NUnit::Framework::Interfaces::ITestListener* i_ITestListener() noexcept {
      return reinterpret_cast<::NUnit::Framework::Interfaces::ITestListener*>(this);
    }
    // static public NUnit.Framework.Interfaces.ITestListener get_NULL()
    // Offset: 0x2ABD48C
    static ::NUnit::Framework::Interfaces::ITestListener* get_NULL();
    // private System.Void .ctor()
    // Offset: 0x2ABE4D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestListener* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::Internal::TestListener::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestListener*, creationType>()));
    }
    // public System.Void TestStarted(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x2ABE4CC
    void TestStarted(::NUnit::Framework::Interfaces::ITest* test);
    // public System.Void TestFinished(NUnit.Framework.Interfaces.ITestResult result)
    // Offset: 0x2ABE4D0
    void TestFinished(::NUnit::Framework::Interfaces::ITestResult* result);
    // public System.Void TestOutput(NUnit.Framework.Interfaces.TestOutput output)
    // Offset: 0x2ABE4D4
    void TestOutput(::NUnit::Framework::Interfaces::TestOutput* output);
  }; // NUnit.Framework.Internal.TestListener
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestListener::get_NULL
// Il2CppName: get_NULL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Interfaces::ITestListener* (*)()>(&NUnit::Framework::Internal::TestListener::get_NULL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestListener*), "get_NULL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestListener::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestListener::TestStarted
// Il2CppName: TestStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestListener::*)(::NUnit::Framework::Interfaces::ITest*)>(&NUnit::Framework::Internal::TestListener::TestStarted)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestListener*), "TestStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestListener::TestFinished
// Il2CppName: TestFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestListener::*)(::NUnit::Framework::Interfaces::ITestResult*)>(&NUnit::Framework::Internal::TestListener::TestFinished)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITestResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestListener*), "TestFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestListener::TestOutput
// Il2CppName: TestOutput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestListener::*)(::NUnit::Framework::Interfaces::TestOutput*)>(&NUnit::Framework::Internal::TestListener::TestOutput)> {
  static const MethodInfo* get() {
    static auto* output = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "TestOutput")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestListener*), "TestOutput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output});
  }
};
