// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Polyglot.ILocalize
#include "Polyglot/ILocalize.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Dropdown
  class Dropdown;
}
// Completed forward declares
// Type namespace: Polyglot
namespace Polyglot {
  // Forward declaring type: LanguageDropdown
  class LanguageDropdown;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Polyglot::LanguageDropdown);
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::LanguageDropdown*, "Polyglot", "LanguageDropdown");
// Type namespace: Polyglot
namespace Polyglot {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Polyglot.LanguageDropdown
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 1100718
  // [AddComponentMenu] Offset: 1100718
  class LanguageDropdown : public ::UnityEngine::MonoBehaviour/*, public ::Polyglot::ILocalize*/ {
    public:
    public:
    // [TooltipAttribute] Offset: 0x1100A20
    // private UnityEngine.UI.Dropdown dropdown
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UI::Dropdown* dropdown;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Dropdown*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Polyglot::ILocalize
    operator ::Polyglot::ILocalize() noexcept {
      return *reinterpret_cast<::Polyglot::ILocalize*>(this);
    }
    // Creating interface conversion operator: i_ILocalize
    inline ::Polyglot::ILocalize* i_ILocalize() noexcept {
      return reinterpret_cast<::Polyglot::ILocalize*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.UI.Dropdown dropdown
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Dropdown*& dyn_dropdown();
    // public System.Void .ctor()
    // Offset: 0x2AF3848
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LanguageDropdown* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Polyglot::LanguageDropdown::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LanguageDropdown*, creationType>()));
    }
    // public System.Void Reset()
    // Offset: 0x2AF319C
    void Reset();
    // public System.Void Start()
    // Offset: 0x2AF31F4
    void Start();
    // private System.Void CreateDropdown()
    // Offset: 0x2AF3224
    void CreateDropdown();
    // public System.Void OnLocalize()
    // Offset: 0x2AF3714
    void OnLocalize();
  }; // Polyglot.LanguageDropdown
  #pragma pack(pop)
  static check_size<sizeof(LanguageDropdown), 24 + sizeof(::UnityEngine::UI::Dropdown*)> __Polyglot_LanguageDropdownSizeCheck;
  static_assert(sizeof(LanguageDropdown) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Polyglot::LanguageDropdown::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Polyglot::LanguageDropdown::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::LanguageDropdown::*)()>(&Polyglot::LanguageDropdown::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LanguageDropdown*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::LanguageDropdown::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::LanguageDropdown::*)()>(&Polyglot::LanguageDropdown::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LanguageDropdown*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::LanguageDropdown::CreateDropdown
// Il2CppName: CreateDropdown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::LanguageDropdown::*)()>(&Polyglot::LanguageDropdown::CreateDropdown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LanguageDropdown*), "CreateDropdown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::LanguageDropdown::OnLocalize
// Il2CppName: OnLocalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::LanguageDropdown::*)()>(&Polyglot::LanguageDropdown::OnLocalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LanguageDropdown*), "OnLocalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
