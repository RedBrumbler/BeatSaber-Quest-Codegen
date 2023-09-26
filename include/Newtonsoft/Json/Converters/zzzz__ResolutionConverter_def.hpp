#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System {
class Type;
}
namespace Newtonsoft::Json {
class JsonReader;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class ResolutionConverter;
}
// Type: Newtonsoft.Json.Converters::ResolutionConverter
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11791))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12002))
// CS Name: Newtonsoft.Json.Converters.ResolutionConverter
class CORDL_TYPE ResolutionConverter : public Newtonsoft::Json::JsonConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ResolutionConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "ResolutionConverter", modifiers: " const&", def_value: None }]
constexpr ResolutionConverter(ResolutionConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ResolutionConverter", modifiers: "&&", def_value: None }]
constexpr ResolutionConverter(ResolutionConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ResolutionConverter(void* ptr) noexcept : Newtonsoft::Json::JsonConverter(ptr) {
}


  constexpr ResolutionConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ResolutionConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ResolutionConverter& operator=(ResolutionConverter&& o) noexcept = default;
  constexpr ResolutionConverter& operator=(ResolutionConverter const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_CanRead))  CanRead;


// Methods

/// @brief Method WriteJson addr 0x256ea40 size 0x1ac virtual true final false
 void WriteJson(Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method CanConvert addr 0x256ebec size 0x84 virtual true final false
 bool CanConvert(System::Type objectType) ;

/// @brief Method ReadJson addr 0x256ec70 size 0x16c virtual true final false
 ::bs_hook::Il2CppWrapperType ReadJson(Newtonsoft::Json::JsonReader reader, System::Type objectType, ::bs_hook::Il2CppWrapperType existingValue, Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method get_CanRead addr 0x256eddc size 0x8 virtual true final false
 bool get_CanRead() ;

// Ctor Parameters []
explicit ResolutionConverter() ;

/// @brief Method .ctor addr 0x256ede4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(Newtonsoft::Json::Converters::ResolutionConverter);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Converters::ResolutionConverter, "Newtonsoft.Json.Converters", "ResolutionConverter");
