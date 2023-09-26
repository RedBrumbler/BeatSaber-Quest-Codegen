#pragma once
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__AbstractECMultiplier_impl.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__ZSignedDigitR2LMultiplier_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitR2LMultiplier.MultiplyPositive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitR2LMultiplier::*)(Org::BouncyCastle::Math::EC::ECPoint, Org::BouncyCastle::Math::BigInteger)>(&Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitR2LMultiplier::MultiplyPositive)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xfbcb14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitR2LMultiplier),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitR2LMultiplier>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitR2LMultiplier._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitR2LMultiplier::*)()>(&Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitR2LMultiplier::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfbcc44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitR2LMultiplier>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitR2LMultiplier::MultiplyPositive(Org::BouncyCastle::Math::EC::ECPoint p, Org::BouncyCastle::Math::BigInteger k)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitR2LMultiplier>::get(),
                            "MultiplyPositive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method, p, k);
}
// Ctor Parameters []
 Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitR2LMultiplier::ZSignedDigitR2LMultiplier()  : Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier(THROW_UNLESS(::il2cpp_utils::New<ZSignedDigitR2LMultiplier>())) {}
 void Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitR2LMultiplier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitR2LMultiplier>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
