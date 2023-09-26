#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Keyframe;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine {
class AnimationCurve;
}
// Type: UnityEngine::AnimationCurve
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10004))
// CS Name: UnityEngine.AnimationCurve
class CORDL_TYPE AnimationCurve : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::AnimationCurve>
constexpr operator  System::IEquatable_1<UnityEngine::AnimationCurve>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AnimationCurve() = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimationCurve", modifiers: " const&", def_value: None }]
constexpr AnimationCurve(AnimationCurve const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimationCurve", modifiers: "&&", def_value: None }]
constexpr AnimationCurve(AnimationCurve&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AnimationCurve(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AnimationCurve& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AnimationCurve& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AnimationCurve& operator=(AnimationCurve&& o) noexcept = default;
  constexpr AnimationCurve& operator=(AnimationCurve const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr))  m_Ptr;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_Ptr() const;


// Properties

 ::ArrayW<UnityEngine::Keyframe> __declspec(property(get=get_keys, put=set_keys))  keys;

 int32_t __declspec(property(get=get_length))  length;


// Methods

/// @brief Method Internal_Destroy addr 0x2b5b164 size 0x3c virtual false final false
static void Internal_Destroy(::cordl_internals::intptr_t ptr) ;

/// @brief Method Internal_Create addr 0x2b5b1a0 size 0x3c virtual false final false
static ::cordl_internals::intptr_t Internal_Create(::ArrayW<UnityEngine::Keyframe> keys) ;

/// @brief Method Internal_Equals addr 0x2b5b1dc size 0x44 virtual false final false
 bool Internal_Equals(::cordl_internals::intptr_t other) ;

/// @brief Method Finalize addr 0x2b5b220 size 0xbc virtual true final false
 void Finalize() ;

/// @brief Method Evaluate addr 0x2b5b2dc size 0x4c virtual false final false
 float_t Evaluate(float_t time) ;

/// @brief Method get_keys addr 0x2b5b328 size 0x3c virtual false final false
 ::ArrayW<UnityEngine::Keyframe> get_keys() ;

/// @brief Method set_keys addr 0x2b5b3a0 size 0x44 virtual false final false
 void set_keys(::ArrayW<UnityEngine::Keyframe> value) ;

/// @brief Method AddKey addr 0x2b5b428 size 0x54 virtual false final false
 int32_t AddKey(float_t time, float_t value) ;

/// @brief Method get_length addr 0x2b5b47c size 0x3c virtual false final false
 int32_t get_length() ;

/// @brief Method SetKeys addr 0x2b5b3e4 size 0x44 virtual false final false
 void SetKeys(::ArrayW<UnityEngine::Keyframe> keys) ;

/// @brief Method GetKeys addr 0x2b5b364 size 0x3c virtual false final false
 ::ArrayW<UnityEngine::Keyframe> GetKeys() ;

/// @brief Method Linear addr 0x2b5b4b8 size 0x140 virtual false final false
static UnityEngine::AnimationCurve Linear(float_t timeStart, float_t valueStart, float_t timeEnd, float_t valueEnd) ;

/// @brief Method EaseInOut addr 0x2b5b648 size 0x134 virtual false final false
static UnityEngine::AnimationCurve EaseInOut(float_t timeStart, float_t valueStart, float_t timeEnd, float_t valueEnd) ;

// Ctor Parameters [CppParam { name: "keys", ty: "::ArrayW<UnityEngine::Keyframe>", modifiers: "", def_value: None }]
explicit AnimationCurve(::ArrayW<UnityEngine::Keyframe> keys) ;

/// @brief Method .ctor addr 0x2b5b5f8 size 0x50 virtual false final false
 void _ctor(::ArrayW<UnityEngine::Keyframe> keys) ;

// Ctor Parameters []
explicit AnimationCurve() ;

/// @brief Method .ctor addr 0x2b5b77c size 0x4c virtual false final false
 void _ctor() ;

/// @brief Method Equals addr 0x2b5b7c8 size 0xc8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method Equals addr 0x2b5b890 size 0xc8 virtual true final true
 bool Equals(UnityEngine::AnimationCurve other) ;

/// @brief Method GetHashCode addr 0x2b5b958 size 0xc virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::AnimationCurve);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AnimationCurve, "UnityEngine", "AnimationCurve");
