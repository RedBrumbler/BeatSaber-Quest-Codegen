#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "HoudiniEngineUnity/zzzz__JSONNode_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "HoudiniEngineUnity/zzzz__JSONNodeType_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "HoudiniEngineUnity/zzzz__JSONObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "HoudiniEngineUnity/zzzz__JSONTextMode_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "HoudiniEngineUnity/zzzz__JSONArray_def.hpp"
#include "HoudiniEngineUnity/zzzz__JSONContainerType_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "UnityEngine/zzzz__RectOffset_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::HoudiniEngineUnity__JSONNode__Enumerator__Type::HoudiniEngineUnity__JSONNode__Enumerator__Type(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::HoudiniEngineUnity__JSONNode__Enumerator__Type::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::HoudiniEngineUnity__JSONNode__Enumerator__Type::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::HoudiniEngineUnity__JSONNode__Enumerator__Type  GlobalNamespace::HoudiniEngineUnity__JSONNode__Enumerator__Type::None{0};
constexpr GlobalNamespace::HoudiniEngineUnity__JSONNode__Enumerator__Type  GlobalNamespace::HoudiniEngineUnity__JSONNode__Enumerator__Type::Array{1};
constexpr GlobalNamespace::HoudiniEngineUnity__JSONNode__Enumerator__Type  GlobalNamespace::HoudiniEngineUnity__JSONNode__Enumerator__Type::Object{2};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator.get_IsValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator::get_IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x209dc0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator>::get(),
                            "get_IsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator::*)(System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<HoudiniEngineUnity::JSONNode>)>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x209dc1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<HoudiniEngineUnity::JSONNode>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator::*)(System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,HoudiniEngineUnity::JSONNode>)>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x209dc48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,HoudiniEngineUnity::JSONNode>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator.get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::KeyValuePair_2<::StringW,HoudiniEngineUnity::JSONNode> (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator::get_Current)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x209dc6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x209dd38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "type", ty: "GlobalNamespace::HoudiniEngineUnity__JSONNode__Enumerator__Type", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Object", ty: "System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,HoudiniEngineUnity::JSONNode>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Array", ty: "System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<HoudiniEngineUnity::JSONNode>", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator::HoudiniEngineUnity__JSONNode__Enumerator(GlobalNamespace::HoudiniEngineUnity__JSONNode__Enumerator__Type type, System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,HoudiniEngineUnity::JSONNode> m_Object, System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<HoudiniEngineUnity::JSONNode> m_Array) noexcept : ::bs_hook::ValueTypeWrapper() {this->type = type;
this->m_Object = m_Object;
this->m_Array = m_Array;
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator::__set_type(GlobalNamespace::HoudiniEngineUnity__JSONNode__Enumerator__Type value)  {
::cordl_internals::setInstanceField<GlobalNamespace::HoudiniEngineUnity__JSONNode__Enumerator__Type, 0x0>(this->__instance, std::forward<GlobalNamespace::HoudiniEngineUnity__JSONNode__Enumerator__Type>(value));
}
constexpr GlobalNamespace::HoudiniEngineUnity__JSONNode__Enumerator__Type HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator::__get_type() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::HoudiniEngineUnity__JSONNode__Enumerator__Type, 0x0>(this->__instance);
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator::__set_m_Object(System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,HoudiniEngineUnity::JSONNode> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,HoudiniEngineUnity::JSONNode>, 0x8>(this->__instance, std::forward<System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,HoudiniEngineUnity::JSONNode>>(value));
}
constexpr System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,HoudiniEngineUnity::JSONNode> HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator::__get_m_Object() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,HoudiniEngineUnity::JSONNode>, 0x8>(this->__instance);
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator::__set_m_Array(System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<HoudiniEngineUnity::JSONNode> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<HoudiniEngineUnity::JSONNode>, 0x30>(this->__instance, std::forward<System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<HoudiniEngineUnity::JSONNode>>(value));
}
constexpr System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<HoudiniEngineUnity::JSONNode> HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator::__get_m_Array() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<HoudiniEngineUnity::JSONNode>, 0x30>(this->__instance);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator>::get(),
                            "get_IsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator::_ctor(System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<HoudiniEngineUnity::JSONNode> aArrayEnum)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<HoudiniEngineUnity::JSONNode>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, aArrayEnum);
}
 void HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator::_ctor(System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,HoudiniEngineUnity::JSONNode> aDictEnum)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,HoudiniEngineUnity::JSONNode>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, aDictEnum);
}
 System::Collections::Generic::KeyValuePair_2<::StringW,HoudiniEngineUnity::JSONNode> HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::KeyValuePair_2<::StringW,HoudiniEngineUnity::JSONNode>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator::*)(System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<HoudiniEngineUnity::JSONNode>)>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x209ddcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<HoudiniEngineUnity::JSONNode>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator::*)(System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,HoudiniEngineUnity::JSONNode>)>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x209de0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,HoudiniEngineUnity::JSONNode>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator::*)(HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator)>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x209de7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator.get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::JSONNode (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x209de90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x209ded4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator::GetEnumerator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x209ded8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "m_Enumerator", ty: "HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator::HoudiniEngineUnity__JSONNode__ValueEnumerator(HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator m_Enumerator) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Enumerator = m_Enumerator;
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator::__set_m_Enumerator(HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator, 0x0>(this->__instance, std::forward<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator>(value));
}
constexpr HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator::__get_m_Enumerator() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator, 0x0>(this->__instance);
}
 void HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator::_ctor(System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<HoudiniEngineUnity::JSONNode> aArrayEnum)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<HoudiniEngineUnity::JSONNode>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, aArrayEnum);
}
 void HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator::_ctor(System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,HoudiniEngineUnity::JSONNode> aDictEnum)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,HoudiniEngineUnity::JSONNode>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, aDictEnum);
}
 void HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator::_ctor(HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator aEnumerator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, aEnumerator);
}
 HoudiniEngineUnity::JSONNode HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::JSONNode, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator::*)(System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<HoudiniEngineUnity::JSONNode>)>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x209dee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<HoudiniEngineUnity::JSONNode>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator::*)(System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,HoudiniEngineUnity::JSONNode>)>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x209df28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,HoudiniEngineUnity::JSONNode>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator::*)(HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator)>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x209df98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator.get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x209dfac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x209dfe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator::GetEnumerator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x209dfec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "m_Enumerator", ty: "HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator::HoudiniEngineUnity__JSONNode__KeyEnumerator(HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator m_Enumerator) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Enumerator = m_Enumerator;
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator::__set_m_Enumerator(HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator, 0x0>(this->__instance, std::forward<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator>(value));
}
constexpr HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator::__get_m_Enumerator() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator, 0x0>(this->__instance);
}
 void HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator::_ctor(System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<HoudiniEngineUnity::JSONNode> aArrayEnum)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<HoudiniEngineUnity::JSONNode>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, aArrayEnum);
}
 void HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator::_ctor(System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,HoudiniEngineUnity::JSONNode> aDictEnum)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,HoudiniEngineUnity::JSONNode>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, aDictEnum);
}
 void HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator::_ctor(HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator aEnumerator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, aEnumerator);
}
 ::StringW HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator::*)(HoudiniEngineUnity::JSONNode)>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x209a138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::JSONNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator.get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::KeyValuePair_2<::StringW,HoudiniEngineUnity::JSONNode> (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x209dffc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x209e004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x209e068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x209e070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::StringW,HoudiniEngineUnity::JSONNode>> (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator::GetEnumerator)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x209e084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator::Reset)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x209e0e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x209e150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::StringW,HoudiniEngineUnity::JSONNode>>
