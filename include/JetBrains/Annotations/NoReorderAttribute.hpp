// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.NoReorderAttribute
  // [AttributeUsageAttribute] Offset: DCAF20
  class NoReorderAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: NoReorderAttribute
    NoReorderAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x23DB5F8
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoReorderAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::NoReorderAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoReorderAttribute*, creationType>()));
    }
  }; // JetBrains.Annotations.NoReorderAttribute
  #pragma pack(pop)
  // Writing MetadataGetter for method: NoReorderAttribute::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NoReorderAttribute::*)()>(&NoReorderAttribute::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(NoReorderAttribute*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NoReorderAttribute::*)()>(&NoReorderAttribute::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(NoReorderAttribute*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::NoReorderAttribute*, "JetBrains.Annotations", "NoReorderAttribute");
