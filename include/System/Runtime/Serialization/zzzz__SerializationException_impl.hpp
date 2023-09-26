#pragma once
#include "System/zzzz__SystemException_impl.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: System::Runtime::Serialization::SerializationException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::SerializationException::*)()>(&System::Runtime::Serialization::SerializationException::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2380f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SerializationException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::SerializationException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::SerializationException::*)(::StringW)>(&System::Runtime::Serialization::SerializationException::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2381008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SerializationException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::SerializationException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::SerializationException::*)(::StringW, System::Exception)>(&System::Runtime::Serialization::SerializationException::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x238102c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SerializationException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::SerializationException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::SerializationException::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::Runtime::Serialization::SerializationException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2381050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SerializationException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::Runtime::Serialization::SerializationException::__set_s_nullMessage(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "s_nullMessage", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SerializationException>::get>(std::forward<::StringW>(value));
}
 ::StringW System::Runtime::Serialization::SerializationException::__get_s_nullMessage()  {
return ::cordl_internals::getStaticField<::StringW, "s_nullMessage", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SerializationException>::get>();
}
// Ctor Parameters []
 System::Runtime::Serialization::SerializationException::SerializationException()  : System::SystemException(THROW_UNLESS(::il2cpp_utils::New<SerializationException>())) {}
 void System::Runtime::Serialization::SerializationException::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SerializationException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
 System::Runtime::Serialization::SerializationException::SerializationException(::StringW message)  : System::SystemException(THROW_UNLESS(::il2cpp_utils::New<SerializationException>(message))) {}
 void System::Runtime::Serialization::SerializationException::_ctor(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SerializationException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message);
}
// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "System::Exception", modifiers: "", def_value: None }]
 System::Runtime::Serialization::SerializationException::SerializationException(::StringW message, System::Exception innerException)  : System::SystemException(THROW_UNLESS(::il2cpp_utils::New<SerializationException>(message, innerException))) {}
 void System::Runtime::Serialization::SerializationException::_ctor(::StringW message, System::Exception innerException)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SerializationException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message, innerException);
}
// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
 System::Runtime::Serialization::SerializationException::SerializationException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  : System::SystemException(THROW_UNLESS(::il2cpp_utils::New<SerializationException>(info, context))) {}
 void System::Runtime::Serialization::SerializationException::_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SerializationException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
