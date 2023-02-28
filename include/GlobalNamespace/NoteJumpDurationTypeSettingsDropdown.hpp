// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ValueDropdownController`1
#include "GlobalNamespace/ValueDropdownController_1.hpp"
// Including type: NoteJumpDurationTypeSettings
#include "GlobalNamespace/NoteJumpDurationTypeSettings.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Tuple`2<T1, T2>
  template<typename T1, typename T2>
  class Tuple_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: NoteJumpDurationTypeSettingsDropdown
  class NoteJumpDurationTypeSettingsDropdown;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown*, "", "NoteJumpDurationTypeSettingsDropdown");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: NoteJumpDurationTypeSettingsDropdown
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteJumpDurationTypeSettingsDropdown : public ::GlobalNamespace::ValueDropdownController_1<::GlobalNamespace::NoteJumpDurationTypeSettings> {
    public:
    // protected System.Collections.Generic.IReadOnlyList`1<System.Tuple`2<NoteJumpDurationTypeSettings,System.String>> GetNamedValues()
    // Offset: 0x15B1598
    ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::NoteJumpDurationTypeSettings, ::StringW>*>* GetNamedValues();
    // public System.Void .ctor()
    // Offset: 0x15B1654
    // Implemented from: ValueDropdownController`1
    // Base method: System.Void ValueDropdownController_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteJumpDurationTypeSettingsDropdown* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteJumpDurationTypeSettingsDropdown*, creationType>()));
    }
  }; // NoteJumpDurationTypeSettingsDropdown
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoteJumpDurationTypeSettingsDropdown::GetNamedValues
// Il2CppName: GetNamedValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::NoteJumpDurationTypeSettings, ::StringW>*>* (GlobalNamespace::NoteJumpDurationTypeSettingsDropdown::*)()>(&GlobalNamespace::NoteJumpDurationTypeSettingsDropdown::GetNamedValues)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteJumpDurationTypeSettingsDropdown*), "GetNamedValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteJumpDurationTypeSettingsDropdown::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
