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
  // Forward declaring type: GroupPresenceJoinIntent
  class GroupPresenceJoinIntent;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: MessageWithGroupPresenceJoinIntent
  class MessageWithGroupPresenceJoinIntent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::MessageWithGroupPresenceJoinIntent);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithGroupPresenceJoinIntent*, "Oculus.Platform", "MessageWithGroupPresenceJoinIntent");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithGroupPresenceJoinIntent
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithGroupPresenceJoinIntent : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*> {
    public:
    // protected Oculus.Platform.Models.GroupPresenceJoinIntent GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x1A31A8C
    ::Oculus::Platform::Models::GroupPresenceJoinIntent* GetDataFromMessage(::System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x1A2D2DC
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithGroupPresenceJoinIntent* New_ctor(::System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::MessageWithGroupPresenceJoinIntent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithGroupPresenceJoinIntent*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.GroupPresenceJoinIntent GetGroupPresenceJoinIntent()
    // Offset: 0x1A31A48
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.GroupPresenceJoinIntent Message::GetGroupPresenceJoinIntent()
    ::Oculus::Platform::Models::GroupPresenceJoinIntent* GetGroupPresenceJoinIntent();
  }; // Oculus.Platform.MessageWithGroupPresenceJoinIntent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithGroupPresenceJoinIntent::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::GroupPresenceJoinIntent* (Oculus::Platform::MessageWithGroupPresenceJoinIntent::*)(::System::IntPtr)>(&Oculus::Platform::MessageWithGroupPresenceJoinIntent::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithGroupPresenceJoinIntent*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithGroupPresenceJoinIntent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithGroupPresenceJoinIntent::GetGroupPresenceJoinIntent
// Il2CppName: GetGroupPresenceJoinIntent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::GroupPresenceJoinIntent* (Oculus::Platform::MessageWithGroupPresenceJoinIntent::*)()>(&Oculus::Platform::MessageWithGroupPresenceJoinIntent::GetGroupPresenceJoinIntent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithGroupPresenceJoinIntent*), "GetGroupPresenceJoinIntent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
