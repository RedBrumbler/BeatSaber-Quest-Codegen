#pragma once
#include "Org/BouncyCastle/Crypto/Engines/zzzz__Rfc3211WrapEngine_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IWrapper_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ParametersWithIV_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__CbcBlockCipher_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::*)(Org::BouncyCastle::Crypto::IBlockCipher)>(&Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xe5fb2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IBlockCipher>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters)>(&Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::Init)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xe5fba8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine.get_AlgorithmName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::get_AlgorithmName)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xe5fd60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine.Wrap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::Wrap)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0xe5fe28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine.Unwrap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::Unwrap)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0xe600ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::IWrapper
constexpr  Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::operator Org::BouncyCastle::Crypto::IWrapper() const noexcept {
return Org::BouncyCastle::Crypto::IWrapper(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::__set_engine(Org::BouncyCastle::Crypto::Modes::CbcBlockCipher value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Modes::CbcBlockCipher, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Modes::CbcBlockCipher>(value));
}
constexpr Org::BouncyCastle::Crypto::Modes::CbcBlockCipher Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::__get_engine() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Modes::CbcBlockCipher, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::__set_param(Org::BouncyCastle::Crypto::Parameters::ParametersWithIV value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Parameters::ParametersWithIV, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Parameters::ParametersWithIV>(value));
}
constexpr Org::BouncyCastle::Crypto::Parameters::ParametersWithIV Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::__get_param() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Parameters::ParametersWithIV, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::__set_forWrapping(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::__get_forWrapping() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::__set_rand(Org::BouncyCastle::Security::SecureRandom value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Security::SecureRandom, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Security::SecureRandom>(value));
}
constexpr Org::BouncyCastle::Security::SecureRandom Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::__get_rand() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Security::SecureRandom, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "engine", ty: "Org::BouncyCastle::Crypto::IBlockCipher", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::Rfc3211WrapEngine(Org::BouncyCastle::Crypto::IBlockCipher engine)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Rfc3211WrapEngine>(engine))) {}
 void Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::_ctor(Org::BouncyCastle::Crypto::IBlockCipher engine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IBlockCipher>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, engine);
}
 void Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::Init(bool forWrapping, Org::BouncyCastle::Crypto::ICipherParameters param)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, forWrapping, param);
}
 ::StringW Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::get_AlgorithmName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine>::get(),
                            "get_AlgorithmName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::Wrap(::ArrayW<uint8_t> inBytes, int32_t inOff, int32_t inLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine>::get(),
                            "Wrap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, inBytes, inOff, inLen);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::Unwrap(::ArrayW<uint8_t> inBytes, int32_t inOff, int32_t inLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine>::get(),
                            "Unwrap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, inBytes, inOff, inLen);
}
