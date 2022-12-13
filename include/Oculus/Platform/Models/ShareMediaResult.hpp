// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.ShareMediaStatus
#include "Oculus/Platform/ShareMediaStatus.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: ShareMediaResult
  class ShareMediaResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::ShareMediaResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::ShareMediaResult*, "Oculus.Platform.Models", "ShareMediaResult");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.ShareMediaResult
  // [TokenAttribute] Offset: FFFFFFFF
  class ShareMediaResult : public ::Il2CppObject {
    public:
    public:
    // public readonly Oculus.Platform.ShareMediaStatus Status
    // Size: 0x4
    // Offset: 0x10
    ::Oculus::Platform::ShareMediaStatus Status;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::ShareMediaStatus) == 0x4);
    public:
    // Creating conversion operator: operator ::Oculus::Platform::ShareMediaStatus
    constexpr operator ::Oculus::Platform::ShareMediaStatus() const noexcept {
      return Status;
    }
    // Get instance field reference: public readonly Oculus.Platform.ShareMediaStatus Status
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::ShareMediaStatus& dyn_Status();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x1A37D28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShareMediaResult* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::ShareMediaResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShareMediaResult*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.ShareMediaResult
  #pragma pack(pop)
  static check_size<sizeof(ShareMediaResult), 16 + sizeof(::Oculus::Platform::ShareMediaStatus)> __Oculus_Platform_Models_ShareMediaResultSizeCheck;
  static_assert(sizeof(ShareMediaResult) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::ShareMediaResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
