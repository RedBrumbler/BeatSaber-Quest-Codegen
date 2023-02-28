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
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Pose
  struct Pose;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Pose, "UnityEngine", "Pose");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x1C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Pose
  // [TokenAttribute] Offset: FFFFFFFF
  struct Pose/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::Pose>*/ {
    public:
    public:
    // public UnityEngine.Vector3 position
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion rotation
    // Size: 0x10
    // Offset: 0xC
    ::UnityEngine::Quaternion rotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    public:
    // Creating value type constructor for type: Pose
    constexpr Pose(::UnityEngine::Vector3 position_ = {}, ::UnityEngine::Quaternion rotation_ = {}) noexcept : position{position_}, rotation{rotation_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::Pose>
    operator ::System::IEquatable_1<::UnityEngine::Pose>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::Pose>*>(this);
    }
    // Creating interface conversion operator: i_Pose
    inline ::System::IEquatable_1<::UnityEngine::Pose>* i_Pose() noexcept {
      return reinterpret_cast<::System::IEquatable_1<::UnityEngine::Pose>*>(this);
    }
    // Get static field: static private readonly UnityEngine.Pose k_Identity
    static ::UnityEngine::Pose _get_k_Identity();
    // Set static field: static private readonly UnityEngine.Pose k_Identity
    static void _set_k_Identity(::UnityEngine::Pose value);
    // Get instance field reference: public UnityEngine.Vector3 position
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_position();
    // Get instance field reference: public UnityEngine.Quaternion rotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_rotation();
    // public UnityEngine.Vector3 get_forward()
    // Offset: 0x2160BCC
    ::UnityEngine::Vector3 get_forward();
    // public System.Void .ctor(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
    // Offset: 0x2160918
    // ABORTED: conflicts with another method.  Pose(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);
    // static private System.Void .cctor()
    // Offset: 0x2161080
    static void _cctor();
    // public System.Boolean Equals(UnityEngine.Pose other)
    // Offset: 0x2160DE8
    bool Equals(::UnityEngine::Pose other);
    // public override System.String ToString()
    // Offset: 0x216092C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x2160D48
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x2160FE4
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.Pose
  #pragma pack(pop)
  static check_size<sizeof(Pose), 12 + sizeof(::UnityEngine::Quaternion)> __UnityEngine_PoseSizeCheck;
  static_assert(sizeof(Pose) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Pose::get_forward
// Il2CppName: get_forward
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::Pose::*)()>(&UnityEngine::Pose::get_forward)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Pose), "get_forward", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Pose::Pose
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Pose::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Pose::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Pose), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Pose::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Pose::*)(::UnityEngine::Pose)>(&UnityEngine::Pose::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Pose), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Pose::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Pose::*)()>(&UnityEngine::Pose::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Pose), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Pose::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Pose::*)(::Il2CppObject*)>(&UnityEngine::Pose::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Pose), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::Pose::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Pose::*)()>(&UnityEngine::Pose::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Pose), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
