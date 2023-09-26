#pragma once
#include "GlobalNamespace/zzzz__FileUtility_def.hpp"
//  Writing Method size for method: GlobalNamespace::FileUtility.GetPlatformPersistentDataPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&GlobalNamespace::FileUtility::GetPlatformPersistentDataPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c9a30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FileUtility>::get(),
                            "GetPlatformPersistentDataPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::StringW GlobalNamespace::FileUtility::GetPlatformPersistentDataPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FileUtility>::get(),
                            "GetPlatformPersistentDataPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
