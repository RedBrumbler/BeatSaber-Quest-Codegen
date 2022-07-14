// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Forward declaring type: SDKResolution
  struct SDKResolution;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKResolution, "LIV.SDK.Unity", "SDKResolution");
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: LIV.SDK.Unity.SDKResolution
  // [TokenAttribute] Offset: FFFFFFFF
  struct SDKResolution/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 width
    // Size: 0x4
    // Offset: 0x0
    int width;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 height
    // Size: 0x4
    // Offset: 0x4
    int height;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SDKResolution
    constexpr SDKResolution(int width_ = {}, int height_ = {}) noexcept : width{width_}, height{height_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 width
    [[deprecated("Use field access instead!")]] int& dyn_width();
    // Get instance field reference: public System.Int32 height
    [[deprecated("Use field access instead!")]] int& dyn_height();
    // static public LIV.SDK.Unity.SDKResolution get_zero()
    // Offset: 0x2A625B8
    static ::LIV::SDK::Unity::SDKResolution get_zero();
    // public override System.String ToString()
    // Offset: 0x2A687C0
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // LIV.SDK.Unity.SDKResolution
  #pragma pack(pop)
  static check_size<sizeof(SDKResolution), 4 + sizeof(int)> __LIV_SDK_Unity_SDKResolutionSizeCheck;
  static_assert(sizeof(SDKResolution) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKResolution::get_zero
// Il2CppName: get_zero
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKResolution (*)()>(&LIV::SDK::Unity::SDKResolution::get_zero)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKResolution), "get_zero", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKResolution::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (LIV::SDK::Unity::SDKResolution::*)()>(&LIV::SDK::Unity::SDKResolution::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKResolution), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};