constexpr  HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator::operator System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::StringW,HoudiniEngineUnity::JSONNode>>() const noexcept {
return System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::StringW,HoudiniEngineUnity::JSONNode>>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::StringW,HoudiniEngineUnity::JSONNode>>
constexpr  HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator::operator System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::StringW,HoudiniEngineUnity::JSONNode>>() const noexcept {
return System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::StringW,HoudiniEngineUnity::JSONNode>>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator::__set_m_Node(HoudiniEngineUnity::JSONNode value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::JSONNode, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::JSONNode>(value));
}
constexpr HoudiniEngineUnity::JSONNode HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator::__get_m_Node() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::JSONNode, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator::__set_m_Enumerator(HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator>(value));
}
constexpr HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator::__get_m_Enumerator() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "aNode", ty: "HoudiniEngineUnity::JSONNode", modifiers: "", def_value: None }]
 HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator::HoudiniEngineUnity__JSONNode__LinqEnumerator(HoudiniEngineUnity::JSONNode aNode)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity__JSONNode__LinqEnumerator>(aNode))) {}
 void HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator::_ctor(HoudiniEngineUnity::JSONNode aNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::JSONNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, aNode);
}
 System::Collections::Generic::KeyValuePair_2<::StringW,HoudiniEngineUnity::JSONNode> HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::KeyValuePair_2<::StringW,HoudiniEngineUnity::JSONNode>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::StringW,HoudiniEngineUnity::JSONNode>> HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::StringW,HoudiniEngineUnity::JSONNode>>, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40::*)(int32_t)>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2099ed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x209e1b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40::MoveNext)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x209e1b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40.System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::JSONNode (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40::System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x209e1d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40>::get(),
                            "System.Collections.Generic.IEnumerator<HoudiniEngineUnity.JSONNode>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x209e1d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x209e218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40.System_Collections_Generic_IEnumerable_HoudiniEngineUnity_JSONNode__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode> (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40::System_Collections_Generic_IEnumerable_HoudiniEngineUnity_JSONNode__GetEnumerator)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x209e220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40>::get(),
                            "System.Collections.Generic.IEnumerable<HoudiniEngineUnity.JSONNode>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x209e2b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<HoudiniEngineUnity::JSONNode>
constexpr  HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40::operator System::Collections::Generic::IEnumerable_1<HoudiniEngineUnity::JSONNode>() const noexcept {
return System::Collections::Generic::IEnumerable_1<HoudiniEngineUnity::JSONNode>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode>
constexpr  HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40::operator System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode>() const noexcept {
return System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40::__set___2__current(HoudiniEngineUnity::JSONNode value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::JSONNode, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::JSONNode>(value));
}
constexpr HoudiniEngineUnity::JSONNode HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40::__get___2__current() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::JSONNode, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40::HoudiniEngineUnity__JSONNode___get_Children_d__40(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity__JSONNode___get_Children_d__40>(__1__state))) {}
 void HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 HoudiniEngineUnity::JSONNode HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40::System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40>::get(),
                            "System.Collections.Generic.IEnumerator<HoudiniEngineUnity.JSONNode>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::JSONNode, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode> HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40::System_Collections_Generic_IEnumerable_HoudiniEngineUnity_JSONNode__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40>::get(),
                            "System.Collections.Generic.IEnumerable<HoudiniEngineUnity.JSONNode>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::*)(int32_t)>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2099f80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x209e2bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::MoveNext)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x209e374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42.__m__Finally1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x209e858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42.__m__Finally2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::__m__Finally2)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x209e7a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42>::get(),
                            "<>m__Finally2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42.System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::JSONNode (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x209e908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42>::get(),
                            "System.Collections.Generic.IEnumerator<HoudiniEngineUnity.JSONNode>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x209e910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x209e950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42.System_Collections_Generic_IEnumerable_HoudiniEngineUnity_JSONNode__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode> (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::System_Collections_Generic_IEnumerable_HoudiniEngineUnity_JSONNode__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x209e958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42>::get(),
                            "System.Collections.Generic.IEnumerable<HoudiniEngineUnity.JSONNode>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x209e9fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<HoudiniEngineUnity::JSONNode>
constexpr  HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::operator System::Collections::Generic::IEnumerable_1<HoudiniEngineUnity::JSONNode>() const noexcept {
return System::Collections::Generic::IEnumerable_1<HoudiniEngineUnity::JSONNode>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode>
constexpr  HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::operator System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode>() const noexcept {
return System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::__set___2__current(HoudiniEngineUnity::JSONNode value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::JSONNode, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::JSONNode>(value));
}
constexpr HoudiniEngineUnity::JSONNode HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::__get___2__current() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::JSONNode, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::__set___4__this(HoudiniEngineUnity::JSONNode value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::JSONNode, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::JSONNode>(value));
}
constexpr HoudiniEngineUnity::JSONNode HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::__get___4__this() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::JSONNode, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::__set___7__wrap1(System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode>>(value));
}
constexpr System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode> HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::__get___7__wrap1() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::__set___7__wrap2(System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode>>(value));
}
constexpr System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode> HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::__get___7__wrap2() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42>(__1__state))) {}
 void HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::__m__Finally2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42>::get(),
                            "<>m__Finally2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 HoudiniEngineUnity::JSONNode HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42>::get(),
                            "System.Collections.Generic.IEnumerator<HoudiniEngineUnity.JSONNode>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::JSONNode, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode> HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::System_Collections_Generic_IEnumerable_HoudiniEngineUnity_JSONNode__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42>::get(),
                            "System.Collections.Generic.IEnumerable<HoudiniEngineUnity.JSONNode>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.get_Tag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::JSONNodeType (HoudiniEngineUnity::JSONNode::*)()>(&HoudiniEngineUnity::JSONNode::get_Tag)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::JSONNode (HoudiniEngineUnity::JSONNode::*)(int32_t)>(&HoudiniEngineUnity::JSONNode::get_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2099d44;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.set_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONNode::*)(int32_t, HoudiniEngineUnity::JSONNode)>(&HoudiniEngineUnity::JSONNode::set_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2099d4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::JSONNode (HoudiniEngineUnity::JSONNode::*)(::StringW)>(&HoudiniEngineUnity::JSONNode::get_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2099d50;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.set_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONNode::*)(::StringW, HoudiniEngineUnity::JSONNode)>(&HoudiniEngineUnity::JSONNode::set_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2099d58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (HoudiniEngineUnity::JSONNode::*)()>(&HoudiniEngineUnity::JSONNode::get_Value)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2099d5c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.set_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONNode::*)(::StringW)>(&HoudiniEngineUnity::JSONNode::set_Value)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2099d9c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (HoudiniEngineUnity::JSONNode::*)()>(&HoudiniEngineUnity::JSONNode::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2099da0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.get_IsNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::JSONNode::*)()>(&HoudiniEngineUnity::JSONNode::get_IsNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2099da8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.get_IsString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::JSONNode::*)()>(&HoudiniEngineUnity::JSONNode::get_IsString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2099db0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.get_IsBoolean
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::JSONNode::*)()>(&HoudiniEngineUnity::JSONNode::get_IsBoolean)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2099db8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.get_IsNull
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::JSONNode::*)()>(&HoudiniEngineUnity::JSONNode::get_IsNull)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2099dc0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.get_IsArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::JSONNode::*)()>(&HoudiniEngineUnity::JSONNode::get_IsArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2099dc8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.get_IsObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::JSONNode::*)()>(&HoudiniEngineUnity::JSONNode::get_IsObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2099dd0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.get_Inline
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::JSONNode::*)()>(&HoudiniEngineUnity::JSONNode::get_Inline)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2099dd8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.set_Inline
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONNode::*)(bool)>(&HoudiniEngineUnity::JSONNode::set_Inline)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2099de0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONNode::*)(::StringW, HoudiniEngineUnity::JSONNode)>(&HoudiniEngineUnity::JSONNode::Add)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2099de4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONNode::*)(HoudiniEngineUnity::JSONNode)>(&HoudiniEngineUnity::JSONNode::Add)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2099de8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::JSONNode (HoudiniEngineUnity::JSONNode::*)(::StringW)>(&HoudiniEngineUnity::JSONNode::Remove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2099e4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::JSONNode (HoudiniEngineUnity::JSONNode::*)(int32_t)>(&HoudiniEngineUnity::JSONNode::Remove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2099e54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::JSONNode (HoudiniEngineUnity::JSONNode::*)(HoudiniEngineUnity::JSONNode)>(&HoudiniEngineUnity::JSONNode::Remove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2099e5c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.get_Children
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<HoudiniEngineUnity::JSONNode> (HoudiniEngineUnity::JSONNode::*)()>(&HoudiniEngineUnity::JSONNode::get_Children)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2099e64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.get_DeepChildren
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<HoudiniEngineUnity::JSONNode> (HoudiniEngineUnity::JSONNode::*)()>(&HoudiniEngineUnity::JSONNode::get_DeepChildren)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2099f08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "get_DeepChildren",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (HoudiniEngineUnity::JSONNode::*)()>(&HoudiniEngineUnity::JSONNode::ToString)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2099fb4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (HoudiniEngineUnity::JSONNode::*)(int32_t)>(&HoudiniEngineUnity::JSONNode::ToString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x209a040;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.WriteToStringBuilder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONNode::*)(System::Text::StringBuilder, int32_t, int32_t, HoudiniEngineUnity::JSONTextMode)>(&HoudiniEngineUnity::JSONNode::WriteToStringBuilder)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator (HoudiniEngineUnity::JSONNode::*)()>(&HoudiniEngineUnity::JSONNode::GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.get_Linq
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::StringW,HoudiniEngineUnity::JSONNode>> (HoudiniEngineUnity::JSONNode::*)()>(&HoudiniEngineUnity::JSONNode::get_Linq)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x209a0d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "get_Linq",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.get_Keys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator (HoudiniEngineUnity::JSONNode::*)()>(&HoudiniEngineUnity::JSONNode::get_Keys)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x209a1b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "get_Keys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.get_Values
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator (HoudiniEngineUnity::JSONNode::*)()>(&HoudiniEngineUnity::JSONNode::get_Values)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x209a1f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "get_Values",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.get_AsDouble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (HoudiniEngineUnity::JSONNode::*)()>(&HoudiniEngineUnity::JSONNode::get_AsDouble)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x209a230;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.set_AsDouble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONNode::*)(double_t)>(&HoudiniEngineUnity::JSONNode::set_AsDouble)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x209a2d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.get_AsInt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (HoudiniEngineUnity::JSONNode::*)()>(&HoudiniEngineUnity::JSONNode::get_AsInt)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x209a35c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.set_AsInt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONNode::*)(int32_t)>(&HoudiniEngineUnity::JSONNode::set_AsInt)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x209a390;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.get_AsFloat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (HoudiniEngineUnity::JSONNode::*)()>(&HoudiniEngineUnity::JSONNode::get_AsFloat)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x209a3a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.set_AsFloat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONNode::*)(float_t)>(&HoudiniEngineUnity::JSONNode::set_AsFloat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x209a3c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.get_AsBool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::JSONNode::*)()>(&HoudiniEngineUnity::JSONNode::get_AsBool)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x209a3dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.set_AsBool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONNode::*)(bool)>(&HoudiniEngineUnity::JSONNode::set_AsBool)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x209a494;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.get_AsLong
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (HoudiniEngineUnity::JSONNode::*)()>(&HoudiniEngineUnity::JSONNode::get_AsLong)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x209a50c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  37
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.set_AsLong
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONNode::*)(int64_t)>(&HoudiniEngineUnity::JSONNode::set_AsLong)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x209a540;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.get_AsArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::JSONArray (HoudiniEngineUnity::JSONNode::*)()>(&HoudiniEngineUnity::JSONNode::get_AsArray)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x209a57c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  39
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.get_AsObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::JSONObject (HoudiniEngineUnity::JSONNode::*)()>(&HoudiniEngineUnity::JSONNode::get_AsObject)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x209a5f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  40
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.op_Implicit_HoudiniEngineUnity__JSONNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::JSONNode (*)(::StringW)>(&HoudiniEngineUnity::JSONNode::op_Implicit_HoudiniEngineUnity__JSONNode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x209a66c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.op_Implicit___StringW
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(HoudiniEngineUnity::JSONNode)>(&HoudiniEngineUnity::JSONNode::op_Implicit___StringW)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2098404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::JSONNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.op_Implicit_HoudiniEngineUnity__JSONNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::JSONNode (*)(double_t)>(&HoudiniEngineUnity::JSONNode::op_Implicit_HoudiniEngineUnity__JSONNode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x209a878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.op_Implicit_double_t
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(HoudiniEngineUnity::JSONNode)>(&HoudiniEngineUnity::JSONNode::op_Implicit_double_t)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x209a90c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::JSONNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.op_Implicit_HoudiniEngineUnity__JSONNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::JSONNode (*)(float_t)>(&HoudiniEngineUnity::JSONNode::op_Implicit_HoudiniEngineUnity__JSONNode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x209a94c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.op_Implicit_float_t
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(HoudiniEngineUnity::JSONNode)>(&HoudiniEngineUnity::JSONNode::op_Implicit_float_t)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x209a9bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::JSONNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.op_Implicit_HoudiniEngineUnity__JSONNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::JSONNode (*)(int32_t)>(&HoudiniEngineUnity::JSONNode::op_Implicit_HoudiniEngineUnity__JSONNode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x209a9fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.op_Implicit_int32_t
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(HoudiniEngineUnity::JSONNode)>(&HoudiniEngineUnity::JSONNode::op_Implicit_int32_t)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x209aa6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::JSONNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.op_Implicit_HoudiniEngineUnity__JSONNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::JSONNode (*)(int64_t)>(&HoudiniEngineUnity::JSONNode::op_Implicit_HoudiniEngineUnity__JSONNode)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x209aaac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.op_Implicit_int64_t
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(HoudiniEngineUnity::JSONNode)>(&HoudiniEngineUnity::JSONNode::op_Implicit_int64_t)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x209ab8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::JSONNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.op_Implicit_HoudiniEngineUnity__JSONNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::JSONNode (*)(bool)>(&HoudiniEngineUnity::JSONNode::op_Implicit_HoudiniEngineUnity__JSONNode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x209abcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.op_Implicit_bool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(HoudiniEngineUnity::JSONNode)>(&HoudiniEngineUnity::JSONNode::op_Implicit_bool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x209ac5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::JSONNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.op_Implicit_HoudiniEngineUnity__JSONNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::JSONNode (*)(System::Collections::Generic::KeyValuePair_2<::StringW,HoudiniEngineUnity::JSONNode>)>(&HoudiniEngineUnity::JSONNode::op_Implicit_HoudiniEngineUnity__JSONNode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x209ac9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::KeyValuePair_2<::StringW,HoudiniEngineUnity::JSONNode>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.op_Equality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(HoudiniEngineUnity::JSONNode, ::bs_hook::Il2CppWrapperType)>(&HoudiniEngineUnity::JSONNode::op_Equality)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x209a6f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::JSONNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.op_Inequality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(HoudiniEngineUnity::JSONNode, ::bs_hook::Il2CppWrapperType)>(&HoudiniEngineUnity::JSONNode::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x20983ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::JSONNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::JSONNode::*)(::bs_hook::Il2CppWrapperType)>(&HoudiniEngineUnity::JSONNode::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x209acd8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (HoudiniEngineUnity::JSONNode::*)()>(&HoudiniEngineUnity::JSONNode::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x209ace4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.get_EscapeBuilder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::StringBuilder (*)()>(&HoudiniEngineUnity::JSONNode::get_EscapeBuilder)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x209acec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "get_EscapeBuilder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.Escape
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&HoudiniEngineUnity::JSONNode::Escape)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x209ad88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "Escape",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.ParseElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::JSONNode (*)(::StringW, bool)>(&HoudiniEngineUnity::JSONNode::ParseElement)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x209b04c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "ParseElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.Parse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::JSONNode (*)(::StringW)>(&HoudiniEngineUnity::JSONNode::Parse)> {
  constexpr static std::size_t size = 0x5fc;
  constexpr static std::size_t addrs = 0x209b250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.GetContainer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::JSONNode (*)(HoudiniEngineUnity::JSONContainerType)>(&HoudiniEngineUnity::JSONNode::GetContainer)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x209b944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "GetContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::JSONContainerType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.op_Implicit_HoudiniEngineUnity__JSONNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::JSONNode (*)(UnityEngine::Vector2)>(&HoudiniEngineUnity::JSONNode::op_Implicit_HoudiniEngineUnity__JSONNode)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x209b9d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.op_Implicit_HoudiniEngineUnity__JSONNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::JSONNode (*)(UnityEngine::Vector3)>(&HoudiniEngineUnity::JSONNode::op_Implicit_HoudiniEngineUnity__JSONNode)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x209bb9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.op_Implicit_HoudiniEngineUnity__JSONNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::JSONNode (*)(UnityEngine::Vector4)>(&HoudiniEngineUnity::JSONNode::op_Implicit_HoudiniEngineUnity__JSONNode)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x209be00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector4>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.op_Implicit_HoudiniEngineUnity__JSONNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::JSONNode (*)(UnityEngine::Quaternion)>(&HoudiniEngineUnity::JSONNode::op_Implicit_HoudiniEngineUnity__JSONNode)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x209c0d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.op_Implicit_HoudiniEngineUnity__JSONNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::JSONNode (*)(UnityEngine::Rect)>(&HoudiniEngineUnity::JSONNode::op_Implicit_HoudiniEngineUnity__JSONNode)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x209c3a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.op_Implicit_HoudiniEngineUnity__JSONNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::JSONNode (*)(UnityEngine::RectOffset)>(&HoudiniEngineUnity::JSONNode::op_Implicit_HoudiniEngineUnity__JSONNode)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x209c6d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RectOffset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.op_Implicit_UnityEngine__Vector2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (*)(HoudiniEngineUnity::JSONNode)>(&HoudiniEngineUnity::JSONNode::op_Implicit_UnityEngine__Vector2)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x209ca00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::JSONNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.op_Implicit_UnityEngine__Vector3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(HoudiniEngineUnity::JSONNode)>(&HoudiniEngineUnity::JSONNode::op_Implicit_UnityEngine__Vector3)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x209ca60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::JSONNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.op_Implicit_UnityEngine__Vector4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector4 (*)(HoudiniEngineUnity::JSONNode)>(&HoudiniEngineUnity::JSONNode::op_Implicit_UnityEngine__Vector4)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x209cac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::JSONNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.op_Implicit_UnityEngine__Quaternion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(HoudiniEngineUnity::JSONNode)>(&HoudiniEngineUnity::JSONNode::op_Implicit_UnityEngine__Quaternion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x209cb28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::JSONNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.op_Implicit_UnityEngine__Rect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rect (*)(HoudiniEngineUnity::JSONNode)>(&HoudiniEngineUnity::JSONNode::op_Implicit_UnityEngine__Rect)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x209cb8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::JSONNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.op_Implicit_UnityEngine__RectOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RectOffset (*)(HoudiniEngineUnity::JSONNode)>(&HoudiniEngineUnity::JSONNode::op_Implicit_UnityEngine__RectOffset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x209cbc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::JSONNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.ReadVector2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (HoudiniEngineUnity::JSONNode::*)(UnityEngine::Vector2)>(&HoudiniEngineUnity::JSONNode::ReadVector2)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x209cc34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "ReadVector2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.ReadVector2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (HoudiniEngineUnity::JSONNode::*)(::StringW, ::StringW)>(&HoudiniEngineUnity::JSONNode::ReadVector2)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x209cd74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "ReadVector2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.ReadVector2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (HoudiniEngineUnity::JSONNode::*)()>(&HoudiniEngineUnity::JSONNode::ReadVector2)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x209ca10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "ReadVector2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.WriteVector2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::JSONNode (HoudiniEngineUnity::JSONNode::*)(UnityEngine::Vector2, ::StringW, ::StringW)>(&HoudiniEngineUnity::JSONNode::WriteVector2)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x209ba6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "WriteVector2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.ReadVector3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (HoudiniEngineUnity::JSONNode::*)(UnityEngine::Vector3)>(&HoudiniEngineUnity::JSONNode::ReadVector3)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x209ce4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "ReadVector3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.ReadVector3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (HoudiniEngineUnity::JSONNode::*)(::StringW, ::StringW, ::StringW)>(&HoudiniEngineUnity::JSONNode::ReadVector3)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x209d008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "ReadVector3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.ReadVector3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (HoudiniEngineUnity::JSONNode::*)()>(&HoudiniEngineUnity::JSONNode::ReadVector3)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x209ca70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "ReadVector3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.WriteVector3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::JSONNode (HoudiniEngineUnity::JSONNode::*)(UnityEngine::Vector3, ::StringW, ::StringW, ::StringW)>(&HoudiniEngineUnity::JSONNode::WriteVector3)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x209bc60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "WriteVector3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.ReadVector4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector4 (HoudiniEngineUnity::JSONNode::*)(UnityEngine::Vector4)>(&HoudiniEngineUnity::JSONNode::ReadVector4)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x209d120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "ReadVector4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector4>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.ReadVector4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector4 (HoudiniEngineUnity::JSONNode::*)()>(&HoudiniEngineUnity::JSONNode::ReadVector4)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x209cad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "ReadVector4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.WriteVector4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::JSONNode (HoudiniEngineUnity::JSONNode::*)(UnityEngine::Vector4)>(&HoudiniEngineUnity::JSONNode::WriteVector4)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x209be84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "WriteVector4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector4>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.ReadQuaternion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (HoudiniEngineUnity::JSONNode::*)(UnityEngine::Quaternion)>(&HoudiniEngineUnity::JSONNode::ReadQuaternion)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x209d350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "ReadQuaternion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.ReadQuaternion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (HoudiniEngineUnity::JSONNode::*)()>(&HoudiniEngineUnity::JSONNode::ReadQuaternion)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x209cb38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "ReadQuaternion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.WriteQuaternion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::JSONNode (HoudiniEngineUnity::JSONNode::*)(UnityEngine::Quaternion)>(&HoudiniEngineUnity::JSONNode::WriteQuaternion)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x209c158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "WriteQuaternion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.ReadRect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rect (HoudiniEngineUnity::JSONNode::*)(UnityEngine::Rect)>(&HoudiniEngineUnity::JSONNode::ReadRect)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x209d580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "ReadRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.ReadRect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rect (HoudiniEngineUnity::JSONNode::*)()>(&HoudiniEngineUnity::JSONNode::ReadRect)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x209cbac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "ReadRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.WriteRect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::JSONNode (HoudiniEngineUnity::JSONNode::*)(UnityEngine::Rect)>(&HoudiniEngineUnity::JSONNode::WriteRect)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x209c42c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "WriteRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.ReadRectOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RectOffset (HoudiniEngineUnity::JSONNode::*)(UnityEngine::RectOffset)>(&HoudiniEngineUnity::JSONNode::ReadRectOffset)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x209d7d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "ReadRectOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RectOffset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.ReadRectOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RectOffset (HoudiniEngineUnity::JSONNode::*)()>(&HoudiniEngineUnity::JSONNode::ReadRectOffset)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x209cbd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "ReadRectOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.WriteRectOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::JSONNode (HoudiniEngineUnity::JSONNode::*)(UnityEngine::RectOffset)>(&HoudiniEngineUnity::JSONNode::WriteRectOffset)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x209c734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "WriteRectOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RectOffset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.ReadMatrix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Matrix4x4 (HoudiniEngineUnity::JSONNode::*)()>(&HoudiniEngineUnity::JSONNode::ReadMatrix)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x209da74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "ReadMatrix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode.WriteMatrix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::JSONNode (HoudiniEngineUnity::JSONNode::*)(UnityEngine::Matrix4x4)>(&HoudiniEngineUnity::JSONNode::WriteMatrix)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x209db58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "WriteMatrix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Matrix4x4>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::JSONNode._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::JSONNode::*)()>(&HoudiniEngineUnity::JSONNode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x209dc04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void HoudiniEngineUnity::JSONNode::__set_forceASCII(bool value)  {
::cordl_internals::setStaticField<bool, "forceASCII", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get>(std::forward<bool>(value));
}
 bool HoudiniEngineUnity::JSONNode::__get_forceASCII()  {
return ::cordl_internals::getStaticField<bool, "forceASCII", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get>();
}
 void HoudiniEngineUnity::JSONNode::__set_longAsString(bool value)  {
::cordl_internals::setStaticField<bool, "longAsString", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get>(std::forward<bool>(value));
}
 bool HoudiniEngineUnity::JSONNode::__get_longAsString()  {
return ::cordl_internals::getStaticField<bool, "longAsString", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get>();
}
 void HoudiniEngineUnity::JSONNode::__set_m_EscapeBuilder(System::Text::StringBuilder value)  {
::cordl_internals::setStaticField<System::Text::StringBuilder, "m_EscapeBuilder", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get>(std::forward<System::Text::StringBuilder>(value));
}
 System::Text::StringBuilder HoudiniEngineUnity::JSONNode::__get_m_EscapeBuilder()  {
return ::cordl_internals::getStaticField<System::Text::StringBuilder, "m_EscapeBuilder", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get>();
}
 void HoudiniEngineUnity::JSONNode::__set_VectorContainerType(HoudiniEngineUnity::JSONContainerType value)  {
::cordl_internals::setStaticField<HoudiniEngineUnity::JSONContainerType, "VectorContainerType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get>(std::forward<HoudiniEngineUnity::JSONContainerType>(value));
}
 HoudiniEngineUnity::JSONContainerType HoudiniEngineUnity::JSONNode::__get_VectorContainerType()  {
return ::cordl_internals::getStaticField<HoudiniEngineUnity::JSONContainerType, "VectorContainerType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get>();
}
 void HoudiniEngineUnity::JSONNode::__set_QuaternionContainerType(HoudiniEngineUnity::JSONContainerType value)  {
::cordl_internals::setStaticField<HoudiniEngineUnity::JSONContainerType, "QuaternionContainerType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get>(std::forward<HoudiniEngineUnity::JSONContainerType>(value));
}
 HoudiniEngineUnity::JSONContainerType HoudiniEngineUnity::JSONNode::__get_QuaternionContainerType()  {
return ::cordl_internals::getStaticField<HoudiniEngineUnity::JSONContainerType, "QuaternionContainerType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get>();
}
 void HoudiniEngineUnity::JSONNode::__set_RectContainerType(HoudiniEngineUnity::JSONContainerType value)  {
::cordl_internals::setStaticField<HoudiniEngineUnity::JSONContainerType, "RectContainerType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get>(std::forward<HoudiniEngineUnity::JSONContainerType>(value));
}
 HoudiniEngineUnity::JSONContainerType HoudiniEngineUnity::JSONNode::__get_RectContainerType()  {
return ::cordl_internals::getStaticField<HoudiniEngineUnity::JSONContainerType, "RectContainerType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get>();
}
 HoudiniEngineUnity::JSONNodeType HoudiniEngineUnity::JSONNode::get_Tag()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "get_Tag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::JSONNodeType, false>(const_cast<void*>(instance), ___internal_method);
}
 HoudiniEngineUnity::JSONNode HoudiniEngineUnity::JSONNode::get_Item(int32_t aIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::JSONNode, false>(const_cast<void*>(instance), ___internal_method, aIndex);
}
 void HoudiniEngineUnity::JSONNode::set_Item(int32_t aIndex, HoudiniEngineUnity::JSONNode value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::JSONNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, aIndex, value);
}
 HoudiniEngineUnity::JSONNode HoudiniEngineUnity::JSONNode::get_Item(::StringW aKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::JSONNode, false>(const_cast<void*>(instance), ___internal_method, aKey);
}
 void HoudiniEngineUnity::JSONNode::set_Item(::StringW aKey, HoudiniEngineUnity::JSONNode value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::JSONNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, aKey, value);
}
 ::StringW HoudiniEngineUnity::JSONNode::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::JSONNode::set_Value(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "set_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t HoudiniEngineUnity::JSONNode::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool HoudiniEngineUnity::JSONNode::get_IsNumber()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "get_IsNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool HoudiniEngineUnity::JSONNode::get_IsString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "get_IsString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool HoudiniEngineUnity::JSONNode::get_IsBoolean()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "get_IsBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool HoudiniEngineUnity::JSONNode::get_IsNull()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "get_IsNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool HoudiniEngineUnity::JSONNode::get_IsArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "get_IsArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool HoudiniEngineUnity::JSONNode::get_IsObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "get_IsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool HoudiniEngineUnity::JSONNode::get_Inline()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "get_Inline",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::JSONNode::set_Inline(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "set_Inline",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void HoudiniEngineUnity::JSONNode::Add(::StringW aKey, HoudiniEngineUnity::JSONNode aItem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::JSONNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, aKey, aItem);
}
 void HoudiniEngineUnity::JSONNode::Add(HoudiniEngineUnity::JSONNode aItem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::JSONNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, aItem);
}
 HoudiniEngineUnity::JSONNode HoudiniEngineUnity::JSONNode::Remove(::StringW aKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::JSONNode, false>(const_cast<void*>(instance), ___internal_method, aKey);
}
 HoudiniEngineUnity::JSONNode HoudiniEngineUnity::JSONNode::Remove(int32_t aIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::JSONNode, false>(const_cast<void*>(instance), ___internal_method, aIndex);
}
 HoudiniEngineUnity::JSONNode HoudiniEngineUnity::JSONNode::Remove(HoudiniEngineUnity::JSONNode aNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::JSONNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::JSONNode, false>(const_cast<void*>(instance), ___internal_method, aNode);
}
 System::Collections::Generic::IEnumerable_1<HoudiniEngineUnity::JSONNode> HoudiniEngineUnity::JSONNode::get_Children()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "get_Children",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<HoudiniEngineUnity::JSONNode>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerable_1<HoudiniEngineUnity::JSONNode> HoudiniEngineUnity::JSONNode::get_DeepChildren()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "get_DeepChildren",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<HoudiniEngineUnity::JSONNode>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW HoudiniEngineUnity::JSONNode::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW HoudiniEngineUnity::JSONNode::ToString(int32_t aIndent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, aIndent);
}
 void HoudiniEngineUnity::JSONNode::WriteToStringBuilder(System::Text::StringBuilder aSB, int32_t aIndent, int32_t aIndentInc, HoudiniEngineUnity::JSONTextMode aMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "WriteToStringBuilder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::JSONTextMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, aSB, aIndent, aIndentInc, aMode);
}
 HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator HoudiniEngineUnity::JSONNode::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::StringW,HoudiniEngineUnity::JSONNode>> HoudiniEngineUnity::JSONNode::get_Linq()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "get_Linq",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::StringW,HoudiniEngineUnity::JSONNode>>, false>(const_cast<void*>(instance), ___internal_method);
}
 HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator HoudiniEngineUnity::JSONNode::get_Keys()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "get_Keys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator HoudiniEngineUnity::JSONNode::get_Values()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "get_Values",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 double_t HoudiniEngineUnity::JSONNode::get_AsDouble()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "get_AsDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::JSONNode::set_AsDouble(double_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "set_AsDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t HoudiniEngineUnity::JSONNode::get_AsInt()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "get_AsInt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::JSONNode::set_AsInt(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "set_AsInt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t HoudiniEngineUnity::JSONNode::get_AsFloat()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "get_AsFloat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::JSONNode::set_AsFloat(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "set_AsFloat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool HoudiniEngineUnity::JSONNode::get_AsBool()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "get_AsBool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::JSONNode::set_AsBool(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "set_AsBool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int64_t HoudiniEngineUnity::JSONNode::get_AsLong()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "get_AsLong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::JSONNode::set_AsLong(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "set_AsLong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 HoudiniEngineUnity::JSONArray HoudiniEngineUnity::JSONNode::get_AsArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "get_AsArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::JSONArray, false>(const_cast<void*>(instance), ___internal_method);
}
 HoudiniEngineUnity::JSONObject HoudiniEngineUnity::JSONNode::get_AsObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "get_AsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::JSONObject, false>(const_cast<void*>(instance), ___internal_method);
}
 HoudiniEngineUnity::JSONNode HoudiniEngineUnity::JSONNode::op_Implicit_HoudiniEngineUnity__JSONNode(::StringW s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::JSONNode, false>(nullptr, ___internal_method, s);
}
 ::StringW HoudiniEngineUnity::JSONNode::op_Implicit___StringW(HoudiniEngineUnity::JSONNode d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::JSONNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, d);
}
 HoudiniEngineUnity::JSONNode HoudiniEngineUnity::JSONNode::op_Implicit_HoudiniEngineUnity__JSONNode(double_t n)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::JSONNode, false>(nullptr, ___internal_method, n);
}
 double_t HoudiniEngineUnity::JSONNode::op_Implicit_double_t(HoudiniEngineUnity::JSONNode d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::JSONNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, d);
}
 HoudiniEngineUnity::JSONNode HoudiniEngineUnity::JSONNode::op_Implicit_HoudiniEngineUnity__JSONNode(float_t n)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::JSONNode, false>(nullptr, ___internal_method, n);
}
 float_t HoudiniEngineUnity::JSONNode::op_Implicit_float_t(HoudiniEngineUnity::JSONNode d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::JSONNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, d);
}
 HoudiniEngineUnity::JSONNode HoudiniEngineUnity::JSONNode::op_Implicit_HoudiniEngineUnity__JSONNode(int32_t n)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::JSONNode, false>(nullptr, ___internal_method, n);
}
 int32_t HoudiniEngineUnity::JSONNode::op_Implicit_int32_t(HoudiniEngineUnity::JSONNode d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::JSONNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, d);
}
 HoudiniEngineUnity::JSONNode HoudiniEngineUnity::JSONNode::op_Implicit_HoudiniEngineUnity__JSONNode(int64_t n)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::JSONNode, false>(nullptr, ___internal_method, n);
}
 int64_t HoudiniEngineUnity::JSONNode::op_Implicit_int64_t(HoudiniEngineUnity::JSONNode d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::JSONNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, d);
}
 HoudiniEngineUnity::JSONNode HoudiniEngineUnity::JSONNode::op_Implicit_HoudiniEngineUnity__JSONNode(bool b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::JSONNode, false>(nullptr, ___internal_method, b);
}
 bool HoudiniEngineUnity::JSONNode::op_Implicit_bool(HoudiniEngineUnity::JSONNode d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::JSONNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, d);
}
 HoudiniEngineUnity::JSONNode HoudiniEngineUnity::JSONNode::op_Implicit_HoudiniEngineUnity__JSONNode(System::Collections::Generic::KeyValuePair_2<::StringW,HoudiniEngineUnity::JSONNode> aKeyValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::KeyValuePair_2<::StringW,HoudiniEngineUnity::JSONNode>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::JSONNode, false>(nullptr, ___internal_method, aKeyValue);
}
 bool HoudiniEngineUnity::JSONNode::op_Equality(HoudiniEngineUnity::JSONNode a, ::bs_hook::Il2CppWrapperType b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::JSONNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
 bool HoudiniEngineUnity::JSONNode::op_Inequality(HoudiniEngineUnity::JSONNode a, ::bs_hook::Il2CppWrapperType b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::JSONNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
 bool HoudiniEngineUnity::JSONNode::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 int32_t HoudiniEngineUnity::JSONNode::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Text::StringBuilder HoudiniEngineUnity::JSONNode::get_EscapeBuilder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "get_EscapeBuilder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::StringBuilder, false>(nullptr, ___internal_method);
}
 ::StringW HoudiniEngineUnity::JSONNode::Escape(::StringW aText)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "Escape",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, aText);
}
 HoudiniEngineUnity::JSONNode HoudiniEngineUnity::JSONNode::ParseElement(::StringW token, bool quoted)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "ParseElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::JSONNode, false>(nullptr, ___internal_method, token, quoted);
}
 HoudiniEngineUnity::JSONNode HoudiniEngineUnity::JSONNode::Parse(::StringW aJSON)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::JSONNode, false>(nullptr, ___internal_method, aJSON);
}
 HoudiniEngineUnity::JSONNode HoudiniEngineUnity::JSONNode::GetContainer(HoudiniEngineUnity::JSONContainerType aType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "GetContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::JSONContainerType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::JSONNode, false>(nullptr, ___internal_method, aType);
}
 HoudiniEngineUnity::JSONNode HoudiniEngineUnity::JSONNode::op_Implicit_HoudiniEngineUnity__JSONNode(UnityEngine::Vector2 aVec)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::JSONNode, false>(nullptr, ___internal_method, aVec);
}
 HoudiniEngineUnity::JSONNode HoudiniEngineUnity::JSONNode::op_Implicit_HoudiniEngineUnity__JSONNode(UnityEngine::Vector3 aVec)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::JSONNode, false>(nullptr, ___internal_method, aVec);
}
 HoudiniEngineUnity::JSONNode HoudiniEngineUnity::JSONNode::op_Implicit_HoudiniEngineUnity__JSONNode(UnityEngine::Vector4 aVec)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector4>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::JSONNode, false>(nullptr, ___internal_method, aVec);
}
 HoudiniEngineUnity::JSONNode HoudiniEngineUnity::JSONNode::op_Implicit_HoudiniEngineUnity__JSONNode(UnityEngine::Quaternion aRot)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::JSONNode, false>(nullptr, ___internal_method, aRot);
}
 HoudiniEngineUnity::JSONNode HoudiniEngineUnity::JSONNode::op_Implicit_HoudiniEngineUnity__JSONNode(UnityEngine::Rect aRect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::JSONNode, false>(nullptr, ___internal_method, aRect);
}
 HoudiniEngineUnity::JSONNode HoudiniEngineUnity::JSONNode::op_Implicit_HoudiniEngineUnity__JSONNode(UnityEngine::RectOffset aRect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RectOffset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::JSONNode, false>(nullptr, ___internal_method, aRect);
}
 UnityEngine::Vector2 HoudiniEngineUnity::JSONNode::op_Implicit_UnityEngine__Vector2(HoudiniEngineUnity::JSONNode aNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::JSONNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(nullptr, ___internal_method, aNode);
}
 UnityEngine::Vector3 HoudiniEngineUnity::JSONNode::op_Implicit_UnityEngine__Vector3(HoudiniEngineUnity::JSONNode aNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::JSONNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(nullptr, ___internal_method, aNode);
}
 UnityEngine::Vector4 HoudiniEngineUnity::JSONNode::op_Implicit_UnityEngine__Vector4(HoudiniEngineUnity::JSONNode aNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::JSONNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector4, false>(nullptr, ___internal_method, aNode);
}
 UnityEngine::Quaternion HoudiniEngineUnity::JSONNode::op_Implicit_UnityEngine__Quaternion(HoudiniEngineUnity::JSONNode aNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::JSONNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Quaternion, false>(nullptr, ___internal_method, aNode);
}
 UnityEngine::Rect HoudiniEngineUnity::JSONNode::op_Implicit_UnityEngine__Rect(HoudiniEngineUnity::JSONNode aNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::JSONNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Rect, false>(nullptr, ___internal_method, aNode);
}
 UnityEngine::RectOffset HoudiniEngineUnity::JSONNode::op_Implicit_UnityEngine__RectOffset(HoudiniEngineUnity::JSONNode aNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::JSONNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::RectOffset, false>(nullptr, ___internal_method, aNode);
}
 UnityEngine::Vector2 HoudiniEngineUnity::JSONNode::ReadVector2(UnityEngine::Vector2 aDefault)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "ReadVector2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method, aDefault);
}
 UnityEngine::Vector2 HoudiniEngineUnity::JSONNode::ReadVector2(::StringW aXName, ::StringW aYName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "ReadVector2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method, aXName, aYName);
}
 UnityEngine::Vector2 HoudiniEngineUnity::JSONNode::ReadVector2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "ReadVector2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param aXName: ::StringW (default: u"x")
