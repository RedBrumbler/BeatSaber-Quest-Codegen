#pragma once
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpSignature_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpUserAttributeSubpacketVector_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpSignatureSubpacketVector_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignaturePacket_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPublicKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__Packet_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__TrustPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.Cast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::SignaturePacket (*)(Org::BouncyCastle::Bcpg::Packet)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::Cast)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x104ad1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "Cast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::Packet>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(Org::BouncyCastle::Bcpg::BcpgInputStream)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x104adec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::BcpgInputStream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(Org::BouncyCastle::Bcpg::SignaturePacket)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104ae20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SignaturePacket>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(Org::BouncyCastle::Bcpg::SignaturePacket, Org::BouncyCastle::Bcpg::TrustPacket)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x104ae28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SignaturePacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::TrustPacket>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.GetSig
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetSig)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x104aeb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "GetSig",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.get_Version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_Version)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x104b0ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.get_KeyAlgorithm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag (Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_KeyAlgorithm)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x104b0c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "get_KeyAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.get_HashAlgorithm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::HashAlgorithmTag (Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_HashAlgorithm)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x104b0e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "get_HashAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.IsCertification
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::IsCertification)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x104b100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "IsCertification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.InitVerify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::InitVerify)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x104b154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "InitVerify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(uint8_t)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::Update)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x104b2f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.doCanonicalUpdateByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(uint8_t)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::doCanonicalUpdateByte)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x104b3c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "doCanonicalUpdateByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.doUpdateCRLF
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::doUpdateCRLF)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x104b4a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "doUpdateCRLF",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::Update)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x104b5b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::Update)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x104b5d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.Verify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::Verify)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x104b6e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "Verify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.UpdateWithIdData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(int32_t, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::UpdateWithIdData)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x104bb18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "UpdateWithIdData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.UpdateWithPublicKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::UpdateWithPublicKey)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x104bbe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "UpdateWithPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.VerifyCertification
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::VerifyCertification)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x104bda4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "VerifyCertification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.VerifyCertification
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(::StringW, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::VerifyCertification)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x104c020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "VerifyCertification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.VerifyCertification
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::VerifyCertification)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x104c128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "VerifyCertification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.VerifyCertification
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::VerifyCertification)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x104c220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "VerifyCertification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.get_SignatureType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_SignatureType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x104b128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "get_SignatureType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.get_KeyId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_KeyId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x104c364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "get_KeyId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.GetCreationTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetCreationTime)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x104c380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "GetCreationTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.get_CreationTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_CreationTime)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x104c384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "get_CreationTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.GetSignatureTrailer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetSignatureTrailer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x104b82c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "GetSignatureTrailer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.get_HasSubpackets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_HasSubpackets)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x104c3ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "get_HasSubpackets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.GetHashedSubPackets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector (Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetHashedSubPackets)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x104c420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "GetHashedSubPackets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.GetUnhashedSubPackets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector (Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetUnhashedSubPackets)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x104c4ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "GetUnhashedSubPackets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.createSubpacketVector
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector (Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(::ArrayW<Org::BouncyCastle::Bcpg::SignatureSubpacket>)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::createSubpacketVector)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x104c43c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "createSubpacketVector",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Bcpg::SignatureSubpacket>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.GetSignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetSignature)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x104b848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "GetSignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.GetEncoded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetEncoded)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x104c4f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "GetEncoded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.Encode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(System::IO::Stream)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::Encode)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1044af8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "Encode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.GetEncodedPublicKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetEncodedPublicKey)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x104bca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "GetEncodedPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.IsCertification
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::IsCertification)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x104b144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "IsCertification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__set_sigPck(Org::BouncyCastle::Bcpg::SignaturePacket value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Bcpg::SignaturePacket, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Bcpg::SignaturePacket>(value));
}
constexpr Org::BouncyCastle::Bcpg::SignaturePacket Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__get_sigPck() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Bcpg::SignaturePacket, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__set_signatureType(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__get_signatureType() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__set_trustPck(Org::BouncyCastle::Bcpg::TrustPacket value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Bcpg::TrustPacket, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Bcpg::TrustPacket>(value));
}
constexpr Org::BouncyCastle::Bcpg::TrustPacket Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__get_trustPck() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Bcpg::TrustPacket, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__set_sig(Org::BouncyCastle::Crypto::ISigner value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::ISigner, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::ISigner>(value));
}
constexpr Org::BouncyCastle::Crypto::ISigner Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__get_sig() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::ISigner, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__set_lastb(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__get_lastb() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Bcpg::SignaturePacket Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::Cast(Org::BouncyCastle::Bcpg::Packet packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "Cast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::Packet>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::SignaturePacket, false>(nullptr, ___internal_method, packet);
}
// Ctor Parameters [CppParam { name: "bcpgInput", ty: "Org::BouncyCastle::Bcpg::BcpgInputStream", modifiers: "", def_value: None }]
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::PgpSignature(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgInput)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PgpSignature>(bcpgInput))) {}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::_ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgInput)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::BcpgInputStream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bcpgInput);
}
// Ctor Parameters [CppParam { name: "sigPacket", ty: "Org::BouncyCastle::Bcpg::SignaturePacket", modifiers: "", def_value: None }]
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::PgpSignature(Org::BouncyCastle::Bcpg::SignaturePacket sigPacket)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PgpSignature>(sigPacket))) {}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::_ctor(Org::BouncyCastle::Bcpg::SignaturePacket sigPacket)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SignaturePacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sigPacket);
}
// Ctor Parameters [CppParam { name: "sigPacket", ty: "Org::BouncyCastle::Bcpg::SignaturePacket", modifiers: "", def_value: None }, CppParam { name: "trustPacket", ty: "Org::BouncyCastle::Bcpg::TrustPacket", modifiers: "", def_value: None }]
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::PgpSignature(Org::BouncyCastle::Bcpg::SignaturePacket sigPacket, Org::BouncyCastle::Bcpg::TrustPacket trustPacket)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PgpSignature>(sigPacket, trustPacket))) {}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::_ctor(Org::BouncyCastle::Bcpg::SignaturePacket sigPacket, Org::BouncyCastle::Bcpg::TrustPacket trustPacket)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SignaturePacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::TrustPacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sigPacket, trustPacket);
}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetSig()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "GetSig",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_Version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_KeyAlgorithm()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "get_KeyAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Bcpg::HashAlgorithmTag Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_HashAlgorithm()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "get_HashAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::HashAlgorithmTag, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::IsCertification()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "IsCertification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::InitVerify(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "InitVerify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pubKey);
}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::Update(uint8_t b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, b);
}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::doCanonicalUpdateByte(uint8_t b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "doCanonicalUpdateByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, b);
}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::doUpdateCRLF()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "doUpdateCRLF",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::Update(::ArrayW<uint8_t> bytes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bytes);
}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::Update(::ArrayW<uint8_t> bytes, int32_t off, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bytes, off, length);
}
 bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::Verify()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "Verify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::UpdateWithIdData(int32_t header, ::ArrayW<uint8_t> idBytes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "UpdateWithIdData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, header, idBytes);
}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::UpdateWithPublicKey(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "UpdateWithPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key);
}
 bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::VerifyCertification(Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector userAttributes, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "VerifyCertification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, userAttributes, key);
}
 bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::VerifyCertification(::StringW id, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "VerifyCertification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, id, key);
}
 bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::VerifyCertification(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey masterKey, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "VerifyCertification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, masterKey, pubKey);
}
 bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::VerifyCertification(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "VerifyCertification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pubKey);
}
 int32_t Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_SignatureType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "get_SignatureType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_KeyId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "get_KeyId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::DateTime Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetCreationTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "GetCreationTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::DateTime, false>(const_cast<void*>(instance), ___internal_method);
}
 System::DateTime Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_CreationTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "get_CreationTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::DateTime, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetSignatureTrailer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "GetSignatureTrailer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_HasSubpackets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "get_HasSubpackets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetHashedSubPackets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "GetHashedSubPackets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetUnhashedSubPackets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "GetUnhashedSubPackets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::createSubpacketVector(::ArrayW<Org::BouncyCastle::Bcpg::SignatureSubpacket> pcks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "createSubpacketVector",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Bcpg::SignatureSubpacket>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector, false>(const_cast<void*>(instance), ___internal_method, pcks);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetSignature()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "GetSignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetEncoded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "GetEncoded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::Encode(System::IO::Stream outStream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "Encode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, outStream);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetEncodedPublicKey(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "GetEncodedPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, pubKey);
}
 bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::IsCertification(int32_t signatureType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get(),
                            "IsCertification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, signatureType);
}
