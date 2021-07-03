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
  // Forward declaring type: DestinationList
  class DestinationList;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithDestinationList
  class MessageWithDestinationList : public Oculus::Platform::Message_1<Oculus::Platform::Models::DestinationList*> {
    public:
    // Creating value type constructor for type: MessageWithDestinationList
    MessageWithDestinationList() noexcept {}
    // protected Oculus.Platform.Models.DestinationList GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x14CEC00
    Oculus::Platform::Models::DestinationList* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x14CA7F8
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithDestinationList* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithDestinationList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithDestinationList*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.DestinationList GetDestinationList()
    // Offset: 0x14CEBBC
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.DestinationList Message::GetDestinationList()
    Oculus::Platform::Models::DestinationList* GetDestinationList();
  }; // Oculus.Platform.MessageWithDestinationList
  // Writing MetadataGetter for method: MessageWithDestinationList::GetDataFromMessage
  // Il2CppName: GetDataFromMessage
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::DestinationList* (MessageWithDestinationList::*)(System::IntPtr)>(&MessageWithDestinationList::GetDataFromMessage)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MessageWithDestinationList*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
    }
  };
  // Writing MetadataGetter for method: MessageWithDestinationList::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MessageWithDestinationList::*)(System::IntPtr)>(&MessageWithDestinationList::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MessageWithDestinationList*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MessageWithDestinationList::*)(System::IntPtr)>(&MessageWithDestinationList::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MessageWithDestinationList*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
    }
  };
  // Writing MetadataGetter for method: MessageWithDestinationList::GetDestinationList
  // Il2CppName: GetDestinationList
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::DestinationList* (MessageWithDestinationList::*)()>(&MessageWithDestinationList::GetDestinationList)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MessageWithDestinationList*), "GetDestinationList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithDestinationList*, "Oculus.Platform", "MessageWithDestinationList");
