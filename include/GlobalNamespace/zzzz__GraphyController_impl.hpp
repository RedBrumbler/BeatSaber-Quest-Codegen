#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GraphyController_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "GlobalNamespace/zzzz__MainCamera_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GraphyController__InitData.get_enableFPSModule
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__GraphyController__InitData::*)()>(&GlobalNamespace::GlobalNamespace__GraphyController__InitData::get_enableFPSModule)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21cbf88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GraphyController__InitData>::get(),
                            "get_enableFPSModule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GraphyController__InitData.get_enableMemoryModule
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__GraphyController__InitData::*)()>(&GlobalNamespace::GlobalNamespace__GraphyController__InitData::get_enableMemoryModule)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21cbf90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GraphyController__InitData>::get(),
                            "get_enableMemoryModule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GraphyController__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GraphyController__InitData::*)(bool, bool)>(&GlobalNamespace::GlobalNamespace__GraphyController__InitData::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x21cabac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GraphyController__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "_enableFPSModule", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_enableMemoryModule", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__GraphyController__InitData::GlobalNamespace__GraphyController__InitData(bool _enableFPSModule, bool _enableMemoryModule) noexcept : ::bs_hook::ValueTypeWrapper() {this->_enableFPSModule = _enableFPSModule;
this->_enableMemoryModule = _enableMemoryModule;
}
constexpr void GlobalNamespace::GlobalNamespace__GraphyController__InitData::__set__enableFPSModule(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__GraphyController__InitData::__get__enableFPSModule() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GraphyController__InitData::__set__enableMemoryModule(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1>(this->__instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__GraphyController__InitData::__get__enableMemoryModule() const {
return ::cordl_internals::getInstanceField<bool, 0x1>(this->__instance);
}
 bool GlobalNamespace::GlobalNamespace__GraphyController__InitData::get_enableFPSModule()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GraphyController__InitData>::get(),
                            "get_enableFPSModule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__GraphyController__InitData::get_enableMemoryModule()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GraphyController__InitData>::get(),
                            "get_enableMemoryModule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__GraphyController__InitData::_ctor(bool enableFPSModule, bool enableMemoryModule)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GraphyController__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, enableFPSModule, enableMemoryModule);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5::*)(int32_t)>(&GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21cbf58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5::*)()>(&GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21cbf98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5::*)()>(&GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5::MoveNext)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x21cbf9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5::*)()>(&GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21cc094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5::*)()>(&GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x21cc09c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5::*)()>(&GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21cc0dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr  GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5::operator System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept {
return System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5::__set___2__current(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5::__get___2__current() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5::__set___4__this(GlobalNamespace::GraphyController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GraphyController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GraphyController>(value));
}
constexpr GlobalNamespace::GraphyController GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GraphyController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5::GlobalNamespace__GraphyController___Start_d__5(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__GraphyController___Start_d__5>(__1__state))) {}
 void GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GraphyController.Inject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GraphyController::*)(GlobalNamespace::GlobalNamespace__GraphyController__InitData, GlobalNamespace::MainCamera)>(&GlobalNamespace::GraphyController::Inject)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x21cbecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GraphyController>::get(),
                            "Inject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__GraphyController__InitData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MainCamera>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GraphyController.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (GlobalNamespace::GraphyController::*)()>(&GlobalNamespace::GraphyController::Start)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x21cbef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GraphyController>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GraphyController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GraphyController::*)()>(&GlobalNamespace::GraphyController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21cbf80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GraphyController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GraphyController::__set__enableFPSModule(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GraphyController::__get__enableFPSModule() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GraphyController::__set__enableMemoryModule(bool value)  {
::cordl_internals::setInstanceField<bool, 0x19>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GraphyController::__get__enableMemoryModule() const {
return ::cordl_internals::getInstanceField<bool, 0x19>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GraphyController::__set__mainCamera(GlobalNamespace::MainCamera value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MainCamera, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MainCamera>(value));
}
constexpr GlobalNamespace::MainCamera GlobalNamespace::GraphyController::__get__mainCamera() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MainCamera, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::GraphyController::Inject(GlobalNamespace::GlobalNamespace__GraphyController__InitData initData, GlobalNamespace::MainCamera mainCamera)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GraphyController>::get(),
                            "Inject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__GraphyController__InitData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MainCamera>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, initData, mainCamera);
}
 System::Collections::IEnumerator GlobalNamespace::GraphyController::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GraphyController>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::GraphyController::GraphyController()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<GraphyController>())) {}
 void GlobalNamespace::GraphyController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GraphyController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
