// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AlphabetScrollbarInfoBeatmapLevelHelper
#include "GlobalNamespace/AlphabetScrollbarInfoBeatmapLevelHelper.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper::$$c*, "", "AlphabetScrollbarInfoBeatmapLevelHelper/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: AlphabetScrollbarInfoBeatmapLevelHelper/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class AlphabetScrollbarInfoBeatmapLevelHelper::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly AlphabetScrollbarInfoBeatmapLevelHelper/<>c <>9
    static ::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper::$$c* _get_$$9();
    // Set static field: static public readonly AlphabetScrollbarInfoBeatmapLevelHelper/<>c <>9
    static void _set_$$9(::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper::$$c* value);
    // Get static field: static public System.Func`2<IPreviewBeatmapLevel,System.String> <>9__3_0
    static ::System::Func_2<::GlobalNamespace::IPreviewBeatmapLevel*, ::StringW>* _get_$$9__3_0();
    // Set static field: static public System.Func`2<IPreviewBeatmapLevel,System.String> <>9__3_0
    static void _set_$$9__3_0(::System::Func_2<::GlobalNamespace::IPreviewBeatmapLevel*, ::StringW>* value);
    // static private System.Void .cctor()
    // Offset: 0x153EC90
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x153ECF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AlphabetScrollbarInfoBeatmapLevelHelper::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AlphabetScrollbarInfoBeatmapLevelHelper::$$c*, creationType>()));
    }
    // System.String <CreateData>b__3_0(IPreviewBeatmapLevel x)
    // Offset: 0x153ECFC
    ::StringW $CreateData$b__3_0(::GlobalNamespace::IPreviewBeatmapLevel* x);
  }; // AlphabetScrollbarInfoBeatmapLevelHelper/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper::$$c::$CreateData$b__3_0
// Il2CppName: <CreateData>b__3_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper::$$c::*)(::GlobalNamespace::IPreviewBeatmapLevel*)>(&GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper::$$c::$CreateData$b__3_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper::$$c*), "<CreateData>b__3_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
