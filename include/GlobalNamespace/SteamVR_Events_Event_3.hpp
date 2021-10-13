// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: SteamVR_Events
#include "GlobalNamespace/SteamVR_Events.hpp"
// Including type: UnityEngine.Events.UnityEvent`3
#include "UnityEngine/Events/UnityEvent_3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`3<T0, T1, T2>
  template<typename T0, typename T1, typename T2>
  class UnityAction_3;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: SteamVR_Events/Event`3
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T0, typename T1, typename T2>
  class SteamVR_Events::Event_3 : public UnityEngine::Events::UnityEvent_3<T0, T1, T2> {
    public:
    // public System.Void Listen(UnityEngine.Events.UnityAction`3<T0,T1,T2> action)
    // Offset: 0xFFFFFFFF
    void Listen(UnityEngine::Events::UnityAction_3<T0, T1, T2>* action) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_Events::Event_3::Listen");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Listen", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(action)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, action);
    }
    // public System.Void Remove(UnityEngine.Events.UnityAction`3<T0,T1,T2> action)
    // Offset: 0xFFFFFFFF
    void Remove(UnityEngine::Events::UnityAction_3<T0, T1, T2>* action) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_Events::Event_3::Remove");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Remove", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(action)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, action);
    }
    // public System.Void Send(T0 arg0, T1 arg1, T2 arg2)
    // Offset: 0xFFFFFFFF
    void Send(T0 arg0, T1 arg1, T2 arg2) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_Events::Event_3::Send");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Send", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(arg0), ::il2cpp_utils::ExtractType(arg1), ::il2cpp_utils::ExtractType(arg2)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, arg0, arg1, arg2);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.Events.UnityEvent`3
    // Base method: System.Void UnityEvent_3::.ctor()
    // Base method: System.Void UnityEventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_Events::Event_3<T0, T1, T2>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_Events::Event_3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_Events::Event_3<T0, T1, T2>*, creationType>()));
    }
  }; // SteamVR_Events/Event`3
  // Could not write size check! Type: SteamVR_Events/Event`3 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::SteamVR_Events::Event_3, "", "SteamVR_Events/Event`3");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
