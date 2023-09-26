#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace UnityEngine {
class MonoBehaviour;
}
// Type: UnityEngine::MonoBehaviour
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10148))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10185))
// CS Name: UnityEngine.MonoBehaviour
class CORDL_TYPE MonoBehaviour : public UnityEngine::Behaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MonoBehaviour() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoBehaviour", modifiers: " const&", def_value: None }]
constexpr MonoBehaviour(MonoBehaviour const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoBehaviour", modifiers: "&&", def_value: None }]
constexpr MonoBehaviour(MonoBehaviour&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoBehaviour(void* ptr) noexcept : UnityEngine::Behaviour(ptr) {
}


  constexpr MonoBehaviour& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoBehaviour& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoBehaviour& operator=(MonoBehaviour&& o) noexcept = default;
  constexpr MonoBehaviour& operator=(MonoBehaviour const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_useGUILayout, put=set_useGUILayout))  useGUILayout;


// Methods

/// @brief Method IsInvoking addr 0x2b8d5a4 size 0x3c virtual false final false
 bool IsInvoking() ;

/// @brief Method CancelInvoke addr 0x2b8d61c size 0x3c virtual false final false
 void CancelInvoke() ;

/// @brief Method Invoke addr 0x2b8d694 size 0x58 virtual false final false
 void Invoke(::StringW methodName, float_t time) ;

/// @brief Method InvokeRepeating addr 0x2b8d748 size 0xbc virtual false final false
 void InvokeRepeating(::StringW methodName, float_t time, float_t repeatRate) ;

/// @brief Method CancelInvoke addr 0x2b8d804 size 0x44 virtual false final false
 void CancelInvoke(::StringW methodName) ;

/// @brief Method IsInvoking addr 0x2b8d88c size 0x44 virtual false final false
 bool IsInvoking(::StringW methodName) ;

/// @brief Method StartCoroutine addr 0x2b8d914 size 0x8 virtual false final false
 UnityEngine::Coroutine StartCoroutine(::StringW methodName) ;

/// @brief Method StartCoroutine addr 0x2b8d91c size 0x114 virtual false final false
 UnityEngine::Coroutine StartCoroutine(::StringW methodName, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method StartCoroutine addr 0x2b8dac0 size 0xf8 virtual false final false
 UnityEngine::Coroutine StartCoroutine(System::Collections::IEnumerator routine) ;

/// @brief Method StartCoroutine_Auto addr 0x2b8dbfc size 0x4 virtual false final false
 UnityEngine::Coroutine StartCoroutine_Auto(System::Collections::IEnumerator routine) ;

/// @brief Method StopCoroutine addr 0x2b8dc00 size 0xf8 virtual false final false
 void StopCoroutine(System::Collections::IEnumerator routine) ;

/// @brief Method StopCoroutine addr 0x2b8dd3c size 0xf8 virtual false final false
 void StopCoroutine(UnityEngine::Coroutine routine) ;

/// @brief Method StopCoroutine addr 0x2b8de78 size 0x44 virtual false final false
 void StopCoroutine(::StringW methodName) ;

/// @brief Method StopAllCoroutines addr 0x2b8debc size 0x3c virtual false final false
 void StopAllCoroutines() ;

/// @brief Method get_useGUILayout addr 0x2b8def8 size 0x3c virtual false final false
 bool get_useGUILayout() ;

/// @brief Method set_useGUILayout addr 0x2b8df34 size 0x44 virtual false final false
 void set_useGUILayout(bool value) ;

/// @brief Method print addr 0x2b8df78 size 0x58 virtual false final false
static void print(::bs_hook::Il2CppWrapperType message) ;

/// @brief Method Internal_CancelInvokeAll addr 0x2b8d658 size 0x3c virtual false final false
static void Internal_CancelInvokeAll(UnityEngine::MonoBehaviour self) ;

/// @brief Method Internal_IsInvokingAll addr 0x2b8d5e0 size 0x3c virtual false final false
static bool Internal_IsInvokingAll(UnityEngine::MonoBehaviour self) ;

/// @brief Method InvokeDelayed addr 0x2b8d6ec size 0x5c virtual false final false
static void InvokeDelayed(UnityEngine::MonoBehaviour self, ::StringW methodName, float_t time, float_t repeatRate) ;

/// @brief Method CancelInvoke addr 0x2b8d848 size 0x44 virtual false final false
static void CancelInvoke(UnityEngine::MonoBehaviour self, ::StringW methodName) ;

/// @brief Method IsInvoking addr 0x2b8d8d0 size 0x44 virtual false final false
static bool IsInvoking(UnityEngine::MonoBehaviour self, ::StringW methodName) ;

/// @brief Method IsObjectMonoBehaviour addr 0x2b8da30 size 0x3c virtual false final false
static bool IsObjectMonoBehaviour(UnityEngine::Object obj) ;

/// @brief Method StartCoroutineManaged addr 0x2b8da6c size 0x54 virtual false final false
 UnityEngine::Coroutine StartCoroutineManaged(::StringW methodName, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method StartCoroutineManaged2 addr 0x2b8dbb8 size 0x44 virtual false final false
 UnityEngine::Coroutine StartCoroutineManaged2(System::Collections::IEnumerator enumerator) ;

/// @brief Method StopCoroutineManaged addr 0x2b8de34 size 0x44 virtual false final false
 void StopCoroutineManaged(UnityEngine::Coroutine routine) ;

/// @brief Method StopCoroutineFromEnumeratorManaged addr 0x2b8dcf8 size 0x44 virtual false final false
 void StopCoroutineFromEnumeratorManaged(System::Collections::IEnumerator routine) ;

/// @brief Method GetScriptClassName addr 0x2b8dfd0 size 0x3c virtual false final false
 ::StringW GetScriptClassName() ;

// Ctor Parameters []
explicit MonoBehaviour() ;

/// @brief Method .ctor addr 0x2b8e00c size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::MonoBehaviour);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::MonoBehaviour, "UnityEngine", "MonoBehaviour");
