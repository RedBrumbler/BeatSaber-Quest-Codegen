// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_InputNodeUICache
  class HEU_InputNodeUICache;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputNodeUICache);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputNodeUICache*, "HoudiniEngineUnity", "HEU_InputNodeUICache");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_InputNodeUICache
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_InputNodeUICache : public ::Il2CppObject {
    public:
    // Nested type: ::HoudiniEngineUnity::HEU_InputNodeUICache::HEU_InputObjectUICache
    class HEU_InputObjectUICache;
    // Nested type: ::HoudiniEngineUnity::HEU_InputNodeUICache::HEU_InputAssetUICache
    class HEU_InputAssetUICache;
    public:
    // public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_InputNodeUICache/HoudiniEngineUnity.HEU_InputObjectUICache> _inputObjectCache
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNodeUICache::HEU_InputObjectUICache*>* inputObjectCache;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNodeUICache::HEU_InputObjectUICache*>*) == 0x8);
    // public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_InputNodeUICache/HoudiniEngineUnity.HEU_InputAssetUICache> _inputAssetCache
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNodeUICache::HEU_InputAssetUICache*>* inputAssetCache;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNodeUICache::HEU_InputAssetUICache*>*) == 0x8);
    public:
    // Get instance field reference: public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_InputNodeUICache/HoudiniEngineUnity.HEU_InputObjectUICache> _inputObjectCache
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNodeUICache::HEU_InputObjectUICache*>*& dyn__inputObjectCache();
    // Get instance field reference: public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_InputNodeUICache/HoudiniEngineUnity.HEU_InputAssetUICache> _inputAssetCache
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNodeUICache::HEU_InputAssetUICache*>*& dyn__inputAssetCache();
    // public System.Void .ctor()
    // Offset: 0x18D964C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_InputNodeUICache* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_InputNodeUICache::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_InputNodeUICache*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_InputNodeUICache
  #pragma pack(pop)
  static check_size<sizeof(HEU_InputNodeUICache), 24 + sizeof(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNodeUICache::HEU_InputAssetUICache*>*)> __HoudiniEngineUnity_HEU_InputNodeUICacheSizeCheck;
  static_assert(sizeof(HEU_InputNodeUICache) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputNodeUICache::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
