// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: Zenject.IInitializable
#include "Zenject/IInitializable.hpp"
// Including type: IJumpOffsetYProvider
#include "GlobalNamespace/IJumpOffsetYProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerHeightDetector
  class PlayerHeightDetector;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PlayerHeightToJumpOffsetYProvider
  class PlayerHeightToJumpOffsetYProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlayerHeightToJumpOffsetYProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerHeightToJumpOffsetYProvider*, "", "PlayerHeightToJumpOffsetYProvider");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: PlayerHeightToJumpOffsetYProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerHeightToJumpOffsetYProvider : public ::Il2CppObject/*, public ::System::IDisposable, public ::Zenject::IInitializable, public ::GlobalNamespace::IJumpOffsetYProvider*/ {
    public:
    public:
    // [InjectAttribute] Offset: 0x1124B24
    // private readonly PlayerHeightDetector _playerHeightDetector
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::PlayerHeightDetector* playerHeightDetector;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerHeightDetector*) == 0x8);
    // private System.Single _jumpOffsetY
    // Size: 0x4
    // Offset: 0x18
    float jumpOffsetY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: i_IDisposable
    inline ::System::IDisposable* i_IDisposable() noexcept {
      return reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: operator ::Zenject::IInitializable
    operator ::Zenject::IInitializable() noexcept {
      return *reinterpret_cast<::Zenject::IInitializable*>(this);
    }
    // Creating interface conversion operator: i_IInitializable
    inline ::Zenject::IInitializable* i_IInitializable() noexcept {
      return reinterpret_cast<::Zenject::IInitializable*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::IJumpOffsetYProvider
    operator ::GlobalNamespace::IJumpOffsetYProvider() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IJumpOffsetYProvider*>(this);
    }
    // Creating interface conversion operator: i_IJumpOffsetYProvider
    inline ::GlobalNamespace::IJumpOffsetYProvider* i_IJumpOffsetYProvider() noexcept {
      return reinterpret_cast<::GlobalNamespace::IJumpOffsetYProvider*>(this);
    }
    // Get instance field reference: private readonly PlayerHeightDetector _playerHeightDetector
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerHeightDetector*& dyn__playerHeightDetector();
    // Get instance field reference: private System.Single _jumpOffsetY
    [[deprecated("Use field access instead!")]] float& dyn__jumpOffsetY();
    // public System.Single get_jumpOffsetY()
    // Offset: 0x15895CC
    float get_jumpOffsetY();
    // public System.Void .ctor()
    // Offset: 0x158981C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerHeightToJumpOffsetYProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlayerHeightToJumpOffsetYProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerHeightToJumpOffsetYProvider*, creationType>()));
    }
    // public System.Void Initialize()
    // Offset: 0x15895D4
    void Initialize();
    // public System.Void Dispose()
    // Offset: 0x1589744
    void Dispose();
    // private System.Void HandlePlayerHeightDidChange(System.Single playerHeight)
    // Offset: 0x1589720
    void HandlePlayerHeightDidChange(float playerHeight);
    // static public System.Single JumpOffsetYForPlayerHeight(System.Single playerHeight)
    // Offset: 0x1589690
    static float JumpOffsetYForPlayerHeight(float playerHeight);
  }; // PlayerHeightToJumpOffsetYProvider
  #pragma pack(pop)
  static check_size<sizeof(PlayerHeightToJumpOffsetYProvider), 24 + sizeof(float)> __GlobalNamespace_PlayerHeightToJumpOffsetYProviderSizeCheck;
  static_assert(sizeof(PlayerHeightToJumpOffsetYProvider) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeightToJumpOffsetYProvider::get_jumpOffsetY
// Il2CppName: get_jumpOffsetY
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PlayerHeightToJumpOffsetYProvider::*)()>(&GlobalNamespace::PlayerHeightToJumpOffsetYProvider::get_jumpOffsetY)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHeightToJumpOffsetYProvider*), "get_jumpOffsetY", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeightToJumpOffsetYProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeightToJumpOffsetYProvider::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerHeightToJumpOffsetYProvider::*)()>(&GlobalNamespace::PlayerHeightToJumpOffsetYProvider::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHeightToJumpOffsetYProvider*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeightToJumpOffsetYProvider::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerHeightToJumpOffsetYProvider::*)()>(&GlobalNamespace::PlayerHeightToJumpOffsetYProvider::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHeightToJumpOffsetYProvider*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeightToJumpOffsetYProvider::HandlePlayerHeightDidChange
// Il2CppName: HandlePlayerHeightDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerHeightToJumpOffsetYProvider::*)(float)>(&GlobalNamespace::PlayerHeightToJumpOffsetYProvider::HandlePlayerHeightDidChange)> {
  static const MethodInfo* get() {
    static auto* playerHeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHeightToJumpOffsetYProvider*), "HandlePlayerHeightDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerHeight});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeightToJumpOffsetYProvider::JumpOffsetYForPlayerHeight
// Il2CppName: JumpOffsetYForPlayerHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::PlayerHeightToJumpOffsetYProvider::JumpOffsetYForPlayerHeight)> {
  static const MethodInfo* get() {
    static auto* playerHeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHeightToJumpOffsetYProvider*), "JumpOffsetYForPlayerHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerHeight});
  }
};
