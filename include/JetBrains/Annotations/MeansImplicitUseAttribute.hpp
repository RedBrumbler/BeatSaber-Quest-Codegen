// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: JetBrains.Annotations.ImplicitUseKindFlags
#include "JetBrains/Annotations/ImplicitUseKindFlags.hpp"
// Including type: JetBrains.Annotations.ImplicitUseTargetFlags
#include "JetBrains/Annotations/ImplicitUseTargetFlags.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.MeansImplicitUseAttribute
  // [AttributeUsageAttribute] Offset: DCAAAC
  class MeansImplicitUseAttribute : public System::Attribute {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDCB2B8
    // private JetBrains.Annotations.ImplicitUseKindFlags <UseKindFlags>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    JetBrains::Annotations::ImplicitUseKindFlags UseKindFlags;
    // Field size check
    static_assert(sizeof(JetBrains::Annotations::ImplicitUseKindFlags) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDCB2C8
    // private JetBrains.Annotations.ImplicitUseTargetFlags <TargetFlags>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    JetBrains::Annotations::ImplicitUseTargetFlags TargetFlags;
    // Field size check
    static_assert(sizeof(JetBrains::Annotations::ImplicitUseTargetFlags) == 0x4);
    // Creating value type constructor for type: MeansImplicitUseAttribute
    MeansImplicitUseAttribute(JetBrains::Annotations::ImplicitUseKindFlags UseKindFlags_ = {}, JetBrains::Annotations::ImplicitUseTargetFlags TargetFlags_ = {}) noexcept : UseKindFlags{UseKindFlags_}, TargetFlags{TargetFlags_} {}
    // public System.Void .ctor(JetBrains.Annotations.ImplicitUseKindFlags useKindFlags)
    // Offset: 0x23DB52C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MeansImplicitUseAttribute* New_ctor(JetBrains::Annotations::ImplicitUseKindFlags useKindFlags) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::MeansImplicitUseAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MeansImplicitUseAttribute*, creationType>(useKindFlags)));
    }
    // public System.Void .ctor(JetBrains.Annotations.ImplicitUseTargetFlags targetFlags)
    // Offset: 0x23DB55C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MeansImplicitUseAttribute* New_ctor(JetBrains::Annotations::ImplicitUseTargetFlags targetFlags) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::MeansImplicitUseAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MeansImplicitUseAttribute*, creationType>(targetFlags)));
    }
    // public System.Void .ctor(JetBrains.Annotations.ImplicitUseKindFlags useKindFlags, JetBrains.Annotations.ImplicitUseTargetFlags targetFlags)
    // Offset: 0x23DB4F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MeansImplicitUseAttribute* New_ctor(JetBrains::Annotations::ImplicitUseKindFlags useKindFlags, JetBrains::Annotations::ImplicitUseTargetFlags targetFlags) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::MeansImplicitUseAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MeansImplicitUseAttribute*, creationType>(useKindFlags, targetFlags)));
    }
    // public JetBrains.Annotations.ImplicitUseKindFlags get_UseKindFlags()
    // Offset: 0x23DB58C
    JetBrains::Annotations::ImplicitUseKindFlags get_UseKindFlags();
    // private System.Void set_UseKindFlags(JetBrains.Annotations.ImplicitUseKindFlags value)
    // Offset: 0x23DB594
    void set_UseKindFlags(JetBrains::Annotations::ImplicitUseKindFlags value);
    // public JetBrains.Annotations.ImplicitUseTargetFlags get_TargetFlags()
    // Offset: 0x23DB59C
    JetBrains::Annotations::ImplicitUseTargetFlags get_TargetFlags();
    // private System.Void set_TargetFlags(JetBrains.Annotations.ImplicitUseTargetFlags value)
    // Offset: 0x23DB5A4
    void set_TargetFlags(JetBrains::Annotations::ImplicitUseTargetFlags value);
    // public System.Void .ctor()
    // Offset: 0x23DB4C4
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MeansImplicitUseAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::MeansImplicitUseAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MeansImplicitUseAttribute*, creationType>()));
    }
  }; // JetBrains.Annotations.MeansImplicitUseAttribute
  #pragma pack(pop)
  static check_size<sizeof(MeansImplicitUseAttribute), 20 + sizeof(JetBrains::Annotations::ImplicitUseTargetFlags)> __JetBrains_Annotations_MeansImplicitUseAttributeSizeCheck;
  static_assert(sizeof(MeansImplicitUseAttribute) == 0x18);
  // Writing MetadataGetter for method: MeansImplicitUseAttribute::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MeansImplicitUseAttribute::*)(JetBrains::Annotations::ImplicitUseKindFlags)>(&MeansImplicitUseAttribute::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MeansImplicitUseAttribute*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<JetBrains::Annotations::ImplicitUseKindFlags>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MeansImplicitUseAttribute::*)(JetBrains::Annotations::ImplicitUseKindFlags)>(&MeansImplicitUseAttribute::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MeansImplicitUseAttribute*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<JetBrains::Annotations::ImplicitUseKindFlags>()});
    }
  };
  // Writing MetadataGetter for method: MeansImplicitUseAttribute::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MeansImplicitUseAttribute::*)(JetBrains::Annotations::ImplicitUseTargetFlags)>(&MeansImplicitUseAttribute::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MeansImplicitUseAttribute*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<JetBrains::Annotations::ImplicitUseTargetFlags>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MeansImplicitUseAttribute::*)(JetBrains::Annotations::ImplicitUseTargetFlags)>(&MeansImplicitUseAttribute::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MeansImplicitUseAttribute*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<JetBrains::Annotations::ImplicitUseTargetFlags>()});
    }
  };
  // Writing MetadataGetter for method: MeansImplicitUseAttribute::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MeansImplicitUseAttribute::*)(JetBrains::Annotations::ImplicitUseKindFlags, JetBrains::Annotations::ImplicitUseTargetFlags)>(&MeansImplicitUseAttribute::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MeansImplicitUseAttribute*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<JetBrains::Annotations::ImplicitUseKindFlags>(), ::il2cpp_utils::ExtractIndependentType<JetBrains::Annotations::ImplicitUseTargetFlags>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MeansImplicitUseAttribute::*)(JetBrains::Annotations::ImplicitUseKindFlags, JetBrains::Annotations::ImplicitUseTargetFlags)>(&MeansImplicitUseAttribute::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MeansImplicitUseAttribute*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<JetBrains::Annotations::ImplicitUseKindFlags>(), ::il2cpp_utils::ExtractIndependentType<JetBrains::Annotations::ImplicitUseTargetFlags>()});
    }
  };
  // Writing MetadataGetter for method: MeansImplicitUseAttribute::get_UseKindFlags
  // Il2CppName: get_UseKindFlags
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<JetBrains::Annotations::ImplicitUseKindFlags (MeansImplicitUseAttribute::*)()>(&MeansImplicitUseAttribute::get_UseKindFlags)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MeansImplicitUseAttribute*), "get_UseKindFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: MeansImplicitUseAttribute::set_UseKindFlags
  // Il2CppName: set_UseKindFlags
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MeansImplicitUseAttribute::*)(JetBrains::Annotations::ImplicitUseKindFlags)>(&MeansImplicitUseAttribute::set_UseKindFlags)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MeansImplicitUseAttribute*), "set_UseKindFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<JetBrains::Annotations::ImplicitUseKindFlags>()});
    }
  };
  // Writing MetadataGetter for method: MeansImplicitUseAttribute::get_TargetFlags
  // Il2CppName: get_TargetFlags
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<JetBrains::Annotations::ImplicitUseTargetFlags (MeansImplicitUseAttribute::*)()>(&MeansImplicitUseAttribute::get_TargetFlags)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MeansImplicitUseAttribute*), "get_TargetFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: MeansImplicitUseAttribute::set_TargetFlags
  // Il2CppName: set_TargetFlags
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MeansImplicitUseAttribute::*)(JetBrains::Annotations::ImplicitUseTargetFlags)>(&MeansImplicitUseAttribute::set_TargetFlags)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MeansImplicitUseAttribute*), "set_TargetFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<JetBrains::Annotations::ImplicitUseTargetFlags>()});
    }
  };
  // Writing MetadataGetter for method: MeansImplicitUseAttribute::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MeansImplicitUseAttribute::*)()>(&MeansImplicitUseAttribute::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MeansImplicitUseAttribute*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MeansImplicitUseAttribute::*)()>(&MeansImplicitUseAttribute::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MeansImplicitUseAttribute*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::MeansImplicitUseAttribute*, "JetBrains.Annotations", "MeansImplicitUseAttribute");
