// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro::SpriteAssetUtilities
namespace TMPro::SpriteAssetUtilities {
}
// Completed forward declares
// Type namespace: TMPro.SpriteAssetUtilities
namespace TMPro::SpriteAssetUtilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.SpriteAssetUtilities.TexturePacker
  class TexturePacker : public ::Il2CppObject {
    public:
    // Nested type: TMPro::SpriteAssetUtilities::TexturePacker::SpriteFrame
    struct SpriteFrame;
    // Nested type: TMPro::SpriteAssetUtilities::TexturePacker::SpriteSize
    struct SpriteSize;
    // Nested type: TMPro::SpriteAssetUtilities::TexturePacker::SpriteData
    struct SpriteData;
    // Nested type: TMPro::SpriteAssetUtilities::TexturePacker::SpriteDataObject
    class SpriteDataObject;
    // Creating value type constructor for type: TexturePacker
    TexturePacker() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x10E7A50
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TexturePacker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::SpriteAssetUtilities::TexturePacker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TexturePacker*, creationType>()));
    }
  }; // TMPro.SpriteAssetUtilities.TexturePacker
  #pragma pack(pop)
  // Writing MetadataGetter for method: TexturePacker::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TexturePacker::*)()>(&TexturePacker::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(TexturePacker*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TexturePacker::*)()>(&TexturePacker::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(TexturePacker*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::SpriteAssetUtilities::TexturePacker*, "TMPro.SpriteAssetUtilities", "TexturePacker");
