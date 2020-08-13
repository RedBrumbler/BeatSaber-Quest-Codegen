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
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.Volatile
  class Volatile : public ::CsObject {
    public:
    // static public System.Boolean Read(System.Boolean location)
    // Offset: 0xCEAB68
    static bool Read(bool& location);
    // static public T Read(T location)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T Read(T& location) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>("System.Threading", "Volatile", "Read", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, location)));
    }
    // static public System.Void Write(T location, T value)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void Write(T& location, T value) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod("System.Threading", "Volatile", "Write", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, location, value));
    }
  }; // System.Threading.Volatile
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Volatile*, "System.Threading", "Volatile");
#pragma pack(pop)
