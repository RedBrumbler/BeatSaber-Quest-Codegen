// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: LineInfo
  struct LineInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::LineInfo, "System.Xml", "LineInfo");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Xml.LineInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct LineInfo/*, public ::System::ValueType*/ {
    public:
    public:
    // System.Int32 lineNo
    // Size: 0x4
    // Offset: 0x0
    int lineNo;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 linePos
    // Size: 0x4
    // Offset: 0x4
    int linePos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: LineInfo
    constexpr LineInfo(int lineNo_ = {}, int linePos_ = {}) noexcept : lineNo{lineNo_}, linePos{linePos_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: System.Int32 lineNo
    [[deprecated("Use field access instead!")]] int& dyn_lineNo();
    // Get instance field reference: System.Int32 linePos
    [[deprecated("Use field access instead!")]] int& dyn_linePos();
    // public System.Void .ctor(System.Int32 lineNo, System.Int32 linePos)
    // Offset: 0x1AFCD60
    // ABORTED: conflicts with another method.  LineInfo(int lineNo, int linePos);
    // public System.Void Set(System.Int32 lineNo, System.Int32 linePos)
    // Offset: 0x1B06268
    void Set(int lineNo, int linePos);
  }; // System.Xml.LineInfo
  #pragma pack(pop)
  static check_size<sizeof(LineInfo), 4 + sizeof(int)> __System_Xml_LineInfoSizeCheck;
  static_assert(sizeof(LineInfo) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::LineInfo::LineInfo
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::LineInfo::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::LineInfo::*)(int, int)>(&System::Xml::LineInfo::Set)> {
  static const MethodInfo* get() {
    static auto* lineNo = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* linePos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::LineInfo), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lineNo, linePos});
  }
};
