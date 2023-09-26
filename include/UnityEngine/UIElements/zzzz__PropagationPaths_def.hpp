#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements {
template<typename T>
class ObjectPool_1;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__PropagationPaths__Type;
}
namespace UnityEngine::UIElements {
class PropagationPaths;
}
// Type: ::Type
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7289))
// CS Name: UnityEngine.UIElements.PropagationPaths::Type
struct CORDL_TYPE UnityEngine__UIElements__PropagationPaths__Type : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__PropagationPaths__Type(int32_t value__) noexcept;


                    constexpr UnityEngine__UIElements__PropagationPaths__Type(UnityEngine__UIElements__PropagationPaths__Type const&) = default;
                    constexpr UnityEngine__UIElements__PropagationPaths__Type(UnityEngine__UIElements__PropagationPaths__Type&&) = default;
                    constexpr UnityEngine__UIElements__PropagationPaths__Type& operator=(UnityEngine__UIElements__PropagationPaths__Type const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__PropagationPaths__Type& operator=(UnityEngine__UIElements__PropagationPaths__Type&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__PropagationPaths__Type(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UIElements__PropagationPaths__Type_Unwrapped : int32_t {
__None = 0,
__TrickleDown = 1,
__BubbleUp = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UIElements__PropagationPaths__Type_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UIElements__PropagationPaths__Type_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__PropagationPaths__Type const None;

/// @brief Field TrickleDown offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__PropagationPaths__Type const TrickleDown;

/// @brief Field BubbleUp offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__PropagationPaths__Type const BubbleUp;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::PropagationPaths
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7290))
// CS Name: UnityEngine.UIElements.PropagationPaths
class CORDL_TYPE PropagationPaths : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Type = UnityEngine::UIElements::UnityEngine__UIElements__PropagationPaths__Type;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PropagationPaths() = default;

// Ctor Parameters [CppParam { name: "", ty: "PropagationPaths", modifiers: " const&", def_value: None }]
constexpr PropagationPaths(PropagationPaths const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PropagationPaths", modifiers: "&&", def_value: None }]
constexpr PropagationPaths(PropagationPaths&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PropagationPaths(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PropagationPaths& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PropagationPaths& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PropagationPaths& operator=(PropagationPaths&& o) noexcept = default;
  constexpr PropagationPaths& operator=(PropagationPaths const& o) noexcept = default;
                


// Fields

static UnityEngine::UIElements::ObjectPool_1<UnityEngine::UIElements::PropagationPaths> __declspec(property(get=__get_s_Pool, put=__set_s_Pool))  s_Pool;

static void __set_s_Pool(UnityEngine::UIElements::ObjectPool_1<UnityEngine::UIElements::PropagationPaths> value) ;

static UnityEngine::UIElements::ObjectPool_1<UnityEngine::UIElements::PropagationPaths> __get_s_Pool() ;

 System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_trickleDownPath, put=__set_trickleDownPath))  trickleDownPath;

constexpr void __set_trickleDownPath(System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> __get_trickleDownPath() const;

 System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_targetElements, put=__set_targetElements))  targetElements;

constexpr void __set_targetElements(System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> __get_targetElements() const;

 System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_bubbleUpPath, put=__set_bubbleUpPath))  bubbleUpPath;

constexpr void __set_bubbleUpPath(System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> __get_bubbleUpPath() const;

/// @brief Field k_DefaultPropagationDepth offset 0
static constexpr int32_t  k_DefaultPropagationDepth{16};

/// @brief Field k_DefaultTargetCount offset 0
static constexpr int32_t  k_DefaultTargetCount{4};


// Methods

// Ctor Parameters []
explicit PropagationPaths() ;

/// @brief Method .ctor addr 0x2d0752c size 0xcc virtual false final false
 void _ctor() ;

/// @brief Method Copy addr 0x2d075f8 size 0xe0 virtual false final false
static UnityEngine::UIElements::PropagationPaths Copy(UnityEngine::UIElements::PropagationPaths paths) ;

/// @brief Method Build addr 0x2d076d8 size 0x29c virtual false final false
static UnityEngine::UIElements::PropagationPaths Build(UnityEngine::UIElements::VisualElement elem, UnityEngine::UIElements::EventBase evt, UnityEngine::UIElements::UnityEngine__UIElements__PropagationPaths__Type pathTypesRequested) ;

/// @brief Method Release addr 0x2d079d0 size 0x110 virtual false final false
 void Release() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__PropagationPaths__Type, "UnityEngine.UIElements", "PropagationPaths/Type");
NEED_NO_BOX(UnityEngine::UIElements::PropagationPaths);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::PropagationPaths, "UnityEngine.UIElements", "PropagationPaths");
