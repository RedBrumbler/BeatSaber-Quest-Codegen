#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
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
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__RandomizedPitch___PlayDelayedCoroutine_d__9;
}
namespace GlobalNamespace {
class GlobalNamespace__RandomizedPitch___RestorePitchWithDelay_d__10;
}
namespace GlobalNamespace {
class RandomizedPitch;
}
// Type: ::<PlayDelayedCoroutine>d__9
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13748))
// CS Name: RandomizedPitch::<PlayDelayedCoroutine>d__9
class CORDL_TYPE GlobalNamespace__RandomizedPitch___PlayDelayedCoroutine_d__9 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~GlobalNamespace__RandomizedPitch___PlayDelayedCoroutine_d__9() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RandomizedPitch___PlayDelayedCoroutine_d__9", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__RandomizedPitch___PlayDelayedCoroutine_d__9(GlobalNamespace__RandomizedPitch___PlayDelayedCoroutine_d__9 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RandomizedPitch___PlayDelayedCoroutine_d__9", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__RandomizedPitch___PlayDelayedCoroutine_d__9(GlobalNamespace__RandomizedPitch___PlayDelayedCoroutine_d__9&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RandomizedPitch___PlayDelayedCoroutine_d__9(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__RandomizedPitch___PlayDelayedCoroutine_d__9& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__RandomizedPitch___PlayDelayedCoroutine_d__9& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__RandomizedPitch___PlayDelayedCoroutine_d__9& operator=(GlobalNamespace__RandomizedPitch___PlayDelayedCoroutine_d__9&& o) noexcept = default;
  constexpr GlobalNamespace__RandomizedPitch___PlayDelayedCoroutine_d__9& operator=(GlobalNamespace__RandomizedPitch___PlayDelayedCoroutine_d__9 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 float_t __declspec(property(get=__get_delay, put=__set_delay))  delay;

constexpr void __set_delay(float_t value) ;

constexpr float_t __get_delay() const;

 GlobalNamespace::RandomizedPitch __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::RandomizedPitch value) ;

constexpr GlobalNamespace::RandomizedPitch __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__RandomizedPitch___PlayDelayedCoroutine_d__9(int32_t __1__state) ;

/// @brief Method .ctor addr 0x1fab654 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x1fab6c0 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x1fab6c4 size 0xac virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1fab770 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x1fab778 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x1fab7b8 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<RestorePitchWithDelay>d__10
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13749))
// CS Name: RandomizedPitch::<RestorePitchWithDelay>d__10
class CORDL_TYPE GlobalNamespace__RandomizedPitch___RestorePitchWithDelay_d__10 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~GlobalNamespace__RandomizedPitch___RestorePitchWithDelay_d__10() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RandomizedPitch___RestorePitchWithDelay_d__10", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__RandomizedPitch___RestorePitchWithDelay_d__10(GlobalNamespace__RandomizedPitch___RestorePitchWithDelay_d__10 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RandomizedPitch___RestorePitchWithDelay_d__10", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__RandomizedPitch___RestorePitchWithDelay_d__10(GlobalNamespace__RandomizedPitch___RestorePitchWithDelay_d__10&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RandomizedPitch___RestorePitchWithDelay_d__10(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__RandomizedPitch___RestorePitchWithDelay_d__10& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__RandomizedPitch___RestorePitchWithDelay_d__10& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__RandomizedPitch___RestorePitchWithDelay_d__10& operator=(GlobalNamespace__RandomizedPitch___RestorePitchWithDelay_d__10&& o) noexcept = default;
  constexpr GlobalNamespace__RandomizedPitch___RestorePitchWithDelay_d__10& operator=(GlobalNamespace__RandomizedPitch___RestorePitchWithDelay_d__10 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 float_t __declspec(property(get=__get_delay, put=__set_delay))  delay;

constexpr void __set_delay(float_t value) ;

constexpr float_t __get_delay() const;

 GlobalNamespace::RandomizedPitch __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::RandomizedPitch value) ;

constexpr GlobalNamespace::RandomizedPitch __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__RandomizedPitch___RestorePitchWithDelay_d__10(int32_t __1__state) ;

/// @brief Method .ctor addr 0x1fab67c size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x1fab7c0 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x1fab7c4 size 0xbc virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1fab880 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x1fab888 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x1fab8c8 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RandomizedPitch
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13750))
// CS Name: RandomizedPitch
class CORDL_TYPE RandomizedPitch : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _RestorePitchWithDelay_d__10 = GlobalNamespace::GlobalNamespace__RandomizedPitch___RestorePitchWithDelay_d__10;

