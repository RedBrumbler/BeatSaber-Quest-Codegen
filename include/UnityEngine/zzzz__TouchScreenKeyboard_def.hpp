#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct RangeInt;
}
namespace UnityEngine {
struct TouchScreenKeyboardType;
}
namespace UnityEngine {
struct TouchScreenKeyboard_InternalConstructorHelperArguments;
}
// Forward declare root types
namespace UnityEngine {
struct UnityEngine__TouchScreenKeyboard__Status;
}
namespace UnityEngine {
class TouchScreenKeyboard;
}
// Type: ::Status
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10144))
// CS Name: UnityEngine.TouchScreenKeyboard::Status
struct CORDL_TYPE UnityEngine__TouchScreenKeyboard__Status : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__TouchScreenKeyboard__Status(int32_t value__) noexcept;


                    constexpr UnityEngine__TouchScreenKeyboard__Status(UnityEngine__TouchScreenKeyboard__Status const&) = default;
                    constexpr UnityEngine__TouchScreenKeyboard__Status(UnityEngine__TouchScreenKeyboard__Status&&) = default;
                    constexpr UnityEngine__TouchScreenKeyboard__Status& operator=(UnityEngine__TouchScreenKeyboard__Status const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__TouchScreenKeyboard__Status& operator=(UnityEngine__TouchScreenKeyboard__Status&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__TouchScreenKeyboard__Status(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__TouchScreenKeyboard__Status_Unwrapped : int32_t {
__Visible = 0,
__Done = 1,
__Canceled = 2,
__LostFocus = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__TouchScreenKeyboard__Status_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__TouchScreenKeyboard__Status_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Visible offset 0
static UnityEngine::UnityEngine__TouchScreenKeyboard__Status const Visible;

/// @brief Field Done offset 0
static UnityEngine::UnityEngine__TouchScreenKeyboard__Status const Done;

/// @brief Field Canceled offset 0
static UnityEngine::UnityEngine__TouchScreenKeyboard__Status const Canceled;

/// @brief Field LostFocus offset 0
static UnityEngine::UnityEngine__TouchScreenKeyboard__Status const LostFocus;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::TouchScreenKeyboard
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10145))
// CS Name: UnityEngine.TouchScreenKeyboard
class CORDL_TYPE TouchScreenKeyboard : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Status = UnityEngine::UnityEngine__TouchScreenKeyboard__Status;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TouchScreenKeyboard() = default;

// Ctor Parameters [CppParam { name: "", ty: "TouchScreenKeyboard", modifiers: " const&", def_value: None }]
constexpr TouchScreenKeyboard(TouchScreenKeyboard const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TouchScreenKeyboard", modifiers: "&&", def_value: None }]
constexpr TouchScreenKeyboard(TouchScreenKeyboard&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TouchScreenKeyboard(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TouchScreenKeyboard& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TouchScreenKeyboard& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TouchScreenKeyboard& operator=(TouchScreenKeyboard&& o) noexcept = default;
  constexpr TouchScreenKeyboard& operator=(TouchScreenKeyboard const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr))  m_Ptr;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_Ptr() const;

static bool __declspec(property(get=__get__disableInPlaceEditing_k__BackingField, put=__set__disableInPlaceEditing_k__BackingField))  _disableInPlaceEditing_k__BackingField;

static void __set__disableInPlaceEditing_k__BackingField(bool value) ;

static bool __get__disableInPlaceEditing_k__BackingField() ;


// Properties

static bool __declspec(property(get=get_isSupported))  isSupported;

static bool __declspec(property(get=get_disableInPlaceEditing))  disableInPlaceEditing;

static bool __declspec(property(get=get_isInPlaceEditingAllowed))  isInPlaceEditingAllowed;

 ::StringW __declspec(property(get=get_text, put=set_text))  text;

static bool __declspec(property(put=set_hideInput))  hideInput;

 bool __declspec(property(get=get_active, put=set_active))  active;

 UnityEngine::UnityEngine__TouchScreenKeyboard__Status __declspec(property(get=get_status))  status;

 int32_t __declspec(property(put=set_characterLimit))  characterLimit;

 bool __declspec(property(get=get_canGetSelection))  canGetSelection;

 bool __declspec(property(get=get_canSetSelection))  canSetSelection;

 UnityEngine::RangeInt __declspec(property(get=get_selection, put=set_selection))  selection;


// Methods

/// @brief Method Internal_Destroy addr 0x2b87548 size 0x3c virtual false final false
static void Internal_Destroy(::cordl_internals::intptr_t ptr) ;

/// @brief Method Destroy addr 0x2b87584 size 0xcc virtual false final false
 void Destroy() ;

/// @brief Method Finalize addr 0x2b87650 size 0x94 virtual true final false
 void Finalize() ;

// Ctor Parameters [CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "keyboardType", ty: "UnityEngine::TouchScreenKeyboardType", modifiers: "", def_value: None }, CppParam { name: "autocorrection", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "multiline", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "secure", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "alert", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "textPlaceholder", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "characterLimit", ty: "int32_t", modifiers: "", def_value: None }]
explicit TouchScreenKeyboard(::StringW text, UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure, bool alert, ::StringW textPlaceholder, int32_t characterLimit) ;

/// @brief Method .ctor addr 0x2b876e4 size 0x15c virtual false final false
 void _ctor(::StringW text, UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure, bool alert, ::StringW textPlaceholder, int32_t characterLimit) ;

/// @brief Method TouchScreenKeyboard_InternalConstructorHelper addr 0x2b87840 size 0x54 virtual false final false
static ::cordl_internals::intptr_t TouchScreenKeyboard_InternalConstructorHelper(ByRef<UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments> arguments, ::StringW text, ::StringW textPlaceholder) ;

/// @brief Method get_isSupported addr 0x2b87894 size 0x58 virtual false final false
static bool get_isSupported() ;

/// @brief Method get_disableInPlaceEditing addr 0x2b878ec size 0x48 virtual false final false
static bool get_disableInPlaceEditing() ;

/// @brief Method get_isInPlaceEditingAllowed addr 0x2b87934 size 0x6c virtual false final false
static bool get_isInPlaceEditingAllowed() ;

/// @brief Method IsInPlaceEditingAllowed addr 0x2b879a0 size 0x28 virtual false final false
static bool IsInPlaceEditingAllowed() ;

/// @brief Method Open addr 0x2b879c8 size 0xc0 virtual false final false
static UnityEngine::TouchScreenKeyboard Open(::StringW text, UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure, bool alert, ::StringW textPlaceholder, int32_t characterLimit) ;

/// @brief Method Open addr 0x2b87a88 size 0x8c virtual false final false
static UnityEngine::TouchScreenKeyboard Open(::StringW text, UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure) ;

/// @brief Method get_text addr 0x2b87b14 size 0x3c virtual false final false
 ::StringW get_text() ;

/// @brief Method set_text addr 0x2b87b50 size 0x44 virtual false final false
 void set_text(::StringW value) ;

/// @brief Method set_hideInput addr 0x2b87b94 size 0x3c virtual false final false
static void set_hideInput(bool value) ;

/// @brief Method get_active addr 0x2b87bd0 size 0x3c virtual false final false
 bool get_active() ;

/// @brief Method set_active addr 0x2b87c0c size 0x44 virtual false final false
 void set_active(bool value) ;

/// @brief Method get_status addr 0x2b87c50 size 0x3c virtual false final false
 UnityEngine::UnityEngine__TouchScreenKeyboard__Status get_status() ;

/// @brief Method set_characterLimit addr 0x2b87c8c size 0x44 virtual false final false
 void set_characterLimit(int32_t value) ;

/// @brief Method get_canGetSelection addr 0x2b87cd0 size 0x3c virtual false final false
 bool get_canGetSelection() ;

/// @brief Method get_canSetSelection addr 0x2b87d0c size 0x3c virtual false final false
 bool get_canSetSelection() ;

/// @brief Method get_selection addr 0x2b87d48 size 0x50 virtual false final false
 UnityEngine::RangeInt get_selection() ;

/// @brief Method set_selection addr 0x2b87ddc size 0xf8 virtual false final false
 void set_selection(UnityEngine::RangeInt value) ;

/// @brief Method GetSelection addr 0x2b87d98 size 0x44 virtual false final false
static void GetSelection(ByRef<int32_t> start, ByRef<int32_t> length) ;

/// @brief Method SetSelection addr 0x2b87ed4 size 0x44 virtual false final false
static void SetSelection(int32_t start, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__TouchScreenKeyboard__Status, "UnityEngine", "TouchScreenKeyboard/Status");
NEED_NO_BOX(UnityEngine::TouchScreenKeyboard);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TouchScreenKeyboard, "UnityEngine", "TouchScreenKeyboard");
