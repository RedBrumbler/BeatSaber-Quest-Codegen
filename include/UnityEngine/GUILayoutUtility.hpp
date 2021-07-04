// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GUIStyle
  class GUIStyle;
  // Forward declaring type: GUILayoutOption
  class GUILayoutOption;
  // Forward declaring type: GUILayoutGroup
  class GUILayoutGroup;
  // Forward declaring type: GUIContent
  class GUIContent;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.GUILayoutUtility
  // [NativeHeaderAttribute] Offset: DAD940
  class GUILayoutUtility : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::GUILayoutUtility::LayoutCache
    class LayoutCache;
    // Creating value type constructor for type: GUILayoutUtility
    GUILayoutUtility() noexcept {}
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache> s_StoredLayouts
    static System::Collections::Generic::Dictionary_2<int, UnityEngine::GUILayoutUtility::LayoutCache*>* _get_s_StoredLayouts();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache> s_StoredLayouts
    static void _set_s_StoredLayouts(System::Collections::Generic::Dictionary_2<int, UnityEngine::GUILayoutUtility::LayoutCache*>* value);
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache> s_StoredWindows
    static System::Collections::Generic::Dictionary_2<int, UnityEngine::GUILayoutUtility::LayoutCache*>* _get_s_StoredWindows();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache> s_StoredWindows
    static void _set_s_StoredWindows(System::Collections::Generic::Dictionary_2<int, UnityEngine::GUILayoutUtility::LayoutCache*>* value);
    // Get static field: static UnityEngine.GUILayoutUtility/LayoutCache current
    static UnityEngine::GUILayoutUtility::LayoutCache* _get_current();
    // Set static field: static UnityEngine.GUILayoutUtility/LayoutCache current
    static void _set_current(UnityEngine::GUILayoutUtility::LayoutCache* value);
    // Get static field: static readonly UnityEngine.Rect kDummyRect
    static UnityEngine::Rect _get_kDummyRect();
    // Set static field: static readonly UnityEngine.Rect kDummyRect
    static void _set_kDummyRect(UnityEngine::Rect value);
    // Get static field: static private UnityEngine.GUIStyle s_SpaceStyle
    static UnityEngine::GUIStyle* _get_s_SpaceStyle();
    // Set static field: static private UnityEngine.GUIStyle s_SpaceStyle
    static void _set_s_SpaceStyle(UnityEngine::GUIStyle* value);
    // static private UnityEngine.Rect Internal_GetWindowRect(System.Int32 windowID)
    // Offset: 0x1A92830
    static UnityEngine::Rect Internal_GetWindowRect(int windowID);
    // static private System.Void Internal_MoveWindow(System.Int32 windowID, UnityEngine.Rect r)
    // Offset: 0x1A92920
    static void Internal_MoveWindow(int windowID, UnityEngine::Rect r);
    // static UnityEngine.GUILayoutUtility/LayoutCache SelectIDList(System.Int32 instanceID, System.Boolean isWindow)
    // Offset: 0x1A8B638
    static UnityEngine::GUILayoutUtility::LayoutCache* SelectIDList(int instanceID, bool isWindow);
    // static System.Void Begin(System.Int32 instanceID)
    // Offset: 0x1A92ACC
    static void Begin(int instanceID);
    // static System.Void BeginWindow(System.Int32 windowID, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1A8B8C8
    static void BeginWindow(int windowID, UnityEngine::GUIStyle* style, ::Array<UnityEngine::GUILayoutOption*>* options);
    // static System.Void Layout()
    // Offset: 0x1A8BDF8
    static void Layout();
    // static System.Void LayoutFromEditorWindow()
    // Offset: 0x1A930CC
    static void LayoutFromEditorWindow();
    // static System.Void LayoutFreeGroup(UnityEngine.GUILayoutGroup toplevel)
    // Offset: 0x1A92D14
    static void LayoutFreeGroup(UnityEngine::GUILayoutGroup* toplevel);
    // static private System.Void LayoutSingleGroup(UnityEngine.GUILayoutGroup i)
    // Offset: 0x1A92E7C
    static void LayoutSingleGroup(UnityEngine::GUILayoutGroup* i);
    // static private UnityEngine.GUILayoutGroup CreateGUILayoutGroupInstanceOfType(System.Type LayoutType)
    // Offset: 0x1A932C0
    static UnityEngine::GUILayoutGroup* CreateGUILayoutGroupInstanceOfType(System::Type* LayoutType);
    // static UnityEngine.GUILayoutGroup BeginLayoutGroup(UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options, System.Type layoutType)
    // Offset: 0x1A8DD18
    static UnityEngine::GUILayoutGroup* BeginLayoutGroup(UnityEngine::GUIStyle* style, ::Array<UnityEngine::GUILayoutOption*>* options, System::Type* layoutType);
    // static System.Void EndLayoutGroup()
    // Offset: 0x1A8E040
    static void EndLayoutGroup();
    // static UnityEngine.GUILayoutGroup BeginLayoutArea(UnityEngine.GUIStyle style, System.Type layoutType)
    // Offset: 0x1A8E7C8
    static UnityEngine::GUILayoutGroup* BeginLayoutArea(UnityEngine::GUIStyle* style, System::Type* layoutType);
    // static public UnityEngine.Rect GetRect(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1A8C928
    static UnityEngine::Rect GetRect(UnityEngine::GUIContent* content, UnityEngine::GUIStyle* style, ::Array<UnityEngine::GUILayoutOption*>* options);
    // Creating initializer_list -> params proxy for: UnityEngine.Rect GetRect(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, params UnityEngine.GUILayoutOption[] options)
    static UnityEngine::Rect GetRect(UnityEngine::GUIContent* content, UnityEngine::GUIStyle* style, std::initializer_list<UnityEngine::GUILayoutOption*> options);
    // Creating TArgs -> initializer_list proxy for: UnityEngine.Rect GetRect(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, params UnityEngine.GUILayoutOption[] options)
    template<class ...TParams>
    static UnityEngine::Rect GetRect(UnityEngine::GUIContent* content, UnityEngine::GUIStyle* style, TParams&&... options) {
      return GetRect(content, style, {options...});
    }
    // static private UnityEngine.Rect DoGetRect(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1A933E8
    static UnityEngine::Rect DoGetRect(UnityEngine::GUIContent* content, UnityEngine::GUIStyle* style, ::Array<UnityEngine::GUILayoutOption*>* options);
    // static public UnityEngine.Rect GetRect(System.Single width, System.Single height, UnityEngine.GUIStyle style, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1A8D6F4
    static UnityEngine::Rect GetRect(float width, float height, UnityEngine::GUIStyle* style, ::Array<UnityEngine::GUILayoutOption*>* options);
    // Creating initializer_list -> params proxy for: UnityEngine.Rect GetRect(System.Single width, System.Single height, UnityEngine.GUIStyle style, params UnityEngine.GUILayoutOption[] options)
    static UnityEngine::Rect GetRect(float width, float height, UnityEngine::GUIStyle* style, std::initializer_list<UnityEngine::GUILayoutOption*> options);
    // Creating TArgs -> initializer_list proxy for: UnityEngine.Rect GetRect(System.Single width, System.Single height, UnityEngine.GUIStyle style, params UnityEngine.GUILayoutOption[] options)
    template<class ...TParams>
    static UnityEngine::Rect GetRect(float width, float height, UnityEngine::GUIStyle* style, TParams&&... options) {
      return GetRect(width, height, style, {options...});
    }
    // static private UnityEngine.Rect DoGetRect(System.Single minWidth, System.Single maxWidth, System.Single minHeight, System.Single maxHeight, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1A938F8
    static UnityEngine::Rect DoGetRect(float minWidth, float maxWidth, float minHeight, float maxHeight, UnityEngine::GUIStyle* style, ::Array<UnityEngine::GUILayoutOption*>* options);
    // static UnityEngine.GUIStyle get_spaceStyle()
    // Offset: 0x1A8D5E4
    static UnityEngine::GUIStyle* get_spaceStyle();
    // static private System.Void .cctor()
    // Offset: 0x1A93BE8
    static void _cctor();
    // static private System.Void Internal_GetWindowRect_Injected(System.Int32 windowID, out UnityEngine.Rect ret)
    // Offset: 0x1A928D0
    static void Internal_GetWindowRect_Injected(int windowID, UnityEngine::Rect& ret);
    // static private System.Void Internal_MoveWindow_Injected(System.Int32 windowID, ref UnityEngine.Rect r)
    // Offset: 0x1A929BC
    static void Internal_MoveWindow_Injected(int windowID, UnityEngine::Rect& r);
  }; // UnityEngine.GUILayoutUtility
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUILayoutUtility*, "UnityEngine", "GUILayoutUtility");
// Writing MetadataGetter for method: UnityEngine::GUILayoutUtility::Internal_GetWindowRect
// Il2CppName: Internal_GetWindowRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rect (*)(int)>(&UnityEngine::GUILayoutUtility::Internal_GetWindowRect)> {
  const MethodInfo* get() {
    static auto* windowID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutUtility*), "Internal_GetWindowRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{windowID});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutUtility::Internal_MoveWindow
