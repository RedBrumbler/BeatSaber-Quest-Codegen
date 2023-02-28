// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: GlyphValueRecord_Legacy
  struct GlyphValueRecord_Legacy;
}
// Forward declaring namespace: UnityEngine::TextCore::LowLevel
namespace UnityEngine::TextCore::LowLevel {
  // Forward declaring type: GlyphValueRecord
  struct GlyphValueRecord;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_GlyphValueRecord
  struct TMP_GlyphValueRecord;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_GlyphValueRecord, "TMPro", "TMP_GlyphValueRecord");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.TMP_GlyphValueRecord
  // [TokenAttribute] Offset: FFFFFFFF
  struct TMP_GlyphValueRecord/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Single m_XPlacement
    // Size: 0x4
    // Offset: 0x0
    float m_XPlacement;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_YPlacement
    // Size: 0x4
    // Offset: 0x4
    float m_YPlacement;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_XAdvance
    // Size: 0x4
    // Offset: 0x8
    float m_XAdvance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_YAdvance
    // Size: 0x4
    // Offset: 0xC
    float m_YAdvance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: TMP_GlyphValueRecord
    constexpr TMP_GlyphValueRecord(float m_XPlacement_ = {}, float m_YPlacement_ = {}, float m_XAdvance_ = {}, float m_YAdvance_ = {}) noexcept : m_XPlacement{m_XPlacement_}, m_YPlacement{m_YPlacement_}, m_XAdvance{m_XAdvance_}, m_YAdvance{m_YAdvance_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.Single m_XPlacement
    [[deprecated("Use field access instead!")]] float& dyn_m_XPlacement();
    // Get instance field reference: private System.Single m_YPlacement
    [[deprecated("Use field access instead!")]] float& dyn_m_YPlacement();
    // Get instance field reference: private System.Single m_XAdvance
    [[deprecated("Use field access instead!")]] float& dyn_m_XAdvance();
    // Get instance field reference: private System.Single m_YAdvance
    [[deprecated("Use field access instead!")]] float& dyn_m_YAdvance();
    // public System.Single get_xPlacement()
    // Offset: 0x14A88C4
    float get_xPlacement();
    // public System.Void set_xPlacement(System.Single value)
    // Offset: 0x14A88CC
    void set_xPlacement(float value);
    // public System.Single get_yPlacement()
    // Offset: 0x14A88D4
    float get_yPlacement();
    // public System.Void set_yPlacement(System.Single value)
    // Offset: 0x14A88DC
    void set_yPlacement(float value);
    // public System.Single get_xAdvance()
    // Offset: 0x14A88E4
    float get_xAdvance();
    // public System.Void set_xAdvance(System.Single value)
    // Offset: 0x14A88EC
    void set_xAdvance(float value);
    // public System.Single get_yAdvance()
    // Offset: 0x14A88F4
    float get_yAdvance();
    // public System.Void set_yAdvance(System.Single value)
    // Offset: 0x14A88FC
    void set_yAdvance(float value);
    // public System.Void .ctor(System.Single xPlacement, System.Single yPlacement, System.Single xAdvance, System.Single yAdvance)
    // Offset: 0x14A6F4C
    // ABORTED: conflicts with another method.  TMP_GlyphValueRecord(float xPlacement, float yPlacement, float xAdvance, float yAdvance);
    // System.Void .ctor(TMPro.GlyphValueRecord_Legacy valueRecord)
    // Offset: 0x14A8904
    TMP_GlyphValueRecord(::TMPro::GlyphValueRecord_Legacy valueRecord);
    // System.Void .ctor(UnityEngine.TextCore.LowLevel.GlyphValueRecord valueRecord)
    // Offset: 0x14A87F8
    TMP_GlyphValueRecord(::UnityEngine::TextCore::LowLevel::GlyphValueRecord valueRecord);
  }; // TMPro.TMP_GlyphValueRecord
  #pragma pack(pop)
  static check_size<sizeof(TMP_GlyphValueRecord), 12 + sizeof(float)> __TMPro_TMP_GlyphValueRecordSizeCheck;
  static_assert(sizeof(TMP_GlyphValueRecord) == 0x10);
  // static public TMPro.TMP_GlyphValueRecord op_Addition(TMPro.TMP_GlyphValueRecord a, TMPro.TMP_GlyphValueRecord b)
  // Offset: 0x14A8910
  ::TMPro::TMP_GlyphValueRecord operator+(const ::TMPro::TMP_GlyphValueRecord& a, const ::TMPro::TMP_GlyphValueRecord& b);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_GlyphValueRecord::get_xPlacement
// Il2CppName: get_xPlacement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (TMPro::TMP_GlyphValueRecord::*)()>(&TMPro::TMP_GlyphValueRecord::get_xPlacement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_GlyphValueRecord), "get_xPlacement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_GlyphValueRecord::set_xPlacement
// Il2CppName: set_xPlacement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_GlyphValueRecord::*)(float)>(&TMPro::TMP_GlyphValueRecord::set_xPlacement)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_GlyphValueRecord), "set_xPlacement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_GlyphValueRecord::get_yPlacement
// Il2CppName: get_yPlacement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (TMPro::TMP_GlyphValueRecord::*)()>(&TMPro::TMP_GlyphValueRecord::get_yPlacement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_GlyphValueRecord), "get_yPlacement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_GlyphValueRecord::set_yPlacement
// Il2CppName: set_yPlacement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_GlyphValueRecord::*)(float)>(&TMPro::TMP_GlyphValueRecord::set_yPlacement)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_GlyphValueRecord), "set_yPlacement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_GlyphValueRecord::get_xAdvance
// Il2CppName: get_xAdvance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (TMPro::TMP_GlyphValueRecord::*)()>(&TMPro::TMP_GlyphValueRecord::get_xAdvance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_GlyphValueRecord), "get_xAdvance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_GlyphValueRecord::set_xAdvance
// Il2CppName: set_xAdvance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_GlyphValueRecord::*)(float)>(&TMPro::TMP_GlyphValueRecord::set_xAdvance)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_GlyphValueRecord), "set_xAdvance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_GlyphValueRecord::get_yAdvance
// Il2CppName: get_yAdvance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (TMPro::TMP_GlyphValueRecord::*)()>(&TMPro::TMP_GlyphValueRecord::get_yAdvance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_GlyphValueRecord), "get_yAdvance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_GlyphValueRecord::set_yAdvance
// Il2CppName: set_yAdvance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_GlyphValueRecord::*)(float)>(&TMPro::TMP_GlyphValueRecord::set_yAdvance)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_GlyphValueRecord), "set_yAdvance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_GlyphValueRecord::TMP_GlyphValueRecord
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::TMP_GlyphValueRecord::TMP_GlyphValueRecord
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::TMP_GlyphValueRecord::TMP_GlyphValueRecord
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::TMP_GlyphValueRecord::operator+
// Il2CppName: op_Addition
// Cannot perform method pointer template specialization from operators!
