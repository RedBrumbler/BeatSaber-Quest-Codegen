// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
// Completed includes
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Autogenerated type: System.Collections.Generic.IEqualityComparer`1
  template<typename T>
  class IEqualityComparer_1 {
    public:
    // public System.Boolean Equals(T x, T y)
    // Offset: 0xFFFFFFFF
    bool Equals(T x, T y) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", x, y));
    }
    // public System.Int32 GetHashCode(T obj)
    // Offset: 0xFFFFFFFF
    int GetHashCode(T obj) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode", obj));
    }
  }; // System.Collections.Generic.IEqualityComparer`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::IEqualityComparer_1, "System.Collections.Generic", "IEqualityComparer`1");
#pragma pack(pop)