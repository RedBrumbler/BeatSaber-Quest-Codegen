#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputNode_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputInterfaceTilemapSettings_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputNodeUICache_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputPreset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputObjectInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputHDAInfo_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputNodeType::HoudiniEngineUnity__HEU_InputNode__InputNodeType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputNodeType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputNodeType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputNodeType  HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputNodeType::CONNECTION{0};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputNodeType  HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputNodeType::NODE{1};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputNodeType  HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputNodeType::PARAMETER{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType::HoudiniEngineUnity__HEU_InputNode__InputObjectType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType  HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType::HDA{0};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType  HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType::UNITY_MESH{1};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType  HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType::CURVE{2};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType  HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType::TERRAIN{3};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType  HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType::BOUNDING_BOX{4};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType  HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType::TILEMAP{5};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InternalObjectType::HoudiniEngineUnity__HEU_InputNode__InternalObjectType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InternalObjectType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InternalObjectType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InternalObjectType  HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InternalObjectType::UNKNOWN{0};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InternalObjectType  HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InternalObjectType::HDA{1};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InternalObjectType  HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InternalObjectType::UNITY_MESH{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputActions::HoudiniEngineUnity__HEU_InputNode__InputActions(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputActions::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputActions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputActions  HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputActions::ACTION{0};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputActions  HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputActions::DELETE{1};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputActions  HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputActions::INSERT{2};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.get_InputType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputNodeType (HoudiniEngineUnity::HEU_InputNode::*)()>(&HoudiniEngineUnity::HEU_InputNode::get_InputType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x203268c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "get_InputType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.get_ThisInputObjectType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType (HoudiniEngineUnity::HEU_InputNode::*)()>(&HoudiniEngineUnity::HEU_InputNode::get_ThisInputObjectType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2032694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "get_ThisInputObjectType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.get_PendingInputObjectType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType (HoudiniEngineUnity::HEU_InputNode::*)()>(&HoudiniEngineUnity::HEU_InputNode::get_PendingInputObjectType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x203269c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "get_PendingInputObjectType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.set_PendingInputObjectType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputNode::*)(HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType)>(&HoudiniEngineUnity::HEU_InputNode::set_PendingInputObjectType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20326a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "set_PendingInputObjectType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.get_InputObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputObjectInfo> (HoudiniEngineUnity::HEU_InputNode::*)()>(&HoudiniEngineUnity::HEU_InputNode::get_InputObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20326ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "get_InputObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.get_InputNodeID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (HoudiniEngineUnity::HEU_InputNode::*)()>(&HoudiniEngineUnity::HEU_InputNode::get_InputNodeID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20326b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "get_InputNodeID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.get_RequiresCook
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_InputNode::*)()>(&HoudiniEngineUnity::HEU_InputNode::get_RequiresCook)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20326bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "get_RequiresCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.set_RequiresCook
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputNode::*)(bool)>(&HoudiniEngineUnity::HEU_InputNode::set_RequiresCook)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x20326c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "set_RequiresCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.get_RequiresUpload
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_InputNode::*)()>(&HoudiniEngineUnity::HEU_InputNode::get_RequiresUpload)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20326d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "get_RequiresUpload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.set_RequiresUpload
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputNode::*)(bool)>(&HoudiniEngineUnity::HEU_InputNode::set_RequiresUpload)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x20326d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "set_RequiresUpload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.get_InputName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (HoudiniEngineUnity::HEU_InputNode::*)()>(&HoudiniEngineUnity::HEU_InputNode::get_InputName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20326e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "get_InputName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.get_LabelName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (HoudiniEngineUnity::HEU_InputNode::*)()>(&HoudiniEngineUnity::HEU_InputNode::get_LabelName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20326ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "get_LabelName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.get_ParamName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (HoudiniEngineUnity::HEU_InputNode::*)()>(&HoudiniEngineUnity::HEU_InputNode::get_ParamName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20326f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "get_ParamName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.set_ParamName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputNode::*)(::StringW)>(&HoudiniEngineUnity::HEU_InputNode::set_ParamName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20326fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "set_ParamName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.get_KeepWorldTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_InputNode::*)()>(&HoudiniEngineUnity::HEU_InputNode::get_KeepWorldTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2032704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "get_KeepWorldTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.set_KeepWorldTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputNode::*)(bool)>(&HoudiniEngineUnity::HEU_InputNode::set_KeepWorldTransform)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x203270c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "set_KeepWorldTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.get_PackGeometryBeforeMerging
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_InputNode::*)()>(&HoudiniEngineUnity::HEU_InputNode::get_PackGeometryBeforeMerging)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2032718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "get_PackGeometryBeforeMerging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.set_PackGeometryBeforeMerging
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputNode::*)(bool)>(&HoudiniEngineUnity::HEU_InputNode::set_PackGeometryBeforeMerging)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2032720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "set_PackGeometryBeforeMerging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.get_ParentAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_HoudiniAsset (HoudiniEngineUnity::HEU_InputNode::*)()>(&HoudiniEngineUnity::HEU_InputNode::get_ParentAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x203272c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "get_ParentAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.IsAssetInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_InputNode::*)()>(&HoudiniEngineUnity::HEU_InputNode::IsAssetInput)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2032734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "IsAssetInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.get_TilemapSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings (HoudiniEngineUnity::HEU_InputNode::*)()>(&HoudiniEngineUnity::HEU_InputNode::get_TilemapSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2032744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "get_TilemapSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.CreateSetupInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_InputNode (*)(int32_t, int32_t, ::StringW, ::StringW, HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputNodeType, HoudiniEngineUnity::HEU_HoudiniAsset)>(&HoudiniEngineUnity::HEU_InputNode::CreateSetupInput)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x203274c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "CreateSetupInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputNodeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_HoudiniAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.SetInputNodeID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputNode::*)(int32_t)>(&HoudiniEngineUnity::HEU_InputNode::SetInputNodeID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20327dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "SetInputNodeID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.DestroyAllData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputNode::*)(HoudiniEngineUnity::HEU_SessionBase)>(&HoudiniEngineUnity::HEU_InputNode::DestroyAllData)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x20327e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "DestroyAllData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.ResetInputObjectTransforms
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputNode::*)()>(&HoudiniEngineUnity::HEU_InputNode::ResetInputObjectTransforms)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2032ae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "ResetInputObjectTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.ResetInputNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputNode::*)(HoudiniEngineUnity::HEU_SessionBase)>(&HoudiniEngineUnity::HEU_InputNode::ResetInputNode)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2032bcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "ResetInputNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.InsertInputEntry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputNode::*)(int32_t, UnityEngine::GameObject)>(&HoudiniEngineUnity::HEU_InputNode::InsertInputEntry)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x2032c98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "InsertInputEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.GetInputEntryGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (HoudiniEngineUnity::HEU_InputNode::*)(int32_t)>(&HoudiniEngineUnity::HEU_InputNode::GetInputEntryGameObject)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x2032fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "GetInputEntryGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.AddInputEntryAtEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputNode::*)(UnityEngine::GameObject)>(&HoudiniEngineUnity::HEU_InputNode::AddInputEntryAtEnd)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2033224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "AddInputEntryAtEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.AddInputEntryAtEndMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_InputObjectInfo (HoudiniEngineUnity::HEU_InputNode::*)(UnityEngine::GameObject)>(&HoudiniEngineUnity::HEU_InputNode::AddInputEntryAtEndMesh)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2033420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "AddInputEntryAtEndMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.RemoveAllInputEntries
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputNode::*)()>(&HoudiniEngineUnity::HEU_InputNode::RemoveAllInputEntries)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2032a38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "RemoveAllInputEntries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.NumInputEntries
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (HoudiniEngineUnity::HEU_InputNode::*)()>(&HoudiniEngineUnity::HEU_InputNode::NumInputEntries)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x203344c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "NumInputEntries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.ChangeInputType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputNode::*)(HoudiniEngineUnity::HEU_SessionBase, HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType)>(&HoudiniEngineUnity::HEU_InputNode::ChangeInputType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2032c68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "ChangeInputType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.ResetConnectionForForceUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputNode::*)(HoudiniEngineUnity::HEU_SessionBase)>(&HoudiniEngineUnity::HEU_InputNode::ResetConnectionForForceUpdate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2032c18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "ResetConnectionForForceUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.UploadInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputNode::*)(HoudiniEngineUnity::HEU_SessionBase)>(&HoudiniEngineUnity::HEU_InputNode::UploadInput)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x2033a50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "UploadInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.UploadHDAInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputNode::*)(HoudiniEngineUnity::HEU_SessionBase)>(&HoudiniEngineUnity::HEU_InputNode::UploadHDAInput)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2033e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "UploadHDAInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.UploadUnityInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputNode::*)(HoudiniEngineUnity::HEU_SessionBase)>(&HoudiniEngineUnity::HEU_InputNode::UploadUnityInput)> {
  constexpr static std::size_t size = 0x59c;
  constexpr static std::size_t addrs = 0x203400c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "UploadUnityInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.AreAnyInputHDAsConnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_InputNode::*)()>(&HoudiniEngineUnity::HEU_InputNode::AreAnyInputHDAsConnected)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x20334d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "AreAnyInputHDAsConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.ReconnectToUpstreamAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputNode::*)()>(&HoudiniEngineUnity::HEU_InputNode::ReconnectToUpstreamAsset)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x2034aac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "ReconnectToUpstreamAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.CreateInputObjectInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_InputObjectInfo (HoudiniEngineUnity::HEU_InputNode::*)(UnityEngine::GameObject)>(&HoudiniEngineUnity::HEU_InputNode::CreateInputObjectInfo)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2032f10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "CreateInputObjectInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.CreateInputHDAInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_InputHDAInfo (HoudiniEngineUnity::HEU_InputNode::*)(UnityEngine::GameObject)>(&HoudiniEngineUnity::HEU_InputNode::CreateInputHDAInfo)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2032f78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "CreateInputHDAInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.InternalAddInputObjectAtEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_InputObjectInfo (HoudiniEngineUnity::HEU_InputNode::*)(UnityEngine::GameObject)>(&HoudiniEngineUnity::HEU_InputNode::InternalAddInputObjectAtEnd)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x20332b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "InternalAddInputObjectAtEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.InternalAddInputHDAAtEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_InputHDAInfo (HoudiniEngineUnity::HEU_InputNode::*)(UnityEngine::GameObject)>(&HoudiniEngineUnity::HEU_InputNode::InternalAddInputHDAAtEnd)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2033368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "InternalAddInputHDAAtEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.DisconnectConnectedMergeNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputNode::*)(HoudiniEngineUnity::HEU_SessionBase)>(&HoudiniEngineUnity::HEU_InputNode::DisconnectConnectedMergeNode)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x2033684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "DisconnectConnectedMergeNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.ClearConnectedInputHDAs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputNode::*)()>(&HoudiniEngineUnity::HEU_InputNode::ClearConnectedInputHDAs)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2033898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "ClearConnectedInputHDAs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.ConnectToMergeObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputNode::*)(HoudiniEngineUnity::HEU_SessionBase)>(&HoudiniEngineUnity::HEU_InputNode::ConnectToMergeObject)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x20345a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "ConnectToMergeObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.DisconnectAndDestroyInputs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputNode::*)(HoudiniEngineUnity::HEU_SessionBase)>(&HoudiniEngineUnity::HEU_InputNode::DisconnectAndDestroyInputs)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x2032808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "DisconnectAndDestroyInputs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.GetConnectedInputCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (HoudiniEngineUnity::HEU_InputNode::*)()>(&HoudiniEngineUnity::HEU_InputNode::GetConnectedInputCount)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2034e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "GetConnectedInputCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.GetConnectedNodeID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (HoudiniEngineUnity::HEU_InputNode::*)(int32_t)>(&HoudiniEngineUnity::HEU_InputNode::GetConnectedNodeID)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2034ea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "GetConnectedNodeID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.UploadObjectMergeTransformType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_InputNode::*)(HoudiniEngineUnity::HEU_SessionBase)>(&HoudiniEngineUnity::HEU_InputNode::UploadObjectMergeTransformType)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2034728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "UploadObjectMergeTransformType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.UploadObjectMergePackGeometry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_InputNode::*)(HoudiniEngineUnity::HEU_SessionBase)>(&HoudiniEngineUnity::HEU_InputNode::UploadObjectMergePackGeometry)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x203483c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "UploadObjectMergePackGeometry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.HasInputNodeTransformChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_InputNode::*)()>(&HoudiniEngineUnity::HEU_InputNode::HasInputNodeTransformChanged)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x2034f78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "HasInputNodeTransformChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.UploadInputObjectTransforms
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputNode::*)(HoudiniEngineUnity::HEU_SessionBase)>(&HoudiniEngineUnity::HEU_InputNode::UploadInputObjectTransforms)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x20351d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "UploadInputObjectTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.UpdateOnAssetRecreation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputNode::*)(HoudiniEngineUnity::HEU_SessionBase)>(&HoudiniEngineUnity::HEU_InputNode::UpdateOnAssetRecreation)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x203535c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "UpdateOnAssetRecreation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.CopyInputValuesTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputNode::*)(HoudiniEngineUnity::HEU_SessionBase, HoudiniEngineUnity::HEU_InputNode)>(&HoudiniEngineUnity::HEU_InputNode::CopyInputValuesTo)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x20354c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "CopyInputValuesTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_InputNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.PopulateInputPreset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputNode::*)(HoudiniEngineUnity::HEU_InputPreset)>(&HoudiniEngineUnity::HEU_InputNode::PopulateInputPreset)> {
  constexpr static std::size_t size = 0x58c;
  constexpr static std::size_t addrs = 0x2035930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "PopulateInputPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_InputPreset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.LoadPreset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputNode::*)(HoudiniEngineUnity::HEU_SessionBase, HoudiniEngineUnity::HEU_InputPreset)>(&HoudiniEngineUnity::HEU_InputNode::LoadPreset)> {
  constexpr static std::size_t size = 0x524;
  constexpr static std::size_t addrs = 0x2035ebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "LoadPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_InputPreset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.FindAddToInputHDA
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_InputNode::*)(::StringW)>(&HoudiniEngineUnity::HEU_InputNode::FindAddToInputHDA)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x20363e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "FindAddToInputHDA",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.NotifyParentRemovedInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputNode::*)()>(&HoudiniEngineUnity::HEU_InputNode::NotifyParentRemovedInput)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2036538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "NotifyParentRemovedInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.ClearUICache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputNode::*)()>(&HoudiniEngineUnity::HEU_InputNode::ClearUICache)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2032800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "ClearUICache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.HandleSelectedObjectsForInputObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputNode::*)(::ArrayW<UnityEngine::GameObject>)>(&HoudiniEngineUnity::HEU_InputNode::HandleSelectedObjectsForInputObjects)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x20365c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "HandleSelectedObjectsForInputObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::GameObject>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.HandleSelectedObjectsForInputHDAs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputNode::*)(::ArrayW<UnityEngine::GameObject>)>(&HoudiniEngineUnity::HEU_InputNode::HandleSelectedObjectsForInputHDAs)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x20366dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "HandleSelectedObjectsForInputHDAs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::GameObject>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_InputNode::*)(HoudiniEngineUnity::HEU_InputNode)>(&HoudiniEngineUnity::HEU_InputNode::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x20367f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_InputNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode.GetInternalObjectType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InternalObjectType (*)(HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType)>(&HoudiniEngineUnity::HEU_InputNode::GetInternalObjectType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2032ef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "GetInternalObjectType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputNode._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputNode::*)()>(&HoudiniEngineUnity::HEU_InputNode::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2036c0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_InputNode>
constexpr  HoudiniEngineUnity::HEU_InputNode::operator HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_InputNode>() const noexcept {
return HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_InputNode>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__inputNodeType(HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputNodeType value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputNodeType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputNodeType>(value));
}
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputNodeType HoudiniEngineUnity::HEU_InputNode::__get__inputNodeType() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputNodeType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__inputObjectType(HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType>(value));
}
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType HoudiniEngineUnity::HEU_InputNode::__get__inputObjectType() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__pendingInputObjectType(HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType>(value));
}
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType HoudiniEngineUnity::HEU_InputNode::__get__pendingInputObjectType() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__inputObjects(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputObjectInfo> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputObjectInfo>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputObjectInfo>>(value));
}
constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputObjectInfo> HoudiniEngineUnity::HEU_InputNode::__get__inputObjects() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputObjectInfo>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__inputObjectsConnectedAssetIDs(System::Collections::Generic::List_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<int32_t>>(value));
}
constexpr System::Collections::Generic::List_1<int32_t> HoudiniEngineUnity::HEU_InputNode::__get__inputObjectsConnectedAssetIDs() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__inputAsset(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject HoudiniEngineUnity::HEU_InputNode::__get__inputAsset() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__connectedInputAsset(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject HoudiniEngineUnity::HEU_InputNode::__get__connectedInputAsset() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__inputAssetInfos(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputHDAInfo> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputHDAInfo>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputHDAInfo>>(value));
}
constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputHDAInfo> HoudiniEngineUnity::HEU_InputNode::__get__inputAssetInfos() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputHDAInfo>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__nodeID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HEU_InputNode::__get__nodeID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__inputIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HEU_InputNode::__get__inputIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__requiresCook(bool value)  {
::cordl_internals::setInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_InputNode::__get__requiresCook() const {
return ::cordl_internals::getInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__requiresUpload(bool value)  {
::cordl_internals::setInstanceField<bool, 0x59>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_InputNode::__get__requiresUpload() const {
return ::cordl_internals::getInstanceField<bool, 0x59>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__inputName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HoudiniEngineUnity::HEU_InputNode::__get__inputName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__labelName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HoudiniEngineUnity::HEU_InputNode::__get__labelName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__paramName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HoudiniEngineUnity::HEU_InputNode::__get__paramName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__connectedNodeID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HEU_InputNode::__get__connectedNodeID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__keepWorldTransform(bool value)  {
::cordl_internals::setInstanceField<bool, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_InputNode::__get__keepWorldTransform() const {
return ::cordl_internals::getInstanceField<bool, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__packGeometryBeforeMerging(bool value)  {
::cordl_internals::setInstanceField<bool, 0x7d>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_InputNode::__get__packGeometryBeforeMerging() const {
return ::cordl_internals::getInstanceField<bool, 0x7d>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__parentAsset(HoudiniEngineUnity::HEU_HoudiniAsset value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HEU_HoudiniAsset, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HEU_HoudiniAsset>(value));
}
constexpr HoudiniEngineUnity::HEU_HoudiniAsset HoudiniEngineUnity::HEU_InputNode::__get__parentAsset() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HEU_HoudiniAsset, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__tilemapSettings(HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings>(value));
}
constexpr HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings HoudiniEngineUnity::HEU_InputNode::__get__tilemapSettings() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__uiCache(HoudiniEngineUnity::HEU_InputNodeUICache value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HEU_InputNodeUICache, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HEU_InputNodeUICache>(value));
}
constexpr HoudiniEngineUnity::HEU_InputNodeUICache HoudiniEngineUnity::HEU_InputNode::__get__uiCache() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HEU_InputNodeUICache, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputNodeType HoudiniEngineUnity::HEU_InputNode::get_InputType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "get_InputType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputNodeType, false>(const_cast<void*>(instance), ___internal_method);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType HoudiniEngineUnity::HEU_InputNode::get_ThisInputObjectType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "get_ThisInputObjectType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType, false>(const_cast<void*>(instance), ___internal_method);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType HoudiniEngineUnity::HEU_InputNode::get_PendingInputObjectType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "get_PendingInputObjectType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_InputNode::set_PendingInputObjectType(HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "set_PendingInputObjectType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputObjectInfo> HoudiniEngineUnity::HEU_InputNode::get_InputObjects()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "get_InputObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputObjectInfo>, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t HoudiniEngineUnity::HEU_InputNode::get_InputNodeID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "get_InputNodeID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool HoudiniEngineUnity::HEU_InputNode::get_RequiresCook()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "get_RequiresCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_InputNode::set_RequiresCook(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "set_RequiresCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool HoudiniEngineUnity::HEU_InputNode::get_RequiresUpload()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "get_RequiresUpload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_InputNode::set_RequiresUpload(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "set_RequiresUpload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW HoudiniEngineUnity::HEU_InputNode::get_InputName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "get_InputName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW HoudiniEngineUnity::HEU_InputNode::get_LabelName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "get_LabelName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW HoudiniEngineUnity::HEU_InputNode::get_ParamName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "get_ParamName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_InputNode::set_ParamName(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "set_ParamName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool HoudiniEngineUnity::HEU_InputNode::get_KeepWorldTransform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "get_KeepWorldTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_InputNode::set_KeepWorldTransform(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "set_KeepWorldTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool HoudiniEngineUnity::HEU_InputNode::get_PackGeometryBeforeMerging()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "get_PackGeometryBeforeMerging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_InputNode::set_PackGeometryBeforeMerging(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "set_PackGeometryBeforeMerging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 HoudiniEngineUnity::HEU_HoudiniAsset HoudiniEngineUnity::HEU_InputNode::get_ParentAsset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "get_ParentAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HEU_HoudiniAsset, false>(const_cast<void*>(instance), ___internal_method);
}
 bool HoudiniEngineUnity::HEU_InputNode::IsAssetInput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "IsAssetInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings HoudiniEngineUnity::HEU_InputNode::get_TilemapSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "get_TilemapSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings, false>(const_cast<void*>(instance), ___internal_method);
}
 HoudiniEngineUnity::HEU_InputNode HoudiniEngineUnity::HEU_InputNode::CreateSetupInput(int32_t nodeID, int32_t inputIndex, ::StringW inputName, ::StringW labelName, HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputNodeType inputNodeType, HoudiniEngineUnity::HEU_HoudiniAsset parentAsset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "CreateSetupInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputNodeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_HoudiniAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HEU_InputNode, false>(nullptr, ___internal_method, nodeID, inputIndex, inputName, labelName, inputNodeType, parentAsset);
}
 void HoudiniEngineUnity::HEU_InputNode::SetInputNodeID(int32_t nodeID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "SetInputNodeID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, nodeID);
}
 void HoudiniEngineUnity::HEU_InputNode::DestroyAllData(HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "DestroyAllData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 void HoudiniEngineUnity::HEU_InputNode::ResetInputObjectTransforms()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "ResetInputObjectTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_InputNode::ResetInputNode(HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "ResetInputNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 void HoudiniEngineUnity::HEU_InputNode::InsertInputEntry(int32_t index, UnityEngine::GameObject newInputGameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "InsertInputEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, index, newInputGameObject);
}
 UnityEngine::GameObject HoudiniEngineUnity::HEU_InputNode::GetInputEntryGameObject(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "GetInputEntryGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(const_cast<void*>(instance), ___internal_method, index);
}
 void HoudiniEngineUnity::HEU_InputNode::AddInputEntryAtEnd(UnityEngine::GameObject newEntryGameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "AddInputEntryAtEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newEntryGameObject);
}
 HoudiniEngineUnity::HEU_InputObjectInfo HoudiniEngineUnity::HEU_InputNode::AddInputEntryAtEndMesh(UnityEngine::GameObject newEntryGameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "AddInputEntryAtEndMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HEU_InputObjectInfo, false>(const_cast<void*>(instance), ___internal_method, newEntryGameObject);
}
 void HoudiniEngineUnity::HEU_InputNode::RemoveAllInputEntries()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "RemoveAllInputEntries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t HoudiniEngineUnity::HEU_InputNode::NumInputEntries()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "NumInputEntries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_InputNode::ChangeInputType(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType newType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "ChangeInputType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, newType);
}
 void HoudiniEngineUnity::HEU_InputNode::ResetConnectionForForceUpdate(HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "ResetConnectionForForceUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 void HoudiniEngineUnity::HEU_InputNode::UploadInput(HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "UploadInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 void HoudiniEngineUnity::HEU_InputNode::UploadHDAInput(HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "UploadHDAInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 void HoudiniEngineUnity::HEU_InputNode::UploadUnityInput(HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "UploadUnityInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 bool HoudiniEngineUnity::HEU_InputNode::AreAnyInputHDAsConnected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "AreAnyInputHDAsConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_InputNode::ReconnectToUpstreamAsset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "ReconnectToUpstreamAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 HoudiniEngineUnity::HEU_InputObjectInfo HoudiniEngineUnity::HEU_InputNode::CreateInputObjectInfo(UnityEngine::GameObject inputGameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "CreateInputObjectInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HEU_InputObjectInfo, false>(const_cast<void*>(instance), ___internal_method, inputGameObject);
}
 HoudiniEngineUnity::HEU_InputHDAInfo HoudiniEngineUnity::HEU_InputNode::CreateInputHDAInfo(UnityEngine::GameObject inputGameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "CreateInputHDAInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HEU_InputHDAInfo, false>(const_cast<void*>(instance), ___internal_method, inputGameObject);
}
 HoudiniEngineUnity::HEU_InputObjectInfo HoudiniEngineUnity::HEU_InputNode::InternalAddInputObjectAtEnd(UnityEngine::GameObject newInputGameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "InternalAddInputObjectAtEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HEU_InputObjectInfo, false>(const_cast<void*>(instance), ___internal_method, newInputGameObject);
}
 HoudiniEngineUnity::HEU_InputHDAInfo HoudiniEngineUnity::HEU_InputNode::InternalAddInputHDAAtEnd(UnityEngine::GameObject newInputHDA)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "InternalAddInputHDAAtEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HEU_InputHDAInfo, false>(const_cast<void*>(instance), ___internal_method, newInputHDA);
}
 void HoudiniEngineUnity::HEU_InputNode::DisconnectConnectedMergeNode(HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "DisconnectConnectedMergeNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 void HoudiniEngineUnity::HEU_InputNode::ClearConnectedInputHDAs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "ClearConnectedInputHDAs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_InputNode::ConnectToMergeObject(HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "ConnectToMergeObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 void HoudiniEngineUnity::HEU_InputNode::DisconnectAndDestroyInputs(HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "DisconnectAndDestroyInputs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 int32_t HoudiniEngineUnity::HEU_InputNode::GetConnectedInputCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "GetConnectedInputCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t HoudiniEngineUnity::HEU_InputNode::GetConnectedNodeID(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "GetConnectedNodeID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, index);
}
 bool HoudiniEngineUnity::HEU_InputNode::UploadObjectMergeTransformType(HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "UploadObjectMergeTransformType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, session);
}
 bool HoudiniEngineUnity::HEU_InputNode::UploadObjectMergePackGeometry(HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "UploadObjectMergePackGeometry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, session);
}
 bool HoudiniEngineUnity::HEU_InputNode::HasInputNodeTransformChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "HasInputNodeTransformChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_InputNode::UploadInputObjectTransforms(HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "UploadInputObjectTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 void HoudiniEngineUnity::HEU_InputNode::UpdateOnAssetRecreation(HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "UpdateOnAssetRecreation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 void HoudiniEngineUnity::HEU_InputNode::CopyInputValuesTo(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_InputNode destInputNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "CopyInputValuesTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_InputNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, destInputNode);
}
 void HoudiniEngineUnity::HEU_InputNode::PopulateInputPreset(HoudiniEngineUnity::HEU_InputPreset inputPreset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "PopulateInputPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_InputPreset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inputPreset);
}
 void HoudiniEngineUnity::HEU_InputNode::LoadPreset(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_InputPreset inputPreset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "LoadPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_InputPreset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, inputPreset);
}
 bool HoudiniEngineUnity::HEU_InputNode::FindAddToInputHDA(::StringW gameObjectName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "FindAddToInputHDA",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, gameObjectName);
}
 void HoudiniEngineUnity::HEU_InputNode::NotifyParentRemovedInput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "NotifyParentRemovedInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_InputNode::ClearUICache()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "ClearUICache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_InputNode::HandleSelectedObjectsForInputObjects(::ArrayW<UnityEngine::GameObject> selectedObjects)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "HandleSelectedObjectsForInputObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::GameObject>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, selectedObjects);
}
 void HoudiniEngineUnity::HEU_InputNode::HandleSelectedObjectsForInputHDAs(::ArrayW<UnityEngine::GameObject> selectedObjects)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "HandleSelectedObjectsForInputHDAs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::GameObject>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, selectedObjects);
}
 bool HoudiniEngineUnity::HEU_InputNode::IsEquivalentTo(HoudiniEngineUnity::HEU_InputNode other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_InputNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InternalObjectType HoudiniEngineUnity::HEU_InputNode::GetInternalObjectType(HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            "GetInternalObjectType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InternalObjectType, false>(nullptr, ___internal_method, type);
}
// Ctor Parameters []
 HoudiniEngineUnity::HEU_InputNode::HEU_InputNode()  : UnityEngine::ScriptableObject(THROW_UNLESS(::il2cpp_utils::New<HEU_InputNode>())) {}
 void HoudiniEngineUnity::HEU_InputNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputNode>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
