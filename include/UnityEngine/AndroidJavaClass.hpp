// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AndroidJavaObject
#include "UnityEngine/AndroidJavaObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AndroidJavaClass
  class AndroidJavaClass;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AndroidJavaClass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AndroidJavaClass*, "UnityEngine", "AndroidJavaClass");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AndroidJavaClass
  // [TokenAttribute] Offset: FFFFFFFF
  class AndroidJavaClass : public ::UnityEngine::AndroidJavaObject {
    public:
    // public System.Void .ctor(System.String className)
    // Offset: 0x2B115A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidJavaClass* New_ctor(::StringW className) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AndroidJavaClass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidJavaClass*, creationType>(className)));
    }
    // private System.Void _AndroidJavaClass(System.String className)
    // Offset: 0x2B11630
    void _AndroidJavaClass(::StringW className);
    // System.Void .ctor(System.IntPtr jclass)
    // Offset: 0x2B11848
    // Implemented from: UnityEngine.AndroidJavaObject
    // Base method: System.Void AndroidJavaObject::.ctor(System.IntPtr jclass)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidJavaClass* New_ctor(::System::IntPtr jclass) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AndroidJavaClass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidJavaClass*, creationType>(jclass)));
    }
  }; // UnityEngine.AndroidJavaClass
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AndroidJavaClass::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AndroidJavaClass::_AndroidJavaClass
// Il2CppName: _AndroidJavaClass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AndroidJavaClass::*)(::StringW)>(&UnityEngine::AndroidJavaClass::_AndroidJavaClass)> {
  static const MethodInfo* get() {
    static auto* className = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaClass*), "_AndroidJavaClass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{className});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaClass::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
