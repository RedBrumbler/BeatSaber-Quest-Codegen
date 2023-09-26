#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ZenjectSafeBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace GlobalNamespace {
class GameScenesManager;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class FadeInOutController;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Forward declare root types
namespace GlobalNamespace {
class FadeInOnSceneTransitionFinished;
}
namespace GlobalNamespace {
class GlobalNamespace__FadeInOnSceneTransitionFinished___FadeCoroutine_d__4;
}
// Type: ::<FadeCoroutine>d__4
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15323))
// CS Name: FadeInOnSceneTransitionFinished::<FadeCoroutine>d__4
class CORDL_TYPE GlobalNamespace__FadeInOnSceneTransitionFinished___FadeCoroutine_d__4 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__FadeInOnSceneTransitionFinished___FadeCoroutine_d__4() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__FadeInOnSceneTransitionFinished___FadeCoroutine_d__4", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__FadeInOnSceneTransitionFinished___FadeCoroutine_d__4(GlobalNamespace__FadeInOnSceneTransitionFinished___FadeCoroutine_d__4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__FadeInOnSceneTransitionFinished___FadeCoroutine_d__4", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__FadeInOnSceneTransitionFinished___FadeCoroutine_d__4(GlobalNamespace__FadeInOnSceneTransitionFinished___FadeCoroutine_d__4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__FadeInOnSceneTransitionFinished___FadeCoroutine_d__4(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__FadeInOnSceneTransitionFinished___FadeCoroutine_d__4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__FadeInOnSceneTransitionFinished___FadeCoroutine_d__4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__FadeInOnSceneTransitionFinished___FadeCoroutine_d__4& operator=(GlobalNamespace__FadeInOnSceneTransitionFinished___FadeCoroutine_d__4&& o) noexcept = default;
  constexpr GlobalNamespace__FadeInOnSceneTransitionFinished___FadeCoroutine_d__4& operator=(GlobalNamespace__FadeInOnSceneTransitionFinished___FadeCoroutine_d__4 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::FadeInOnSceneTransitionFinished __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::FadeInOnSceneTransitionFinished value) ;

constexpr GlobalNamespace::FadeInOnSceneTransitionFinished __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__FadeInOnSceneTransitionFinished___FadeCoroutine_d__4(int32_t __1__state) ;

/// @brief Method .ctor addr 0x26a6fd8 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x26a7010 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x26a7014 size 0xb8 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x26a70cc size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x26a70d4 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x26a7114 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::FadeInOnSceneTransitionFinished
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15355))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15324))
// CS Name: FadeInOnSceneTransitionFinished
class CORDL_TYPE FadeInOnSceneTransitionFinished : public GlobalNamespace::ZenjectSafeBehaviour {
public:
// Declarations
using _FadeCoroutine_d__4 = GlobalNamespace::GlobalNamespace__FadeInOnSceneTransitionFinished___FadeCoroutine_d__4;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~FadeInOnSceneTransitionFinished() = default;

// Ctor Parameters [CppParam { name: "", ty: "FadeInOnSceneTransitionFinished", modifiers: " const&", def_value: None }]
constexpr FadeInOnSceneTransitionFinished(FadeInOnSceneTransitionFinished const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FadeInOnSceneTransitionFinished", modifiers: "&&", def_value: None }]
constexpr FadeInOnSceneTransitionFinished(FadeInOnSceneTransitionFinished&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FadeInOnSceneTransitionFinished(void* ptr) noexcept : GlobalNamespace::ZenjectSafeBehaviour(ptr) {
}


  constexpr FadeInOnSceneTransitionFinished& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FadeInOnSceneTransitionFinished& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FadeInOnSceneTransitionFinished& operator=(FadeInOnSceneTransitionFinished&& o) noexcept = default;
  constexpr FadeInOnSceneTransitionFinished& operator=(FadeInOnSceneTransitionFinished const& o) noexcept = default;
                


// Fields

 GlobalNamespace::FadeInOutController __declspec(property(get=__get__fadeInOut, put=__set__fadeInOut))  _fadeInOut;

constexpr void __set__fadeInOut(GlobalNamespace::FadeInOutController value) ;

constexpr GlobalNamespace::FadeInOutController __get__fadeInOut() const;

 GlobalNamespace::GameScenesManager __declspec(property(get=__get__gameScenesManager, put=__set__gameScenesManager))  _gameScenesManager;

constexpr void __set__gameScenesManager(GlobalNamespace::GameScenesManager value) ;

constexpr GlobalNamespace::GameScenesManager __get__gameScenesManager() const;


// Methods

/// @brief Method OnEnablePostInjection addr 0x26a6f48 size 0x20 virtual true final false
 void OnEnablePostInjection() ;

/// @brief Method OnDisable addr 0x26a6fd0 size 0x8 virtual false final false
 void OnDisable() ;

/// @brief Method FadeCoroutine addr 0x26a6f68 size 0x68 virtual false final false
 System::Collections::IEnumerator FadeCoroutine() ;

// Ctor Parameters []
explicit FadeInOnSceneTransitionFinished() ;

/// @brief Method .ctor addr 0x26a7000 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FadeInOnSceneTransitionFinished);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FadeInOnSceneTransitionFinished, "", "FadeInOnSceneTransitionFinished");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__FadeInOnSceneTransitionFinished___FadeCoroutine_d__4);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__FadeInOnSceneTransitionFinished___FadeCoroutine_d__4, "", "FadeInOnSceneTransitionFinished/<FadeCoroutine>d__4");
