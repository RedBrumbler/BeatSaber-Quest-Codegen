#pragma once
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainImpl_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainImplMono_def.hpp"
#include "Mono/Security/X509/zzzz__X509Store_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2Collection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainStatusFlags_def.hpp"
#include "Mono/Security/X509/zzzz__X509Crl_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__StoreLocation_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X500DistinguishedName_def.hpp"
#include "Mono/Security/X509/zzzz__X509Extension_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainElementCollection_def.hpp"
#include "Mono/Security/X509/zzzz__X509Crl_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainElement_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Store_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainStatus_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainPolicy_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(bool)>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x281d4ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono.get_IsValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_IsValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x281d580;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::X509Certificates::X509ChainImplMono),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono.get_ChainElements
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509ChainElementCollection (System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_ChainElements)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x281d588;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::X509Certificates::X509ChainImplMono),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono.get_ChainPolicy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509ChainPolicy (System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_ChainPolicy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x281d590;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::X509Certificates::X509ChainImplMono),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono.get_ChainStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Security::Cryptography::X509Certificates::X509ChainStatus> (System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_ChainStatus)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x281d598;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::X509Certificates::X509ChainImplMono),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono.AddStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags)>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::AddStatus)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x281d5fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::X509Certificates::X509ChainImplMono),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono.Build
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(System::Security::Cryptography::X509Certificates::X509Certificate2)>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::Build)> {
  constexpr static std::size_t size = 0x5bc;
  constexpr static std::size_t addrs = 0x281d600;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::X509Certificates::X509ChainImplMono),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::Reset)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x281ddd8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::X509Certificates::X509ChainImplMono),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono.get_Roots
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509Certificate2Collection (System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_Roots)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x281dea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "get_Roots",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono.get_CertificateAuthorities
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509Certificate2Collection (System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_CertificateAuthorities)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x281e14c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "get_CertificateAuthorities",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono.get_LMRootStore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509Store (System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_LMRootStore)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x281df64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "get_LMRootStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono.get_UserRootStore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509Store (System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_UserRootStore)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x281e058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "get_UserRootStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono.get_LMCAStore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509Store (System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_LMCAStore)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x281e20c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "get_LMCAStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono.get_UserCAStore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509Store (System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_UserCAStore)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x281e300;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "get_UserCAStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono.get_CertificateCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509Certificate2Collection (System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_CertificateCollection)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x281e3f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "get_CertificateCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono.BuildChainFrom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509ChainStatusFlags (System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(System::Security::Cryptography::X509Certificates::X509Certificate2)>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::BuildChainFrom)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x281dbbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "BuildChainFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono.SelectBestFromCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509Certificate2 (System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(System::Security::Cryptography::X509Certificates::X509Certificate2, System::Security::Cryptography::X509Certificates::X509Certificate2Collection)>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::SelectBestFromCollection)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x281e904;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "SelectBestFromCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2Collection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono.FindParent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509Certificate2 (System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(System::Security::Cryptography::X509Certificates::X509Certificate2)>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::FindParent)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x281e728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "FindParent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono.IsChainComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(System::Security::Cryptography::X509Certificates::X509Certificate2)>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::IsChainComplete)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x281e83c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "IsChainComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono.IsSelfIssued
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(System::Security::Cryptography::X509Certificates::X509Certificate2)>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::IsSelfIssued)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x281ebe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "IsSelfIssued",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono.ValidateChain
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags)>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::ValidateChain)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x281dca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "ValidateChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(int32_t)>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::Process)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x281ec28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono.PrepareForNextCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(int32_t)>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::PrepareForNextCertificate)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x281eed0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "PrepareForNextCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono.WrapUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::WrapUp)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x281f2c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "WrapUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono.ProcessCertificateExtensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(System::Security::Cryptography::X509Certificates::X509ChainElement)>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::ProcessCertificateExtensions)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x281f388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "ProcessCertificateExtensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509ChainElement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono.IsSignedWith
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(System::Security::Cryptography::X509Certificates::X509Certificate2, System::Security::Cryptography::AsymmetricAlgorithm)>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::IsSignedWith)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x281f34c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "IsSignedWith",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::AsymmetricAlgorithm>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono.GetSubjectKeyIdentifier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(System::Security::Cryptography::X509Certificates::X509Certificate2)>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::GetSubjectKeyIdentifier)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x281eb28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "GetSubjectKeyIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono.GetAuthorityKeyIdentifier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::Security::Cryptography::X509Certificates::X509Certificate2)>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::GetAuthorityKeyIdentifier)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x281ea90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "GetAuthorityKeyIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono.GetAuthorityKeyIdentifier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(Mono::Security::X509::X509Crl)>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::GetAuthorityKeyIdentifier)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x281f5dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "GetAuthorityKeyIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::X509::X509Crl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono.GetAuthorityKeyIdentifier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(Mono::Security::X509::X509Extension)>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::GetAuthorityKeyIdentifier)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x281f480;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "GetAuthorityKeyIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::X509::X509Extension>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono.CheckRevocationOnChain
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags)>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::CheckRevocationOnChain)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x281f0d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "CheckRevocationOnChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono.CheckRevocation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509ChainStatusFlags (System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(System::Security::Cryptography::X509Certificates::X509Certificate2, int32_t, bool)>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::CheckRevocation)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x281f668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "CheckRevocation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono.CheckRevocation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509ChainStatusFlags (System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(System::Security::Cryptography::X509Certificates::X509Certificate2, System::Security::Cryptography::X509Certificates::X509Certificate2, bool)>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::CheckRevocation)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x281f734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "CheckRevocation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono.CheckCrls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::X509::X509Crl (*)(::StringW, ::StringW, Mono::Security::X509::X509Store)>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::CheckCrls)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x28200d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "CheckCrls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::X509::X509Store>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono.FindCrl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::X509::X509Crl (System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(System::Security::Cryptography::X509Certificates::X509Certificate2)>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::FindCrl)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x281f90c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "FindCrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono.ProcessCrlExtensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(Mono::Security::X509::X509Crl)>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::ProcessCrlExtensions)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x281fd90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "ProcessCrlExtensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::X509::X509Crl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono.ProcessCrlEntryExtensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(Mono::Security::X509::Mono__Security__X509__X509Crl__X509CrlEntry)>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::ProcessCrlEntryExtensions)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x281fa80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "ProcessCrlEntryExtensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::X509::Mono__Security__X509__X509Crl__X509CrlEntry>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__set_location(System::Security::Cryptography::X509Certificates::StoreLocation value)  {
::cordl_internals::setInstanceField<System::Security::Cryptography::X509Certificates::StoreLocation, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Cryptography::X509Certificates::StoreLocation>(value));
}
constexpr System::Security::Cryptography::X509Certificates::StoreLocation System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_location() const {
return ::cordl_internals::getInstanceField<System::Security::Cryptography::X509Certificates::StoreLocation, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__set_elements(System::Security::Cryptography::X509Certificates::X509ChainElementCollection value)  {
::cordl_internals::setInstanceField<System::Security::Cryptography::X509Certificates::X509ChainElementCollection, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Cryptography::X509Certificates::X509ChainElementCollection>(value));
}
constexpr System::Security::Cryptography::X509Certificates::X509ChainElementCollection System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_elements() const {
return ::cordl_internals::getInstanceField<System::Security::Cryptography::X509Certificates::X509ChainElementCollection, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__set_policy(System::Security::Cryptography::X509Certificates::X509ChainPolicy value)  {
::cordl_internals::setInstanceField<System::Security::Cryptography::X509Certificates::X509ChainPolicy, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Cryptography::X509Certificates::X509ChainPolicy>(value));
}
constexpr System::Security::Cryptography::X509Certificates::X509ChainPolicy System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_policy() const {
return ::cordl_internals::getInstanceField<System::Security::Cryptography::X509Certificates::X509ChainPolicy, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__set_status(::ArrayW<System::Security::Cryptography::X509Certificates::X509ChainStatus> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Security::Cryptography::X509Certificates::X509ChainStatus>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Security::Cryptography::X509Certificates::X509ChainStatus>>(value));
}
constexpr ::ArrayW<System::Security::Cryptography::X509Certificates::X509ChainStatus> System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_status() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Security::Cryptography::X509Certificates::X509ChainStatus>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__set_Empty(::ArrayW<System::Security::Cryptography::X509Certificates::X509ChainStatus> value)  {
::cordl_internals::setStaticField<::ArrayW<System::Security::Cryptography::X509Certificates::X509ChainStatus>, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get>(std::forward<::ArrayW<System::Security::Cryptography::X509Certificates::X509ChainStatus>>(value));
}
 ::ArrayW<System::Security::Cryptography::X509Certificates::X509ChainStatus> System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_Empty()  {
return ::cordl_internals::getStaticField<::ArrayW<System::Security::Cryptography::X509Certificates::X509ChainStatus>, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get>();
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__set_max_path_length(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_max_path_length() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__set_working_issuer_name(System::Security::Cryptography::X509Certificates::X500DistinguishedName value)  {
::cordl_internals::setInstanceField<System::Security::Cryptography::X509Certificates::X500DistinguishedName, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Cryptography::X509Certificates::X500DistinguishedName>(value));
}
constexpr System::Security::Cryptography::X509Certificates::X500DistinguishedName System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_working_issuer_name() const {
return ::cordl_internals::getInstanceField<System::Security::Cryptography::X509Certificates::X500DistinguishedName, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__set_working_public_key(System::Security::Cryptography::AsymmetricAlgorithm value)  {
::cordl_internals::setInstanceField<System::Security::Cryptography::AsymmetricAlgorithm, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Cryptography::AsymmetricAlgorithm>(value));
}
constexpr System::Security::Cryptography::AsymmetricAlgorithm System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_working_public_key() const {
return ::cordl_internals::getInstanceField<System::Security::Cryptography::AsymmetricAlgorithm, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__set_bce_restriction(System::Security::Cryptography::X509Certificates::X509ChainElement value)  {
::cordl_internals::setInstanceField<System::Security::Cryptography::X509Certificates::X509ChainElement, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Cryptography::X509Certificates::X509ChainElement>(value));
}
constexpr System::Security::Cryptography::X509Certificates::X509ChainElement System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_bce_restriction() const {
return ::cordl_internals::getInstanceField<System::Security::Cryptography::X509Certificates::X509ChainElement, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__set_roots(System::Security::Cryptography::X509Certificates::X509Certificate2Collection value)  {
::cordl_internals::setInstanceField<System::Security::Cryptography::X509Certificates::X509Certificate2Collection, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Cryptography::X509Certificates::X509Certificate2Collection>(value));
}
constexpr System::Security::Cryptography::X509Certificates::X509Certificate2Collection System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_roots() const {
return ::cordl_internals::getInstanceField<System::Security::Cryptography::X509Certificates::X509Certificate2Collection, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__set_cas(System::Security::Cryptography::X509Certificates::X509Certificate2Collection value)  {
::cordl_internals::setInstanceField<System::Security::Cryptography::X509Certificates::X509Certificate2Collection, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Cryptography::X509Certificates::X509Certificate2Collection>(value));
}
constexpr System::Security::Cryptography::X509Certificates::X509Certificate2Collection System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_cas() const {
return ::cordl_internals::getInstanceField<System::Security::Cryptography::X509Certificates::X509Certificate2Collection, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__set_root_store(System::Security::Cryptography::X509Certificates::X509Store value)  {
::cordl_internals::setInstanceField<System::Security::Cryptography::X509Certificates::X509Store, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Cryptography::X509Certificates::X509Store>(value));
}
constexpr System::Security::Cryptography::X509Certificates::X509Store System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_root_store() const {
return ::cordl_internals::getInstanceField<System::Security::Cryptography::X509Certificates::X509Store, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__set_ca_store(System::Security::Cryptography::X509Certificates::X509Store value)  {
::cordl_internals::setInstanceField<System::Security::Cryptography::X509Certificates::X509Store, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Cryptography::X509Certificates::X509Store>(value));
}
constexpr System::Security::Cryptography::X509Certificates::X509Store System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_ca_store() const {
return ::cordl_internals::getInstanceField<System::Security::Cryptography::X509Certificates::X509Store, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__set_user_root_store(System::Security::Cryptography::X509Certificates::X509Store value)  {
::cordl_internals::setInstanceField<System::Security::Cryptography::X509Certificates::X509Store, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Cryptography::X509Certificates::X509Store>(value));
}
constexpr System::Security::Cryptography::X509Certificates::X509Store System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_user_root_store() const {
return ::cordl_internals::getInstanceField<System::Security::Cryptography::X509Certificates::X509Store, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__set_user_ca_store(System::Security::Cryptography::X509Certificates::X509Store value)  {
::cordl_internals::setInstanceField<System::Security::Cryptography::X509Certificates::X509Store, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Cryptography::X509Certificates::X509Store>(value));
}
constexpr System::Security::Cryptography::X509Certificates::X509Store System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_user_ca_store() const {
return ::cordl_internals::getInstanceField<System::Security::Cryptography::X509Certificates::X509Store, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__set_collection(System::Security::Cryptography::X509Certificates::X509Certificate2Collection value)  {
::cordl_internals::setInstanceField<System::Security::Cryptography::X509Certificates::X509Certificate2Collection, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Cryptography::X509Certificates::X509Certificate2Collection>(value));
}
constexpr System::Security::Cryptography::X509Certificates::X509Certificate2Collection System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_collection() const {
return ::cordl_internals::getInstanceField<System::Security::Cryptography::X509Certificates::X509Certificate2Collection, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "useMachineContext", ty: "bool", modifiers: "", def_value: None }]
 System::Security::Cryptography::X509Certificates::X509ChainImplMono::X509ChainImplMono(bool useMachineContext)  : System::Security::Cryptography::X509Certificates::X509ChainImpl(THROW_UNLESS(::il2cpp_utils::New<X509ChainImplMono>(useMachineContext))) {}
 void System::Security::Cryptography::X509Certificates::X509ChainImplMono::_ctor(bool useMachineContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, useMachineContext);
}
 bool System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "get_IsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Security::Cryptography::X509Certificates::X509ChainElementCollection System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_ChainElements()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "get_ChainElements",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509ChainElementCollection, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Security::Cryptography::X509Certificates::X509ChainPolicy System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_ChainPolicy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "get_ChainPolicy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509ChainPolicy, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<System::Security::Cryptography::X509Certificates::X509ChainStatus> System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_ChainStatus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "get_ChainStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Security::Cryptography::X509Certificates::X509ChainStatus>, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Security::Cryptography::X509Certificates::X509ChainImplMono::AddStatus(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "AddStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, error);
}
 bool System::Security::Cryptography::X509Certificates::X509ChainImplMono::Build(System::Security::Cryptography::X509Certificates::X509Certificate2 certificate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "Build",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, certificate);
}
 void System::Security::Cryptography::X509Certificates::X509ChainImplMono::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Security::Cryptography::X509Certificates::X509Certificate2Collection System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_Roots()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "get_Roots",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509Certificate2Collection, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Security::Cryptography::X509Certificates::X509Certificate2Collection System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_CertificateAuthorities()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "get_CertificateAuthorities",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509Certificate2Collection, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Security::Cryptography::X509Certificates::X509Store System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_LMRootStore()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "get_LMRootStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509Store, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Security::Cryptography::X509Certificates::X509Store System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_UserRootStore()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "get_UserRootStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509Store, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Security::Cryptography::X509Certificates::X509Store System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_LMCAStore()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "get_LMCAStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509Store, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Security::Cryptography::X509Certificates::X509Store System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_UserCAStore()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "get_UserCAStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509Store, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Security::Cryptography::X509Certificates::X509Certificate2Collection System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_CertificateCollection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "get_CertificateCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509Certificate2Collection, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Security::Cryptography::X509Certificates::X509ChainStatusFlags System::Security::Cryptography::X509Certificates::X509ChainImplMono::BuildChainFrom(System::Security::Cryptography::X509Certificates::X509Certificate2 certificate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "BuildChainFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509ChainStatusFlags, false>(const_cast<void*>(instance), ___internal_method, certificate);
}
 System::Security::Cryptography::X509Certificates::X509Certificate2 System::Security::Cryptography::X509Certificates::X509ChainImplMono::SelectBestFromCollection(System::Security::Cryptography::X509Certificates::X509Certificate2 child, System::Security::Cryptography::X509Certificates::X509Certificate2Collection c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "SelectBestFromCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2Collection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509Certificate2, false>(const_cast<void*>(instance), ___internal_method, child, c);
}
 System::Security::Cryptography::X509Certificates::X509Certificate2 System::Security::Cryptography::X509Certificates::X509ChainImplMono::FindParent(System::Security::Cryptography::X509Certificates::X509Certificate2 certificate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "FindParent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509Certificate2, false>(const_cast<void*>(instance), ___internal_method, certificate);
}
 bool System::Security::Cryptography::X509Certificates::X509ChainImplMono::IsChainComplete(System::Security::Cryptography::X509Certificates::X509Certificate2 certificate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "IsChainComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, certificate);
}
 bool System::Security::Cryptography::X509Certificates::X509ChainImplMono::IsSelfIssued(System::Security::Cryptography::X509Certificates::X509Certificate2 certificate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "IsSelfIssued",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, certificate);
}
 void System::Security::Cryptography::X509Certificates::X509ChainImplMono::ValidateChain(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flag)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "ValidateChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, flag);
}
 void System::Security::Cryptography::X509Certificates::X509ChainImplMono::Process(int32_t n)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, n);
}
 void System::Security::Cryptography::X509Certificates::X509ChainImplMono::PrepareForNextCertificate(int32_t n)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "PrepareForNextCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, n);
}
 void System::Security::Cryptography::X509Certificates::X509ChainImplMono::WrapUp()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "WrapUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Security::Cryptography::X509Certificates::X509ChainImplMono::ProcessCertificateExtensions(System::Security::Cryptography::X509Certificates::X509ChainElement element)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "ProcessCertificateExtensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509ChainElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, element);
}
 bool System::Security::Cryptography::X509Certificates::X509ChainImplMono::IsSignedWith(System::Security::Cryptography::X509Certificates::X509Certificate2 signed, System::Security::Cryptography::AsymmetricAlgorithm pubkey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "IsSignedWith",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::AsymmetricAlgorithm>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, signed, pubkey);
}
 ::StringW System::Security::Cryptography::X509Certificates::X509ChainImplMono::GetSubjectKeyIdentifier(System::Security::Cryptography::X509Certificates::X509Certificate2 certificate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "GetSubjectKeyIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, certificate);
}
 ::StringW System::Security::Cryptography::X509Certificates::X509ChainImplMono::GetAuthorityKeyIdentifier(System::Security::Cryptography::X509Certificates::X509Certificate2 certificate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "GetAuthorityKeyIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, certificate);
}
 ::StringW System::Security::Cryptography::X509Certificates::X509ChainImplMono::GetAuthorityKeyIdentifier(Mono::Security::X509::X509Crl crl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "GetAuthorityKeyIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::X509::X509Crl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, crl);
}
 ::StringW System::Security::Cryptography::X509Certificates::X509ChainImplMono::GetAuthorityKeyIdentifier(Mono::Security::X509::X509Extension ext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "GetAuthorityKeyIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::X509::X509Extension>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, ext);
}
 void System::Security::Cryptography::X509Certificates::X509ChainImplMono::CheckRevocationOnChain(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flag)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "CheckRevocationOnChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, flag);
}
 System::Security::Cryptography::X509Certificates::X509ChainStatusFlags System::Security::Cryptography::X509Certificates::X509ChainImplMono::CheckRevocation(System::Security::Cryptography::X509Certificates::X509Certificate2 certificate, int32_t ca, bool online)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "CheckRevocation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509ChainStatusFlags, false>(const_cast<void*>(instance), ___internal_method, certificate, ca, online);
}
 System::Security::Cryptography::X509Certificates::X509ChainStatusFlags System::Security::Cryptography::X509Certificates::X509ChainImplMono::CheckRevocation(System::Security::Cryptography::X509Certificates::X509Certificate2 certificate, System::Security::Cryptography::X509Certificates::X509Certificate2 ca_cert, bool online)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "CheckRevocation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509ChainStatusFlags, false>(const_cast<void*>(instance), ___internal_method, certificate, ca_cert, online);
}
 Mono::Security::X509::X509Crl System::Security::Cryptography::X509Certificates::X509ChainImplMono::CheckCrls(::StringW subject, ::StringW ski, Mono::Security::X509::X509Store store)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "CheckCrls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::X509::X509Store>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Security::X509::X509Crl, false>(nullptr, ___internal_method, subject, ski, store);
}
 Mono::Security::X509::X509Crl System::Security::Cryptography::X509Certificates::X509ChainImplMono::FindCrl(System::Security::Cryptography::X509Certificates::X509Certificate2 caCertificate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "FindCrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Security::X509::X509Crl, false>(const_cast<void*>(instance), ___internal_method, caCertificate);
}
 bool System::Security::Cryptography::X509Certificates::X509ChainImplMono::ProcessCrlExtensions(Mono::Security::X509::X509Crl crl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "ProcessCrlExtensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::X509::X509Crl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, crl);
}
 bool System::Security::Cryptography::X509Certificates::X509ChainImplMono::ProcessCrlEntryExtensions(Mono::Security::X509::Mono__Security__X509__X509Crl__X509CrlEntry entry)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainImplMono>::get(),
                            "ProcessCrlEntryExtensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::X509::Mono__Security__X509__X509Crl__X509CrlEntry>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, entry);
}
