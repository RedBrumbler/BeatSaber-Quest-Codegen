#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
class GameObject;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::SceneManagement {
struct Scene;
}
// Type: UnityEngine.SceneManagement::Scene
namespace UnityEngine::SceneManagement {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10335))
// CS Name: UnityEngine.SceneManagement.Scene
struct CORDL_TYPE Scene : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Handle", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Scene(int32_t m_Handle) noexcept;


                    constexpr Scene(Scene const&) = default;
                    constexpr Scene(Scene&&) = default;
                    constexpr Scene& operator=(Scene const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Scene& operator=(Scene&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Scene(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_m_Handle, put=__set_m_Handle))  m_Handle;

constexpr void __set_m_Handle(int32_t value) ;

constexpr int32_t __get_m_Handle() const;


// Properties

 int32_t __declspec(property(get=get_handle))  handle;

 ::StringW __declspec(property(get=get_name))  name;

 bool __declspec(property(get=get_isLoaded))  isLoaded;

 int32_t __declspec(property(get=get_rootCount))  rootCount;


// Methods

/// @brief Method IsValidInternal addr 0x2ba9534 size 0x3c virtual false final false
static bool IsValidInternal(int32_t sceneHandle) ;

/// @brief Method GetNameInternal addr 0x2ba9570 size 0x3c virtual false final false
static ::StringW GetNameInternal(int32_t sceneHandle) ;

/// @brief Method GetIsLoadedInternal addr 0x2ba95ac size 0x3c virtual false final false
static bool GetIsLoadedInternal(int32_t sceneHandle) ;

/// @brief Method GetRootCountInternal addr 0x2ba95e8 size 0x3c virtual false final false
static int32_t GetRootCountInternal(int32_t sceneHandle) ;

/// @brief Method GetRootGameObjectsInternal addr 0x2ba9624 size 0x44 virtual false final false
static void GetRootGameObjectsInternal(int32_t sceneHandle, ::bs_hook::Il2CppWrapperType resultRootList) ;

/// @brief Method get_handle addr 0x2ba9668 size 0x8 virtual false final false
 int32_t get_handle() ;

/// @brief Method IsValid addr 0x2ba9670 size 0x3c virtual false final false
 bool IsValid() ;

/// @brief Method get_name addr 0x2ba96ac size 0x3c virtual false final false
 ::StringW get_name() ;

/// @brief Method get_isLoaded addr 0x2ba96e8 size 0x3c virtual false final false
 bool get_isLoaded() ;

/// @brief Method get_rootCount addr 0x2ba9724 size 0x3c virtual false final false
 int32_t get_rootCount() ;

/// @brief Method GetRootGameObjects addr 0x2ba9760 size 0xd8 virtual false final false
 ::ArrayW<UnityEngine::GameObject> GetRootGameObjects() ;

/// @brief Method GetRootGameObjects addr 0x2ba9838 size 0x274 virtual false final false
 void GetRootGameObjects(System::Collections::Generic::List_1<UnityEngine::GameObject> rootGameObjects) ;

/// @brief Method op_Equality addr 0x2ba9aac size 0xc virtual false final false
static bool op_Equality(UnityEngine::SceneManagement::Scene lhs, UnityEngine::SceneManagement::Scene rhs) ;

/// @brief Method GetHashCode addr 0x2ba9ab8 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2ba9ac0 size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::SceneManagement
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SceneManagement::Scene, "UnityEngine.SceneManagement", "Scene");
