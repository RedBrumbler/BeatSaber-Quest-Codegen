// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Char
#include "System/Char.hpp"
// Including type: AlphabetScrollInfo
#include "GlobalNamespace/AlphabetScrollInfo.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: AlphabetScrollbarInfoBeatmapLevelHelper
  class AlphabetScrollbarInfoBeatmapLevelHelper : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper::$$c
    class $$c;
    // Creating value type constructor for type: AlphabetScrollbarInfoBeatmapLevelHelper
    AlphabetScrollbarInfoBeatmapLevelHelper() noexcept {}
    // static field const value: static private System.String kFirstAlphabet
    static constexpr const char* kFirstAlphabet = "A";
    // Get static field: static private System.String kFirstAlphabet
    static ::Il2CppString* _get_kFirstAlphabet();
    // Set static field: static private System.String kFirstAlphabet
    static void _set_kFirstAlphabet(::Il2CppString* value);
    // static field const value: static private System.Char kNonAlphabetChar
    static constexpr const ::Il2CppChar kNonAlphabetChar = u'#';
    // Get static field: static private System.Char kNonAlphabetChar
    static ::Il2CppChar _get_kNonAlphabetChar();
    // Set static field: static private System.Char kNonAlphabetChar
    static void _set_kNonAlphabetChar(::Il2CppChar value);
    // static field const value: static private System.Int32 kMaxCharactersCount
    static constexpr const int kMaxCharactersCount = 28;
    // Get static field: static private System.Int32 kMaxCharactersCount
    static int _get_kMaxCharactersCount();
    // Set static field: static private System.Int32 kMaxCharactersCount
    static void _set_kMaxCharactersCount(int value);
    // static public AlphabetScrollInfo/Data[] CreateData(IPreviewBeatmapLevel[] previewBeatmapLevels, out IPreviewBeatmapLevel[] sortedPreviewBeatmapLevels)
    // Offset: 0x112C54C
    static ::Array<GlobalNamespace::AlphabetScrollInfo::Data*>* CreateData(::Array<GlobalNamespace::IPreviewBeatmapLevel*>* previewBeatmapLevels, ::Array<GlobalNamespace::IPreviewBeatmapLevel*>*& sortedPreviewBeatmapLevels);
  }; // AlphabetScrollbarInfoBeatmapLevelHelper
  #pragma pack(pop)
  // Writing MetadataGetter for method: AlphabetScrollbarInfoBeatmapLevelHelper::CreateData
  // Il2CppName: CreateData
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::AlphabetScrollInfo::Data*>* (*)(::Array<GlobalNamespace::IPreviewBeatmapLevel*>*, ::Array<GlobalNamespace::IPreviewBeatmapLevel*>*&)>(&AlphabetScrollbarInfoBeatmapLevelHelper::CreateData)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(AlphabetScrollbarInfoBeatmapLevelHelper*), "CreateData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<GlobalNamespace::IPreviewBeatmapLevel*>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<GlobalNamespace::IPreviewBeatmapLevel*>*&>()});
    }
  };
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper*, "", "AlphabetScrollbarInfoBeatmapLevelHelper");
