#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Tweening/zzzz__Tween_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TValue>
class StaticMemoryPool_7;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Tweening {
class Vector3Tween;
}
// Type: Tweening::Vector3Tween
namespace Tweening {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15958)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15958), inst: 394 }), TypeDefinitionIndex(TypeDefinitionIndex(10209))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15954))
// CS Name: Tweening.Vector3Tween
class CORDL_TYPE Vector3Tween : public Tweening::Tween_1<UnityEngine::Vector3> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~Vector3Tween() = default;

// Ctor Parameters [CppParam { name: "", ty: "Vector3Tween", modifiers: " const&", def_value: None }]
constexpr Vector3Tween(Vector3Tween const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Vector3Tween", modifiers: "&&", def_value: None }]
constexpr Vector3Tween(Vector3Tween&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Vector3Tween(void* ptr) noexcept : Tweening::Tween_1<UnityEngine::Vector3>(ptr) {
}


  constexpr Vector3Tween& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Vector3Tween& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Vector3Tween& operator=(Vector3Tween&& o) noexcept = default;
  constexpr Vector3Tween& operator=(Vector3Tween const& o) noexcept = default;
                


// Fields

static Zenject::StaticMemoryPool_7<UnityEngine::Vector3,UnityEngine::Vector3,System::Action_1<UnityEngine::Vector3>,float_t,GlobalNamespace::EaseType,float_t,Tweening::Vector3Tween> __declspec(property(get=__get_Pool, put=__set_Pool))  Pool;

static void __set_Pool(Zenject::StaticMemoryPool_7<UnityEngine::Vector3,UnityEngine::Vector3,System::Action_1<UnityEngine::Vector3>,float_t,GlobalNamespace::EaseType,float_t,Tweening::Vector3Tween> value) ;

static Zenject::StaticMemoryPool_7<UnityEngine::Vector3,UnityEngine::Vector3,System::Action_1<UnityEngine::Vector3>,float_t,GlobalNamespace::EaseType,float_t,Tweening::Vector3Tween> __get_Pool() ;


// Methods

// Ctor Parameters []
explicit Vector3Tween() ;

/// @brief Method .ctor addr 0x28ac4b0 size 0x48 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "fromValue", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "toValue", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "onUpdate", ty: "System::Action_1<UnityEngine::Vector3>", modifiers: "", def_value: None }, CppParam { name: "duration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "easeType", ty: "GlobalNamespace::EaseType", modifiers: "", def_value: None }, CppParam { name: "delay", ty: "float_t", modifiers: "", def_value: None }]
explicit Vector3Tween(UnityEngine::Vector3 fromValue, UnityEngine::Vector3 toValue, System::Action_1<UnityEngine::Vector3> onUpdate, float_t duration, GlobalNamespace::EaseType easeType, float_t delay) ;

/// @brief Method .ctor addr 0x28ac4f8 size 0xc0 virtual false final false
 void _ctor(UnityEngine::Vector3 fromValue, UnityEngine::Vector3 toValue, System::Action_1<UnityEngine::Vector3> onUpdate, float_t duration, GlobalNamespace::EaseType easeType, float_t delay) ;

/// @brief Method GetValue addr 0x28ac5b8 size 0x50 virtual true final false
 UnityEngine::Vector3 GetValue(float_t t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tweening
NEED_NO_BOX(Tweening::Vector3Tween);
DEFINE_IL2CPP_ARG_TYPE(Tweening::Vector3Tween, "Tweening", "Vector3Tween");
