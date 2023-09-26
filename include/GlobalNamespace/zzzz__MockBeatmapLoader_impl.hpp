#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__MockBeatmapLoader_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmapSet_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapIdentifierNetSerializable_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__IMockBeatmapDataProvider_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__MockBeatmapData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d::*)()>(&GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d::MoveNext)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x21222e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2122548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0 __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d::__set___4__this(GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0 value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0, 0x20>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0>(value));
}
constexpr GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0 GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData>, 0x28>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData>, 0x28>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0::*)()>(&GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x212209c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0._GetBeatmapData_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0::*)(GlobalNamespace::IDifficultyBeatmapSet)>(&GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0::_GetBeatmapData_b__0)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x21220a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0>::get(),
                            "<GetBeatmapData>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmapSet>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0._GetBeatmapData_b__2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0::*)(GlobalNamespace::IDifficultyBeatmap)>(&GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0::_GetBeatmapData_b__2)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2122160;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0>::get(),
                            "<GetBeatmapData>b__2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0._GetBeatmapData_b__3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0::*)()>(&GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0::_GetBeatmapData_b__3)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x212221c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0>::get(),
                            "<GetBeatmapData>b__3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0::__set_beatmap(GlobalNamespace::BeatmapIdentifierNetSerializable value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapIdentifierNetSerializable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapIdentifierNetSerializable>(value));
}
constexpr GlobalNamespace::BeatmapIdentifierNetSerializable GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0::__get_beatmap() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapIdentifierNetSerializable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0::__set_difficultyBeatmap(GlobalNamespace::IDifficultyBeatmap value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IDifficultyBeatmap, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IDifficultyBeatmap>(value));
}
constexpr GlobalNamespace::IDifficultyBeatmap GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0::__get_difficultyBeatmap() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IDifficultyBeatmap, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0::__set_beatmapData(GlobalNamespace::IReadonlyBeatmapData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IReadonlyBeatmapData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IReadonlyBeatmapData>(value));
}
constexpr GlobalNamespace::IReadonlyBeatmapData GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0::__get_beatmapData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IReadonlyBeatmapData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0>())) {}
 void GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0::_GetBeatmapData_b__0(GlobalNamespace::IDifficultyBeatmapSet bds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0>::get(),
                            "<GetBeatmapData>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmapSet>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, bds);
}
 bool GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0::_GetBeatmapData_b__2(GlobalNamespace::IDifficultyBeatmap dbm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0>::get(),
                            "<GetBeatmapData>b__2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, dbm);
}
 System::Threading::Tasks::Task GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0::_GetBeatmapData_b__3()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0>::get(),
                            "<GetBeatmapData>b__3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c::*)()>(&GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21225b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c._GetBeatmapData_b__2_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<GlobalNamespace::IDifficultyBeatmap> (GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c::*)(GlobalNamespace::IDifficultyBeatmapSet)>(&GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c::_GetBeatmapData_b__2_1)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x21225c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c>::get(),
                            "<GetBeatmapData>b__2_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmapSet>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c::__set___9(GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c value)  {
