// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Generic.Comparer`1
#include "System/Collections/Generic/Comparer_1.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IComparable`1<T>
  template<typename T>
  class IComparable_1;
  // Skipping declaration: ValueType because it is already included!
}
// Completed forward declares
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Autogenerated type: System.Collections.Generic.NullableComparer`1
  template<typename T>
  class NullableComparer_1 : public System::Collections::Generic::Comparer_1<System::Nullable_1<T>> {
    static_assert((!std::is_complete_v<std::remove_pointer_t<T>> || std::is_base_of_v<System::IComparable_1<T>, std::remove_pointer_t<T>>) && (!std::is_complete_v<std::remove_pointer_t<T>> || is_value_type_v<T>));
    public:
    // public System.Int32 Compare(System.Nullable`1<T> x, System.Nullable`1<T> y)
    // Offset: 0xFFFFFFFF
    int Compare(System::Nullable_1<T> x, System::Nullable_1<T> y) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Compare", x, y));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::CsObject* obj) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", obj));
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode"));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.Comparer`1
    // Base method: System.Void Comparer`1::.ctor()
    // Base method: System.Void Object::.ctor()
    static NullableComparer_1<T>* New_ctor() {
      return (NullableComparer_1<T>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<NullableComparer_1<T>*>::get()));
    }
  }; // System.Collections.Generic.NullableComparer`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::NullableComparer_1, "System.Collections.Generic", "NullableComparer`1");
#pragma pack(pop)
