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
  // Forward declaring type: AssetFileDownloadCancelResult
  class AssetFileDownloadCancelResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::AssetFileDownloadCancelResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::AssetFileDownloadCancelResult*, "Oculus.Platform.Models", "AssetFileDownloadCancelResult");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.AssetFileDownloadCancelResult
  // [TokenAttribute] Offset: FFFFFFFF
  class AssetFileDownloadCancelResult : public ::Il2CppObject {
    public:
    public:
    // public readonly System.UInt64 AssetFileId
    // Size: 0x8
    // Offset: 0x10
    uint64_t AssetFileId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly System.UInt64 AssetId
    // Size: 0x8
    // Offset: 0x18
    uint64_t AssetId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly System.String Filepath
    // Size: 0x8
    // Offset: 0x20
    ::StringW Filepath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.Boolean Success
    // Size: 0x1
    // Offset: 0x28
    bool Success;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public readonly System.UInt64 AssetFileId
    [[deprecated("Use field access instead!")]] uint64_t& dyn_AssetFileId();
    // Get instance field reference: public readonly System.UInt64 AssetId
    [[deprecated("Use field access instead!")]] uint64_t& dyn_AssetId();
    // Get instance field reference: public readonly System.String Filepath
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Filepath();
    // Get instance field reference: public readonly System.Boolean Success
    [[deprecated("Use field access instead!")]] bool& dyn_Success();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x1A2F984
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssetFileDownloadCancelResult* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::AssetFileDownloadCancelResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssetFileDownloadCancelResult*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.AssetFileDownloadCancelResult
  #pragma pack(pop)
  static check_size<sizeof(AssetFileDownloadCancelResult), 40 + sizeof(bool)> __Oculus_Platform_Models_AssetFileDownloadCancelResultSizeCheck;
  static_assert(sizeof(AssetFileDownloadCancelResult) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::AssetFileDownloadCancelResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
