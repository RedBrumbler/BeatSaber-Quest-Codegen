// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Linq.JsonPath.QueryExpression
#include "Newtonsoft/Json/Linq/JsonPath/QueryExpression.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Newtonsoft.Json.Linq.JsonPath
namespace Newtonsoft::Json::Linq::JsonPath {
  // Forward declaring type: BooleanQueryExpression
  class BooleanQueryExpression;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression*, "Newtonsoft.Json.Linq.JsonPath", "BooleanQueryExpression");
// Type namespace: Newtonsoft.Json.Linq.JsonPath
namespace Newtonsoft::Json::Linq::JsonPath {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Linq.JsonPath.BooleanQueryExpression
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class BooleanQueryExpression : public ::Newtonsoft::Json::Linq::JsonPath::QueryExpression {
    public:
    // public System.Void .ctor()
    // Offset: 0x17BCA18
    // Implemented from: Newtonsoft.Json.Linq.JsonPath.QueryExpression
    // Base method: System.Void QueryExpression::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BooleanQueryExpression* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BooleanQueryExpression*, creationType>()));
    }
  }; // Newtonsoft.Json.Linq.JsonPath.BooleanQueryExpression
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
