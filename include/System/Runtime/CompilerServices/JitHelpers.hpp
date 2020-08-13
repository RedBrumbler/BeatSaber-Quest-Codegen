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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ValueType
  class ValueType;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Autogenerated type: System.Runtime.CompilerServices.JitHelpers
  class JitHelpers : public ::CsObject {
    public:
    // static T UnsafeCast(System.Object o)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T UnsafeCast(::CsObject* o) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>("System.Runtime.CompilerServices", "JitHelpers", "UnsafeCast", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, o)));
    }
    // static System.Int32 UnsafeEnumCast(T val)
    // Offset: 0xFFFFFFFF
    template<class T>
    static int UnsafeEnumCast(T val) {
      static_assert(is_value_type_v<T>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<int>("System.Runtime.CompilerServices", "JitHelpers", "UnsafeEnumCast", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, val)));
    }
    // static System.Int64 UnsafeEnumCastLong(T val)
    // Offset: 0xFFFFFFFF
    template<class T>
    static int64_t UnsafeEnumCastLong(T val) {
      static_assert(is_value_type_v<T>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<int64_t>("System.Runtime.CompilerServices", "JitHelpers", "UnsafeEnumCastLong", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, val)));
    }
  }; // System.Runtime.CompilerServices.JitHelpers
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::JitHelpers*, "System.Runtime.CompilerServices", "JitHelpers");
#pragma pack(pop)
