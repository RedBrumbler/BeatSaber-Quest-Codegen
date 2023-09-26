#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FPSRecordController_def.hpp"
#include "GlobalNamespace/zzzz__FPSRecorder_def.hpp"
#include "GlobalNamespace/zzzz__PauseController_def.hpp"
#include "GlobalNamespace/zzzz__CSVFPSRecordReporter_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
//  Writing Method size for method: GlobalNamespace::FPSRecordController.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FPSRecordController::*)()>(&GlobalNamespace::FPSRecordController::Start)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x21cb5c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FPSRecordController>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FPSRecordController.HandleDidResumeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FPSRecordController::*)()>(&GlobalNamespace::FPSRecordController::HandleDidResumeEvent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x21cb7e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FPSRecordController>::get(),
                            "HandleDidResumeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FPSRecordController.HandleDidPauseEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FPSRecordController::*)()>(&GlobalNamespace::FPSRecordController::HandleDidPauseEvent)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21cb814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FPSRecordController>::get(),
                            "HandleDidPauseEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FPSRecordController.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FPSRecordController::*)()>(&GlobalNamespace::FPSRecordController::OnDisable)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x21cb838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FPSRecordController>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FPSRecordController.GenerateFPSReport
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FPSRecordController::*)()>(&GlobalNamespace::FPSRecordController::GenerateFPSReport)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x21cb96c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FPSRecordController>::get(),
                            "GenerateFPSReport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FPSRecordController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FPSRecordController::*)()>(&GlobalNamespace::FPSRecordController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21cbc80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FPSRecordController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::FPSRecordController::__set__fpsRecorder(GlobalNamespace::FPSRecorder value)  {
::cordl_internals::setInstanceField<GlobalNamespace::FPSRecorder, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::FPSRecorder>(value));
}
constexpr GlobalNamespace::FPSRecorder GlobalNamespace::FPSRecordController::__get__fpsRecorder() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::FPSRecorder, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FPSRecordController::__set__csvRecordSetup(GlobalNamespace::GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup>(value));
}
constexpr GlobalNamespace::GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup GlobalNamespace::FPSRecordController::__get__csvRecordSetup() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FPSRecordController::__set__pauseController(GlobalNamespace::PauseController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PauseController, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PauseController>(value));
}
constexpr GlobalNamespace::PauseController GlobalNamespace::FPSRecordController::__get__pauseController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PauseController, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FPSRecordController::__set__sceneSetupData(GlobalNamespace::GameplayCoreSceneSetupData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayCoreSceneSetupData, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameplayCoreSceneSetupData>(value));
}
constexpr GlobalNamespace::GameplayCoreSceneSetupData GlobalNamespace::FPSRecordController::__get__sceneSetupData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayCoreSceneSetupData, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::FPSRecordController::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FPSRecordController>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::FPSRecordController::HandleDidResumeEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FPSRecordController>::get(),
                            "HandleDidResumeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::FPSRecordController::HandleDidPauseEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FPSRecordController>::get(),
                            "HandleDidPauseEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::FPSRecordController::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FPSRecordController>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::FPSRecordController::GenerateFPSReport()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FPSRecordController>::get(),
                            "GenerateFPSReport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::FPSRecordController::FPSRecordController()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<FPSRecordController>())) {}
 void GlobalNamespace::FPSRecordController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FPSRecordController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
