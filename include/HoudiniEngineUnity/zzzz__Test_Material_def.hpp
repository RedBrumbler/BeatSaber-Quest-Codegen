#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine {
class Material;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivableWrapperClass_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_Material;
}
// Type: HoudiniEngineUnity::Test_Material
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9870))
// CS Name: HoudiniEngineUnity.Test_Material
class CORDL_TYPE Test_Material : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to HoudiniEngineUnity::IEquivableWrapperClass_1<HoudiniEngineUnity::Test_Material>
constexpr operator  HoudiniEngineUnity::IEquivableWrapperClass_1<HoudiniEngineUnity::Test_Material>() const noexcept;

/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_Material>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_Material>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Test_Material() = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_Material", modifiers: " const&", def_value: None }]
constexpr Test_Material(Test_Material const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_Material", modifiers: "&&", def_value: None }]
constexpr Test_Material(Test_Material&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Test_Material(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Test_Material& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Test_Material& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Test_Material& operator=(Test_Material&& o) noexcept = default;
  constexpr Test_Material& operator=(Test_Material const& o) noexcept = default;
                


// Fields

 UnityEngine::Material __declspec(property(get=__get_self, put=__set_self))  self;

constexpr void __set_self(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_self() const;


// Methods

// Ctor Parameters [CppParam { name: "self", ty: "UnityEngine::Material", modifiers: "", def_value: None }]
explicit Test_Material(UnityEngine::Material self) ;

/// @brief Method .ctor addr 0x20a9b5c size 0x28 virtual false final false
 void _ctor(UnityEngine::Material self) ;

/// @brief Method IsNull addr 0x20a9b84 size 0x60 virtual true final true
 bool IsNull() ;

/// @brief Method IsEquivalentTo addr 0x20a9be4 size 0xf4 virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::Test_Material other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::Test_Material);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::Test_Material, "HoudiniEngineUnity", "Test_Material");
