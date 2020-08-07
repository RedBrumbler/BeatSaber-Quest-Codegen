// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Rect
  struct Rect;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.HoverHintPanel
  class HoverHintPanel : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshProUGUI _text
    // Offset: 0x18
    TMPro::TextMeshProUGUI* text;
    // private UnityEngine.Vector2 _padding
    // Offset: 0x20
    UnityEngine::Vector2 padding;
    // private UnityEngine.Vector2 _containerPadding
    // Offset: 0x28
    UnityEngine::Vector2 containerPadding;
    // private System.Single _separator
    // Offset: 0x30
    float separator;
    // private System.Single _zOffset
    // Offset: 0x34
    float zOffset;
    // private System.Boolean <isShown>k__BackingField
    // Offset: 0x38
    bool isShown;
    // public System.Boolean get_isShown()
    // Offset: 0xECC680
    bool get_isShown();
    // private System.Void set_isShown(System.Boolean value)
    // Offset: 0xECC688
    void set_isShown(bool value);
    // protected System.Void Awake()
    // Offset: 0xECC694
    void Awake();
    // public System.Void Show(System.String text, UnityEngine.Transform parent, UnityEngine.Vector2 containerSize, UnityEngine.Rect spawnRect)
    // Offset: 0xECC11C
    void Show(::Il2CppString* text, UnityEngine::Transform* parent, UnityEngine::Vector2 containerSize, UnityEngine::Rect spawnRect);
    // public System.Void Hide()
    // Offset: 0xECBC84
    void Hide();
    // private UnityEngine.Vector2 CalculatePanelPosition(UnityEngine.Vector2 containerSize, UnityEngine.Rect spawnRect, UnityEngine.Vector2 panelSize)
    // Offset: 0xECC79C
    UnityEngine::Vector2 CalculatePanelPosition(UnityEngine::Vector2 containerSize, UnityEngine::Rect spawnRect, UnityEngine::Vector2 panelSize);
    // public System.Void .ctor()
    // Offset: 0xECC8C8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static HoverHintPanel* New_ctor();
  }; // HMUI.HoverHintPanel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::HoverHintPanel*, "HMUI", "HoverHintPanel");
#pragma pack(pop)