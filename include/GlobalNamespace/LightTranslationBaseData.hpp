// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: EaseType
#include "GlobalNamespace/EaseType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LightTranslationBaseData
  class LightTranslationBaseData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LightTranslationBaseData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightTranslationBaseData*, "", "LightTranslationBaseData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: LightTranslationBaseData
  // [TokenAttribute] Offset: FFFFFFFF
  class LightTranslationBaseData : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Single beat
    // Size: 0x4
    // Offset: 0x10
    float beat;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Boolean usePreviousEventTranslationValue
    // Size: 0x1
    // Offset: 0x14
    bool usePreviousEventTranslationValue;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: usePreviousEventTranslationValue and: easeType
    char __padding1[0x3] = {};
    // public readonly EaseType easeType
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::EaseType easeType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EaseType) == 0x4);
    // public readonly System.Single translation
    // Size: 0x4
    // Offset: 0x1C
    float translation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public readonly System.Single beat
    [[deprecated("Use field access instead!")]] float& dyn_beat();
    // Get instance field reference: public readonly System.Boolean usePreviousEventTranslationValue
    [[deprecated("Use field access instead!")]] bool& dyn_usePreviousEventTranslationValue();
    // Get instance field reference: public readonly EaseType easeType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EaseType& dyn_easeType();
    // Get instance field reference: public readonly System.Single translation
    [[deprecated("Use field access instead!")]] float& dyn_translation();
    // public System.Void .ctor(System.Single beat, System.Boolean usePreviousEventTranslationValue, EaseType easeType, System.Single translation)
    // Offset: 0x1557A30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightTranslationBaseData* New_ctor(float beat, bool usePreviousEventTranslationValue, ::GlobalNamespace::EaseType easeType, float translation) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightTranslationBaseData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightTranslationBaseData*, creationType>(beat, usePreviousEventTranslationValue, easeType, translation)));
    }
  }; // LightTranslationBaseData
  #pragma pack(pop)
  static check_size<sizeof(LightTranslationBaseData), 28 + sizeof(float)> __GlobalNamespace_LightTranslationBaseDataSizeCheck;
  static_assert(sizeof(LightTranslationBaseData) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightTranslationBaseData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