using _PlayDelayedCoroutine_d__9 = GlobalNamespace::GlobalNamespace__RandomizedPitch___PlayDelayedCoroutine_d__9;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~RandomizedPitch() = default;

// Ctor Parameters [CppParam { name: "", ty: "RandomizedPitch", modifiers: " const&", def_value: None }]
constexpr RandomizedPitch(RandomizedPitch const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RandomizedPitch", modifiers: "&&", def_value: None }]
constexpr RandomizedPitch(RandomizedPitch&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RandomizedPitch(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr RandomizedPitch& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RandomizedPitch& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RandomizedPitch& operator=(RandomizedPitch&& o) noexcept = default;
  constexpr RandomizedPitch& operator=(RandomizedPitch const& o) noexcept = default;
                


// Fields

 UnityEngine::AudioSource __declspec(property(get=__get__audioSource, put=__set__audioSource))  _audioSource;

constexpr void __set__audioSource(UnityEngine::AudioSource value) ;

constexpr UnityEngine::AudioSource __get__audioSource() const;

 float_t __declspec(property(get=__get__minPitchMultiplier, put=__set__minPitchMultiplier))  _minPitchMultiplier;

constexpr void __set__minPitchMultiplier(float_t value) ;

constexpr float_t __get__minPitchMultiplier() const;

 float_t __declspec(property(get=__get__maxPitchMultiplier, put=__set__maxPitchMultiplier))  _maxPitchMultiplier;

constexpr void __set__maxPitchMultiplier(float_t value) ;

constexpr float_t __get__maxPitchMultiplier() const;

 bool __declspec(property(get=__get__playOnAwake, put=__set__playOnAwake))  _playOnAwake;

constexpr void __set__playOnAwake(bool value) ;

constexpr bool __get__playOnAwake() const;

 float_t __declspec(property(get=__get__originalPitch, put=__set__originalPitch))  _originalPitch;

constexpr void __set__originalPitch(float_t value) ;

constexpr float_t __get__originalPitch() const;

 UnityEngine::Coroutine __declspec(property(get=__get__restoringCoroutine, put=__set__restoringCoroutine))  _restoringCoroutine;

constexpr void __set__restoringCoroutine(UnityEngine::Coroutine value) ;

constexpr UnityEngine::Coroutine __get__restoringCoroutine() const;


// Methods

/// @brief Method OnEnable addr 0x1fab400 size 0x58 virtual false final false
 void OnEnable() ;

/// @brief Method Play addr 0x1fab458 size 0xd4 virtual false final false
 void Play() ;

/// @brief Method PlayDelayed addr 0x1fab5a4 size 0x38 virtual false final false
 void PlayDelayed(float_t delay) ;

/// @brief Method PlayDelayedCoroutine addr 0x1fab5dc size 0x78 virtual false final false
 System::Collections::IEnumerator PlayDelayedCoroutine(float_t delay) ;

/// @brief Method RestorePitchWithDelay addr 0x1fab52c size 0x78 virtual false final false
 System::Collections::IEnumerator RestorePitchWithDelay(float_t delay) ;

// Ctor Parameters []
explicit RandomizedPitch() ;

/// @brief Method .ctor addr 0x1fab6a4 size 0x1c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__RandomizedPitch___PlayDelayedCoroutine_d__9);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__RandomizedPitch___PlayDelayedCoroutine_d__9, "", "RandomizedPitch/<PlayDelayedCoroutine>d__9");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__RandomizedPitch___RestorePitchWithDelay_d__10);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__RandomizedPitch___RestorePitchWithDelay_d__10, "", "RandomizedPitch/<RestorePitchWithDelay>d__10");
NEED_NO_BOX(GlobalNamespace::RandomizedPitch);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RandomizedPitch, "", "RandomizedPitch");
