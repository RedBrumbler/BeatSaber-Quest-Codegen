// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: CrashManagerSO
  class CrashManagerSO;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CrashInfoViewController
  class CrashInfoViewController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CrashInfoViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CrashInfoViewController*, "", "CrashInfoViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: CrashInfoViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class CrashInfoViewController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private CrashManagerSO _crashManager
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::CrashManagerSO* crashManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::CrashManagerSO*) == 0x8);
    // private TMPro.TextMeshProUGUI _text
    // Size: 0x8
    // Offset: 0x20
    ::TMPro::TextMeshProUGUI* text;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private CrashManagerSO _crashManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::CrashManagerSO*& dyn__crashManager();
    // Get instance field reference: private TMPro.TextMeshProUGUI _text
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshProUGUI*& dyn__text();
    // public System.Void .ctor()
    // Offset: 0x14469F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CrashInfoViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CrashInfoViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CrashInfoViewController*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x144697C
    void Start();
  }; // CrashInfoViewController
  #pragma pack(pop)
  static check_size<sizeof(CrashInfoViewController), 32 + sizeof(::TMPro::TextMeshProUGUI*)> __GlobalNamespace_CrashInfoViewControllerSizeCheck;
  static_assert(sizeof(CrashInfoViewController) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CrashInfoViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CrashInfoViewController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CrashInfoViewController::*)()>(&GlobalNamespace::CrashInfoViewController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CrashInfoViewController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
