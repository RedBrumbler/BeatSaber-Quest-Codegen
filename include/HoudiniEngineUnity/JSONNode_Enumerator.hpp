// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.JSONNode
#include "HoudiniEngineUnity/JSONNode.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Collections.Generic.Dictionary`2/System.Collections.Generic.Enumerator
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: System.Collections.Generic.List`1/System.Collections.Generic.Enumerator
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Skipping declaration: KeyValuePair`2 because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::JSONNode::Enumerator, "HoudiniEngineUnity", "JSONNode/Enumerator");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: HoudiniEngineUnity.JSONNode/HoudiniEngineUnity.Enumerator
  // [TokenAttribute] Offset: FFFFFFFF
  struct JSONNode::Enumerator/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::HoudiniEngineUnity::JSONNode::Enumerator::Type
    struct Type;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: HoudiniEngineUnity.JSONNode/HoudiniEngineUnity.Enumerator/HoudiniEngineUnity.Type
    // [TokenAttribute] Offset: FFFFFFFF
    struct Type/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Type
      constexpr Type(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public HoudiniEngineUnity.JSONNode/HoudiniEngineUnity.Enumerator/HoudiniEngineUnity.Type None
      static constexpr const int None = 0;
      // Get static field: static public HoudiniEngineUnity.JSONNode/HoudiniEngineUnity.Enumerator/HoudiniEngineUnity.Type None
      static ::HoudiniEngineUnity::JSONNode::Enumerator::Type _get_None();
      // Set static field: static public HoudiniEngineUnity.JSONNode/HoudiniEngineUnity.Enumerator/HoudiniEngineUnity.Type None
      static void _set_None(::HoudiniEngineUnity::JSONNode::Enumerator::Type value);
      // static field const value: static public HoudiniEngineUnity.JSONNode/HoudiniEngineUnity.Enumerator/HoudiniEngineUnity.Type Array
      static constexpr const int Array = 1;
      // Get static field: static public HoudiniEngineUnity.JSONNode/HoudiniEngineUnity.Enumerator/HoudiniEngineUnity.Type Array
      static ::HoudiniEngineUnity::JSONNode::Enumerator::Type _get_Array();
      // Set static field: static public HoudiniEngineUnity.JSONNode/HoudiniEngineUnity.Enumerator/HoudiniEngineUnity.Type Array
      static void _set_Array(::HoudiniEngineUnity::JSONNode::Enumerator::Type value);
      // static field const value: static public HoudiniEngineUnity.JSONNode/HoudiniEngineUnity.Enumerator/HoudiniEngineUnity.Type Object
      static constexpr const int Object = 2;
      // Get static field: static public HoudiniEngineUnity.JSONNode/HoudiniEngineUnity.Enumerator/HoudiniEngineUnity.Type Object
      static ::HoudiniEngineUnity::JSONNode::Enumerator::Type _get_Object();
      // Set static field: static public HoudiniEngineUnity.JSONNode/HoudiniEngineUnity.Enumerator/HoudiniEngineUnity.Type Object
      static void _set_Object(::HoudiniEngineUnity::JSONNode::Enumerator::Type value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // HoudiniEngineUnity.JSONNode/HoudiniEngineUnity.Enumerator/HoudiniEngineUnity.Type
    #pragma pack(pop)
    static check_size<sizeof(JSONNode::Enumerator::Type), 0 + sizeof(int)> __HoudiniEngineUnity_JSONNode_Enumerator_TypeSizeCheck;
    static_assert(sizeof(JSONNode::Enumerator::Type) == 0x4);
    public:
    // private HoudiniEngineUnity.JSONNode/HoudiniEngineUnity.Enumerator/HoudiniEngineUnity.Type type
    // Size: 0x4
    // Offset: 0x0
    ::HoudiniEngineUnity::JSONNode::Enumerator::Type type;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::JSONNode::Enumerator::Type) == 0x4);
    // private System.Collections.Generic.Dictionary`2/System.Collections.Generic.Enumerator<System.String,HoudiniEngineUnity.JSONNode> m_Object
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    typename ::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::JSONNode*>::Enumerator m_Object;
    // private System.Collections.Generic.List`1/System.Collections.Generic.Enumerator<HoudiniEngineUnity.JSONNode> m_Array
    // Size: 0xFFFFFFFF
    // Offset: 0x30
    typename ::System::Collections::Generic::List_1<::HoudiniEngineUnity::JSONNode*>::Enumerator m_Array;
    public:
    // Creating value type constructor for type: Enumerator
    constexpr Enumerator(::HoudiniEngineUnity::JSONNode::Enumerator::Type type_ = {}, typename ::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::JSONNode*>::Enumerator m_Object_ = {}, typename ::System::Collections::Generic::List_1<::HoudiniEngineUnity::JSONNode*>::Enumerator m_Array_ = {}) noexcept : type{type_}, m_Object{m_Object_}, m_Array{m_Array_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private HoudiniEngineUnity.JSONNode/HoudiniEngineUnity.Enumerator/HoudiniEngineUnity.Type type
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::JSONNode::Enumerator::Type& dyn_type();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2/System.Collections.Generic.Enumerator<System.String,HoudiniEngineUnity.JSONNode> m_Object
    [[deprecated("Use field access instead!")]] typename ::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::JSONNode*>::Enumerator& dyn_m_Object();
    // Get instance field reference: private System.Collections.Generic.List`1/System.Collections.Generic.Enumerator<HoudiniEngineUnity.JSONNode> m_Array
    [[deprecated("Use field access instead!")]] typename ::System::Collections::Generic::List_1<::HoudiniEngineUnity::JSONNode*>::Enumerator& dyn_m_Array();
    // public System.Boolean get_IsValid()
    // Offset: 0x1A64EB8
    bool get_IsValid();
    // public System.Collections.Generic.KeyValuePair`2<System.String,HoudiniEngineUnity.JSONNode> get_Current()
    // Offset: 0x1A64EEC
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*> get_Current();
    // public System.Void .ctor(System.Collections.Generic.List`1/System.Collections.Generic.Enumerator<HoudiniEngineUnity.JSONNode> aArrayEnum)
    // Offset: 0x1A5EE7C
    Enumerator(typename ::System::Collections::Generic::List_1<::HoudiniEngineUnity::JSONNode*>::Enumerator aArrayEnum);
    // public System.Void .ctor(System.Collections.Generic.Dictionary`2/System.Collections.Generic.Enumerator<System.String,HoudiniEngineUnity.JSONNode> aDictEnum)
    // Offset: 0x1A64EC8
    Enumerator(typename ::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::JSONNode*>::Enumerator aDictEnum);
    // public System.Boolean MoveNext()
    // Offset: 0x1A64FA0
    bool MoveNext();
  }; // HoudiniEngineUnity.JSONNode/HoudiniEngineUnity.Enumerator
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::JSONNode::Enumerator::Type, "HoudiniEngineUnity", "JSONNode/Enumerator/Type");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONNode::Enumerator::get_IsValid
// Il2CppName: get_IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::JSONNode::Enumerator::*)()>(&HoudiniEngineUnity::JSONNode::Enumerator::get_IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONNode::Enumerator), "get_IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONNode::Enumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*> (HoudiniEngineUnity::JSONNode::Enumerator::*)()>(&HoudiniEngineUnity::JSONNode::Enumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONNode::Enumerator), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONNode::Enumerator::Enumerator
// Il2CppName: .ctor
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONNode::Enumerator::Enumerator
// Il2CppName: .ctor
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
// Writing MetadataGetter for method: HoudiniEngineUnity::JSONNode::Enumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::JSONNode::Enumerator::*)()>(&HoudiniEngineUnity::JSONNode::Enumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::JSONNode::Enumerator), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
