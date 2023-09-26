#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState,typename TSerializable,typename TDeltaSerializable>
class IScoreSyncStateManager_5;
}
namespace GlobalNamespace {
struct GlobalNamespace__StandardScoreSyncState__Score;
}
namespace GlobalNamespace {
struct StandardScoreSyncState;
}
namespace GlobalNamespace {
class StandardScoreSyncStateNetSerializable;
}
namespace GlobalNamespace {
class StandardScoreSyncStateDeltaNetSerializable;
}
// Forward declare root types
namespace GlobalNamespace {
class IScoreSyncStateManager;
}
// Type: ::IScoreSyncStateManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4542))
// CS Name: IScoreSyncStateManager
class CORDL_TYPE IScoreSyncStateManager : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IScoreSyncStateManager_5<GlobalNamespace::StandardScoreSyncState,GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score,int32_t,GlobalNamespace::StandardScoreSyncStateNetSerializable,GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable>
constexpr operator  GlobalNamespace::IScoreSyncStateManager_5<GlobalNamespace::StandardScoreSyncState,GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score,int32_t,GlobalNamespace::StandardScoreSyncStateNetSerializable,GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable>() const noexcept;

~IScoreSyncStateManager() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IScoreSyncStateManager(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IScoreSyncStateManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IScoreSyncStateManager, "", "IScoreSyncStateManager");
