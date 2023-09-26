#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AssetDatabase_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions::HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions  HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions::Default{0};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions  HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions::ForceUpdate{1};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions  HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions::ForceSynchronousImport{8};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions  HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions::ImportRecursive{256};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions  HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions::DontDownloadFromCacheServer{8192};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions  HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions::ForceUncompressedImport{16384};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.GetAssetCachePath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&HoudiniEngineUnity::HEU_AssetDatabase::GetAssetCachePath)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x20499c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetAssetCachePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.GetUnityProjectPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&HoudiniEngineUnity::HEU_AssetDatabase::GetUnityProjectPath)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2049a20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetUnityProjectPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.GetAssetRelativePath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&HoudiniEngineUnity::HEU_AssetDatabase::GetAssetRelativePath)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2049a84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetAssetRelativePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.GetPackagesRelativePath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&HoudiniEngineUnity::HEU_AssetDatabase::GetPackagesRelativePath)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2049c08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetPackagesRelativePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.GetValidAssetPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&HoudiniEngineUnity::HEU_AssetDatabase::GetValidAssetPath)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x2049d2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetValidAssetPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.GetAssetPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(UnityEngine::Object)>(&HoudiniEngineUnity::HEU_AssetDatabase::GetAssetPath)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2049efc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetAssetPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.GetAssetPathWithSubAssetSupport
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(UnityEngine::Object)>(&HoudiniEngineUnity::HEU_AssetDatabase::GetAssetPathWithSubAssetSupport)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2049f48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetAssetPathWithSubAssetSupport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.GetSubAssetPathFromPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ByRef<::StringW>, ByRef<::StringW>)>(&HoudiniEngineUnity::HEU_AssetDatabase::GetSubAssetPathFromPath)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2049f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetSubAssetPathFromPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.GetAssetRelativePathStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&HoudiniEngineUnity::HEU_AssetDatabase::GetAssetRelativePathStart)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x204a090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetAssetRelativePathStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.GetPackagesRelativePathStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&HoudiniEngineUnity::HEU_AssetDatabase::GetPackagesRelativePathStart)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x204a124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetPackagesRelativePathStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.GetAssetFullPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&HoudiniEngineUnity::HEU_AssetDatabase::GetAssetFullPath)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x204a1b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetAssetFullPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.IsPathRelativeToAssets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&HoudiniEngineUnity::HEU_AssetDatabase::IsPathRelativeToAssets)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x204a264;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "IsPathRelativeToAssets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.IsPathRelativeToPackages
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&HoudiniEngineUnity::HEU_AssetDatabase::IsPathRelativeToPackages)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x204a28c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "IsPathRelativeToPackages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.GetAssetRootPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(UnityEngine::Object)>(&HoudiniEngineUnity::HEU_AssetDatabase::GetAssetRootPath)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x204a2b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetAssetRootPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.GetUniqueAssetPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&HoudiniEngineUnity::HEU_AssetDatabase::GetUniqueAssetPath)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x204a300;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetUniqueAssetPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.GetAssetOrScenePath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(UnityEngine::Object)>(&HoudiniEngineUnity::HEU_AssetDatabase::GetAssetOrScenePath)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x204a34c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetAssetOrScenePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.IsPathInAssetCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&HoudiniEngineUnity::HEU_AssetDatabase::IsPathInAssetCache)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x204a398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "IsPathInAssetCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.IsPathInAssetCacheBakedFolder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&HoudiniEngineUnity::HEU_AssetDatabase::IsPathInAssetCacheBakedFolder)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x204a3e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "IsPathInAssetCacheBakedFolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.IsPathInAssetCacheWorkingFolder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&HoudiniEngineUnity::HEU_AssetDatabase::IsPathInAssetCacheWorkingFolder)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x204a434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "IsPathInAssetCacheWorkingFolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.IsAssetInAssetCacheBakedFolder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Object)>(&HoudiniEngineUnity::HEU_AssetDatabase::IsAssetInAssetCacheBakedFolder)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x204a480;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "IsAssetInAssetCacheBakedFolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.IsAssetInAssetCacheWorkingFolder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Object)>(&HoudiniEngineUnity::HEU_AssetDatabase::IsAssetInAssetCacheWorkingFolder)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x204a4cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "IsAssetInAssetCacheWorkingFolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.CreateAssetCacheFolder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, int32_t)>(&HoudiniEngineUnity::HEU_AssetDatabase::CreateAssetCacheFolder)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x204a518;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "CreateAssetCacheFolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.DeleteAssetCacheFolder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&HoudiniEngineUnity::HEU_AssetDatabase::DeleteAssetCacheFolder)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x204a564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "DeleteAssetCacheFolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.DeleteAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Object)>(&HoudiniEngineUnity::HEU_AssetDatabase::DeleteAsset)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x204a5a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "DeleteAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.DeleteAssetAtPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&HoudiniEngineUnity::HEU_AssetDatabase::DeleteAssetAtPath)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x204a5ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "DeleteAssetAtPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.DeleteAssetIfInBakedFolder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Object)>(&HoudiniEngineUnity::HEU_AssetDatabase::DeleteAssetIfInBakedFolder)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x204a630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "DeleteAssetIfInBakedFolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.ContainsAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Object)>(&HoudiniEngineUnity::HEU_AssetDatabase::ContainsAsset)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x204a674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "ContainsAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.CopyAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW)>(&HoudiniEngineUnity::HEU_AssetDatabase::CopyAsset)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x204a6c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "CopyAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.CopyAndLoadAssetWithRelativePath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Object (*)(UnityEngine::Object, ::StringW, ::StringW, System::Type, bool)>(&HoudiniEngineUnity::HEU_AssetDatabase::CopyAndLoadAssetWithRelativePath)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x204a70c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "CopyAndLoadAssetWithRelativePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.CopyAndLoadAssetFromAssetCachePath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Object (*)(UnityEngine::Object, ::StringW, System::Type, bool)>(&HoudiniEngineUnity::HEU_AssetDatabase::CopyAndLoadAssetFromAssetCachePath)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x204a758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "CopyAndLoadAssetFromAssetCachePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.CopyAndLoadAssetAtAnyPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Object (*)(UnityEngine::Object, ::StringW, System::Type, bool)>(&HoudiniEngineUnity::HEU_AssetDatabase::CopyAndLoadAssetAtAnyPath)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x204a7a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "CopyAndLoadAssetAtAnyPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.CopyAndLoadAssetAtGivenPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Object (*)(UnityEngine::Object, ::StringW, System::Type)>(&HoudiniEngineUnity::HEU_AssetDatabase::CopyAndLoadAssetAtGivenPath)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x204a7f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "CopyAndLoadAssetAtGivenPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.CopyUniqueAndLoadAssetAtAnyPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Object (*)(UnityEngine::Object, ::StringW, System::Type)>(&HoudiniEngineUnity::HEU_AssetDatabase::CopyUniqueAndLoadAssetAtAnyPath)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x204a83c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "CopyUniqueAndLoadAssetAtAnyPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.CreateObjectInAssetCacheFolder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Object, ::StringW, ::StringW, ::StringW, System::Type, bool)>(&HoudiniEngineUnity::HEU_AssetDatabase::CreateObjectInAssetCacheFolder)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x204a888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "CreateObjectInAssetCacheFolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.CreateAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Object, ::StringW)>(&HoudiniEngineUnity::HEU_AssetDatabase::CreateAsset)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x204a8cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "CreateAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.CreateAddObjectInAssetCacheFolder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, UnityEngine::Object, ::StringW, ByRef<::StringW>, ByRef<UnityEngine::Object>)>(&HoudiniEngineUnity::HEU_AssetDatabase::CreateAddObjectInAssetCacheFolder)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x204a910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "CreateAddObjectInAssetCacheFolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Object>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.AddObjectToAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Object, UnityEngine::Object)>(&HoudiniEngineUnity::HEU_AssetDatabase::AddObjectToAsset)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x204a954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "AddObjectToAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.SaveAndRefreshDatabase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HoudiniEngineUnity::HEU_AssetDatabase::SaveAndRefreshDatabase)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x204a998;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "SaveAndRefreshDatabase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.SaveAssetDatabase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HoudiniEngineUnity::HEU_AssetDatabase::SaveAssetDatabase)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x204a99c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "SaveAssetDatabase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.RefreshAssetDatabase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HoudiniEngineUnity::HEU_AssetDatabase::RefreshAssetDatabase)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x204a9a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "RefreshAssetDatabase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.LoadAssetAtPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Object (*)(::StringW, System::Type)>(&HoudiniEngineUnity::HEU_AssetDatabase::LoadAssetAtPath)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x204a9a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "LoadAssetAtPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.LoadSubAssetAtPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Object (*)(::StringW, ::StringW)>(&HoudiniEngineUnity::HEU_AssetDatabase::LoadSubAssetAtPath)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x204a9f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "LoadSubAssetAtPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.LoadAllAssetsAtPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::Object> (*)(::StringW)>(&HoudiniEngineUnity::HEU_AssetDatabase::LoadAllAssetsAtPath)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x204aa50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "LoadAllAssetsAtPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.LoadAllAssetRepresentationsAtPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::Object> (*)(::StringW)>(&HoudiniEngineUnity::HEU_AssetDatabase::LoadAllAssetRepresentationsAtPath)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x204aa04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "LoadAllAssetRepresentationsAtPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.ImportAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions)>(&HoudiniEngineUnity::HEU_AssetDatabase::ImportAsset)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x204aa9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "ImportAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.GetAssetWorkingPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&HoudiniEngineUnity::HEU_AssetDatabase::GetAssetWorkingPath)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x204aae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetAssetWorkingPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.GetAssetBakedPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&HoudiniEngineUnity::HEU_AssetDatabase::GetAssetBakedPath)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x204ab2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetAssetBakedPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.GetAssetBakedPathWithAssetName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&HoudiniEngineUnity::HEU_AssetDatabase::GetAssetBakedPathWithAssetName)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x204ab78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetAssetBakedPathWithAssetName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.CreateUniqueBakePath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&HoudiniEngineUnity::HEU_AssetDatabase::CreateUniqueBakePath)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x204abc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "CreateUniqueBakePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.CreatePathWithFolders
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&HoudiniEngineUnity::HEU_AssetDatabase::CreatePathWithFolders)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x204ac10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "CreatePathWithFolders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.AppendMeshesPathToAssetFolder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&HoudiniEngineUnity::HEU_AssetDatabase::AppendMeshesPathToAssetFolder)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x204ac54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "AppendMeshesPathToAssetFolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.AppendTexturesPathToAssetFolder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&HoudiniEngineUnity::HEU_AssetDatabase::AppendTexturesPathToAssetFolder)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x204ae40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "AppendTexturesPathToAssetFolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.AppendMaterialsPathToAssetFolder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&HoudiniEngineUnity::HEU_AssetDatabase::AppendMaterialsPathToAssetFolder)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x204af08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "AppendMaterialsPathToAssetFolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.AppendTerrainPathToAssetFolder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&HoudiniEngineUnity::HEU_AssetDatabase::AppendTerrainPathToAssetFolder)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x204afd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "AppendTerrainPathToAssetFolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.GetAssetSubFolders
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)()>(&HoudiniEngineUnity::HEU_AssetDatabase::GetAssetSubFolders)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x204b098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetAssetSubFolders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.AppendPrefabPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW)>(&HoudiniEngineUnity::HEU_AssetDatabase::AppendPrefabPath)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x204b1fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "AppendPrefabPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.AppendMeshesAssetFileName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&HoudiniEngineUnity::HEU_AssetDatabase::AppendMeshesAssetFileName)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x204b2dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "AppendMeshesAssetFileName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.IsSubAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Object)>(&HoudiniEngineUnity::HEU_AssetDatabase::IsSubAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x204b328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "IsSubAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.GetAssetPathsFromAssetBundle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(::StringW)>(&HoudiniEngineUnity::HEU_AssetDatabase::GetAssetPathsFromAssetBundle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x204b330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetAssetPathsFromAssetBundle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.IsAssetSavedInScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::GameObject)>(&HoudiniEngineUnity::HEU_AssetDatabase::IsAssetSavedInScene)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x204b338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "IsAssetSavedInScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.SelectAssetAtPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&HoudiniEngineUnity::HEU_AssetDatabase::SelectAssetAtPath)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x204b384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "SelectAssetAtPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.PrintDependencies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::GameObject)>(&HoudiniEngineUnity::HEU_AssetDatabase::PrintDependencies)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x204b388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "PrintDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetDatabase.GetUniqueAssetPathForUnityAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(UnityEngine::Object)>(&HoudiniEngineUnity::HEU_AssetDatabase::GetUniqueAssetPathForUnityAsset)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x204b38c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetUniqueAssetPathForUnityAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
    return ___internal_method;
  }
};
 ::StringW HoudiniEngineUnity::HEU_AssetDatabase::GetAssetCachePath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetAssetCachePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 ::StringW HoudiniEngineUnity::HEU_AssetDatabase::GetUnityProjectPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetUnityProjectPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 ::StringW HoudiniEngineUnity::HEU_AssetDatabase::GetAssetRelativePath(::StringW inFullPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetAssetRelativePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, inFullPath);
}
 ::StringW HoudiniEngineUnity::HEU_AssetDatabase::GetPackagesRelativePath(::StringW inFullPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetPackagesRelativePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, inFullPath);
}
 ::StringW HoudiniEngineUnity::HEU_AssetDatabase::GetValidAssetPath(::StringW inPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetValidAssetPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, inPath);
}
 ::StringW HoudiniEngineUnity::HEU_AssetDatabase::GetAssetPath(UnityEngine::Object asset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetAssetPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, asset);
}
 ::StringW HoudiniEngineUnity::HEU_AssetDatabase::GetAssetPathWithSubAssetSupport(UnityEngine::Object asset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetAssetPathWithSubAssetSupport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, asset);
}
 void HoudiniEngineUnity::HEU_AssetDatabase::GetSubAssetPathFromPath(::StringW fullPath, ByRef<::StringW> mainPath, ByRef<::StringW> subPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetSubAssetPathFromPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fullPath, mainPath, subPath);
}
 ::StringW HoudiniEngineUnity::HEU_AssetDatabase::GetAssetRelativePathStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetAssetRelativePathStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 ::StringW HoudiniEngineUnity::HEU_AssetDatabase::GetPackagesRelativePathStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetPackagesRelativePathStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 ::StringW HoudiniEngineUnity::HEU_AssetDatabase::GetAssetFullPath(::StringW inPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetAssetFullPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, inPath);
}
 bool HoudiniEngineUnity::HEU_AssetDatabase::IsPathRelativeToAssets(::StringW inPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "IsPathRelativeToAssets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, inPath);
}
 bool HoudiniEngineUnity::HEU_AssetDatabase::IsPathRelativeToPackages(::StringW inPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "IsPathRelativeToPackages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, inPath);
}
 ::StringW HoudiniEngineUnity::HEU_AssetDatabase::GetAssetRootPath(UnityEngine::Object asset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetAssetRootPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, asset);
}
 ::StringW HoudiniEngineUnity::HEU_AssetDatabase::GetUniqueAssetPath(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetUniqueAssetPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path);
}
 ::StringW HoudiniEngineUnity::HEU_AssetDatabase::GetAssetOrScenePath(UnityEngine::Object inputObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetAssetOrScenePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, inputObject);
}
 bool HoudiniEngineUnity::HEU_AssetDatabase::IsPathInAssetCache(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "IsPathInAssetCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, path);
}
 bool HoudiniEngineUnity::HEU_AssetDatabase::IsPathInAssetCacheBakedFolder(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "IsPathInAssetCacheBakedFolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, path);
}
 bool HoudiniEngineUnity::HEU_AssetDatabase::IsPathInAssetCacheWorkingFolder(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "IsPathInAssetCacheWorkingFolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, path);
}
 bool HoudiniEngineUnity::HEU_AssetDatabase::IsAssetInAssetCacheBakedFolder(UnityEngine::Object asset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "IsAssetInAssetCacheBakedFolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, asset);
}
 bool HoudiniEngineUnity::HEU_AssetDatabase::IsAssetInAssetCacheWorkingFolder(UnityEngine::Object asset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "IsAssetInAssetCacheWorkingFolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, asset);
}
/// @param hash: int32_t (default: 0)
 ::StringW HoudiniEngineUnity::HEU_AssetDatabase::CreateAssetCacheFolder(::StringW suggestedAssetPath, int32_t hash)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "CreateAssetCacheFolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, suggestedAssetPath, hash);
}
 void HoudiniEngineUnity::HEU_AssetDatabase::DeleteAssetCacheFolder(::StringW assetCacheFolderPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "DeleteAssetCacheFolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, assetCacheFolderPath);
}
 void HoudiniEngineUnity::HEU_AssetDatabase::DeleteAsset(UnityEngine::Object asset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "DeleteAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asset);
}
 void HoudiniEngineUnity::HEU_AssetDatabase::DeleteAssetAtPath(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "DeleteAssetAtPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, path);
}
 void HoudiniEngineUnity::HEU_AssetDatabase::DeleteAssetIfInBakedFolder(UnityEngine::Object asset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "DeleteAssetIfInBakedFolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asset);
}
 bool HoudiniEngineUnity::HEU_AssetDatabase::ContainsAsset(UnityEngine::Object assetObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "ContainsAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, assetObject);
}
 bool HoudiniEngineUnity::HEU_AssetDatabase::CopyAsset(::StringW path, ::StringW newPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "CopyAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, path, newPath);
}
 UnityEngine::Object HoudiniEngineUnity::HEU_AssetDatabase::CopyAndLoadAssetWithRelativePath(UnityEngine::Object srcAsset, ::StringW copyAssetFolder, ::StringW relativePath, System::Type type, bool bOverwriteExisting)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "CopyAndLoadAssetWithRelativePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Object, false>(nullptr, ___internal_method, srcAsset, copyAssetFolder, relativePath, type, bOverwriteExisting);
}
 UnityEngine::Object HoudiniEngineUnity::HEU_AssetDatabase::CopyAndLoadAssetFromAssetCachePath(UnityEngine::Object srcAsset, ::StringW copyPath, System::Type type, bool bOverwriteExisting)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "CopyAndLoadAssetFromAssetCachePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Object, false>(nullptr, ___internal_method, srcAsset, copyPath, type, bOverwriteExisting);
}
 UnityEngine::Object HoudiniEngineUnity::HEU_AssetDatabase::CopyAndLoadAssetAtAnyPath(UnityEngine::Object srcAsset, ::StringW copyPath, System::Type type, bool bOverwriteExisting)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "CopyAndLoadAssetAtAnyPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Object, false>(nullptr, ___internal_method, srcAsset, copyPath, type, bOverwriteExisting);
}
 UnityEngine::Object HoudiniEngineUnity::HEU_AssetDatabase::CopyAndLoadAssetAtGivenPath(UnityEngine::Object srcAsset, ::StringW targetPath, System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "CopyAndLoadAssetAtGivenPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Object, false>(nullptr, ___internal_method, srcAsset, targetPath, type);
}
 UnityEngine::Object HoudiniEngineUnity::HEU_AssetDatabase::CopyUniqueAndLoadAssetAtAnyPath(UnityEngine::Object srcAsset, ::StringW copyPath, System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "CopyUniqueAndLoadAssetAtAnyPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Object, false>(nullptr, ___internal_method, srcAsset, copyPath, type);
}
 void HoudiniEngineUnity::HEU_AssetDatabase::CreateObjectInAssetCacheFolder(UnityEngine::Object objectToCreate, ::StringW assetCacheRoot, ::StringW relativeFolderPath, ::StringW assetFileName, System::Type type, bool bOverwriteExisting)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "CreateObjectInAssetCacheFolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, objectToCreate, assetCacheRoot, relativeFolderPath, assetFileName, type, bOverwriteExisting);
}
 void HoudiniEngineUnity::HEU_AssetDatabase::CreateAsset(UnityEngine::Object asset, ::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "CreateAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asset, path);
}
 void HoudiniEngineUnity::HEU_AssetDatabase::CreateAddObjectInAssetCacheFolder(::StringW assetName, ::StringW assetObjectFileName, UnityEngine::Object objectToAdd, ::StringW relativeFolderPath, ByRef<::StringW> exportRootPath, ByRef<UnityEngine::Object> assetDBObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "CreateAddObjectInAssetCacheFolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Object>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, assetName, assetObjectFileName, objectToAdd, relativeFolderPath, exportRootPath, assetDBObject);
}
 void HoudiniEngineUnity::HEU_AssetDatabase::AddObjectToAsset(UnityEngine::Object objectToAdd, UnityEngine::Object assetObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "AddObjectToAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, objectToAdd, assetObject);
}
 void HoudiniEngineUnity::HEU_AssetDatabase::SaveAndRefreshDatabase()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "SaveAndRefreshDatabase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void HoudiniEngineUnity::HEU_AssetDatabase::SaveAssetDatabase()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "SaveAssetDatabase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void HoudiniEngineUnity::HEU_AssetDatabase::RefreshAssetDatabase()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "RefreshAssetDatabase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 UnityEngine::Object HoudiniEngineUnity::HEU_AssetDatabase::LoadAssetAtPath(::StringW assetPath, System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "LoadAssetAtPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Object, false>(nullptr, ___internal_method, assetPath, type);
}
 UnityEngine::Object HoudiniEngineUnity::HEU_AssetDatabase::LoadSubAssetAtPath(::StringW mainPath, ::StringW subAssetPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "LoadSubAssetAtPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Object, false>(nullptr, ___internal_method, mainPath, subAssetPath);
}
 ::ArrayW<UnityEngine::Object> HoudiniEngineUnity::HEU_AssetDatabase::LoadAllAssetsAtPath(::StringW assetPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "LoadAllAssetsAtPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::Object>, false>(nullptr, ___internal_method, assetPath);
}
 ::ArrayW<UnityEngine::Object> HoudiniEngineUnity::HEU_AssetDatabase::LoadAllAssetRepresentationsAtPath(::StringW assetPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "LoadAllAssetRepresentationsAtPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::Object>, false>(nullptr, ___internal_method, assetPath);
}
 void HoudiniEngineUnity::HEU_AssetDatabase::ImportAsset(::StringW assetPath, HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions heuOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "ImportAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, assetPath, heuOptions);
}
 ::StringW HoudiniEngineUnity::HEU_AssetDatabase::GetAssetWorkingPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetAssetWorkingPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 ::StringW HoudiniEngineUnity::HEU_AssetDatabase::GetAssetBakedPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetAssetBakedPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 ::StringW HoudiniEngineUnity::HEU_AssetDatabase::GetAssetBakedPathWithAssetName(::StringW assetName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetAssetBakedPathWithAssetName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, assetName);
}
 ::StringW HoudiniEngineUnity::HEU_AssetDatabase::CreateUniqueBakePath(::StringW assetName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "CreateUniqueBakePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, assetName);
}
 void HoudiniEngineUnity::HEU_AssetDatabase::CreatePathWithFolders(::StringW inPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "CreatePathWithFolders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, inPath);
}
 ::StringW HoudiniEngineUnity::HEU_AssetDatabase::AppendMeshesPathToAssetFolder(::StringW inAssetCacheFolder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "AppendMeshesPathToAssetFolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, inAssetCacheFolder);
}
 ::StringW HoudiniEngineUnity::HEU_AssetDatabase::AppendTexturesPathToAssetFolder(::StringW inAssetCacheFolder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "AppendTexturesPathToAssetFolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, inAssetCacheFolder);
}
 ::StringW HoudiniEngineUnity::HEU_AssetDatabase::AppendMaterialsPathToAssetFolder(::StringW inAssetCacheFolder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "AppendMaterialsPathToAssetFolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, inAssetCacheFolder);
}
 ::StringW HoudiniEngineUnity::HEU_AssetDatabase::AppendTerrainPathToAssetFolder(::StringW inAssetCacheFolder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "AppendTerrainPathToAssetFolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, inAssetCacheFolder);
}
 ::ArrayW<::StringW> HoudiniEngineUnity::HEU_AssetDatabase::GetAssetSubFolders()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetAssetSubFolders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(nullptr, ___internal_method);
}
 ::StringW HoudiniEngineUnity::HEU_AssetDatabase::AppendPrefabPath(::StringW inAssetCacheFolder, ::StringW assetName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "AppendPrefabPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, inAssetCacheFolder, assetName);
}
 ::StringW HoudiniEngineUnity::HEU_AssetDatabase::AppendMeshesAssetFileName(::StringW assetName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "AppendMeshesAssetFileName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, assetName);
}
 bool HoudiniEngineUnity::HEU_AssetDatabase::IsSubAsset(UnityEngine::Object obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "IsSubAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, obj);
}
 ::ArrayW<::StringW> HoudiniEngineUnity::HEU_AssetDatabase::GetAssetPathsFromAssetBundle(::StringW assetBundleFileName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetAssetPathsFromAssetBundle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(nullptr, ___internal_method, assetBundleFileName);
}
 bool HoudiniEngineUnity::HEU_AssetDatabase::IsAssetSavedInScene(UnityEngine::GameObject go)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "IsAssetSavedInScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, go);
}
 void HoudiniEngineUnity::HEU_AssetDatabase::SelectAssetAtPath(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "SelectAssetAtPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, path);
}
 void HoudiniEngineUnity::HEU_AssetDatabase::PrintDependencies(UnityEngine::GameObject targetGO)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "PrintDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, targetGO);
}
 ::StringW HoudiniEngineUnity::HEU_AssetDatabase::GetUniqueAssetPathForUnityAsset(UnityEngine::Object obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                            "GetUniqueAssetPathForUnityAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, obj);
}
template<typename T>
 T HoudiniEngineUnity::HEU_AssetDatabase::LoadUnityAssetFromUniqueAssetPath(::StringW assetPath)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                        "LoadUnityAssetFromUniqueAssetPath",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, assetPath);
}
template<typename T>
 T HoudiniEngineUnity::HEU_AssetDatabase::GetBuiltinExtraResource(::StringW resourceName)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetDatabase>::get(),
                        "GetBuiltinExtraResource",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, resourceName);
}
