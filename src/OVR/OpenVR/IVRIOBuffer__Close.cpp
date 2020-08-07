// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRIOBuffer/_Close
#include "OVR/OpenVR/IVRIOBuffer__Close.hpp"
// Including type: OVR.OpenVR.EIOBufferError
#include "OVR/OpenVR/EIOBufferError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRIOBuffer/_Close..ctor
OVR::OpenVR::IVRIOBuffer::_Close* OVR::OpenVR::IVRIOBuffer::_Close::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (IVRIOBuffer::_Close*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRIOBuffer/_Close", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRIOBuffer/_Close.Invoke
OVR::OpenVR::EIOBufferError OVR::OpenVR::IVRIOBuffer::_Close::Invoke(uint64_t ulBuffer) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EIOBufferError>(this, "Invoke", ulBuffer));
}
// Autogenerated method: OVR.OpenVR.IVRIOBuffer/_Close.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRIOBuffer::_Close::BeginInvoke(uint64_t ulBuffer, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulBuffer, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRIOBuffer/_Close.EndInvoke
OVR::OpenVR::EIOBufferError OVR::OpenVR::IVRIOBuffer::_Close::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EIOBufferError>(this, "EndInvoke", result));
}