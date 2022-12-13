// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.FlowCoordinator
#include "HMUI/FlowCoordinator.hpp"
// Including type: EditAvatarViewController/AvatarEditPart
#include "GlobalNamespace/EditAvatarViewController.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AvatarVisualController
  class AvatarVisualController;
  // Forward declaring type: AvatarTweenController
  class AvatarTweenController;
  // Forward declaring type: EditColorController
  class EditColorController;
  // Forward declaring type: AvatarDataModel
  class AvatarDataModel;
  // Skipping declaration: EditAvatarType because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EditAvatarFlowCoordinator
  class EditAvatarFlowCoordinator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EditAvatarFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EditAvatarFlowCoordinator*, "", "EditAvatarFlowCoordinator");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xF8
  #pragma pack(push, 1)
  // Autogenerated type: EditAvatarFlowCoordinator
  // [TokenAttribute] Offset: FFFFFFFF
  class EditAvatarFlowCoordinator : public ::HMUI::FlowCoordinator {
    public:
    // Nested type: ::GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType
    struct EditAvatarType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: EditAvatarFlowCoordinator/EditAvatarType
    // [TokenAttribute] Offset: FFFFFFFF
    struct EditAvatarType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: EditAvatarType
      constexpr EditAvatarType(int value_ = {}) noexcept : value{value_} {}
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
      // static field const value: static public EditAvatarFlowCoordinator/EditAvatarType Create
      static constexpr const int Create = 0;
      // Get static field: static public EditAvatarFlowCoordinator/EditAvatarType Create
      static ::GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType _get_Create();
      // Set static field: static public EditAvatarFlowCoordinator/EditAvatarType Create
      static void _set_Create(::GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType value);
      // static field const value: static public EditAvatarFlowCoordinator/EditAvatarType Edit
      static constexpr const int Edit = 1;
      // Get static field: static public EditAvatarFlowCoordinator/EditAvatarType Edit
      static ::GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType _get_Edit();
      // Set static field: static public EditAvatarFlowCoordinator/EditAvatarType Edit
      static void _set_Edit(::GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // EditAvatarFlowCoordinator/EditAvatarType
    #pragma pack(pop)
    static check_size<sizeof(EditAvatarFlowCoordinator::EditAvatarType), 0 + sizeof(int)> __GlobalNamespace_EditAvatarFlowCoordinator_EditAvatarTypeSizeCheck;
    static_assert(sizeof(EditAvatarFlowCoordinator::EditAvatarType) == 0x4);
    public:
    // private AvatarVisualController _avatarVisualController
    // Size: 0x8
    // Offset: 0xA8
    ::GlobalNamespace::AvatarVisualController* avatarVisualController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AvatarVisualController*) == 0x8);
    // private AvatarTweenController _avatarTweenController
    // Size: 0x8
    // Offset: 0xB0
    ::GlobalNamespace::AvatarTweenController* avatarTweenController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AvatarTweenController*) == 0x8);
    // private UnityEngine.GameObject _avatarContainerGameObject
    // Size: 0x8
    // Offset: 0xB8
    ::UnityEngine::GameObject* avatarContainerGameObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // [InjectAttribute] Offset: 0x1127EE0
    // private readonly EditAvatarViewController _editAvatarViewController
    // Size: 0x8
    // Offset: 0xC0
    ::GlobalNamespace::EditAvatarViewController* editAvatarViewController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EditAvatarViewController*) == 0x8);
    // [InjectAttribute] Offset: 0x1127EF0
    // private readonly EditColorController _editColorViewController
    // Size: 0x8
    // Offset: 0xC8
    ::GlobalNamespace::EditColorController* editColorViewController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EditColorController*) == 0x8);
    // [InjectAttribute] Offset: 0x1127F00
    // private readonly AvatarDataModel _avatarDataModel
    // Size: 0x8
    // Offset: 0xD0
    ::GlobalNamespace::AvatarDataModel* avatarDataModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AvatarDataModel*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<EditAvatarViewController/AvatarEditPart,System.Action> _parameterChangedAnimationCallbacks
    // Size: 0x8
    // Offset: 0xD8
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EditAvatarViewController::AvatarEditPart, ::System::Action*>* parameterChangedAnimationCallbacks;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EditAvatarViewController::AvatarEditPart, ::System::Action*>*) == 0x8);
    // private EditAvatarFlowCoordinator/EditAvatarType _editAvatarType
    // Size: 0x4
    // Offset: 0xE0
    ::GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType editAvatarType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType) == 0x4);
    // Padding between fields: editAvatarType and: didFinishEvent
    char __padding7[0x4] = {};
    // private System.Action`2<EditAvatarFlowCoordinator,EditAvatarFlowCoordinator/EditAvatarType> didFinishEvent
    // Size: 0x8
    // Offset: 0xE8
    ::System::Action_2<::GlobalNamespace::EditAvatarFlowCoordinator*, ::GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType>* didFinishEvent;
    // Field size check
    static_assert(sizeof(::System::Action_2<::GlobalNamespace::EditAvatarFlowCoordinator*, ::GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType>*) == 0x8);
    // private System.Action`1<EditAvatarFlowCoordinator/EditAvatarType> wasSetupEvent
    // Size: 0x8
    // Offset: 0xF0
    ::System::Action_1<::GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType>* wasSetupEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType>*) == 0x8);
    public:
    // Get instance field reference: private AvatarVisualController _avatarVisualController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AvatarVisualController*& dyn__avatarVisualController();
    // Get instance field reference: private AvatarTweenController _avatarTweenController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AvatarTweenController*& dyn__avatarTweenController();
    // Get instance field reference: private UnityEngine.GameObject _avatarContainerGameObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__avatarContainerGameObject();
    // Get instance field reference: private readonly EditAvatarViewController _editAvatarViewController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EditAvatarViewController*& dyn__editAvatarViewController();
    // Get instance field reference: private readonly EditColorController _editColorViewController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EditColorController*& dyn__editColorViewController();
    // Get instance field reference: private readonly AvatarDataModel _avatarDataModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AvatarDataModel*& dyn__avatarDataModel();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<EditAvatarViewController/AvatarEditPart,System.Action> _parameterChangedAnimationCallbacks
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EditAvatarViewController::AvatarEditPart, ::System::Action*>*& dyn__parameterChangedAnimationCallbacks();
    // Get instance field reference: private EditAvatarFlowCoordinator/EditAvatarType _editAvatarType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType& dyn__editAvatarType();
    // Get instance field reference: private System.Action`2<EditAvatarFlowCoordinator,EditAvatarFlowCoordinator/EditAvatarType> didFinishEvent
    [[deprecated("Use field access instead!")]] ::System::Action_2<::GlobalNamespace::EditAvatarFlowCoordinator*, ::GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType>*& dyn_didFinishEvent();
    // Get instance field reference: private System.Action`1<EditAvatarFlowCoordinator/EditAvatarType> wasSetupEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType>*& dyn_wasSetupEvent();
    // public System.Void add_didFinishEvent(System.Action`2<EditAvatarFlowCoordinator,EditAvatarFlowCoordinator/EditAvatarType> value)
    // Offset: 0x144AE74
    void add_didFinishEvent(::System::Action_2<::GlobalNamespace::EditAvatarFlowCoordinator*, ::GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType>* value);
    // public System.Void remove_didFinishEvent(System.Action`2<EditAvatarFlowCoordinator,EditAvatarFlowCoordinator/EditAvatarType> value)
    // Offset: 0x144AF18
    void remove_didFinishEvent(::System::Action_2<::GlobalNamespace::EditAvatarFlowCoordinator*, ::GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType>* value);
    // public System.Void add_wasSetupEvent(System.Action`1<EditAvatarFlowCoordinator/EditAvatarType> value)
    // Offset: 0x144A448
    void add_wasSetupEvent(::System::Action_1<::GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType>* value);
    // public System.Void remove_wasSetupEvent(System.Action`1<EditAvatarFlowCoordinator/EditAvatarType> value)
    // Offset: 0x144A7CC
    void remove_wasSetupEvent(::System::Action_1<::GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType>* value);
    // public System.Void .ctor()
    // Offset: 0x144BB98
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EditAvatarFlowCoordinator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EditAvatarFlowCoordinator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EditAvatarFlowCoordinator*, creationType>()));
    }
    // public System.Void Setup(EditAvatarFlowCoordinator/EditAvatarType editAvatarType)
    // Offset: 0x144AFBC
    void Setup(::GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType editAvatarType);
    // private System.Void HandleEditAvatarViewControllerDidRequestColorChange(System.Action`1<UnityEngine.Color> colorCallback, UnityEngine.Color currentColor, EditAvatarViewController/AvatarEditPart editPart, System.Int32 uvSegment)
    // Offset: 0x144B954
    void HandleEditAvatarViewControllerDidRequestColorChange(::System::Action_1<::UnityEngine::Color>* colorCallback, ::UnityEngine::Color currentColor, ::GlobalNamespace::EditAvatarViewController::AvatarEditPart editPart, int uvSegment);
    // private System.Void HandleEditAvatarViewControllerChangedAvatarPart(EditAvatarViewController/AvatarEditPart avatarPart)
    // Offset: 0x144B9D4
    void HandleEditAvatarViewControllerChangedAvatarPart(::GlobalNamespace::EditAvatarViewController::AvatarEditPart avatarPart);
    // private System.Void HandleEditAvatarViewControllerDidFinished(EditAvatarViewController/FinishAction _)
    // Offset: 0x144BA74
    void HandleEditAvatarViewControllerDidFinished(::GlobalNamespace::EditAvatarViewController::FinishAction _);
    // private System.Void HandleEditColorViewControllerDidChangedColor(UnityEngine.Color color)
    // Offset: 0x144BADC
    void HandleEditColorViewControllerDidChangedColor(::UnityEngine::Color color);
    // private System.Void HandleEditColorViewControllerDidFinish(System.Boolean apply)
    // Offset: 0x144BB08
    void HandleEditColorViewControllerDidFinish(bool apply);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x144B0D4
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x144B63C
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
  }; // EditAvatarFlowCoordinator
  #pragma pack(pop)
  static check_size<sizeof(EditAvatarFlowCoordinator), 240 + sizeof(::System::Action_1<::GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType>*)> __GlobalNamespace_EditAvatarFlowCoordinatorSizeCheck;
  static_assert(sizeof(EditAvatarFlowCoordinator) == 0xF8);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType, "", "EditAvatarFlowCoordinator/EditAvatarType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EditAvatarFlowCoordinator::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditAvatarFlowCoordinator::*)(::System::Action_2<::GlobalNamespace::EditAvatarFlowCoordinator*, ::GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType>*)>(&GlobalNamespace::EditAvatarFlowCoordinator::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "EditAvatarFlowCoordinator"), ::il2cpp_utils::GetClassFromName("", "EditAvatarFlowCoordinator/EditAvatarType")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditAvatarFlowCoordinator*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditAvatarFlowCoordinator::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditAvatarFlowCoordinator::*)(::System::Action_2<::GlobalNamespace::EditAvatarFlowCoordinator*, ::GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType>*)>(&GlobalNamespace::EditAvatarFlowCoordinator::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "EditAvatarFlowCoordinator"), ::il2cpp_utils::GetClassFromName("", "EditAvatarFlowCoordinator/EditAvatarType")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditAvatarFlowCoordinator*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditAvatarFlowCoordinator::add_wasSetupEvent
