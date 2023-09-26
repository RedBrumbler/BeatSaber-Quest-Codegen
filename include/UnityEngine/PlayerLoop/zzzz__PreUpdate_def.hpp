#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
// Forward declare root types
namespace UnityEngine::PlayerLoop {
struct PreUpdate;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__PreUpdate__AIUpdate;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__PreUpdate__CheckTexFieldInput;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__PreUpdate__IMGUISendQueuedEvents;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__PreUpdate__NewInputUpdate;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__PreUpdate__Physics2DUpdate;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__PreUpdate__PhysicsUpdate;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__PreUpdate__SendMouseEvents;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__PreUpdate__UpdateVideo;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__PreUpdate__WindUpdate;
}
// Type: ::PhysicsUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10486))
// CS Name: UnityEngine.PlayerLoop.PreUpdate::PhysicsUpdate
struct CORDL_TYPE UnityEngine__PlayerLoop__PreUpdate__PhysicsUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__PreUpdate__PhysicsUpdate(UnityEngine__PlayerLoop__PreUpdate__PhysicsUpdate const&) = default;
                    constexpr UnityEngine__PlayerLoop__PreUpdate__PhysicsUpdate(UnityEngine__PlayerLoop__PreUpdate__PhysicsUpdate&&) = default;
                    constexpr UnityEngine__PlayerLoop__PreUpdate__PhysicsUpdate& operator=(UnityEngine__PlayerLoop__PreUpdate__PhysicsUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__PreUpdate__PhysicsUpdate& operator=(UnityEngine__PlayerLoop__PreUpdate__PhysicsUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__PreUpdate__PhysicsUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::Physics2DUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10487))
