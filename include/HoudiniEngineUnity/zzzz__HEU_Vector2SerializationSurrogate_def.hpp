#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
namespace System::Runtime::Serialization {
class ISerializationSurrogate;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_Vector2SerializationSurrogate;
}
// Type: HoudiniEngineUnity::HEU_Vector2SerializationSurrogate
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9576))
// CS Name: HoudiniEngineUnity.HEU_Vector2SerializationSurrogate
class CORDL_TYPE HEU_Vector2SerializationSurrogate : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::ISerializationSurrogate
constexpr operator  System::Runtime::Serialization::ISerializationSurrogate() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HEU_Vector2SerializationSurrogate() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_Vector2SerializationSurrogate", modifiers: " const&", def_value: None }]
constexpr HEU_Vector2SerializationSurrogate(HEU_Vector2SerializationSurrogate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_Vector2SerializationSurrogate", modifiers: "&&", def_value: None }]
constexpr HEU_Vector2SerializationSurrogate(HEU_Vector2SerializationSurrogate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_Vector2SerializationSurrogate(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_Vector2SerializationSurrogate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_Vector2SerializationSurrogate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_Vector2SerializationSurrogate& operator=(HEU_Vector2SerializationSurrogate&& o) noexcept = default;
  constexpr HEU_Vector2SerializationSurrogate& operator=(HEU_Vector2SerializationSurrogate const& o) noexcept = default;
                


// Methods

/// @brief Method System.Runtime.Serialization.ISerializationSurrogate.GetObjectData addr 0x2016430 size 0xc8 virtual true final true
 void System_Runtime_Serialization_ISerializationSurrogate_GetObjectData(::bs_hook::Il2CppWrapperType obj, System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method System.Runtime.Serialization.ISerializationSurrogate.SetObjectData addr 0x20164f8 size 0x198 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Runtime_Serialization_ISerializationSurrogate_SetObjectData(::bs_hook::Il2CppWrapperType obj, System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::ISurrogateSelector selector) ;

// Ctor Parameters []
explicit HEU_Vector2SerializationSurrogate() ;

/// @brief Method .ctor addr 0x2015548 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_Vector2SerializationSurrogate);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_Vector2SerializationSurrogate, "HoudiniEngineUnity", "HEU_Vector2SerializationSurrogate");
