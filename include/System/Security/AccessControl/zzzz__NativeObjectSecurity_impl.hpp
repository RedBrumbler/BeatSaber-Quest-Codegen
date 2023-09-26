#pragma once
#include "System/Security/AccessControl/zzzz__CommonObjectSecurity_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Security/AccessControl/zzzz__NativeObjectSecurity_def.hpp"
#include "System/Runtime/InteropServices/zzzz__SafeHandle_def.hpp"
#include "System/Security/AccessControl/zzzz__AccessControlSections_def.hpp"
#include "System/Security/AccessControl/zzzz__ResourceType_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: System::Security::AccessControl::System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&System::Security::AccessControl::System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2351e64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::AccessControl::System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception (System::Security::AccessControl::System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode::*)(int32_t, ::StringW, System::Runtime::InteropServices::SafeHandle, ::bs_hook::Il2CppWrapperType)>(&System::Security::AccessControl::System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2351f68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::AccessControl::System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 System::Security::AccessControl::System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode::System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode>(object, method))) {}
 void System::Security::AccessControl::System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 System::Exception System::Security::AccessControl::System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode::Invoke(int32_t errorCode, ::StringW name, System::Runtime::InteropServices::SafeHandle handle, ::bs_hook::Il2CppWrapperType context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::InteropServices::SafeHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Exception, false>(const_cast<void*>(instance), ___internal_method, errorCode, name, handle, context);
}
//  Writing Method size for method: System::Security::AccessControl::NativeObjectSecurity._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::NativeObjectSecurity::*)(bool, System::Security::AccessControl::ResourceType, System::Security::AccessControl::System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode, ::bs_hook::Il2CppWrapperType)>(&System::Security::AccessControl::NativeObjectSecurity::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2351ab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::NativeObjectSecurity>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::ResourceType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::AccessControl::NativeObjectSecurity._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::NativeObjectSecurity::*)(bool, System::Security::AccessControl::ResourceType, ::StringW, System::Security::AccessControl::AccessControlSections)>(&System::Security::AccessControl::NativeObjectSecurity::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2351174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::NativeObjectSecurity>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::ResourceType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::AccessControlSections>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::AccessControl::NativeObjectSecurity._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::NativeObjectSecurity::*)(bool, System::Security::AccessControl::ResourceType, ::StringW, System::Security::AccessControl::AccessControlSections, System::Security::AccessControl::System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode, ::bs_hook::Il2CppWrapperType)>(&System::Security::AccessControl::NativeObjectSecurity::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2351adc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::NativeObjectSecurity>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::ResourceType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::AccessControlSections>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::AccessControl::NativeObjectSecurity.ClearAccessControlSectionsModified
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::NativeObjectSecurity::*)()>(&System::Security::AccessControl::NativeObjectSecurity::ClearAccessControlSectionsModified)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2351bf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::NativeObjectSecurity>::get(),
                            "ClearAccessControlSectionsModified",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::AccessControl::NativeObjectSecurity.DefaultExceptionFromErrorCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception (*)(int32_t, ::StringW, System::Runtime::InteropServices::SafeHandle, ::bs_hook::Il2CppWrapperType)>(&System::Security::AccessControl::NativeObjectSecurity::DefaultExceptionFromErrorCode)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2351cdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::NativeObjectSecurity>::get(),
                            "DefaultExceptionFromErrorCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::InteropServices::SafeHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::AccessControl::NativeObjectSecurity.RaiseExceptionOnFailure
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::NativeObjectSecurity::*)(int32_t, ::StringW, System::Runtime::InteropServices::SafeHandle, ::bs_hook::Il2CppWrapperType)>(&System::Security::AccessControl::NativeObjectSecurity::RaiseExceptionOnFailure)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2351b50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::NativeObjectSecurity>::get(),
                            "RaiseExceptionOnFailure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::InteropServices::SafeHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::AccessControl::NativeObjectSecurity.InternalGet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Security::AccessControl::NativeObjectSecurity::*)(::StringW, System::Security::AccessControl::AccessControlSections)>(&System::Security::AccessControl::NativeObjectSecurity::InternalGet)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2351f28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::AccessControl::NativeObjectSecurity),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::NativeObjectSecurity>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
