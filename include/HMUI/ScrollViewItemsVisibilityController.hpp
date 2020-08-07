// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ScrollViewItemForVisibilityController
  class ScrollViewItemForVisibilityController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Tuple`2<T1, T2>
  template<typename T1, typename T2>
  class Tuple_2;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.ScrollViewItemsVisibilityController
  class ScrollViewItemsVisibilityController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: HMUI::ScrollViewItemsVisibilityController::$$c
    class $$c;
    // private UnityEngine.RectTransform _viewport
    // Offset: 0x18
    UnityEngine::RectTransform* viewport;
    // private UnityEngine.RectTransform _contentRectTransform
    // Offset: 0x20
    UnityEngine::RectTransform* contentRectTransform;
    // private HMUI.ScrollViewItemForVisibilityController[] _items
    // Offset: 0x28
    ::Array<HMUI::ScrollViewItemForVisibilityController*>* items;
    // private System.Single _lastContentAnchoredPositionY
    // Offset: 0x30
    float lastContentAnchoredPositionY;
    // private UnityEngine.Vector3[] _viewportWorldCorners
    // Offset: 0x38
    ::Array<UnityEngine::Vector3>* viewportWorldCorners;
    // private System.Tuple`2<HMUI.ScrollViewItemForVisibilityController,System.Single>[] _upperItemsCornes
    // Offset: 0x40
    ::Array<System::Tuple_2<HMUI::ScrollViewItemForVisibilityController*, float>*>* upperItemsCornes;
    // private System.Tuple`2<HMUI.ScrollViewItemForVisibilityController,System.Single>[] _lowerItemsCornes
    // Offset: 0x48
    ::Array<System::Tuple_2<HMUI::ScrollViewItemForVisibilityController*, float>*>* lowerItemsCornes;
    // private System.Int32 _lowerLastVisibleIndex
    // Offset: 0x50
    int lowerLastVisibleIndex;
    // private System.Int32 _upperLastVisibleIndex
    // Offset: 0x54
    int upperLastVisibleIndex;
    // private System.Single _contentMaxY
    // Offset: 0x58
    float contentMaxY;
    // private System.Single _contentMinY
    // Offset: 0x5C
    float contentMinY;
    // protected System.Void Start()
    // Offset: 0x10CC6D0
    void Start();
    // protected System.Void Update()
    // Offset: 0x10CCDE0
    void Update();
    // private System.Void UpdateVisibilityUpDirection(System.Single newContentAnchoredPositionY)
    // Offset: 0x10CCC28
    void UpdateVisibilityUpDirection(float newContentAnchoredPositionY);
    // private System.Void UpdateVisibilityDownDirection(System.Single newContentAnchoredPositionY)
    // Offset: 0x10CCED0
    void UpdateVisibilityDownDirection(float newContentAnchoredPositionY);
    // public System.Void .ctor()
    // Offset: 0x10CD074
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ScrollViewItemsVisibilityController* New_ctor();
  }; // HMUI.ScrollViewItemsVisibilityController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::ScrollViewItemsVisibilityController*, "HMUI", "ScrollViewItemsVisibilityController");
#pragma pack(pop)