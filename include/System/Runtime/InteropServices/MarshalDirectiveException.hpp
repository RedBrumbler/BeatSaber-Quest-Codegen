// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.SystemException
#include "System/SystemException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: MarshalDirectiveException
  class MarshalDirectiveException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::InteropServices::MarshalDirectiveException);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::MarshalDirectiveException*, "System.Runtime.InteropServices", "MarshalDirectiveException");
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.InteropServices.MarshalDirectiveException
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 107F3CC
  class MarshalDirectiveException : public ::System::SystemException {
    public:
    // public System.Void .ctor()
    // Offset: 0x1E50420
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MarshalDirectiveException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::InteropServices::MarshalDirectiveException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MarshalDirectiveException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x1E50494
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MarshalDirectiveException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::InteropServices::MarshalDirectiveException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MarshalDirectiveException*, creationType>(message)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1E504C8
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MarshalDirectiveException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::InteropServices::MarshalDirectiveException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MarshalDirectiveException*, creationType>(info, context)));
    }
  }; // System.Runtime.InteropServices.MarshalDirectiveException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::InteropServices::MarshalDirectiveException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::InteropServices::MarshalDirectiveException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::InteropServices::MarshalDirectiveException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
