// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: AttributeDictionary
  class AttributeDictionary;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Interfaces::AttributeDictionary);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Interfaces::AttributeDictionary*, "NUnit.Framework.Interfaces", "AttributeDictionary");
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // WARNING Size may be invalid!
  // Autogenerated type: NUnit.Framework.Interfaces.AttributeDictionary
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 1117518
  class AttributeDictionary : public ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW> {
    public:
    // public System.String get_Item(System.String key)
    // Offset: 0x1D6E4A8
    ::StringW get_Item(::StringW key);
    // public System.Void .ctor()
    // Offset: 0x1D6E520
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AttributeDictionary* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::Interfaces::AttributeDictionary::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AttributeDictionary*, creationType>()));
    }
  }; // NUnit.Framework.Interfaces.AttributeDictionary
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::AttributeDictionary::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (NUnit::Framework::Interfaces::AttributeDictionary::*)(::StringW)>(&NUnit::Framework::Interfaces::AttributeDictionary::get_Item)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::AttributeDictionary*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::AttributeDictionary::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
