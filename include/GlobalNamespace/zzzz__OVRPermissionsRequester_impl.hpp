#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPermissionsRequester_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/Android/zzzz__PermissionCallbacks_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission::GlobalNamespace__OVRPermissionsRequester__Permission(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission  GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission::FaceTracking{0};
constexpr GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission  GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission::BodyTracking{1};
constexpr GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission  GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission::EyeTracking{2};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c::*)()>(&GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x260c8cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c._BuildPermissionCallbacks_b__12_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c::*)(::StringW)>(&GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c::_BuildPermissionCallbacks_b__12_0)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x260c8d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c>::get(),
                            "<BuildPermissionCallbacks>b__12_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c._BuildPermissionCallbacks_b__12_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c::*)(::StringW)>(&GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c::_BuildPermissionCallbacks_b__12_1)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x260c978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c>::get(),
                            "<BuildPermissionCallbacks>b__12_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c._BuildPermissionCallbacks_b__12_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c::*)(::StringW)>(&GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c::_BuildPermissionCallbacks_b__12_2)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x260ca1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c>::get(),
                            "<BuildPermissionCallbacks>b__12_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c::__set___9(GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c value)  {
::cordl_internals::setStaticField<GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c>::get>(std::forward<GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c>(value));
}
 GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c::__get___9()  {
return ::cordl_internals::getStaticField<GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c>::get>();
}
 void GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c::__set___9__12_0(System::Action_1<::StringW> value)  {
::cordl_internals::setStaticField<System::Action_1<::StringW>, "<>9__12_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c>::get>(std::forward<System::Action_1<::StringW>>(value));
}
 System::Action_1<::StringW> GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c::__get___9__12_0()  {
return ::cordl_internals::getStaticField<System::Action_1<::StringW>, "<>9__12_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c>::get>();
}
 void GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c::__set___9__12_1(System::Action_1<::StringW> value)  {
::cordl_internals::setStaticField<System::Action_1<::StringW>, "<>9__12_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c>::get>(std::forward<System::Action_1<::StringW>>(value));
}
 System::Action_1<::StringW> GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c::__get___9__12_1()  {
return ::cordl_internals::getStaticField<System::Action_1<::StringW>, "<>9__12_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c>::get>();
}
 void GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c::__set___9__12_2(System::Action_1<::StringW> value)  {
::cordl_internals::setStaticField<System::Action_1<::StringW>, "<>9__12_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c>::get>(std::forward<System::Action_1<::StringW>>(value));
}
 System::Action_1<::StringW> GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c::__get___9__12_2()  {
return ::cordl_internals::getStaticField<System::Action_1<::StringW>, "<>9__12_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c>::get>();
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c::GlobalNamespace__OVRPermissionsRequester____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__OVRPermissionsRequester____c>())) {}
 void GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c::_BuildPermissionCallbacks_b__12_0(::StringW permissionId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c>::get(),
                            "<BuildPermissionCallbacks>b__12_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, permissionId);
}
 void GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c::_BuildPermissionCallbacks_b__12_1(::StringW permissionId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c>::get(),
                            "<BuildPermissionCallbacks>b__12_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, permissionId);
}
 void GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c::_BuildPermissionCallbacks_b__12_2(::StringW permissionId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c>::get(),
                            "<BuildPermissionCallbacks>b__12_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, permissionId);
}
//  Writing Method size for method: GlobalNamespace::OVRPermissionsRequester.add_PermissionGranted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Action_1<::StringW>)>(&GlobalNamespace::OVRPermissionsRequester::add_PermissionGranted)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x260bb54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPermissionsRequester>::get(),
                            "add_PermissionGranted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPermissionsRequester.remove_PermissionGranted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Action_1<::StringW>)>(&GlobalNamespace::OVRPermissionsRequester::remove_PermissionGranted)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x260bc20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPermissionsRequester>::get(),
                            "remove_PermissionGranted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPermissionsRequester.GetPermissionId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission)>(&GlobalNamespace::OVRPermissionsRequester::GetPermissionId)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x260bcec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPermissionsRequester>::get(),
                            "GetPermissionId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPermissionsRequester.IsPermissionSupportedByPlatform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission)>(&GlobalNamespace::OVRPermissionsRequester::IsPermissionSupportedByPlatform)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x260bdc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPermissionsRequester>::get(),
                            "IsPermissionSupportedByPlatform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPermissionsRequester.IsPermissionGranted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission)>(&GlobalNamespace::OVRPermissionsRequester::IsPermissionGranted)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x260c140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPermissionsRequester>::get(),
                            "IsPermissionGranted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPermissionsRequester.Request
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::IEnumerable_1<GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission>)>(&GlobalNamespace::OVRPermissionsRequester::Request)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x260c154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPermissionsRequester>::get(),
                            "Request",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPermissionsRequester.ShouldRequestPermission
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission)>(&GlobalNamespace::OVRPermissionsRequester::ShouldRequestPermission)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x260c548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPermissionsRequester>::get(),
                            "ShouldRequestPermission",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPermissionsRequester.BuildPermissionCallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Android::PermissionCallbacks (*)()>(&GlobalNamespace::OVRPermissionsRequester::BuildPermissionCallbacks)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x260c644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPermissionsRequester>::get(),
                            "BuildPermissionCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::OVRPermissionsRequester::__set_PermissionGranted(System::Action_1<::StringW> value)  {
::cordl_internals::setStaticField<System::Action_1<::StringW>, "PermissionGranted", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPermissionsRequester>::get>(std::forward<System::Action_1<::StringW>>(value));
}
 System::Action_1<::StringW> GlobalNamespace::OVRPermissionsRequester::__get_PermissionGranted()  {
return ::cordl_internals::getStaticField<System::Action_1<::StringW>, "PermissionGranted", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPermissionsRequester>::get>();
}
 void GlobalNamespace::OVRPermissionsRequester::add_PermissionGranted(System::Action_1<::StringW> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPermissionsRequester>::get(),
                            "add_PermissionGranted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void GlobalNamespace::OVRPermissionsRequester::remove_PermissionGranted(System::Action_1<::StringW> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPermissionsRequester>::get(),
                            "remove_PermissionGranted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 ::StringW GlobalNamespace::OVRPermissionsRequester::GetPermissionId(GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission permission)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPermissionsRequester>::get(),
                            "GetPermissionId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, permission);
}
 bool GlobalNamespace::OVRPermissionsRequester::IsPermissionSupportedByPlatform(GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission permission)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPermissionsRequester>::get(),
                            "IsPermissionSupportedByPlatform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, permission);
}
 bool GlobalNamespace::OVRPermissionsRequester::IsPermissionGranted(GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission permission)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPermissionsRequester>::get(),
                            "IsPermissionGranted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, permission);
}
 void GlobalNamespace::OVRPermissionsRequester::Request(System::Collections::Generic::IEnumerable_1<GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission> permissions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPermissionsRequester>::get(),
                            "Request",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, permissions);
}
 bool GlobalNamespace::OVRPermissionsRequester::ShouldRequestPermission(GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission permission)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPermissionsRequester>::get(),
                            "ShouldRequestPermission",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, permission);
}
 UnityEngine::Android::PermissionCallbacks GlobalNamespace::OVRPermissionsRequester::BuildPermissionCallbacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPermissionsRequester>::get(),
                            "BuildPermissionCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Android::PermissionCallbacks, false>(nullptr, ___internal_method);
}
