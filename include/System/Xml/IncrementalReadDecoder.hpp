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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: IncrementalReadDecoder
  class IncrementalReadDecoder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::IncrementalReadDecoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::IncrementalReadDecoder*, "System.Xml", "IncrementalReadDecoder");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.IncrementalReadDecoder
  // [TokenAttribute] Offset: FFFFFFFF
  class IncrementalReadDecoder : public ::Il2CppObject {
    public:
    // System.Boolean get_IsFull()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsFull();
    // protected System.Void .ctor()
    // Offset: 0x1B182CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IncrementalReadDecoder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::IncrementalReadDecoder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IncrementalReadDecoder*, creationType>()));
    }
    // System.Int32 Decode(System.Char[] chars, System.Int32 startPos, System.Int32 len)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int Decode(::ArrayW<::Il2CppChar> chars, int startPos, int len);
  }; // System.Xml.IncrementalReadDecoder
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::IncrementalReadDecoder::get_IsFull
// Il2CppName: get_IsFull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::IncrementalReadDecoder::*)()>(&System::Xml::IncrementalReadDecoder::get_IsFull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::IncrementalReadDecoder*), "get_IsFull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::IncrementalReadDecoder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::IncrementalReadDecoder::Decode
// Il2CppName: Decode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::IncrementalReadDecoder::*)(::ArrayW<::Il2CppChar>, int, int)>(&System::Xml::IncrementalReadDecoder::Decode)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* startPos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::IncrementalReadDecoder*), "Decode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, startPos, len});
  }
};
