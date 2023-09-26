#pragma once
#include "Org/BouncyCastle/Cms/zzzz__RecipientInformation_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__KekRecipientInformation_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__KekRecipientInfo_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsTypedStream_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSecureReadable_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Cms::KekRecipientInformation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::KekRecipientInformation::*)(Org::BouncyCastle::Asn1::Cms::KekRecipientInfo, Org::BouncyCastle::Cms::CmsSecureReadable)>(&Org::BouncyCastle::Cms::KekRecipientInformation::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x1165530;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KekRecipientInformation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::KekRecipientInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsSecureReadable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::KekRecipientInformation.GetContentStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Cms::CmsTypedStream (Org::BouncyCastle::Cms::KekRecipientInformation::*)(Org::BouncyCastle::Crypto::ICipherParameters)>(&Org::BouncyCastle::Cms::KekRecipientInformation::GetContentStream)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x1184350;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Cms::KekRecipientInformation),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KekRecipientInformation>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Cms::KekRecipientInformation::__set_info(Org::BouncyCastle::Asn1::Cms::KekRecipientInfo value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Cms::KekRecipientInfo, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Cms::KekRecipientInfo>(value));
}
constexpr Org::BouncyCastle::Asn1::Cms::KekRecipientInfo Org::BouncyCastle::Cms::KekRecipientInformation::__get_info() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Cms::KekRecipientInfo, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "info", ty: "Org::BouncyCastle::Asn1::Cms::KekRecipientInfo", modifiers: "", def_value: None }, CppParam { name: "secureReadable", ty: "Org::BouncyCastle::Cms::CmsSecureReadable", modifiers: "", def_value: None }]
 Org::BouncyCastle::Cms::KekRecipientInformation::KekRecipientInformation(Org::BouncyCastle::Asn1::Cms::KekRecipientInfo info, Org::BouncyCastle::Cms::CmsSecureReadable secureReadable)  : Org::BouncyCastle::Cms::RecipientInformation(THROW_UNLESS(::il2cpp_utils::New<KekRecipientInformation>(info, secureReadable))) {}
 void Org::BouncyCastle::Cms::KekRecipientInformation::_ctor(Org::BouncyCastle::Asn1::Cms::KekRecipientInfo info, Org::BouncyCastle::Cms::CmsSecureReadable secureReadable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KekRecipientInformation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::KekRecipientInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsSecureReadable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, secureReadable);
}
 Org::BouncyCastle::Cms::CmsTypedStream Org::BouncyCastle::Cms::KekRecipientInformation::GetContentStream(Org::BouncyCastle::Crypto::ICipherParameters key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KekRecipientInformation>::get(),
                            "GetContentStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Cms::CmsTypedStream, false>(const_cast<void*>(instance), ___internal_method, key);
}
