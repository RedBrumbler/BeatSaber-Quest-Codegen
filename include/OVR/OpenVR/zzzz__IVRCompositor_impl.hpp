#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__IVRCompositor_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "OVR/OpenVR/zzzz__Compositor_CumulativeStats_def.hpp"
#include "OVR/OpenVR/zzzz__HmdColor_t_def.hpp"
#include "OVR/OpenVR/zzzz__Compositor_FrameTiming_def.hpp"
#include "OVR/OpenVR/zzzz__EVRCompositorError_def.hpp"
#include "OVR/OpenVR/zzzz__TrackedDevicePose_t_def.hpp"
#include "OVR/OpenVR/zzzz__EVREye_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackingUniverseOrigin_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "OVR/OpenVR/zzzz__EVRCompositorTimingMode_def.hpp"
#include "OVR/OpenVR/zzzz__Texture_t_def.hpp"
#include "OVR/OpenVR/zzzz__EVRSubmitFlags_def.hpp"
#include "OVR/OpenVR/zzzz__VRTextureBounds_t_def.hpp"
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetTrackingSpace._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetTrackingSpace::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetTrackingSpace::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x267e788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetTrackingSpace>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetTrackingSpace.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetTrackingSpace::*)(OVR::OpenVR::ETrackingUniverseOrigin)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetTrackingSpace::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x267e84c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetTrackingSpace),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetTrackingSpace>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetTrackingSpace.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetTrackingSpace::*)(OVR::OpenVR::ETrackingUniverseOrigin, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetTrackingSpace::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x267e860;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetTrackingSpace),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetTrackingSpace>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetTrackingSpace.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetTrackingSpace::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetTrackingSpace::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x267e8e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetTrackingSpace),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetTrackingSpace>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetTrackingSpace::OVR__OpenVR__IVRCompositor___SetTrackingSpace(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___SetTrackingSpace>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetTrackingSpace::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetTrackingSpace>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetTrackingSpace::Invoke(OVR::OpenVR::ETrackingUniverseOrigin eOrigin)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetTrackingSpace>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::ETrackingUniverseOrigin>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eOrigin);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetTrackingSpace::BeginInvoke(OVR::OpenVR::ETrackingUniverseOrigin eOrigin, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetTrackingSpace>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::ETrackingUniverseOrigin>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, eOrigin, callback, object);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetTrackingSpace::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetTrackingSpace>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetTrackingSpace._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetTrackingSpace::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetTrackingSpace::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x267e8f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetTrackingSpace>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetTrackingSpace.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::ETrackingUniverseOrigin (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetTrackingSpace::*)()>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetTrackingSpace::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x267e9ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetTrackingSpace),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetTrackingSpace>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetTrackingSpace.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetTrackingSpace::*)(System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetTrackingSpace::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x267e9c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetTrackingSpace),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetTrackingSpace>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetTrackingSpace.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::ETrackingUniverseOrigin (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetTrackingSpace::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetTrackingSpace::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x267e9e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetTrackingSpace),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetTrackingSpace>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetTrackingSpace::OVR__OpenVR__IVRCompositor___GetTrackingSpace(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___GetTrackingSpace>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetTrackingSpace::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetTrackingSpace>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 OVR::OpenVR::ETrackingUniverseOrigin OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetTrackingSpace::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetTrackingSpace>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::ETrackingUniverseOrigin, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetTrackingSpace::BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetTrackingSpace>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, object);
}
 OVR::OpenVR::ETrackingUniverseOrigin OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetTrackingSpace::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetTrackingSpace>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::ETrackingUniverseOrigin, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___WaitGetPoses._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___WaitGetPoses::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___WaitGetPoses::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x267ea08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___WaitGetPoses>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___WaitGetPoses.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRCompositorError (OVR::OpenVR::OVR__OpenVR__IVRCompositor___WaitGetPoses::*)(ByRef<::ArrayW<OVR::OpenVR::TrackedDevicePose_t>>, uint32_t, ByRef<::ArrayW<OVR::OpenVR::TrackedDevicePose_t>>, uint32_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___WaitGetPoses::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x267eae0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___WaitGetPoses),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___WaitGetPoses>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___WaitGetPoses.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___WaitGetPoses::*)(ByRef<::ArrayW<OVR::OpenVR::TrackedDevicePose_t>>, uint32_t, ByRef<::ArrayW<OVR::OpenVR::TrackedDevicePose_t>>, uint32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___WaitGetPoses::BeginInvoke)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x267eaf4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___WaitGetPoses),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___WaitGetPoses>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___WaitGetPoses.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRCompositorError (OVR::OpenVR::OVR__OpenVR__IVRCompositor___WaitGetPoses::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___WaitGetPoses::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x267eba0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___WaitGetPoses),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___WaitGetPoses>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___WaitGetPoses::OVR__OpenVR__IVRCompositor___WaitGetPoses(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___WaitGetPoses>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___WaitGetPoses::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___WaitGetPoses>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 OVR::OpenVR::EVRCompositorError OVR::OpenVR::OVR__OpenVR__IVRCompositor___WaitGetPoses::Invoke(ByRef<::ArrayW<OVR::OpenVR::TrackedDevicePose_t>> pRenderPoseArray, uint32_t unRenderPoseArrayCount, ByRef<::ArrayW<OVR::OpenVR::TrackedDevicePose_t>> pGamePoseArray, uint32_t unGamePoseArrayCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___WaitGetPoses>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<OVR::OpenVR::TrackedDevicePose_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<OVR::OpenVR::TrackedDevicePose_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRCompositorError, false>(const_cast<void*>(instance), ___internal_method, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___WaitGetPoses::BeginInvoke(ByRef<::ArrayW<OVR::OpenVR::TrackedDevicePose_t>> pRenderPoseArray, uint32_t unRenderPoseArrayCount, ByRef<::ArrayW<OVR::OpenVR::TrackedDevicePose_t>> pGamePoseArray, uint32_t unGamePoseArrayCount, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___WaitGetPoses>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<OVR::OpenVR::TrackedDevicePose_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<OVR::OpenVR::TrackedDevicePose_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount, callback, object);
}
 OVR::OpenVR::EVRCompositorError OVR::OpenVR::OVR__OpenVR__IVRCompositor___WaitGetPoses::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___WaitGetPoses>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRCompositorError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoses._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoses::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoses::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x267ebc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoses>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoses.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRCompositorError (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoses::*)(ByRef<::ArrayW<OVR::OpenVR::TrackedDevicePose_t>>, uint32_t, ByRef<::ArrayW<OVR::OpenVR::TrackedDevicePose_t>>, uint32_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoses::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x267eca0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoses),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoses>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoses.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoses::*)(ByRef<::ArrayW<OVR::OpenVR::TrackedDevicePose_t>>, uint32_t, ByRef<::ArrayW<OVR::OpenVR::TrackedDevicePose_t>>, uint32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoses::BeginInvoke)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x267ecb4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoses),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoses>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoses.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRCompositorError (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoses::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoses::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x267ed60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoses),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoses>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoses::OVR__OpenVR__IVRCompositor___GetLastPoses(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___GetLastPoses>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoses::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoses>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 OVR::OpenVR::EVRCompositorError OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoses::Invoke(ByRef<::ArrayW<OVR::OpenVR::TrackedDevicePose_t>> pRenderPoseArray, uint32_t unRenderPoseArrayCount, ByRef<::ArrayW<OVR::OpenVR::TrackedDevicePose_t>> pGamePoseArray, uint32_t unGamePoseArrayCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoses>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<OVR::OpenVR::TrackedDevicePose_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<OVR::OpenVR::TrackedDevicePose_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRCompositorError, false>(const_cast<void*>(instance), ___internal_method, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoses::BeginInvoke(ByRef<::ArrayW<OVR::OpenVR::TrackedDevicePose_t>> pRenderPoseArray, uint32_t unRenderPoseArrayCount, ByRef<::ArrayW<OVR::OpenVR::TrackedDevicePose_t>> pGamePoseArray, uint32_t unGamePoseArrayCount, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoses>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<OVR::OpenVR::TrackedDevicePose_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<OVR::OpenVR::TrackedDevicePose_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount, callback, object);
}
 OVR::OpenVR::EVRCompositorError OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoses::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoses>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRCompositorError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x267ed88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRCompositorError (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex::*)(uint32_t, ByRef<OVR::OpenVR::TrackedDevicePose_t>, ByRef<OVR::OpenVR::TrackedDevicePose_t>)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x267ee4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex::*)(uint32_t, ByRef<OVR::OpenVR::TrackedDevicePose_t>, ByRef<OVR::OpenVR::TrackedDevicePose_t>, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex::BeginInvoke)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x267ee60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRCompositorError (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex::*)(ByRef<OVR::OpenVR::TrackedDevicePose_t>, ByRef<OVR::OpenVR::TrackedDevicePose_t>, System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x267ef38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex::OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 OVR::OpenVR::EVRCompositorError OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex::Invoke(uint32_t unDeviceIndex, ByRef<OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ByRef<OVR::OpenVR::TrackedDevicePose_t> pOutputGamePose)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::TrackedDevicePose_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::TrackedDevicePose_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRCompositorError, false>(const_cast<void*>(instance), ___internal_method, unDeviceIndex, pOutputPose, pOutputGamePose);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex::BeginInvoke(uint32_t unDeviceIndex, ByRef<OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ByRef<OVR::OpenVR::TrackedDevicePose_t> pOutputGamePose, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::TrackedDevicePose_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::TrackedDevicePose_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, unDeviceIndex, pOutputPose, pOutputGamePose, callback, object);
}
 OVR::OpenVR::EVRCompositorError OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex::EndInvoke(ByRef<OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ByRef<OVR::OpenVR::TrackedDevicePose_t> pOutputGamePose, System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::TrackedDevicePose_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::TrackedDevicePose_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRCompositorError, false>(const_cast<void*>(instance), ___internal_method, pOutputPose, pOutputGamePose, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___Submit._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___Submit::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___Submit::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x267ef6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___Submit>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___Submit.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRCompositorError (OVR::OpenVR::OVR__OpenVR__IVRCompositor___Submit::*)(OVR::OpenVR::EVREye, ByRef<OVR::OpenVR::Texture_t>, ByRef<OVR::OpenVR::VRTextureBounds_t>, OVR::OpenVR::EVRSubmitFlags)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___Submit::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x267f030;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___Submit),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___Submit>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___Submit.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___Submit::*)(OVR::OpenVR::EVREye, ByRef<OVR::OpenVR::Texture_t>, ByRef<OVR::OpenVR::VRTextureBounds_t>, OVR::OpenVR::EVRSubmitFlags, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___Submit::BeginInvoke)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x267f044;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___Submit),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___Submit>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___Submit.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRCompositorError (OVR::OpenVR::OVR__OpenVR__IVRCompositor___Submit::*)(ByRef<OVR::OpenVR::Texture_t>, ByRef<OVR::OpenVR::VRTextureBounds_t>, System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___Submit::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x267f160;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___Submit),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___Submit>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___Submit::OVR__OpenVR__IVRCompositor___Submit(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___Submit>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___Submit::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___Submit>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 OVR::OpenVR::EVRCompositorError OVR::OpenVR::OVR__OpenVR__IVRCompositor___Submit::Invoke(OVR::OpenVR::EVREye eEye, ByRef<OVR::OpenVR::Texture_t> pTexture, ByRef<OVR::OpenVR::VRTextureBounds_t> pBounds, OVR::OpenVR::EVRSubmitFlags nSubmitFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___Submit>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVREye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::Texture_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::VRTextureBounds_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRSubmitFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRCompositorError, false>(const_cast<void*>(instance), ___internal_method, eEye, pTexture, pBounds, nSubmitFlags);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___Submit::BeginInvoke(OVR::OpenVR::EVREye eEye, ByRef<OVR::OpenVR::Texture_t> pTexture, ByRef<OVR::OpenVR::VRTextureBounds_t> pBounds, OVR::OpenVR::EVRSubmitFlags nSubmitFlags, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___Submit>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVREye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::Texture_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::VRTextureBounds_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRSubmitFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, eEye, pTexture, pBounds, nSubmitFlags, callback, object);
}
 OVR::OpenVR::EVRCompositorError OVR::OpenVR::OVR__OpenVR__IVRCompositor___Submit::EndInvoke(ByRef<OVR::OpenVR::Texture_t> pTexture, ByRef<OVR::OpenVR::VRTextureBounds_t> pBounds, System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___Submit>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::Texture_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::VRTextureBounds_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRCompositorError, false>(const_cast<void*>(instance), ___internal_method, pTexture, pBounds, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x267f194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame::*)()>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x267f250;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame::*)(System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x267f264;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x267f284;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame::OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame::BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, object);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___PostPresentHandoff._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___PostPresentHandoff::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___PostPresentHandoff::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x267f290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___PostPresentHandoff>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___PostPresentHandoff.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___PostPresentHandoff::*)()>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___PostPresentHandoff::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x267f34c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___PostPresentHandoff),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___PostPresentHandoff>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___PostPresentHandoff.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___PostPresentHandoff::*)(System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___PostPresentHandoff::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x267f360;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___PostPresentHandoff),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___PostPresentHandoff>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___PostPresentHandoff.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___PostPresentHandoff::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___PostPresentHandoff::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x267f380;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___PostPresentHandoff),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___PostPresentHandoff>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___PostPresentHandoff::OVR__OpenVR__IVRCompositor___PostPresentHandoff(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___PostPresentHandoff>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___PostPresentHandoff::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___PostPresentHandoff>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___PostPresentHandoff::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___PostPresentHandoff>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___PostPresentHandoff::BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___PostPresentHandoff>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, object);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___PostPresentHandoff::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___PostPresentHandoff>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTiming._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTiming::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTiming::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x267f38c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTiming>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTiming.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTiming::*)(ByRef<OVR::OpenVR::Compositor_FrameTiming>, uint32_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTiming::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x267f464;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTiming),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTiming>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTiming.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTiming::*)(ByRef<OVR::OpenVR::Compositor_FrameTiming>, uint32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTiming::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x267f478;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTiming),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTiming>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTiming.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTiming::*)(ByRef<OVR::OpenVR::Compositor_FrameTiming>, System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTiming::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x267f530;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTiming),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTiming>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTiming::OVR__OpenVR__IVRCompositor___GetFrameTiming(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___GetFrameTiming>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTiming::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTiming>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTiming::Invoke(ByRef<OVR::OpenVR::Compositor_FrameTiming> pTiming, uint32_t unFramesAgo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTiming>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::Compositor_FrameTiming>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pTiming, unFramesAgo);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTiming::BeginInvoke(ByRef<OVR::OpenVR::Compositor_FrameTiming> pTiming, uint32_t unFramesAgo, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTiming>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::Compositor_FrameTiming>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pTiming, unFramesAgo, callback, object);
}
 bool OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTiming::EndInvoke(ByRef<OVR::OpenVR::Compositor_FrameTiming> pTiming, System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTiming>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::Compositor_FrameTiming>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pTiming, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimings::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimings::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x267f55c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimings.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimings::*)(ByRef<OVR::OpenVR::Compositor_FrameTiming>, uint32_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimings::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x267f634;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimings),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimings>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimings.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimings::*)(ByRef<OVR::OpenVR::Compositor_FrameTiming>, uint32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimings::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x267f648;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimings),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimings>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimings.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimings::*)(ByRef<OVR::OpenVR::Compositor_FrameTiming>, System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimings::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x267f700;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimings),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimings>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimings::OVR__OpenVR__IVRCompositor___GetFrameTimings(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___GetFrameTimings>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimings::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 uint32_t OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimings::Invoke(ByRef<OVR::OpenVR::Compositor_FrameTiming> pTiming, uint32_t nFrames)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimings>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::Compositor_FrameTiming>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, pTiming, nFrames);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimings::BeginInvoke(ByRef<OVR::OpenVR::Compositor_FrameTiming> pTiming, uint32_t nFrames, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimings>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::Compositor_FrameTiming>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pTiming, nFrames, callback, object);
}
 uint32_t OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimings::EndInvoke(ByRef<OVR::OpenVR::Compositor_FrameTiming> pTiming, System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimings>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::Compositor_FrameTiming>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, pTiming, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x267f72c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining::*)()>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x267f7e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining::*)(System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x267f7fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x267f81c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining::OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 float_t OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining::BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, object);
}
 float_t OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCumulativeStats._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCumulativeStats::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCumulativeStats::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x267f844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCumulativeStats>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCumulativeStats.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCumulativeStats::*)(ByRef<OVR::OpenVR::Compositor_CumulativeStats>, uint32_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCumulativeStats::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x267f91c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCumulativeStats),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCumulativeStats>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCumulativeStats.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCumulativeStats::*)(ByRef<OVR::OpenVR::Compositor_CumulativeStats>, uint32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCumulativeStats::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x267f930;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCumulativeStats),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCumulativeStats>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCumulativeStats.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCumulativeStats::*)(ByRef<OVR::OpenVR::Compositor_CumulativeStats>, System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCumulativeStats::EndInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x267f9e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCumulativeStats),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCumulativeStats>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCumulativeStats::OVR__OpenVR__IVRCompositor___GetCumulativeStats(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___GetCumulativeStats>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCumulativeStats::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCumulativeStats>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCumulativeStats::Invoke(ByRef<OVR::OpenVR::Compositor_CumulativeStats> pStats, uint32_t nStatsSizeInBytes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCumulativeStats>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::Compositor_CumulativeStats>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pStats, nStatsSizeInBytes);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCumulativeStats::BeginInvoke(ByRef<OVR::OpenVR::Compositor_CumulativeStats> pStats, uint32_t nStatsSizeInBytes, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCumulativeStats>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::Compositor_CumulativeStats>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pStats, nStatsSizeInBytes, callback, object);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCumulativeStats::EndInvoke(ByRef<OVR::OpenVR::Compositor_CumulativeStats> pStats, System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCumulativeStats>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::Compositor_CumulativeStats>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pStats, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeToColor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeToColor::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeToColor::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x267fa04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeToColor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeToColor.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeToColor::*)(float_t, float_t, float_t, float_t, float_t, bool)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeToColor::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x267fac8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeToColor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeToColor>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeToColor.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeToColor::*)(float_t, float_t, float_t, float_t, float_t, bool, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeToColor::BeginInvoke)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x267fae0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeToColor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeToColor>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeToColor.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeToColor::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeToColor::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x267fbf4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeToColor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeToColor>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeToColor::OVR__OpenVR__IVRCompositor___FadeToColor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___FadeToColor>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeToColor::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeToColor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeToColor::Invoke(float_t fSeconds, float_t fRed, float_t fGreen, float_t fBlue, float_t fAlpha, bool bBackground)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeToColor>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, fSeconds, fRed, fGreen, fBlue, fAlpha, bBackground);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeToColor::BeginInvoke(float_t fSeconds, float_t fRed, float_t fGreen, float_t fBlue, float_t fAlpha, bool bBackground, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeToColor>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, fSeconds, fRed, fGreen, fBlue, fAlpha, bBackground, callback, object);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeToColor::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeToColor>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentFadeColor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentFadeColor::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentFadeColor::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x267fc00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentFadeColor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentFadeColor.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::HmdColor_t (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentFadeColor::*)(bool)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentFadeColor::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x267fcc4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentFadeColor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentFadeColor>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentFadeColor.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentFadeColor::*)(bool, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentFadeColor::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x267fcdc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentFadeColor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentFadeColor>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentFadeColor.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::HmdColor_t (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentFadeColor::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentFadeColor::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x267fd64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentFadeColor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentFadeColor>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentFadeColor::OVR__OpenVR__IVRCompositor___GetCurrentFadeColor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___GetCurrentFadeColor>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentFadeColor::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentFadeColor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 OVR::OpenVR::HmdColor_t OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentFadeColor::Invoke(bool bBackground)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentFadeColor>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::HmdColor_t, false>(const_cast<void*>(instance), ___internal_method, bBackground);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentFadeColor::BeginInvoke(bool bBackground, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentFadeColor>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, bBackground, callback, object);
}
 OVR::OpenVR::HmdColor_t OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentFadeColor::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentFadeColor>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::HmdColor_t, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeGrid._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeGrid::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeGrid::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x267fd90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeGrid>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeGrid.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeGrid::*)(float_t, bool)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeGrid::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x267fe54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeGrid),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeGrid>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeGrid.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeGrid::*)(float_t, bool, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeGrid::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x267fe6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeGrid),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeGrid>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeGrid.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeGrid::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeGrid::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x267ff28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeGrid),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeGrid>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeGrid::OVR__OpenVR__IVRCompositor___FadeGrid(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___FadeGrid>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeGrid::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeGrid>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeGrid::Invoke(float_t fSeconds, bool bFadeIn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeGrid>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, fSeconds, bFadeIn);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeGrid::BeginInvoke(float_t fSeconds, bool bFadeIn, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeGrid>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, fSeconds, bFadeIn, callback, object);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeGrid::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeGrid>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x267ff34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha::*)()>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x267fff0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha::*)(System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2680004;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2680024;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha::OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 float_t OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha::BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, object);
}
 float_t OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetSkyboxOverride._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetSkyboxOverride::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetSkyboxOverride::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x268004c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetSkyboxOverride>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetSkyboxOverride.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRCompositorError (OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetSkyboxOverride::*)(ByRef<::ArrayW<OVR::OpenVR::Texture_t>>, uint32_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetSkyboxOverride::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2680124;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetSkyboxOverride),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetSkyboxOverride>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetSkyboxOverride.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetSkyboxOverride::*)(ByRef<::ArrayW<OVR::OpenVR::Texture_t>>, uint32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetSkyboxOverride::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2680138;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetSkyboxOverride),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetSkyboxOverride>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetSkyboxOverride.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRCompositorError (OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetSkyboxOverride::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetSkyboxOverride::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26801cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetSkyboxOverride),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetSkyboxOverride>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetSkyboxOverride::OVR__OpenVR__IVRCompositor___SetSkyboxOverride(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___SetSkyboxOverride>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetSkyboxOverride::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetSkyboxOverride>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 OVR::OpenVR::EVRCompositorError OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetSkyboxOverride::Invoke(ByRef<::ArrayW<OVR::OpenVR::Texture_t>> pTextures, uint32_t unTextureCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetSkyboxOverride>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<OVR::OpenVR::Texture_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRCompositorError, false>(const_cast<void*>(instance), ___internal_method, pTextures, unTextureCount);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetSkyboxOverride::BeginInvoke(ByRef<::ArrayW<OVR::OpenVR::Texture_t>> pTextures, uint32_t unTextureCount, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetSkyboxOverride>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<OVR::OpenVR::Texture_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pTextures, unTextureCount, callback, object);
}
 OVR::OpenVR::EVRCompositorError OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetSkyboxOverride::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetSkyboxOverride>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRCompositorError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearSkyboxOverride._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearSkyboxOverride::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearSkyboxOverride::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x26801f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearSkyboxOverride>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearSkyboxOverride.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearSkyboxOverride::*)()>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearSkyboxOverride::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26802b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearSkyboxOverride),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearSkyboxOverride>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearSkyboxOverride.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearSkyboxOverride::*)(System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearSkyboxOverride::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x26802c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearSkyboxOverride),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearSkyboxOverride>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearSkyboxOverride.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearSkyboxOverride::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearSkyboxOverride::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26802e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearSkyboxOverride),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearSkyboxOverride>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearSkyboxOverride::OVR__OpenVR__IVRCompositor___ClearSkyboxOverride(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___ClearSkyboxOverride>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearSkyboxOverride::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearSkyboxOverride>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearSkyboxOverride::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearSkyboxOverride>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearSkyboxOverride::BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearSkyboxOverride>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, object);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearSkyboxOverride::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearSkyboxOverride>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorBringToFront._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorBringToFront::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorBringToFront::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x26802f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorBringToFront>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorBringToFront.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorBringToFront::*)()>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorBringToFront::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26803ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorBringToFront),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorBringToFront>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorBringToFront.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorBringToFront::*)(System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorBringToFront::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x26803c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorBringToFront),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorBringToFront>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorBringToFront.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorBringToFront::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorBringToFront::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26803e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorBringToFront),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorBringToFront>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorBringToFront::OVR__OpenVR__IVRCompositor___CompositorBringToFront(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___CompositorBringToFront>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorBringToFront::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorBringToFront>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorBringToFront::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorBringToFront>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorBringToFront::BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorBringToFront>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, object);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorBringToFront::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorBringToFront>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorGoToBack._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorGoToBack::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorGoToBack::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x26803ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorGoToBack>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorGoToBack.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorGoToBack::*)()>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorGoToBack::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26804a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorGoToBack),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorGoToBack>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorGoToBack.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorGoToBack::*)(System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorGoToBack::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x26804bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorGoToBack),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorGoToBack>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorGoToBack.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorGoToBack::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorGoToBack::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26804dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorGoToBack),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorGoToBack>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorGoToBack::OVR__OpenVR__IVRCompositor___CompositorGoToBack(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___CompositorGoToBack>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorGoToBack::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorGoToBack>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorGoToBack::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorGoToBack>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorGoToBack::BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorGoToBack>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, object);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorGoToBack::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorGoToBack>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorQuit._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorQuit::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorQuit::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x26804e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorQuit>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorQuit.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorQuit::*)()>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorQuit::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26805a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorQuit),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorQuit>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorQuit.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorQuit::*)(System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorQuit::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x26805b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorQuit),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorQuit>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorQuit.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorQuit::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorQuit::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26805d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorQuit),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorQuit>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorQuit::OVR__OpenVR__IVRCompositor___CompositorQuit(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___CompositorQuit>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorQuit::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorQuit>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorQuit::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorQuit>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorQuit::BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorQuit>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, object);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorQuit::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorQuit>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsFullscreen._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsFullscreen::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsFullscreen::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x26805e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsFullscreen>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsFullscreen.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsFullscreen::*)()>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsFullscreen::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26806a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsFullscreen),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsFullscreen>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsFullscreen.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsFullscreen::*)(System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsFullscreen::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x26806b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsFullscreen),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsFullscreen>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsFullscreen.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsFullscreen::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsFullscreen::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26806d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsFullscreen),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsFullscreen>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsFullscreen::OVR__OpenVR__IVRCompositor___IsFullscreen(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___IsFullscreen>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsFullscreen::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsFullscreen>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsFullscreen::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsFullscreen>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsFullscreen::BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsFullscreen>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, object);
}
 bool OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsFullscreen::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsFullscreen>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x26806fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess::*)()>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26807b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess::*)(System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x26807cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26807ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess::OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 uint32_t OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess::BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, object);
}
 uint32_t OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastFrameRenderer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastFrameRenderer::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastFrameRenderer::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2680814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastFrameRenderer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastFrameRenderer.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastFrameRenderer::*)()>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastFrameRenderer::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26808d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastFrameRenderer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastFrameRenderer>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastFrameRenderer.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastFrameRenderer::*)(System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastFrameRenderer::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x26808e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastFrameRenderer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastFrameRenderer>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastFrameRenderer.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastFrameRenderer::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastFrameRenderer::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2680904;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastFrameRenderer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastFrameRenderer>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastFrameRenderer::OVR__OpenVR__IVRCompositor___GetLastFrameRenderer(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___GetLastFrameRenderer>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastFrameRenderer::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastFrameRenderer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 uint32_t OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastFrameRenderer::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastFrameRenderer>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastFrameRenderer::BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastFrameRenderer>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, object);
}
 uint32_t OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastFrameRenderer::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastFrameRenderer>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___CanRenderScene._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___CanRenderScene::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___CanRenderScene::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x268092c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CanRenderScene>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___CanRenderScene.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::OVR__OpenVR__IVRCompositor___CanRenderScene::*)()>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___CanRenderScene::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26809e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___CanRenderScene),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CanRenderScene>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___CanRenderScene.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___CanRenderScene::*)(System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___CanRenderScene::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x26809fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___CanRenderScene),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CanRenderScene>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___CanRenderScene.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::OVR__OpenVR__IVRCompositor___CanRenderScene::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___CanRenderScene::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2680a1c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___CanRenderScene),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CanRenderScene>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___CanRenderScene::OVR__OpenVR__IVRCompositor___CanRenderScene(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___CanRenderScene>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___CanRenderScene::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CanRenderScene>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool OVR::OpenVR::OVR__OpenVR__IVRCompositor___CanRenderScene::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CanRenderScene>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___CanRenderScene::BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CanRenderScene>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, object);
}
 bool OVR::OpenVR::OVR__OpenVR__IVRCompositor___CanRenderScene::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CanRenderScene>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShowMirrorWindow._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShowMirrorWindow::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShowMirrorWindow::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2680a44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShowMirrorWindow>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShowMirrorWindow.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShowMirrorWindow::*)()>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShowMirrorWindow::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2680b00;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShowMirrorWindow),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShowMirrorWindow>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShowMirrorWindow.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShowMirrorWindow::*)(System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShowMirrorWindow::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2680b14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShowMirrorWindow),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShowMirrorWindow>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShowMirrorWindow.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShowMirrorWindow::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShowMirrorWindow::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2680b34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShowMirrorWindow),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShowMirrorWindow>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShowMirrorWindow::OVR__OpenVR__IVRCompositor___ShowMirrorWindow(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___ShowMirrorWindow>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShowMirrorWindow::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShowMirrorWindow>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShowMirrorWindow::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShowMirrorWindow>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShowMirrorWindow::BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShowMirrorWindow>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, object);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShowMirrorWindow::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShowMirrorWindow>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___HideMirrorWindow._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___HideMirrorWindow::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___HideMirrorWindow::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2680b40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___HideMirrorWindow>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___HideMirrorWindow.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___HideMirrorWindow::*)()>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___HideMirrorWindow::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2680bfc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___HideMirrorWindow),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___HideMirrorWindow>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___HideMirrorWindow.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___HideMirrorWindow::*)(System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___HideMirrorWindow::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2680c10;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___HideMirrorWindow),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___HideMirrorWindow>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___HideMirrorWindow.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___HideMirrorWindow::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___HideMirrorWindow::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2680c30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___HideMirrorWindow),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___HideMirrorWindow>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___HideMirrorWindow::OVR__OpenVR__IVRCompositor___HideMirrorWindow(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___HideMirrorWindow>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___HideMirrorWindow::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___HideMirrorWindow>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___HideMirrorWindow::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___HideMirrorWindow>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___HideMirrorWindow::BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___HideMirrorWindow>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, object);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___HideMirrorWindow::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___HideMirrorWindow>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2680c3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible::*)()>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2680cf8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible::*)(System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2680d0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2680d2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible::OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible::BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, object);
}
 bool OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorDumpImages._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorDumpImages::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorDumpImages::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2680d54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorDumpImages>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorDumpImages.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorDumpImages::*)()>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorDumpImages::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2680e10;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorDumpImages),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorDumpImages>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorDumpImages.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorDumpImages::*)(System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorDumpImages::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2680e24;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorDumpImages),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorDumpImages>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorDumpImages.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorDumpImages::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorDumpImages::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2680e44;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorDumpImages),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorDumpImages>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorDumpImages::OVR__OpenVR__IVRCompositor___CompositorDumpImages(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___CompositorDumpImages>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorDumpImages::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorDumpImages>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorDumpImages::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorDumpImages>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorDumpImages::BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorDumpImages>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, object);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorDumpImages::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorDumpImages>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2680e50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources::*)()>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2680f0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources::*)(System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2680f20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2680f40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources::OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources::BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, object);
}
 bool OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2680f68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn::*)(bool)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x268102c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn::*)(bool, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2681044;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26810cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn::OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn::Invoke(bool bOverride)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bOverride);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn::BeginInvoke(bool bOverride, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, bOverride, callback, object);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceReconnectProcess._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceReconnectProcess::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceReconnectProcess::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x26810d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceReconnectProcess>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceReconnectProcess.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceReconnectProcess::*)()>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceReconnectProcess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2681194;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceReconnectProcess),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceReconnectProcess>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceReconnectProcess.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceReconnectProcess::*)(System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceReconnectProcess::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x26811a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceReconnectProcess),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceReconnectProcess>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceReconnectProcess.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceReconnectProcess::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceReconnectProcess::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26811c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceReconnectProcess),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceReconnectProcess>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceReconnectProcess::OVR__OpenVR__IVRCompositor___ForceReconnectProcess(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___ForceReconnectProcess>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceReconnectProcess::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceReconnectProcess>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceReconnectProcess::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceReconnectProcess>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceReconnectProcess::BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceReconnectProcess>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, object);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceReconnectProcess::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceReconnectProcess>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___SuspendRendering._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___SuspendRendering::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___SuspendRendering::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x26811d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SuspendRendering>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___SuspendRendering.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___SuspendRendering::*)(bool)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___SuspendRendering::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2681298;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___SuspendRendering),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SuspendRendering>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___SuspendRendering.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___SuspendRendering::*)(bool, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___SuspendRendering::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x26812b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___SuspendRendering),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SuspendRendering>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___SuspendRendering.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___SuspendRendering::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___SuspendRendering::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2681338;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___SuspendRendering),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SuspendRendering>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___SuspendRendering::OVR__OpenVR__IVRCompositor___SuspendRendering(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___SuspendRendering>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___SuspendRendering::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SuspendRendering>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___SuspendRendering::Invoke(bool bSuspend)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SuspendRendering>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bSuspend);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___SuspendRendering::BeginInvoke(bool bSuspend, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SuspendRendering>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, bSuspend, callback, object);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___SuspendRendering::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SuspendRendering>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2681344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRCompositorError (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11::*)(OVR::OpenVR::EVREye, ::cordl_internals::intptr_t, ByRef<::cordl_internals::intptr_t>)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2681408;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11::*)(OVR::OpenVR::EVREye, ::cordl_internals::intptr_t, ByRef<::cordl_internals::intptr_t>, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11::BeginInvoke)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x268141c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRCompositorError (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11::*)(ByRef<::cordl_internals::intptr_t>, System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26814ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11::OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 OVR::OpenVR::EVRCompositorError OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11::Invoke(OVR::OpenVR::EVREye eEye, ::cordl_internals::intptr_t pD3D11DeviceOrResource, ByRef<::cordl_internals::intptr_t> ppD3D11ShaderResourceView)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVREye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::intptr_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRCompositorError, false>(const_cast<void*>(instance), ___internal_method, eEye, pD3D11DeviceOrResource, ppD3D11ShaderResourceView);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11::BeginInvoke(OVR::OpenVR::EVREye eEye, ::cordl_internals::intptr_t pD3D11DeviceOrResource, ByRef<::cordl_internals::intptr_t> ppD3D11ShaderResourceView, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVREye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::intptr_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, eEye, pD3D11DeviceOrResource, ppD3D11ShaderResourceView, callback, object);
}
 OVR::OpenVR::EVRCompositorError OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11::EndInvoke(ByRef<::cordl_internals::intptr_t> ppD3D11ShaderResourceView, System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::intptr_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRCompositorError, false>(const_cast<void*>(instance), ___internal_method, ppD3D11ShaderResourceView, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2681518;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11::*)(::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26815dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11::*)(::cordl_internals::intptr_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x26815f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2681674;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11::OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11::Invoke(::cordl_internals::intptr_t pD3D11ShaderResourceView)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pD3D11ShaderResourceView);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11::BeginInvoke(::cordl_internals::intptr_t pD3D11ShaderResourceView, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pD3D11ShaderResourceView, callback, object);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureGL._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureGL::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureGL::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2681680;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureGL>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureGL.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRCompositorError (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureGL::*)(OVR::OpenVR::EVREye, ByRef<uint32_t>, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureGL::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2681744;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureGL),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureGL>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureGL.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureGL::*)(OVR::OpenVR::EVREye, ByRef<uint32_t>, ::cordl_internals::intptr_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureGL::BeginInvoke)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2681758;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureGL),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureGL>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureGL.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRCompositorError (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureGL::*)(ByRef<uint32_t>, System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureGL::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2681840;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureGL),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureGL>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureGL::OVR__OpenVR__IVRCompositor___GetMirrorTextureGL(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___GetMirrorTextureGL>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureGL::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureGL>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 OVR::OpenVR::EVRCompositorError OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureGL::Invoke(OVR::OpenVR::EVREye eEye, ByRef<uint32_t> pglTextureId, ::cordl_internals::intptr_t pglSharedTextureHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureGL>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVREye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRCompositorError, false>(const_cast<void*>(instance), ___internal_method, eEye, pglTextureId, pglSharedTextureHandle);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureGL::BeginInvoke(OVR::OpenVR::EVREye eEye, ByRef<uint32_t> pglTextureId, ::cordl_internals::intptr_t pglSharedTextureHandle, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureGL>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVREye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, eEye, pglTextureId, pglSharedTextureHandle, callback, object);
}
 OVR::OpenVR::EVRCompositorError OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureGL::EndInvoke(ByRef<uint32_t> pglTextureId, System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureGL>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRCompositorError, false>(const_cast<void*>(instance), ___internal_method, pglTextureId, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x268186c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture::*)(uint32_t, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2681930;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture::*)(uint32_t, ::cordl_internals::intptr_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture::BeginInvoke)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2681944;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26819f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture::OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture::Invoke(uint32_t glTextureId, ::cordl_internals::intptr_t glSharedTextureHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, glTextureId, glSharedTextureHandle);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture::BeginInvoke(uint32_t glTextureId, ::cordl_internals::intptr_t glSharedTextureHandle, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, glTextureId, glSharedTextureHandle, callback, object);
}
 bool OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2681a20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess::*)(::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2681ae4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess::*)(::cordl_internals::intptr_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2681af8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2681b7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess::OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess::Invoke(::cordl_internals::intptr_t glSharedTextureHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, glSharedTextureHandle);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess::BeginInvoke(::cordl_internals::intptr_t glSharedTextureHandle, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, glSharedTextureHandle, callback, object);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2681b88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess::*)(::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2681c4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess::*)(::cordl_internals::intptr_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2681c60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2681ce4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess::OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess::Invoke(::cordl_internals::intptr_t glSharedTextureHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, glSharedTextureHandle);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess::BeginInvoke(::cordl_internals::intptr_t glSharedTextureHandle, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, glSharedTextureHandle, callback, object);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2681cf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired::*)(System::Text::StringBuilder, uint32_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2681dc8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired::*)(System::Text::StringBuilder, uint32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2681ddc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2681e70;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired::OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 uint32_t OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired::Invoke(System::Text::StringBuilder pchValue, uint32_t unBufferSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, pchValue, unBufferSize);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired::BeginInvoke(System::Text::StringBuilder pchValue, uint32_t unBufferSize, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pchValue, unBufferSize, callback, object);
}
 uint32_t OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2681e98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired::*)(::cordl_internals::intptr_t, System::Text::StringBuilder, uint32_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2681f5c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired::*)(::cordl_internals::intptr_t, System::Text::StringBuilder, uint32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2681f70;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x268202c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired::OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 uint32_t OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired::Invoke(::cordl_internals::intptr_t pPhysicalDevice, System::Text::StringBuilder pchValue, uint32_t unBufferSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, pPhysicalDevice, pchValue, unBufferSize);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired::BeginInvoke(::cordl_internals::intptr_t pPhysicalDevice, System::Text::StringBuilder pchValue, uint32_t unBufferSize, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pPhysicalDevice, pchValue, unBufferSize, callback, object);
}
 uint32_t OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetExplicitTimingMode._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetExplicitTimingMode::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetExplicitTimingMode::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2682054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetExplicitTimingMode>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetExplicitTimingMode.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetExplicitTimingMode::*)(OVR::OpenVR::EVRCompositorTimingMode)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetExplicitTimingMode::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2682118;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetExplicitTimingMode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetExplicitTimingMode>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetExplicitTimingMode.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetExplicitTimingMode::*)(OVR::OpenVR::EVRCompositorTimingMode, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetExplicitTimingMode::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x268212c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetExplicitTimingMode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetExplicitTimingMode>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetExplicitTimingMode.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetExplicitTimingMode::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetExplicitTimingMode::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26821b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetExplicitTimingMode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetExplicitTimingMode>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetExplicitTimingMode::OVR__OpenVR__IVRCompositor___SetExplicitTimingMode(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___SetExplicitTimingMode>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetExplicitTimingMode::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetExplicitTimingMode>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetExplicitTimingMode::Invoke(OVR::OpenVR::EVRCompositorTimingMode eTimingMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetExplicitTimingMode>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRCompositorTimingMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eTimingMode);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetExplicitTimingMode::BeginInvoke(OVR::OpenVR::EVRCompositorTimingMode eTimingMode, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetExplicitTimingMode>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRCompositorTimingMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, eTimingMode, callback, object);
}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetExplicitTimingMode::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetExplicitTimingMode>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x26821bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRCompositorError (OVR::OpenVR::OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData::*)()>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2682278;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData::*)(System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x268228c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRCompositorError (OVR::OpenVR::OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26822ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData::OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 OVR::OpenVR::EVRCompositorError OVR::OpenVR::OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRCompositorError, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData::BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, object);
}
 OVR::OpenVR::EVRCompositorError OVR::OpenVR::OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRCompositorError, false>(const_cast<void*>(instance), ___internal_method, result);
}
// Ctor Parameters [CppParam { name: "SetTrackingSpace", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetTrackingSpace", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetTrackingSpace", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetTrackingSpace", modifiers: "", def_value: Some("csnull") }, CppParam { name: "WaitGetPoses", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___WaitGetPoses", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetLastPoses", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoses", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetLastPoseForTrackedDeviceIndex", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Submit", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___Submit", modifiers: "", def_value: Some("csnull") }, CppParam { name: "ClearLastSubmittedFrame", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame", modifiers: "", def_value: Some("csnull") }, CppParam { name: "PostPresentHandoff", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___PostPresentHandoff", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetFrameTiming", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTiming", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetFrameTimings", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimings", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetFrameTimeRemaining", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetCumulativeStats", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCumulativeStats", modifiers: "", def_value: Some("csnull") }, CppParam { name: "FadeToColor", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeToColor", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetCurrentFadeColor", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentFadeColor", modifiers: "", def_value: Some("csnull") }, CppParam { name: "FadeGrid", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeGrid", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetCurrentGridAlpha", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SetSkyboxOverride", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetSkyboxOverride", modifiers: "", def_value: Some("csnull") }, CppParam { name: "ClearSkyboxOverride", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearSkyboxOverride", modifiers: "", def_value: Some("csnull") }, CppParam { name: "CompositorBringToFront", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorBringToFront", modifiers: "", def_value: Some("csnull") }, CppParam { name: "CompositorGoToBack", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorGoToBack", modifiers: "", def_value: Some("csnull") }, CppParam { name: "CompositorQuit", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorQuit", modifiers: "", def_value: Some("csnull") }, CppParam { name: "IsFullscreen", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsFullscreen", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetCurrentSceneFocusProcess", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetLastFrameRenderer", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastFrameRenderer", modifiers: "", def_value: Some("csnull") }, CppParam { name: "CanRenderScene", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___CanRenderScene", modifiers: "", def_value: Some("csnull") }, CppParam { name: "ShowMirrorWindow", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShowMirrorWindow", modifiers: "", def_value: Some("csnull") }, CppParam { name: "HideMirrorWindow", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___HideMirrorWindow", modifiers: "", def_value: Some("csnull") }, CppParam { name: "IsMirrorWindowVisible", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible", modifiers: "", def_value: Some("csnull") }, CppParam { name: "CompositorDumpImages", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorDumpImages", modifiers: "", def_value: Some("csnull") }, CppParam { name: "ShouldAppRenderWithLowResources", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources", modifiers: "", def_value: Some("csnull") }, CppParam { name: "ForceInterleavedReprojectionOn", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn", modifiers: "", def_value: Some("csnull") }, CppParam { name: "ForceReconnectProcess", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceReconnectProcess", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SuspendRendering", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___SuspendRendering", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetMirrorTextureD3D11", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11", modifiers: "", def_value: Some("csnull") }, CppParam { name: "ReleaseMirrorTextureD3D11", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetMirrorTextureGL", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureGL", modifiers: "", def_value: Some("csnull") }, CppParam { name: "ReleaseSharedGLTexture", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture", modifiers: "", def_value: Some("csnull") }, CppParam { name: "LockGLSharedTextureForAccess", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess", modifiers: "", def_value: Some("csnull") }, CppParam { name: "UnlockGLSharedTextureForAccess", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetVulkanInstanceExtensionsRequired", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetVulkanDeviceExtensionsRequired", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SetExplicitTimingMode", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetExplicitTimingMode", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SubmitExplicitTimingData", ty: "OVR::OpenVR::OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData", modifiers: "", def_value: Some("csnull") }]
constexpr OVR::OpenVR::IVRCompositor::IVRCompositor(OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetTrackingSpace SetTrackingSpace, OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetTrackingSpace GetTrackingSpace, OVR::OpenVR::OVR__OpenVR__IVRCompositor___WaitGetPoses WaitGetPoses, OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoses GetLastPoses, OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex GetLastPoseForTrackedDeviceIndex, OVR::OpenVR::OVR__OpenVR__IVRCompositor___Submit Submit, OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame ClearLastSubmittedFrame, OVR::OpenVR::OVR__OpenVR__IVRCompositor___PostPresentHandoff PostPresentHandoff, OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTiming GetFrameTiming, OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimings GetFrameTimings, OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining GetFrameTimeRemaining, OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCumulativeStats GetCumulativeStats, OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeToColor FadeToColor, OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentFadeColor GetCurrentFadeColor, OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeGrid FadeGrid, OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha GetCurrentGridAlpha, OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetSkyboxOverride SetSkyboxOverride, OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearSkyboxOverride ClearSkyboxOverride, OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorBringToFront CompositorBringToFront, OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorGoToBack CompositorGoToBack, OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorQuit CompositorQuit, OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsFullscreen IsFullscreen, OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess GetCurrentSceneFocusProcess, OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastFrameRenderer GetLastFrameRenderer, OVR::OpenVR::OVR__OpenVR__IVRCompositor___CanRenderScene CanRenderScene, OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShowMirrorWindow ShowMirrorWindow, OVR::OpenVR::OVR__OpenVR__IVRCompositor___HideMirrorWindow HideMirrorWindow, OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible IsMirrorWindowVisible, OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorDumpImages CompositorDumpImages, OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources ShouldAppRenderWithLowResources, OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn ForceInterleavedReprojectionOn, OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceReconnectProcess ForceReconnectProcess, OVR::OpenVR::OVR__OpenVR__IVRCompositor___SuspendRendering SuspendRendering, OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11 GetMirrorTextureD3D11, OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11 ReleaseMirrorTextureD3D11, OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureGL GetMirrorTextureGL, OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture ReleaseSharedGLTexture, OVR::OpenVR::OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess LockGLSharedTextureForAccess, OVR::OpenVR::OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess UnlockGLSharedTextureForAccess, OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired GetVulkanInstanceExtensionsRequired, OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired GetVulkanDeviceExtensionsRequired, OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetExplicitTimingMode SetExplicitTimingMode, OVR::OpenVR::OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData SubmitExplicitTimingData) noexcept : ::bs_hook::ValueTypeWrapper() {this->SetTrackingSpace = SetTrackingSpace;
this->GetTrackingSpace = GetTrackingSpace;
this->WaitGetPoses = WaitGetPoses;
this->GetLastPoses = GetLastPoses;
this->GetLastPoseForTrackedDeviceIndex = GetLastPoseForTrackedDeviceIndex;
this->Submit = Submit;
this->ClearLastSubmittedFrame = ClearLastSubmittedFrame;
this->PostPresentHandoff = PostPresentHandoff;
this->GetFrameTiming = GetFrameTiming;
this->GetFrameTimings = GetFrameTimings;
this->GetFrameTimeRemaining = GetFrameTimeRemaining;
this->GetCumulativeStats = GetCumulativeStats;
this->FadeToColor = FadeToColor;
this->GetCurrentFadeColor = GetCurrentFadeColor;
this->FadeGrid = FadeGrid;
this->GetCurrentGridAlpha = GetCurrentGridAlpha;
this->SetSkyboxOverride = SetSkyboxOverride;
this->ClearSkyboxOverride = ClearSkyboxOverride;
this->CompositorBringToFront = CompositorBringToFront;
this->CompositorGoToBack = CompositorGoToBack;
this->CompositorQuit = CompositorQuit;
this->IsFullscreen = IsFullscreen;
this->GetCurrentSceneFocusProcess = GetCurrentSceneFocusProcess;
this->GetLastFrameRenderer = GetLastFrameRenderer;
this->CanRenderScene = CanRenderScene;
this->ShowMirrorWindow = ShowMirrorWindow;
this->HideMirrorWindow = HideMirrorWindow;
this->IsMirrorWindowVisible = IsMirrorWindowVisible;
this->CompositorDumpImages = CompositorDumpImages;
this->ShouldAppRenderWithLowResources = ShouldAppRenderWithLowResources;
this->ForceInterleavedReprojectionOn = ForceInterleavedReprojectionOn;
this->ForceReconnectProcess = ForceReconnectProcess;
this->SuspendRendering = SuspendRendering;
this->GetMirrorTextureD3D11 = GetMirrorTextureD3D11;
this->ReleaseMirrorTextureD3D11 = ReleaseMirrorTextureD3D11;
this->GetMirrorTextureGL = GetMirrorTextureGL;
this->ReleaseSharedGLTexture = ReleaseSharedGLTexture;
this->LockGLSharedTextureForAccess = LockGLSharedTextureForAccess;
this->UnlockGLSharedTextureForAccess = UnlockGLSharedTextureForAccess;
this->GetVulkanInstanceExtensionsRequired = GetVulkanInstanceExtensionsRequired;
this->GetVulkanDeviceExtensionsRequired = GetVulkanDeviceExtensionsRequired;
this->SetExplicitTimingMode = SetExplicitTimingMode;
this->SubmitExplicitTimingData = SubmitExplicitTimingData;
}
constexpr void OVR::OpenVR::IVRCompositor::__set_SetTrackingSpace(OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetTrackingSpace value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetTrackingSpace, 0x0>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetTrackingSpace>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetTrackingSpace OVR::OpenVR::IVRCompositor::__get_SetTrackingSpace() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetTrackingSpace, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_GetTrackingSpace(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetTrackingSpace value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetTrackingSpace, 0x8>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetTrackingSpace>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetTrackingSpace OVR::OpenVR::IVRCompositor::__get_GetTrackingSpace() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetTrackingSpace, 0x8>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_WaitGetPoses(OVR::OpenVR::OVR__OpenVR__IVRCompositor___WaitGetPoses value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___WaitGetPoses, 0x10>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___WaitGetPoses>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___WaitGetPoses OVR::OpenVR::IVRCompositor::__get_WaitGetPoses() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___WaitGetPoses, 0x10>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_GetLastPoses(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoses value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoses, 0x18>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoses>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoses OVR::OpenVR::IVRCompositor::__get_GetLastPoses() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoses, 0x18>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_GetLastPoseForTrackedDeviceIndex(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex, 0x20>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex OVR::OpenVR::IVRCompositor::__get_GetLastPoseForTrackedDeviceIndex() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex, 0x20>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_Submit(OVR::OpenVR::OVR__OpenVR__IVRCompositor___Submit value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___Submit, 0x28>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___Submit>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___Submit OVR::OpenVR::IVRCompositor::__get_Submit() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___Submit, 0x28>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_ClearLastSubmittedFrame(OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame, 0x30>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame OVR::OpenVR::IVRCompositor::__get_ClearLastSubmittedFrame() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame, 0x30>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_PostPresentHandoff(OVR::OpenVR::OVR__OpenVR__IVRCompositor___PostPresentHandoff value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___PostPresentHandoff, 0x38>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___PostPresentHandoff>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___PostPresentHandoff OVR::OpenVR::IVRCompositor::__get_PostPresentHandoff() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___PostPresentHandoff, 0x38>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_GetFrameTiming(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTiming value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTiming, 0x40>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTiming>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTiming OVR::OpenVR::IVRCompositor::__get_GetFrameTiming() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTiming, 0x40>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_GetFrameTimings(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimings value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimings, 0x48>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimings>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimings OVR::OpenVR::IVRCompositor::__get_GetFrameTimings() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimings, 0x48>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_GetFrameTimeRemaining(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining, 0x50>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining OVR::OpenVR::IVRCompositor::__get_GetFrameTimeRemaining() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining, 0x50>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_GetCumulativeStats(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCumulativeStats value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCumulativeStats, 0x58>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCumulativeStats>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCumulativeStats OVR::OpenVR::IVRCompositor::__get_GetCumulativeStats() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCumulativeStats, 0x58>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_FadeToColor(OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeToColor value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeToColor, 0x60>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeToColor>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeToColor OVR::OpenVR::IVRCompositor::__get_FadeToColor() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeToColor, 0x60>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_GetCurrentFadeColor(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentFadeColor value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentFadeColor, 0x68>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentFadeColor>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentFadeColor OVR::OpenVR::IVRCompositor::__get_GetCurrentFadeColor() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentFadeColor, 0x68>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_FadeGrid(OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeGrid value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeGrid, 0x70>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeGrid>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeGrid OVR::OpenVR::IVRCompositor::__get_FadeGrid() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___FadeGrid, 0x70>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_GetCurrentGridAlpha(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha, 0x78>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha OVR::OpenVR::IVRCompositor::__get_GetCurrentGridAlpha() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha, 0x78>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_SetSkyboxOverride(OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetSkyboxOverride value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetSkyboxOverride, 0x80>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetSkyboxOverride>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetSkyboxOverride OVR::OpenVR::IVRCompositor::__get_SetSkyboxOverride() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetSkyboxOverride, 0x80>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_ClearSkyboxOverride(OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearSkyboxOverride value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearSkyboxOverride, 0x88>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearSkyboxOverride>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearSkyboxOverride OVR::OpenVR::IVRCompositor::__get_ClearSkyboxOverride() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ClearSkyboxOverride, 0x88>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_CompositorBringToFront(OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorBringToFront value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorBringToFront, 0x90>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorBringToFront>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorBringToFront OVR::OpenVR::IVRCompositor::__get_CompositorBringToFront() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorBringToFront, 0x90>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_CompositorGoToBack(OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorGoToBack value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorGoToBack, 0x98>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorGoToBack>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorGoToBack OVR::OpenVR::IVRCompositor::__get_CompositorGoToBack() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorGoToBack, 0x98>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_CompositorQuit(OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorQuit value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorQuit, 0xa0>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorQuit>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorQuit OVR::OpenVR::IVRCompositor::__get_CompositorQuit() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorQuit, 0xa0>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_IsFullscreen(OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsFullscreen value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsFullscreen, 0xa8>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsFullscreen>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsFullscreen OVR::OpenVR::IVRCompositor::__get_IsFullscreen() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsFullscreen, 0xa8>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_GetCurrentSceneFocusProcess(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess, 0xb0>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess OVR::OpenVR::IVRCompositor::__get_GetCurrentSceneFocusProcess() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess, 0xb0>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_GetLastFrameRenderer(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastFrameRenderer value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastFrameRenderer, 0xb8>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastFrameRenderer>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastFrameRenderer OVR::OpenVR::IVRCompositor::__get_GetLastFrameRenderer() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetLastFrameRenderer, 0xb8>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_CanRenderScene(OVR::OpenVR::OVR__OpenVR__IVRCompositor___CanRenderScene value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CanRenderScene, 0xc0>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CanRenderScene>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___CanRenderScene OVR::OpenVR::IVRCompositor::__get_CanRenderScene() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CanRenderScene, 0xc0>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_ShowMirrorWindow(OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShowMirrorWindow value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShowMirrorWindow, 0xc8>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShowMirrorWindow>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShowMirrorWindow OVR::OpenVR::IVRCompositor::__get_ShowMirrorWindow() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShowMirrorWindow, 0xc8>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_HideMirrorWindow(OVR::OpenVR::OVR__OpenVR__IVRCompositor___HideMirrorWindow value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___HideMirrorWindow, 0xd0>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___HideMirrorWindow>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___HideMirrorWindow OVR::OpenVR::IVRCompositor::__get_HideMirrorWindow() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___HideMirrorWindow, 0xd0>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_IsMirrorWindowVisible(OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible, 0xd8>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible OVR::OpenVR::IVRCompositor::__get_IsMirrorWindowVisible() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible, 0xd8>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_CompositorDumpImages(OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorDumpImages value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorDumpImages, 0xe0>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorDumpImages>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorDumpImages OVR::OpenVR::IVRCompositor::__get_CompositorDumpImages() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___CompositorDumpImages, 0xe0>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_ShouldAppRenderWithLowResources(OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources, 0xe8>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources OVR::OpenVR::IVRCompositor::__get_ShouldAppRenderWithLowResources() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources, 0xe8>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_ForceInterleavedReprojectionOn(OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn, 0xf0>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn OVR::OpenVR::IVRCompositor::__get_ForceInterleavedReprojectionOn() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn, 0xf0>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_ForceReconnectProcess(OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceReconnectProcess value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceReconnectProcess, 0xf8>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceReconnectProcess>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceReconnectProcess OVR::OpenVR::IVRCompositor::__get_ForceReconnectProcess() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ForceReconnectProcess, 0xf8>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_SuspendRendering(OVR::OpenVR::OVR__OpenVR__IVRCompositor___SuspendRendering value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SuspendRendering, 0x100>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SuspendRendering>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___SuspendRendering OVR::OpenVR::IVRCompositor::__get_SuspendRendering() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SuspendRendering, 0x100>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_GetMirrorTextureD3D11(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11 value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11, 0x108>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11 OVR::OpenVR::IVRCompositor::__get_GetMirrorTextureD3D11() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11, 0x108>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_ReleaseMirrorTextureD3D11(OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11 value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11, 0x110>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11 OVR::OpenVR::IVRCompositor::__get_ReleaseMirrorTextureD3D11() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11, 0x110>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_GetMirrorTextureGL(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureGL value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureGL, 0x118>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureGL>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureGL OVR::OpenVR::IVRCompositor::__get_GetMirrorTextureGL() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetMirrorTextureGL, 0x118>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_ReleaseSharedGLTexture(OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture, 0x120>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture OVR::OpenVR::IVRCompositor::__get_ReleaseSharedGLTexture() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture, 0x120>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_LockGLSharedTextureForAccess(OVR::OpenVR::OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess, 0x128>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess OVR::OpenVR::IVRCompositor::__get_LockGLSharedTextureForAccess() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess, 0x128>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_UnlockGLSharedTextureForAccess(OVR::OpenVR::OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess, 0x130>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess OVR::OpenVR::IVRCompositor::__get_UnlockGLSharedTextureForAccess() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess, 0x130>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_GetVulkanInstanceExtensionsRequired(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired, 0x138>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired OVR::OpenVR::IVRCompositor::__get_GetVulkanInstanceExtensionsRequired() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired, 0x138>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_GetVulkanDeviceExtensionsRequired(OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired, 0x140>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired OVR::OpenVR::IVRCompositor::__get_GetVulkanDeviceExtensionsRequired() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired, 0x140>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_SetExplicitTimingMode(OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetExplicitTimingMode value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetExplicitTimingMode, 0x148>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetExplicitTimingMode>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetExplicitTimingMode OVR::OpenVR::IVRCompositor::__get_SetExplicitTimingMode() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SetExplicitTimingMode, 0x148>(this->__instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_SubmitExplicitTimingData(OVR::OpenVR::OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData, 0x150>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData OVR::OpenVR::IVRCompositor::__get_SubmitExplicitTimingData() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData, 0x150>(this->__instance);
}
