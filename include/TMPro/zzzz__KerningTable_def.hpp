#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class KerningPair;
}
namespace TMPro {
struct GlyphValueRecord_Legacy;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace TMPro {
class KerningTable;
}
namespace TMPro {
class TMPro__KerningTable____c;
}
namespace TMPro {
class TMPro__KerningTable____c__DisplayClass3_0;
}
namespace TMPro {
class TMPro__KerningTable____c__DisplayClass4_0;
}
namespace TMPro {
class TMPro__KerningTable____c__DisplayClass5_0;
}
// Type: ::<>c__DisplayClass3_0
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12325))
// CS Name: TMPro.KerningTable::<>c__DisplayClass3_0
class CORDL_TYPE TMPro__KerningTable____c__DisplayClass3_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TMPro__KerningTable____c__DisplayClass3_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__KerningTable____c__DisplayClass3_0", modifiers: " const&", def_value: None }]
constexpr TMPro__KerningTable____c__DisplayClass3_0(TMPro__KerningTable____c__DisplayClass3_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__KerningTable____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
constexpr TMPro__KerningTable____c__DisplayClass3_0(TMPro__KerningTable____c__DisplayClass3_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMPro__KerningTable____c__DisplayClass3_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMPro__KerningTable____c__DisplayClass3_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMPro__KerningTable____c__DisplayClass3_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMPro__KerningTable____c__DisplayClass3_0& operator=(TMPro__KerningTable____c__DisplayClass3_0&& o) noexcept = default;
  constexpr TMPro__KerningTable____c__DisplayClass3_0& operator=(TMPro__KerningTable____c__DisplayClass3_0 const& o) noexcept = default;
                


// Fields

 uint32_t __declspec(property(get=__get_first, put=__set_first))  first;

constexpr void __set_first(uint32_t value) ;

constexpr uint32_t __get_first() const;

 uint32_t __declspec(property(get=__get_second, put=__set_second))  second;

constexpr void __set_second(uint32_t value) ;

constexpr uint32_t __get_second() const;


// Methods

// Ctor Parameters []
explicit TMPro__KerningTable____c__DisplayClass3_0() ;

/// @brief Method .ctor addr 0x2aa90c0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <AddKerningPair>b__0 addr 0x2aa9634 size 0x3c virtual false final false
 bool _AddKerningPair_b__0(TMPro::KerningPair item) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
// Type: ::<>c__DisplayClass4_0
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12326))
// CS Name: TMPro.KerningTable::<>c__DisplayClass4_0
class CORDL_TYPE TMPro__KerningTable____c__DisplayClass4_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TMPro__KerningTable____c__DisplayClass4_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__KerningTable____c__DisplayClass4_0", modifiers: " const&", def_value: None }]
constexpr TMPro__KerningTable____c__DisplayClass4_0(TMPro__KerningTable____c__DisplayClass4_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__KerningTable____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
constexpr TMPro__KerningTable____c__DisplayClass4_0(TMPro__KerningTable____c__DisplayClass4_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMPro__KerningTable____c__DisplayClass4_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMPro__KerningTable____c__DisplayClass4_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMPro__KerningTable____c__DisplayClass4_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMPro__KerningTable____c__DisplayClass4_0& operator=(TMPro__KerningTable____c__DisplayClass4_0&& o) noexcept = default;
  constexpr TMPro__KerningTable____c__DisplayClass4_0& operator=(TMPro__KerningTable____c__DisplayClass4_0 const& o) noexcept = default;
                


// Fields

 uint32_t __declspec(property(get=__get_first, put=__set_first))  first;

constexpr void __set_first(uint32_t value) ;

constexpr uint32_t __get_first() const;

 uint32_t __declspec(property(get=__get_second, put=__set_second))  second;

constexpr void __set_second(uint32_t value) ;

constexpr uint32_t __get_second() const;


// Methods

// Ctor Parameters []
explicit TMPro__KerningTable____c__DisplayClass4_0() ;

/// @brief Method .ctor addr 0x2aa92c0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <AddGlyphPairAdjustmentRecord>b__0 addr 0x2aa9670 size 0x3c virtual false final false
 bool _AddGlyphPairAdjustmentRecord_b__0(TMPro::KerningPair item) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
// Type: ::<>c__DisplayClass5_0
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12327))
// CS Name: TMPro.KerningTable::<>c__DisplayClass5_0
class CORDL_TYPE TMPro__KerningTable____c__DisplayClass5_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TMPro__KerningTable____c__DisplayClass5_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__KerningTable____c__DisplayClass5_0", modifiers: " const&", def_value: None }]
constexpr TMPro__KerningTable____c__DisplayClass5_0(TMPro__KerningTable____c__DisplayClass5_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__KerningTable____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
constexpr TMPro__KerningTable____c__DisplayClass5_0(TMPro__KerningTable____c__DisplayClass5_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMPro__KerningTable____c__DisplayClass5_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMPro__KerningTable____c__DisplayClass5_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMPro__KerningTable____c__DisplayClass5_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMPro__KerningTable____c__DisplayClass5_0& operator=(TMPro__KerningTable____c__DisplayClass5_0&& o) noexcept = default;
  constexpr TMPro__KerningTable____c__DisplayClass5_0& operator=(TMPro__KerningTable____c__DisplayClass5_0 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_left, put=__set_left))  left;

constexpr void __set_left(int32_t value) ;

constexpr int32_t __get_left() const;

 int32_t __declspec(property(get=__get_right, put=__set_right))  right;

constexpr void __set_right(int32_t value) ;

constexpr int32_t __get_right() const;


// Methods

// Ctor Parameters []
explicit TMPro__KerningTable____c__DisplayClass5_0() ;

/// @brief Method .ctor addr 0x2aa93e8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <RemoveKerningPair>b__0 addr 0x2aa96ac size 0x3c virtual false final false
 bool _RemoveKerningPair_b__0(TMPro::KerningPair item) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
// Type: ::<>c
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12328))
// CS Name: TMPro.KerningTable::<>c
class CORDL_TYPE TMPro__KerningTable____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TMPro__KerningTable____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__KerningTable____c", modifiers: " const&", def_value: None }]
constexpr TMPro__KerningTable____c(TMPro__KerningTable____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__KerningTable____c", modifiers: "&&", def_value: None }]
constexpr TMPro__KerningTable____c(TMPro__KerningTable____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMPro__KerningTable____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMPro__KerningTable____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMPro__KerningTable____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMPro__KerningTable____c& operator=(TMPro__KerningTable____c&& o) noexcept = default;
  constexpr TMPro__KerningTable____c& operator=(TMPro__KerningTable____c const& o) noexcept = default;
                


// Fields

static TMPro::TMPro__KerningTable____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(TMPro::TMPro__KerningTable____c value) ;

static TMPro::TMPro__KerningTable____c __get___9() ;

static System::Func_2<TMPro::KerningPair,uint32_t> __declspec(property(get=__get___9__7_0, put=__set___9__7_0))  __9__7_0;

static void __set___9__7_0(System::Func_2<TMPro::KerningPair,uint32_t> value) ;

static System::Func_2<TMPro::KerningPair,uint32_t> __get___9__7_0() ;

static System::Func_2<TMPro::KerningPair,uint32_t> __declspec(property(get=__get___9__7_1, put=__set___9__7_1))  __9__7_1;

static void __set___9__7_1(System::Func_2<TMPro::KerningPair,uint32_t> value) ;

static System::Func_2<TMPro::KerningPair,uint32_t> __get___9__7_1() ;


// Methods

// Ctor Parameters []
explicit TMPro__KerningTable____c() ;

/// @brief Method .ctor addr 0x2aa974c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SortKerningPairs>b__7_0 addr 0x2aa9754 size 0x18 virtual false final false
 uint32_t _SortKerningPairs_b__7_0(TMPro::KerningPair s) ;

/// @brief Method <SortKerningPairs>b__7_1 addr 0x2aa976c size 0x18 virtual false final false
 uint32_t _SortKerningPairs_b__7_1(TMPro::KerningPair s) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
// Type: TMPro::KerningTable
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12329))
// CS Name: TMPro.KerningTable
class CORDL_TYPE KerningTable : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = TMPro::TMPro__KerningTable____c;

