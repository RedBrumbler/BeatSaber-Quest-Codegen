// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Bindings.NativeMethodAttribute
#include "UnityEngine/Bindings/NativeMethodAttribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Bindings
namespace UnityEngine::Bindings {
  // Forward declaring type: ThreadSafeAttribute
  class ThreadSafeAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Bindings::ThreadSafeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::ThreadSafeAttribute*, "UnityEngine.Bindings", "ThreadSafeAttribute");
// Type namespace: UnityEngine.Bindings
namespace UnityEngine::Bindings {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Bindings.ThreadSafeAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [VisibleToOtherModulesAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 1088290
  class ThreadSafeAttribute : public ::UnityEngine::Bindings::NativeMethodAttribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x2B95D84
    // Implemented from: UnityEngine.Bindings.NativeMethodAttribute
    // Base method: System.Void NativeMethodAttribute::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ThreadSafeAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Bindings::ThreadSafeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ThreadSafeAttribute*, creationType>()));
    }
  }; // UnityEngine.Bindings.ThreadSafeAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Bindings::ThreadSafeAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
