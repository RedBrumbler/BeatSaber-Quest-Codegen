// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Selectable
  class Selectable;
  // Skipping declaration: Mode because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UI.Navigation
  struct Navigation/*, public System::ValueType, public System::IEquatable_1<UnityEngine::UI::Navigation>*/ {
    public:
    // Nested type: UnityEngine::UI::Navigation::Mode
    struct Mode;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.UI.Navigation/Mode
    // [FlagsAttribute] Offset: FFFFFFFF
    struct Mode/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Mode
      constexpr Mode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.UI.Navigation/Mode None
      static constexpr const int None = 0;
      // Get static field: static public UnityEngine.UI.Navigation/Mode None
      static UnityEngine::UI::Navigation::Mode _get_None();
      // Set static field: static public UnityEngine.UI.Navigation/Mode None
      static void _set_None(UnityEngine::UI::Navigation::Mode value);
      // static field const value: static public UnityEngine.UI.Navigation/Mode Horizontal
      static constexpr const int Horizontal = 1;
      // Get static field: static public UnityEngine.UI.Navigation/Mode Horizontal
      static UnityEngine::UI::Navigation::Mode _get_Horizontal();
      // Set static field: static public UnityEngine.UI.Navigation/Mode Horizontal
      static void _set_Horizontal(UnityEngine::UI::Navigation::Mode value);
      // static field const value: static public UnityEngine.UI.Navigation/Mode Vertical
      static constexpr const int Vertical = 2;
      // Get static field: static public UnityEngine.UI.Navigation/Mode Vertical
      static UnityEngine::UI::Navigation::Mode _get_Vertical();
      // Set static field: static public UnityEngine.UI.Navigation/Mode Vertical
      static void _set_Vertical(UnityEngine::UI::Navigation::Mode value);
      // static field const value: static public UnityEngine.UI.Navigation/Mode Automatic
      static constexpr const int Automatic = 3;
      // Get static field: static public UnityEngine.UI.Navigation/Mode Automatic
      static UnityEngine::UI::Navigation::Mode _get_Automatic();
      // Set static field: static public UnityEngine.UI.Navigation/Mode Automatic
      static void _set_Automatic(UnityEngine::UI::Navigation::Mode value);
      // static field const value: static public UnityEngine.UI.Navigation/Mode Explicit
      static constexpr const int Explicit = 4;
      // Get static field: static public UnityEngine.UI.Navigation/Mode Explicit
      static UnityEngine::UI::Navigation::Mode _get_Explicit();
      // Set static field: static public UnityEngine.UI.Navigation/Mode Explicit
      static void _set_Explicit(UnityEngine::UI::Navigation::Mode value);
    }; // UnityEngine.UI.Navigation/Mode
    #pragma pack(pop)
    static check_size<sizeof(Navigation::Mode), 0 + sizeof(int)> __UnityEngine_UI_Navigation_ModeSizeCheck;
    static_assert(sizeof(Navigation::Mode) == 0x4);
    // private UnityEngine.UI.Navigation/Mode m_Mode
    // Size: 0x4
    // Offset: 0x0
    UnityEngine::UI::Navigation::Mode m_Mode;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Navigation::Mode) == 0x4);
    // Padding between fields: m_Mode and: m_SelectOnUp
    char __padding0[0x4] = {};
    // private UnityEngine.UI.Selectable m_SelectOnUp
    // Size: 0x8
    // Offset: 0x8
    UnityEngine::UI::Selectable* m_SelectOnUp;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Selectable*) == 0x8);
    // private UnityEngine.UI.Selectable m_SelectOnDown
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::UI::Selectable* m_SelectOnDown;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Selectable*) == 0x8);
    // private UnityEngine.UI.Selectable m_SelectOnLeft
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::UI::Selectable* m_SelectOnLeft;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Selectable*) == 0x8);
    // private UnityEngine.UI.Selectable m_SelectOnRight
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::UI::Selectable* m_SelectOnRight;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Selectable*) == 0x8);
    // Creating value type constructor for type: Navigation
    constexpr Navigation(UnityEngine::UI::Navigation::Mode m_Mode_ = {}, UnityEngine::UI::Selectable* m_SelectOnUp_ = {}, UnityEngine::UI::Selectable* m_SelectOnDown_ = {}, UnityEngine::UI::Selectable* m_SelectOnLeft_ = {}, UnityEngine::UI::Selectable* m_SelectOnRight_ = {}) noexcept : m_Mode{m_Mode_}, m_SelectOnUp{m_SelectOnUp_}, m_SelectOnDown{m_SelectOnDown_}, m_SelectOnLeft{m_SelectOnLeft_}, m_SelectOnRight{m_SelectOnRight_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::UI::Navigation>
    operator System::IEquatable_1<UnityEngine::UI::Navigation>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::UI::Navigation>*>(this);
    }
    // public UnityEngine.UI.Navigation/Mode get_mode()
    // Offset: 0xF02648
    UnityEngine::UI::Navigation::Mode get_mode();
    // public System.Void set_mode(UnityEngine.UI.Navigation/Mode value)
    // Offset: 0xF02650
    void set_mode(UnityEngine::UI::Navigation::Mode value);
    // public UnityEngine.UI.Selectable get_selectOnUp()
    // Offset: 0xF02658
    UnityEngine::UI::Selectable* get_selectOnUp();
    // public System.Void set_selectOnUp(UnityEngine.UI.Selectable value)
    // Offset: 0xF02660
    void set_selectOnUp(UnityEngine::UI::Selectable* value);
    // public UnityEngine.UI.Selectable get_selectOnDown()
    // Offset: 0xF02668
    UnityEngine::UI::Selectable* get_selectOnDown();
    // public System.Void set_selectOnDown(UnityEngine.UI.Selectable value)
    // Offset: 0xF02670
    void set_selectOnDown(UnityEngine::UI::Selectable* value);
    // public UnityEngine.UI.Selectable get_selectOnLeft()
    // Offset: 0xF02678
    UnityEngine::UI::Selectable* get_selectOnLeft();
    // public System.Void set_selectOnLeft(UnityEngine.UI.Selectable value)
    // Offset: 0xF02680
    void set_selectOnLeft(UnityEngine::UI::Selectable* value);
    // public UnityEngine.UI.Selectable get_selectOnRight()
    // Offset: 0xF02688
    UnityEngine::UI::Selectable* get_selectOnRight();
    // public System.Void set_selectOnRight(UnityEngine.UI.Selectable value)
    // Offset: 0xF02690
    void set_selectOnRight(UnityEngine::UI::Selectable* value);
    // static public UnityEngine.UI.Navigation get_defaultNavigation()
    // Offset: 0x19AEF20
    static UnityEngine::UI::Navigation get_defaultNavigation();
    // public System.Boolean Equals(UnityEngine.UI.Navigation other)
    // Offset: 0xF02698
    bool Equals(UnityEngine::UI::Navigation other);
  }; // UnityEngine.UI.Navigation
  #pragma pack(pop)
  static check_size<sizeof(Navigation), 32 + sizeof(UnityEngine::UI::Selectable*)> __UnityEngine_UI_NavigationSizeCheck;
  static_assert(sizeof(Navigation) == 0x28);
  // Writing MetadataGetter for method: Navigation::get_mode
  // Il2CppName: get_mode
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Navigation::Mode (Navigation::*)()>(&Navigation::get_mode)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Navigation), "get_mode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Navigation::set_mode
  // Il2CppName: set_mode
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Navigation::*)(UnityEngine::UI::Navigation::Mode)>(&Navigation::set_mode)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Navigation), "set_mode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::UI::Navigation::Mode>()});
    }
  };
  // Writing MetadataGetter for method: Navigation::get_selectOnUp
  // Il2CppName: get_selectOnUp
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Selectable* (Navigation::*)()>(&Navigation::get_selectOnUp)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Navigation), "get_selectOnUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Navigation::set_selectOnUp
  // Il2CppName: set_selectOnUp
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Navigation::*)(UnityEngine::UI::Selectable*)>(&Navigation::set_selectOnUp)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Navigation), "set_selectOnUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::UI::Selectable*>()});
    }
  };
  // Writing MetadataGetter for method: Navigation::get_selectOnDown
  // Il2CppName: get_selectOnDown
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Selectable* (Navigation::*)()>(&Navigation::get_selectOnDown)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Navigation), "get_selectOnDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Navigation::set_selectOnDown
  // Il2CppName: set_selectOnDown
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Navigation::*)(UnityEngine::UI::Selectable*)>(&Navigation::set_selectOnDown)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Navigation), "set_selectOnDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::UI::Selectable*>()});
    }
  };
  // Writing MetadataGetter for method: Navigation::get_selectOnLeft
  // Il2CppName: get_selectOnLeft
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Selectable* (Navigation::*)()>(&Navigation::get_selectOnLeft)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Navigation), "get_selectOnLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Navigation::set_selectOnLeft
  // Il2CppName: set_selectOnLeft
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Navigation::*)(UnityEngine::UI::Selectable*)>(&Navigation::set_selectOnLeft)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Navigation), "set_selectOnLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::UI::Selectable*>()});
    }
  };
  // Writing MetadataGetter for method: Navigation::get_selectOnRight
  // Il2CppName: get_selectOnRight
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Selectable* (Navigation::*)()>(&Navigation::get_selectOnRight)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Navigation), "get_selectOnRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Navigation::set_selectOnRight
  // Il2CppName: set_selectOnRight
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Navigation::*)(UnityEngine::UI::Selectable*)>(&Navigation::set_selectOnRight)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Navigation), "set_selectOnRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::UI::Selectable*>()});
    }
  };
  // Writing MetadataGetter for method: Navigation::get_defaultNavigation
  // Il2CppName: get_defaultNavigation
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Navigation (*)()>(&Navigation::get_defaultNavigation)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Navigation), "get_defaultNavigation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Navigation::Equals
  // Il2CppName: Equals
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Navigation::*)(UnityEngine::UI::Navigation)>(&Navigation::Equals)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Navigation), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::UI::Navigation>()});
    }
  };
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Navigation, "UnityEngine.UI", "Navigation");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Navigation::Mode, "UnityEngine.UI", "Navigation/Mode");
