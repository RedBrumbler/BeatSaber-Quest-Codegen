#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ListSettingsController_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IntListSettingsController;
}
// Type: ::IntListSettingsController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5693))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5692))
// CS Name: IntListSettingsController
class CORDL_TYPE IntListSettingsController : public GlobalNamespace::ListSettingsController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~IntListSettingsController() = default;

// Ctor Parameters [CppParam { name: "", ty: "IntListSettingsController", modifiers: " const&", def_value: None }]
constexpr IntListSettingsController(IntListSettingsController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IntListSettingsController", modifiers: "&&", def_value: None }]
constexpr IntListSettingsController(IntListSettingsController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IntListSettingsController(void* ptr) noexcept : GlobalNamespace::ListSettingsController(ptr) {
}


  constexpr IntListSettingsController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IntListSettingsController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IntListSettingsController& operator=(IntListSettingsController&& o) noexcept = default;
  constexpr IntListSettingsController& operator=(IntListSettingsController const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__customNumberOfElements, put=__set__customNumberOfElements))  _customNumberOfElements;

constexpr void __set__customNumberOfElements(int32_t value) ;

constexpr int32_t __get__customNumberOfElements() const;

 int32_t __declspec(property(get=__get__customIndex, put=__set__customIndex))  _customIndex;

constexpr void __set__customIndex(int32_t value) ;

constexpr int32_t __get__customIndex() const;

 System::Action_1<int32_t> __declspec(property(get=__get_valueChangedEvent, put=__set_valueChangedEvent))  valueChangedEvent;

constexpr void __set_valueChangedEvent(System::Action_1<int32_t> value) ;

constexpr System::Action_1<int32_t> __get_valueChangedEvent() const;


// Methods

/// @brief Method add_valueChangedEvent addr 0x218a028 size 0xb0 virtual false final false
 void add_valueChangedEvent(System::Action_1<int32_t> value) ;

/// @brief Method remove_valueChangedEvent addr 0x218a0d8 size 0xb0 virtual false final false
 void remove_valueChangedEvent(System::Action_1<int32_t> value) ;

/// @brief Method InitValues addr 0x218a188 size 0x48 virtual false final false
 void InitValues(int32_t numberOfElements, int32_t index) ;

/// @brief Method GetInitValues addr 0x218a1d0 size 0x18 virtual true final false
 bool GetInitValues(ByRef<int32_t> idx, ByRef<int32_t> numberOfElements) ;

/// @brief Method ApplyValue addr 0x218a1e8 size 0x20 virtual true final false
 void ApplyValue(int32_t idx) ;

/// @brief Method TextForValue addr 0x218a208 size 0x1c virtual true final false
 ::StringW TextForValue(int32_t idx) ;

// Ctor Parameters []
explicit IntListSettingsController() ;

/// @brief Method .ctor addr 0x218a224 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IntListSettingsController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IntListSettingsController, "", "IntListSettingsController");
