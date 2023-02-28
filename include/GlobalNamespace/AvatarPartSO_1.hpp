// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Including type: IAvatarPart
#include "GlobalNamespace/IAvatarPart.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AvatarPartSO`1<T>
  template<typename T>
  class AvatarPartSO_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::AvatarPartSO_1, "", "AvatarPartSO`1");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: AvatarPartSO`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class AvatarPartSO_1 : public ::GlobalNamespace::PersistentScriptableObject/*, public ::GlobalNamespace::IAvatarPart*/ {
    public:
    public:
    // private System.String _id
    // Size: 0x8
    // Offset: 0x0
    ::StringW id;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [LocalizationKeyAttribute] Offset: 0x1121720
    // private System.String _localizationKey
    // Size: 0x8
    // Offset: 0x0
    ::StringW localizationKey;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [NullAllowed] Offset: 0x1121758
    // private T _partAsset
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T partAsset;
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IAvatarPart
    operator ::GlobalNamespace::IAvatarPart() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IAvatarPart*>(this);
    }
    // Creating interface conversion operator: i_IAvatarPart
    inline ::GlobalNamespace::IAvatarPart* i_IAvatarPart() noexcept {
      return reinterpret_cast<::GlobalNamespace::IAvatarPart*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Autogenerated instance field getter
    // Get instance field: private System.String _id
    [[deprecated("Use field access instead!")]] ::StringW& dyn__id() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AvatarPartSO_1::dyn__id");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_id"))->offset;
      return *reinterpret_cast<::StringW*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.String _localizationKey
    [[deprecated("Use field access instead!")]] ::StringW& dyn__localizationKey() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AvatarPartSO_1::dyn__localizationKey");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_localizationKey"))->offset;
      return *reinterpret_cast<::StringW*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private T _partAsset
    [[deprecated("Use field access instead!")]] T& dyn__partAsset() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AvatarPartSO_1::dyn__partAsset");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_partAsset"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public T get_partAsset()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T get_partAsset() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AvatarPartSO_1::get_partAsset");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_partAsset", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // public System.String get_id()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_id() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AvatarPartSO_1::get_id");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_id", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method);
    }
    // public System.String get_localizationKey()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_localizationKey() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AvatarPartSO_1::get_localizationKey");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_localizationKey", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method);
    }
    // public System.String get_localizedName()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_localizedName() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AvatarPartSO_1::get_localizedName");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_localizedName", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AvatarPartSO_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AvatarPartSO_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AvatarPartSO_1<T>*, creationType>()));
    }
  }; // AvatarPartSO`1
  // Could not write size check! Type: AvatarPartSO`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
