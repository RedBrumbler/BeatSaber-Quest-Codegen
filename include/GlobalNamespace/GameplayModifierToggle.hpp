// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifierParamsSO
  class GameplayModifierParamsSO;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: HoverTextSetter
  class HoverTextSetter;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
  // Forward declaring type: Toggle
  class Toggle;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: GameplayModifierToggle
  class GameplayModifierToggle : public UnityEngine::MonoBehaviour {
    public:
    // private GameplayModifierParamsSO _gameplayModifier
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::GameplayModifierParamsSO* gameplayModifier;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierParamsSO*) == 0x8);
    // private TMPro.TextMeshProUGUI _nameText
    // Size: 0x8
    // Offset: 0x20
    TMPro::TextMeshProUGUI* nameText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _multiplierText
    // Size: 0x8
    // Offset: 0x28
    TMPro::TextMeshProUGUI* multiplierText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private HMUI.HoverTextSetter _hoverTextSetter
    // Size: 0x8
    // Offset: 0x30
    HMUI::HoverTextSetter* hoverTextSetter;
    // Field size check
    static_assert(sizeof(HMUI::HoverTextSetter*) == 0x8);
    // private UnityEngine.UI.Image _icon
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::UI::Image* icon;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.UI.Toggle _toggle
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::UI::Toggle* toggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // [SpaceAttribute] Offset: 0xE234F0
    // private UnityEngine.Color _positiveColor
    // Size: 0x10
    // Offset: 0x48
    UnityEngine::Color positiveColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Creating value type constructor for type: GameplayModifierToggle
    GameplayModifierToggle(GlobalNamespace::GameplayModifierParamsSO* gameplayModifier_ = {}, TMPro::TextMeshProUGUI* nameText_ = {}, TMPro::TextMeshProUGUI* multiplierText_ = {}, HMUI::HoverTextSetter* hoverTextSetter_ = {}, UnityEngine::UI::Image* icon_ = {}, UnityEngine::UI::Toggle* toggle_ = {}, UnityEngine::Color positiveColor_ = {}) noexcept : gameplayModifier{gameplayModifier_}, nameText{nameText_}, multiplierText{multiplierText_}, hoverTextSetter{hoverTextSetter_}, icon{icon_}, toggle{toggle_}, positiveColor{positiveColor_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.UI.Toggle get_toggle()
    // Offset: 0x1089654
    UnityEngine::UI::Toggle* get_toggle();
    // public GameplayModifierParamsSO get_gameplayModifier()
    // Offset: 0x108965C
    GlobalNamespace::GameplayModifierParamsSO* get_gameplayModifier();
    // protected System.Void Start()
    // Offset: 0x1089664
    void Start();
    // public System.Void .ctor()
    // Offset: 0x10899C0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameplayModifierToggle* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameplayModifierToggle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameplayModifierToggle*, creationType>()));
    }
  }; // GameplayModifierToggle
  #pragma pack(pop)
  static check_size<sizeof(GameplayModifierToggle), 72 + sizeof(UnityEngine::Color)> __GlobalNamespace_GameplayModifierToggleSizeCheck;
  static_assert(sizeof(GameplayModifierToggle) == 0x58);
  // Writing MetadataGetter for method: GameplayModifierToggle::get_toggle
  // Il2CppName: get_toggle
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Toggle* (GameplayModifierToggle::*)()>(&GameplayModifierToggle::get_toggle)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(GameplayModifierToggle*), "get_toggle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: GameplayModifierToggle::get_gameplayModifier
  // Il2CppName: get_gameplayModifier
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayModifierParamsSO* (GameplayModifierToggle::*)()>(&GameplayModifierToggle::get_gameplayModifier)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(GameplayModifierToggle*), "get_gameplayModifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: GameplayModifierToggle::Start
  // Il2CppName: Start
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GameplayModifierToggle::*)()>(&GameplayModifierToggle::Start)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(GameplayModifierToggle*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: GameplayModifierToggle::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GameplayModifierToggle::*)()>(&GameplayModifierToggle::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(GameplayModifierToggle*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GameplayModifierToggle::*)()>(&GameplayModifierToggle::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(GameplayModifierToggle*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifierToggle*, "", "GameplayModifierToggle");
