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
  // Forward declaring type: Destination
  class Destination;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::Destination);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::Destination*, "Oculus.Platform.Models", "Destination");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.Destination
  // [TokenAttribute] Offset: FFFFFFFF
  class Destination : public ::Il2CppObject {
    public:
    public:
    // public readonly System.String ApiName
    // Size: 0x8
    // Offset: 0x10
    ::StringW ApiName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.String DeeplinkMessage
    // Size: 0x8
    // Offset: 0x18
    ::StringW DeeplinkMessage;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.String DisplayName
    // Size: 0x8
    // Offset: 0x20
    ::StringW DisplayName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public readonly System.String ApiName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ApiName();
    // Get instance field reference: public readonly System.String DeeplinkMessage
    [[deprecated("Use field access instead!")]] ::StringW& dyn_DeeplinkMessage();
    // Get instance field reference: public readonly System.String DisplayName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_DisplayName();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x1A46CB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Destination* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::Destination::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Destination*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.Destination
  #pragma pack(pop)
  static check_size<sizeof(Destination), 32 + sizeof(::StringW)> __Oculus_Platform_Models_DestinationSizeCheck;
  static_assert(sizeof(Destination) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::Destination::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
