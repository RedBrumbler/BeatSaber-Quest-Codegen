#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace UnityEngine {
class AudioSource;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerAvatarAudioController___Start_d__4;
}
namespace GlobalNamespace {
class MultiplayerAvatarAudioController;
}
// Type: ::<Start>d__4
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4092))
// CS Name: MultiplayerAvatarAudioController::<Start>d__4
class CORDL_TYPE GlobalNamespace__MultiplayerAvatarAudioController___Start_d__4 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~GlobalNamespace__MultiplayerAvatarAudioController___Start_d__4() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerAvatarAudioController___Start_d__4", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MultiplayerAvatarAudioController___Start_d__4(GlobalNamespace__MultiplayerAvatarAudioController___Start_d__4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerAvatarAudioController___Start_d__4", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MultiplayerAvatarAudioController___Start_d__4(GlobalNamespace__MultiplayerAvatarAudioController___Start_d__4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerAvatarAudioController___Start_d__4(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MultiplayerAvatarAudioController___Start_d__4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerAvatarAudioController___Start_d__4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerAvatarAudioController___Start_d__4& operator=(GlobalNamespace__MultiplayerAvatarAudioController___Start_d__4&& o) noexcept = default;
  constexpr GlobalNamespace__MultiplayerAvatarAudioController___Start_d__4& operator=(GlobalNamespace__MultiplayerAvatarAudioController___Start_d__4 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::MultiplayerAvatarAudioController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::MultiplayerAvatarAudioController value) ;

constexpr GlobalNamespace::MultiplayerAvatarAudioController __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__MultiplayerAvatarAudioController___Start_d__4(int32_t __1__state) ;

/// @brief Method .ctor addr 0x20faca8 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x20facd8 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x20facdc size 0xd4 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x20fadb0 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x20fadb8 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x20fadf8 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerAvatarAudioController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4093))
// CS Name: MultiplayerAvatarAudioController
class CORDL_TYPE MultiplayerAvatarAudioController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__4 = GlobalNamespace::GlobalNamespace__MultiplayerAvatarAudioController___Start_d__4;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MultiplayerAvatarAudioController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerAvatarAudioController", modifiers: " const&", def_value: None }]
constexpr MultiplayerAvatarAudioController(MultiplayerAvatarAudioController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerAvatarAudioController", modifiers: "&&", def_value: None }]
constexpr MultiplayerAvatarAudioController(MultiplayerAvatarAudioController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerAvatarAudioController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerAvatarAudioController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerAvatarAudioController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerAvatarAudioController& operator=(MultiplayerAvatarAudioController&& o) noexcept = default;
  constexpr MultiplayerAvatarAudioController& operator=(MultiplayerAvatarAudioController const& o) noexcept = default;
                


// Fields

 UnityEngine::AudioSource __declspec(property(get=__get__audioSource, put=__set__audioSource))  _audioSource;

constexpr void __set__audioSource(UnityEngine::AudioSource value) ;

constexpr UnityEngine::AudioSource __get__audioSource() const;

 GlobalNamespace::IConnectedPlayer __declspec(property(get=__get__connectedPlayer, put=__set__connectedPlayer))  _connectedPlayer;

constexpr void __set__connectedPlayer(GlobalNamespace::IConnectedPlayer value) ;

constexpr GlobalNamespace::IConnectedPlayer __get__connectedPlayer() const;


// Properties

 GlobalNamespace::IConnectedPlayer __declspec(property(put=set_connectedPlayer))  connectedPlayer;


// Methods

/// @brief Method set_connectedPlayer addr 0x20fac38 size 0x8 virtual false final false
 void set_connectedPlayer(GlobalNamespace::IConnectedPlayer value) ;

/// @brief Method Start addr 0x20fac40 size 0x68 virtual false final false
 System::Collections::IEnumerator Start() ;

// Ctor Parameters []
explicit MultiplayerAvatarAudioController() ;

/// @brief Method .ctor addr 0x20facd0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MultiplayerAvatarAudioController___Start_d__4);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerAvatarAudioController___Start_d__4, "", "MultiplayerAvatarAudioController/<Start>d__4");
NEED_NO_BOX(GlobalNamespace::MultiplayerAvatarAudioController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerAvatarAudioController, "", "MultiplayerAvatarAudioController");
