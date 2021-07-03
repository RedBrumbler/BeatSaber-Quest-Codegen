// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.ITimeProvider
#include "MasterServer/ITimeProvider.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UtcTimeProvider
  class UtcTimeProvider : public ::Il2CppObject/*, public MasterServer::ITimeProvider*/ {
    public:
    // Creating value type constructor for type: UtcTimeProvider
    UtcTimeProvider() noexcept {}
    // Creating interface conversion operator: operator MasterServer::ITimeProvider
    operator MasterServer::ITimeProvider() noexcept {
      return *reinterpret_cast<MasterServer::ITimeProvider*>(this);
    }
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF1060
    // Get static field: static private readonly System.DateTime _epoch
    static System::DateTime _get__epoch();
    // Set static field: static private readonly System.DateTime _epoch
    static void _set__epoch(System::DateTime value);
    // public System.Int64 GetTimeMs()
    // Offset: 0x237DC3C
    int64_t GetTimeMs();
    // public System.Threading.Tasks.Task DelayMs(System.Int32 millis, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x237DD00
    System::Threading::Tasks::Task* DelayMs(int millis, System::Threading::CancellationToken cancellationToken);
    // static private System.Void .cctor()
    // Offset: 0x237DD80
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x237DD78
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UtcTimeProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::UtcTimeProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UtcTimeProvider*, creationType>()));
    }
  }; // UtcTimeProvider
  #pragma pack(pop)
  // Writing MetadataGetter for method: UtcTimeProvider::GetTimeMs
  // Il2CppName: GetTimeMs
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (UtcTimeProvider::*)()>(&UtcTimeProvider::GetTimeMs)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(UtcTimeProvider*), "GetTimeMs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: UtcTimeProvider::DelayMs
  // Il2CppName: DelayMs
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task* (UtcTimeProvider::*)(int, System::Threading::CancellationToken)>(&UtcTimeProvider::DelayMs)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(UtcTimeProvider*), "DelayMs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<System::Threading::CancellationToken>()});
    }
  };
  // Writing MetadataGetter for method: UtcTimeProvider::_cctor
  // Il2CppName: .cctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UtcTimeProvider::_cctor)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(UtcTimeProvider*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: UtcTimeProvider::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UtcTimeProvider::*)()>(&UtcTimeProvider::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(UtcTimeProvider*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UtcTimeProvider::*)()>(&UtcTimeProvider::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(UtcTimeProvider*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UtcTimeProvider*, "", "UtcTimeProvider");
