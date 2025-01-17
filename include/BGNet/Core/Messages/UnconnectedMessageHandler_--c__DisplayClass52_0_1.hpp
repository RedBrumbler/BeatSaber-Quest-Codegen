// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.UnconnectedMessageHandler
#include "BGNet/Core/Messages/UnconnectedMessageHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: BGNet::Core::Messages
namespace BGNet::Core::Messages {
  // Forward declaring type: IUnconnectedUnreliableMessage
  class IUnconnectedUnreliableMessage;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BGNet::Core::Messages::UnconnectedMessageHandler::$$c__DisplayClass52_0_1, "BGNet.Core.Messages", "UnconnectedMessageHandler/<>c__DisplayClass52_0`1");
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // WARNING Size may be invalid!
  // Autogenerated type: BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.<>c__DisplayClass52_0`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename T>
  class UnconnectedMessageHandler::$$c__DisplayClass52_0_1 : public ::Il2CppObject {
    public:
    public:
    // public BGNet.Core.Messages.UnconnectedMessageHandler <>4__this
    // Size: 0x8
    // Offset: 0x0
    ::BGNet::Core::Messages::UnconnectedMessageHandler* $$4__this;
    // Field size check
    static_assert(sizeof(::BGNet::Core::Messages::UnconnectedMessageHandler*) == 0x8);
    // public System.Action`2<T,BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.MessageOrigin> customHandler
    // Size: 0x8
    // Offset: 0x0
    ::System::Action_2<T, ::BGNet::Core::Messages::UnconnectedMessageHandler::MessageOrigin>* customHandler;
    // Field size check
    static_assert(sizeof(::System::Action_2<T, ::BGNet::Core::Messages::UnconnectedMessageHandler::MessageOrigin>*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: public BGNet.Core.Messages.UnconnectedMessageHandler <>4__this
    [[deprecated("Use field access instead!")]] ::BGNet::Core::Messages::UnconnectedMessageHandler*& dyn_$$4__this() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::UnconnectedMessageHandler::$$c__DisplayClass52_0_1::dyn_$$4__this");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
      return *reinterpret_cast<::BGNet::Core::Messages::UnconnectedMessageHandler**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Action`2<T,BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.MessageOrigin> customHandler
    [[deprecated("Use field access instead!")]] ::System::Action_2<T, ::BGNet::Core::Messages::UnconnectedMessageHandler::MessageOrigin>*& dyn_customHandler() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::UnconnectedMessageHandler::$$c__DisplayClass52_0_1::dyn_customHandler");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "customHandler"))->offset;
      return *reinterpret_cast<::System::Action_2<T, ::BGNet::Core::Messages::UnconnectedMessageHandler::MessageOrigin>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnconnectedMessageHandler::$$c__DisplayClass52_0_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::UnconnectedMessageHandler::$$c__DisplayClass52_0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnconnectedMessageHandler::$$c__DisplayClass52_0_1<T>*, creationType>()));
    }
    // System.Void <CustomUnreliableResponseHandler>b__0(T packet, BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.MessageOrigin origin)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void $CustomUnreliableResponseHandler$b__0(T packet, ::BGNet::Core::Messages::UnconnectedMessageHandler::MessageOrigin origin) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::UnconnectedMessageHandler::$$c__DisplayClass52_0_1::<CustomUnreliableResponseHandler>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<CustomUnreliableResponseHandler>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(packet), ::il2cpp_utils::ExtractType(origin)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, packet, origin);
    }
  }; // BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.<>c__DisplayClass52_0`1
  // Could not write size check! Type: BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.<>c__DisplayClass52_0`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
