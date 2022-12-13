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
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: IOException
  class IOException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::IOException);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::IOException*, "System.IO", "IOException");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.IOException
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 10759A4
  class IOException : public ::System::SystemException {
    public:
    public:
    // private System.String _maybeFullPath
    // Size: 0x8
    // Offset: 0x88
    ::StringW maybeFullPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return maybeFullPath;
    }
    // Get instance field reference: private System.String _maybeFullPath
    [[deprecated("Use field access instead!")]] ::StringW& dyn__maybeFullPath();
    // public System.Void .ctor(System.String message, System.Int32 hresult)
    // Offset: 0x2085664
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IOException* New_ctor(::StringW message, int hresult) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::IOException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IOException*, creationType>(message, hresult)));
    }
    // System.Void .ctor(System.String message, System.Int32 hresult, System.String maybeFullPath)
    // Offset: 0x2085698
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IOException* New_ctor(::StringW message, int hresult, ::StringW maybeFullPath) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::IOException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IOException*, creationType>(message, hresult, maybeFullPath)));
    }
    // public System.Void .ctor()
    // Offset: 0x208489C
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IOException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::IOException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IOException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x207754C
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IOException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::IOException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IOException*, creationType>(message)));
    }
    // public System.Void .ctor(System.String message, System.Exception innerException)
    // Offset: 0x20771C4
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String message, System.Exception innerException)
    // Base method: System.Void Exception::.ctor(System.String message, System.Exception innerException)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IOException* New_ctor(::StringW message, ::System::Exception* innerException) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::IOException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IOException*, creationType>(message, innerException)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x207D044
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IOException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::IOException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IOException*, creationType>(info, context)));
    }
  }; // System.IO.IOException
  #pragma pack(pop)
  static check_size<sizeof(IOException), 136 + sizeof(::StringW)> __System_IO_IOExceptionSizeCheck;
  static_assert(sizeof(IOException) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::IOException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::IOException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::IOException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::IOException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::IOException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::IOException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
