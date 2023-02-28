// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine/EventSystems/UIBehaviour.hpp"
// Including type: UnityEngine.UI.IClipper
#include "UnityEngine/UI/IClipper.hpp"
// Including type: UnityEngine.ICanvasRaycastFilter
#include "UnityEngine/ICanvasRaycastFilter.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: UnityEngine.Vector2Int
#include "UnityEngine/Vector2Int.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: RectangularVertexClipper
  class RectangularVertexClipper;
  // Forward declaring type: MaskableGraphic
  class MaskableGraphic;
  // Forward declaring type: IClippable
  class IClippable;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Canvas
  class Canvas;
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Camera
  class Camera;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Forward declaring type: RectMask2D
  class RectMask2D;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::RectMask2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::RectMask2D*, "UnityEngine.UI", "RectMask2D");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.RectMask2D
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: 10CCC40
  // [ExecuteAlways] Offset: FFFFFFFF
  // [DisallowMultipleComponent] Offset: FFFFFFFF
  // [RequireComponent] Offset: 10CCC40
  class RectMask2D : public ::UnityEngine::EventSystems::UIBehaviour/*, public ::UnityEngine::UI::IClipper, public ::UnityEngine::ICanvasRaycastFilter*/ {
    public:
    public:
    // private readonly UnityEngine.UI.RectangularVertexClipper m_VertexClipper
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UI::RectangularVertexClipper* m_VertexClipper;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::RectangularVertexClipper*) == 0x8);
    // private UnityEngine.RectTransform m_RectTransform
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::RectTransform* m_RectTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // private System.Collections.Generic.HashSet`1<UnityEngine.UI.MaskableGraphic> m_MaskableTargets
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::HashSet_1<::UnityEngine::UI::MaskableGraphic*>* m_MaskableTargets;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<::UnityEngine::UI::MaskableGraphic*>*) == 0x8);
    // private System.Collections.Generic.HashSet`1<UnityEngine.UI.IClippable> m_ClipTargets
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::HashSet_1<::UnityEngine::UI::IClippable*>* m_ClipTargets;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<::UnityEngine::UI::IClippable*>*) == 0x8);
    // private System.Boolean m_ShouldRecalculateClipRects
    // Size: 0x1
    // Offset: 0x38
    bool m_ShouldRecalculateClipRects;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_ShouldRecalculateClipRects and: m_Clippers
    char __padding4[0x7] = {};
    // private System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D> m_Clippers
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::List_1<::UnityEngine::UI::RectMask2D*>* m_Clippers;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::UI::RectMask2D*>*) == 0x8);
    // private UnityEngine.Rect m_LastClipRectCanvasSpace
    // Size: 0x10
    // Offset: 0x48
    ::UnityEngine::Rect m_LastClipRectCanvasSpace;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rect) == 0x10);
    // private System.Boolean m_ForceClip
    // Size: 0x1
    // Offset: 0x58
    bool m_ForceClip;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_ForceClip and: m_Padding
    char __padding7[0x3] = {};
    // private UnityEngine.Vector4 m_Padding
    // Size: 0x10
    // Offset: 0x5C
    ::UnityEngine::Vector4 m_Padding;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    // private UnityEngine.Vector2Int m_Softness
    // Size: 0x8
    // Offset: 0x6C
    ::UnityEngine::Vector2Int m_Softness;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2Int) == 0x8);
    // Padding between fields: m_Softness and: m_Canvas
    char __padding9[0x4] = {};
    // private UnityEngine.Canvas m_Canvas
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::Canvas* m_Canvas;
    // Field size check
    static_assert(sizeof(::UnityEngine::Canvas*) == 0x8);
    // private UnityEngine.Vector3[] m_Corners
    // Size: 0x8
    // Offset: 0x80
    ::ArrayW<::UnityEngine::Vector3> m_Corners;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::UI::IClipper
    operator ::UnityEngine::UI::IClipper() noexcept {
      return *reinterpret_cast<::UnityEngine::UI::IClipper*>(this);
    }
    // Creating interface conversion operator: i_IClipper
    inline ::UnityEngine::UI::IClipper* i_IClipper() noexcept {
      return reinterpret_cast<::UnityEngine::UI::IClipper*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::ICanvasRaycastFilter
    operator ::UnityEngine::ICanvasRaycastFilter() noexcept {
      return *reinterpret_cast<::UnityEngine::ICanvasRaycastFilter*>(this);
    }
    // Creating interface conversion operator: i_ICanvasRaycastFilter
    inline ::UnityEngine::ICanvasRaycastFilter* i_ICanvasRaycastFilter() noexcept {
      return reinterpret_cast<::UnityEngine::ICanvasRaycastFilter*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly UnityEngine.UI.RectangularVertexClipper m_VertexClipper
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::RectangularVertexClipper*& dyn_m_VertexClipper();
    // Get instance field reference: private UnityEngine.RectTransform m_RectTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::RectTransform*& dyn_m_RectTransform();
    // Get instance field reference: private System.Collections.Generic.HashSet`1<UnityEngine.UI.MaskableGraphic> m_MaskableTargets
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::HashSet_1<::UnityEngine::UI::MaskableGraphic*>*& dyn_m_MaskableTargets();
    // Get instance field reference: private System.Collections.Generic.HashSet`1<UnityEngine.UI.IClippable> m_ClipTargets
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::HashSet_1<::UnityEngine::UI::IClippable*>*& dyn_m_ClipTargets();
    // Get instance field reference: private System.Boolean m_ShouldRecalculateClipRects
    [[deprecated("Use field access instead!")]] bool& dyn_m_ShouldRecalculateClipRects();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D> m_Clippers
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::UI::RectMask2D*>*& dyn_m_Clippers();
    // Get instance field reference: private UnityEngine.Rect m_LastClipRectCanvasSpace
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rect& dyn_m_LastClipRectCanvasSpace();
    // Get instance field reference: private System.Boolean m_ForceClip
    [[deprecated("Use field access instead!")]] bool& dyn_m_ForceClip();
    // Get instance field reference: private UnityEngine.Vector4 m_Padding
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector4& dyn_m_Padding();
    // Get instance field reference: private UnityEngine.Vector2Int m_Softness
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2Int& dyn_m_Softness();
    // Get instance field reference: private UnityEngine.Canvas m_Canvas
    [[deprecated("Use field access instead!")]] ::UnityEngine::Canvas*& dyn_m_Canvas();
    // Get instance field reference: private UnityEngine.Vector3[] m_Corners
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn_m_Corners();
    // public UnityEngine.Vector4 get_padding()
    // Offset: 0x1F59154
    ::UnityEngine::Vector4 get_padding();
    // public System.Void set_padding(UnityEngine.Vector4 value)
    // Offset: 0x1F59160
    void set_padding(::UnityEngine::Vector4 value);
    // public UnityEngine.Vector2Int get_softness()
    // Offset: 0x1F5916C
    ::UnityEngine::Vector2Int get_softness();
    // public System.Void set_softness(UnityEngine.Vector2Int value)
    // Offset: 0x1F59174
    void set_softness(::UnityEngine::Vector2Int value);
    // private UnityEngine.Canvas get_Canvas()
    // Offset: 0x1F5924C
    ::UnityEngine::Canvas* get_Canvas();
    // public UnityEngine.Rect get_canvasRect()
    // Offset: 0x1F59384
    ::UnityEngine::Rect get_canvasRect();
    // public UnityEngine.RectTransform get_rectTransform()
    // Offset: 0x1F593D0
    ::UnityEngine::RectTransform* get_rectTransform();
    // private UnityEngine.Rect get_rootCanvasRect()
    // Offset: 0x1F598F8
    ::UnityEngine::Rect get_rootCanvasRect();
    // public System.Boolean IsRaycastLocationValid(UnityEngine.Vector2 sp, UnityEngine.Camera eventCamera)
    // Offset: 0x1F59800
    bool IsRaycastLocationValid(::UnityEngine::Vector2 sp, ::UnityEngine::Camera* eventCamera);
    // public System.Void PerformClipping()
    // Offset: 0x1F59A2C
    void PerformClipping();
    // public System.Void UpdateClipSoftness()
    // Offset: 0x1F5A16C
    void UpdateClipSoftness();
    // public System.Void AddClippable(UnityEngine.UI.IClippable clippable)
    // Offset: 0x1F57A08
    void AddClippable(::UnityEngine::UI::IClippable* clippable);
    // public System.Void RemoveClippable(UnityEngine.UI.IClippable clippable)
    // Offset: 0x1F57880
    void RemoveClippable(::UnityEngine::UI::IClippable* clippable);
    // protected System.Void .ctor()
    // Offset: 0x1F595B8
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RectMask2D* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UI::RectMask2D::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RectMask2D*, creationType>()));
    }
    // protected override System.Void OnEnable()
    // Offset: 0x1F5971C
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x1F59758
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDisable()
    void OnDisable();
    // protected override System.Void OnTransformParentChanged()
    // Offset: 0x1F5A420
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnTransformParentChanged()
    void OnTransformParentChanged();
    // protected override System.Void OnCanvasHierarchyChanged()
    // Offset: 0x1F5A44C
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnCanvasHierarchyChanged()
    void OnCanvasHierarchyChanged();
  }; // UnityEngine.UI.RectMask2D
  #pragma pack(pop)
  static check_size<sizeof(RectMask2D), 128 + sizeof(::ArrayW<::UnityEngine::Vector3>)> __UnityEngine_UI_RectMask2DSizeCheck;
  static_assert(sizeof(RectMask2D) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::RectMask2D::get_padding
// Il2CppName: get_padding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (UnityEngine::UI::RectMask2D::*)()>(&UnityEngine::UI::RectMask2D::get_padding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RectMask2D*), "get_padding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RectMask2D::set_padding
// Il2CppName: set_padding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::RectMask2D::*)(::UnityEngine::Vector4)>(&UnityEngine::UI::RectMask2D::set_padding)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RectMask2D*), "set_padding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RectMask2D::get_softness
// Il2CppName: get_softness
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2Int (UnityEngine::UI::RectMask2D::*)()>(&UnityEngine::UI::RectMask2D::get_softness)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RectMask2D*), "get_softness", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RectMask2D::set_softness
// Il2CppName: set_softness
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::RectMask2D::*)(::UnityEngine::Vector2Int)>(&UnityEngine::UI::RectMask2D::set_softness)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2Int")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RectMask2D*), "set_softness", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RectMask2D::get_Canvas
// Il2CppName: get_Canvas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Canvas* (UnityEngine::UI::RectMask2D::*)()>(&UnityEngine::UI::RectMask2D::get_Canvas)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RectMask2D*), "get_Canvas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RectMask2D::get_canvasRect
// Il2CppName: get_canvasRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (UnityEngine::UI::RectMask2D::*)()>(&UnityEngine::UI::RectMask2D::get_canvasRect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RectMask2D*), "get_canvasRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RectMask2D::get_rectTransform
// Il2CppName: get_rectTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform* (UnityEngine::UI::RectMask2D::*)()>(&UnityEngine::UI::RectMask2D::get_rectTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RectMask2D*), "get_rectTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RectMask2D::get_rootCanvasRect
// Il2CppName: get_rootCanvasRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (UnityEngine::UI::RectMask2D::*)()>(&UnityEngine::UI::RectMask2D::get_rootCanvasRect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RectMask2D*), "get_rootCanvasRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RectMask2D::IsRaycastLocationValid
// Il2CppName: IsRaycastLocationValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::RectMask2D::*)(::UnityEngine::Vector2, ::UnityEngine::Camera*)>(&UnityEngine::UI::RectMask2D::IsRaycastLocationValid)> {
  static const MethodInfo* get() {
    static auto* sp = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* eventCamera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RectMask2D*), "IsRaycastLocationValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sp, eventCamera});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RectMask2D::PerformClipping