::cordl_internals::setStaticField<GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c>::get>(std::forward<GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c>(value));
}
 GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c::__get___9()  {
return ::cordl_internals::getStaticField<GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c>::get>();
}
 void GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c::__set___9__2_1(System::Func_2<GlobalNamespace::IDifficultyBeatmapSet,System::Collections::Generic::IEnumerable_1<GlobalNamespace::IDifficultyBeatmap>> value)  {
::cordl_internals::setStaticField<System::Func_2<GlobalNamespace::IDifficultyBeatmapSet,System::Collections::Generic::IEnumerable_1<GlobalNamespace::IDifficultyBeatmap>>, "<>9__2_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c>::get>(std::forward<System::Func_2<GlobalNamespace::IDifficultyBeatmapSet,System::Collections::Generic::IEnumerable_1<GlobalNamespace::IDifficultyBeatmap>>>(value));
}
 System::Func_2<GlobalNamespace::IDifficultyBeatmapSet,System::Collections::Generic::IEnumerable_1<GlobalNamespace::IDifficultyBeatmap>> GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c::__get___9__2_1()  {
return ::cordl_internals::getStaticField<System::Func_2<GlobalNamespace::IDifficultyBeatmapSet,System::Collections::Generic::IEnumerable_1<GlobalNamespace::IDifficultyBeatmap>>, "<>9__2_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c>::get>();
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c::GlobalNamespace__MockBeatmapLoader____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__MockBeatmapLoader____c>())) {}
 void GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerable_1<GlobalNamespace::IDifficultyBeatmap> GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c::_GetBeatmapData_b__2_1(GlobalNamespace::IDifficultyBeatmapSet bds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c>::get(),
                            "<GetBeatmapData>b__2_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmapSet>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<GlobalNamespace::IDifficultyBeatmap>, false>(const_cast<void*>(instance), ___internal_method, bds);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2::*)()>(&GlobalNamespace::GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2::MoveNext)> {
  constexpr static std::size_t size = 0x620;
  constexpr static std::size_t addrs = 0x2122660;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2122c80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::MockBeatmapData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmap", ty: "GlobalNamespace::BeatmapIdentifierNetSerializable", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__4__this", ty: "GlobalNamespace::MockBeatmapLoader", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__8__1", ty: "GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2::GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::MockBeatmapData> __t__builder, GlobalNamespace::BeatmapIdentifierNetSerializable beatmap, GlobalNamespace::MockBeatmapLoader __4__this, System::Threading::CancellationToken cancellationToken, GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0 __8__1, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->beatmap = beatmap;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->__8__1 = __8__1;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::MockBeatmapData> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::MockBeatmapData>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::MockBeatmapData>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::MockBeatmapData> GlobalNamespace::GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::MockBeatmapData>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2::__set_beatmap(GlobalNamespace::BeatmapIdentifierNetSerializable value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapIdentifierNetSerializable, 0x20>(this->__instance, std::forward<GlobalNamespace::BeatmapIdentifierNetSerializable>(value));
}
constexpr GlobalNamespace::BeatmapIdentifierNetSerializable GlobalNamespace::GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2::__get_beatmap() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapIdentifierNetSerializable, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2::__set___4__this(GlobalNamespace::MockBeatmapLoader value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MockBeatmapLoader, 0x28>(this->__instance, std::forward<GlobalNamespace::MockBeatmapLoader>(value));
}
constexpr GlobalNamespace::MockBeatmapLoader GlobalNamespace::GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MockBeatmapLoader, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x30>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2::__set___8__1(GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0 value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0, 0x38>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0>(value));
}
constexpr GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0 GlobalNamespace::GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2::__get___8__1() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0, 0x38>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>, 0x40>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> GlobalNamespace::GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>, 0x40>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::MockBeatmapLoader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockBeatmapLoader::*)(GlobalNamespace::BeatmapLevelsModel)>(&GlobalNamespace::MockBeatmapLoader::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2121f68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockBeatmapLoader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelsModel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockBeatmapLoader.GetBeatmapData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::MockBeatmapData> (GlobalNamespace::MockBeatmapLoader::*)(GlobalNamespace::BeatmapIdentifierNetSerializable, System::Threading::CancellationToken)>(&GlobalNamespace::MockBeatmapLoader::GetBeatmapData)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2121f90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockBeatmapLoader>::get(),
                            "GetBeatmapData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapIdentifierNetSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockBeatmapLoader.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockBeatmapLoader::*)()>(&GlobalNamespace::MockBeatmapLoader::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2122098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockBeatmapLoader>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IMockBeatmapDataProvider
constexpr  GlobalNamespace::MockBeatmapLoader::operator GlobalNamespace::IMockBeatmapDataProvider() const noexcept {
return GlobalNamespace::IMockBeatmapDataProvider(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::MockBeatmapLoader::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MockBeatmapLoader::__set__beatmapLevelsModel(GlobalNamespace::BeatmapLevelsModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapLevelsModel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapLevelsModel>(value));
}
constexpr GlobalNamespace::BeatmapLevelsModel GlobalNamespace::MockBeatmapLoader::__get__beatmapLevelsModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapLevelsModel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "beatmapLevelsModel", ty: "GlobalNamespace::BeatmapLevelsModel", modifiers: "", def_value: None }]
 GlobalNamespace::MockBeatmapLoader::MockBeatmapLoader(GlobalNamespace::BeatmapLevelsModel beatmapLevelsModel)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<MockBeatmapLoader>(beatmapLevelsModel))) {}
 void GlobalNamespace::MockBeatmapLoader::_ctor(GlobalNamespace::BeatmapLevelsModel beatmapLevelsModel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockBeatmapLoader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelsModel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapLevelsModel);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::MockBeatmapData> GlobalNamespace::MockBeatmapLoader::GetBeatmapData(GlobalNamespace::BeatmapIdentifierNetSerializable beatmap, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockBeatmapLoader>::get(),
                            "GetBeatmapData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapIdentifierNetSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::MockBeatmapData>, false>(const_cast<void*>(instance), ___internal_method, beatmap, cancellationToken);
}
 void GlobalNamespace::MockBeatmapLoader::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockBeatmapLoader>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
