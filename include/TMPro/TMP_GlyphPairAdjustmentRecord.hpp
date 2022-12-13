// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TMPro.TMP_GlyphAdjustmentRecord
#include "TMPro/TMP_GlyphAdjustmentRecord.hpp"
// Including type: TMPro.FontFeatureLookupFlags
#include "TMPro/FontFeatureLookupFlags.hpp"
// Including type: UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord
#include "UnityEngine/TextCore/LowLevel/GlyphPairAdjustmentRecord.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_GlyphPairAdjustmentRecord
  class TMP_GlyphPairAdjustmentRecord;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::TMPro::TMP_GlyphPairAdjustmentRecord);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_GlyphPairAdjustmentRecord*, "TMPro", "TMP_GlyphPairAdjustmentRecord");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_GlyphPairAdjustmentRecord
  // [TokenAttribute] Offset: FFFFFFFF
  class TMP_GlyphPairAdjustmentRecord : public ::Il2CppObject {
    public:
    public:
    // private TMPro.TMP_GlyphAdjustmentRecord m_FirstAdjustmentRecord
    // Size: 0x14
    // Offset: 0x10
    ::TMPro::TMP_GlyphAdjustmentRecord m_FirstAdjustmentRecord;
    // Field size check
    static_assert(sizeof(::TMPro::TMP_GlyphAdjustmentRecord) == 0x14);
    // private TMPro.TMP_GlyphAdjustmentRecord m_SecondAdjustmentRecord
    // Size: 0x14
    // Offset: 0x24
    ::TMPro::TMP_GlyphAdjustmentRecord m_SecondAdjustmentRecord;
    // Field size check
    static_assert(sizeof(::TMPro::TMP_GlyphAdjustmentRecord) == 0x14);
    // private TMPro.FontFeatureLookupFlags m_FeatureLookupFlags
    // Size: 0x4
    // Offset: 0x38
    ::TMPro::FontFeatureLookupFlags m_FeatureLookupFlags;
    // Field size check
    static_assert(sizeof(::TMPro::FontFeatureLookupFlags) == 0x4);
    public:
    // Get instance field reference: private TMPro.TMP_GlyphAdjustmentRecord m_FirstAdjustmentRecord
    [[deprecated("Use field access instead!")]] ::TMPro::TMP_GlyphAdjustmentRecord& dyn_m_FirstAdjustmentRecord();
    // Get instance field reference: private TMPro.TMP_GlyphAdjustmentRecord m_SecondAdjustmentRecord
    [[deprecated("Use field access instead!")]] ::TMPro::TMP_GlyphAdjustmentRecord& dyn_m_SecondAdjustmentRecord();
    // Get instance field reference: private TMPro.FontFeatureLookupFlags m_FeatureLookupFlags
    [[deprecated("Use field access instead!")]] ::TMPro::FontFeatureLookupFlags& dyn_m_FeatureLookupFlags();
    // public TMPro.TMP_GlyphAdjustmentRecord get_firstAdjustmentRecord()
    // Offset: 0x14B546C
    ::TMPro::TMP_GlyphAdjustmentRecord get_firstAdjustmentRecord();
    // public System.Void set_firstAdjustmentRecord(TMPro.TMP_GlyphAdjustmentRecord value)
    // Offset: 0x14B5480
    void set_firstAdjustmentRecord(::TMPro::TMP_GlyphAdjustmentRecord value);
    // public TMPro.TMP_GlyphAdjustmentRecord get_secondAdjustmentRecord()
    // Offset: 0x14B5494
    ::TMPro::TMP_GlyphAdjustmentRecord get_secondAdjustmentRecord();
    // public System.Void set_secondAdjustmentRecord(TMPro.TMP_GlyphAdjustmentRecord value)
    // Offset: 0x14B54A8
    void set_secondAdjustmentRecord(::TMPro::TMP_GlyphAdjustmentRecord value);
    // public TMPro.FontFeatureLookupFlags get_featureLookupFlags()
    // Offset: 0x14B54BC
    ::TMPro::FontFeatureLookupFlags get_featureLookupFlags();
    // public System.Void set_featureLookupFlags(TMPro.FontFeatureLookupFlags value)
    // Offset: 0x14B54C4
    void set_featureLookupFlags(::TMPro::FontFeatureLookupFlags value);
    // public System.Void .ctor(TMPro.TMP_GlyphAdjustmentRecord firstAdjustmentRecord, TMPro.TMP_GlyphAdjustmentRecord secondAdjustmentRecord)
    // Offset: 0x14B3B70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_GlyphPairAdjustmentRecord* New_ctor(::TMPro::TMP_GlyphAdjustmentRecord firstAdjustmentRecord, ::TMPro::TMP_GlyphAdjustmentRecord secondAdjustmentRecord) {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::TMP_GlyphPairAdjustmentRecord::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_GlyphPairAdjustmentRecord*, creationType>(firstAdjustmentRecord, secondAdjustmentRecord)));
    }
    // System.Void .ctor(UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord glyphPairAdjustmentRecord)
    // Offset: 0x14B35B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_GlyphPairAdjustmentRecord* New_ctor(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord glyphPairAdjustmentRecord) {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::TMP_GlyphPairAdjustmentRecord::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_GlyphPairAdjustmentRecord*, creationType>(glyphPairAdjustmentRecord)));
    }
  }; // TMPro.TMP_GlyphPairAdjustmentRecord
  #pragma pack(pop)
  static check_size<sizeof(TMP_GlyphPairAdjustmentRecord), 56 + sizeof(::TMPro::FontFeatureLookupFlags)> __TMPro_TMP_GlyphPairAdjustmentRecordSizeCheck;
  static_assert(sizeof(TMP_GlyphPairAdjustmentRecord) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_GlyphPairAdjustmentRecord::get_firstAdjustmentRecord
// Il2CppName: get_firstAdjustmentRecord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_GlyphAdjustmentRecord (TMPro::TMP_GlyphPairAdjustmentRecord::*)()>(&TMPro::TMP_GlyphPairAdjustmentRecord::get_firstAdjustmentRecord)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_GlyphPairAdjustmentRecord*), "get_firstAdjustmentRecord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_GlyphPairAdjustmentRecord::set_firstAdjustmentRecord
// Il2CppName: set_firstAdjustmentRecord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_GlyphPairAdjustmentRecord::*)(::TMPro::TMP_GlyphAdjustmentRecord)>(&TMPro::TMP_GlyphPairAdjustmentRecord::set_firstAdjustmentRecord)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_GlyphAdjustmentRecord")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_GlyphPairAdjustmentRecord*), "set_firstAdjustmentRecord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_GlyphPairAdjustmentRecord::get_secondAdjustmentRecord
// Il2CppName: get_secondAdjustmentRecord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_GlyphAdjustmentRecord (TMPro::TMP_GlyphPairAdjustmentRecord::*)()>(&TMPro::TMP_GlyphPairAdjustmentRecord::get_secondAdjustmentRecord)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_GlyphPairAdjustmentRecord*), "get_secondAdjustmentRecord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_GlyphPairAdjustmentRecord::set_secondAdjustmentRecord
// Il2CppName: set_secondAdjustmentRecord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_GlyphPairAdjustmentRecord::*)(::TMPro::TMP_GlyphAdjustmentRecord)>(&TMPro::TMP_GlyphPairAdjustmentRecord::set_secondAdjustmentRecord)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_GlyphAdjustmentRecord")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_GlyphPairAdjustmentRecord*), "set_secondAdjustmentRecord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_GlyphPairAdjustmentRecord::get_featureLookupFlags
// Il2CppName: get_featureLookupFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::FontFeatureLookupFlags (TMPro::TMP_GlyphPairAdjustmentRecord::*)()>(&TMPro::TMP_GlyphPairAdjustmentRecord::get_featureLookupFlags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_GlyphPairAdjustmentRecord*), "get_featureLookupFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_GlyphPairAdjustmentRecord::set_featureLookupFlags
// Il2CppName: set_featureLookupFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_GlyphPairAdjustmentRecord::*)(::TMPro::FontFeatureLookupFlags)>(&TMPro::TMP_GlyphPairAdjustmentRecord::set_featureLookupFlags)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("TMPro", "FontFeatureLookupFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_GlyphPairAdjustmentRecord*), "set_featureLookupFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_GlyphPairAdjustmentRecord::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::TMP_GlyphPairAdjustmentRecord::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