// Il2CppName: PerformClipping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::RectMask2D::*)()>(&UnityEngine::UI::RectMask2D::PerformClipping)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RectMask2D*), "PerformClipping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RectMask2D::UpdateClipSoftness
// Il2CppName: UpdateClipSoftness
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::RectMask2D::*)()>(&UnityEngine::UI::RectMask2D::UpdateClipSoftness)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RectMask2D*), "UpdateClipSoftness", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RectMask2D::AddClippable
// Il2CppName: AddClippable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::RectMask2D::*)(::UnityEngine::UI::IClippable*)>(&UnityEngine::UI::RectMask2D::AddClippable)> {
  static const MethodInfo* get() {
    static auto* clippable = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "IClippable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RectMask2D*), "AddClippable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clippable});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RectMask2D::RemoveClippable
// Il2CppName: RemoveClippable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::RectMask2D::*)(::UnityEngine::UI::IClippable*)>(&UnityEngine::UI::RectMask2D::RemoveClippable)> {
  static const MethodInfo* get() {
    static auto* clippable = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "IClippable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RectMask2D*), "RemoveClippable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clippable});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RectMask2D::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UI::RectMask2D::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::RectMask2D::*)()>(&UnityEngine::UI::RectMask2D::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RectMask2D*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RectMask2D::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::RectMask2D::*)()>(&UnityEngine::UI::RectMask2D::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RectMask2D*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RectMask2D::OnTransformParentChanged
// Il2CppName: OnTransformParentChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::RectMask2D::*)()>(&UnityEngine::UI::RectMask2D::OnTransformParentChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RectMask2D*), "OnTransformParentChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RectMask2D::OnCanvasHierarchyChanged
// Il2CppName: OnCanvasHierarchyChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::RectMask2D::*)()>(&UnityEngine::UI::RectMask2D::OnCanvasHierarchyChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RectMask2D*), "OnCanvasHierarchyChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
