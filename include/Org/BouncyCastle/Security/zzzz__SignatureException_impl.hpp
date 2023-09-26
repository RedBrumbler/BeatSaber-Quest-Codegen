#pragma once
#include "Org/BouncyCastle/Security/zzzz__GeneralSecurityException_impl.hpp"
#include "Org/BouncyCastle/Security/zzzz__SignatureException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Security::SignatureException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Security::SignatureException::*)()>(&Org::BouncyCastle::Security::SignatureException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10c2be8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::SignatureException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::SignatureException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Security::SignatureException::*)(::StringW)>(&Org::BouncyCastle::Security::SignatureException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10c2bf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::SignatureException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::SignatureException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Security::SignatureException::*)(::StringW, System::Exception)>(&Org::BouncyCastle::Security::SignatureException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10c2bf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::SignatureException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 Org::BouncyCastle::Security::SignatureException::SignatureException()  : Org::BouncyCastle::Security::GeneralSecurityException(THROW_UNLESS(::il2cpp_utils::New<SignatureException>())) {}
 void Org::BouncyCastle::Security::SignatureException::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::SignatureException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
 Org::BouncyCastle::Security::SignatureException::SignatureException(::StringW message)  : Org::BouncyCastle::Security::GeneralSecurityException(THROW_UNLESS(::il2cpp_utils::New<SignatureException>(message))) {}
 void Org::BouncyCastle::Security::SignatureException::_ctor(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::SignatureException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message);
}
// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "exception", ty: "System::Exception", modifiers: "", def_value: None }]
 Org::BouncyCastle::Security::SignatureException::SignatureException(::StringW message, System::Exception exception)  : Org::BouncyCastle::Security::GeneralSecurityException(THROW_UNLESS(::il2cpp_utils::New<SignatureException>(message, exception))) {}
 void Org::BouncyCastle::Security::SignatureException::_ctor(::StringW message, System::Exception exception)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::SignatureException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message, exception);
}
