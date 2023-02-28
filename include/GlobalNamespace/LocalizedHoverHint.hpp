// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Polyglot.LocalizedTextComponent`1
#include "Polyglot/LocalizedTextComponent_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: HoverHint
  class HoverHint;
}
// Forward declaring namespace: Polyglot
namespace Polyglot {
  // Skipping declaration: LanguageDirection because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LocalizedHoverHint
  class LocalizedHoverHint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LocalizedHoverHint);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalizedHoverHint*, "", "LocalizedHoverHint");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: LocalizedHoverHint
  // [TokenAttribute] Offset: FFFFFFFF
  class LocalizedHoverHint : public ::Polyglot::LocalizedTextComponent_1<::HMUI::HoverHint*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x13706C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalizedHoverHint* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LocalizedHoverHint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalizedHoverHint*, creationType>()));
    }
    // protected System.Void SetText(HMUI.HoverHint hoverHint, System.String value)
    // Offset: 0x13706A8
    void SetText(::HMUI::HoverHint* hoverHint, ::StringW value);
    // protected System.Void UpdateAlignment(HMUI.HoverHint hoverHint, Polyglot.LanguageDirection direction)
    // Offset: 0x13706C0
    void UpdateAlignment(::HMUI::HoverHint* hoverHint, ::Polyglot::LanguageDirection direction);
  }; // LocalizedHoverHint
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LocalizedHoverHint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LocalizedHoverHint::SetText
// Il2CppName: SetText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalizedHoverHint::*)(::HMUI::HoverHint*, ::StringW)>(&GlobalNamespace::LocalizedHoverHint::SetText)> {
  static const MethodInfo* get() {
    static auto* hoverHint = &::il2cpp_utils::GetClassFromName("HMUI", "HoverHint")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalizedHoverHint*), "SetText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hoverHint, value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalizedHoverHint::UpdateAlignment
// Il2CppName: UpdateAlignment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalizedHoverHint::*)(::HMUI::HoverHint*, ::Polyglot::LanguageDirection)>(&GlobalNamespace::LocalizedHoverHint::UpdateAlignment)> {
  static const MethodInfo* get() {
    static auto* hoverHint = &::il2cpp_utils::GetClassFromName("HMUI", "HoverHint")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("Polyglot", "LanguageDirection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalizedHoverHint*), "UpdateAlignment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hoverHint, direction});
  }
};
