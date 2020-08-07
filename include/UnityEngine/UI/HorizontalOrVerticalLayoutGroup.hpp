// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.LayoutGroup
#include "UnityEngine/UI/LayoutGroup.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.HorizontalOrVerticalLayoutGroup
  class HorizontalOrVerticalLayoutGroup : public UnityEngine::UI::LayoutGroup {
    public:
    // protected System.Single m_Spacing
    // Offset: 0x58
    float m_Spacing;
    // protected System.Boolean m_ChildForceExpandWidth
    // Offset: 0x5C
    bool m_ChildForceExpandWidth;
    // protected System.Boolean m_ChildForceExpandHeight
    // Offset: 0x5D
    bool m_ChildForceExpandHeight;
    // protected System.Boolean m_ChildControlWidth
    // Offset: 0x5E
    bool m_ChildControlWidth;
    // protected System.Boolean m_ChildControlHeight
    // Offset: 0x5F
    bool m_ChildControlHeight;
    // protected System.Boolean m_ChildScaleWidth
    // Offset: 0x60
    bool m_ChildScaleWidth;
    // protected System.Boolean m_ChildScaleHeight
    // Offset: 0x61
    bool m_ChildScaleHeight;
    // public System.Single get_spacing()
    // Offset: 0x1159780
    float get_spacing();
    // public System.Void set_spacing(System.Single value)
    // Offset: 0x1159788
    void set_spacing(float value);
    // public System.Boolean get_childForceExpandWidth()
    // Offset: 0x11597EC
    bool get_childForceExpandWidth();
    // public System.Void set_childForceExpandWidth(System.Boolean value)
    // Offset: 0x11597F4
    void set_childForceExpandWidth(bool value);
    // public System.Boolean get_childForceExpandHeight()
    // Offset: 0x1159858
    bool get_childForceExpandHeight();
    // public System.Void set_childForceExpandHeight(System.Boolean value)
    // Offset: 0x1159860
    void set_childForceExpandHeight(bool value);
    // public System.Boolean get_childControlWidth()
    // Offset: 0x11598C4
    bool get_childControlWidth();
    // public System.Void set_childControlWidth(System.Boolean value)
    // Offset: 0x11598CC
    void set_childControlWidth(bool value);
    // public System.Boolean get_childControlHeight()
    // Offset: 0x1159930
    bool get_childControlHeight();
    // public System.Void set_childControlHeight(System.Boolean value)
    // Offset: 0x1159938
    void set_childControlHeight(bool value);
    // public System.Boolean get_childScaleWidth()
    // Offset: 0x115999C
    bool get_childScaleWidth();
    // public System.Void set_childScaleWidth(System.Boolean value)
    // Offset: 0x11599A4
    void set_childScaleWidth(bool value);
    // public System.Boolean get_childScaleHeight()
    // Offset: 0x1159A08
    bool get_childScaleHeight();
    // public System.Void set_childScaleHeight(System.Boolean value)
    // Offset: 0x1159A10
    void set_childScaleHeight(bool value);
    // protected System.Void CalcAlongAxis(System.Int32 axis, System.Boolean isVertical)
    // Offset: 0x1158EF8
    void CalcAlongAxis(int axis, bool isVertical);
    // protected System.Void SetChildrenAlongAxis(System.Int32 axis, System.Boolean isVertical)
    // Offset: 0x11591A8
    void SetChildrenAlongAxis(int axis, bool isVertical);
    // private System.Void GetChildSizes(UnityEngine.RectTransform child, System.Int32 axis, System.Boolean controlSize, System.Boolean childForceExpand, System.Single min, System.Single preferred, System.Single flexible)
    // Offset: 0x1159A74
    void GetChildSizes(UnityEngine::RectTransform* child, int axis, bool controlSize, bool childForceExpand, float& min, float& preferred, float& flexible);
    // protected System.Void .ctor()
    // Offset: 0x1158EB8
    // Implemented from: UnityEngine.UI.LayoutGroup
    // Base method: System.Void LayoutGroup::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static HorizontalOrVerticalLayoutGroup* New_ctor();
  }; // UnityEngine.UI.HorizontalOrVerticalLayoutGroup
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::HorizontalOrVerticalLayoutGroup*, "UnityEngine.UI", "HorizontalOrVerticalLayoutGroup");
#pragma pack(pop)