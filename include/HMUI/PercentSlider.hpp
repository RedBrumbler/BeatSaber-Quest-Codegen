// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.RangeValuesTextSlider
#include "HMUI/RangeValuesTextSlider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: PercentSlider
  class PercentSlider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::PercentSlider);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::PercentSlider*, "HMUI", "PercentSlider");
// Type namespace: HMUI
namespace HMUI {
  // WARNING Size may be invalid!
  // Autogenerated type: HMUI.PercentSlider
  // [TokenAttribute] Offset: FFFFFFFF
  class PercentSlider : public ::HMUI::RangeValuesTextSlider {
    public:
    // public System.Void .ctor()
    // Offset: 0x17059A0
    // Implemented from: HMUI.RangeValuesTextSlider
    // Base method: System.Void RangeValuesTextSlider::.ctor()
    // Base method: System.Void TextSlider::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PercentSlider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::PercentSlider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PercentSlider*, creationType>()));
    }
    // protected override System.String TextForValue(System.Single value)
    // Offset: 0x1705910
    // Implemented from: HMUI.RangeValuesTextSlider
    // Base method: System.String RangeValuesTextSlider::TextForValue(System.Single value)
    ::StringW TextForValue(float value);
  }; // HMUI.PercentSlider
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::PercentSlider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::PercentSlider::TextForValue
// Il2CppName: TextForValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (HMUI::PercentSlider::*)(float)>(&HMUI::PercentSlider::TextForValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::PercentSlider*), "TextForValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
