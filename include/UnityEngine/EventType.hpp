// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: EventType
  struct EventType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventType, "UnityEngine", "EventType");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventType
  // [TokenAttribute] Offset: FFFFFFFF
  struct EventType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EventType
    constexpr EventType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating interface conversion operator: i_Enum
    inline ::System::Enum* i_Enum() noexcept {
      return reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.EventType MouseDown
    static constexpr const int MouseDown = 0;
    // Get static field: static public UnityEngine.EventType MouseDown
    static ::UnityEngine::EventType _get_MouseDown();
    // Set static field: static public UnityEngine.EventType MouseDown
    static void _set_MouseDown(::UnityEngine::EventType value);
    // static field const value: static public UnityEngine.EventType MouseUp
    static constexpr const int MouseUp = 1;
    // Get static field: static public UnityEngine.EventType MouseUp
    static ::UnityEngine::EventType _get_MouseUp();
    // Set static field: static public UnityEngine.EventType MouseUp
    static void _set_MouseUp(::UnityEngine::EventType value);
    // static field const value: static public UnityEngine.EventType MouseMove
    static constexpr const int MouseMove = 2;
    // Get static field: static public UnityEngine.EventType MouseMove
    static ::UnityEngine::EventType _get_MouseMove();
    // Set static field: static public UnityEngine.EventType MouseMove
    static void _set_MouseMove(::UnityEngine::EventType value);
    // static field const value: static public UnityEngine.EventType MouseDrag
    static constexpr const int MouseDrag = 3;
    // Get static field: static public UnityEngine.EventType MouseDrag
    static ::UnityEngine::EventType _get_MouseDrag();
    // Set static field: static public UnityEngine.EventType MouseDrag
    static void _set_MouseDrag(::UnityEngine::EventType value);
    // static field const value: static public UnityEngine.EventType KeyDown
    static constexpr const int KeyDown = 4;
    // Get static field: static public UnityEngine.EventType KeyDown
    static ::UnityEngine::EventType _get_KeyDown();
    // Set static field: static public UnityEngine.EventType KeyDown
    static void _set_KeyDown(::UnityEngine::EventType value);
    // static field const value: static public UnityEngine.EventType KeyUp
    static constexpr const int KeyUp = 5;
    // Get static field: static public UnityEngine.EventType KeyUp
    static ::UnityEngine::EventType _get_KeyUp();
    // Set static field: static public UnityEngine.EventType KeyUp
    static void _set_KeyUp(::UnityEngine::EventType value);
    // static field const value: static public UnityEngine.EventType ScrollWheel
    static constexpr const int ScrollWheel = 6;
    // Get static field: static public UnityEngine.EventType ScrollWheel
    static ::UnityEngine::EventType _get_ScrollWheel();
    // Set static field: static public UnityEngine.EventType ScrollWheel
    static void _set_ScrollWheel(::UnityEngine::EventType value);
    // static field const value: static public UnityEngine.EventType Repaint
    static constexpr const int Repaint = 7;
    // Get static field: static public UnityEngine.EventType Repaint
    static ::UnityEngine::EventType _get_Repaint();
    // Set static field: static public UnityEngine.EventType Repaint
    static void _set_Repaint(::UnityEngine::EventType value);
    // static field const value: static public UnityEngine.EventType Layout
    static constexpr const int Layout = 8;
    // Get static field: static public UnityEngine.EventType Layout
    static ::UnityEngine::EventType _get_Layout();
    // Set static field: static public UnityEngine.EventType Layout
    static void _set_Layout(::UnityEngine::EventType value);
    // static field const value: static public UnityEngine.EventType DragUpdated
    static constexpr const int DragUpdated = 9;
    // Get static field: static public UnityEngine.EventType DragUpdated
    static ::UnityEngine::EventType _get_DragUpdated();
    // Set static field: static public UnityEngine.EventType DragUpdated
    static void _set_DragUpdated(::UnityEngine::EventType value);
    // static field const value: static public UnityEngine.EventType DragPerform
    static constexpr const int DragPerform = 10;
    // Get static field: static public UnityEngine.EventType DragPerform
    static ::UnityEngine::EventType _get_DragPerform();
    // Set static field: static public UnityEngine.EventType DragPerform
    static void _set_DragPerform(::UnityEngine::EventType value);
    // static field const value: static public UnityEngine.EventType DragExited
    static constexpr const int DragExited = 15;
    // Get static field: static public UnityEngine.EventType DragExited
    static ::UnityEngine::EventType _get_DragExited();
    // Set static field: static public UnityEngine.EventType DragExited
    static void _set_DragExited(::UnityEngine::EventType value);
    // static field const value: static public UnityEngine.EventType Ignore
    static constexpr const int Ignore = 11;
    // Get static field: static public UnityEngine.EventType Ignore
    static ::UnityEngine::EventType _get_Ignore();
    // Set static field: static public UnityEngine.EventType Ignore
    static void _set_Ignore(::UnityEngine::EventType value);
    // static field const value: static public UnityEngine.EventType Used
    static constexpr const int Used = 12;
    // Get static field: static public UnityEngine.EventType Used
    static ::UnityEngine::EventType _get_Used();
    // Set static field: static public UnityEngine.EventType Used
    static void _set_Used(::UnityEngine::EventType value);
    // static field const value: static public UnityEngine.EventType ValidateCommand
    static constexpr const int ValidateCommand = 13;
    // Get static field: static public UnityEngine.EventType ValidateCommand
    static ::UnityEngine::EventType _get_ValidateCommand();
    // Set static field: static public UnityEngine.EventType ValidateCommand
    static void _set_ValidateCommand(::UnityEngine::EventType value);
    // static field const value: static public UnityEngine.EventType ExecuteCommand
    static constexpr const int ExecuteCommand = 14;
    // Get static field: static public UnityEngine.EventType ExecuteCommand
    static ::UnityEngine::EventType _get_ExecuteCommand();
    // Set static field: static public UnityEngine.EventType ExecuteCommand
    static void _set_ExecuteCommand(::UnityEngine::EventType value);
    // static field const value: static public UnityEngine.EventType ContextClick
    static constexpr const int ContextClick = 16;
    // Get static field: static public UnityEngine.EventType ContextClick
    static ::UnityEngine::EventType _get_ContextClick();
    // Set static field: static public UnityEngine.EventType ContextClick
    static void _set_ContextClick(::UnityEngine::EventType value);
    // static field const value: static public UnityEngine.EventType MouseEnterWindow
    static constexpr const int MouseEnterWindow = 20;
    // Get static field: static public UnityEngine.EventType MouseEnterWindow
    static ::UnityEngine::EventType _get_MouseEnterWindow();
    // Set static field: static public UnityEngine.EventType MouseEnterWindow
    static void _set_MouseEnterWindow(::UnityEngine::EventType value);
    // static field const value: static public UnityEngine.EventType MouseLeaveWindow
    static constexpr const int MouseLeaveWindow = 21;
    // Get static field: static public UnityEngine.EventType MouseLeaveWindow
    static ::UnityEngine::EventType _get_MouseLeaveWindow();
    // Set static field: static public UnityEngine.EventType MouseLeaveWindow
    static void _set_MouseLeaveWindow(::UnityEngine::EventType value);
    // [EditorBrowsableAttribute] Offset: 0x10B1CC8
    // [ObsoleteAttribute] Offset: 0x10B1CC8
    // static field const value: static public UnityEngine.EventType mouseDown
    static constexpr const int mouseDown = 0;
    // Get static field: static public UnityEngine.EventType mouseDown
    static ::UnityEngine::EventType _get_mouseDown();
    // Set static field: static public UnityEngine.EventType mouseDown
    static void _set_mouseDown(::UnityEngine::EventType value);
    // [EditorBrowsableAttribute] Offset: 0x10B1D1C
    // [ObsoleteAttribute] Offset: 0x10B1D1C
    // static field const value: static public UnityEngine.EventType mouseUp
    static constexpr const int mouseUp = 1;
    // Get static field: static public UnityEngine.EventType mouseUp
    static ::UnityEngine::EventType _get_mouseUp();
    // Set static field: static public UnityEngine.EventType mouseUp
    static void _set_mouseUp(::UnityEngine::EventType value);
    // [ObsoleteAttribute] Offset: 0x10B1D70
    // [EditorBrowsableAttribute] Offset: 0x10B1D70
    // static field const value: static public UnityEngine.EventType mouseMove
    static constexpr const int mouseMove = 2;
    // Get static field: static public UnityEngine.EventType mouseMove
    static ::UnityEngine::EventType _get_mouseMove();
    // Set static field: static public UnityEngine.EventType mouseMove
    static void _set_mouseMove(::UnityEngine::EventType value);
    // [ObsoleteAttribute] Offset: 0x10B1DC4
    // [EditorBrowsableAttribute] Offset: 0x10B1DC4
    // static field const value: static public UnityEngine.EventType mouseDrag
    static constexpr const int mouseDrag = 3;
    // Get static field: static public UnityEngine.EventType mouseDrag
    static ::UnityEngine::EventType _get_mouseDrag();
    // Set static field: static public UnityEngine.EventType mouseDrag
    static void _set_mouseDrag(::UnityEngine::EventType value);
    // [ObsoleteAttribute] Offset: 0x10B1E18
    // [EditorBrowsableAttribute] Offset: 0x10B1E18
    // static field const value: static public UnityEngine.EventType keyDown
    static constexpr const int keyDown = 4;
    // Get static field: static public UnityEngine.EventType keyDown
    static ::UnityEngine::EventType _get_keyDown();
    // Set static field: static public UnityEngine.EventType keyDown
    static void _set_keyDown(::UnityEngine::EventType value);
    // [ObsoleteAttribute] Offset: 0x10B1E6C
    // [EditorBrowsableAttribute] Offset: 0x10B1E6C
    // static field const value: static public UnityEngine.EventType keyUp
    static constexpr const int keyUp = 5;
    // Get static field: static public UnityEngine.EventType keyUp
    static ::UnityEngine::EventType _get_keyUp();
    // Set static field: static public UnityEngine.EventType keyUp
    static void _set_keyUp(::UnityEngine::EventType value);
    // [ObsoleteAttribute] Offset: 0x10B1EC0
    // [EditorBrowsableAttribute] Offset: 0x10B1EC0
    // static field const value: static public UnityEngine.EventType scrollWheel
    static constexpr const int scrollWheel = 6;
    // Get static field: static public UnityEngine.EventType scrollWheel
    static ::UnityEngine::EventType _get_scrollWheel();
    // Set static field: static public UnityEngine.EventType scrollWheel
    static void _set_scrollWheel(::UnityEngine::EventType value);
    // [EditorBrowsableAttribute] Offset: 0x10B1F14
    // [ObsoleteAttribute] Offset: 0x10B1F14
    // static field const value: static public UnityEngine.EventType repaint
    static constexpr const int repaint = 7;
    // Get static field: static public UnityEngine.EventType repaint
    static ::UnityEngine::EventType _get_repaint();
    // Set static field: static public UnityEngine.EventType repaint
    static void _set_repaint(::UnityEngine::EventType value);
    // [EditorBrowsableAttribute] Offset: 0x10B1F68
    // [ObsoleteAttribute] Offset: 0x10B1F68
    // static field const value: static public UnityEngine.EventType layout
    static constexpr const int layout = 8;
    // Get static field: static public UnityEngine.EventType layout
    static ::UnityEngine::EventType _get_layout();
    // Set static field: static public UnityEngine.EventType layout
    static void _set_layout(::UnityEngine::EventType value);
    // [EditorBrowsableAttribute] Offset: 0x10B1FBC
    // [ObsoleteAttribute] Offset: 0x10B1FBC
    // static field const value: static public UnityEngine.EventType dragUpdated
    static constexpr const int dragUpdated = 9;
    // Get static field: static public UnityEngine.EventType dragUpdated
    static ::UnityEngine::EventType _get_dragUpdated();
    // Set static field: static public UnityEngine.EventType dragUpdated
    static void _set_dragUpdated(::UnityEngine::EventType value);
    // [ObsoleteAttribute] Offset: 0x10B2010
    // [EditorBrowsableAttribute] Offset: 0x10B2010
    // static field const value: static public UnityEngine.EventType dragPerform
    static constexpr const int dragPerform = 10;
    // Get static field: static public UnityEngine.EventType dragPerform
    static ::UnityEngine::EventType _get_dragPerform();
    // Set static field: static public UnityEngine.EventType dragPerform
    static void _set_dragPerform(::UnityEngine::EventType value);
    // [EditorBrowsableAttribute] Offset: 0x10B2064
    // [ObsoleteAttribute] Offset: 0x10B2064
    // static field const value: static public UnityEngine.EventType ignore
    static constexpr const int ignore = 11;
    // Get static field: static public UnityEngine.EventType ignore
    static ::UnityEngine::EventType _get_ignore();
    // Set static field: static public UnityEngine.EventType ignore
    static void _set_ignore(::UnityEngine::EventType value);
    // [EditorBrowsableAttribute] Offset: 0x10B20B8
    // [ObsoleteAttribute] Offset: 0x10B20B8
    // static field const value: static public UnityEngine.EventType used
    static constexpr const int used = 12;
    // Get static field: static public UnityEngine.EventType used
    static ::UnityEngine::EventType _get_used();
    // Set static field: static public UnityEngine.EventType used
    static void _set_used(::UnityEngine::EventType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.EventType
  #pragma pack(pop)
  static check_size<sizeof(EventType), 0 + sizeof(int)> __UnityEngine_EventTypeSizeCheck;
  static_assert(sizeof(EventType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
