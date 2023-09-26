#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class IMultiplayerSpectatingSpot;
}
namespace GlobalNamespace {
class MultiplayerLocalInactivePlayerSongSyncController;
}
namespace GlobalNamespace {
class FadeInOutController;
}
namespace GlobalNamespace {
class MultiplayerSpectatingSpotManager;
}
namespace GlobalNamespace {
struct GlobalNamespace__MultiplayerController__State;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class MultiplayerController;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18;
}
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17;
}
namespace GlobalNamespace {
class MultiplayerSpectatorController;
}
// Type: ::<SwitchToDefaultSpotWithFadeCoroutine>d__17
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5357))
// CS Name: MultiplayerSpectatorController::<SwitchToDefaultSpotWithFadeCoroutine>d__17
class CORDL_TYPE GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17(GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17(GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17& operator=(GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17&& o) noexcept = default;
  constexpr GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17& operator=(GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::MultiplayerSpectatorController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::MultiplayerSpectatorController value) ;

constexpr GlobalNamespace::MultiplayerSpectatorController __get___4__this() const;

 GlobalNamespace::IMultiplayerSpectatingSpot __declspec(property(get=__get__defaultSpot_5__2, put=__set__defaultSpot_5__2))  _defaultSpot_5__2;

constexpr void __set__defaultSpot_5__2(GlobalNamespace::IMultiplayerSpectatingSpot value) ;

constexpr GlobalNamespace::IMultiplayerSpectatingSpot __get__defaultSpot_5__2() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17(int32_t __1__state) ;

/// @brief Method .ctor addr 0x213f8fc size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x213f980 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x213f984 size 0xf0 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x213fa74 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x213fa7c size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x213fabc size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<SwitchToDefaultSpotCoroutine>d__18
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5358))
// CS Name: MultiplayerSpectatorController::<SwitchToDefaultSpotCoroutine>d__18
class CORDL_TYPE GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18(GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18(GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18& operator=(GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18&& o) noexcept = default;
  constexpr GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18& operator=(GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::MultiplayerSpectatorController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::MultiplayerSpectatorController value) ;

constexpr GlobalNamespace::MultiplayerSpectatorController __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18(int32_t __1__state) ;

/// @brief Method .ctor addr 0x213f924 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x213fac4 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x213fac8 size 0x60 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x213fb28 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x213fb30 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x213fb70 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerSpectatorController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5359))
// CS Name: MultiplayerSpectatorController
class CORDL_TYPE MultiplayerSpectatorController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _SwitchToDefaultSpotCoroutine_d__18 = GlobalNamespace::GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18;

using _SwitchToDefaultSpotWithFadeCoroutine_d__17 = GlobalNamespace::GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~MultiplayerSpectatorController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerSpectatorController", modifiers: " const&", def_value: None }]
constexpr MultiplayerSpectatorController(MultiplayerSpectatorController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerSpectatorController", modifiers: "&&", def_value: None }]
constexpr MultiplayerSpectatorController(MultiplayerSpectatorController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerSpectatorController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerSpectatorController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerSpectatorController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerSpectatorController& operator=(MultiplayerSpectatorController&& o) noexcept = default;
  constexpr MultiplayerSpectatorController& operator=(MultiplayerSpectatorController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MultiplayerSpectatingSpotManager __declspec(property(get=__get__spotManager, put=__set__spotManager))  _spotManager;

constexpr void __set__spotManager(GlobalNamespace::MultiplayerSpectatingSpotManager value) ;

constexpr GlobalNamespace::MultiplayerSpectatingSpotManager __get__spotManager() const;

 GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController __declspec(property(get=__get__songController, put=__set__songController))  _songController;

constexpr void __set__songController(GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController value) ;

constexpr GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController __get__songController() const;

 GlobalNamespace::MultiplayerController __declspec(property(get=__get__multiplayerController, put=__set__multiplayerController))  _multiplayerController;

constexpr void __set__multiplayerController(GlobalNamespace::MultiplayerController value) ;

constexpr GlobalNamespace::MultiplayerController __get__multiplayerController() const;

 GlobalNamespace::FadeInOutController __declspec(property(get=__get__fadeInOutController, put=__set__fadeInOutController))  _fadeInOutController;

constexpr void __set__fadeInOutController(GlobalNamespace::FadeInOutController value) ;

constexpr GlobalNamespace::FadeInOutController __get__fadeInOutController() const;

 System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot> __declspec(property(get=__get_spectatingSpotDidChangeEvent, put=__set_spectatingSpotDidChangeEvent))  spectatingSpotDidChangeEvent;

constexpr void __set_spectatingSpotDidChangeEvent(System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot> value) ;

constexpr System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot> __get_spectatingSpotDidChangeEvent() const;

 UnityEngine::Transform __declspec(property(get=__get__transform, put=__set__transform))  _transform;

constexpr void __set__transform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__transform() const;

 GlobalNamespace::IMultiplayerSpectatingSpot __declspec(property(get=__get__currentSpot, put=__set__currentSpot))  _currentSpot;

constexpr void __set__currentSpot(GlobalNamespace::IMultiplayerSpectatingSpot value) ;

constexpr GlobalNamespace::IMultiplayerSpectatingSpot __get__currentSpot() const;


// Properties

 GlobalNamespace::IMultiplayerSpectatingSpot __declspec(property(get=get_currentSpot))  currentSpot;


// Methods

/// @brief Method add_spectatingSpotDidChangeEvent addr 0x213f26c size 0xb0 virtual false final false
 void add_spectatingSpotDidChangeEvent(System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot> value) ;

/// @brief Method remove_spectatingSpotDidChangeEvent addr 0x213f31c size 0xb0 virtual false final false
 void remove_spectatingSpotDidChangeEvent(System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot> value) ;

/// @brief Method get_currentSpot addr 0x213f3cc size 0x8 virtual false final false
 GlobalNamespace::IMultiplayerSpectatingSpot get_currentSpot() ;

/// @brief Method Awake addr 0x213f3d4 size 0x1c virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x213f3f0 size 0x8c virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x213f47c size 0xd4 virtual false final false
 void OnDestroy() ;

/// @brief Method SwitchToDefaultSpot addr 0x213f550 size 0x20 virtual false final false
 void SwitchToDefaultSpot() ;

/// @brief Method SwitchToPrev addr 0x213f5d8 size 0x3c virtual false final false
 void SwitchToPrev() ;

/// @brief Method SwitchToNext addr 0x213f858 size 0x3c virtual false final false
 void SwitchToNext() ;

/// @brief Method SwitchToDefaultSpotWithFadeCoroutine addr 0x213f894 size 0x68 virtual false final false
 System::Collections::IEnumerator SwitchToDefaultSpotWithFadeCoroutine() ;

/// @brief Method SwitchToDefaultSpotCoroutine addr 0x213f570 size 0x68 virtual false final false
 System::Collections::IEnumerator SwitchToDefaultSpotCoroutine() ;

/// @brief Method SwitchToSpectatingSpot addr 0x213f614 size 0x244 virtual false final false
 void SwitchToSpectatingSpot(GlobalNamespace::IMultiplayerSpectatingSpot spectatingSpot) ;

/// @brief Method HandleStateChanged addr 0x213f94c size 0x2c virtual false final false
 void HandleStateChanged(GlobalNamespace::GlobalNamespace__MultiplayerController__State state) ;

// Ctor Parameters []
explicit MultiplayerSpectatorController() ;

/// @brief Method .ctor addr 0x213f978 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18, "", "MultiplayerSpectatorController/<SwitchToDefaultSpotCoroutine>d__18");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17, "", "MultiplayerSpectatorController/<SwitchToDefaultSpotWithFadeCoroutine>d__17");
NEED_NO_BOX(GlobalNamespace::MultiplayerSpectatorController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerSpectatorController, "", "MultiplayerSpectatorController");