/// @param aYName: ::StringW (default: u"y")
 HoudiniEngineUnity::JSONNode HoudiniEngineUnity::JSONNode::WriteVector2(UnityEngine::Vector2 aVec, ::StringW aXName, ::StringW aYName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "WriteVector2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::JSONNode, false>(const_cast<void*>(instance), ___internal_method, aVec, aXName, aYName);
}
 UnityEngine::Vector3 HoudiniEngineUnity::JSONNode::ReadVector3(UnityEngine::Vector3 aDefault)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "ReadVector3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method, aDefault);
}
 UnityEngine::Vector3 HoudiniEngineUnity::JSONNode::ReadVector3(::StringW aXName, ::StringW aYName, ::StringW aZName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "ReadVector3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method, aXName, aYName, aZName);
}
 UnityEngine::Vector3 HoudiniEngineUnity::JSONNode::ReadVector3()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "ReadVector3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param aXName: ::StringW (default: u"x")
/// @param aYName: ::StringW (default: u"y")
/// @param aZName: ::StringW (default: u"z")
 HoudiniEngineUnity::JSONNode HoudiniEngineUnity::JSONNode::WriteVector3(UnityEngine::Vector3 aVec, ::StringW aXName, ::StringW aYName, ::StringW aZName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "WriteVector3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::JSONNode, false>(const_cast<void*>(instance), ___internal_method, aVec, aXName, aYName, aZName);
}
 UnityEngine::Vector4 HoudiniEngineUnity::JSONNode::ReadVector4(UnityEngine::Vector4 aDefault)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "ReadVector4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector4>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector4, false>(const_cast<void*>(instance), ___internal_method, aDefault);
}
 UnityEngine::Vector4 HoudiniEngineUnity::JSONNode::ReadVector4()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "ReadVector4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector4, false>(const_cast<void*>(instance), ___internal_method);
}
 HoudiniEngineUnity::JSONNode HoudiniEngineUnity::JSONNode::WriteVector4(UnityEngine::Vector4 aVec)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "WriteVector4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector4>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::JSONNode, false>(const_cast<void*>(instance), ___internal_method, aVec);
}
 UnityEngine::Quaternion HoudiniEngineUnity::JSONNode::ReadQuaternion(UnityEngine::Quaternion aDefault)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "ReadQuaternion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Quaternion, false>(const_cast<void*>(instance), ___internal_method, aDefault);
}
 UnityEngine::Quaternion HoudiniEngineUnity::JSONNode::ReadQuaternion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "ReadQuaternion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Quaternion, false>(const_cast<void*>(instance), ___internal_method);
}
 HoudiniEngineUnity::JSONNode HoudiniEngineUnity::JSONNode::WriteQuaternion(UnityEngine::Quaternion aRot)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "WriteQuaternion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::JSONNode, false>(const_cast<void*>(instance), ___internal_method, aRot);
}
 UnityEngine::Rect HoudiniEngineUnity::JSONNode::ReadRect(UnityEngine::Rect aDefault)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "ReadRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Rect, false>(const_cast<void*>(instance), ___internal_method, aDefault);
}
 UnityEngine::Rect HoudiniEngineUnity::JSONNode::ReadRect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "ReadRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Rect, false>(const_cast<void*>(instance), ___internal_method);
}
 HoudiniEngineUnity::JSONNode HoudiniEngineUnity::JSONNode::WriteRect(UnityEngine::Rect aRect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "WriteRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::JSONNode, false>(const_cast<void*>(instance), ___internal_method, aRect);
}
 UnityEngine::RectOffset HoudiniEngineUnity::JSONNode::ReadRectOffset(UnityEngine::RectOffset aDefault)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "ReadRectOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RectOffset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::RectOffset, false>(const_cast<void*>(instance), ___internal_method, aDefault);
}
 UnityEngine::RectOffset HoudiniEngineUnity::JSONNode::ReadRectOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "ReadRectOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::RectOffset, false>(const_cast<void*>(instance), ___internal_method);
}
 HoudiniEngineUnity::JSONNode HoudiniEngineUnity::JSONNode::WriteRectOffset(UnityEngine::RectOffset aRect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "WriteRectOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RectOffset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::JSONNode, false>(const_cast<void*>(instance), ___internal_method, aRect);
}
 UnityEngine::Matrix4x4 HoudiniEngineUnity::JSONNode::ReadMatrix()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "ReadMatrix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Matrix4x4, false>(const_cast<void*>(instance), ___internal_method);
}
 HoudiniEngineUnity::JSONNode HoudiniEngineUnity::JSONNode::WriteMatrix(UnityEngine::Matrix4x4 aMatrix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            "WriteMatrix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Matrix4x4>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::JSONNode, false>(const_cast<void*>(instance), ___internal_method, aMatrix);
}
// Ctor Parameters []
 HoudiniEngineUnity::JSONNode::JSONNode()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<JSONNode>())) {}
 void HoudiniEngineUnity::JSONNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::JSONNode>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
