// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Autogenerated type: System.Runtime.InteropServices.HandleRef
  struct HandleRef : public System::ValueType {
    public:
    // System.Object m_wrapper
    // Offset: 0x0
    ::Il2CppObject* m_wrapper;
    // System.IntPtr m_handle
    // Offset: 0x8
    System::IntPtr m_handle;
    // Creating value type constructor for type: HandleRef
    HandleRef(::Il2CppObject* m_wrapper_ = {}, System::IntPtr m_handle_ = {}) : m_wrapper{m_wrapper_}, m_handle{m_handle_} {}
    // public System.Void .ctor(System.Object wrapper, System.IntPtr handle)
    // Offset: 0xA3C518
    static HandleRef* New_ctor(::Il2CppObject* wrapper, System::IntPtr handle);
    // public System.IntPtr get_Handle()
    // Offset: 0xA3C548
    System::IntPtr get_Handle();
  }; // System.Runtime.InteropServices.HandleRef
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::HandleRef, "System.Runtime.InteropServices", "HandleRef");
#pragma pack(pop)