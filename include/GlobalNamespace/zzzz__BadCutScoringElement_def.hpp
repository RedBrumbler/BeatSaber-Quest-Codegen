#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ScoringElement_def.hpp"
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType;
}
namespace GlobalNamespace {
class NoteData;
}
// Forward declare root types
namespace GlobalNamespace {
class BadCutScoringElement;
}
namespace GlobalNamespace {
class GlobalNamespace__BadCutScoringElement__Pool;
}
// Type: ::BadCutScoringElement
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5417))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5421))
// CS Name: BadCutScoringElement
class CORDL_TYPE BadCutScoringElement : public GlobalNamespace::ScoringElement {
public:
// Declarations
using Pool = GlobalNamespace::GlobalNamespace__BadCutScoringElement__Pool;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BadCutScoringElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "BadCutScoringElement", modifiers: " const&", def_value: None }]
constexpr BadCutScoringElement(BadCutScoringElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BadCutScoringElement", modifiers: "&&", def_value: None }]
constexpr BadCutScoringElement(BadCutScoringElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BadCutScoringElement(void* ptr) noexcept : GlobalNamespace::ScoringElement(ptr) {
}


  constexpr BadCutScoringElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BadCutScoringElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BadCutScoringElement& operator=(BadCutScoringElement&& o) noexcept = default;
  constexpr BadCutScoringElement& operator=(BadCutScoringElement const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType __declspec(property(get=__get__multiplierEventType, put=__set__multiplierEventType))  _multiplierEventType;

constexpr void __set__multiplierEventType(GlobalNamespace::GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType value) ;

constexpr GlobalNamespace::GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType __get__multiplierEventType() const;

 GlobalNamespace::GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType __declspec(property(get=__get__wouldBeCorrectCutBestPossibleMultiplierEventType, put=__set__wouldBeCorrectCutBestPossibleMultiplierEventType))  _wouldBeCorrectCutBestPossibleMultiplierEventType;

constexpr void __set__wouldBeCorrectCutBestPossibleMultiplierEventType(GlobalNamespace::GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType value) ;

constexpr GlobalNamespace::GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType __get__wouldBeCorrectCutBestPossibleMultiplierEventType() const;


// Properties

 int32_t __declspec(property(get=get_cutScore))  cutScore;

 GlobalNamespace::GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType __declspec(property(get=get_wouldBeCorrectCutBestPossibleMultiplierEventType))  wouldBeCorrectCutBestPossibleMultiplierEventType;

 GlobalNamespace::GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType __declspec(property(get=get_multiplierEventType))  multiplierEventType;

 int32_t __declspec(property(get=get_executionOrder))  executionOrder;


// Methods

/// @brief Method get_cutScore addr 0x2148c2c size 0x8 virtual true final false
 int32_t get_cutScore() ;

/// @brief Method get_wouldBeCorrectCutBestPossibleMultiplierEventType addr 0x2148c34 size 0x8 virtual true final false
 GlobalNamespace::GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType get_wouldBeCorrectCutBestPossibleMultiplierEventType() ;

/// @brief Method get_multiplierEventType addr 0x2148c3c size 0x8 virtual true final false
 GlobalNamespace::GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType get_multiplierEventType() ;

/// @brief Method get_executionOrder addr 0x2148c44 size 0xc virtual true final false
 int32_t get_executionOrder() ;

/// @brief Method Init addr 0x21485f0 size 0x4c virtual false final false
 void Init(GlobalNamespace::NoteData noteData) ;

// Ctor Parameters []
explicit BadCutScoringElement() ;

/// @brief Method .ctor addr 0x2148c50 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5416)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5416), inst: 2707 }), TypeDefinitionIndex(TypeDefinitionIndex(5421))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5420))
// CS Name: BadCutScoringElement::Pool
class CORDL_TYPE GlobalNamespace__BadCutScoringElement__Pool : public GlobalNamespace::GlobalNamespace__ScoringElement__Pool_1<GlobalNamespace::BadCutScoringElement> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~GlobalNamespace__BadCutScoringElement__Pool() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BadCutScoringElement__Pool", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BadCutScoringElement__Pool(GlobalNamespace__BadCutScoringElement__Pool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BadCutScoringElement__Pool", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BadCutScoringElement__Pool(GlobalNamespace__BadCutScoringElement__Pool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BadCutScoringElement__Pool(void* ptr) noexcept : GlobalNamespace::GlobalNamespace__ScoringElement__Pool_1<GlobalNamespace::BadCutScoringElement>(ptr) {
}


  constexpr GlobalNamespace__BadCutScoringElement__Pool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BadCutScoringElement__Pool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BadCutScoringElement__Pool& operator=(GlobalNamespace__BadCutScoringElement__Pool&& o) noexcept = default;
  constexpr GlobalNamespace__BadCutScoringElement__Pool& operator=(GlobalNamespace__BadCutScoringElement__Pool const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__BadCutScoringElement__Pool() ;

/// @brief Method .ctor addr 0x2148c58 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BadCutScoringElement);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BadCutScoringElement, "", "BadCutScoringElement");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BadCutScoringElement__Pool);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BadCutScoringElement__Pool, "", "BadCutScoringElement/Pool");
