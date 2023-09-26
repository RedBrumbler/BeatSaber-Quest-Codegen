#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__FPSTimestamp_def.hpp"
//  Writing Method size for method: GlobalNamespace::FPSTimestamp._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FPSTimestamp::*)(float_t, float_t)>(&GlobalNamespace::FPSTimestamp::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21cb5a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FPSTimestamp>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FPSTimestamp.GetTimeFormatted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::FPSTimestamp::*)(::StringW)>(&GlobalNamespace::FPSTimestamp::GetTimeFormatted)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x21cbe38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FPSTimestamp>::get(),
                            "GetTimeFormatted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "fpsValue", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "timeRecorded", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::FPSTimestamp::FPSTimestamp(float_t fpsValue, float_t timeRecorded) noexcept : ::bs_hook::ValueTypeWrapper() {this->fpsValue = fpsValue;
this->timeRecorded = timeRecorded;
}
constexpr void GlobalNamespace::FPSTimestamp::__set_fpsValue(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::FPSTimestamp::__get_fpsValue() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::FPSTimestamp::__set_timeRecorded(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::FPSTimestamp::__get_timeRecorded() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->__instance);
}
 void GlobalNamespace::FPSTimestamp::_ctor(float_t fpsValue, float_t timeRecorded)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FPSTimestamp>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, fpsValue, timeRecorded);
}
/// @param format: ::StringW (default: u"mm\':\'ss\':\'fff")
 ::StringW GlobalNamespace::FPSTimestamp::GetTimeFormatted(::StringW format)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FPSTimestamp>::get(),
                            "GetTimeFormatted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, format);
}
