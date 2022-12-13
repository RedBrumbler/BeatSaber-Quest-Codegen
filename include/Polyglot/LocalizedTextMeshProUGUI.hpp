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
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
  // Forward declaring type: TextAlignmentOptions
  struct TextAlignmentOptions;
}
// Forward declaring namespace: Polyglot
namespace Polyglot {
  // Skipping declaration: LanguageDirection because it is already included!
}
// Completed forward declares
// Type namespace: Polyglot
namespace Polyglot {
  // Forward declaring type: LocalizedTextMeshProUGUI
  class LocalizedTextMeshProUGUI;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Polyglot::LocalizedTextMeshProUGUI);
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::LocalizedTextMeshProUGUI*, "Polyglot", "LocalizedTextMeshProUGUI");
// Type namespace: Polyglot
namespace Polyglot {
  // WARNING Size may be invalid!
  // Autogenerated type: Polyglot.LocalizedTextMeshProUGUI
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: 10FBD54
  // [RequireComponent] Offset: 10FBD54
  class LocalizedTextMeshProUGUI : public ::Polyglot::LocalizedTextComponent_1<::TMPro::TextMeshProUGUI*> {
    public:
    // protected System.Void SetText(TMPro.TextMeshProUGUI text, System.String value)
    // Offset: 0x2AE1598
    void SetText(::TMPro::TextMeshProUGUI* text, ::StringW value);
    // protected System.Void UpdateAlignment(TMPro.TextMeshProUGUI text, Polyglot.LanguageDirection direction)
    // Offset: 0x2AE15B8
    void UpdateAlignment(::TMPro::TextMeshProUGUI* text, ::Polyglot::LanguageDirection direction);
    // private System.Boolean IsOppositeDirection(TMPro.TextAlignmentOptions alignment, Polyglot.LanguageDirection direction)
    // Offset: 0x2AE1690
    bool IsOppositeDirection(::TMPro::TextAlignmentOptions alignment, ::Polyglot::LanguageDirection direction);
    // private System.Boolean IsAlignmentRight(TMPro.TextAlignmentOptions alignment)
    // Offset: 0x2AE16E8
    bool IsAlignmentRight(::TMPro::TextAlignmentOptions alignment);
    // private System.Boolean IsAlignmentLeft(TMPro.TextAlignmentOptions alignment)
    // Offset: 0x2AE1710
    bool IsAlignmentLeft(::TMPro::TextAlignmentOptions alignment);
    // public System.Void .ctor()
    // Offset: 0x2AE1738
    // Implemented from: Polyglot.LocalizedTextComponent`1
    // Base method: System.Void LocalizedTextComponent_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalizedTextMeshProUGUI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Polyglot::LocalizedTextMeshProUGUI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalizedTextMeshProUGUI*, creationType>()));
    }
  }; // Polyglot.LocalizedTextMeshProUGUI
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Polyglot::LocalizedTextMeshProUGUI::SetText
// Il2CppName: SetText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::LocalizedTextMeshProUGUI::*)(::TMPro::TextMeshProUGUI*, ::StringW)>(&Polyglot::LocalizedTextMeshProUGUI::SetText)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("TMPro", "TextMeshProUGUI")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizedTextMeshProUGUI*), "SetText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, value});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizedTextMeshProUGUI::UpdateAlignment
// Il2CppName: UpdateAlignment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::LocalizedTextMeshProUGUI::*)(::TMPro::TextMeshProUGUI*, ::Polyglot::LanguageDirection)>(&Polyglot::LocalizedTextMeshProUGUI::UpdateAlignment)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("TMPro", "TextMeshProUGUI")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("Polyglot", "LanguageDirection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizedTextMeshProUGUI*), "UpdateAlignment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, direction});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizedTextMeshProUGUI::IsOppositeDirection
// Il2CppName: IsOppositeDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Polyglot::LocalizedTextMeshProUGUI::*)(::TMPro::TextAlignmentOptions, ::Polyglot::LanguageDirection)>(&Polyglot::LocalizedTextMeshProUGUI::IsOppositeDirection)> {
  static const MethodInfo* get() {
    static auto* alignment = &::il2cpp_utils::GetClassFromName("TMPro", "TextAlignmentOptions")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("Polyglot", "LanguageDirection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizedTextMeshProUGUI*), "IsOppositeDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{alignment, direction});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizedTextMeshProUGUI::IsAlignmentRight
// Il2CppName: IsAlignmentRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Polyglot::LocalizedTextMeshProUGUI::*)(::TMPro::TextAlignmentOptions)>(&Polyglot::LocalizedTextMeshProUGUI::IsAlignmentRight)> {
  static const MethodInfo* get() {
    static auto* alignment = &::il2cpp_utils::GetClassFromName("TMPro", "TextAlignmentOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizedTextMeshProUGUI*), "IsAlignmentRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{alignment});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizedTextMeshProUGUI::IsAlignmentLeft
// Il2CppName: IsAlignmentLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Polyglot::LocalizedTextMeshProUGUI::*)(::TMPro::TextAlignmentOptions)>(&Polyglot::LocalizedTextMeshProUGUI::IsAlignmentLeft)> {
  static const MethodInfo* get() {
    static auto* alignment = &::il2cpp_utils::GetClassFromName("TMPro", "TextAlignmentOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizedTextMeshProUGUI*), "IsAlignmentLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{alignment});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizedTextMeshProUGUI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
