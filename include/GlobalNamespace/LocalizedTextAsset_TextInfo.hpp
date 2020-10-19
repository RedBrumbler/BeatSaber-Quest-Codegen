// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LocalizedTextAsset
#include "GlobalNamespace/LocalizedTextAsset.hpp"
// Including type: Polyglot.Language
#include "Polyglot/Language.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextAsset
  class TextAsset;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LocalizedTextAsset/TextInfo
  class LocalizedTextAsset::TextInfo : public ::Il2CppObject {
    public:
    // public Polyglot.Language language
    // Offset: 0x10
    Polyglot::Language language;
    // public UnityEngine.TextAsset localizedText
    // Offset: 0x18
    UnityEngine::TextAsset* localizedText;
    // public System.Void .ctor()
    // Offset: 0x20AA3F8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static LocalizedTextAsset::TextInfo* New_ctor();
  }; // LocalizedTextAsset/TextInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalizedTextAsset::TextInfo*, "", "LocalizedTextAsset/TextInfo");
#pragma pack(pop)