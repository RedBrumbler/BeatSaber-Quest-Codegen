// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ValueType
  class ValueType;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.SetPropertyUtility
  class SetPropertyUtility : public ::CsObject {
    public:
    // static public System.Boolean SetColor(UnityEngine.Color currentValue, UnityEngine.Color newValue)
    // Offset: 0x120D184
    static bool SetColor(UnityEngine::Color& currentValue, UnityEngine::Color newValue);
    // static public System.Boolean SetStruct(T currentValue, T newValue)
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool SetStruct(T& currentValue, T newValue) {
      static_assert(is_value_type_v<T>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<bool>("UnityEngine.UI", "SetPropertyUtility", "SetStruct", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, currentValue, newValue)));
    }
    // static public System.Boolean SetClass(T currentValue, T newValue)
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool SetClass(T& currentValue, T newValue) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<bool>("UnityEngine.UI", "SetPropertyUtility", "SetClass", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, currentValue, newValue)));
    }
  }; // UnityEngine.UI.SetPropertyUtility
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::SetPropertyUtility*, "UnityEngine.UI", "SetPropertyUtility");
#pragma pack(pop)
