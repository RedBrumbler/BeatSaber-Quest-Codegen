#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class StepValuePicker;
}
// Forward declare root types
namespace GlobalNamespace {
class IncDecSettingsController;
}
// Type: ::IncDecSettingsController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5690))
// CS Name: IncDecSettingsController
class CORDL_TYPE IncDecSettingsController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~IncDecSettingsController() = default;

// Ctor Parameters [CppParam { name: "", ty: "IncDecSettingsController", modifiers: " const&", def_value: None }]
constexpr IncDecSettingsController(IncDecSettingsController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IncDecSettingsController", modifiers: "&&", def_value: None }]
constexpr IncDecSettingsController(IncDecSettingsController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IncDecSettingsController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr IncDecSettingsController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IncDecSettingsController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IncDecSettingsController& operator=(IncDecSettingsController&& o) noexcept = default;
  constexpr IncDecSettingsController& operator=(IncDecSettingsController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::StepValuePicker __declspec(property(get=__get__stepValuePicker, put=__set__stepValuePicker))  _stepValuePicker;

constexpr void __set__stepValuePicker(GlobalNamespace::StepValuePicker value) ;

constexpr GlobalNamespace::StepValuePicker __get__stepValuePicker() const;


// Properties

 bool __declspec(property(put=set_enableDec))  enableDec;

 bool __declspec(property(put=set_enableInc))  enableInc;

 ::StringW __declspec(property(put=set_text))  text;


// Methods

/// @brief Method set_enableDec addr 0x2189c10 size 0x20 virtual false final false
 void set_enableDec(bool value) ;

/// @brief Method set_enableInc addr 0x2189c30 size 0x20 virtual false final false
 void set_enableInc(bool value) ;

/// @brief Method set_text addr 0x2189c50 size 0x1c virtual false final false
 void set_text(::StringW value) ;

/// @brief Method Awake addr 0x2189c6c size 0xc0 virtual true final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x2189d2c size 0x10c virtual false final false
 void OnDestroy() ;

/// @brief Method IncButtonPressed addr 0x0 size 0xffffffffffffffff virtual true final false
 void IncButtonPressed() ;

/// @brief Method DecButtonPressed addr 0x0 size 0xffffffffffffffff virtual true final false
 void DecButtonPressed() ;

// Ctor Parameters []
explicit IncDecSettingsController() ;

/// @brief Method .ctor addr 0x2189e38 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IncDecSettingsController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IncDecSettingsController, "", "IncDecSettingsController");
