// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: LanguagePackInfo
  class LanguagePackInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::LanguagePackInfo);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LanguagePackInfo*, "Oculus.Platform.Models", "LanguagePackInfo");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.LanguagePackInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class LanguagePackInfo : public ::Il2CppObject {
    public:
    public:
    // public readonly System.String EnglishName
    // Size: 0x8
    // Offset: 0x10
    ::StringW EnglishName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.String NativeName
    // Size: 0x8
    // Offset: 0x18
    ::StringW NativeName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.String Tag
    // Size: 0x8
    // Offset: 0x20
    ::StringW Tag;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public readonly System.String EnglishName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_EnglishName();
    // Get instance field reference: public readonly System.String NativeName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_NativeName();
    // Get instance field reference: public readonly System.String Tag
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Tag();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x1A38A20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LanguagePackInfo* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::LanguagePackInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LanguagePackInfo*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.LanguagePackInfo
  #pragma pack(pop)
  static check_size<sizeof(LanguagePackInfo), 32 + sizeof(::StringW)> __Oculus_Platform_Models_LanguagePackInfoSizeCheck;
  static_assert(sizeof(LanguagePackInfo) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::LanguagePackInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
