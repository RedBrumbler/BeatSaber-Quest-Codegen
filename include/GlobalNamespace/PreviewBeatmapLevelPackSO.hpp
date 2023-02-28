// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Including type: IBeatmapLevelPack
#include "GlobalNamespace/IBeatmapLevelPack.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PreviewBeatmapLevelCollectionSO
  class PreviewBeatmapLevelCollectionSO;
  // Forward declaring type: IBeatmapLevelCollection
  class IBeatmapLevelCollection;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PreviewBeatmapLevelPackSO
  class PreviewBeatmapLevelPackSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PreviewBeatmapLevelPackSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PreviewBeatmapLevelPackSO*, "", "PreviewBeatmapLevelPackSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: PreviewBeatmapLevelPackSO
  // [TokenAttribute] Offset: FFFFFFFF
  class PreviewBeatmapLevelPackSO : public ::GlobalNamespace::PersistentScriptableObject/*, public ::GlobalNamespace::IBeatmapLevelPack*/ {
    public:
    public:
    // private System.String _packID
    // Size: 0x8
    // Offset: 0x18
    ::StringW packID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _packName
    // Size: 0x8
    // Offset: 0x20
    ::StringW packName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _shortPackName
    // Size: 0x8
    // Offset: 0x28
    ::StringW shortPackName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private UnityEngine.Sprite _coverImage
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Sprite* coverImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _smallCoverImage
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Sprite* smallCoverImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // [SpaceAttribute] Offset: 0x111FA8C
    // private PreviewBeatmapLevelCollectionSO _previewBeatmapLevelCollection
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::PreviewBeatmapLevelCollectionSO* previewBeatmapLevelCollection;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PreviewBeatmapLevelCollectionSO*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IBeatmapLevelPack
    operator ::GlobalNamespace::IBeatmapLevelPack() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IBeatmapLevelPack*>(this);
    }
    // Creating interface conversion operator: i_IBeatmapLevelPack
    inline ::GlobalNamespace::IBeatmapLevelPack* i_IBeatmapLevelPack() noexcept {
      return reinterpret_cast<::GlobalNamespace::IBeatmapLevelPack*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.String _packID
    [[deprecated("Use field access instead!")]] ::StringW& dyn__packID();
    // Get instance field reference: private System.String _packName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__packName();
    // Get instance field reference: private System.String _shortPackName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__shortPackName();
    // Get instance field reference: private UnityEngine.Sprite _coverImage
    [[deprecated("Use field access instead!")]] ::UnityEngine::Sprite*& dyn__coverImage();
    // Get instance field reference: private UnityEngine.Sprite _smallCoverImage
    [[deprecated("Use field access instead!")]] ::UnityEngine::Sprite*& dyn__smallCoverImage();
    // Get instance field reference: private PreviewBeatmapLevelCollectionSO _previewBeatmapLevelCollection
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PreviewBeatmapLevelCollectionSO*& dyn__previewBeatmapLevelCollection();
    // public System.String get_packID()
    // Offset: 0x145BEEC
    ::StringW get_packID();
    // public System.String get_packName()
    // Offset: 0x145BEF4
    ::StringW get_packName();
    // public System.String get_shortPackName()
    // Offset: 0x145BEFC
    ::StringW get_shortPackName();
    // public System.String get_collectionName()
    // Offset: 0x145BF04
    ::StringW get_collectionName();
    // public UnityEngine.Sprite get_coverImage()
    // Offset: 0x145BF0C
    ::UnityEngine::Sprite* get_coverImage();
    // public UnityEngine.Sprite get_smallCoverImage()
    // Offset: 0x145BF14
    ::UnityEngine::Sprite* get_smallCoverImage();
    // public IBeatmapLevelCollection get_beatmapLevelCollection()
    // Offset: 0x145BF1C
    ::GlobalNamespace::IBeatmapLevelCollection* get_beatmapLevelCollection();
    // public System.Void .ctor()
    // Offset: 0x145BF24
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PreviewBeatmapLevelPackSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PreviewBeatmapLevelPackSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PreviewBeatmapLevelPackSO*, creationType>()));
    }
  }; // PreviewBeatmapLevelPackSO
  #pragma pack(pop)
  static check_size<sizeof(PreviewBeatmapLevelPackSO), 64 + sizeof(::GlobalNamespace::PreviewBeatmapLevelCollectionSO*)> __GlobalNamespace_PreviewBeatmapLevelPackSOSizeCheck;
  static_assert(sizeof(PreviewBeatmapLevelPackSO) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelPackSO::get_packID
// Il2CppName: get_packID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PreviewBeatmapLevelPackSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelPackSO::get_packID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelPackSO*), "get_packID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelPackSO::get_packName
// Il2CppName: get_packName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PreviewBeatmapLevelPackSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelPackSO::get_packName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelPackSO*), "get_packName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelPackSO::get_shortPackName
// Il2CppName: get_shortPackName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PreviewBeatmapLevelPackSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelPackSO::get_shortPackName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelPackSO*), "get_shortPackName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelPackSO::get_collectionName
// Il2CppName: get_collectionName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PreviewBeatmapLevelPackSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelPackSO::get_collectionName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelPackSO*), "get_collectionName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelPackSO::get_coverImage
// Il2CppName: get_coverImage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Sprite* (GlobalNamespace::PreviewBeatmapLevelPackSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelPackSO::get_coverImage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelPackSO*), "get_coverImage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelPackSO::get_smallCoverImage
// Il2CppName: get_smallCoverImage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Sprite* (GlobalNamespace::PreviewBeatmapLevelPackSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelPackSO::get_smallCoverImage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelPackSO*), "get_smallCoverImage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelPackSO::get_beatmapLevelCollection
// Il2CppName: get_beatmapLevelCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IBeatmapLevelCollection* (GlobalNamespace::PreviewBeatmapLevelPackSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelPackSO::get_beatmapLevelCollection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelPackSO*), "get_beatmapLevelCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelPackSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
