// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.ObjectModel.Collection`1
#include "System/Collections/ObjectModel/Collection_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json
namespace Newtonsoft::Json {
  // Forward declaring type: JsonConverter
  class JsonConverter;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Forward declaring type: JsonConverterCollection
  class JsonConverterCollection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::JsonConverterCollection);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonConverterCollection*, "Newtonsoft.Json", "JsonConverterCollection");
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // WARNING Size may be invalid!
  // Autogenerated type: Newtonsoft.Json.JsonConverterCollection
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: 10FD854
  class JsonConverterCollection : public ::System::Collections::ObjectModel::Collection_1<::Newtonsoft::Json::JsonConverter*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x18250FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonConverterCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::JsonConverterCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonConverterCollection*, creationType>()));
    }
  }; // Newtonsoft.Json.JsonConverterCollection
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::JsonConverterCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
