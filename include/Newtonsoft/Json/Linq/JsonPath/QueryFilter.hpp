// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Linq.JsonPath.PathFilter
#include "Newtonsoft/Json/Linq/JsonPath/PathFilter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json::Linq::JsonPath
namespace Newtonsoft::Json::Linq::JsonPath {
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Linq.JsonPath
namespace Newtonsoft::Json::Linq::JsonPath {
  // Forward declaring type: QueryFilter
  class QueryFilter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::QueryFilter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::QueryFilter*, "Newtonsoft.Json.Linq.JsonPath", "QueryFilter");
// Type namespace: Newtonsoft.Json.Linq.JsonPath
namespace Newtonsoft::Json::Linq::JsonPath {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Linq.JsonPath.QueryFilter
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class QueryFilter : public ::Newtonsoft::Json::Linq::JsonPath::PathFilter {
    public:
    // Nested type: ::Newtonsoft::Json::Linq::JsonPath::QueryFilter::$ExecuteFilter$d__4
    class $ExecuteFilter$d__4;
    // public System.Void .ctor()
    // Offset: 0x17ACB00
    // Implemented from: Newtonsoft.Json.Linq.JsonPath.PathFilter
    // Base method: System.Void PathFilter::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static QueryFilter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Linq::JsonPath::QueryFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<QueryFilter*, creationType>()));
    }
  }; // Newtonsoft.Json.Linq.JsonPath.QueryFilter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JsonPath::QueryFilter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
