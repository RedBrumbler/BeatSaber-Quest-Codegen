// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Graphic
  class Graphic;
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PreviousColorPanelController
  class PreviousColorPanelController : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.UI.Graphic[] _graphics
    // Offset: 0x18
    ::Array<UnityEngine::UI::Graphic*>* graphics;
    // private UnityEngine.UI.Button _button
    // Offset: 0x20
    UnityEngine::UI::Button* button;
    // private System.Action`1<UnityEngine.Color> colorWasSelectedEvent
    // Offset: 0x28
    System::Action_1<UnityEngine::Color>* colorWasSelectedEvent;
    // static field const value: static private System.Int32 kMaxColors
    static constexpr const int kMaxColors = 2;
    // Get static field: static private System.Int32 kMaxColors
    static int _get_kMaxColors();
    // Set static field: static private System.Int32 kMaxColors
    static void _set_kMaxColors(int value);
    // private HMUI.ButtonBinder _buttonBinder
    // Offset: 0x30
    HMUI::ButtonBinder* buttonBinder;
    // private UnityEngine.Color _color
    // Offset: 0x38
    UnityEngine::Color color;
    // private UnityEngine.Color _graphicsColor
    // Offset: 0x48
    UnityEngine::Color graphicsColor;
    // public System.Void add_colorWasSelectedEvent(System.Action`1<UnityEngine.Color> value)
    // Offset: 0xC09180
    void add_colorWasSelectedEvent(System::Action_1<UnityEngine::Color>* value);
    // public System.Void remove_colorWasSelectedEvent(System.Action`1<UnityEngine.Color> value)
    // Offset: 0xC09224
    void remove_colorWasSelectedEvent(System::Action_1<UnityEngine::Color>* value);
    // protected System.Void Awake()
    // Offset: 0xC092C8
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0xC0938C
    void OnDestroy();
    // public System.Void AddColor(UnityEngine.Color color)
    // Offset: 0xC093A8
    void AddColor(UnityEngine::Color color);
    // private System.Void <Awake>b__9_0()
    // Offset: 0xC094A4
    void $Awake$b__9_0();
    // public System.Void .ctor()
    // Offset: 0xC09460
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PreviousColorPanelController* New_ctor();
  }; // PreviousColorPanelController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PreviousColorPanelController*, "", "PreviousColorPanelController");
#pragma pack(pop)