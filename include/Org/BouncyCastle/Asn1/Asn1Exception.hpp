// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.IOException
#include "System/IO/IOException.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Exception because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Asn1Exception
  class Asn1Exception : public System::IO::IOException {
    public:
    // Creating value type constructor for type: Asn1Exception
    Asn1Exception() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x16F01DC
    // Implemented from: System.IO.IOException
    // Base method: System.Void IOException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Asn1Exception* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Asn1Exception::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Asn1Exception*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x16F01E4
    // Implemented from: System.IO.IOException
    // Base method: System.Void IOException::.ctor(System.String message)
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Asn1Exception* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Asn1Exception::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Asn1Exception*, creationType>(message)));
    }
    // public System.Void .ctor(System.String message, System.Exception exception)
    // Offset: 0x16F01EC
    // Implemented from: System.IO.IOException
    // Base method: System.Void IOException::.ctor(System.String message, System.Exception exception)
    // Base method: System.Void SystemException::.ctor(System.String message, System.Exception exception)
    // Base method: System.Void Exception::.ctor(System.String message, System.Exception exception)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Asn1Exception* New_ctor(::Il2CppString* message, System::Exception* exception) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Asn1Exception::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Asn1Exception*, creationType>(message, exception)));
    }
  }; // Org.BouncyCastle.Asn1.Asn1Exception
  #pragma pack(pop)
  // Writing MetadataGetter for method: Asn1Exception::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Asn1Exception::*)()>(&Asn1Exception::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Asn1Exception*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Asn1Exception::*)()>(&Asn1Exception::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Asn1Exception*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Asn1Exception::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Asn1Exception::*)(::Il2CppString*)>(&Asn1Exception::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Asn1Exception*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Asn1Exception::*)(::Il2CppString*)>(&Asn1Exception::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Asn1Exception*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
    }
  };
  // Writing MetadataGetter for method: Asn1Exception::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Asn1Exception::*)(::Il2CppString*, System::Exception*)>(&Asn1Exception::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Asn1Exception*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Exception*>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Asn1Exception::*)(::Il2CppString*, System::Exception*)>(&Asn1Exception::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Asn1Exception*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Exception*>()});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Asn1Exception*, "Org.BouncyCastle.Asn1", "Asn1Exception");
