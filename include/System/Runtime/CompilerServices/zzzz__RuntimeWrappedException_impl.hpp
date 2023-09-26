#pragma once
#include "System/zzzz__Exception_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__RuntimeWrappedException_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: System::Runtime::CompilerServices::RuntimeWrappedException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::RuntimeWrappedException::*)(::bs_hook::Il2CppWrapperType)>(&System::Runtime::CompilerServices::RuntimeWrappedException::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x23a5f18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::RuntimeWrappedException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::RuntimeWrappedException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::RuntimeWrappedException::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::Runtime::CompilerServices::RuntimeWrappedException::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x23a5fa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::RuntimeWrappedException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::RuntimeWrappedException.GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::RuntimeWrappedException::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::Runtime::CompilerServices::RuntimeWrappedException::GetObjectData)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x23a60a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::CompilerServices::RuntimeWrappedException),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::RuntimeWrappedException>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::RuntimeWrappedException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::RuntimeWrappedException::*)()>(&System::Runtime::CompilerServices::RuntimeWrappedException::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x23a6184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::RuntimeWrappedException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::CompilerServices::RuntimeWrappedException::__set__wrappedException(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Runtime::CompilerServices::RuntimeWrappedException::__get__wrappedException() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "thrownObject", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
 System::Runtime::CompilerServices::RuntimeWrappedException::RuntimeWrappedException(::bs_hook::Il2CppWrapperType thrownObject)  : System::Exception(THROW_UNLESS(::il2cpp_utils::New<RuntimeWrappedException>(thrownObject))) {}
 void System::Runtime::CompilerServices::RuntimeWrappedException::_ctor(::bs_hook::Il2CppWrapperType thrownObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::RuntimeWrappedException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, thrownObject);
}
// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
 System::Runtime::CompilerServices::RuntimeWrappedException::RuntimeWrappedException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  : System::Exception(THROW_UNLESS(::il2cpp_utils::New<RuntimeWrappedException>(info, context))) {}
 void System::Runtime::CompilerServices::RuntimeWrappedException::_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::RuntimeWrappedException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 void System::Runtime::CompilerServices::RuntimeWrappedException::GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::RuntimeWrappedException>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
// Ctor Parameters []
 System::Runtime::CompilerServices::RuntimeWrappedException::RuntimeWrappedException()  : System::Exception(THROW_UNLESS(::il2cpp_utils::New<RuntimeWrappedException>())) {}
 void System::Runtime::CompilerServices::RuntimeWrappedException::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::RuntimeWrappedException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
