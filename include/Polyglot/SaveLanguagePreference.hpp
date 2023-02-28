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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Polyglot
namespace Polyglot {
  // Forward declaring type: SaveLanguagePreference
  class SaveLanguagePreference;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Polyglot::SaveLanguagePreference);
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::SaveLanguagePreference*, "Polyglot", "SaveLanguagePreference");
// Type namespace: Polyglot
namespace Polyglot {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Polyglot.SaveLanguagePreference
  // [TokenAttribute] Offset: FFFFFFFF
  class SaveLanguagePreference : public ::UnityEngine::MonoBehaviour/*, public ::Polyglot::ILocalize*/ {
    public:
    public:
    // private System.String preferenceKey
    // Size: 0x8
    // Offset: 0x18
    ::StringW preferenceKey;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
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
    // Get instance field reference: private System.String preferenceKey
    [[deprecated("Use field access instead!")]] ::StringW& dyn_preferenceKey();
    // public System.Void .ctor()
    // Offset: 0x2AF6ED8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaveLanguagePreference* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Polyglot::SaveLanguagePreference::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaveLanguagePreference*, creationType>()));
    }
    // public System.Void Start()
    // Offset: 0x2AF6E50
    void Start();
    // public System.Void OnLocalize()
    // Offset: 0x2AF6EA4
    void OnLocalize();
  }; // Polyglot.SaveLanguagePreference
  #pragma pack(pop)
  static check_size<sizeof(SaveLanguagePreference), 24 + sizeof(::StringW)> __Polyglot_SaveLanguagePreferenceSizeCheck;
  static_assert(sizeof(SaveLanguagePreference) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Polyglot::SaveLanguagePreference::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Polyglot::SaveLanguagePreference::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::SaveLanguagePreference::*)()>(&Polyglot::SaveLanguagePreference::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::SaveLanguagePreference*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::SaveLanguagePreference::OnLocalize
// Il2CppName: OnLocalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::SaveLanguagePreference::*)()>(&Polyglot::SaveLanguagePreference::OnLocalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::SaveLanguagePreference*), "OnLocalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