// Il2CppName: Internal_MoveWindow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, UnityEngine::Rect)>(&UnityEngine::GUILayoutUtility::Internal_MoveWindow)> {
  const MethodInfo* get() {
    static auto* windowID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* r = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutUtility*), "Internal_MoveWindow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{windowID, r});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutUtility::SelectIDList
// Il2CppName: SelectIDList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GUILayoutUtility::LayoutCache* (*)(int, bool)>(&UnityEngine::GUILayoutUtility::SelectIDList)> {
  const MethodInfo* get() {
    static auto* instanceID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* isWindow = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutUtility*), "SelectIDList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instanceID, isWindow});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutUtility::Begin
// Il2CppName: Begin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&UnityEngine::GUILayoutUtility::Begin)> {
  const MethodInfo* get() {
    static auto* instanceID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutUtility*), "Begin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instanceID});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutUtility::BeginWindow
// Il2CppName: BeginWindow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, UnityEngine::GUIStyle*, ::Array<UnityEngine::GUILayoutOption*>*)>(&UnityEngine::GUILayoutUtility::BeginWindow)> {
  const MethodInfo* get() {
    static auto* windowID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIStyle")->byval_arg;
    static auto* options = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GUILayoutOption"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutUtility*), "BeginWindow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{windowID, style, options});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutUtility::Layout
