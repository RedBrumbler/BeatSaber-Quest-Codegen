// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: SFB
namespace SFB {
  // Forward declaring type: ExtensionFilter
  struct ExtensionFilter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::SFB::ExtensionFilter, "SFB", "ExtensionFilter");
// Type namespace: SFB
namespace SFB {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: SFB.ExtensionFilter
  // [TokenAttribute] Offset: FFFFFFFF
  struct ExtensionFilter/*, public ::System::ValueType*/ {
    public:
    public:
    // public readonly System.String _name
    // Size: 0x8
    // Offset: 0x0
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.String[] _extensions
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<::StringW> extensions;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    public:
    // Creating value type constructor for type: ExtensionFilter
    constexpr ExtensionFilter(::StringW name_ = {}, ::ArrayW<::StringW> extensions_ = ::ArrayW<::StringW>(static_cast<void*>(nullptr))) noexcept : name{name_}, extensions{extensions_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public readonly System.String _name
    [[deprecated("Use field access instead!")]] ::StringW& dyn__name();
    // Get instance field reference: public readonly System.String[] _extensions
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn__extensions();
    // public System.Void .ctor(System.String filterName, params System.String[] filterExtensions)
    // Offset: 0x1469164
    // ABORTED: conflicts with another method.  ExtensionFilter(::StringW filterName, ::ArrayW<::StringW> filterExtensions);
  }; // SFB.ExtensionFilter
  #pragma pack(pop)
  static check_size<sizeof(ExtensionFilter), 8 + sizeof(::ArrayW<::StringW>)> __SFB_ExtensionFilterSizeCheck;
  static_assert(sizeof(ExtensionFilter) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: SFB::ExtensionFilter::ExtensionFilter
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
