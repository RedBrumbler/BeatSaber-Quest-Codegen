#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct HumanDescription;
}
// Forward declare root types
namespace UnityEngine {
class Avatar;
}
// Type: UnityEngine::Avatar
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10161))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15048))
// CS Name: UnityEngine.Avatar
class CORDL_TYPE Avatar : public UnityEngine::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Avatar() = default;

// Ctor Parameters [CppParam { name: "", ty: "Avatar", modifiers: " const&", def_value: None }]
constexpr Avatar(Avatar const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Avatar", modifiers: "&&", def_value: None }]
constexpr Avatar(Avatar&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Avatar(void* ptr) noexcept : UnityEngine::Object(ptr) {
}


  constexpr Avatar& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Avatar& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Avatar& operator=(Avatar&& o) noexcept = default;
  constexpr Avatar& operator=(Avatar const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_isValid))  isValid;

 bool __declspec(property(get=get_isHuman))  isHuman;

 UnityEngine::HumanDescription __declspec(property(get=get_humanDescription))  humanDescription;


// Methods

// Ctor Parameters []
explicit Avatar() ;

/// @brief Method .ctor addr 0x2b4b9d0 size 0x58 virtual false final false
 void _ctor() ;

/// @brief Method get_isValid addr 0x2b4ba28 size 0x3c virtual false final false
 bool get_isValid() ;

/// @brief Method get_isHuman addr 0x2b4ba64 size 0x3c virtual false final false
 bool get_isHuman() ;

/// @brief Method get_humanDescription addr 0x2b4baa0 size 0x6c virtual false final false
 UnityEngine::HumanDescription get_humanDescription() ;

/// @brief Method SetMuscleMinMax addr 0x2b4bb50 size 0x5c virtual false final false
 void SetMuscleMinMax(int32_t muscleId, float_t min, float_t max) ;

/// @brief Method SetParameter addr 0x2b4bbac size 0x54 virtual false final false
 void SetParameter(int32_t parameterId, float_t value) ;

/// @brief Method GetAxisLength addr 0x2b4bc00 size 0x70 virtual false final false
 float_t GetAxisLength(int32_t humanId) ;

/// @brief Method GetPreRotation addr 0x2b4bcf0 size 0x4c virtual false final false
 UnityEngine::Quaternion GetPreRotation(int32_t humanId) ;

/// @brief Method GetPostRotation addr 0x2b4bd9c size 0x4c virtual false final false
 UnityEngine::Quaternion GetPostRotation(int32_t humanId) ;

/// @brief Method GetZYPostQ addr 0x2b4be48 size 0xac virtual false final false
 UnityEngine::Quaternion GetZYPostQ(int32_t humanId, UnityEngine::Quaternion parentQ, UnityEngine::Quaternion q) ;

/// @brief Method GetZYRoll addr 0x2b4bf6c size 0x74 virtual false final false
 UnityEngine::Quaternion GetZYRoll(int32_t humanId, UnityEngine::Vector3 uvw) ;

/// @brief Method GetLimitSign addr 0x2b4c04c size 0x4c virtual false final false
 UnityEngine::Vector3 GetLimitSign(int32_t humanId) ;

/// @brief Method Internal_GetAxisLength addr 0x2b4bcac size 0x44 virtual false final false
 float_t Internal_GetAxisLength(int32_t humanId) ;

/// @brief Method Internal_GetPreRotation addr 0x2b4bd3c size 0x60 virtual false final false
 UnityEngine::Quaternion Internal_GetPreRotation(int32_t humanId) ;

/// @brief Method Internal_GetPostRotation addr 0x2b4bde8 size 0x60 virtual false final false
 UnityEngine::Quaternion Internal_GetPostRotation(int32_t humanId) ;

/// @brief Method Internal_GetZYPostQ addr 0x2b4bef4 size 0x78 virtual false final false
 UnityEngine::Quaternion Internal_GetZYPostQ(int32_t humanId, UnityEngine::Quaternion parentQ, UnityEngine::Quaternion q) ;

/// @brief Method Internal_GetZYRoll addr 0x2b4bfe0 size 0x6c virtual false final false
 UnityEngine::Quaternion Internal_GetZYRoll(int32_t humanId, UnityEngine::Vector3 uvw) ;

/// @brief Method Internal_GetLimitSign addr 0x2b4c098 size 0x64 virtual false final false
 UnityEngine::Vector3 Internal_GetLimitSign(int32_t humanId) ;

/// @brief Method get_humanDescription_Injected addr 0x2b4bb0c size 0x44 virtual false final false
 void get_humanDescription_Injected(ByRef<UnityEngine::HumanDescription> ret) ;

/// @brief Method Internal_GetPreRotation_Injected addr 0x2b4c0fc size 0x54 virtual false final false
 void Internal_GetPreRotation_Injected(int32_t humanId, ByRef<UnityEngine::Quaternion> ret) ;

/// @brief Method Internal_GetPostRotation_Injected addr 0x2b4c150 size 0x54 virtual false final false
 void Internal_GetPostRotation_Injected(int32_t humanId, ByRef<UnityEngine::Quaternion> ret) ;

/// @brief Method Internal_GetZYPostQ_Injected addr 0x2b4c1a4 size 0x6c virtual false final false
 void Internal_GetZYPostQ_Injected(int32_t humanId, ByRef<UnityEngine::Quaternion> parentQ, ByRef<UnityEngine::Quaternion> q, ByRef<UnityEngine::Quaternion> ret) ;

/// @brief Method Internal_GetZYRoll_Injected addr 0x2b4c210 size 0x5c virtual false final false
 void Internal_GetZYRoll_Injected(int32_t humanId, ByRef<UnityEngine::Vector3> uvw, ByRef<UnityEngine::Quaternion> ret) ;

/// @brief Method Internal_GetLimitSign_Injected addr 0x2b4c26c size 0x54 virtual false final false
 void Internal_GetLimitSign_Injected(int32_t humanId, ByRef<UnityEngine::Vector3> ret) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Avatar);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Avatar, "UnityEngine", "Avatar");