// CS Name: UnityEngine.PlayerLoop.PreUpdate::Physics2DUpdate
struct CORDL_TYPE UnityEngine__PlayerLoop__PreUpdate__Physics2DUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__PreUpdate__Physics2DUpdate(UnityEngine__PlayerLoop__PreUpdate__Physics2DUpdate const&) = default;
                    constexpr UnityEngine__PlayerLoop__PreUpdate__Physics2DUpdate(UnityEngine__PlayerLoop__PreUpdate__Physics2DUpdate&&) = default;
                    constexpr UnityEngine__PlayerLoop__PreUpdate__Physics2DUpdate& operator=(UnityEngine__PlayerLoop__PreUpdate__Physics2DUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__PreUpdate__Physics2DUpdate& operator=(UnityEngine__PlayerLoop__PreUpdate__Physics2DUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__PreUpdate__Physics2DUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::CheckTexFieldInput
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10488))
// CS Name: UnityEngine.PlayerLoop.PreUpdate::CheckTexFieldInput
struct CORDL_TYPE UnityEngine__PlayerLoop__PreUpdate__CheckTexFieldInput : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__PreUpdate__CheckTexFieldInput(UnityEngine__PlayerLoop__PreUpdate__CheckTexFieldInput const&) = default;
                    constexpr UnityEngine__PlayerLoop__PreUpdate__CheckTexFieldInput(UnityEngine__PlayerLoop__PreUpdate__CheckTexFieldInput&&) = default;
                    constexpr UnityEngine__PlayerLoop__PreUpdate__CheckTexFieldInput& operator=(UnityEngine__PlayerLoop__PreUpdate__CheckTexFieldInput const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__PreUpdate__CheckTexFieldInput& operator=(UnityEngine__PlayerLoop__PreUpdate__CheckTexFieldInput&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__PreUpdate__CheckTexFieldInput(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::IMGUISendQueuedEvents
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10489))
// CS Name: UnityEngine.PlayerLoop.PreUpdate::IMGUISendQueuedEvents
struct CORDL_TYPE UnityEngine__PlayerLoop__PreUpdate__IMGUISendQueuedEvents : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__PreUpdate__IMGUISendQueuedEvents(UnityEngine__PlayerLoop__PreUpdate__IMGUISendQueuedEvents const&) = default;
                    constexpr UnityEngine__PlayerLoop__PreUpdate__IMGUISendQueuedEvents(UnityEngine__PlayerLoop__PreUpdate__IMGUISendQueuedEvents&&) = default;
                    constexpr UnityEngine__PlayerLoop__PreUpdate__IMGUISendQueuedEvents& operator=(UnityEngine__PlayerLoop__PreUpdate__IMGUISendQueuedEvents const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__PreUpdate__IMGUISendQueuedEvents& operator=(UnityEngine__PlayerLoop__PreUpdate__IMGUISendQueuedEvents&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__PreUpdate__IMGUISendQueuedEvents(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::SendMouseEvents
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10490))
// CS Name: UnityEngine.PlayerLoop.PreUpdate::SendMouseEvents
struct CORDL_TYPE UnityEngine__PlayerLoop__PreUpdate__SendMouseEvents : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__PreUpdate__SendMouseEvents(UnityEngine__PlayerLoop__PreUpdate__SendMouseEvents const&) = default;
                    constexpr UnityEngine__PlayerLoop__PreUpdate__SendMouseEvents(UnityEngine__PlayerLoop__PreUpdate__SendMouseEvents&&) = default;
                    constexpr UnityEngine__PlayerLoop__PreUpdate__SendMouseEvents& operator=(UnityEngine__PlayerLoop__PreUpdate__SendMouseEvents const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__PreUpdate__SendMouseEvents& operator=(UnityEngine__PlayerLoop__PreUpdate__SendMouseEvents&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__PreUpdate__SendMouseEvents(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::AIUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10491))
// CS Name: UnityEngine.PlayerLoop.PreUpdate::AIUpdate
struct CORDL_TYPE UnityEngine__PlayerLoop__PreUpdate__AIUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__PreUpdate__AIUpdate(UnityEngine__PlayerLoop__PreUpdate__AIUpdate const&) = default;
                    constexpr UnityEngine__PlayerLoop__PreUpdate__AIUpdate(UnityEngine__PlayerLoop__PreUpdate__AIUpdate&&) = default;
                    constexpr UnityEngine__PlayerLoop__PreUpdate__AIUpdate& operator=(UnityEngine__PlayerLoop__PreUpdate__AIUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__PreUpdate__AIUpdate& operator=(UnityEngine__PlayerLoop__PreUpdate__AIUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__PreUpdate__AIUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::WindUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10492))
// CS Name: UnityEngine.PlayerLoop.PreUpdate::WindUpdate
struct CORDL_TYPE UnityEngine__PlayerLoop__PreUpdate__WindUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__PreUpdate__WindUpdate(UnityEngine__PlayerLoop__PreUpdate__WindUpdate const&) = default;
                    constexpr UnityEngine__PlayerLoop__PreUpdate__WindUpdate(UnityEngine__PlayerLoop__PreUpdate__WindUpdate&&) = default;
                    constexpr UnityEngine__PlayerLoop__PreUpdate__WindUpdate& operator=(UnityEngine__PlayerLoop__PreUpdate__WindUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__PreUpdate__WindUpdate& operator=(UnityEngine__PlayerLoop__PreUpdate__WindUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__PreUpdate__WindUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::UpdateVideo
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10493))
// CS Name: UnityEngine.PlayerLoop.PreUpdate::UpdateVideo
struct CORDL_TYPE UnityEngine__PlayerLoop__PreUpdate__UpdateVideo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__PreUpdate__UpdateVideo(UnityEngine__PlayerLoop__PreUpdate__UpdateVideo const&) = default;
                    constexpr UnityEngine__PlayerLoop__PreUpdate__UpdateVideo(UnityEngine__PlayerLoop__PreUpdate__UpdateVideo&&) = default;
                    constexpr UnityEngine__PlayerLoop__PreUpdate__UpdateVideo& operator=(UnityEngine__PlayerLoop__PreUpdate__UpdateVideo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__PreUpdate__UpdateVideo& operator=(UnityEngine__PlayerLoop__PreUpdate__UpdateVideo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__PreUpdate__UpdateVideo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::NewInputUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10494))
// CS Name: UnityEngine.PlayerLoop.PreUpdate::NewInputUpdate
struct CORDL_TYPE UnityEngine__PlayerLoop__PreUpdate__NewInputUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__PreUpdate__NewInputUpdate(UnityEngine__PlayerLoop__PreUpdate__NewInputUpdate const&) = default;
                    constexpr UnityEngine__PlayerLoop__PreUpdate__NewInputUpdate(UnityEngine__PlayerLoop__PreUpdate__NewInputUpdate&&) = default;
                    constexpr UnityEngine__PlayerLoop__PreUpdate__NewInputUpdate& operator=(UnityEngine__PlayerLoop__PreUpdate__NewInputUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__PreUpdate__NewInputUpdate& operator=(UnityEngine__PlayerLoop__PreUpdate__NewInputUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__PreUpdate__NewInputUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: UnityEngine.PlayerLoop::PreUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10495))
// CS Name: UnityEngine.PlayerLoop.PreUpdate
struct CORDL_TYPE PreUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using NewInputUpdate = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreUpdate__NewInputUpdate;

using UpdateVideo = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreUpdate__UpdateVideo;

using WindUpdate = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreUpdate__WindUpdate;

using AIUpdate = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreUpdate__AIUpdate;

using SendMouseEvents = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreUpdate__SendMouseEvents;

using IMGUISendQueuedEvents = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreUpdate__IMGUISendQueuedEvents;

using CheckTexFieldInput = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreUpdate__CheckTexFieldInput;

using Physics2DUpdate = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreUpdate__Physics2DUpdate;

using PhysicsUpdate = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreUpdate__PhysicsUpdate;


                    constexpr PreUpdate(PreUpdate const&) = default;
                    constexpr PreUpdate(PreUpdate&&) = default;
                    constexpr PreUpdate& operator=(PreUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PreUpdate& operator=(PreUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PreUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::PreUpdate, "UnityEngine.PlayerLoop", "PreUpdate");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreUpdate__AIUpdate, "UnityEngine.PlayerLoop", "PreUpdate/AIUpdate");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreUpdate__CheckTexFieldInput, "UnityEngine.PlayerLoop", "PreUpdate/CheckTexFieldInput");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreUpdate__IMGUISendQueuedEvents, "UnityEngine.PlayerLoop", "PreUpdate/IMGUISendQueuedEvents");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreUpdate__NewInputUpdate, "UnityEngine.PlayerLoop", "PreUpdate/NewInputUpdate");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreUpdate__Physics2DUpdate, "UnityEngine.PlayerLoop", "PreUpdate/Physics2DUpdate");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreUpdate__PhysicsUpdate, "UnityEngine.PlayerLoop", "PreUpdate/PhysicsUpdate");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreUpdate__SendMouseEvents, "UnityEngine.PlayerLoop", "PreUpdate/SendMouseEvents");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreUpdate__UpdateVideo, "UnityEngine.PlayerLoop", "PreUpdate/UpdateVideo");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreUpdate__WindUpdate, "UnityEngine.PlayerLoop", "PreUpdate/WindUpdate");
