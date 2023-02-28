// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: QuickPlaySetupData
#include "GlobalNamespace/QuickPlaySetupData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::QuickPlaySetupData::QuickPlaySongPacksOverride);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuickPlaySetupData::QuickPlaySongPacksOverride*, "", "QuickPlaySetupData/QuickPlaySongPacksOverride");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: QuickPlaySetupData/QuickPlaySongPacksOverride
  // [TokenAttribute] Offset: FFFFFFFF
  class QuickPlaySetupData::QuickPlaySongPacksOverride : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::QuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPackName
    class LocalizedCustomPackName;
    // Nested type: ::GlobalNamespace::QuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPack
    class LocalizedCustomPack;
    // Nested type: ::GlobalNamespace::QuickPlaySetupData::QuickPlaySongPacksOverride::PredefinedPack
    class PredefinedPack;
    public:
    // public System.Collections.Generic.List`1<QuickPlaySetupData/QuickPlaySongPacksOverride/PredefinedPack> predefinedPackIds
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::GlobalNamespace::QuickPlaySetupData::QuickPlaySongPacksOverride::PredefinedPack*>* predefinedPackIds;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::QuickPlaySetupData::QuickPlaySongPacksOverride::PredefinedPack*>*) == 0x8);
    // public System.Collections.Generic.List`1<QuickPlaySetupData/QuickPlaySongPacksOverride/LocalizedCustomPack> localizedCustomPacks
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::GlobalNamespace::QuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPack*>* localizedCustomPacks;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::QuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPack*>*) == 0x8);
    public:
    // Get instance field reference: public System.Collections.Generic.List`1<QuickPlaySetupData/QuickPlaySongPacksOverride/PredefinedPack> predefinedPackIds
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::QuickPlaySetupData::QuickPlaySongPacksOverride::PredefinedPack*>*& dyn_predefinedPackIds();
    // Get instance field reference: public System.Collections.Generic.List`1<QuickPlaySetupData/QuickPlaySongPacksOverride/LocalizedCustomPack> localizedCustomPacks
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::QuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPack*>*& dyn_localizedCustomPacks();
    // public System.Void .ctor()
    // Offset: 0x145E240
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static QuickPlaySetupData::QuickPlaySongPacksOverride* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::QuickPlaySetupData::QuickPlaySongPacksOverride::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<QuickPlaySetupData::QuickPlaySongPacksOverride*, creationType>()));
    }
  }; // QuickPlaySetupData/QuickPlaySongPacksOverride
  #pragma pack(pop)
  static check_size<sizeof(QuickPlaySetupData::QuickPlaySongPacksOverride), 24 + sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::QuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPack*>*)> __GlobalNamespace_QuickPlaySetupData_QuickPlaySongPacksOverrideSizeCheck;
  static_assert(sizeof(QuickPlaySetupData::QuickPlaySongPacksOverride) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySetupData::QuickPlaySongPacksOverride::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
