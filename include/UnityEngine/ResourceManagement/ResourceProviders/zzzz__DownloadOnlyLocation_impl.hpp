#pragma once
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__LocationWrapper_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__DownloadOnlyLocation_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::DownloadOnlyLocation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::DownloadOnlyLocation::*)(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation)>(&UnityEngine::ResourceManagement::ResourceProviders::DownloadOnlyLocation::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a6e058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::DownloadOnlyLocation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "location", ty: "UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation", modifiers: "", def_value: None }]
 UnityEngine::ResourceManagement::ResourceProviders::DownloadOnlyLocation::DownloadOnlyLocation(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location)  : UnityEngine::ResourceManagement::ResourceLocations::LocationWrapper(THROW_UNLESS(::il2cpp_utils::New<DownloadOnlyLocation>(location))) {}
 void UnityEngine::ResourceManagement::ResourceProviders::DownloadOnlyLocation::_ctor(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::DownloadOnlyLocation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, location);
}
