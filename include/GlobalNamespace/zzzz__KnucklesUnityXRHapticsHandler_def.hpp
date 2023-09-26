#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::XR {
struct InputDevice;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class WaitForSecondsRealtime;
}
namespace GlobalNamespace {
class IUnityXRHapticsHandler;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine::XR {
struct XRNode;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9;
}
namespace GlobalNamespace {
class KnucklesUnityXRHapticsHandler;
}
// Type: ::<HapticsCoroutine>d__9
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13934))
// CS Name: KnucklesUnityXRHapticsHandler::<HapticsCoroutine>d__9
class CORDL_TYPE GlobalNamespace__KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GlobalNamespace__KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9(GlobalNamespace__KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9(GlobalNamespace__KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9& operator=(GlobalNamespace__KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9&& o) noexcept = default;
  constexpr GlobalNamespace__KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9& operator=(GlobalNamespace__KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::KnucklesUnityXRHapticsHandler __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::KnucklesUnityXRHapticsHandler value) ;

constexpr GlobalNamespace::KnucklesUnityXRHapticsHandler __get___4__this() const;

 UnityEngine::XR::InputDevice __declspec(property(get=__get__device_5__2, put=__set__device_5__2))  _device_5__2;

constexpr void __set__device_5__2(UnityEngine::XR::InputDevice value) ;

constexpr UnityEngine::XR::InputDevice __get__device_5__2() const;

 UnityEngine::WaitForSecondsRealtime __declspec(property(get=__get__waiter_5__3, put=__set__waiter_5__3))  _waiter_5__3;

constexpr void __set__waiter_5__3(UnityEngine::WaitForSecondsRealtime value) ;

constexpr UnityEngine::WaitForSecondsRealtime __get__waiter_5__3() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9(int32_t __1__state) ;

/// @brief Method .ctor addr 0x1fc07cc size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x1fc0878 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x1fc087c size 0x110 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1fc098c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x1fc0994 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x1fc09d4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::KnucklesUnityXRHapticsHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13935))
// CS Name: KnucklesUnityXRHapticsHandler
class CORDL_TYPE KnucklesUnityXRHapticsHandler : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _HapticsCoroutine_d__9 = GlobalNamespace::GlobalNamespace__KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9;

/// @brief Convert operator to GlobalNamespace::IUnityXRHapticsHandler
constexpr operator  GlobalNamespace::IUnityXRHapticsHandler() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~KnucklesUnityXRHapticsHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "KnucklesUnityXRHapticsHandler", modifiers: " const&", def_value: None }]
constexpr KnucklesUnityXRHapticsHandler(KnucklesUnityXRHapticsHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KnucklesUnityXRHapticsHandler", modifiers: "&&", def_value: None }]
constexpr KnucklesUnityXRHapticsHandler(KnucklesUnityXRHapticsHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KnucklesUnityXRHapticsHandler(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr KnucklesUnityXRHapticsHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KnucklesUnityXRHapticsHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KnucklesUnityXRHapticsHandler& operator=(KnucklesUnityXRHapticsHandler&& o) noexcept = default;
  constexpr KnucklesUnityXRHapticsHandler& operator=(KnucklesUnityXRHapticsHandler const& o) noexcept = default;
                


// Fields

/// @brief Field kRate offset 0
static constexpr float_t  kRate{0.0125};

 UnityEngine::MonoBehaviour __declspec(property(get=__get__coroutineRunner, put=__set__coroutineRunner))  _coroutineRunner;

constexpr void __set__coroutineRunner(UnityEngine::MonoBehaviour value) ;

constexpr UnityEngine::MonoBehaviour __get__coroutineRunner() const;

 UnityEngine::Coroutine __declspec(property(get=__get__hapticsCoroutine, put=__set__hapticsCoroutine))  _hapticsCoroutine;

constexpr void __set__hapticsCoroutine(UnityEngine::Coroutine value) ;

constexpr UnityEngine::Coroutine __get__hapticsCoroutine() const;

 UnityEngine::XR::XRNode __declspec(property(get=__get__node, put=__set__node))  _node;

constexpr void __set__node(UnityEngine::XR::XRNode value) ;

constexpr UnityEngine::XR::XRNode __get__node() const;

 float_t __declspec(property(get=__get__remainingTime, put=__set__remainingTime))  _remainingTime;

constexpr void __set__remainingTime(float_t value) ;

constexpr float_t __get__remainingTime() const;

 float_t __declspec(property(get=__get__amplitude, put=__set__amplitude))  _amplitude;

constexpr void __set__amplitude(float_t value) ;

constexpr float_t __get__amplitude() const;


// Methods

// Ctor Parameters [CppParam { name: "node", ty: "UnityEngine::XR::XRNode", modifiers: "", def_value: None }, CppParam { name: "coroutineRunner", ty: "UnityEngine::MonoBehaviour", modifiers: "", def_value: None }]
explicit KnucklesUnityXRHapticsHandler(UnityEngine::XR::XRNode node, UnityEngine::MonoBehaviour coroutineRunner) ;

/// @brief Method .ctor addr 0x1fc06d4 size 0x58 virtual false final false
 void _ctor(UnityEngine::XR::XRNode node, UnityEngine::MonoBehaviour coroutineRunner) ;

/// @brief Method TriggerHapticPulse addr 0x1fc0794 size 0x20 virtual true final true
 void TriggerHapticPulse(float_t strength, float_t duration) ;

/// @brief Method StopHaptics addr 0x1fc07b4 size 0x18 virtual true final true
 void StopHaptics() ;

/// @brief Method HapticsCoroutine addr 0x1fc072c size 0x68 virtual false final false
 System::Collections::IEnumerator HapticsCoroutine() ;

/// @brief Method Dispose addr 0x1fc07f4 size 0x84 virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__KnucklesUnityXRHapticsHandler___HapticsCoroutine_d__9, "", "KnucklesUnityXRHapticsHandler/<HapticsCoroutine>d__9");
NEED_NO_BOX(GlobalNamespace::KnucklesUnityXRHapticsHandler);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::KnucklesUnityXRHapticsHandler, "", "KnucklesUnityXRHapticsHandler");
