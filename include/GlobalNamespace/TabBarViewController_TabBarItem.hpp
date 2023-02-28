// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TabBarViewController
#include "GlobalNamespace/TabBarViewController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TabBarViewController::TabBarItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TabBarViewController::TabBarItem*, "", "TabBarViewController/TabBarItem");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: TabBarViewController/TabBarItem
  // [TokenAttribute] Offset: FFFFFFFF
  class TabBarViewController::TabBarItem : public ::Il2CppObject {
    public:
    public:
    // public readonly System.String title
    // Size: 0x8
    // Offset: 0x10
    ::StringW title;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.Action action
    // Size: 0x8
    // Offset: 0x18
    ::System::Action* action;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    public:
    // Get instance field reference: public readonly System.String title
    [[deprecated("Use field access instead!")]] ::StringW& dyn_title();
    // Get instance field reference: public readonly System.Action action
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_action();
    // public System.Void .ctor(System.String title, System.Action action)
    // Offset: 0x139C3EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TabBarViewController::TabBarItem* New_ctor(::StringW title, ::System::Action* action) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TabBarViewController::TabBarItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TabBarViewController::TabBarItem*, creationType>(title, action)));
    }
  }; // TabBarViewController/TabBarItem
  #pragma pack(pop)
  static check_size<sizeof(TabBarViewController::TabBarItem), 24 + sizeof(::System::Action*)> __GlobalNamespace_TabBarViewController_TabBarItemSizeCheck;
  static_assert(sizeof(TabBarViewController::TabBarItem) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TabBarViewController::TabBarItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
