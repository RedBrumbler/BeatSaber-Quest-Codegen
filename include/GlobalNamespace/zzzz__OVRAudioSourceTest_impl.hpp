#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRAudioSourceTest_def.hpp"
//  Writing Method size for method: GlobalNamespace::OVRAudioSourceTest.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRAudioSourceTest::*)()>(&GlobalNamespace::OVRAudioSourceTest::Start)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2649ef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRAudioSourceTest>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRAudioSourceTest.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRAudioSourceTest::*)()>(&GlobalNamespace::OVRAudioSourceTest::Update)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2649ff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRAudioSourceTest>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRAudioSourceTest._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRAudioSourceTest::*)()>(&GlobalNamespace::OVRAudioSourceTest::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x264a1b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRAudioSourceTest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::OVRAudioSourceTest::__set_period(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::OVRAudioSourceTest::__get_period() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRAudioSourceTest::__set_nextActionTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::OVRAudioSourceTest::__get_nextActionTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::OVRAudioSourceTest::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRAudioSourceTest>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRAudioSourceTest::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRAudioSourceTest>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::OVRAudioSourceTest::OVRAudioSourceTest()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<OVRAudioSourceTest>())) {}
 void GlobalNamespace::OVRAudioSourceTest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRAudioSourceTest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