// Il2CppName: Layout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::GUILayoutUtility::Layout)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutUtility*), "Layout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutUtility::LayoutFromEditorWindow
// Il2CppName: LayoutFromEditorWindow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::GUILayoutUtility::LayoutFromEditorWindow)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutUtility*), "LayoutFromEditorWindow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutUtility::LayoutFreeGroup
// Il2CppName: LayoutFreeGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::GUILayoutGroup*)>(&UnityEngine::GUILayoutUtility::LayoutFreeGroup)> {
  const MethodInfo* get() {
    static auto* toplevel = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUILayoutGroup")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutUtility*), "LayoutFreeGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toplevel});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutUtility::LayoutSingleGroup
// Il2CppName: LayoutSingleGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::GUILayoutGroup*)>(&UnityEngine::GUILayoutUtility::LayoutSingleGroup)> {
  const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUILayoutGroup")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutUtility*), "LayoutSingleGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutUtility::CreateGUILayoutGroupInstanceOfType
// Il2CppName: CreateGUILayoutGroupInstanceOfType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GUILayoutGroup* (*)(System::Type*)>(&UnityEngine::GUILayoutUtility::CreateGUILayoutGroupInstanceOfType)> {
  const MethodInfo* get() {
    static auto* LayoutType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutUtility*), "CreateGUILayoutGroupInstanceOfType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{LayoutType});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutUtility::BeginLayoutGroup
