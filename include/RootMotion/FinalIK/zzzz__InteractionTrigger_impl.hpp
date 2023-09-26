#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "RootMotion/FinalIK/zzzz__InteractionTrigger_def.hpp"
#include "RootMotion/FinalIK/zzzz__InteractionObject_def.hpp"
#include "RootMotion/FinalIK/zzzz__FullBodyBipedEffector_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition.get_offset3D
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition::get_offset3D)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x120c550;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition>::get(),
                            "get_offset3D",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition.get_direction3D
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition::get_direction3D)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x120c55c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition>::get(),
                            "get_direction3D",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition.IsInRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition::*)(UnityEngine::Transform, UnityEngine::Transform, ByRef<float_t>)>(&RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition::IsInRange)> {
  constexpr static std::size_t size = 0x764;
  constexpr static std::size_t addrs = 0x120c61c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition>::get(),
                            "IsInRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x120cd80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition::__set_use(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition::__get_use() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition::__set_offset(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition::__get_offset() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition::__set_angleOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition::__get_angleOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition::__set_maxAngle(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition::__get_maxAngle() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition::__set_radius(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition::__get_radius() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition::__set_orbit(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition::__get_orbit() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition::__set_fixYAxis(bool value)  {
::cordl_internals::setInstanceField<bool, 0x29>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition::__get_fixYAxis() const {
return ::cordl_internals::getInstanceField<bool, 0x29>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition::get_offset3D()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition>::get(),
                            "get_offset3D",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition::get_direction3D()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition>::get(),
                            "get_direction3D",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
 bool RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition::IsInRange(UnityEngine::Transform character, UnityEngine::Transform trigger, ByRef<float_t> error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition>::get(),
                            "IsInRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, character, trigger, error);
}
// Ctor Parameters []
 RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition::RootMotion__FinalIK__InteractionTrigger__CharacterPosition()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<RootMotion__FinalIK__InteractionTrigger__CharacterPosition>())) {}
 void RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition.GetRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition::GetRotation)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x120cd94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition>::get(),
                            "GetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition.IsInRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition::*)(UnityEngine::Transform, UnityEngine::RaycastHit, UnityEngine::Transform, ByRef<float_t>)>(&RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition::IsInRange)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x120cf0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition>::get(),
                            "IsInRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RaycastHit>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x120d214;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition::__set_lookAtTarget(UnityEngine::Collider value)  {
::cordl_internals::setInstanceField<UnityEngine::Collider, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Collider>(value));
}
constexpr UnityEngine::Collider RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition::__get_lookAtTarget() const {
return ::cordl_internals::getInstanceField<UnityEngine::Collider, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition::__set_direction(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition::__get_direction() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition::__set_maxDistance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition::__get_maxDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition::__set_maxAngle(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition::__get_maxAngle() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition::__set_fixYAxis(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition::__get_fixYAxis() const {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition::GetRotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition>::get(),
                            "GetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Quaternion, false>(const_cast<void*>(instance), ___internal_method);
}
 bool RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition::IsInRange(UnityEngine::Transform raycastFrom, UnityEngine::RaycastHit hit, UnityEngine::Transform trigger, ByRef<float_t> error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition>::get(),
                            "IsInRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RaycastHit>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, raycastFrom, hit, trigger, error);
}
// Ctor Parameters []
 RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition::RootMotion__FinalIK__InteractionTrigger__CameraPosition()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<RootMotion__FinalIK__InteractionTrigger__CameraPosition>())) {}
 void RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::RootMotion__FinalIK__InteractionTrigger__Range__Interaction._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RootMotion__FinalIK__InteractionTrigger__Range__Interaction::*)()>(&GlobalNamespace::RootMotion__FinalIK__InteractionTrigger__Range__Interaction::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x120d298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RootMotion__FinalIK__InteractionTrigger__Range__Interaction>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::RootMotion__FinalIK__InteractionTrigger__Range__Interaction::__set_interactionObject(RootMotion::FinalIK::InteractionObject value)  {
::cordl_internals::setInstanceField<RootMotion::FinalIK::InteractionObject, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<RootMotion::FinalIK::InteractionObject>(value));
}
constexpr RootMotion::FinalIK::InteractionObject GlobalNamespace::RootMotion__FinalIK__InteractionTrigger__Range__Interaction::__get_interactionObject() const {
return ::cordl_internals::getInstanceField<RootMotion::FinalIK::InteractionObject, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::RootMotion__FinalIK__InteractionTrigger__Range__Interaction::__set_effectors(::ArrayW<RootMotion::FinalIK::FullBodyBipedEffector> value)  {
::cordl_internals::setInstanceField<::ArrayW<RootMotion::FinalIK::FullBodyBipedEffector>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<RootMotion::FinalIK::FullBodyBipedEffector>>(value));
}
constexpr ::ArrayW<RootMotion::FinalIK::FullBodyBipedEffector> GlobalNamespace::RootMotion__FinalIK__InteractionTrigger__Range__Interaction::__get_effectors() const {
return ::cordl_internals::getInstanceField<::ArrayW<RootMotion::FinalIK::FullBodyBipedEffector>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::RootMotion__FinalIK__InteractionTrigger__Range__Interaction::RootMotion__FinalIK__InteractionTrigger__Range__Interaction()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<RootMotion__FinalIK__InteractionTrigger__Range__Interaction>())) {}
 void GlobalNamespace::RootMotion__FinalIK__InteractionTrigger__Range__Interaction::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RootMotion__FinalIK__InteractionTrigger__Range__Interaction>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__Range.IsInRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__Range::*)(UnityEngine::Transform, UnityEngine::Transform, UnityEngine::RaycastHit, UnityEngine::Transform, ByRef<float_t>)>(&RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__Range::IsInRange)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x120c448;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__Range>::get(),
                            "IsInRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RaycastHit>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__Range._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__Range::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__Range::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x120d288;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__Range>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__Range::__set_name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__Range::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__Range::__set_show(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__Range::__get_show() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__Range::__set_characterPosition(RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition value)  {
