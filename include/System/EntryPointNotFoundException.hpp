// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.TypeLoadException
#include "System/TypeLoadException.hpp"
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
// Type namespace: System
namespace System {
  // Forward declaring type: EntryPointNotFoundException
  class EntryPointNotFoundException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::EntryPointNotFoundException);
DEFINE_IL2CPP_ARG_TYPE(::System::EntryPointNotFoundException*, "System", "EntryPointNotFoundException");
// Type namespace: System
namespace System {
  // Size: 0xA4
  #pragma pack(push, 1)
  // Autogenerated type: System.EntryPointNotFoundException
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 107A280
  class EntryPointNotFoundException : public ::System::TypeLoadException {
    public:
    // public System.Void .ctor()
    // Offset: 0x199DDB8
    // Implemented from: System.TypeLoadException
    // Base method: System.Void TypeLoadException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EntryPointNotFoundException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::EntryPointNotFoundException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EntryPointNotFoundException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x199DE1C
    // Implemented from: System.TypeLoadException
    // Base method: System.Void TypeLoadException::.ctor(System.String message)
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EntryPointNotFoundException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::EntryPointNotFoundException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EntryPointNotFoundException*, creationType>(message)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x199DE4C
    // Implemented from: System.TypeLoadException
    // Base method: System.Void TypeLoadException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EntryPointNotFoundException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::EntryPointNotFoundException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EntryPointNotFoundException*, creationType>(info, context)));
    }
  }; // System.EntryPointNotFoundException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::EntryPointNotFoundException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::EntryPointNotFoundException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::EntryPointNotFoundException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