// Il2CppName: BeginLayoutGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GUILayoutGroup* (*)(UnityEngine::GUIStyle*, ::Array<UnityEngine::GUILayoutOption*>*, System::Type*)>(&UnityEngine::GUILayoutUtility::BeginLayoutGroup)> {
  const MethodInfo* get() {
    static auto* style = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIStyle")->byval_arg;
    static auto* options = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GUILayoutOption"), 1)->byval_arg;
    static auto* layoutType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutUtility*), "BeginLayoutGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{style, options, layoutType});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutUtility::EndLayoutGroup
// Il2CppName: EndLayoutGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::GUILayoutUtility::EndLayoutGroup)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutUtility*), "EndLayoutGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutUtility::BeginLayoutArea
// Il2CppName: BeginLayoutArea
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GUILayoutGroup* (*)(UnityEngine::GUIStyle*, System::Type*)>(&UnityEngine::GUILayoutUtility::BeginLayoutArea)> {
  const MethodInfo* get() {
    static auto* style = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIStyle")->byval_arg;
    static auto* layoutType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutUtility*), "BeginLayoutArea", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{style, layoutType});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutUtility::GetRect
// Il2CppName: GetRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rect (*)(UnityEngine::GUIContent*, UnityEngine::GUIStyle*, ::Array<UnityEngine::GUILayoutOption*>*)>(&UnityEngine::GUILayoutUtility::GetRect)> {
  const MethodInfo* get() {
    static auto* content = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIContent")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIStyle")->byval_arg;
    static auto* options = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GUILayoutOption"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutUtility*), "GetRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{content, style, options});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutUtility::DoGetRect
// Il2CppName: DoGetRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rect (*)(UnityEngine::GUIContent*, UnityEngine::GUIStyle*, ::Array<UnityEngine::GUILayoutOption*>*)>(&UnityEngine::GUILayoutUtility::DoGetRect)> {
  const MethodInfo* get() {
    static auto* content = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIContent")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIStyle")->byval_arg;
    static auto* options = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GUILayoutOption"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutUtility*), "DoGetRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{content, style, options});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutUtility::GetRect
// Il2CppName: GetRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rect (*)(float, float, UnityEngine::GUIStyle*, ::Array<UnityEngine::GUILayoutOption*>*)>(&UnityEngine::GUILayoutUtility::GetRect)> {
  const MethodInfo* get() {
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIStyle")->byval_arg;
    static auto* options = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GUILayoutOption"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutUtility*), "GetRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{width, height, style, options});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutUtility::DoGetRect
// Il2CppName: DoGetRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rect (*)(float, float, float, float, UnityEngine::GUIStyle*, ::Array<UnityEngine::GUILayoutOption*>*)>(&UnityEngine::GUILayoutUtility::DoGetRect)> {
  const MethodInfo* get() {
    static auto* minWidth = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* maxWidth = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* minHeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* maxHeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIStyle")->byval_arg;
    static auto* options = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GUILayoutOption"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutUtility*), "DoGetRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{minWidth, maxWidth, minHeight, maxHeight, style, options});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutUtility::get_spaceStyle
// Il2CppName: get_spaceStyle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GUIStyle* (*)()>(&UnityEngine::GUILayoutUtility::get_spaceStyle)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutUtility*), "get_spaceStyle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutUtility::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::GUILayoutUtility::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutUtility*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutUtility::Internal_GetWindowRect_Injected
// Il2CppName: Internal_GetWindowRect_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, UnityEngine::Rect&)>(&UnityEngine::GUILayoutUtility::Internal_GetWindowRect_Injected)> {
  const MethodInfo* get() {
    static auto* windowID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutUtility*), "Internal_GetWindowRect_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{windowID, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutUtility::Internal_MoveWindow_Injected
// Il2CppName: Internal_MoveWindow_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, UnityEngine::Rect&)>(&UnityEngine::GUILayoutUtility::Internal_MoveWindow_Injected)> {
  const MethodInfo* get() {
    static auto* windowID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* r = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutUtility*), "Internal_MoveWindow_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{windowID, r});
  }
};
