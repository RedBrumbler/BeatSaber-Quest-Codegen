#pragma once
#include "HoudiniEngineUnity/zzzz__Test_HAPI_GeoInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_GeoInfo_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::Test_HAPI_GeoInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::Test_HAPI_GeoInfo::*)(HoudiniEngineUnity::HAPI_GeoInfo)>(&HoudiniEngineUnity::Test_HAPI_GeoInfo::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x20a7ee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_HAPI_GeoInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HAPI_GeoInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::Test_HAPI_GeoInfo.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::Test_HAPI_GeoInfo::*)(HoudiniEngineUnity::Test_HAPI_GeoInfo)>(&HoudiniEngineUnity::Test_HAPI_GeoInfo::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x20a7f1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_HAPI_GeoInfo>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::Test_HAPI_GeoInfo>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_HAPI_GeoInfo>
constexpr  HoudiniEngineUnity::Test_HAPI_GeoInfo::operator HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_HAPI_GeoInfo>() const noexcept {
return HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_HAPI_GeoInfo>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::Test_HAPI_GeoInfo::__set_self(HoudiniEngineUnity::HAPI_GeoInfo value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_GeoInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HAPI_GeoInfo>(value));
}
constexpr HoudiniEngineUnity::HAPI_GeoInfo HoudiniEngineUnity::Test_HAPI_GeoInfo::__get_self() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_GeoInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "self", ty: "HoudiniEngineUnity::HAPI_GeoInfo", modifiers: "", def_value: None }]
 HoudiniEngineUnity::Test_HAPI_GeoInfo::Test_HAPI_GeoInfo(HoudiniEngineUnity::HAPI_GeoInfo self)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Test_HAPI_GeoInfo>(self))) {}
 void HoudiniEngineUnity::Test_HAPI_GeoInfo::_ctor(HoudiniEngineUnity::HAPI_GeoInfo self)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_HAPI_GeoInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HAPI_GeoInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, self);
}
 bool HoudiniEngineUnity::Test_HAPI_GeoInfo::IsEquivalentTo(HoudiniEngineUnity::Test_HAPI_GeoInfo other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_HAPI_GeoInfo>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::Test_HAPI_GeoInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
