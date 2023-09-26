#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerInternalBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Newtonsoft::Json::Serialization {
class JsonProperty;
}
namespace Newtonsoft::Json::Serialization {
class JsonSerializerProxy;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace Newtonsoft::Json::Serialization {
class JsonObjectContract;
}
namespace Newtonsoft::Json {
struct TypeNameHandling;
}
namespace Newtonsoft::Json::Serialization {
class JsonPrimitiveContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonArrayContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonStringContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonContainerContract;
}
namespace Newtonsoft::Json {
struct DefaultValueHandling;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System {
class Type;
}
namespace Newtonsoft::Json::Serialization {
class JsonDictionaryContract;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Array;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IDictionary;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace Newtonsoft::Json {
struct PreserveReferencesHandling;
}
namespace Newtonsoft::Json::Serialization {
class JsonISerializableContract;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonSerializerInternalWriter;
}
// Type: Newtonsoft.Json.Serialization::JsonSerializerInternalWriter
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11911))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11917))
// CS Name: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter
class CORDL_TYPE JsonSerializerInternalWriter : public Newtonsoft::Json::Serialization::JsonSerializerInternalBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~JsonSerializerInternalWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonSerializerInternalWriter", modifiers: " const&", def_value: None }]
constexpr JsonSerializerInternalWriter(JsonSerializerInternalWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonSerializerInternalWriter", modifiers: "&&", def_value: None }]
constexpr JsonSerializerInternalWriter(JsonSerializerInternalWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonSerializerInternalWriter(void* ptr) noexcept : Newtonsoft::Json::Serialization::JsonSerializerInternalBase(ptr) {
}


  constexpr JsonSerializerInternalWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonSerializerInternalWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonSerializerInternalWriter& operator=(JsonSerializerInternalWriter&& o) noexcept = default;
  constexpr JsonSerializerInternalWriter& operator=(JsonSerializerInternalWriter const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get__rootType, put=__set__rootType))  _rootType;

constexpr void __set__rootType(System::Type value) ;

constexpr System::Type __get__rootType() const;

 int32_t __declspec(property(get=__get__rootLevel, put=__set__rootLevel))  _rootLevel;

constexpr void __set__rootLevel(int32_t value) ;

constexpr int32_t __get__rootLevel() const;

 System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__serializeStack, put=__set__serializeStack))  _serializeStack;

constexpr void __set__serializeStack(System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> value) ;

constexpr System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> __get__serializeStack() const;


// Methods

