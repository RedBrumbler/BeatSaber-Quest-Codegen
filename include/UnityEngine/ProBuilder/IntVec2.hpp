// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: IntVec2
  struct IntVec2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::IntVec2, "UnityEngine.ProBuilder", "IntVec2");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ProBuilder.IntVec2
  // [TokenAttribute] Offset: FFFFFFFF
  struct IntVec2/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec2>*/ {
    public:
    public:
    // public UnityEngine.Vector2 value
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Vector2 value;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    public:
    // Creating value type constructor for type: IntVec2
    constexpr IntVec2(::UnityEngine::Vector2 value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec2>
    operator ::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec2>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec2>*>(this);
    }
    // Creating interface conversion operator: i_IntVec2
    inline ::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec2>* i_IntVec2() noexcept {
      return reinterpret_cast<::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec2>*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::Vector2
    constexpr operator ::UnityEngine::Vector2() const noexcept {
      return value;
    }
    // Get instance field reference: public UnityEngine.Vector2 value
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_value();
    // public System.Single get_x()
    // Offset: 0x2093790
    float get_x();
    // public System.Single get_y()
    // Offset: 0x2093798
    float get_y();
    // public System.Void .ctor(UnityEngine.Vector2 vector)
    // Offset: 0x20937A0
    // ABORTED: conflicts with another method.  IntVec2(::UnityEngine::Vector2 vector);
    // public System.Boolean Equals(UnityEngine.ProBuilder.IntVec2 p)
    // Offset: 0x2093874
    bool Equals(::UnityEngine::ProBuilder::IntVec2 p);
    // public System.Boolean Equals(UnityEngine.Vector2 p)
    // Offset: 0x2093990
    bool Equals(::UnityEngine::Vector2 p);
    // static private System.Int32 round(System.Single v)
    // Offset: 0x2093918
    static int round(float v);
    // public override System.String ToString()
    // Offset: 0x20937A8
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Boolean Equals(System.Object b)
    // Offset: 0x2093A00
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object b)
    bool Equals(::Il2CppObject* b);
    // public override System.Int32 GetHashCode()
    // Offset: 0x2093AC4
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.ProBuilder.IntVec2
  #pragma pack(pop)
  static check_size<sizeof(IntVec2), 0 + sizeof(::UnityEngine::Vector2)> __UnityEngine_ProBuilder_IntVec2SizeCheck;
  static_assert(sizeof(IntVec2) == 0x8);
  // static public System.Boolean op_Equality(UnityEngine.ProBuilder.IntVec2 a, UnityEngine.ProBuilder.IntVec2 b)
  // Offset: 0x2093844
  bool operator ==(const ::UnityEngine::ProBuilder::IntVec2& a, const ::UnityEngine::ProBuilder::IntVec2& b);
  // static public System.Boolean op_Inequality(UnityEngine.ProBuilder.IntVec2 a, UnityEngine.ProBuilder.IntVec2 b)
  // Offset: 0x20938E4
  bool operator !=(const ::UnityEngine::ProBuilder::IntVec2& a, const ::UnityEngine::ProBuilder::IntVec2& b);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::IntVec2::get_x
// Il2CppName: get_x
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ProBuilder::IntVec2::*)()>(&UnityEngine::ProBuilder::IntVec2::get_x)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::IntVec2), "get_x", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::IntVec2::get_y
// Il2CppName: get_y
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ProBuilder::IntVec2::*)()>(&UnityEngine::ProBuilder::IntVec2::get_y)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::IntVec2), "get_y", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::IntVec2::IntVec2
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::IntVec2::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::IntVec2::*)(::UnityEngine::ProBuilder::IntVec2)>(&UnityEngine::ProBuilder::IntVec2::Equals)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "IntVec2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::IntVec2), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::IntVec2::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::IntVec2::*)(::UnityEngine::Vector2)>(&UnityEngine::ProBuilder::IntVec2::Equals)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::IntVec2), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::IntVec2::round
// Il2CppName: round
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(float)>(&UnityEngine::ProBuilder::IntVec2::round)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::IntVec2), "round", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::IntVec2::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ProBuilder::IntVec2::*)()>(&UnityEngine::ProBuilder::IntVec2::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::IntVec2), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::IntVec2::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::IntVec2::*)(::Il2CppObject*)>(&UnityEngine::ProBuilder::IntVec2::Equals)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::IntVec2), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::IntVec2::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::IntVec2::*)()>(&UnityEngine::ProBuilder::IntVec2::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::IntVec2), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::IntVec2::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::IntVec2::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
