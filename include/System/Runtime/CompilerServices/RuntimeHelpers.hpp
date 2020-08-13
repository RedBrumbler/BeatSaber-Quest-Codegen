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
  // Forward declaring type: Array
  class Array;
  // Forward declaring type: IntPtr
  struct IntPtr;
  // Forward declaring type: RuntimeFieldHandle
  struct RuntimeFieldHandle;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Autogenerated type: System.Runtime.CompilerServices.RuntimeHelpers
  class RuntimeHelpers : public ::CsObject {
    public:
    // static private System.Void InitializeArray(System.Array array, System.IntPtr fldHandle)
    // Offset: 0x1161748
    static void InitializeArray(System::Array* array, System::IntPtr fldHandle);
    // static public System.Void InitializeArray(System.Array array, System.RuntimeFieldHandle fldHandle)
    // Offset: 0x116174C
    static void InitializeArray(System::Array* array, System::RuntimeFieldHandle fldHandle);
    // static public System.Int32 get_OffsetToStringData()
    // Offset: 0x11617E8
    static int get_OffsetToStringData();
    // static public System.Int32 GetHashCode(System.Object o)
    // Offset: 0x11617EC
    static int GetHashCode(::CsObject* o);
    // static public System.Void PrepareConstrainedRegions()
    // Offset: 0x11617F4
    static void PrepareConstrainedRegions();
    // static public System.Boolean IsReferenceOrContainsReferences()
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool IsReferenceOrContainsReferences() {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<bool>("System.Runtime.CompilerServices", "RuntimeHelpers", "IsReferenceOrContainsReferences", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()})));
    }
  }; // System.Runtime.CompilerServices.RuntimeHelpers
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::RuntimeHelpers*, "System.Runtime.CompilerServices", "RuntimeHelpers");
#pragma pack(pop)