using __c__DisplayClass5_0 = TMPro::TMPro__KerningTable____c__DisplayClass5_0;

using __c__DisplayClass4_0 = TMPro::TMPro__KerningTable____c__DisplayClass4_0;

using __c__DisplayClass3_0 = TMPro::TMPro__KerningTable____c__DisplayClass3_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~KerningTable() = default;

// Ctor Parameters [CppParam { name: "", ty: "KerningTable", modifiers: " const&", def_value: None }]
constexpr KerningTable(KerningTable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KerningTable", modifiers: "&&", def_value: None }]
constexpr KerningTable(KerningTable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KerningTable(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr KerningTable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KerningTable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KerningTable& operator=(KerningTable&& o) noexcept = default;
  constexpr KerningTable& operator=(KerningTable const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<TMPro::KerningPair> __declspec(property(get=__get_kerningPairs, put=__set_kerningPairs))  kerningPairs;

constexpr void __set_kerningPairs(System::Collections::Generic::List_1<TMPro::KerningPair> value) ;

constexpr System::Collections::Generic::List_1<TMPro::KerningPair> __get_kerningPairs() const;


// Methods

// Ctor Parameters []
explicit KerningTable() ;

/// @brief Method .ctor addr 0x2aa85ac size 0x80 virtual false final false
 void _ctor() ;

/// @brief Method AddKerningPair addr 0x2aa8d34 size 0x1d4 virtual false final false
 void AddKerningPair() ;

/// @brief Method AddKerningPair addr 0x2aa8f08 size 0x1b8 virtual false final false
 int32_t AddKerningPair(uint32_t first, uint32_t second, float_t offset) ;

/// @brief Method AddGlyphPairAdjustmentRecord addr 0x2aa90c8 size 0x1f8 virtual false final false
 int32_t AddGlyphPairAdjustmentRecord(uint32_t first, TMPro::GlyphValueRecord_Legacy firstAdjustments, uint32_t second, TMPro::GlyphValueRecord_Legacy secondAdjustments) ;

/// @brief Method RemoveKerningPair addr 0x2aa92c8 size 0x120 virtual false final false
 void RemoveKerningPair(int32_t left, int32_t right) ;

/// @brief Method RemoveKerningPair addr 0x2aa93f0 size 0x58 virtual false final false
 void RemoveKerningPair(int32_t index) ;

/// @brief Method SortKerningPairs addr 0x2aa9448 size 0x1ec virtual false final false
 void SortKerningPairs() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
NEED_NO_BOX(TMPro::KerningTable);
DEFINE_IL2CPP_ARG_TYPE(TMPro::KerningTable, "TMPro", "KerningTable");
NEED_NO_BOX(TMPro::TMPro__KerningTable____c);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__KerningTable____c, "TMPro", "KerningTable/<>c");
NEED_NO_BOX(TMPro::TMPro__KerningTable____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__KerningTable____c__DisplayClass3_0, "TMPro", "KerningTable/<>c__DisplayClass3_0");
NEED_NO_BOX(TMPro::TMPro__KerningTable____c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__KerningTable____c__DisplayClass4_0, "TMPro", "KerningTable/<>c__DisplayClass4_0");
NEED_NO_BOX(TMPro::TMPro__KerningTable____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__KerningTable____c__DisplayClass5_0, "TMPro", "KerningTable/<>c__DisplayClass5_0");
