#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__GameObjectTestExceptionsSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException.get_environmentInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::EnvironmentInfoSO (GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException::*)()>(&GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException::get_environmentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f67b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException>::get(),
                            "get_environmentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException.get_sceneHierarchies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException::*)()>(&GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException::get_sceneHierarchies)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f67b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException>::get(),
                            "get_sceneHierarchies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException::*)()>(&GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f67c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException::__set__environmentInfo(GlobalNamespace::EnvironmentInfoSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::EnvironmentInfoSO, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::EnvironmentInfoSO>(value));
}
constexpr GlobalNamespace::EnvironmentInfoSO GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException::__get__environmentInfo() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::EnvironmentInfoSO, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException::__set__exceptionNotes(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException::__get__exceptionNotes() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException::__set__sceneHierarchies(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException::__get__sceneHierarchies() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::EnvironmentInfoSO GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException::get_environmentInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException>::get(),
                            "get_environmentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::EnvironmentInfoSO, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::StringW> GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException::get_sceneHierarchies()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException>::get(),
                            "get_sceneHierarchies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException>())) {}
 void GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GameObjectTestExceptionsSO.GetExceptionAsDictionary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Dictionary_2<GlobalNamespace::EnvironmentInfoSO,::ArrayW<::StringW>> (*)(::ArrayW<GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException>)>(&GlobalNamespace::GameObjectTestExceptionsSO::GetExceptionAsDictionary)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x21f66c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameObjectTestExceptionsSO>::get(),
                            "GetExceptionAsDictionary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameObjectTestExceptionsSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameObjectTestExceptionsSO::*)()>(&GlobalNamespace::GameObjectTestExceptionsSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f67a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameObjectTestExceptionsSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GameObjectTestExceptionsSO::__set_tubeBloomPrePassLightIgnores(::ArrayW<GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException>>(value));
}
constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException> GlobalNamespace::GameObjectTestExceptionsSO::__get_tubeBloomPrePassLightIgnores() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Generic::Dictionary_2<GlobalNamespace::EnvironmentInfoSO,::ArrayW<::StringW>> GlobalNamespace::GameObjectTestExceptionsSO::GetExceptionAsDictionary(::ArrayW<GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException> testExceptionArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameObjectTestExceptionsSO>::get(),
                            "GetExceptionAsDictionary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::Dictionary_2<GlobalNamespace::EnvironmentInfoSO,::ArrayW<::StringW>>, false>(nullptr, ___internal_method, testExceptionArray);
}
// Ctor Parameters []
 GlobalNamespace::GameObjectTestExceptionsSO::GameObjectTestExceptionsSO()  : GlobalNamespace::PersistentScriptableObject(THROW_UNLESS(::il2cpp_utils::New<GameObjectTestExceptionsSO>())) {}
 void GlobalNamespace::GameObjectTestExceptionsSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameObjectTestExceptionsSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
