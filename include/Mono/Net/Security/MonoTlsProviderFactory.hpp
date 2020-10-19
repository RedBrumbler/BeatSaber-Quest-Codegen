// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Guid
#include "System/Guid.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: MonoTlsProvider
  class MonoTlsProvider;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Tuple`2<T1, T2>
  template<typename T1, typename T2>
  class Tuple_2;
}
// Completed forward declares
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Autogenerated type: Mono.Net.Security.MonoTlsProviderFactory
  class MonoTlsProviderFactory : public ::Il2CppObject {
    public:
    // Get static field: static private System.Object locker
    static ::Il2CppObject* _get_locker();
    // Set static field: static private System.Object locker
    static void _set_locker(::Il2CppObject* value);
    // Get static field: static private System.Boolean initialized
    static bool _get_initialized();
    // Set static field: static private System.Boolean initialized
    static void _set_initialized(bool value);
    // Get static field: static private Mono.Security.Interface.MonoTlsProvider defaultProvider
    static Mono::Security::Interface::MonoTlsProvider* _get_defaultProvider();
    // Set static field: static private Mono.Security.Interface.MonoTlsProvider defaultProvider
    static void _set_defaultProvider(Mono::Security::Interface::MonoTlsProvider* value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Guid,System.String>> providerRegistration
    static System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Tuple_2<System::Guid, ::Il2CppString*>*>* _get_providerRegistration();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Guid,System.String>> providerRegistration
    static void _set_providerRegistration(System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Tuple_2<System::Guid, ::Il2CppString*>*>* value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Guid,Mono.Security.Interface.MonoTlsProvider> providerCache
    static System::Collections::Generic::Dictionary_2<System::Guid, Mono::Security::Interface::MonoTlsProvider*>* _get_providerCache();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Guid,Mono.Security.Interface.MonoTlsProvider> providerCache
    static void _set_providerCache(System::Collections::Generic::Dictionary_2<System::Guid, Mono::Security::Interface::MonoTlsProvider*>* value);
    // Get static field: static readonly System.Guid UnityTlsId
    static System::Guid _get_UnityTlsId();
    // Set static field: static readonly System.Guid UnityTlsId
    static void _set_UnityTlsId(System::Guid value);
    // Get static field: static readonly System.Guid AppleTlsId
    static System::Guid _get_AppleTlsId();
    // Set static field: static readonly System.Guid AppleTlsId
    static void _set_AppleTlsId(System::Guid value);
    // Get static field: static readonly System.Guid BtlsId
    static System::Guid _get_BtlsId();
    // Set static field: static readonly System.Guid BtlsId
    static void _set_BtlsId(System::Guid value);
    // Get static field: static readonly System.Guid LegacyId
    static System::Guid _get_LegacyId();
    // Set static field: static readonly System.Guid LegacyId
    static void _set_LegacyId(System::Guid value);
    // static Mono.Security.Interface.MonoTlsProvider GetProviderInternal()
    // Offset: 0x11F57FC
    static Mono::Security::Interface::MonoTlsProvider* GetProviderInternal();
    // static System.Void InitializeInternal()
    // Offset: 0x11F5910
    static void InitializeInternal();
    // static private Mono.Security.Interface.MonoTlsProvider LookupProvider(System.String name, System.Boolean throwOnError)
    // Offset: 0x11F6160
    static Mono::Security::Interface::MonoTlsProvider* LookupProvider(::Il2CppString* name, bool throwOnError);
    // static private System.Void InitializeProviderRegistration()
    // Offset: 0x11F5CBC
    static void InitializeProviderRegistration();
    // static private Mono.Security.Interface.MonoTlsProvider CreateDefaultProviderImpl()
    // Offset: 0x11F60C4
    static Mono::Security::Interface::MonoTlsProvider* CreateDefaultProviderImpl();
    // static Mono.Security.Interface.MonoTlsProvider GetProvider()
    // Offset: 0x11F1324
    static Mono::Security::Interface::MonoTlsProvider* GetProvider();
    // static private System.Void .cctor()
    // Offset: 0x11F66A4
    static void _cctor();
  }; // Mono.Net.Security.MonoTlsProviderFactory
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::MonoTlsProviderFactory*, "Mono.Net.Security", "MonoTlsProviderFactory");
#pragma pack(pop)