// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: LaunchFriendRequestFlowResult
  class LaunchFriendRequestFlowResult;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithLaunchFriendRequestFlowResult
  class MessageWithLaunchFriendRequestFlowResult : public Oculus::Platform::Message_1<Oculus::Platform::Models::LaunchFriendRequestFlowResult*> {
    public:
    // Creating value type constructor for type: MessageWithLaunchFriendRequestFlowResult
    MessageWithLaunchFriendRequestFlowResult() noexcept {}
    // protected Oculus.Platform.Models.LaunchFriendRequestFlowResult GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x14CF94C
    Oculus::Platform::Models::LaunchFriendRequestFlowResult* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x14CA8B8
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithLaunchFriendRequestFlowResult* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithLaunchFriendRequestFlowResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithLaunchFriendRequestFlowResult*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.LaunchFriendRequestFlowResult GetLaunchFriendRequestFlowResult()
    // Offset: 0x14CF908
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.LaunchFriendRequestFlowResult Message::GetLaunchFriendRequestFlowResult()
    Oculus::Platform::Models::LaunchFriendRequestFlowResult* GetLaunchFriendRequestFlowResult();
  }; // Oculus.Platform.MessageWithLaunchFriendRequestFlowResult
  // Writing MetadataGetter for method: MessageWithLaunchFriendRequestFlowResult::GetDataFromMessage
  // Il2CppName: GetDataFromMessage
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::LaunchFriendRequestFlowResult* (MessageWithLaunchFriendRequestFlowResult::*)(System::IntPtr)>(&MessageWithLaunchFriendRequestFlowResult::GetDataFromMessage)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MessageWithLaunchFriendRequestFlowResult*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
    }
  };
  // Writing MetadataGetter for method: MessageWithLaunchFriendRequestFlowResult::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MessageWithLaunchFriendRequestFlowResult::*)(System::IntPtr)>(&MessageWithLaunchFriendRequestFlowResult::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MessageWithLaunchFriendRequestFlowResult*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MessageWithLaunchFriendRequestFlowResult::*)(System::IntPtr)>(&MessageWithLaunchFriendRequestFlowResult::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MessageWithLaunchFriendRequestFlowResult*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
    }
  };
  // Writing MetadataGetter for method: MessageWithLaunchFriendRequestFlowResult::GetLaunchFriendRequestFlowResult
  // Il2CppName: GetLaunchFriendRequestFlowResult
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::LaunchFriendRequestFlowResult* (MessageWithLaunchFriendRequestFlowResult::*)()>(&MessageWithLaunchFriendRequestFlowResult::GetLaunchFriendRequestFlowResult)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MessageWithLaunchFriendRequestFlowResult*), "GetLaunchFriendRequestFlowResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithLaunchFriendRequestFlowResult*, "Oculus.Platform", "MessageWithLaunchFriendRequestFlowResult");
