// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <initializer_list>
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Mathf
  // [NativeHeaderAttribute] Offset: D8F87C
  // [NativeHeaderAttribute] Offset: D8F87C
  // [NativeHeaderAttribute] Offset: D8F87C
  // [NativeHeaderAttribute] Offset: D8F87C
  struct Mathf/*, public System::ValueType*/ {
    public:
    // Creating value type constructor for type: Mathf
    constexpr Mathf() noexcept {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get static field: static public readonly System.Single Epsilon
    static float _get_Epsilon();
    // Set static field: static public readonly System.Single Epsilon
    static void _set_Epsilon(float value);
    // static public System.Int32 NextPowerOfTwo(System.Int32 value)
    // Offset: 0x1C1064C
    static int NextPowerOfTwo(int value);
    // static public System.Single GammaToLinearSpace(System.Single value)
    // Offset: 0x1C1068C
    static float GammaToLinearSpace(float value);
    // static public System.Single LinearToGammaSpace(System.Single value)
    // Offset: 0x1C106D0
    static float LinearToGammaSpace(float value);
    // static public System.Single PerlinNoise(System.Single x, System.Single y)
    // Offset: 0x1C10714
    static float PerlinNoise(float x, float y);
    // static public System.Single Sin(System.Single f)
    // Offset: 0x1C10760
    static float Sin(float f);
    // static public System.Single Cos(System.Single f)
    // Offset: 0x1C107D4
    static float Cos(float f);
    // static public System.Single Tan(System.Single f)
    // Offset: 0x1C10848
    static float Tan(float f);
    // static public System.Single Asin(System.Single f)
    // Offset: 0x1C108BC
    static float Asin(float f);
    // static public System.Single Acos(System.Single f)
    // Offset: 0x1C10930
    static float Acos(float f);
    // static public System.Single Atan(System.Single f)
    // Offset: 0x1C109A4
    static float Atan(float f);
    // static public System.Single Atan2(System.Single y, System.Single x)
    // Offset: 0x1C10A18
    static float Atan2(float y, float x);
    // static public System.Single Sqrt(System.Single f)
    // Offset: 0x1C10A94
    static float Sqrt(float f);
    // static public System.Single Abs(System.Single f)
    // Offset: 0x1C10B1C
    static float Abs(float f);
    // static public System.Int32 Abs(System.Int32 value)
    // Offset: 0x1C10B88
    static int Abs(int value);
    // static public System.Single Min(System.Single a, System.Single b)
    // Offset: 0x1C10BF0
    static float Min(float a, float b);
    // static public System.Int32 Min(System.Int32 a, System.Int32 b)
    // Offset: 0x1C10BFC
    static int Min(int a, int b);
    // static public System.Single Max(System.Single a, System.Single b)
    // Offset: 0x1C10C08
    static float Max(float a, float b);
    // static public System.Single Max(params System.Single[] values)
    // Offset: 0x1C10C14
    static float Max(::Array<float>* values);
    // Creating initializer_list -> params proxy for: System.Single Max(params System.Single[] values)
    static float Max(std::initializer_list<float> values);
    // Creating TArgs -> initializer_list proxy for: System.Single Max(params System.Single[] values)
    template<class ...TParams>
    static float Max(TParams&&... values) {
      return Max({values...});
    }
    // static public System.Int32 Max(System.Int32 a, System.Int32 b)
    // Offset: 0x1C10C68
    static int Max(int a, int b);
    // static public System.Single Pow(System.Single f, System.Single p)
    // Offset: 0x1C10C74
    static float Pow(float f, float p);
    // static public System.Single Log(System.Single f, System.Single p)
    // Offset: 0x1C10CF4
    static float Log(float f, float p);
    // static public System.Single Log(System.Single f)
    // Offset: 0x1C10D74
    static float Log(float f);
    // static public System.Single Ceil(System.Single f)
    // Offset: 0x1C10DE8
    static float Ceil(float f);
    // static public System.Single Floor(System.Single f)
    // Offset: 0x1C10E54
    static float Floor(float f);
    // static public System.Single Round(System.Single f)
    // Offset: 0x1C10EC0
    static float Round(float f);
    // static public System.Int32 CeilToInt(System.Single f)
    // Offset: 0x1C10F98
    static int CeilToInt(float f);
    // static public System.Int32 FloorToInt(System.Single f)
    // Offset: 0x1C11004
    static int FloorToInt(float f);
    // static public System.Int32 RoundToInt(System.Single f)
    // Offset: 0x1C11070
    static int RoundToInt(float f);
    // static public System.Single Sign(System.Single f)
    // Offset: 0x1C11148
    static float Sign(float f);
    // static public System.Single Clamp(System.Single value, System.Single min, System.Single max)
    // Offset: 0x1C1115C
    static float Clamp(float value, float min, float max);
    // static public System.Int32 Clamp(System.Int32 value, System.Int32 min, System.Int32 max)
    // Offset: 0x1C11178
    static int Clamp(int value, int min, int max);
    // static public System.Single Clamp01(System.Single value)
    // Offset: 0x1C11194
    static float Clamp01(float value);
    // static public System.Single Lerp(System.Single a, System.Single b, System.Single t)
    // Offset: 0x1C111B0
    static float Lerp(float a, float b, float t);
    // static public System.Single LerpUnclamped(System.Single a, System.Single b, System.Single t)
    // Offset: 0x1C11248
    static float LerpUnclamped(float a, float b, float t);
    // static public System.Single LerpAngle(System.Single a, System.Single b, System.Single t)
    // Offset: 0x1C11258
    static float LerpAngle(float a, float b, float t);
    // static public System.Single MoveTowards(System.Single current, System.Single target, System.Single maxDelta)
    // Offset: 0x1C113C0
    static float MoveTowards(float current, float target, float maxDelta);
    // static public System.Boolean Approximately(System.Single a, System.Single b)
    // Offset: 0x1C1147C
    static bool Approximately(float a, float b);
    // static public System.Single SmoothDamp(System.Single current, System.Single target, ref System.Single currentVelocity, System.Single smoothTime)
    // Offset: 0x1C1152C
    static float SmoothDamp(float current, float target, float& currentVelocity, float smoothTime);
    // static public System.Single SmoothDamp(System.Single current, System.Single target, ref System.Single currentVelocity, System.Single smoothTime, System.Single maxSpeed, System.Single deltaTime)
    // Offset: 0x1C115D0
    static float SmoothDamp(float current, float target, float& currentVelocity, float smoothTime, float maxSpeed, float deltaTime);
    // static public System.Single Repeat(System.Single t, System.Single length)
    // Offset: 0x1C11330
    static float Repeat(float t, float length);
    // static public System.Single InverseLerp(System.Single a, System.Single b, System.Single value)
    // Offset: 0x1C11724
    static float InverseLerp(float a, float b, float value);
    // static public System.Single DeltaAngle(System.Single current, System.Single target)
    // Offset: 0x1C117C8
    static float DeltaAngle(float current, float target);
    // static private System.Void .cctor()
    // Offset: 0x1C11860
    static void _cctor();
  }; // UnityEngine.Mathf
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Mathf, "UnityEngine", "Mathf");
// Writing MetadataGetter for method: UnityEngine::Mathf::NextPowerOfTwo
// Il2CppName: NextPowerOfTwo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&UnityEngine::Mathf::NextPowerOfTwo)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "NextPowerOfTwo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::GammaToLinearSpace
// Il2CppName: GammaToLinearSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&UnityEngine::Mathf::GammaToLinearSpace)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "GammaToLinearSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::LinearToGammaSpace
// Il2CppName: LinearToGammaSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&UnityEngine::Mathf::LinearToGammaSpace)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "LinearToGammaSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::PerlinNoise
// Il2CppName: PerlinNoise
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float)>(&UnityEngine::Mathf::PerlinNoise)> {
  const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "PerlinNoise", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::Sin
// Il2CppName: Sin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&UnityEngine::Mathf::Sin)> {
  const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "Sin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::Cos
// Il2CppName: Cos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&UnityEngine::Mathf::Cos)> {
  const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "Cos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::Tan
// Il2CppName: Tan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&UnityEngine::Mathf::Tan)> {
  const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "Tan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::Asin
// Il2CppName: Asin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&UnityEngine::Mathf::Asin)> {
  const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "Asin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::Acos
// Il2CppName: Acos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&UnityEngine::Mathf::Acos)> {
  const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "Acos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::Atan
// Il2CppName: Atan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&UnityEngine::Mathf::Atan)> {
  const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "Atan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::Atan2
// Il2CppName: Atan2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float)>(&UnityEngine::Mathf::Atan2)> {
  const MethodInfo* get() {
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "Atan2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{y, x});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::Sqrt
// Il2CppName: Sqrt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&UnityEngine::Mathf::Sqrt)> {
  const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "Sqrt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::Abs
// Il2CppName: Abs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&UnityEngine::Mathf::Abs)> {
  const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "Abs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::Abs
// Il2CppName: Abs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&UnityEngine::Mathf::Abs)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "Abs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::Min
// Il2CppName: Min
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float)>(&UnityEngine::Mathf::Min)> {
  const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "Min", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::Min
// Il2CppName: Min
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&UnityEngine::Mathf::Min)> {
  const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "Min", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::Max
// Il2CppName: Max
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float)>(&UnityEngine::Mathf::Max)> {
  const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "Max", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::Max
// Il2CppName: Max
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::Array<float>*)>(&UnityEngine::Mathf::Max)> {
  const MethodInfo* get() {
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "Max", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::Max
// Il2CppName: Max
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&UnityEngine::Mathf::Max)> {
  const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "Max", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::Pow
// Il2CppName: Pow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float)>(&UnityEngine::Mathf::Pow)> {
  const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* p = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "Pow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f, p});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float)>(&UnityEngine::Mathf::Log)> {
  const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* p = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f, p});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&UnityEngine::Mathf::Log)> {
  const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::Ceil
// Il2CppName: Ceil
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&UnityEngine::Mathf::Ceil)> {
  const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "Ceil", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::Floor
// Il2CppName: Floor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&UnityEngine::Mathf::Floor)> {
  const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "Floor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::Round
// Il2CppName: Round
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&UnityEngine::Mathf::Round)> {
  const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "Round", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::CeilToInt
// Il2CppName: CeilToInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(float)>(&UnityEngine::Mathf::CeilToInt)> {
  const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "CeilToInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::FloorToInt
// Il2CppName: FloorToInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(float)>(&UnityEngine::Mathf::FloorToInt)> {
  const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "FloorToInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::RoundToInt
// Il2CppName: RoundToInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(float)>(&UnityEngine::Mathf::RoundToInt)> {
  const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "RoundToInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::Sign
// Il2CppName: Sign
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&UnityEngine::Mathf::Sign)> {
  const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "Sign", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::Clamp
// Il2CppName: Clamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&UnityEngine::Mathf::Clamp)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "Clamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, min, max});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::Clamp
// Il2CppName: Clamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int, int)>(&UnityEngine::Mathf::Clamp)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "Clamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, min, max});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::Clamp01
// Il2CppName: Clamp01
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&UnityEngine::Mathf::Clamp01)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "Clamp01", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::Lerp
// Il2CppName: Lerp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&UnityEngine::Mathf::Lerp)> {
  const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "Lerp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, t});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::LerpUnclamped
