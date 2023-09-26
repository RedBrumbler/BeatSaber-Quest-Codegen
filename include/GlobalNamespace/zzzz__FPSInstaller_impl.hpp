#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__FPSInstaller_def.hpp"
#include "GlobalNamespace/zzzz__FPSRecordController_def.hpp"
#include "GlobalNamespace/zzzz__BoolSO_def.hpp"
#include "GlobalNamespace/zzzz__GraphyController_def.hpp"
//  Writing Method size for method: GlobalNamespace::FPSInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FPSInstaller::*)()>(&GlobalNamespace::FPSInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x21ca9d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::FPSInstaller),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FPSInstaller>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FPSInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FPSInstaller::*)()>(&GlobalNamespace::FPSInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21cabc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FPSInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::FPSInstaller::__set__enableFPSCounter(GlobalNamespace::BoolSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BoolSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BoolSO>(value));
}
constexpr GlobalNamespace::BoolSO GlobalNamespace::FPSInstaller::__get__enableFPSCounter() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BoolSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FPSInstaller::__set__enableFPSRecorder(GlobalNamespace::BoolSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BoolSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BoolSO>(value));
}
constexpr GlobalNamespace::BoolSO GlobalNamespace::FPSInstaller::__get__enableFPSRecorder() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BoolSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FPSInstaller::__set__enableMemoryTracker(GlobalNamespace::BoolSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BoolSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BoolSO>(value));
}
constexpr GlobalNamespace::BoolSO GlobalNamespace::FPSInstaller::__get__enableMemoryTracker() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BoolSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FPSInstaller::__set__fpsCounterCanvasPrefab(GlobalNamespace::GraphyController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GraphyController, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GraphyController>(value));
}
constexpr GlobalNamespace::GraphyController GlobalNamespace::FPSInstaller::__get__fpsCounterCanvasPrefab() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GraphyController, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FPSInstaller::__set__fpsRecordControllerPrefab(GlobalNamespace::FPSRecordController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::FPSRecordController, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::FPSRecordController>(value));
}
constexpr GlobalNamespace::FPSRecordController GlobalNamespace::FPSInstaller::__get__fpsRecordControllerPrefab() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::FPSRecordController, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::FPSInstaller::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FPSInstaller>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::FPSInstaller::FPSInstaller()  : Zenject::MonoInstaller(THROW_UNLESS(::il2cpp_utils::New<FPSInstaller>())) {}
 void GlobalNamespace::FPSInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FPSInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
