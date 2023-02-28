// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerStatusData
  class MultiplayerStatusData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerStatusData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerStatusData*, "", "MultiplayerStatusData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerStatusData
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class MultiplayerStatusData : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::MultiplayerStatusData::AvailabilityStatus
    struct AvailabilityStatus;
    // Nested type: ::GlobalNamespace::MultiplayerStatusData::UserMessage
    class UserMessage;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MultiplayerStatusData/AvailabilityStatus
    // [TokenAttribute] Offset: FFFFFFFF
    struct AvailabilityStatus/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: AvailabilityStatus
      constexpr AvailabilityStatus(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MultiplayerStatusData/AvailabilityStatus Online
      static constexpr const int Online = 0;
      // Get static field: static public MultiplayerStatusData/AvailabilityStatus Online
      static ::GlobalNamespace::MultiplayerStatusData::AvailabilityStatus _get_Online();
      // Set static field: static public MultiplayerStatusData/AvailabilityStatus Online
      static void _set_Online(::GlobalNamespace::MultiplayerStatusData::AvailabilityStatus value);
      // static field const value: static public MultiplayerStatusData/AvailabilityStatus MaintenanceUpcoming
      static constexpr const int MaintenanceUpcoming = 1;
      // Get static field: static public MultiplayerStatusData/AvailabilityStatus MaintenanceUpcoming
      static ::GlobalNamespace::MultiplayerStatusData::AvailabilityStatus _get_MaintenanceUpcoming();
      // Set static field: static public MultiplayerStatusData/AvailabilityStatus MaintenanceUpcoming
      static void _set_MaintenanceUpcoming(::GlobalNamespace::MultiplayerStatusData::AvailabilityStatus value);
      // static field const value: static public MultiplayerStatusData/AvailabilityStatus Offline
      static constexpr const int Offline = 2;
      // Get static field: static public MultiplayerStatusData/AvailabilityStatus Offline
      static ::GlobalNamespace::MultiplayerStatusData::AvailabilityStatus _get_Offline();
      // Set static field: static public MultiplayerStatusData/AvailabilityStatus Offline
      static void _set_Offline(::GlobalNamespace::MultiplayerStatusData::AvailabilityStatus value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // MultiplayerStatusData/AvailabilityStatus
    #pragma pack(pop)
    static check_size<sizeof(MultiplayerStatusData::AvailabilityStatus), 0 + sizeof(int)> __GlobalNamespace_MultiplayerStatusData_AvailabilityStatusSizeCheck;
    static_assert(sizeof(MultiplayerStatusData::AvailabilityStatus) == 0x4);
    public:
    // public System.String minimumAppVersion
    // Size: 0x8
    // Offset: 0x10
    ::StringW minimumAppVersion;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public MultiplayerStatusData/AvailabilityStatus status
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::MultiplayerStatusData::AvailabilityStatus status;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerStatusData::AvailabilityStatus) == 0x4);
    // Padding between fields: status and: maintenanceStartTime
    char __padding1[0x4] = {};
    // public System.Int64 maintenanceStartTime
    // Size: 0x8
    // Offset: 0x20
    int64_t maintenanceStartTime;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public System.Int64 maintenanceEndTime
    // Size: 0x8
    // Offset: 0x28
    int64_t maintenanceEndTime;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public MultiplayerStatusData/UserMessage userMessage
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::MultiplayerStatusData::UserMessage* userMessage;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerStatusData::UserMessage*) == 0x8);
    // public System.Boolean useGamelift
    // Size: 0x1
    // Offset: 0x38
    bool useGamelift;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.String minimumAppVersion
    [[deprecated("Use field access instead!")]] ::StringW& dyn_minimumAppVersion();
    // Get instance field reference: public MultiplayerStatusData/AvailabilityStatus status
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerStatusData::AvailabilityStatus& dyn_status();
    // Get instance field reference: public System.Int64 maintenanceStartTime
    [[deprecated("Use field access instead!")]] int64_t& dyn_maintenanceStartTime();
    // Get instance field reference: public System.Int64 maintenanceEndTime
    [[deprecated("Use field access instead!")]] int64_t& dyn_maintenanceEndTime();
    // Get instance field reference: public MultiplayerStatusData/UserMessage userMessage
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerStatusData::UserMessage*& dyn_userMessage();
    // Get instance field reference: public System.Boolean useGamelift
    [[deprecated("Use field access instead!")]] bool& dyn_useGamelift();
    // private System.String get__minimumAppVersion()
    // Offset: 0x1431B2C
    ::StringW get__minimumAppVersion();
    // private System.Void set__minimumAppVersion(System.String value)
    // Offset: 0x1431B34
    void set__minimumAppVersion(::StringW value);
    // private System.Int64 get__maintenanceStartTime()
    // Offset: 0x1431B3C
    int64_t get__maintenanceStartTime();
    // private System.Void set__maintenanceStartTime(System.Int64 value)
    // Offset: 0x1431B44
    void set__maintenanceStartTime(int64_t value);
    // private MultiplayerStatusData/UserMessage get__userMessage()
    // Offset: 0x1431B4C
    ::GlobalNamespace::MultiplayerStatusData::UserMessage* get__userMessage();
    // private System.Void set__userMessage(MultiplayerStatusData/UserMessage value)
    // Offset: 0x1431B54
    void set__userMessage(::GlobalNamespace::MultiplayerStatusData::UserMessage* value);
    // private System.Boolean get__useGamelift()
    // Offset: 0x1431B5C
    bool get__useGamelift();
    // private System.Void set__useGamelift(System.Boolean value)
    // Offset: 0x1431B64
    void set__useGamelift(bool value);
    // public System.Void .ctor()
    // Offset: 0x1431B70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerStatusData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerStatusData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerStatusData*, creationType>()));
    }
  }; // MultiplayerStatusData
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerStatusData), 56 + sizeof(bool)> __GlobalNamespace_MultiplayerStatusDataSizeCheck;
  static_assert(sizeof(MultiplayerStatusData) == 0x39);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerStatusData::AvailabilityStatus, "", "MultiplayerStatusData/AvailabilityStatus");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerStatusData::get__minimumAppVersion
