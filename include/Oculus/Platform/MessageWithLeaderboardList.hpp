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
  // Forward declaring type: LeaderboardList
  class LeaderboardList;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: MessageWithLeaderboardList
  class MessageWithLeaderboardList;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::MessageWithLeaderboardList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithLeaderboardList*, "Oculus.Platform", "MessageWithLeaderboardList");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithLeaderboardList
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithLeaderboardList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardList*> {
    public:
    // protected Oculus.Platform.Models.LeaderboardList GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x1A330B8
    ::Oculus::Platform::Models::LeaderboardList* GetDataFromMessage(::System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x1A2D4BC
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithLeaderboardList* New_ctor(::System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::MessageWithLeaderboardList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithLeaderboardList*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.LeaderboardList GetLeaderboardList()
    // Offset: 0x1A33074
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.LeaderboardList Message::GetLeaderboardList()
    ::Oculus::Platform::Models::LeaderboardList* GetLeaderboardList();
  }; // Oculus.Platform.MessageWithLeaderboardList
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithLeaderboardList::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LeaderboardList* (Oculus::Platform::MessageWithLeaderboardList::*)(::System::IntPtr)>(&Oculus::Platform::MessageWithLeaderboardList::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithLeaderboardList*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithLeaderboardList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithLeaderboardList::GetLeaderboardList
// Il2CppName: GetLeaderboardList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LeaderboardList* (Oculus::Platform::MessageWithLeaderboardList::*)()>(&Oculus::Platform::MessageWithLeaderboardList::GetLeaderboardList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithLeaderboardList*), "GetLeaderboardList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