constexpr void System::Security::AccessControl::NativeObjectSecurity::__set_exception_from_error_code(System::Security::AccessControl::System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode value)  {
::cordl_internals::setInstanceField<System::Security::AccessControl::System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::AccessControl::System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode>(value));
}
constexpr System::Security::AccessControl::System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode System::Security::AccessControl::NativeObjectSecurity::__get_exception_from_error_code() const {
return ::cordl_internals::getInstanceField<System::Security::AccessControl::System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "isContainer", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "resourceType", ty: "System::Security::AccessControl::ResourceType", modifiers: "", def_value: None }, CppParam { name: "exceptionFromErrorCode", ty: "System::Security::AccessControl::System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode", modifiers: "", def_value: None }, CppParam { name: "exceptionContext", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
 System::Security::AccessControl::NativeObjectSecurity::NativeObjectSecurity(bool isContainer, System::Security::AccessControl::ResourceType resourceType, System::Security::AccessControl::System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode exceptionFromErrorCode, ::bs_hook::Il2CppWrapperType exceptionContext)  : System::Security::AccessControl::CommonObjectSecurity(THROW_UNLESS(::il2cpp_utils::New<NativeObjectSecurity>(isContainer, resourceType, exceptionFromErrorCode, exceptionContext))) {}
 void System::Security::AccessControl::NativeObjectSecurity::_ctor(bool isContainer, System::Security::AccessControl::ResourceType resourceType, System::Security::AccessControl::System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode exceptionFromErrorCode, ::bs_hook::Il2CppWrapperType exceptionContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::NativeObjectSecurity>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::ResourceType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, isContainer, resourceType, exceptionFromErrorCode, exceptionContext);
}
// Ctor Parameters [CppParam { name: "isContainer", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "resourceType", ty: "System::Security::AccessControl::ResourceType", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "includeSections", ty: "System::Security::AccessControl::AccessControlSections", modifiers: "", def_value: None }]
 System::Security::AccessControl::NativeObjectSecurity::NativeObjectSecurity(bool isContainer, System::Security::AccessControl::ResourceType resourceType, ::StringW name, System::Security::AccessControl::AccessControlSections includeSections)  : System::Security::AccessControl::CommonObjectSecurity(THROW_UNLESS(::il2cpp_utils::New<NativeObjectSecurity>(isContainer, resourceType, name, includeSections))) {}
 void System::Security::AccessControl::NativeObjectSecurity::_ctor(bool isContainer, System::Security::AccessControl::ResourceType resourceType, ::StringW name, System::Security::AccessControl::AccessControlSections includeSections)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::NativeObjectSecurity>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::ResourceType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::AccessControlSections>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, isContainer, resourceType, name, includeSections);
}
// Ctor Parameters [CppParam { name: "isContainer", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "resourceType", ty: "System::Security::AccessControl::ResourceType", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "includeSections", ty: "System::Security::AccessControl::AccessControlSections", modifiers: "", def_value: None }, CppParam { name: "exceptionFromErrorCode", ty: "System::Security::AccessControl::System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode", modifiers: "", def_value: None }, CppParam { name: "exceptionContext", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
 System::Security::AccessControl::NativeObjectSecurity::NativeObjectSecurity(bool isContainer, System::Security::AccessControl::ResourceType resourceType, ::StringW name, System::Security::AccessControl::AccessControlSections includeSections, System::Security::AccessControl::System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode exceptionFromErrorCode, ::bs_hook::Il2CppWrapperType exceptionContext)  : System::Security::AccessControl::CommonObjectSecurity(THROW_UNLESS(::il2cpp_utils::New<NativeObjectSecurity>(isContainer, resourceType, name, includeSections, exceptionFromErrorCode, exceptionContext))) {}
 void System::Security::AccessControl::NativeObjectSecurity::_ctor(bool isContainer, System::Security::AccessControl::ResourceType resourceType, ::StringW name, System::Security::AccessControl::AccessControlSections includeSections, System::Security::AccessControl::System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode exceptionFromErrorCode, ::bs_hook::Il2CppWrapperType exceptionContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::NativeObjectSecurity>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::ResourceType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::AccessControlSections>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, isContainer, resourceType, name, includeSections, exceptionFromErrorCode, exceptionContext);
}
 void System::Security::AccessControl::NativeObjectSecurity::ClearAccessControlSectionsModified()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::NativeObjectSecurity>::get(),
                            "ClearAccessControlSectionsModified",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Exception System::Security::AccessControl::NativeObjectSecurity::DefaultExceptionFromErrorCode(int32_t errorCode, ::StringW name, System::Runtime::InteropServices::SafeHandle handle, ::bs_hook::Il2CppWrapperType context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::NativeObjectSecurity>::get(),
                            "DefaultExceptionFromErrorCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::InteropServices::SafeHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Exception, false>(nullptr, ___internal_method, errorCode, name, handle, context);
}
 void System::Security::AccessControl::NativeObjectSecurity::RaiseExceptionOnFailure(int32_t errorCode, ::StringW name, System::Runtime::InteropServices::SafeHandle handle, ::bs_hook::Il2CppWrapperType context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::NativeObjectSecurity>::get(),
                            "RaiseExceptionOnFailure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::InteropServices::SafeHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, errorCode, name, handle, context);
}
 int32_t System::Security::AccessControl::NativeObjectSecurity::InternalGet(::StringW name, System::Security::AccessControl::AccessControlSections includeSections)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::NativeObjectSecurity>::get(),
                            "InternalGet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::AccessControlSections>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, name, includeSections);
}
