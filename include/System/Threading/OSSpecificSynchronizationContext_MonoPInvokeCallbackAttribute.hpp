// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.OSSpecificSynchronizationContext
#include "System/Threading/OSSpecificSynchronizationContext.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.OSSpecificSynchronizationContext/MonoPInvokeCallbackAttribute
  // [AttributeUsageAttribute] Offset: D7CFDC
  class OSSpecificSynchronizationContext::MonoPInvokeCallbackAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: MonoPInvokeCallbackAttribute
    MonoPInvokeCallbackAttribute() noexcept {}
    // public System.Void .ctor(System.Type t)
    // Offset: 0x18AEC24
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OSSpecificSynchronizationContext::MonoPInvokeCallbackAttribute* New_ctor(System::Type* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::OSSpecificSynchronizationContext::MonoPInvokeCallbackAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OSSpecificSynchronizationContext::MonoPInvokeCallbackAttribute*, creationType>(t)));
    }
  }; // System.Threading.OSSpecificSynchronizationContext/MonoPInvokeCallbackAttribute
  #pragma pack(pop)
  // Writing MetadataGetter for method: OSSpecificSynchronizationContext::MonoPInvokeCallbackAttribute::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OSSpecificSynchronizationContext::MonoPInvokeCallbackAttribute::*)(System::Type*)>(&OSSpecificSynchronizationContext::MonoPInvokeCallbackAttribute::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(OSSpecificSynchronizationContext::MonoPInvokeCallbackAttribute*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OSSpecificSynchronizationContext::MonoPInvokeCallbackAttribute::*)(System::Type*)>(&OSSpecificSynchronizationContext::MonoPInvokeCallbackAttribute::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(OSSpecificSynchronizationContext::MonoPInvokeCallbackAttribute*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>()});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::OSSpecificSynchronizationContext::MonoPInvokeCallbackAttribute*, "System.Threading", "OSSpecificSynchronizationContext/MonoPInvokeCallbackAttribute");