// Il2CppName: LerpUnclamped
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&UnityEngine::Mathf::LerpUnclamped)> {
  const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "LerpUnclamped", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, t});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::LerpAngle
// Il2CppName: LerpAngle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&UnityEngine::Mathf::LerpAngle)> {
  const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "LerpAngle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, t});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::MoveTowards
// Il2CppName: MoveTowards
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&UnityEngine::Mathf::MoveTowards)> {
  const MethodInfo* get() {
    static auto* current = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* maxDelta = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "MoveTowards", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{current, target, maxDelta});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::Approximately
// Il2CppName: Approximately
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float, float)>(&UnityEngine::Mathf::Approximately)> {
  const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "Approximately", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::SmoothDamp
// Il2CppName: SmoothDamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float&, float)>(&UnityEngine::Mathf::SmoothDamp)> {
  const MethodInfo* get() {
    static auto* current = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* currentVelocity = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* smoothTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "SmoothDamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{current, target, currentVelocity, smoothTime});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::SmoothDamp
// Il2CppName: SmoothDamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float&, float, float, float)>(&UnityEngine::Mathf::SmoothDamp)> {
  const MethodInfo* get() {
    static auto* current = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* currentVelocity = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* smoothTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* maxSpeed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "SmoothDamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{current, target, currentVelocity, smoothTime, maxSpeed, deltaTime});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::Repeat
// Il2CppName: Repeat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float)>(&UnityEngine::Mathf::Repeat)> {
  const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "Repeat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, length});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::InverseLerp
// Il2CppName: InverseLerp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&UnityEngine::Mathf::InverseLerp)> {
  const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "InverseLerp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::DeltaAngle
// Il2CppName: DeltaAngle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float)>(&UnityEngine::Mathf::DeltaAngle)> {
  const MethodInfo* get() {
    static auto* current = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), "DeltaAngle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{current, target});
  }
};
// Writing MetadataGetter for method: UnityEngine::Mathf::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Mathf::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Mathf), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
