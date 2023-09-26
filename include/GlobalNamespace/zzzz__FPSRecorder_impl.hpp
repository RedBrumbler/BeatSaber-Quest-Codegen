#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FPSRecorder_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__FPSTimestamp_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__FPSRecorder__FPSRecord._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__FPSRecorder__FPSRecord::*)(System::Collections::Generic::List_1<GlobalNamespace::FPSTimestamp>)>(&GlobalNamespace::GlobalNamespace__FPSRecorder__FPSRecord::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21cbe30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__FPSRecorder__FPSRecord>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<GlobalNamespace::FPSTimestamp>>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "recordedTimestamps", ty: "System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::FPSTimestamp>", modifiers: "", def_value: Some("csnull") }]
constexpr GlobalNamespace::GlobalNamespace__FPSRecorder__FPSRecord::GlobalNamespace__FPSRecorder__FPSRecord(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::FPSTimestamp> recordedTimestamps) noexcept : ::bs_hook::ValueTypeWrapper() {this->recordedTimestamps = recordedTimestamps;
}
constexpr void GlobalNamespace::GlobalNamespace__FPSRecorder__FPSRecord::__set_recordedTimestamps(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::FPSTimestamp> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::FPSTimestamp>, 0x0>(this->__instance, std::forward<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::FPSTimestamp>>(value));
}
constexpr System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::FPSTimestamp> GlobalNamespace::GlobalNamespace__FPSRecorder__FPSRecord::__get_recordedTimestamps() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::FPSTimestamp>, 0x0>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__FPSRecorder__FPSRecord::_ctor(System::Collections::Generic::List_1<GlobalNamespace::FPSTimestamp> recordedTimestamps)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__FPSRecorder__FPSRecord>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<GlobalNamespace::FPSTimestamp>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, recordedTimestamps);
}
//  Writing Method size for method: GlobalNamespace::FPSRecorder.StartRecording
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FPSRecorder::*)()>(&GlobalNamespace::FPSRecorder::StartRecording)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x21cb768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FPSRecorder>::get(),
                            "StartRecording",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FPSRecorder.PauseRecording
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FPSRecorder::*)()>(&GlobalNamespace::FPSRecorder::PauseRecording)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21cb830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FPSRecorder>::get(),
                            "PauseRecording",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FPSRecorder.ResumeRecording
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FPSRecorder::*)()>(&GlobalNamespace::FPSRecorder::ResumeRecording)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21cb808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FPSRecorder>::get(),
                            "ResumeRecording",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FPSRecorder.GetRecord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__FPSRecorder__FPSRecord (GlobalNamespace::FPSRecorder::*)()>(&GlobalNamespace::FPSRecorder::GetRecord)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21cbc78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FPSRecorder>::get(),
                            "GetRecord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FPSRecorder.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FPSRecorder::*)()>(&GlobalNamespace::FPSRecorder::Update)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x21cbc88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FPSRecorder>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FPSRecorder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FPSRecorder::*)()>(&GlobalNamespace::FPSRecorder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21cbe28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FPSRecorder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::FPSRecorder::__set__recordedTimestamps(System::Collections::Generic::List_1<GlobalNamespace::FPSTimestamp> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::FPSTimestamp>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::FPSTimestamp>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::FPSTimestamp> GlobalNamespace::FPSRecorder::__get__recordedTimestamps() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::FPSTimestamp>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FPSRecorder::__set__timeSinceRecordStarted(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::FPSRecorder::__get__timeSinceRecordStarted() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FPSRecorder::__set__isRecordingEnabled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::FPSRecorder::__get__isRecordingEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::FPSRecorder::StartRecording()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FPSRecorder>::get(),
                            "StartRecording",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::FPSRecorder::PauseRecording()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FPSRecorder>::get(),
                            "PauseRecording",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::FPSRecorder::ResumeRecording()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FPSRecorder>::get(),
                            "ResumeRecording",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__FPSRecorder__FPSRecord GlobalNamespace::FPSRecorder::GetRecord()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FPSRecorder>::get(),
                            "GetRecord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__FPSRecorder__FPSRecord, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::FPSRecorder::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FPSRecorder>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::FPSRecorder::FPSRecorder()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<FPSRecorder>())) {}
 void GlobalNamespace::FPSRecorder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FPSRecorder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
