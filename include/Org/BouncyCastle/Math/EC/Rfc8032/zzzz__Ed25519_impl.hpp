#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Org/BouncyCastle/Math/EC/Rfc8032/zzzz__Ed25519_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__Algorithm::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__Algorithm(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__Algorithm::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__Algorithm::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__Algorithm  Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__Algorithm::Ed25519{0};
constexpr Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__Algorithm  Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__Algorithm::Ed25519ctx{1};
constexpr Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__Algorithm  Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__Algorithm::Ed25519ph{2};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum::*)()>(&Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xfc6c80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum::__set_x(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum::__get_x() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum::__set_y(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum::__get_y() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum::__set_z(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum::__get_z() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum::__set_u(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum::__get_u() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum::__set_v(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum::__get_v() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum>())) {}
 void Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt::*)()>(&Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xfc6d14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt::__set_x(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt::__get_x() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt::__set_y(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt::__get_y() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt::__set_z(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt::__get_z() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt::__set_t(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt::__get_t() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt>())) {}
 void Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp::*)()>(&Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xfc6d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp::__set_ypx_h(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp::__get_ypx_h() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp::__set_ymx_h(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp::__get_ymx_h() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp::__set_xyd(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp::__get_xyd() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp>())) {}
 void Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.CalculateS
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::CalculateS)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xfc2284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "CalculateS",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.CheckContextVar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t>, uint8_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::CheckContextVar)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xfc29a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "CheckContextVar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.CheckPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<int32_t>, ::ArrayW<int32_t>)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::CheckPoint)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xfc29cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "CheckPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.CheckPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<int32_t>, ::ArrayW<int32_t>, ::ArrayW<int32_t>)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::CheckPoint)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xfc2ae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "CheckPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.CheckPointVar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::CheckPointVar)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xfc2c38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "CheckPointVar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.CheckScalarVar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::CheckScalarVar)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xfc2de4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "CheckScalarVar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.CreateDigest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::IDigest (*)()>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::CreateDigest)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xfc2e94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "CreateDigest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.CreatePrehash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::IDigest (*)()>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::CreatePrehash)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xfc2ef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "CreatePrehash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.Decode24
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Decode24)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xfc2f3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "Decode24",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.Decode32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Decode32)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xfc2f90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "Decode32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.Decode32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint32_t>, int32_t, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Decode32)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xfc2d14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "Decode32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.DecodePointVar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t>, int32_t, bool, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::DecodePointVar)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0xfc2ff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "DecodePointVar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.DecodeScalar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint32_t>)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::DecodeScalar)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xfc2418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "DecodeScalar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.Dom2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Org::BouncyCastle::Crypto::IDigest, uint8_t, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Dom2)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0xfc3298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "Dom2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.Encode24
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint32_t, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Encode24)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xfc34dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "Encode24",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.Encode32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint32_t, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Encode32)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xfc248c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "Encode32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.Encode56
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Encode56)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xfc3540;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "Encode56",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.EncodePoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::EncodePoint)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xfc35bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "EncodePoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.GeneratePrivateKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Org::BouncyCastle::Security::SecureRandom, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::GeneratePrivateKey)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xfc36fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "GeneratePrivateKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.GeneratePublicKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::GeneratePublicKey)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xfc3718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "GeneratePublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.GetWnafVar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int8_t> (*)(::ArrayW<uint32_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::GetWnafVar)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xfc3a7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "GetWnafVar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.ImplSign
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Org::BouncyCastle::Crypto::IDigest, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, uint8_t, ::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ImplSign)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0xfc3c34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "ImplSign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.ImplSign
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, uint8_t, ::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ImplSign)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0xfc4084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "ImplSign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.ImplSign
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, uint8_t, ::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ImplSign)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0xfc43a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "ImplSign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.ImplVerify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, uint8_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ImplVerify)> {
  constexpr static std::size_t size = 0x584;
  constexpr static std::size_t addrs = 0xfc46c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "ImplVerify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.PointAddVar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointAddVar)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xfc4e08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "PointAddVar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.PointAddVar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointAddVar)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0xfc5028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "PointAddVar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.PointAddPrecomp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointAddPrecomp)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xfc5254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "PointAddPrecomp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.PointCopy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt (*)(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointCopy)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xfc53a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "PointCopy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.PointCopy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt (*)(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointCopy)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xfc5488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "PointCopy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.PointDouble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointDouble)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xfc5570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "PointDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.PointExtendXY
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointExtendXY)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xfc56c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "PointExtendXY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.PointExtendXY
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointExtendXY)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xfc322c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "PointExtendXY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.PointLookup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, int32_t, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointLookup)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xfc5750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "PointLookup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.PointPrecompVar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt> (*)(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointPrecompVar)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xfc587c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "PointPrecompVar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.PointSetNeutral
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointSetNeutral)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xfc5a3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "PointSetNeutral",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.PointSetNeutral
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointSetNeutral)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xfc5abc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "PointSetNeutral",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.Precompute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Precompute)> {
  constexpr static std::size_t size = 0x804;
  constexpr static std::size_t addrs = 0xfbdf80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "Precompute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.PruneScalar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PruneScalar)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xfc3938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "PruneScalar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.ReduceScalar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ReduceScalar)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0xfc250c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "ReduceScalar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.ScalarMultBase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ScalarMultBase)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0xfc5b34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "ScalarMultBase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.ScalarMultBaseEncoded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ScalarMultBaseEncoded)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xfc3990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "ScalarMultBaseEncoded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.ScalarMultBaseYZ
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<int32_t>, ::ArrayW<int32_t>)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ScalarMultBaseYZ)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xfbeab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "ScalarMultBaseYZ",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.ScalarMultStrausVar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint32_t>, ::ArrayW<uint32_t>, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ScalarMultStrausVar)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xfc4c4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "ScalarMultStrausVar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.Sign
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Sign)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xfc5d88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "Sign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.Sign
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Sign)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xfc5e38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "Sign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.Sign
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Sign)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xfc5f00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "Sign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.Sign
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Sign)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xfc5fbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "Sign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.SignPrehash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::SignPrehash)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xfc6088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "SignPrehash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.SignPrehash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::SignPrehash)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xfc6140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "SignPrehash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.SignPrehash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, Org::BouncyCastle::Crypto::IDigest, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::SignPrehash)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xfc6214;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "SignPrehash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.SignPrehash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, Org::BouncyCastle::Crypto::IDigest, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::SignPrehash)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xfc63e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "SignPrehash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.Verify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Verify)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xfc65c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "Verify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.Verify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Verify)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xfc667c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "Verify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.VerifyPrehash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::VerifyPrehash)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xfc673c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "VerifyPrehash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.VerifyPrehash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, Org::BouncyCastle::Crypto::IDigest)>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::VerifyPrehash)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xfc67fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "VerifyPrehash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::*)()>(&Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfc6c78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::__set_PrehashSize(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "PrehashSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get>(std::forward<int32_t>(value));
}
 int32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::__get_PrehashSize()  {
return ::cordl_internals::getStaticField<int32_t, "PrehashSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get>();
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::__set_PublicKeySize(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "PublicKeySize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get>(std::forward<int32_t>(value));
}
 int32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::__get_PublicKeySize()  {
return ::cordl_internals::getStaticField<int32_t, "PublicKeySize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get>();
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::__set_SecretKeySize(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "SecretKeySize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get>(std::forward<int32_t>(value));
}
 int32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::__get_SecretKeySize()  {
return ::cordl_internals::getStaticField<int32_t, "SecretKeySize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get>();
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::__set_SignatureSize(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "SignatureSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get>(std::forward<int32_t>(value));
}
 int32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::__get_SignatureSize()  {
return ::cordl_internals::getStaticField<int32_t, "SignatureSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get>();
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::__set_Dom2Prefix(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "Dom2Prefix", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::__get_Dom2Prefix()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "Dom2Prefix", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get>();
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::__set_P(::ArrayW<uint32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t>, "P", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get>(std::forward<::ArrayW<uint32_t>>(value));
}
 ::ArrayW<uint32_t> Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::__get_P()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "P", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get>();
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::__set_L(::ArrayW<uint32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t>, "L", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get>(std::forward<::ArrayW<uint32_t>>(value));
}
 ::ArrayW<uint32_t> Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::__get_L()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "L", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get>();
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::__set_B_x(::ArrayW<int32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "B_x", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get>(std::forward<::ArrayW<int32_t>>(value));
}
 ::ArrayW<int32_t> Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::__get_B_x()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "B_x", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get>();
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::__set_B_y(::ArrayW<int32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "B_y", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get>(std::forward<::ArrayW<int32_t>>(value));
}
 ::ArrayW<int32_t> Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::__get_B_y()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "B_y", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get>();
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::__set_C_d(::ArrayW<int32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "C_d", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get>(std::forward<::ArrayW<int32_t>>(value));
}
 ::ArrayW<int32_t> Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::__get_C_d()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "C_d", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get>();
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::__set_C_d2(::ArrayW<int32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "C_d2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get>(std::forward<::ArrayW<int32_t>>(value));
}
 ::ArrayW<int32_t> Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::__get_C_d2()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "C_d2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get>();
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::__set_C_d4(::ArrayW<int32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "C_d4", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get>(std::forward<::ArrayW<int32_t>>(value));
}
 ::ArrayW<int32_t> Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::__get_C_d4()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "C_d4", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get>();
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::__set_precompLock(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setStaticField<::bs_hook::Il2CppWrapperType, "precompLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get>(std::forward<::bs_hook::Il2CppWrapperType>(value));
}
 ::bs_hook::Il2CppWrapperType Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::__get_precompLock()  {
return ::cordl_internals::getStaticField<::bs_hook::Il2CppWrapperType, "precompLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get>();
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::__set_precompBaseTable(::ArrayW<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt> value)  {
::cordl_internals::setStaticField<::ArrayW<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt>, "precompBaseTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get>(std::forward<::ArrayW<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt>>(value));
}
 ::ArrayW<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt> Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::__get_precompBaseTable()  {
return ::cordl_internals::getStaticField<::ArrayW<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt>, "precompBaseTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get>();
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::__set_precompBase(::ArrayW<int32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "precompBase", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get>(std::forward<::ArrayW<int32_t>>(value));
}
 ::ArrayW<int32_t> Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::__get_precompBase()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "precompBase", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get>();
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::CalculateS(::ArrayW<uint8_t> r, ::ArrayW<uint8_t> k, ::ArrayW<uint8_t> s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "CalculateS",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, r, k, s);
}
 bool Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::CheckContextVar(::ArrayW<uint8_t> ctx, uint8_t phflag)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "CheckContextVar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ctx, phflag);
}
 int32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::CheckPoint(::ArrayW<int32_t> x, ::ArrayW<int32_t> y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "CheckPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, x, y);
}
 int32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::CheckPoint(::ArrayW<int32_t> x, ::ArrayW<int32_t> y, ::ArrayW<int32_t> z)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "CheckPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, x, y, z);
}
 bool Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::CheckPointVar(::ArrayW<uint8_t> p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "CheckPointVar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, p);
}
 bool Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::CheckScalarVar(::ArrayW<uint8_t> s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "CheckScalarVar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s);
}
 Org::BouncyCastle::Crypto::IDigest Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::CreateDigest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "CreateDigest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::IDigest, false>(nullptr, ___internal_method);
}
 Org::BouncyCastle::Crypto::IDigest Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::CreatePrehash()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "CreatePrehash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::IDigest, false>(nullptr, ___internal_method);
}
 uint32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Decode24(::ArrayW<uint8_t> bs, int32_t off)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "Decode24",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, bs, off);
}
 uint32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Decode32(::ArrayW<uint8_t> bs, int32_t off)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "Decode32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, bs, off);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Decode32(::ArrayW<uint8_t> bs, int32_t bsOff, ::ArrayW<uint32_t> n, int32_t nOff, int32_t nLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "Decode32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bs, bsOff, n, nOff, nLen);
}
 bool Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::DecodePointVar(::ArrayW<uint8_t> p, int32_t pOff, bool negate, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "DecodePointVar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, p, pOff, negate, r);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::DecodeScalar(::ArrayW<uint8_t> k, int32_t kOff, ::ArrayW<uint32_t> n)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "DecodeScalar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, k, kOff, n);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Dom2(Org::BouncyCastle::Crypto::IDigest d, uint8_t phflag, ::ArrayW<uint8_t> ctx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "Dom2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, d, phflag, ctx);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Encode24(uint32_t n, ::ArrayW<uint8_t> bs, int32_t off)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "Encode24",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, n, bs, off);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Encode32(uint32_t n, ::ArrayW<uint8_t> bs, int32_t off)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "Encode32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, n, bs, off);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Encode56(uint64_t n, ::ArrayW<uint8_t> bs, int32_t off)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "Encode56",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, n, bs, off);
}
 int32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::EncodePoint(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum p, ::ArrayW<uint8_t> r, int32_t rOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "EncodePoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, p, r, rOff);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::GeneratePrivateKey(Org::BouncyCastle::Security::SecureRandom random, ::ArrayW<uint8_t> k)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "GeneratePrivateKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, random, k);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::GeneratePublicKey(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> pk, int32_t pkOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "GeneratePublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, pk, pkOff);
}
 ::ArrayW<int8_t> Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::GetWnafVar(::ArrayW<uint32_t> n, int32_t width)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "GetWnafVar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int8_t>, false>(nullptr, ___internal_method, n, width);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ImplSign(Org::BouncyCastle::Crypto::IDigest d, ::ArrayW<uint8_t> h, ::ArrayW<uint8_t> s, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, uint8_t phflag, ::ArrayW<uint8_t> m, int32_t mOff, int32_t mLen, ::ArrayW<uint8_t> sig, int32_t sigOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "ImplSign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, d, h, s, pk, pkOff, ctx, phflag, m, mOff, mLen, sig, sigOff);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ImplSign(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> ctx, uint8_t phflag, ::ArrayW<uint8_t> m, int32_t mOff, int32_t mLen, ::ArrayW<uint8_t> sig, int32_t sigOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "ImplSign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, ctx, phflag, m, mOff, mLen, sig, sigOff);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ImplSign(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, uint8_t phflag, ::ArrayW<uint8_t> m, int32_t mOff, int32_t mLen, ::ArrayW<uint8_t> sig, int32_t sigOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "ImplSign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, pk, pkOff, ctx, phflag, m, mOff, mLen, sig, sigOff);
}
 bool Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ImplVerify(::ArrayW<uint8_t> sig, int32_t sigOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, uint8_t phflag, ::ArrayW<uint8_t> m, int32_t mOff, int32_t mLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "ImplVerify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sig, sigOff, pk, pkOff, ctx, phflag, m, mOff, mLen);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointAddVar(bool negate, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt p, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "PointAddVar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, negate, p, r);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointAddVar(bool negate, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt p, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt q, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "PointAddVar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, negate, p, q, r);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointAddPrecomp(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp p, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "PointAddPrecomp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, p, r);
}
 Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointCopy(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "PointCopy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt, false>(nullptr, ___internal_method, p);
}
 Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointCopy(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "PointCopy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt, false>(nullptr, ___internal_method, p);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointDouble(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "PointDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, r);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointExtendXY(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "PointExtendXY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, p);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointExtendXY(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "PointExtendXY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, p);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointLookup(int32_t block, int32_t index, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "PointLookup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, block, index, p);
}
 ::ArrayW<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt> Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointPrecompVar(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt p, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "PointPrecompVar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt>, false>(nullptr, ___internal_method, p, count);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointSetNeutral(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "PointSetNeutral",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, p);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointSetNeutral(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "PointSetNeutral",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, p);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Precompute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "Precompute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PruneScalar(::ArrayW<uint8_t> n, int32_t nOff, ::ArrayW<uint8_t> r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "PruneScalar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, n, nOff, r);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ReduceScalar(::ArrayW<uint8_t> n)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "ReduceScalar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, n);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ScalarMultBase(::ArrayW<uint8_t> k, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "ScalarMultBase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, k, r);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ScalarMultBaseEncoded(::ArrayW<uint8_t> k, ::ArrayW<uint8_t> r, int32_t rOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "ScalarMultBaseEncoded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, k, r, rOff);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ScalarMultBaseYZ(::ArrayW<uint8_t> k, int32_t kOff, ::ArrayW<int32_t> y, ::ArrayW<int32_t> z)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "ScalarMultBaseYZ",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, k, kOff, y, z);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ScalarMultStrausVar(::ArrayW<uint32_t> nb, ::ArrayW<uint32_t> np, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt p, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "ScalarMultStrausVar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nb, np, p, r);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Sign(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> m, int32_t mOff, int32_t mLen, ::ArrayW<uint8_t> sig, int32_t sigOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "Sign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, m, mOff, mLen, sig, sigOff);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Sign(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> m, int32_t mOff, int32_t mLen, ::ArrayW<uint8_t> sig, int32_t sigOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "Sign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, pk, pkOff, m, mOff, mLen, sig, sigOff);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Sign(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> ctx, ::ArrayW<uint8_t> m, int32_t mOff, int32_t mLen, ::ArrayW<uint8_t> sig, int32_t sigOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "Sign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, ctx, m, mOff, mLen, sig, sigOff);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Sign(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, ::ArrayW<uint8_t> m, int32_t mOff, int32_t mLen, ::ArrayW<uint8_t> sig, int32_t sigOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "Sign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, pk, pkOff, ctx, m, mOff, mLen, sig, sigOff);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::SignPrehash(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> ctx, ::ArrayW<uint8_t> ph, int32_t phOff, ::ArrayW<uint8_t> sig, int32_t sigOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "SignPrehash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, ctx, ph, phOff, sig, sigOff);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::SignPrehash(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, ::ArrayW<uint8_t> ph, int32_t phOff, ::ArrayW<uint8_t> sig, int32_t sigOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "SignPrehash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, pk, pkOff, ctx, ph, phOff, sig, sigOff);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::SignPrehash(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> ctx, Org::BouncyCastle::Crypto::IDigest ph, ::ArrayW<uint8_t> sig, int32_t sigOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "SignPrehash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, ctx, ph, sig, sigOff);
}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::SignPrehash(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, Org::BouncyCastle::Crypto::IDigest ph, ::ArrayW<uint8_t> sig, int32_t sigOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "SignPrehash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, pk, pkOff, ctx, ph, sig, sigOff);
}
 bool Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Verify(::ArrayW<uint8_t> sig, int32_t sigOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> m, int32_t mOff, int32_t mLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "Verify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sig, sigOff, pk, pkOff, m, mOff, mLen);
}
 bool Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Verify(::ArrayW<uint8_t> sig, int32_t sigOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, ::ArrayW<uint8_t> m, int32_t mOff, int32_t mLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "Verify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sig, sigOff, pk, pkOff, ctx, m, mOff, mLen);
}
 bool Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::VerifyPrehash(::ArrayW<uint8_t> sig, int32_t sigOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, ::ArrayW<uint8_t> ph, int32_t phOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "VerifyPrehash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sig, sigOff, pk, pkOff, ctx, ph, phOff);
}
 bool Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::VerifyPrehash(::ArrayW<uint8_t> sig, int32_t sigOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, Org::BouncyCastle::Crypto::IDigest ph)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            "VerifyPrehash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sig, sigOff, pk, pkOff, ctx, ph);
}
// Ctor Parameters []
 Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Ed25519()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Ed25519>())) {}
 void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Rfc8032::Ed25519>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
