#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__CSVFPSRecordReporter_def.hpp"
#include "GlobalNamespace/zzzz__FPSRecorder_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup.get_period
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup::*)()>(&GlobalNamespace::GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup::get_period)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21cb5b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup>::get(),
                            "get_period",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup::*)(float_t)>(&GlobalNamespace::GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21cb5b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "_period", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup::GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup(float_t _period) noexcept : ::bs_hook::ValueTypeWrapper() {this->_period = _period;
}
constexpr void GlobalNamespace::GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup::__set__period(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup::__get__period() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->__instance);
}
 float_t GlobalNamespace::GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup::get_period()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup>::get(),
                            "get_period",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup::_ctor(float_t period)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, period);
}
//  Writing Method size for method: GlobalNamespace::CSVFPSRecordReporter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CSVFPSRecordReporter::*)(GlobalNamespace::GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup)>(&GlobalNamespace::CSVFPSRecordReporter::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21cabc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CSVFPSRecordReporter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CSVFPSRecordReporter.GenerateReport
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CSVFPSRecordReporter::*)(GlobalNamespace::GlobalNamespace__FPSRecorder__FPSRecord, ::StringW)>(&GlobalNamespace::CSVFPSRecordReporter::GenerateReport)> {
  constexpr static std::size_t size = 0x9b8;
  constexpr static std::size_t addrs = 0x21cabf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CSVFPSRecordReporter>::get(),
                            "GenerateReport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__FPSRecorder__FPSRecord>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::CSVFPSRecordReporter::__set__period(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::CSVFPSRecordReporter::__get__period() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "reportSetup", ty: "GlobalNamespace::GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup", modifiers: "", def_value: None }]
 GlobalNamespace::CSVFPSRecordReporter::CSVFPSRecordReporter(GlobalNamespace::GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup reportSetup)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CSVFPSRecordReporter>(reportSetup))) {}
 void GlobalNamespace::CSVFPSRecordReporter::_ctor(GlobalNamespace::GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup reportSetup)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CSVFPSRecordReporter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reportSetup);
}
 void GlobalNamespace::CSVFPSRecordReporter::GenerateReport(GlobalNamespace::GlobalNamespace__FPSRecorder__FPSRecord record, ::StringW recordOutputPathAndName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CSVFPSRecordReporter>::get(),
                            "GenerateReport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__FPSRecorder__FPSRecord>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, record, recordOutputPathAndName);
}
