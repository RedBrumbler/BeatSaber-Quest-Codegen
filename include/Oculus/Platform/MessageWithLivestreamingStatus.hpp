// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: LivestreamingStatus
  class LivestreamingStatus;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: MessageWithLivestreamingStatus
  class MessageWithLivestreamingStatus;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::MessageWithLivestreamingStatus);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithLivestreamingStatus*, "Oculus.Platform", "MessageWithLivestreamingStatus");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithLivestreamingStatus
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithLivestreamingStatus : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LivestreamingStatus*> {
    public:
    // protected Oculus.Platform.Models.LivestreamingStatus GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x1A41984
    ::Oculus::Platform::Models::LivestreamingStatus* GetDataFromMessage(::System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x1A3B524
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithLivestreamingStatus* New_ctor(::System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::MessageWithLivestreamingStatus::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithLivestreamingStatus*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.LivestreamingStatus GetLivestreamingStatus()
    // Offset: 0x1A41940
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.LivestreamingStatus Message::GetLivestreamingStatus()
    ::Oculus::Platform::Models::LivestreamingStatus* GetLivestreamingStatus();
  }; // Oculus.Platform.MessageWithLivestreamingStatus
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithLivestreamingStatus::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LivestreamingStatus* (Oculus::Platform::MessageWithLivestreamingStatus::*)(::System::IntPtr)>(&Oculus::Platform::MessageWithLivestreamingStatus::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithLivestreamingStatus*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithLivestreamingStatus::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithLivestreamingStatus::GetLivestreamingStatus
// Il2CppName: GetLivestreamingStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LivestreamingStatus* (Oculus::Platform::MessageWithLivestreamingStatus::*)()>(&Oculus::Platform::MessageWithLivestreamingStatus::GetLivestreamingStatus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithLivestreamingStatus*), "GetLivestreamingStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