// Il2CppName: get__minimumAppVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::MultiplayerStatusData::*)()>(&GlobalNamespace::MultiplayerStatusData::get__minimumAppVersion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerStatusData*), "get__minimumAppVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerStatusData::set__minimumAppVersion
// Il2CppName: set__minimumAppVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerStatusData::*)(::StringW)>(&GlobalNamespace::MultiplayerStatusData::set__minimumAppVersion)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerStatusData*), "set__minimumAppVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerStatusData::get__maintenanceStartTime
// Il2CppName: get__maintenanceStartTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (GlobalNamespace::MultiplayerStatusData::*)()>(&GlobalNamespace::MultiplayerStatusData::get__maintenanceStartTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerStatusData*), "get__maintenanceStartTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerStatusData::set__maintenanceStartTime
// Il2CppName: set__maintenanceStartTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerStatusData::*)(int64_t)>(&GlobalNamespace::MultiplayerStatusData::set__maintenanceStartTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerStatusData*), "set__maintenanceStartTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerStatusData::get__userMessage
// Il2CppName: get__userMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerStatusData::UserMessage* (GlobalNamespace::MultiplayerStatusData::*)()>(&GlobalNamespace::MultiplayerStatusData::get__userMessage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerStatusData*), "get__userMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerStatusData::set__userMessage
// Il2CppName: set__userMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerStatusData::*)(::GlobalNamespace::MultiplayerStatusData::UserMessage*)>(&GlobalNamespace::MultiplayerStatusData::set__userMessage)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "MultiplayerStatusData/UserMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerStatusData*), "set__userMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerStatusData::get__useGamelift
// Il2CppName: get__useGamelift
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerStatusData::*)()>(&GlobalNamespace::MultiplayerStatusData::get__useGamelift)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerStatusData*), "get__useGamelift", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerStatusData::set__useGamelift
// Il2CppName: set__useGamelift
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerStatusData::*)(bool)>(&GlobalNamespace::MultiplayerStatusData::set__useGamelift)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerStatusData*), "set__useGamelift", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerStatusData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
