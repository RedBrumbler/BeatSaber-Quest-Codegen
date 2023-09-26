#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace System::Threading::Tasks {
class Task;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
struct GlobalNamespace__LevelScenesTransitionSetupDataSO___BeforeScenesWillBeActivatedAsync_d__6;
}
// Type: ::<BeforeScenesWillBeActivatedAsync>d__6
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6141))
// CS Name: LevelScenesTransitionSetupDataSO::<BeforeScenesWillBeActivatedAsync>d__6
struct CORDL_TYPE GlobalNamespace__LevelScenesTransitionSetupDataSO___BeforeScenesWillBeActivatedAsync_d__6 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::LevelScenesTransitionSetupDataSO", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr GlobalNamespace__LevelScenesTransitionSetupDataSO___BeforeScenesWillBeActivatedAsync_d__6(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, GlobalNamespace::LevelScenesTransitionSetupDataSO __4__this, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;


                    constexpr GlobalNamespace__LevelScenesTransitionSetupDataSO___BeforeScenesWillBeActivatedAsync_d__6(GlobalNamespace__LevelScenesTransitionSetupDataSO___BeforeScenesWillBeActivatedAsync_d__6 const&) = default;
                    constexpr GlobalNamespace__LevelScenesTransitionSetupDataSO___BeforeScenesWillBeActivatedAsync_d__6(GlobalNamespace__LevelScenesTransitionSetupDataSO___BeforeScenesWillBeActivatedAsync_d__6&&) = default;
                    constexpr GlobalNamespace__LevelScenesTransitionSetupDataSO___BeforeScenesWillBeActivatedAsync_d__6& operator=(GlobalNamespace__LevelScenesTransitionSetupDataSO___BeforeScenesWillBeActivatedAsync_d__6 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__LevelScenesTransitionSetupDataSO___BeforeScenesWillBeActivatedAsync_d__6& operator=(GlobalNamespace__LevelScenesTransitionSetupDataSO___BeforeScenesWillBeActivatedAsync_d__6&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LevelScenesTransitionSetupDataSO___BeforeScenesWillBeActivatedAsync_d__6(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder __get___t__builder() const;

 GlobalNamespace::LevelScenesTransitionSetupDataSO __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::LevelScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::LevelScenesTransitionSetupDataSO __get___4__this() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x2209570 size 0x188 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x22096f8 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LevelScenesTransitionSetupDataSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13893))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6142))
// CS Name: LevelScenesTransitionSetupDataSO
class CORDL_TYPE LevelScenesTransitionSetupDataSO : public GlobalNamespace::ScenesTransitionSetupDataSO {
public:
// Declarations
using _BeforeScenesWillBeActivatedAsync_d__6 = GlobalNamespace::GlobalNamespace__LevelScenesTransitionSetupDataSO___BeforeScenesWillBeActivatedAsync_d__6;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~LevelScenesTransitionSetupDataSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelScenesTransitionSetupDataSO", modifiers: " const&", def_value: None }]
constexpr LevelScenesTransitionSetupDataSO(LevelScenesTransitionSetupDataSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
constexpr LevelScenesTransitionSetupDataSO(LevelScenesTransitionSetupDataSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LevelScenesTransitionSetupDataSO(void* ptr) noexcept : GlobalNamespace::ScenesTransitionSetupDataSO(ptr) {
}


  constexpr LevelScenesTransitionSetupDataSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LevelScenesTransitionSetupDataSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LevelScenesTransitionSetupDataSO& operator=(LevelScenesTransitionSetupDataSO&& o) noexcept = default;
  constexpr LevelScenesTransitionSetupDataSO& operator=(LevelScenesTransitionSetupDataSO const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GameplayCoreSceneSetupData __declspec(property(get=__get__gameplayCoreSceneSetupData_k__BackingField, put=__set__gameplayCoreSceneSetupData_k__BackingField))  _gameplayCoreSceneSetupData_k__BackingField;

constexpr void __set__gameplayCoreSceneSetupData_k__BackingField(GlobalNamespace::GameplayCoreSceneSetupData value) ;

constexpr GlobalNamespace::GameplayCoreSceneSetupData __get__gameplayCoreSceneSetupData_k__BackingField() const;


// Properties

 GlobalNamespace::IReadonlyBeatmapData __declspec(property(get=get_transformedBeatmapData))  transformedBeatmapData;

 GlobalNamespace::GameplayCoreSceneSetupData __declspec(property(get=get_gameplayCoreSceneSetupData, put=set_gameplayCoreSceneSetupData))  gameplayCoreSceneSetupData;


// Methods

/// @brief Method get_transformedBeatmapData addr 0x2209474 size 0x1c virtual false final false
 GlobalNamespace::IReadonlyBeatmapData get_transformedBeatmapData() ;

/// @brief Method get_gameplayCoreSceneSetupData addr 0x2209490 size 0x8 virtual false final false
 GlobalNamespace::GameplayCoreSceneSetupData get_gameplayCoreSceneSetupData() ;

/// @brief Method set_gameplayCoreSceneSetupData addr 0x2209498 size 0x8 virtual false final false
 void set_gameplayCoreSceneSetupData(GlobalNamespace::GameplayCoreSceneSetupData value) ;

/// @brief Method BeforeScenesWillBeActivatedAsync addr 0x22094a0 size 0xc8 virtual true final false
 System::Threading::Tasks::Task BeforeScenesWillBeActivatedAsync() ;

// Ctor Parameters []
explicit LevelScenesTransitionSetupDataSO() ;

/// @brief Method .ctor addr 0x2209568 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LevelScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelScenesTransitionSetupDataSO, "", "LevelScenesTransitionSetupDataSO");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LevelScenesTransitionSetupDataSO___BeforeScenesWillBeActivatedAsync_d__6, "", "LevelScenesTransitionSetupDataSO/<BeforeScenesWillBeActivatedAsync>d__6");
