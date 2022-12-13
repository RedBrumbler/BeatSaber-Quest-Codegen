// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Single
#include "System/Single.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: UnwrapParameters
  class UnwrapParameters;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::UnwrapParameters);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::UnwrapParameters*, "UnityEngine.ProBuilder", "UnwrapParameters");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.UnwrapParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class UnwrapParameters : public ::Il2CppObject {
    public:
    public:
    // [TooltipAttribute] Offset: 0x1152F40
    // [RangeAttribute] Offset: 0x1152F40
    // [FormerlySerializedAsAttribute] Offset: 0x1152F40
    // private System.Single m_HardAngle
    // Size: 0x4
    // Offset: 0x10
    float m_HardAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x1152FCC
    // [RangeAttribute] Offset: 0x1152FCC
    // [FormerlySerializedAsAttribute] Offset: 0x1152FCC
    // private System.Single m_PackMargin
    // Size: 0x4
    // Offset: 0x14
    float m_PackMargin;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x1153058
    // [RangeAttribute] Offset: 0x1153058
    // [FormerlySerializedAsAttribute] Offset: 0x1153058
    // private System.Single m_AngleError
    // Size: 0x4
    // Offset: 0x18
    float m_AngleError;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0x11530E4
    // [FormerlySerializedAsAttribute] Offset: 0x11530E4
    // private System.Single m_AreaError
    // Size: 0x4
    // Offset: 0x1C
    float m_AreaError;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // static field const value: static System.Single k_HardAngle
    static constexpr const float k_HardAngle = 88;
    // Get static field: static System.Single k_HardAngle
    static float _get_k_HardAngle();
    // Set static field: static System.Single k_HardAngle
    static void _set_k_HardAngle(float value);
    // static field const value: static System.Single k_PackMargin
    static constexpr const float k_PackMargin = 20;
    // Get static field: static System.Single k_PackMargin
    static float _get_k_PackMargin();
    // Set static field: static System.Single k_PackMargin
    static void _set_k_PackMargin(float value);
    // static field const value: static System.Single k_AngleError
    static constexpr const float k_AngleError = 8;
    // Get static field: static System.Single k_AngleError
    static float _get_k_AngleError();
    // Set static field: static System.Single k_AngleError
    static void _set_k_AngleError(float value);
    // static field const value: static System.Single k_AreaError
    static constexpr const float k_AreaError = 15;
    // Get static field: static System.Single k_AreaError
    static float _get_k_AreaError();
    // Set static field: static System.Single k_AreaError
    static void _set_k_AreaError(float value);
    // Get instance field reference: private System.Single m_HardAngle
    [[deprecated("Use field access instead!")]] float& dyn_m_HardAngle();
    // Get instance field reference: private System.Single m_PackMargin
    [[deprecated("Use field access instead!")]] float& dyn_m_PackMargin();
    // Get instance field reference: private System.Single m_AngleError
    [[deprecated("Use field access instead!")]] float& dyn_m_AngleError();
    // Get instance field reference: private System.Single m_AreaError
    [[deprecated("Use field access instead!")]] float& dyn_m_AreaError();
    // public System.Single get_hardAngle()
    // Offset: 0x2A1BB00
    float get_hardAngle();
    // public System.Void set_hardAngle(System.Single value)
    // Offset: 0x2A1BB08
    void set_hardAngle(float value);
    // public System.Single get_packMargin()
    // Offset: 0x2A1BB10
    float get_packMargin();
    // public System.Void set_packMargin(System.Single value)
    // Offset: 0x2A1BB18
    void set_packMargin(float value);
    // public System.Single get_angleError()
    // Offset: 0x2A1BB20
    float get_angleError();
    // public System.Void set_angleError(System.Single value)
    // Offset: 0x2A1BB28
    void set_angleError(float value);
    // public System.Single get_areaError()
    // Offset: 0x2A1BB30
    float get_areaError();
    // public System.Void set_areaError(System.Single value)
    // Offset: 0x2A1BB38
    void set_areaError(float value);
    // public System.Void .ctor()
    // Offset: 0x2A1BB40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnwrapParameters* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::UnwrapParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnwrapParameters*, creationType>()));
    }
    // public System.Void .ctor(UnityEngine.ProBuilder.UnwrapParameters other)
    // Offset: 0x2A1BB94
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnwrapParameters* New_ctor(::UnityEngine::ProBuilder::UnwrapParameters* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::UnwrapParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnwrapParameters*, creationType>(other)));
    }
    // public System.Void Reset()
    // Offset: 0x2A1BB84
    void Reset();
    // public override System.String ToString()
    // Offset: 0x2A1BC58
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // UnityEngine.ProBuilder.UnwrapParameters
  #pragma pack(pop)
  static check_size<sizeof(UnwrapParameters), 28 + sizeof(float)> __UnityEngine_ProBuilder_UnwrapParametersSizeCheck;
  static_assert(sizeof(UnwrapParameters) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::UnwrapParameters::get_hardAngle
// Il2CppName: get_hardAngle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ProBuilder::UnwrapParameters::*)()>(&UnityEngine::ProBuilder::UnwrapParameters::get_hardAngle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::UnwrapParameters*), "get_hardAngle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::UnwrapParameters::set_hardAngle
// Il2CppName: set_hardAngle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::UnwrapParameters::*)(float)>(&UnityEngine::ProBuilder::UnwrapParameters::set_hardAngle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::UnwrapParameters*), "set_hardAngle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::UnwrapParameters::get_packMargin
// Il2CppName: get_packMargin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ProBuilder::UnwrapParameters::*)()>(&UnityEngine::ProBuilder::UnwrapParameters::get_packMargin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::UnwrapParameters*), "get_packMargin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::UnwrapParameters::set_packMargin
// Il2CppName: set_packMargin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::UnwrapParameters::*)(float)>(&UnityEngine::ProBuilder::UnwrapParameters::set_packMargin)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::UnwrapParameters*), "set_packMargin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::UnwrapParameters::get_angleError
// Il2CppName: get_angleError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ProBuilder::UnwrapParameters::*)()>(&UnityEngine::ProBuilder::UnwrapParameters::get_angleError)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::UnwrapParameters*), "get_angleError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::UnwrapParameters::set_angleError
// Il2CppName: set_angleError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::UnwrapParameters::*)(float)>(&UnityEngine::ProBuilder::UnwrapParameters::set_angleError)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::UnwrapParameters*), "set_angleError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::UnwrapParameters::get_areaError
// Il2CppName: get_areaError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ProBuilder::UnwrapParameters::*)()>(&UnityEngine::ProBuilder::UnwrapParameters::get_areaError)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::UnwrapParameters*), "get_areaError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::UnwrapParameters::set_areaError
// Il2CppName: set_areaError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::UnwrapParameters::*)(float)>(&UnityEngine::ProBuilder::UnwrapParameters::set_areaError)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::UnwrapParameters*), "set_areaError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::UnwrapParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::UnwrapParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::UnwrapParameters::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::UnwrapParameters::*)()>(&UnityEngine::ProBuilder::UnwrapParameters::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::UnwrapParameters*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::UnwrapParameters::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ProBuilder::UnwrapParameters::*)()>(&UnityEngine::ProBuilder::UnwrapParameters::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::UnwrapParameters*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