// Ctor Parameters [CppParam { name: "serializer", ty: "Newtonsoft::Json::JsonSerializer", modifiers: "", def_value: None }]
explicit JsonSerializerInternalWriter(Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method .ctor addr 0x253f778 size 0x8c virtual false final false
 void _ctor(Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method Serialize addr 0x253f804 size 0x260 virtual false final false
 void Serialize(Newtonsoft::Json::JsonWriter jsonWriter, ::bs_hook::Il2CppWrapperType value, System::Type objectType) ;

/// @brief Method GetInternalSerializer addr 0x25405ac size 0x6c virtual false final false
 Newtonsoft::Json::Serialization::JsonSerializerProxy GetInternalSerializer() ;

/// @brief Method GetContractSafe addr 0x253fa64 size 0xd4 virtual false final false
 Newtonsoft::Json::Serialization::JsonContract GetContractSafe(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method SerializePrimitive addr 0x2540694 size 0x168 virtual false final false
 void SerializePrimitive(Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::Serialization::JsonPrimitiveContract contract, Newtonsoft::Json::Serialization::JsonProperty member, Newtonsoft::Json::Serialization::JsonContainerContract containerContract, Newtonsoft::Json::Serialization::JsonProperty containerProperty) ;

/// @brief Method SerializeValue addr 0x253ff54 size 0x5e0 virtual false final false
 void SerializeValue(Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::Serialization::JsonContract valueContract, Newtonsoft::Json::Serialization::JsonProperty member, Newtonsoft::Json::Serialization::JsonContainerContract containerContract, Newtonsoft::Json::Serialization::JsonProperty containerProperty) ;

/// @brief Method ResolveIsReference addr 0x2542e98 size 0xb0 virtual false final false
 System::Nullable_1<bool> ResolveIsReference(Newtonsoft::Json::Serialization::JsonContract contract, Newtonsoft::Json::Serialization::JsonProperty property, Newtonsoft::Json::Serialization::JsonContainerContract collectionContract, Newtonsoft::Json::Serialization::JsonProperty containerProperty) ;

/// @brief Method ShouldWriteReference addr 0x253fb38 size 0x198 virtual false final false
 bool ShouldWriteReference(::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::Serialization::JsonProperty property, Newtonsoft::Json::Serialization::JsonContract valueContract, Newtonsoft::Json::Serialization::JsonContainerContract collectionContract, Newtonsoft::Json::Serialization::JsonProperty containerProperty) ;

/// @brief Method ShouldWriteProperty addr 0x2542f54 size 0xf8 virtual false final false
 bool ShouldWriteProperty(::bs_hook::Il2CppWrapperType memberValue, Newtonsoft::Json::Serialization::JsonProperty property) ;

/// @brief Method CheckForCircularReference addr 0x2543058 size 0x55c virtual false final false
 bool CheckForCircularReference(Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::Serialization::JsonProperty property, Newtonsoft::Json::Serialization::JsonContract contract, Newtonsoft::Json::Serialization::JsonContainerContract containerContract, Newtonsoft::Json::Serialization::JsonProperty containerProperty) ;

/// @brief Method WriteReference addr 0x253fcd0 size 0x284 virtual false final false
 void WriteReference(Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetReference addr 0x25435b4 size 0x1ec virtual false final false
 ::StringW GetReference(Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method TryConvertToString addr 0x25437a0 size 0x1d4 virtual false final false
static bool TryConvertToString(::bs_hook::Il2CppWrapperType value, System::Type type, ByRef<::StringW> s) ;

/// @brief Method SerializeString addr 0x2542144 size 0x80 virtual false final false
 void SerializeString(Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::Serialization::JsonStringContract contract) ;

/// @brief Method OnSerializing addr 0x2543974 size 0x208 virtual false final false
 void OnSerializing(Newtonsoft::Json::JsonWriter writer, Newtonsoft::Json::Serialization::JsonContract contract, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method OnSerialized addr 0x2543b7c size 0x208 virtual false final false
 void OnSerialized(Newtonsoft::Json::JsonWriter writer, Newtonsoft::Json::Serialization::JsonContract contract, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method SerializeObject addr 0x2541170 size 0x724 virtual false final false
 void SerializeObject(Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::Serialization::JsonObjectContract contract, Newtonsoft::Json::Serialization::JsonProperty member, Newtonsoft::Json::Serialization::JsonContainerContract collectionContract, Newtonsoft::Json::Serialization::JsonProperty containerProperty) ;

/// @brief Method CalculatePropertyValues addr 0x2543eb8 size 0x3f4 virtual false final false
 bool CalculatePropertyValues(Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::Serialization::JsonContainerContract contract, Newtonsoft::Json::Serialization::JsonProperty member, Newtonsoft::Json::Serialization::JsonProperty property, ByRef<Newtonsoft::Json::Serialization::JsonContract> memberContract, ByRef<::bs_hook::Il2CppWrapperType> memberValue) ;

/// @brief Method WriteObjectStart addr 0x2543d84 size 0x134 virtual false final false
 void WriteObjectStart(Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::Serialization::JsonContract contract, Newtonsoft::Json::Serialization::JsonProperty member, Newtonsoft::Json::Serialization::JsonContainerContract collectionContract, Newtonsoft::Json::Serialization::JsonProperty containerProperty) ;

/// @brief Method WriteReferenceIdProperty addr 0x2544aec size 0x254 virtual false final false
 void WriteReferenceIdProperty(Newtonsoft::Json::JsonWriter writer, System::Type type, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method WriteTypeProperty addr 0x25409c4 size 0x288 virtual false final false
 void WriteTypeProperty(Newtonsoft::Json::JsonWriter writer, System::Type type) ;

/// @brief Method HasFlag addr 0x254304c size 0xc virtual false final false
 bool HasFlag(Newtonsoft::Json::DefaultValueHandling value, Newtonsoft::Json::DefaultValueHandling flag) ;

/// @brief Method HasFlag addr 0x2542f48 size 0xc virtual false final false
 bool HasFlag(Newtonsoft::Json::PreserveReferencesHandling value, Newtonsoft::Json::PreserveReferencesHandling flag) ;

/// @brief Method HasFlag addr 0x2544d40 size 0xc virtual false final false
 bool HasFlag(Newtonsoft::Json::TypeNameHandling value, Newtonsoft::Json::TypeNameHandling flag) ;

/// @brief Method SerializeConvertable addr 0x2540c4c size 0x524 virtual false final false
 void SerializeConvertable(Newtonsoft::Json::JsonWriter writer, Newtonsoft::Json::JsonConverter converter, ::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::Serialization::JsonContract contract, Newtonsoft::Json::Serialization::JsonContainerContract collectionContract, Newtonsoft::Json::Serialization::JsonProperty containerProperty) ;

/// @brief Method SerializeList addr 0x2541894 size 0x6f4 virtual false final false
 void SerializeList(Newtonsoft::Json::JsonWriter writer, System::Collections::IEnumerable values, Newtonsoft::Json::Serialization::JsonArrayContract contract, Newtonsoft::Json::Serialization::JsonProperty member, Newtonsoft::Json::Serialization::JsonContainerContract collectionContract, Newtonsoft::Json::Serialization::JsonProperty containerProperty) ;

/// @brief Method SerializeMultidimensionalArray addr 0x2541f88 size 0x1bc virtual false final false
 void SerializeMultidimensionalArray(Newtonsoft::Json::JsonWriter writer, System::Array values, Newtonsoft::Json::Serialization::JsonArrayContract contract, Newtonsoft::Json::Serialization::JsonProperty member, Newtonsoft::Json::Serialization::JsonContainerContract collectionContract, Newtonsoft::Json::Serialization::JsonProperty containerProperty) ;

/// @brief Method SerializeMultidimensionalArray addr 0x2544fe8 size 0x36c virtual false final false
 void SerializeMultidimensionalArray(Newtonsoft::Json::JsonWriter writer, System::Array values, Newtonsoft::Json::Serialization::JsonArrayContract contract, Newtonsoft::Json::Serialization::JsonProperty member, int32_t initialDepth, ::ArrayW<int32_t> indices) ;

/// @brief Method WriteStartArray addr 0x2544d4c size 0x29c virtual false final false
 bool WriteStartArray(Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType values, Newtonsoft::Json::Serialization::JsonArrayContract contract, Newtonsoft::Json::Serialization::JsonProperty member, Newtonsoft::Json::Serialization::JsonContainerContract containerContract, Newtonsoft::Json::Serialization::JsonProperty containerProperty) ;

/// @brief Method SerializeISerializable addr 0x2542a34 size 0x464 virtual false final false
 void SerializeISerializable(Newtonsoft::Json::JsonWriter writer, System::Runtime::Serialization::ISerializable value, Newtonsoft::Json::Serialization::JsonISerializableContract contract, Newtonsoft::Json::Serialization::JsonProperty member, Newtonsoft::Json::Serialization::JsonContainerContract collectionContract, Newtonsoft::Json::Serialization::JsonProperty containerProperty) ;

/// @brief Method ShouldWriteDynamicProperty addr 0x2545530 size 0xbc virtual false final false
 bool ShouldWriteDynamicProperty(::bs_hook::Il2CppWrapperType memberValue) ;

/// @brief Method ShouldWriteType addr 0x25407fc size 0x1c8 virtual false final false
 bool ShouldWriteType(Newtonsoft::Json::TypeNameHandling typeNameHandlingFlag, Newtonsoft::Json::Serialization::JsonContract contract, Newtonsoft::Json::Serialization::JsonProperty member, Newtonsoft::Json::Serialization::JsonContainerContract containerContract, Newtonsoft::Json::Serialization::JsonProperty containerProperty) ;

/// @brief Method SerializeDictionary addr 0x25421c4 size 0x870 virtual false final false
 void SerializeDictionary(Newtonsoft::Json::JsonWriter writer, System::Collections::IDictionary values, Newtonsoft::Json::Serialization::JsonDictionaryContract contract, Newtonsoft::Json::Serialization::JsonProperty member, Newtonsoft::Json::Serialization::JsonContainerContract collectionContract, Newtonsoft::Json::Serialization::JsonProperty containerProperty) ;

/// @brief Method GetPropertyName addr 0x25442ac size 0x360 virtual false final false
 ::StringW GetPropertyName(Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType name, Newtonsoft::Json::Serialization::JsonContract contract, ByRef<bool> escape) ;

/// @brief Method HandleError addr 0x2540534 size 0x78 virtual false final false
 void HandleError(Newtonsoft::Json::JsonWriter writer, int32_t initialDepth) ;

/// @brief Method ShouldSerialize addr 0x254460c size 0x270 virtual false final false
 bool ShouldSerialize(Newtonsoft::Json::JsonWriter writer, Newtonsoft::Json::Serialization::JsonProperty property, ::bs_hook::Il2CppWrapperType target) ;

/// @brief Method IsSpecified addr 0x254487c size 0x270 virtual false final false
 bool IsSpecified(Newtonsoft::Json::JsonWriter writer, Newtonsoft::Json::Serialization::JsonProperty property, ::bs_hook::Il2CppWrapperType target) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(Newtonsoft::Json::Serialization::JsonSerializerInternalWriter);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::JsonSerializerInternalWriter, "Newtonsoft.Json.Serialization", "JsonSerializerInternalWriter");
