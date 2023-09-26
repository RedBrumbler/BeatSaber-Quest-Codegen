#pragma once
#include "Org/BouncyCastle/Cmp/zzzz__CertificateConfirmationContent_def.hpp"
#include "Org/BouncyCastle/Cmp/zzzz__CertificateStatus_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__DefaultDigestAlgorithmIdentifierFinder_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__CertConfirmContent_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Cmp::CertificateConfirmationContent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cmp::CertificateConfirmationContent::*)(Org::BouncyCastle::Asn1::Cmp::CertConfirmContent)>(&Org::BouncyCastle::Cmp::CertificateConfirmationContent::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1157f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::CertificateConfirmationContent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cmp::CertConfirmContent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cmp::CertificateConfirmationContent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cmp::CertificateConfirmationContent::*)(Org::BouncyCastle::Asn1::Cmp::CertConfirmContent, Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder)>(&Org::BouncyCastle::Cmp::CertificateConfirmationContent::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1157fc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::CertificateConfirmationContent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cmp::CertConfirmContent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cmp::CertificateConfirmationContent.ToAsn1Structure
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Cmp::CertConfirmContent (Org::BouncyCastle::Cmp::CertificateConfirmationContent::*)()>(&Org::BouncyCastle::Cmp::CertificateConfirmationContent::ToAsn1Structure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1157ff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::CertificateConfirmationContent>::get(),
                            "ToAsn1Structure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cmp::CertificateConfirmationContent.GetStatusMessages
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<Org::BouncyCastle::Cmp::CertificateStatus> (Org::BouncyCastle::Cmp::CertificateConfirmationContent::*)()>(&Org::BouncyCastle::Cmp::CertificateConfirmationContent::GetStatusMessages)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x1157ff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::CertificateConfirmationContent>::get(),
                            "GetStatusMessages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Cmp::CertificateConfirmationContent::__set_digestAlgFinder(Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder>(value));
}
constexpr Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder Org::BouncyCastle::Cmp::CertificateConfirmationContent::__get_digestAlgFinder() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cmp::CertificateConfirmationContent::__set_content(Org::BouncyCastle::Asn1::Cmp::CertConfirmContent value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Cmp::CertConfirmContent, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Cmp::CertConfirmContent>(value));
}
constexpr Org::BouncyCastle::Asn1::Cmp::CertConfirmContent Org::BouncyCastle::Cmp::CertificateConfirmationContent::__get_content() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Cmp::CertConfirmContent, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "content", ty: "Org::BouncyCastle::Asn1::Cmp::CertConfirmContent", modifiers: "", def_value: None }]
 Org::BouncyCastle::Cmp::CertificateConfirmationContent::CertificateConfirmationContent(Org::BouncyCastle::Asn1::Cmp::CertConfirmContent content)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CertificateConfirmationContent>(content))) {}
 void Org::BouncyCastle::Cmp::CertificateConfirmationContent::_ctor(Org::BouncyCastle::Asn1::Cmp::CertConfirmContent content)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::CertificateConfirmationContent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cmp::CertConfirmContent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, content);
}
// Ctor Parameters [CppParam { name: "content", ty: "Org::BouncyCastle::Asn1::Cmp::CertConfirmContent", modifiers: "", def_value: None }, CppParam { name: "digestAlgFinder", ty: "Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder", modifiers: "", def_value: None }]
 Org::BouncyCastle::Cmp::CertificateConfirmationContent::CertificateConfirmationContent(Org::BouncyCastle::Asn1::Cmp::CertConfirmContent content, Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder digestAlgFinder)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CertificateConfirmationContent>(content, digestAlgFinder))) {}
 void Org::BouncyCastle::Cmp::CertificateConfirmationContent::_ctor(Org::BouncyCastle::Asn1::Cmp::CertConfirmContent content, Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder digestAlgFinder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::CertificateConfirmationContent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cmp::CertConfirmContent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, content, digestAlgFinder);
}
 Org::BouncyCastle::Asn1::Cmp::CertConfirmContent Org::BouncyCastle::Cmp::CertificateConfirmationContent::ToAsn1Structure()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::CertificateConfirmationContent>::get(),
                            "ToAsn1Structure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Cmp::CertConfirmContent, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<Org::BouncyCastle::Cmp::CertificateStatus> Org::BouncyCastle::Cmp::CertificateConfirmationContent::GetStatusMessages()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::CertificateConfirmationContent>::get(),
                            "GetStatusMessages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<Org::BouncyCastle::Cmp::CertificateStatus>, false>(const_cast<void*>(instance), ___internal_method);
}
