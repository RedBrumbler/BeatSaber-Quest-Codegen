#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__SignerInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__IssuerAndSerialNumber_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Asn1::Pkcs::SignerInfo.GetInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Pkcs::SignerInfo (*)(::bs_hook::Il2CppWrapperType)>(&Org::BouncyCastle::Asn1::Pkcs::SignerInfo::GetInstance)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xf10d48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Pkcs::SignerInfo>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Pkcs::SignerInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::Pkcs::SignerInfo::*)(Org::BouncyCastle::Asn1::DerInteger, Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, Org::BouncyCastle::Asn1::Asn1Set, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, Org::BouncyCastle::Asn1::Asn1OctetString, Org::BouncyCastle::Asn1::Asn1Set)>(&Org::BouncyCastle::Asn1::Pkcs::SignerInfo::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xf11574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Pkcs::SignerInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Set>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1OctetString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Set>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Pkcs::SignerInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::Pkcs::SignerInfo::*)(Org::BouncyCastle::Asn1::Asn1Sequence)>(&Org::BouncyCastle::Asn1::Pkcs::SignerInfo::_ctor)> {
  constexpr static std::size_t size = 0x6a4;
  constexpr static std::size_t addrs = 0xf10ed0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Pkcs::SignerInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Pkcs::SignerInfo.get_Version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerInteger (Org::BouncyCastle::Asn1::Pkcs::SignerInfo::*)()>(&Org::BouncyCastle::Asn1::Pkcs::SignerInfo::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf115d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Pkcs::SignerInfo>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Pkcs::SignerInfo.get_IssuerAndSerialNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber (Org::BouncyCastle::Asn1::Pkcs::SignerInfo::*)()>(&Org::BouncyCastle::Asn1::Pkcs::SignerInfo::get_IssuerAndSerialNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf115e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Pkcs::SignerInfo>::get(),
                            "get_IssuerAndSerialNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Pkcs::SignerInfo.get_AuthenticatedAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Set (Org::BouncyCastle::Asn1::Pkcs::SignerInfo::*)()>(&Org::BouncyCastle::Asn1::Pkcs::SignerInfo::get_AuthenticatedAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf115e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Pkcs::SignerInfo>::get(),
                            "get_AuthenticatedAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Pkcs::SignerInfo.get_DigestAlgorithm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier (Org::BouncyCastle::Asn1::Pkcs::SignerInfo::*)()>(&Org::BouncyCastle::Asn1::Pkcs::SignerInfo::get_DigestAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf115f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Pkcs::SignerInfo>::get(),
                            "get_DigestAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Pkcs::SignerInfo.get_EncryptedDigest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1OctetString (Org::BouncyCastle::Asn1::Pkcs::SignerInfo::*)()>(&Org::BouncyCastle::Asn1::Pkcs::SignerInfo::get_EncryptedDigest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf115f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Pkcs::SignerInfo>::get(),
                            "get_EncryptedDigest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Pkcs::SignerInfo.get_DigestEncryptionAlgorithm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier (Org::BouncyCastle::Asn1::Pkcs::SignerInfo::*)()>(&Org::BouncyCastle::Asn1::Pkcs::SignerInfo::get_DigestEncryptionAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf11600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Pkcs::SignerInfo>::get(),
                            "get_DigestEncryptionAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Pkcs::SignerInfo.get_UnauthenticatedAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Set (Org::BouncyCastle::Asn1::Pkcs::SignerInfo::*)()>(&Org::BouncyCastle::Asn1::Pkcs::SignerInfo::get_UnauthenticatedAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf11608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Pkcs::SignerInfo>::get(),
                            "get_UnauthenticatedAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Pkcs::SignerInfo.ToAsn1Object
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object (Org::BouncyCastle::Asn1::Pkcs::SignerInfo::*)()>(&Org::BouncyCastle::Asn1::Pkcs::SignerInfo::ToAsn1Object)> {
  constexpr static std::size_t size = 0x11fc;
  constexpr static std::size_t addrs = 0xf11610;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::Pkcs::SignerInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Pkcs::SignerInfo>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Asn1::Pkcs::SignerInfo::__set_version(Org::BouncyCastle::Asn1::DerInteger value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::DerInteger, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::DerInteger>(value));
}
constexpr Org::BouncyCastle::Asn1::DerInteger Org::BouncyCastle::Asn1::Pkcs::SignerInfo::__get_version() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::DerInteger, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::Pkcs::SignerInfo::__set_issuerAndSerialNumber(Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber>(value));
}
constexpr Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber Org::BouncyCastle::Asn1::Pkcs::SignerInfo::__get_issuerAndSerialNumber() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::Pkcs::SignerInfo::__set_digAlgorithm(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>(value));
}
constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier Org::BouncyCastle::Asn1::Pkcs::SignerInfo::__get_digAlgorithm() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::Pkcs::SignerInfo::__set_authenticatedAttributes(Org::BouncyCastle::Asn1::Asn1Set value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Asn1Set, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Asn1Set>(value));
}
constexpr Org::BouncyCastle::Asn1::Asn1Set Org::BouncyCastle::Asn1::Pkcs::SignerInfo::__get_authenticatedAttributes() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Asn1Set, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::Pkcs::SignerInfo::__set_digEncryptionAlgorithm(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>(value));
}
constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier Org::BouncyCastle::Asn1::Pkcs::SignerInfo::__get_digEncryptionAlgorithm() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::Pkcs::SignerInfo::__set_encryptedDigest(Org::BouncyCastle::Asn1::Asn1OctetString value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Asn1OctetString, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Asn1OctetString>(value));
}
constexpr Org::BouncyCastle::Asn1::Asn1OctetString Org::BouncyCastle::Asn1::Pkcs::SignerInfo::__get_encryptedDigest() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Asn1OctetString, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::Pkcs::SignerInfo::__set_unauthenticatedAttributes(Org::BouncyCastle::Asn1::Asn1Set value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Asn1Set, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Asn1Set>(value));
}
constexpr Org::BouncyCastle::Asn1::Asn1Set Org::BouncyCastle::Asn1::Pkcs::SignerInfo::__get_unauthenticatedAttributes() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Asn1Set, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Asn1::Pkcs::SignerInfo Org::BouncyCastle::Asn1::Pkcs::SignerInfo::GetInstance(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Pkcs::SignerInfo>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Pkcs::SignerInfo, false>(nullptr, ___internal_method, obj);
}
// Ctor Parameters [CppParam { name: "version", ty: "Org::BouncyCastle::Asn1::DerInteger", modifiers: "", def_value: None }, CppParam { name: "issuerAndSerialNumber", ty: "Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber", modifiers: "", def_value: None }, CppParam { name: "digAlgorithm", ty: "Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "authenticatedAttributes", ty: "Org::BouncyCastle::Asn1::Asn1Set", modifiers: "", def_value: None }, CppParam { name: "digEncryptionAlgorithm", ty: "Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "encryptedDigest", ty: "Org::BouncyCastle::Asn1::Asn1OctetString", modifiers: "", def_value: None }, CppParam { name: "unauthenticatedAttributes", ty: "Org::BouncyCastle::Asn1::Asn1Set", modifiers: "", def_value: None }]
 Org::BouncyCastle::Asn1::Pkcs::SignerInfo::SignerInfo(Org::BouncyCastle::Asn1::DerInteger version, Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber issuerAndSerialNumber, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier digAlgorithm, Org::BouncyCastle::Asn1::Asn1Set authenticatedAttributes, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier digEncryptionAlgorithm, Org::BouncyCastle::Asn1::Asn1OctetString encryptedDigest, Org::BouncyCastle::Asn1::Asn1Set unauthenticatedAttributes)  : Org::BouncyCastle::Asn1::Asn1Encodable(THROW_UNLESS(::il2cpp_utils::New<SignerInfo>(version, issuerAndSerialNumber, digAlgorithm, authenticatedAttributes, digEncryptionAlgorithm, encryptedDigest, unauthenticatedAttributes))) {}
 void Org::BouncyCastle::Asn1::Pkcs::SignerInfo::_ctor(Org::BouncyCastle::Asn1::DerInteger version, Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber issuerAndSerialNumber, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier digAlgorithm, Org::BouncyCastle::Asn1::Asn1Set authenticatedAttributes, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier digEncryptionAlgorithm, Org::BouncyCastle::Asn1::Asn1OctetString encryptedDigest, Org::BouncyCastle::Asn1::Asn1Set unauthenticatedAttributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Pkcs::SignerInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Set>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1OctetString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Set>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, version, issuerAndSerialNumber, digAlgorithm, authenticatedAttributes, digEncryptionAlgorithm, encryptedDigest, unauthenticatedAttributes);
}
// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
 Org::BouncyCastle::Asn1::Pkcs::SignerInfo::SignerInfo(Org::BouncyCastle::Asn1::Asn1Sequence seq)  : Org::BouncyCastle::Asn1::Asn1Encodable(THROW_UNLESS(::il2cpp_utils::New<SignerInfo>(seq))) {}
 void Org::BouncyCastle::Asn1::Pkcs::SignerInfo::_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Pkcs::SignerInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, seq);
}
 Org::BouncyCastle::Asn1::DerInteger Org::BouncyCastle::Asn1::Pkcs::SignerInfo::get_Version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Pkcs::SignerInfo>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::DerInteger, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber Org::BouncyCastle::Asn1::Pkcs::SignerInfo::get_IssuerAndSerialNumber()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Pkcs::SignerInfo>::get(),
                            "get_IssuerAndSerialNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::Asn1Set Org::BouncyCastle::Asn1::Pkcs::SignerInfo::get_AuthenticatedAttributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Pkcs::SignerInfo>::get(),
                            "get_AuthenticatedAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Asn1Set, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier Org::BouncyCastle::Asn1::Pkcs::SignerInfo::get_DigestAlgorithm()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Pkcs::SignerInfo>::get(),
                            "get_DigestAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::Asn1OctetString Org::BouncyCastle::Asn1::Pkcs::SignerInfo::get_EncryptedDigest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Pkcs::SignerInfo>::get(),
                            "get_EncryptedDigest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Asn1OctetString, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier Org::BouncyCastle::Asn1::Pkcs::SignerInfo::get_DigestEncryptionAlgorithm()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Pkcs::SignerInfo>::get(),
                            "get_DigestEncryptionAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::Asn1Set Org::BouncyCastle::Asn1::Pkcs::SignerInfo::get_UnauthenticatedAttributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Pkcs::SignerInfo>::get(),
                            "get_UnauthenticatedAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Asn1Set, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::Asn1Object Org::BouncyCastle::Asn1::Pkcs::SignerInfo::ToAsn1Object()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Pkcs::SignerInfo>::get(),
                            "ToAsn1Object",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Asn1Object, false>(const_cast<void*>(instance), ___internal_method);
}
