#pragma once
#include "RootMotion/FinalIK/zzzz__Constraint_impl.hpp"
#include "RootMotion/FinalIK/zzzz__ConstraintPositionOffset_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: RootMotion::FinalIK::ConstraintPositionOffset.UpdateConstraint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::ConstraintPositionOffset::*)()>(&RootMotion::FinalIK::ConstraintPositionOffset::UpdateConstraint)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x11c52f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::ConstraintPositionOffset),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::ConstraintPositionOffset>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::ConstraintPositionOffset._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::ConstraintPositionOffset::*)()>(&RootMotion::FinalIK::ConstraintPositionOffset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11c5454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::ConstraintPositionOffset>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::ConstraintPositionOffset._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::ConstraintPositionOffset::*)(UnityEngine::Transform)>(&RootMotion::FinalIK::ConstraintPositionOffset::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x11c545c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::ConstraintPositionOffset>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::ConstraintPositionOffset.get_positionChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::ConstraintPositionOffset::*)()>(&RootMotion::FinalIK::ConstraintPositionOffset::get_positionChanged)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x11c53f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::ConstraintPositionOffset>::get(),
                            "get_positionChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::ConstraintPositionOffset::__set_offset(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::ConstraintPositionOffset::__get_offset() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::ConstraintPositionOffset::__set_defaultLocalPosition(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::ConstraintPositionOffset::__get_defaultLocalPosition() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::ConstraintPositionOffset::__set_lastLocalPosition(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::ConstraintPositionOffset::__get_lastLocalPosition() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::ConstraintPositionOffset::__set_initiated(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool RootMotion::FinalIK::ConstraintPositionOffset::__get_initiated() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void RootMotion::FinalIK::ConstraintPositionOffset::UpdateConstraint()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::ConstraintPositionOffset>::get(),
                            "UpdateConstraint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 RootMotion::FinalIK::ConstraintPositionOffset::ConstraintPositionOffset()  : RootMotion::FinalIK::Constraint(THROW_UNLESS(::il2cpp_utils::New<ConstraintPositionOffset>())) {}
 void RootMotion::FinalIK::ConstraintPositionOffset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::ConstraintPositionOffset>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "transform", ty: "UnityEngine::Transform", modifiers: "", def_value: None }]
 RootMotion::FinalIK::ConstraintPositionOffset::ConstraintPositionOffset(UnityEngine::Transform transform)  : RootMotion::FinalIK::Constraint(THROW_UNLESS(::il2cpp_utils::New<ConstraintPositionOffset>(transform))) {}
 void RootMotion::FinalIK::ConstraintPositionOffset::_ctor(UnityEngine::Transform transform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::ConstraintPositionOffset>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, transform);
}
 bool RootMotion::FinalIK::ConstraintPositionOffset::get_positionChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::ConstraintPositionOffset>::get(),
                            "get_positionChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
