#pragma once
#include "System/IO/zzzz__IOException_impl.hpp"
#include "System/IO/zzzz__DriveNotFoundException_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: System::IO::DriveNotFoundException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::DriveNotFoundException::*)()>(&System::IO::DriveNotFoundException::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x23d0cb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::DriveNotFoundException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::DriveNotFoundException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::DriveNotFoundException::*)(::StringW)>(&System::IO::DriveNotFoundException::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x23d0d0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::DriveNotFoundException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::DriveNotFoundException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::DriveNotFoundException::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::IO::DriveNotFoundException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d0d30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::DriveNotFoundException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 System::IO::DriveNotFoundException::DriveNotFoundException()  : System::IO::IOException(THROW_UNLESS(::il2cpp_utils::New<DriveNotFoundException>())) {}
 void System::IO::DriveNotFoundException::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::DriveNotFoundException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
 System::IO::DriveNotFoundException::DriveNotFoundException(::StringW message)  : System::IO::IOException(THROW_UNLESS(::il2cpp_utils::New<DriveNotFoundException>(message))) {}
 void System::IO::DriveNotFoundException::_ctor(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::DriveNotFoundException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message);
}
// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
 System::IO::DriveNotFoundException::DriveNotFoundException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  : System::IO::IOException(THROW_UNLESS(::il2cpp_utils::New<DriveNotFoundException>(info, context))) {}
 void System::IO::DriveNotFoundException::_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::DriveNotFoundException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
