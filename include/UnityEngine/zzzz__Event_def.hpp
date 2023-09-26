#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct PointerType;
}
namespace UnityEngine {
struct EventType;
}
namespace UnityEngine {
struct EventModifiers;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct KeyCode;
}
// Forward declare root types
namespace UnityEngine {
class Event;
}
// Type: UnityEngine::Event
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14785))
// CS Name: UnityEngine.Event
class CORDL_TYPE Event : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Event() = default;

// Ctor Parameters [CppParam { name: "", ty: "Event", modifiers: " const&", def_value: None }]
constexpr Event(Event const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Event", modifiers: "&&", def_value: None }]
constexpr Event(Event&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Event(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Event& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Event& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Event& operator=(Event&& o) noexcept = default;
  constexpr Event& operator=(Event const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr))  m_Ptr;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_Ptr() const;

static UnityEngine::Event __declspec(property(get=__get_s_Current, put=__set_s_Current))  s_Current;

static void __set_s_Current(UnityEngine::Event value) ;

static UnityEngine::Event __get_s_Current() ;

static UnityEngine::Event __declspec(property(get=__get_s_MasterEvent, put=__set_s_MasterEvent))  s_MasterEvent;

static void __set_s_MasterEvent(UnityEngine::Event value) ;

static UnityEngine::Event __get_s_MasterEvent() ;


// Properties

 bool __declspec(property(get=get_shift))  shift;

static UnityEngine::Event __declspec(property(get=get_current, put=set_current))  current;

 bool __declspec(property(get=get_isKey))  isKey;

 bool __declspec(property(get=get_isMouse))  isMouse;

 bool __declspec(property(get=get_isDirectManipulationDevice))  isDirectManipulationDevice;

 UnityEngine::EventType __declspec(property(get=get_rawType))  rawType;

 UnityEngine::Vector2 __declspec(property(get=get_mousePosition, put=set_mousePosition))  mousePosition;

 UnityEngine::Vector2 __declspec(property(get=get_delta, put=set_delta))  delta;

 UnityEngine::PointerType __declspec(property(get=get_pointerType))  pointerType;

 int32_t __declspec(property(get=get_button))  button;

 UnityEngine::EventModifiers __declspec(property(get=get_modifiers, put=set_modifiers))  modifiers;

 float_t __declspec(property(get=get_pressure))  pressure;

 int32_t __declspec(property(get=get_clickCount))  clickCount;

 char16_t __declspec(property(get=get_character, put=set_character))  character;

 UnityEngine::KeyCode __declspec(property(get=get_keyCode, put=set_keyCode))  keyCode;

 int32_t __declspec(property(get=get_displayIndex, put=set_displayIndex))  displayIndex;

 UnityEngine::EventType __declspec(property(get=get_type, put=set_type))  type;

 ::StringW __declspec(property(get=get_commandName, put=set_commandName))  commandName;


// Methods

// Ctor Parameters []
explicit Event() ;

/// @brief Method .ctor addr 0x2bb85b8 size 0x4c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "displayIndex", ty: "int32_t", modifiers: "", def_value: None }]
explicit Event(int32_t displayIndex) ;

/// @brief Method .ctor addr 0x2bb8640 size 0x50 virtual false final false
 void _ctor(int32_t displayIndex) ;

/// @brief Method Finalize addr 0x2bb8690 size 0x120 virtual true final false
 void Finalize() ;

/// @brief Method CopyFrom addr 0x2bb87ec size 0x70 virtual false final false
 void CopyFrom(UnityEngine::Event e) ;

/// @brief Method get_shift addr 0x2bb88a0 size 0x44 virtual false final false
 bool get_shift() ;

/// @brief Method get_current addr 0x2bb7040 size 0x48 virtual false final false
static UnityEngine::Event get_current() ;

/// @brief Method set_current addr 0x2bb8920 size 0x94 virtual false final false
static void set_current(UnityEngine::Event value) ;

/// @brief Method get_isKey addr 0x2bb89f0 size 0x4c virtual false final false
 bool get_isKey() ;

/// @brief Method get_isMouse addr 0x2bb8a3c size 0x64 virtual false final false
 bool get_isMouse() ;

/// @brief Method get_isDirectManipulationDevice addr 0x2bb8aa0 size 0x7c virtual false final false
 bool get_isDirectManipulationDevice() ;

/// @brief Method KeyboardEvent addr 0x2bb8b58 size 0x1b8c virtual false final false
static UnityEngine::Event KeyboardEvent(::StringW key) ;

/// @brief Method GetHashCode addr 0x2bba830 size 0x100 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2bba96c size 0x234 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method ToString addr 0x2bbaba0 size 0x854 virtual true final false
 ::StringW ToString() ;

/// @brief Method Use addr 0x2bbb430 size 0x1c4 virtual false final false
 void Use() ;

/// @brief Method get_rawType addr 0x2bbb630 size 0x3c virtual false final false
 UnityEngine::EventType get_rawType() ;

/// @brief Method get_mousePosition addr 0x2bb70c4 size 0x4c virtual false final false
 UnityEngine::Vector2 get_mousePosition() ;

/// @brief Method set_mousePosition addr 0x2bbb6b0 size 0x48 virtual false final false
 void set_mousePosition(UnityEngine::Vector2 value) ;

/// @brief Method get_delta addr 0x2bbb73c size 0x4c virtual false final false
 UnityEngine::Vector2 get_delta() ;

/// @brief Method set_delta addr 0x2bbb7cc size 0x48 virtual false final false
 void set_delta(UnityEngine::Vector2 value) ;

/// @brief Method get_pointerType addr 0x2bb8b1c size 0x3c virtual false final false
 UnityEngine::PointerType get_pointerType() ;

/// @brief Method get_button addr 0x2bbb858 size 0x3c virtual false final false
 int32_t get_button() ;

/// @brief Method get_modifiers addr 0x2bb88e4 size 0x3c virtual false final false
 UnityEngine::EventModifiers get_modifiers() ;

/// @brief Method set_modifiers addr 0x2bba728 size 0x44 virtual false final false
 void set_modifiers(UnityEngine::EventModifiers value) ;

/// @brief Method get_pressure addr 0x2bbb894 size 0x3c virtual false final false
 float_t get_pressure() ;

/// @brief Method get_clickCount addr 0x2bbb8d0 size 0x3c virtual false final false
 int32_t get_clickCount() ;

/// @brief Method get_character addr 0x2bba7f4 size 0x3c virtual false final false
 char16_t get_character() ;

/// @brief Method set_character addr 0x2bba76c size 0x44 virtual false final false
 void set_character(char16_t value) ;

/// @brief Method get_keyCode addr 0x2bba930 size 0x3c virtual false final false
 UnityEngine::KeyCode get_keyCode() ;

/// @brief Method set_keyCode addr 0x2bba7b0 size 0x44 virtual false final false
 void set_keyCode(UnityEngine::KeyCode value) ;

/// @brief Method get_displayIndex addr 0x2bbb90c size 0x3c virtual false final false
 int32_t get_displayIndex() ;

/// @brief Method set_displayIndex addr 0x2bbb948 size 0x44 virtual false final false
 void set_displayIndex(int32_t value) ;

/// @brief Method get_type addr 0x2bb7088 size 0x3c virtual false final false
 UnityEngine::EventType get_type() ;

/// @brief Method set_type addr 0x2bba6e4 size 0x44 virtual false final false
 void set_type(UnityEngine::EventType value) ;

/// @brief Method get_commandName addr 0x2bbb3f4 size 0x3c virtual false final false
 ::StringW get_commandName() ;

/// @brief Method set_commandName addr 0x2bbb98c size 0x44 virtual false final false
 void set_commandName(::StringW value) ;

/// @brief Method Internal_Use addr 0x2bbb5f4 size 0x3c virtual false final false
 void Internal_Use() ;

/// @brief Method Internal_Create addr 0x2bb8604 size 0x3c virtual false final false
static ::cordl_internals::intptr_t Internal_Create(int32_t displayIndex) ;

/// @brief Method Internal_Destroy addr 0x2bb87b0 size 0x3c virtual false final false
static void Internal_Destroy(::cordl_internals::intptr_t ptr) ;

/// @brief Method CopyFromPtr addr 0x2bb885c size 0x44 virtual false final false
 void CopyFromPtr(::cordl_internals::intptr_t ptr) ;

/// @brief Method PopEvent addr 0x2bbb9d0 size 0x3c virtual false final false
static bool PopEvent(UnityEngine::Event outEvent) ;

/// @brief Method Internal_SetNativeEvent addr 0x2bb89b4 size 0x3c virtual false final false
static void Internal_SetNativeEvent(::cordl_internals::intptr_t ptr) ;

/// @brief Method Internal_MakeMasterEventCurrent addr 0x2bbba0c size 0xf8 virtual false final false
static void Internal_MakeMasterEventCurrent(int32_t displayIndex) ;

/// @brief Method GetDoubleClickTime addr 0x2bbbb04 size 0x28 virtual false final false
static int32_t GetDoubleClickTime() ;

/// @brief Method get_mousePosition_Injected addr 0x2bbb66c size 0x44 virtual false final false
 void get_mousePosition_Injected(ByRef<UnityEngine::Vector2> ret) ;

/// @brief Method set_mousePosition_Injected addr 0x2bbb6f8 size 0x44 virtual false final false
 void set_mousePosition_Injected(ByRef<UnityEngine::Vector2> value) ;

/// @brief Method get_delta_Injected addr 0x2bbb788 size 0x44 virtual false final false
 void get_delta_Injected(ByRef<UnityEngine::Vector2> ret) ;

/// @brief Method set_delta_Injected addr 0x2bbb814 size 0x44 virtual false final false
 void set_delta_Injected(ByRef<UnityEngine::Vector2> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Event);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Event, "UnityEngine", "Event");
