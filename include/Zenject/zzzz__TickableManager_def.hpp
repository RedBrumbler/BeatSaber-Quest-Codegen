#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Zenject {
class ILateTickable;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class TickablesTaskUpdater;
}
namespace Zenject {
class IFixedTickable;
}
namespace Zenject {
class FixedTickablesTaskUpdater;
}
namespace Zenject {
class LateTickablesTaskUpdater;
}
namespace ModestTree::Util {
template<typename T1,typename T2>
class ValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
class Type;
}
namespace Zenject {
class ITickable;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Zenject {
class TickableManager;
}
namespace Zenject {
class Zenject__TickableManager____c;
}
namespace Zenject {
class Zenject__TickableManager____c__DisplayClass17_0;
}
namespace Zenject {
class Zenject__TickableManager____c__DisplayClass18_0;
}
namespace Zenject {
class Zenject__TickableManager____c__DisplayClass19_0;
}
// Type: ::<>c__DisplayClass17_0
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11302))
// CS Name: Zenject.TickableManager::<>c__DisplayClass17_0
class CORDL_TYPE Zenject__TickableManager____c__DisplayClass17_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Zenject__TickableManager____c__DisplayClass17_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__TickableManager____c__DisplayClass17_0", modifiers: " const&", def_value: None }]
constexpr Zenject__TickableManager____c__DisplayClass17_0(Zenject__TickableManager____c__DisplayClass17_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__TickableManager____c__DisplayClass17_0", modifiers: "&&", def_value: None }]
constexpr Zenject__TickableManager____c__DisplayClass17_0(Zenject__TickableManager____c__DisplayClass17_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__TickableManager____c__DisplayClass17_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__TickableManager____c__DisplayClass17_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__TickableManager____c__DisplayClass17_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__TickableManager____c__DisplayClass17_0& operator=(Zenject__TickableManager____c__DisplayClass17_0&& o) noexcept = default;
  constexpr Zenject__TickableManager____c__DisplayClass17_0& operator=(Zenject__TickableManager____c__DisplayClass17_0 const& o) noexcept = default;
                


// Fields

 Zenject::IFixedTickable __declspec(property(get=__get_tickable, put=__set_tickable))  tickable;

constexpr void __set_tickable(Zenject::IFixedTickable value) ;

constexpr Zenject::IFixedTickable __get_tickable() const;


// Methods

// Ctor Parameters []
explicit Zenject__TickableManager____c__DisplayClass17_0() ;

/// @brief Method .ctor addr 0x2dd3b6c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <InitFixedTickables>b__1 addr 0x2dd4e80 size 0x80 virtual false final false
 bool _InitFixedTickables_b__1(ModestTree::Util::ValuePair_2<System::Type,int32_t> x) ;

/// @brief Method __zenCreate addr 0x2dd4f00 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2dd4f5c size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11303))
// CS Name: Zenject.TickableManager::<>c
class CORDL_TYPE Zenject__TickableManager____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Zenject__TickableManager____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__TickableManager____c", modifiers: " const&", def_value: None }]
constexpr Zenject__TickableManager____c(Zenject__TickableManager____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__TickableManager____c", modifiers: "&&", def_value: None }]
constexpr Zenject__TickableManager____c(Zenject__TickableManager____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__TickableManager____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__TickableManager____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__TickableManager____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__TickableManager____c& operator=(Zenject__TickableManager____c&& o) noexcept = default;
  constexpr Zenject__TickableManager____c& operator=(Zenject__TickableManager____c const& o) noexcept = default;
                


// Fields

static Zenject::Zenject__TickableManager____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(Zenject::Zenject__TickableManager____c value) ;

static Zenject::Zenject__TickableManager____c __get___9() ;

static System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,System::Type> __declspec(property(get=__get___9__17_0, put=__set___9__17_0))  __9__17_0;

static void __set___9__17_0(System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,System::Type> value) ;

static System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,System::Type> __get___9__17_0() ;

static System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,int32_t> __declspec(property(get=__get___9__17_2, put=__set___9__17_2))  __9__17_2;

static void __set___9__17_2(System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,int32_t> value) ;

static System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,int32_t> __get___9__17_2() ;

static System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,System::Type> __declspec(property(get=__get___9__18_0, put=__set___9__18_0))  __9__18_0;

static void __set___9__18_0(System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,System::Type> value) ;

static System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,System::Type> __get___9__18_0() ;

static System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,int32_t> __declspec(property(get=__get___9__18_2, put=__set___9__18_2))  __9__18_2;

static void __set___9__18_2(System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,int32_t> value) ;

static System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,int32_t> __get___9__18_2() ;

static System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,System::Type> __declspec(property(get=__get___9__19_0, put=__set___9__19_0))  __9__19_0;

static void __set___9__19_0(System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,System::Type> value) ;

static System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,System::Type> __get___9__19_0() ;

static System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,int32_t> __declspec(property(get=__get___9__19_2, put=__set___9__19_2))  __9__19_2;

static void __set___9__19_2(System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,int32_t> value) ;

static System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,int32_t> __get___9__19_2() ;


// Methods

// Ctor Parameters []
explicit Zenject__TickableManager____c() ;

/// @brief Method .ctor addr 0x2dd5180 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <InitFixedTickables>b__17_0 addr 0x2dd5188 size 0x18 virtual false final false
 System::Type _InitFixedTickables_b__17_0(ModestTree::Util::ValuePair_2<System::Type,int32_t> x) ;

/// @brief Method <InitFixedTickables>b__17_2 addr 0x2dd51a0 size 0x18 virtual false final false
 int32_t _InitFixedTickables_b__17_2(ModestTree::Util::ValuePair_2<System::Type,int32_t> x) ;

/// @brief Method <InitTickables>b__18_0 addr 0x2dd51b8 size 0x18 virtual false final false
 System::Type _InitTickables_b__18_0(ModestTree::Util::ValuePair_2<System::Type,int32_t> x) ;

/// @brief Method <InitTickables>b__18_2 addr 0x2dd51d0 size 0x18 virtual false final false
 int32_t _InitTickables_b__18_2(ModestTree::Util::ValuePair_2<System::Type,int32_t> x) ;

/// @brief Method <InitLateTickables>b__19_0 addr 0x2dd51e8 size 0x18 virtual false final false
 System::Type _InitLateTickables_b__19_0(ModestTree::Util::ValuePair_2<System::Type,int32_t> x) ;

/// @brief Method <InitLateTickables>b__19_2 addr 0x2dd5200 size 0x18 virtual false final false
 int32_t _InitLateTickables_b__19_2(ModestTree::Util::ValuePair_2<System::Type,int32_t> x) ;

/// @brief Method __zenCreate addr 0x2dd5218 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2dd5274 size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass18_0
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11304))
// CS Name: Zenject.TickableManager::<>c__DisplayClass18_0
class CORDL_TYPE Zenject__TickableManager____c__DisplayClass18_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Zenject__TickableManager____c__DisplayClass18_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__TickableManager____c__DisplayClass18_0", modifiers: " const&", def_value: None }]
constexpr Zenject__TickableManager____c__DisplayClass18_0(Zenject__TickableManager____c__DisplayClass18_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__TickableManager____c__DisplayClass18_0", modifiers: "&&", def_value: None }]
constexpr Zenject__TickableManager____c__DisplayClass18_0(Zenject__TickableManager____c__DisplayClass18_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__TickableManager____c__DisplayClass18_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__TickableManager____c__DisplayClass18_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__TickableManager____c__DisplayClass18_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__TickableManager____c__DisplayClass18_0& operator=(Zenject__TickableManager____c__DisplayClass18_0&& o) noexcept = default;
  constexpr Zenject__TickableManager____c__DisplayClass18_0& operator=(Zenject__TickableManager____c__DisplayClass18_0 const& o) noexcept = default;
                


// Fields

 Zenject::ITickable __declspec(property(get=__get_tickable, put=__set_tickable))  tickable;

constexpr void __set_tickable(Zenject::ITickable value) ;

constexpr Zenject::ITickable __get_tickable() const;


// Methods

// Ctor Parameters []
explicit Zenject__TickableManager____c__DisplayClass18_0() ;

/// @brief Method .ctor addr 0x2dd3b74 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <InitTickables>b__1 addr 0x2dd5434 size 0x80 virtual false final false
 bool _InitTickables_b__1(ModestTree::Util::ValuePair_2<System::Type,int32_t> x) ;

/// @brief Method __zenCreate addr 0x2dd54b4 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2dd5510 size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass19_0
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11305))
// CS Name: Zenject.TickableManager::<>c__DisplayClass19_0
class CORDL_TYPE Zenject__TickableManager____c__DisplayClass19_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Zenject__TickableManager____c__DisplayClass19_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__TickableManager____c__DisplayClass19_0", modifiers: " const&", def_value: None }]
constexpr Zenject__TickableManager____c__DisplayClass19_0(Zenject__TickableManager____c__DisplayClass19_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__TickableManager____c__DisplayClass19_0", modifiers: "&&", def_value: None }]
constexpr Zenject__TickableManager____c__DisplayClass19_0(Zenject__TickableManager____c__DisplayClass19_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__TickableManager____c__DisplayClass19_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__TickableManager____c__DisplayClass19_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__TickableManager____c__DisplayClass19_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__TickableManager____c__DisplayClass19_0& operator=(Zenject__TickableManager____c__DisplayClass19_0&& o) noexcept = default;
  constexpr Zenject__TickableManager____c__DisplayClass19_0& operator=(Zenject__TickableManager____c__DisplayClass19_0 const& o) noexcept = default;
                


// Fields

 Zenject::ILateTickable __declspec(property(get=__get_tickable, put=__set_tickable))  tickable;

constexpr void __set_tickable(Zenject::ILateTickable value) ;

constexpr Zenject::ILateTickable __get_tickable() const;


// Methods

// Ctor Parameters []
explicit Zenject__TickableManager____c__DisplayClass19_0() ;

/// @brief Method .ctor addr 0x2dd3b7c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <InitLateTickables>b__1 addr 0x2dd56d0 size 0x80 virtual false final false
 bool _InitLateTickables_b__1(ModestTree::Util::ValuePair_2<System::Type,int32_t> x) ;

/// @brief Method __zenCreate addr 0x2dd5750 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2dd57ac size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::TickableManager
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11306))
// CS Name: Zenject.TickableManager
class CORDL_TYPE TickableManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass19_0 = Zenject::Zenject__TickableManager____c__DisplayClass19_0;

using __c__DisplayClass18_0 = Zenject::Zenject__TickableManager____c__DisplayClass18_0;

using __c = Zenject::Zenject__TickableManager____c;

using __c__DisplayClass17_0 = Zenject::Zenject__TickableManager____c__DisplayClass17_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~TickableManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "TickableManager", modifiers: " const&", def_value: None }]
constexpr TickableManager(TickableManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TickableManager", modifiers: "&&", def_value: None }]
constexpr TickableManager(TickableManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TickableManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TickableManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TickableManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TickableManager& operator=(TickableManager&& o) noexcept = default;
  constexpr TickableManager& operator=(TickableManager const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<Zenject::ITickable> __declspec(property(get=__get__tickables, put=__set__tickables))  _tickables;

constexpr void __set__tickables(System::Collections::Generic::List_1<Zenject::ITickable> value) ;

constexpr System::Collections::Generic::List_1<Zenject::ITickable> __get__tickables() const;

 System::Collections::Generic::List_1<Zenject::IFixedTickable> __declspec(property(get=__get__fixedTickables, put=__set__fixedTickables))  _fixedTickables;

constexpr void __set__fixedTickables(System::Collections::Generic::List_1<Zenject::IFixedTickable> value) ;

constexpr System::Collections::Generic::List_1<Zenject::IFixedTickable> __get__fixedTickables() const;

 System::Collections::Generic::List_1<Zenject::ILateTickable> __declspec(property(get=__get__lateTickables, put=__set__lateTickables))  _lateTickables;

constexpr void __set__lateTickables(System::Collections::Generic::List_1<Zenject::ILateTickable> value) ;

constexpr System::Collections::Generic::List_1<Zenject::ILateTickable> __get__lateTickables() const;

 System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>> __declspec(property(get=__get__priorities, put=__set__priorities))  _priorities;

constexpr void __set__priorities(System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>> value) ;

constexpr System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>> __get__priorities() const;

 System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>> __declspec(property(get=__get__fixedPriorities, put=__set__fixedPriorities))  _fixedPriorities;

constexpr void __set__fixedPriorities(System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>> value) ;

constexpr System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>> __get__fixedPriorities() const;

 System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>> __declspec(property(get=__get__latePriorities, put=__set__latePriorities))  _latePriorities;

constexpr void __set__latePriorities(System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>> value) ;

constexpr System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>> __get__latePriorities() const;

 Zenject::TickablesTaskUpdater __declspec(property(get=__get__updater, put=__set__updater))  _updater;

constexpr void __set__updater(Zenject::TickablesTaskUpdater value) ;

constexpr Zenject::TickablesTaskUpdater __get__updater() const;

 Zenject::FixedTickablesTaskUpdater __declspec(property(get=__get__fixedUpdater, put=__set__fixedUpdater))  _fixedUpdater;

constexpr void __set__fixedUpdater(Zenject::FixedTickablesTaskUpdater value) ;

constexpr Zenject::FixedTickablesTaskUpdater __get__fixedUpdater() const;

 Zenject::LateTickablesTaskUpdater __declspec(property(get=__get__lateUpdater, put=__set__lateUpdater))  _lateUpdater;

constexpr void __set__lateUpdater(Zenject::LateTickablesTaskUpdater value) ;

constexpr Zenject::LateTickablesTaskUpdater __get__lateUpdater() const;

 bool __declspec(property(get=__get__isPaused, put=__set__isPaused))  _isPaused;

constexpr void __set__isPaused(bool value) ;

constexpr bool __get__isPaused() const;


// Properties

 System::Collections::Generic::IEnumerable_1<Zenject::ITickable> __declspec(property(get=get_Tickables))  Tickables;

 bool __declspec(property(get=get_IsPaused, put=set_IsPaused))  IsPaused;


// Methods

// Ctor Parameters []
explicit TickableManager() ;

/// @brief Method .ctor addr 0x2dd2370 size 0xbc virtual false final false
 void _ctor() ;

/// @brief Method get_Tickables addr 0x2dd242c size 0x8 virtual false final false
 System::Collections::Generic::IEnumerable_1<Zenject::ITickable> get_Tickables() ;

/// @brief Method get_IsPaused addr 0x2dd2434 size 0x8 virtual false final false
 bool get_IsPaused() ;

/// @brief Method set_IsPaused addr 0x2dd243c size 0xc virtual false final false
 void set_IsPaused(bool value) ;

/// @brief Method Initialize addr 0x2dd2448 size 0x20 virtual false final false
 void Initialize() ;

/// @brief Method InitFixedTickables addr 0x2dd2c14 size 0x7ac virtual false final false
 void InitFixedTickables() ;

/// @brief Method InitTickables addr 0x2dd2468 size 0x7ac virtual false final false
 void InitTickables() ;

/// @brief Method InitLateTickables addr 0x2dd33c0 size 0x7ac virtual false final false
 void InitLateTickables() ;

/// @brief Method Add addr 0x2dd3b84 size 0x68 virtual false final false
 void Add(Zenject::ITickable tickable, int32_t priority) ;

/// @brief Method Add addr 0x2dd3bec size 0x8 virtual false final false
 void Add(Zenject::ITickable tickable) ;

/// @brief Method AddLate addr 0x2dd3bf4 size 0x68 virtual false final false
 void AddLate(Zenject::ILateTickable tickable, int32_t priority) ;

/// @brief Method AddLate addr 0x2dd3c5c size 0x8 virtual false final false
 void AddLate(Zenject::ILateTickable tickable) ;

/// @brief Method AddFixed addr 0x2dd3c64 size 0x68 virtual false final false
 void AddFixed(Zenject::IFixedTickable tickable, int32_t priority) ;

/// @brief Method AddFixed addr 0x2dd3ccc size 0x5c virtual false final false
 void AddFixed(Zenject::IFixedTickable tickable) ;

/// @brief Method Remove addr 0x2dd3d28 size 0x58 virtual false final false
 void Remove(Zenject::ITickable tickable) ;

/// @brief Method RemoveLate addr 0x2dd3d80 size 0x58 virtual false final false
 void RemoveLate(Zenject::ILateTickable tickable) ;

/// @brief Method RemoveFixed addr 0x2dd3dd8 size 0x58 virtual false final false
 void RemoveFixed(Zenject::IFixedTickable tickable) ;

/// @brief Method Update addr 0x2dcd854 size 0x88 virtual false final false
 void Update() ;

/// @brief Method FixedUpdate addr 0x2dcd994 size 0x88 virtual false final false
 void FixedUpdate() ;

/// @brief Method LateUpdate addr 0x2dcd8f4 size 0x88 virtual false final false
 void LateUpdate() ;

/// @brief Method __zenCreate addr 0x2dd3e30 size 0x58 virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenFieldSetter0 addr 0x2dd3e88 size 0x134 virtual false final false
static void __zenFieldSetter0(::bs_hook::Il2CppWrapperType P_0, ::bs_hook::Il2CppWrapperType P_1) ;

/// @brief Method __zenFieldSetter1 addr 0x2dd3fbc size 0x134 virtual false final false
static void __zenFieldSetter1(::bs_hook::Il2CppWrapperType P_0, ::bs_hook::Il2CppWrapperType P_1) ;

/// @brief Method __zenFieldSetter2 addr 0x2dd40f0 size 0x134 virtual false final false
static void __zenFieldSetter2(::bs_hook::Il2CppWrapperType P_0, ::bs_hook::Il2CppWrapperType P_1) ;

/// @brief Method __zenFieldSetter3 addr 0x2dd4224 size 0x134 virtual false final false
static void __zenFieldSetter3(::bs_hook::Il2CppWrapperType P_0, ::bs_hook::Il2CppWrapperType P_1) ;

/// @brief Method __zenFieldSetter4 addr 0x2dd4358 size 0x134 virtual false final false
static void __zenFieldSetter4(::bs_hook::Il2CppWrapperType P_0, ::bs_hook::Il2CppWrapperType P_1) ;

/// @brief Method __zenFieldSetter5 addr 0x2dd448c size 0x134 virtual false final false
static void __zenFieldSetter5(::bs_hook::Il2CppWrapperType P_0, ::bs_hook::Il2CppWrapperType P_1) ;

/// @brief Method __zenInjectMethod0 addr 0x2dd45c0 size 0x80 virtual false final false
static void __zenInjectMethod0(::bs_hook::Il2CppWrapperType P_0, ::ArrayW<::bs_hook::Il2CppWrapperType> P_1) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2dd4640 size 0x840 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::TickableManager);
DEFINE_IL2CPP_ARG_TYPE(Zenject::TickableManager, "Zenject", "TickableManager");
NEED_NO_BOX(Zenject::Zenject__TickableManager____c);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__TickableManager____c, "Zenject", "TickableManager/<>c");
NEED_NO_BOX(Zenject::Zenject__TickableManager____c__DisplayClass17_0);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__TickableManager____c__DisplayClass17_0, "Zenject", "TickableManager/<>c__DisplayClass17_0");
NEED_NO_BOX(Zenject::Zenject__TickableManager____c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__TickableManager____c__DisplayClass18_0, "Zenject", "TickableManager/<>c__DisplayClass18_0");
NEED_NO_BOX(Zenject::Zenject__TickableManager____c__DisplayClass19_0);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__TickableManager____c__DisplayClass19_0, "Zenject", "TickableManager/<>c__DisplayClass19_0");