::cordl_internals::setInstanceField<RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition>(value));
}
constexpr RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__Range::__get_characterPosition() const {
return ::cordl_internals::getInstanceField<RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__Range::__set_cameraPosition(RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition value)  {
::cordl_internals::setInstanceField<RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition>(value));
}
constexpr RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__Range::__get_cameraPosition() const {
return ::cordl_internals::getInstanceField<RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__Range::__set_interactions(::ArrayW<GlobalNamespace::RootMotion__FinalIK__InteractionTrigger__Range__Interaction> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::RootMotion__FinalIK__InteractionTrigger__Range__Interaction>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::RootMotion__FinalIK__InteractionTrigger__Range__Interaction>>(value));
}
constexpr ::ArrayW<GlobalNamespace::RootMotion__FinalIK__InteractionTrigger__Range__Interaction> RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__Range::__get_interactions() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::RootMotion__FinalIK__InteractionTrigger__Range__Interaction>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__Range::IsInRange(UnityEngine::Transform character, UnityEngine::Transform raycastFrom, UnityEngine::RaycastHit raycastHit, UnityEngine::Transform trigger, ByRef<float_t> maxError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__Range>::get(),
                            "IsInRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RaycastHit>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, character, raycastFrom, raycastHit, trigger, maxError);
}
// Ctor Parameters []
 RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__Range::RootMotion__FinalIK__InteractionTrigger__Range()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<RootMotion__FinalIK__InteractionTrigger__Range>())) {}
 void RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__Range::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__Range>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: RootMotion::FinalIK::InteractionTrigger.OpenUserManual
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionTrigger::*)()>(&RootMotion::FinalIK::InteractionTrigger::OpenUserManual)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x120c2f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::InteractionTrigger>::get(),
                            "OpenUserManual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::InteractionTrigger.OpenScriptReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionTrigger::*)()>(&RootMotion::FinalIK::InteractionTrigger::OpenScriptReference)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x120c334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::InteractionTrigger>::get(),
                            "OpenScriptReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::InteractionTrigger.OpenTutorial4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionTrigger::*)()>(&RootMotion::FinalIK::InteractionTrigger::OpenTutorial4)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x120c378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::InteractionTrigger>::get(),
                            "OpenTutorial4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::InteractionTrigger.SupportGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionTrigger::*)()>(&RootMotion::FinalIK::InteractionTrigger::SupportGroup)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x120c3bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::InteractionTrigger>::get(),
                            "SupportGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::InteractionTrigger.ASThread
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionTrigger::*)()>(&RootMotion::FinalIK::InteractionTrigger::ASThread)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x120c400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::InteractionTrigger>::get(),
                            "ASThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::InteractionTrigger.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionTrigger::*)()>(&RootMotion::FinalIK::InteractionTrigger::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x120c444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::InteractionTrigger>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::InteractionTrigger.GetBestRangeIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (RootMotion::FinalIK::InteractionTrigger::*)(UnityEngine::Transform, UnityEngine::Transform, UnityEngine::RaycastHit)>(&RootMotion::FinalIK::InteractionTrigger::GetBestRangeIndex)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x120ad88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::InteractionTrigger>::get(),
                            "GetBestRangeIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RaycastHit>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::InteractionTrigger._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionTrigger::*)()>(&RootMotion::FinalIK::InteractionTrigger::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x120c4f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::InteractionTrigger>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::InteractionTrigger::__set_ranges(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__Range> value)  {
::cordl_internals::setInstanceField<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__Range>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__Range>>(value));
}
constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__Range> RootMotion::FinalIK::InteractionTrigger::__get_ranges() const {
return ::cordl_internals::getInstanceField<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__Range>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void RootMotion::FinalIK::InteractionTrigger::OpenUserManual()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::InteractionTrigger>::get(),
                            "OpenUserManual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::InteractionTrigger::OpenScriptReference()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::InteractionTrigger>::get(),
                            "OpenScriptReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::InteractionTrigger::OpenTutorial4()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::InteractionTrigger>::get(),
                            "OpenTutorial4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::InteractionTrigger::SupportGroup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::InteractionTrigger>::get(),
                            "SupportGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::InteractionTrigger::ASThread()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::InteractionTrigger>::get(),
                            "ASThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::InteractionTrigger::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::InteractionTrigger>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t RootMotion::FinalIK::InteractionTrigger::GetBestRangeIndex(UnityEngine::Transform character, UnityEngine::Transform raycastFrom, UnityEngine::RaycastHit raycastHit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::InteractionTrigger>::get(),
                            "GetBestRangeIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RaycastHit>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, character, raycastFrom, raycastHit);
}
// Ctor Parameters []
 RootMotion::FinalIK::InteractionTrigger::InteractionTrigger()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<InteractionTrigger>())) {}
 void RootMotion::FinalIK::InteractionTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::InteractionTrigger>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
