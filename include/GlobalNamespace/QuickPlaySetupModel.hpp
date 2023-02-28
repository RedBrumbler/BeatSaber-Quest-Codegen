// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: IQuickPlaySetupModel
#include "GlobalNamespace/IQuickPlaySetupModel.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: INetworkConfig
  class INetworkConfig;
  // Forward declaring type: QuickPlaySetupData
  class QuickPlaySetupData;
}
// Forward declaring namespace: System::Net::Http
namespace System::Net::Http {
  // Forward declaring type: HttpClient
  class HttpClient;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: QuickPlaySetupModel
  class QuickPlaySetupModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::QuickPlaySetupModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuickPlaySetupModel*, "", "QuickPlaySetupModel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: QuickPlaySetupModel
  // [TokenAttribute] Offset: FFFFFFFF
  class QuickPlaySetupModel : public ::Il2CppObject/*, public ::GlobalNamespace::IQuickPlaySetupModel*/ {
    public:
    // Nested type: ::GlobalNamespace::QuickPlaySetupModel::QuickPlaySetupDataFB
    class QuickPlaySetupDataFB;
    // Nested type: ::GlobalNamespace::QuickPlaySetupModel::$GetQuickPlaySetupInternal$d__10
    struct $GetQuickPlaySetupInternal$d__10;
    public:
    // [InjectAttribute] Offset: 0x11203F0
    // private readonly INetworkConfig _networkConfig
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::INetworkConfig* networkConfig;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::INetworkConfig*) == 0x8);
    // private readonly System.Net.Http.HttpClient _client
    // Size: 0x8
    // Offset: 0x18
    ::System::Net::Http::HttpClient* client;
    // Field size check
    static_assert(sizeof(::System::Net::Http::HttpClient*) == 0x8);
    // private System.Threading.Tasks.Task`1<QuickPlaySetupData> _request
    // Size: 0x8
    // Offset: 0x20
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>* request;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>*) == 0x8);
    // private System.DateTime _lastRequestTime
    // Size: 0x8
    // Offset: 0x28
    ::System::DateTime lastRequestTime;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IQuickPlaySetupModel
    operator ::GlobalNamespace::IQuickPlaySetupModel() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IQuickPlaySetupModel*>(this);
    }
    // Creating interface conversion operator: i_IQuickPlaySetupModel
    inline ::GlobalNamespace::IQuickPlaySetupModel* i_IQuickPlaySetupModel() noexcept {
      return reinterpret_cast<::GlobalNamespace::IQuickPlaySetupModel*>(this);
    }
    // static field const value: static private System.Int32 kRequestCacheTimeoutMinutes
    static constexpr const int kRequestCacheTimeoutMinutes = 5;
    // Get static field: static private System.Int32 kRequestCacheTimeoutMinutes
    static int _get_kRequestCacheTimeoutMinutes();
    // Set static field: static private System.Int32 kRequestCacheTimeoutMinutes
    static void _set_kRequestCacheTimeoutMinutes(int value);
    // static field const value: static private System.Int32 kRequestTimeoutSeconds
    static constexpr const int kRequestTimeoutSeconds = 60;
    // Get static field: static private System.Int32 kRequestTimeoutSeconds
    static int _get_kRequestTimeoutSeconds();
    // Set static field: static private System.Int32 kRequestTimeoutSeconds
    static void _set_kRequestTimeoutSeconds(int value);
    // Get instance field reference: private readonly INetworkConfig _networkConfig
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::INetworkConfig*& dyn__networkConfig();
    // Get instance field reference: private readonly System.Net.Http.HttpClient _client
    [[deprecated("Use field access instead!")]] ::System::Net::Http::HttpClient*& dyn__client();
    // Get instance field reference: private System.Threading.Tasks.Task`1<QuickPlaySetupData> _request
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>*& dyn__request();
    // Get instance field reference: private System.DateTime _lastRequestTime
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn__lastRequestTime();
    // public System.Void .ctor()
    // Offset: 0x145E6E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static QuickPlaySetupModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::QuickPlaySetupModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<QuickPlaySetupModel*, creationType>()));
    }
    // public System.Threading.Tasks.Task`1<QuickPlaySetupData> GetQuickPlaySetupAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x145E35C
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>* GetQuickPlaySetupAsync(::System::Threading::CancellationToken cancellationToken);
    // private System.Void Init()
    // Offset: 0x145E554
    void Init();
    // private System.Void StartRequest()
    // Offset: 0x145E4DC
    void StartRequest();
    // private System.Threading.Tasks.Task`1<QuickPlaySetupData> GetQuickPlaySetupInternal()
    // Offset: 0x145E558
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>* GetQuickPlaySetupInternal();
    // private System.Boolean IsQuickPlaySetupTaskValid()
    // Offset: 0x145E3D0
    bool IsQuickPlaySetupTaskValid();
    // private System.Boolean IsUrlValid(System.String url)
    // Offset: 0x145E678
    bool IsUrlValid(::StringW url);
  }; // QuickPlaySetupModel
  #pragma pack(pop)
  static check_size<sizeof(QuickPlaySetupModel), 40 + sizeof(::System::DateTime)> __GlobalNamespace_QuickPlaySetupModelSizeCheck;
  static_assert(sizeof(QuickPlaySetupModel) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySetupModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySetupModel::GetQuickPlaySetupAsync
// Il2CppName: GetQuickPlaySetupAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>* (GlobalNamespace::QuickPlaySetupModel::*)(::System::Threading::CancellationToken)>(&GlobalNamespace::QuickPlaySetupModel::GetQuickPlaySetupAsync)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySetupModel*), "GetQuickPlaySetupAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySetupModel::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickPlaySetupModel::*)()>(&GlobalNamespace::QuickPlaySetupModel::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySetupModel*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySetupModel::StartRequest
// Il2CppName: StartRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickPlaySetupModel::*)()>(&GlobalNamespace::QuickPlaySetupModel::StartRequest)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySetupModel*), "StartRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySetupModel::GetQuickPlaySetupInternal
// Il2CppName: GetQuickPlaySetupInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>* (GlobalNamespace::QuickPlaySetupModel::*)()>(&GlobalNamespace::QuickPlaySetupModel::GetQuickPlaySetupInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySetupModel*), "GetQuickPlaySetupInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySetupModel::IsQuickPlaySetupTaskValid
// Il2CppName: IsQuickPlaySetupTaskValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::QuickPlaySetupModel::*)()>(&GlobalNamespace::QuickPlaySetupModel::IsQuickPlaySetupTaskValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySetupModel*), "IsQuickPlaySetupTaskValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySetupModel::IsUrlValid
// Il2CppName: IsUrlValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::QuickPlaySetupModel::*)(::StringW)>(&GlobalNamespace::QuickPlaySetupModel::IsUrlValid)> {
  static const MethodInfo* get() {
    static auto* url = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySetupModel*), "IsUrlValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{url});
  }
};
