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
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.NotifyPropertyChangedInvocatorAttribute
  // [AttributeUsageAttribute] Offset: DCA9A0
  class NotifyPropertyChangedInvocatorAttribute : public System::Attribute {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDCB248
    // private System.String <ParameterName>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* ParameterName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: NotifyPropertyChangedInvocatorAttribute
    NotifyPropertyChangedInvocatorAttribute(::Il2CppString* ParameterName_ = {}) noexcept : ParameterName{ParameterName_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return ParameterName;
    }
    // public System.Void .ctor(System.String parameterName)
    // Offset: 0x23DB610
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NotifyPropertyChangedInvocatorAttribute* New_ctor(::Il2CppString* parameterName) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NotifyPropertyChangedInvocatorAttribute*, creationType>(parameterName)));
    }
    // public System.String get_ParameterName()
    // Offset: 0x23DB63C
    ::Il2CppString* get_ParameterName();
    // private System.Void set_ParameterName(System.String value)
    // Offset: 0x23DB644
    void set_ParameterName(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0x23DB608
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NotifyPropertyChangedInvocatorAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NotifyPropertyChangedInvocatorAttribute*, creationType>()));
    }
  }; // JetBrains.Annotations.NotifyPropertyChangedInvocatorAttribute
  #pragma pack(pop)
  static check_size<sizeof(NotifyPropertyChangedInvocatorAttribute), 16 + sizeof(::Il2CppString*)> __JetBrains_Annotations_NotifyPropertyChangedInvocatorAttributeSizeCheck;
  static_assert(sizeof(NotifyPropertyChangedInvocatorAttribute) == 0x18);
  // Writing MetadataGetter for method: NotifyPropertyChangedInvocatorAttribute::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NotifyPropertyChangedInvocatorAttribute::*)(::Il2CppString*)>(&NotifyPropertyChangedInvocatorAttribute::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(NotifyPropertyChangedInvocatorAttribute*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NotifyPropertyChangedInvocatorAttribute::*)(::Il2CppString*)>(&NotifyPropertyChangedInvocatorAttribute::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(NotifyPropertyChangedInvocatorAttribute*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
    }
  };
  // Writing MetadataGetter for method: NotifyPropertyChangedInvocatorAttribute::get_ParameterName
  // Il2CppName: get_ParameterName
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NotifyPropertyChangedInvocatorAttribute::*)()>(&NotifyPropertyChangedInvocatorAttribute::get_ParameterName)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(NotifyPropertyChangedInvocatorAttribute*), "get_ParameterName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: NotifyPropertyChangedInvocatorAttribute::set_ParameterName
  // Il2CppName: set_ParameterName
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NotifyPropertyChangedInvocatorAttribute::*)(::Il2CppString*)>(&NotifyPropertyChangedInvocatorAttribute::set_ParameterName)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(NotifyPropertyChangedInvocatorAttribute*), "set_ParameterName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
    }
  };
  // Writing MetadataGetter for method: NotifyPropertyChangedInvocatorAttribute::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NotifyPropertyChangedInvocatorAttribute::*)()>(&NotifyPropertyChangedInvocatorAttribute::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(NotifyPropertyChangedInvocatorAttribute*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NotifyPropertyChangedInvocatorAttribute::*)()>(&NotifyPropertyChangedInvocatorAttribute::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(NotifyPropertyChangedInvocatorAttribute*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute*, "JetBrains.Annotations", "NotifyPropertyChangedInvocatorAttribute");
