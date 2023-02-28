// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Forward declaring type: TestCommandPcHelper
  class TestCommandPcHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TestTools::TestCommandPcHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TestTools::TestCommandPcHelper*, "UnityEngine.TestTools", "TestCommandPcHelper");
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.TestCommandPcHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class TestCommandPcHelper : public ::Il2CppObject {
    public:
    // public System.Void .ctor()
    // Offset: 0x19CACC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestCommandPcHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TestTools::TestCommandPcHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestCommandPcHelper*, creationType>()));
    }
    // public System.Void SetEnumeratorPC(System.Collections.IEnumerator enumerator, System.Int32 pc)
    // Offset: 0x19CACB8
    void SetEnumeratorPC(::System::Collections::IEnumerator* enumerator, int pc);
    // public System.Int32 GetEnumeratorPC(System.Collections.IEnumerator enumerator)
    // Offset: 0x19CACBC
    int GetEnumeratorPC(::System::Collections::IEnumerator* enumerator);
  }; // UnityEngine.TestTools.TestCommandPcHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::TestCommandPcHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestTools::TestCommandPcHelper::SetEnumeratorPC
// Il2CppName: SetEnumeratorPC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestCommandPcHelper::*)(::System::Collections::IEnumerator*, int)>(&UnityEngine::TestTools::TestCommandPcHelper::SetEnumeratorPC)> {
  static const MethodInfo* get() {
    static auto* enumerator = &::il2cpp_utils::GetClassFromName("System.Collections", "IEnumerator")->byval_arg;
    static auto* pc = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestCommandPcHelper*), "SetEnumeratorPC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enumerator, pc});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestCommandPcHelper::GetEnumeratorPC
// Il2CppName: GetEnumeratorPC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::TestTools::TestCommandPcHelper::*)(::System::Collections::IEnumerator*)>(&UnityEngine::TestTools::TestCommandPcHelper::GetEnumeratorPC)> {
  static const MethodInfo* get() {
    static auto* enumerator = &::il2cpp_utils::GetClassFromName("System.Collections", "IEnumerator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestCommandPcHelper*), "GetEnumeratorPC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enumerator});
  }
};
