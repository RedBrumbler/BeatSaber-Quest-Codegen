#pragma once
#include "HoudiniEngineUnity/zzzz__Test_Mesh_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivableWrapperClass_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::Test_Mesh._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::Test_Mesh::*)(UnityEngine::Mesh)>(&HoudiniEngineUnity::Test_Mesh::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x20aa44c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_Mesh>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Mesh>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::Test_Mesh.IsNull
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::Test_Mesh::*)()>(&HoudiniEngineUnity::Test_Mesh::IsNull)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x20aa474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_Mesh>::get(),
                            "IsNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::Test_Mesh.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::Test_Mesh::*)(HoudiniEngineUnity::Test_Mesh)>(&HoudiniEngineUnity::Test_Mesh::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x20aa4d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_Mesh>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::Test_Mesh>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to HoudiniEngineUnity::IEquivableWrapperClass_1<HoudiniEngineUnity::Test_Mesh>
constexpr  HoudiniEngineUnity::Test_Mesh::operator HoudiniEngineUnity::IEquivableWrapperClass_1<HoudiniEngineUnity::Test_Mesh>() const noexcept {
return HoudiniEngineUnity::IEquivableWrapperClass_1<HoudiniEngineUnity::Test_Mesh>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_Mesh>
constexpr  HoudiniEngineUnity::Test_Mesh::operator HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_Mesh>() const noexcept {
return HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_Mesh>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::Test_Mesh::__set_self(UnityEngine::Mesh value)  {
::cordl_internals::setInstanceField<UnityEngine::Mesh, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Mesh>(value));
}
constexpr UnityEngine::Mesh HoudiniEngineUnity::Test_Mesh::__get_self() const {
return ::cordl_internals::getInstanceField<UnityEngine::Mesh, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "self", ty: "UnityEngine::Mesh", modifiers: "", def_value: None }]
 HoudiniEngineUnity::Test_Mesh::Test_Mesh(UnityEngine::Mesh self)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Test_Mesh>(self))) {}
 void HoudiniEngineUnity::Test_Mesh::_ctor(UnityEngine::Mesh self)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_Mesh>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Mesh>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, self);
}
 bool HoudiniEngineUnity::Test_Mesh::IsNull()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_Mesh>::get(),
                            "IsNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool HoudiniEngineUnity::Test_Mesh::IsEquivalentTo(HoudiniEngineUnity::Test_Mesh other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_Mesh>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::Test_Mesh>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
