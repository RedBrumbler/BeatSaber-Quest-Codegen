// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ArithmeticException
#include "System/ArithmeticException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Exception because it is already included!
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: OverflowException
  class OverflowException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::OverflowException);
DEFINE_IL2CPP_ARG_TYPE(::System::OverflowException*, "System", "OverflowException");
// Type namespace: System
namespace System {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: System.OverflowException
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 107A7C0
  class OverflowException : public ::System::ArithmeticException {
    public:
    // public System.Void .ctor()
    // Offset: 0x22D7264
    // Implemented from: System.ArithmeticException
    // Base method: System.Void ArithmeticException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OverflowException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::OverflowException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OverflowException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x22D72D8
    // Implemented from: System.ArithmeticException
    // Base method: System.Void ArithmeticException::.ctor(System.String message)
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OverflowException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::OverflowException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OverflowException*, creationType>(message)));
    }
    // public System.Void .ctor(System.String message, System.Exception innerException)
    // Offset: 0x22D730C
    // Implemented from: System.ArithmeticException
    // Base method: System.Void ArithmeticException::.ctor(System.String message, System.Exception innerException)
    // Base method: System.Void SystemException::.ctor(System.String message, System.Exception innerException)
    // Base method: System.Void Exception::.ctor(System.String message, System.Exception innerException)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OverflowException* New_ctor(::StringW message, ::System::Exception* innerException) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::OverflowException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OverflowException*, creationType>(message, innerException)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x22D7340
    // Implemented from: System.ArithmeticException
    // Base method: System.Void ArithmeticException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OverflowException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::OverflowException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OverflowException*, creationType>(info, context)));
    }
  }; // System.OverflowException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::OverflowException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::OverflowException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::OverflowException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::OverflowException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
