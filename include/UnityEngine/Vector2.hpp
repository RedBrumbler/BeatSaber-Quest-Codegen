// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Single
#include "System/Single.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Vector2
  // [RequiredByNativeCodeAttribute] Offset: D8F924
  // [NativeClassAttribute] Offset: D8F924
  // [DefaultMemberAttribute] Offset: D8F924
  struct Vector2/*, public System::ValueType, public System::IEquatable_1<UnityEngine::Vector2>*/ {
    public:
    // public System.Single x
    // Size: 0x4
    // Offset: 0x0
    float x;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single y
    // Size: 0x4
    // Offset: 0x4
    float y;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: Vector2
    constexpr Vector2(float x_ = {}, float y_ = {}) noexcept : x{x_}, y{y_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Vector2>
    operator System::IEquatable_1<UnityEngine::Vector2>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Vector2>*>(this);
    }
    // Get static field: static private readonly UnityEngine.Vector2 zeroVector
    static UnityEngine::Vector2 _get_zeroVector();
    // Set static field: static private readonly UnityEngine.Vector2 zeroVector
    static void _set_zeroVector(UnityEngine::Vector2 value);
    // Get static field: static private readonly UnityEngine.Vector2 oneVector
    static UnityEngine::Vector2 _get_oneVector();
    // Set static field: static private readonly UnityEngine.Vector2 oneVector
    static void _set_oneVector(UnityEngine::Vector2 value);
    // Get static field: static private readonly UnityEngine.Vector2 upVector
    static UnityEngine::Vector2 _get_upVector();
    // Set static field: static private readonly UnityEngine.Vector2 upVector
    static void _set_upVector(UnityEngine::Vector2 value);
    // Get static field: static private readonly UnityEngine.Vector2 downVector
    static UnityEngine::Vector2 _get_downVector();
    // Set static field: static private readonly UnityEngine.Vector2 downVector
    static void _set_downVector(UnityEngine::Vector2 value);
    // Get static field: static private readonly UnityEngine.Vector2 leftVector
    static UnityEngine::Vector2 _get_leftVector();
    // Set static field: static private readonly UnityEngine.Vector2 leftVector
    static void _set_leftVector(UnityEngine::Vector2 value);
    // Get static field: static private readonly UnityEngine.Vector2 rightVector
    static UnityEngine::Vector2 _get_rightVector();
    // Set static field: static private readonly UnityEngine.Vector2 rightVector
    static void _set_rightVector(UnityEngine::Vector2 value);
    // Get static field: static private readonly UnityEngine.Vector2 positiveInfinityVector
    static UnityEngine::Vector2 _get_positiveInfinityVector();
    // Set static field: static private readonly UnityEngine.Vector2 positiveInfinityVector
    static void _set_positiveInfinityVector(UnityEngine::Vector2 value);
    // Get static field: static private readonly UnityEngine.Vector2 negativeInfinityVector
    static UnityEngine::Vector2 _get_negativeInfinityVector();
    // Set static field: static private readonly UnityEngine.Vector2 negativeInfinityVector
    static void _set_negativeInfinityVector(UnityEngine::Vector2 value);
    // static field const value: static public System.Single kEpsilon
    static constexpr const float kEpsilon = 1e-05;
    // Get static field: static public System.Single kEpsilon
    static float _get_kEpsilon();
    // Set static field: static public System.Single kEpsilon
    static void _set_kEpsilon(float value);
    // static field const value: static public System.Single kEpsilonNormalSqrt
    static constexpr const float kEpsilonNormalSqrt = 1e-15;
    // Get static field: static public System.Single kEpsilonNormalSqrt
    static float _get_kEpsilonNormalSqrt();
    // Set static field: static public System.Single kEpsilonNormalSqrt
    static void _set_kEpsilonNormalSqrt(float value);
    // public System.Single get_Item(System.Int32 index)
    // Offset: 0xF19570
    float get_Item(int index);
    // public System.Void set_Item(System.Int32 index, System.Single value)
    // Offset: 0xF19578
    void set_Item(int index, float value);
    // public System.Void .ctor(System.Single x, System.Single y)
    // Offset: 0xF19580
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  Vector2(float x, float y)
    // static public UnityEngine.Vector2 Lerp(UnityEngine.Vector2 a, UnityEngine.Vector2 b, System.Single t)
    // Offset: 0x2321DB8
    static UnityEngine::Vector2 Lerp(UnityEngine::Vector2 a, UnityEngine::Vector2 b, float t);
    // static public UnityEngine.Vector2 Scale(UnityEngine.Vector2 a, UnityEngine.Vector2 b)
    // Offset: 0x2321E64
    static UnityEngine::Vector2 Scale(UnityEngine::Vector2 a, UnityEngine::Vector2 b);
    // public System.Void Scale(UnityEngine.Vector2 scale)
    // Offset: 0xF19588
    void Scale(UnityEngine::Vector2 scale);
    // public System.Void Normalize()
    // Offset: 0xF1959C
    void Normalize();
    // public UnityEngine.Vector2 get_normalized()
    // Offset: 0xF195A4
    UnityEngine::Vector2 get_normalized();
    // public System.String ToString(System.String format)
    // Offset: 0xF195D8
    ::Il2CppString* ToString(::Il2CppString* format);
    // public System.Boolean Equals(UnityEngine.Vector2 other)
    // Offset: 0xF19624
    bool Equals(UnityEngine::Vector2 other);
    // static public UnityEngine.Vector2 Perpendicular(UnityEngine.Vector2 inDirection)
    // Offset: 0x232240C
    static UnityEngine::Vector2 Perpendicular(UnityEngine::Vector2 inDirection);
    // static public System.Single Dot(UnityEngine.Vector2 lhs, UnityEngine.Vector2 rhs)
    // Offset: 0x2322420
    static float Dot(UnityEngine::Vector2 lhs, UnityEngine::Vector2 rhs);
    // public System.Single get_magnitude()
    // Offset: 0xF19648
    float get_magnitude();
    // public System.Single get_sqrMagnitude()
    // Offset: 0xF19650
    float get_sqrMagnitude();
    // static public System.Single Angle(UnityEngine.Vector2 from, UnityEngine.Vector2 to)
    // Offset: 0x2322444
    static float Angle(UnityEngine::Vector2 from, UnityEngine::Vector2 to);
    // static public System.Single SignedAngle(UnityEngine.Vector2 from, UnityEngine.Vector2 to)
    // Offset: 0x23225A0
    static float SignedAngle(UnityEngine::Vector2 from, UnityEngine::Vector2 to);
    // static public System.Single Distance(UnityEngine.Vector2 a, UnityEngine.Vector2 b)
    // Offset: 0x2322674
    static float Distance(UnityEngine::Vector2 a, UnityEngine::Vector2 b);
    // static public UnityEngine.Vector2 get_zero()
    // Offset: 0x2321FEC
    static UnityEngine::Vector2 get_zero();
    // static public UnityEngine.Vector2 get_one()
    // Offset: 0x2322854
    static UnityEngine::Vector2 get_one();
    // static public UnityEngine.Vector2 get_up()
    // Offset: 0x23228BC
    static UnityEngine::Vector2 get_up();
    // static public UnityEngine.Vector2 get_right()
    // Offset: 0x2322924
    static UnityEngine::Vector2 get_right();
    // static private System.Void .cctor()
    // Offset: 0x232298C
    static void _cctor();
    // public override System.String ToString()
    // Offset: 0xF195D0
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0xF195E0
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xF1961C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
  }; // UnityEngine.Vector2
  #pragma pack(pop)
  static check_size<sizeof(Vector2), 4 + sizeof(float)> __UnityEngine_Vector2SizeCheck;
  static_assert(sizeof(Vector2) == 0x8);
  // static public UnityEngine.Vector2 op_Addition(UnityEngine.Vector2 a, UnityEngine.Vector2 b)
  // Offset: 0x2322728
  UnityEngine::Vector2 operator+(const UnityEngine::Vector2& a, const UnityEngine::Vector2& b);
  // static public UnityEngine.Vector2 op_Subtraction(UnityEngine.Vector2 a, UnityEngine.Vector2 b)
  // Offset: 0x2322734
  UnityEngine::Vector2 operator-(const UnityEngine::Vector2& a, const UnityEngine::Vector2& b);
  // static public UnityEngine.Vector2 op_Multiply(UnityEngine.Vector2 a, UnityEngine.Vector2 b)
  // Offset: 0x2322740
  UnityEngine::Vector2 operator*(const UnityEngine::Vector2& a, const UnityEngine::Vector2& b);
  // static public UnityEngine.Vector2 op_Division(UnityEngine.Vector2 a, UnityEngine.Vector2 b)
  // Offset: 0x232274C
  UnityEngine::Vector2 operator/(const UnityEngine::Vector2& a, const UnityEngine::Vector2& b);
  // static public UnityEngine.Vector2 op_UnaryNegation(UnityEngine.Vector2 a)
  // Offset: 0x2322758
  UnityEngine::Vector2 operator-(const UnityEngine::Vector2& a);
  // static public UnityEngine.Vector2 op_Multiply(UnityEngine.Vector2 a, System.Single d)
  // Offset: 0x2322764
  UnityEngine::Vector2 operator*(const UnityEngine::Vector2& a, const float& d);
  // static public UnityEngine.Vector2 op_Multiply(System.Single d, UnityEngine.Vector2 a)
  // Offset: 0x2322770
  UnityEngine::Vector2 operator*(const float& d, const UnityEngine::Vector2& a);
  // static public UnityEngine.Vector2 op_Division(UnityEngine.Vector2 a, System.Single d)
  // Offset: 0x2321FE0
  UnityEngine::Vector2 operator/(const UnityEngine::Vector2& a, const float& d);
  // static public System.Boolean op_Equality(UnityEngine.Vector2 lhs, UnityEngine.Vector2 rhs)
  // Offset: 0x2322780
  bool operator ==(const UnityEngine::Vector2& lhs, const UnityEngine::Vector2& rhs);
  // static public System.Boolean op_Inequality(UnityEngine.Vector2 lhs, UnityEngine.Vector2 rhs)
  // Offset: 0x23227A8
  bool operator !=(const UnityEngine::Vector2& lhs, const UnityEngine::Vector2& rhs);
  // Writing MetadataGetter for method: Vector2::get_Item
  // Il2CppName: get_Item
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Vector2::*)(int)>(&Vector2::get_Item)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Vector2), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: Vector2::set_Item
  // Il2CppName: set_Item
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Vector2::*)(int, float)>(&Vector2::set_Item)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Vector2), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<float>()});
    }
  };
  // Writing MetadataGetter for method: Vector2::Vector2
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Vector2::*)(float, float)>(&Vector2::Vector2<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Vector2), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Vector2::*)(float, float)>(&Vector2::Vector2<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Vector2), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>()});
    }
  };
  // Writing MetadataGetter for method: Vector2::Lerp
  // Il2CppName: Lerp
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (*)(UnityEngine::Vector2, UnityEngine::Vector2, float)>(&Vector2::Lerp)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Vector2), "Lerp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector2>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector2>(), ::il2cpp_utils::ExtractIndependentType<float>()});
    }
  };
  // Writing MetadataGetter for method: Vector2::Scale
  // Il2CppName: Scale
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (*)(UnityEngine::Vector2, UnityEngine::Vector2)>(&Vector2::Scale)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Vector2), "Scale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector2>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector2>()});
    }
  };
  // Writing MetadataGetter for method: Vector2::Scale
  // Il2CppName: Scale
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Vector2::*)(UnityEngine::Vector2)>(&Vector2::Scale)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Vector2), "Scale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector2>()});
    }
  };
  // Writing MetadataGetter for method: Vector2::Normalize
  // Il2CppName: Normalize
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Vector2::*)()>(&Vector2::Normalize)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Vector2), "Normalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Vector2::get_normalized
  // Il2CppName: get_normalized
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (Vector2::*)()>(&Vector2::get_normalized)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Vector2), "get_normalized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Vector2::ToString
  // Il2CppName: ToString
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Vector2::*)(::Il2CppString*)>(&Vector2::ToString)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Vector2), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
    }
  };
  // Writing MetadataGetter for method: Vector2::Equals
  // Il2CppName: Equals
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Vector2::*)(UnityEngine::Vector2)>(&Vector2::Equals)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Vector2), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector2>()});
    }
  };
  // Writing MetadataGetter for method: Vector2::Perpendicular
  // Il2CppName: Perpendicular
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (*)(UnityEngine::Vector2)>(&Vector2::Perpendicular)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Vector2), "Perpendicular", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector2>()});
    }
  };
  // Writing MetadataGetter for method: Vector2::Dot
  // Il2CppName: Dot
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(UnityEngine::Vector2, UnityEngine::Vector2)>(&Vector2::Dot)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Vector2), "Dot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector2>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector2>()});
    }
  };
  // Writing MetadataGetter for method: Vector2::get_magnitude
  // Il2CppName: get_magnitude
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Vector2::*)()>(&Vector2::get_magnitude)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Vector2), "get_magnitude", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Vector2::get_sqrMagnitude
  // Il2CppName: get_sqrMagnitude
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Vector2::*)()>(&Vector2::get_sqrMagnitude)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Vector2), "get_sqrMagnitude", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Vector2::Angle
  // Il2CppName: Angle
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(UnityEngine::Vector2, UnityEngine::Vector2)>(&Vector2::Angle)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Vector2), "Angle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector2>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector2>()});
    }
  };
  // Writing MetadataGetter for method: Vector2::SignedAngle
  // Il2CppName: SignedAngle
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(UnityEngine::Vector2, UnityEngine::Vector2)>(&Vector2::SignedAngle)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Vector2), "SignedAngle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector2>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector2>()});
    }
  };
  // Writing MetadataGetter for method: Vector2::Distance
  // Il2CppName: Distance
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(UnityEngine::Vector2, UnityEngine::Vector2)>(&Vector2::Distance)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Vector2), "Distance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector2>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector2>()});
    }
  };
  // Writing MetadataGetter for method: Vector2::get_zero
  // Il2CppName: get_zero
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (*)()>(&Vector2::get_zero)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Vector2), "get_zero", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Vector2::get_one
  // Il2CppName: get_one
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (*)()>(&Vector2::get_one)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Vector2), "get_one", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Vector2::get_up
  // Il2CppName: get_up
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (*)()>(&Vector2::get_up)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Vector2), "get_up", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Vector2::get_right
  // Il2CppName: get_right
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (*)()>(&Vector2::get_right)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Vector2), "get_right", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Vector2::_cctor
  // Il2CppName: .cctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Vector2::_cctor)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Vector2), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Vector2::ToString
  // Il2CppName: ToString
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Vector2::*)()>(&Vector2::ToString)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Vector2), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Vector2::GetHashCode
  // Il2CppName: GetHashCode
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Vector2::*)()>(&Vector2::GetHashCode)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Vector2), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Vector2::Equals
  // Il2CppName: Equals
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Vector2::*)(::Il2CppObject*)>(&Vector2::Equals)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Vector2), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
    }
  };
  // Writing MetadataGetter for method: Vector2::operator+
  // Il2CppName: op_Addition
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (*)(const UnityEngine::Vector2&, const UnityEngine::Vector2&)>(&Vector2::operator+)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Vector2), "op_Addition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<const UnityEngine::Vector2&>(), ::il2cpp_utils::ExtractIndependentType<const UnityEngine::Vector2&>()});
    }
  };
  // Writing MetadataGetter for method: Vector2::operator-
  // Il2CppName: op_Subtraction
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (*)(const UnityEngine::Vector2&, const UnityEngine::Vector2&)>(&Vector2::operator-)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Vector2), "op_Subtraction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<const UnityEngine::Vector2&>(), ::il2cpp_utils::ExtractIndependentType<const UnityEngine::Vector2&>()});
    }
  };
  // Writing MetadataGetter for method: Vector2::operator*
  // Il2CppName: op_Multiply
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (*)(const UnityEngine::Vector2&, const UnityEngine::Vector2&)>(&Vector2::operator*)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Vector2), "op_Multiply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<const UnityEngine::Vector2&>(), ::il2cpp_utils::ExtractIndependentType<const UnityEngine::Vector2&>()});
    }
  };
  // Writing MetadataGetter for method: Vector2::operator/
  // Il2CppName: op_Division
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (*)(const UnityEngine::Vector2&, const UnityEngine::Vector2&)>(&Vector2::operator/)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Vector2), "op_Division", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<const UnityEngine::Vector2&>(), ::il2cpp_utils::ExtractIndependentType<const UnityEngine::Vector2&>()});
    }
  };
  // Writing MetadataGetter for method: Vector2::operator-
  // Il2CppName: op_UnaryNegation
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (*)(const UnityEngine::Vector2&)>(&Vector2::operator-)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Vector2), "op_UnaryNegation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<const UnityEngine::Vector2&>()});
    }
  };
  // Writing MetadataGetter for method: Vector2::operator*
  // Il2CppName: op_Multiply
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (*)(const UnityEngine::Vector2&, const float&)>(&Vector2::operator*)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Vector2), "op_Multiply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<const UnityEngine::Vector2&>(), ::il2cpp_utils::ExtractIndependentType<const float&>()});
    }
  };
  // Writing MetadataGetter for method: Vector2::operator*
  // Il2CppName: op_Multiply
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (*)(const float&, const UnityEngine::Vector2&)>(&Vector2::operator*)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Vector2), "op_Multiply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<const float&>(), ::il2cpp_utils::ExtractIndependentType<const UnityEngine::Vector2&>()});
    }
  };
  // Writing MetadataGetter for method: Vector2::operator/
  // Il2CppName: op_Division
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (*)(const UnityEngine::Vector2&, const float&)>(&Vector2::operator/)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Vector2), "op_Division", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<const UnityEngine::Vector2&>(), ::il2cpp_utils::ExtractIndependentType<const float&>()});
    }
  };
  // Writing MetadataGetter for method: Vector2::operator ==
  // Il2CppName: op_Equality
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(const UnityEngine::Vector2&, const UnityEngine::Vector2&)>(&Vector2::operator ==)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Vector2), "op_Equality", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<const UnityEngine::Vector2&>(), ::il2cpp_utils::ExtractIndependentType<const UnityEngine::Vector2&>()});
    }
  };
  // Writing MetadataGetter for method: Vector2::operator !=
  // Il2CppName: op_Inequality
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(const UnityEngine::Vector2&, const UnityEngine::Vector2&)>(&Vector2::operator !=)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Vector2), "op_Inequality", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<const UnityEngine::Vector2&>(), ::il2cpp_utils::ExtractIndependentType<const UnityEngine::Vector2&>()});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Vector2, "UnityEngine", "Vector2");