// Il2CppName: add_wasSetupEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditAvatarFlowCoordinator::*)(::System::Action_1<::GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType>*)>(&GlobalNamespace::EditAvatarFlowCoordinator::add_wasSetupEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "EditAvatarFlowCoordinator/EditAvatarType")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditAvatarFlowCoordinator*), "add_wasSetupEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditAvatarFlowCoordinator::remove_wasSetupEvent
// Il2CppName: remove_wasSetupEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditAvatarFlowCoordinator::*)(::System::Action_1<::GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType>*)>(&GlobalNamespace::EditAvatarFlowCoordinator::remove_wasSetupEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "EditAvatarFlowCoordinator/EditAvatarType")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditAvatarFlowCoordinator*), "remove_wasSetupEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditAvatarFlowCoordinator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EditAvatarFlowCoordinator::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditAvatarFlowCoordinator::*)(::GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType)>(&GlobalNamespace::EditAvatarFlowCoordinator::Setup)> {
  static const MethodInfo* get() {
    static auto* editAvatarType = &::il2cpp_utils::GetClassFromName("", "EditAvatarFlowCoordinator/EditAvatarType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditAvatarFlowCoordinator*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{editAvatarType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditAvatarFlowCoordinator::HandleEditAvatarViewControllerDidRequestColorChange
// Il2CppName: HandleEditAvatarViewControllerDidRequestColorChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditAvatarFlowCoordinator::*)(::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::GlobalNamespace::EditAvatarViewController::AvatarEditPart, int)>(&GlobalNamespace::EditAvatarFlowCoordinator::HandleEditAvatarViewControllerDidRequestColorChange)> {
  static const MethodInfo* get() {
    static auto* colorCallback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Color")})->byval_arg;
    static auto* currentColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* editPart = &::il2cpp_utils::GetClassFromName("", "EditAvatarViewController/AvatarEditPart")->byval_arg;
    static auto* uvSegment = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditAvatarFlowCoordinator*), "HandleEditAvatarViewControllerDidRequestColorChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colorCallback, currentColor, editPart, uvSegment});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditAvatarFlowCoordinator::HandleEditAvatarViewControllerChangedAvatarPart
// Il2CppName: HandleEditAvatarViewControllerChangedAvatarPart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditAvatarFlowCoordinator::*)(::GlobalNamespace::EditAvatarViewController::AvatarEditPart)>(&GlobalNamespace::EditAvatarFlowCoordinator::HandleEditAvatarViewControllerChangedAvatarPart)> {
  static const MethodInfo* get() {
    static auto* avatarPart = &::il2cpp_utils::GetClassFromName("", "EditAvatarViewController/AvatarEditPart")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditAvatarFlowCoordinator*), "HandleEditAvatarViewControllerChangedAvatarPart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{avatarPart});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditAvatarFlowCoordinator::HandleEditAvatarViewControllerDidFinished
// Il2CppName: HandleEditAvatarViewControllerDidFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditAvatarFlowCoordinator::*)(::GlobalNamespace::EditAvatarViewController::FinishAction)>(&GlobalNamespace::EditAvatarFlowCoordinator::HandleEditAvatarViewControllerDidFinished)> {
  static const MethodInfo* get() {
    static auto* _ = &::il2cpp_utils::GetClassFromName("", "EditAvatarViewController/FinishAction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditAvatarFlowCoordinator*), "HandleEditAvatarViewControllerDidFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditAvatarFlowCoordinator::HandleEditColorViewControllerDidChangedColor
// Il2CppName: HandleEditColorViewControllerDidChangedColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditAvatarFlowCoordinator::*)(::UnityEngine::Color)>(&GlobalNamespace::EditAvatarFlowCoordinator::HandleEditColorViewControllerDidChangedColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditAvatarFlowCoordinator*), "HandleEditColorViewControllerDidChangedColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditAvatarFlowCoordinator::HandleEditColorViewControllerDidFinish
// Il2CppName: HandleEditColorViewControllerDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditAvatarFlowCoordinator::*)(bool)>(&GlobalNamespace::EditAvatarFlowCoordinator::HandleEditColorViewControllerDidFinish)> {
  static const MethodInfo* get() {
    static auto* apply = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditAvatarFlowCoordinator*), "HandleEditColorViewControllerDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{apply});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditAvatarFlowCoordinator::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditAvatarFlowCoordinator::*)(bool, bool, bool)>(&GlobalNamespace::EditAvatarFlowCoordinator::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditAvatarFlowCoordinator*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditAvatarFlowCoordinator::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditAvatarFlowCoordinator::*)(bool, bool)>(&GlobalNamespace::EditAvatarFlowCoordinator::DidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditAvatarFlowCoordinator*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
