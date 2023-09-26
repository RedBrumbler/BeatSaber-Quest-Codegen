#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSyncStateManager_5_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncStateDeltaNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncStateNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncState_def.hpp"
#include "GlobalNamespace/zzzz__PoseSerializable_def.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
struct PoseSerializable;
}
namespace GlobalNamespace {
class INodePoseSyncStateManager;
}
namespace GlobalNamespace {
struct GlobalNamespace__NodePoseSyncState__NodePose;
}
namespace GlobalNamespace {
class NodePoseSyncStateDeltaNetSerializable;
}
namespace GlobalNamespace {
class NodePoseSyncStateNetSerializable;
}
namespace GlobalNamespace {
template<typename T>
class IPacketPool_1;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState,typename TSerializable,typename TDeltaSerializable>
class INodePoseSyncStateManager_5;
}
namespace GlobalNamespace {
struct GlobalNamespace__MultiplayerSessionManager__MessageType;
}
namespace GlobalNamespace {
struct NodePoseSyncState;
}
// Forward declare root types
namespace GlobalNamespace {
class NodePoseSyncStateManager;
}
// Type: ::NodePoseSyncStateManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12932)), TypeDefinitionIndex(TypeDefinitionIndex(15151)), TypeDefinitionIndex(TypeDefinitionIndex(12933)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4564), inst: 3532 }), TypeDefinitionIndex(TypeDefinitionIndex(12930)), TypeDefinitionIndex(TypeDefinitionIndex(4564)), TypeDefinitionIndex(TypeDefinitionIndex(12931))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4579))
// CS Name: NodePoseSyncStateManager
class CORDL_TYPE NodePoseSyncStateManager : public GlobalNamespace::MultiplayerSyncStateManager_5<GlobalNamespace::NodePoseSyncState,GlobalNamespace::GlobalNamespace__NodePoseSyncState__NodePose,GlobalNamespace::PoseSerializable,GlobalNamespace::NodePoseSyncStateNetSerializable,GlobalNamespace::NodePoseSyncStateDeltaNetSerializable> {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::INodePoseSyncStateManager
constexpr operator  GlobalNamespace::INodePoseSyncStateManager() const noexcept;

/// @brief Convert operator to GlobalNamespace::INodePoseSyncStateManager_5<GlobalNamespace::NodePoseSyncState,GlobalNamespace::GlobalNamespace__NodePoseSyncState__NodePose,GlobalNamespace::PoseSerializable,GlobalNamespace::NodePoseSyncStateNetSerializable,GlobalNamespace::NodePoseSyncStateDeltaNetSerializable>
constexpr operator  GlobalNamespace::INodePoseSyncStateManager_5<GlobalNamespace::NodePoseSyncState,GlobalNamespace::GlobalNamespace__NodePoseSyncState__NodePose,GlobalNamespace::PoseSerializable,GlobalNamespace::NodePoseSyncStateNetSerializable,GlobalNamespace::NodePoseSyncStateDeltaNetSerializable>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~NodePoseSyncStateManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "NodePoseSyncStateManager", modifiers: " const&", def_value: None }]
constexpr NodePoseSyncStateManager(NodePoseSyncStateManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NodePoseSyncStateManager", modifiers: "&&", def_value: None }]
constexpr NodePoseSyncStateManager(NodePoseSyncStateManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NodePoseSyncStateManager(void* ptr) noexcept : GlobalNamespace::MultiplayerSyncStateManager_5<GlobalNamespace::NodePoseSyncState,GlobalNamespace::GlobalNamespace__NodePoseSyncState__NodePose,GlobalNamespace::PoseSerializable,GlobalNamespace::NodePoseSyncStateNetSerializable,GlobalNamespace::NodePoseSyncStateDeltaNetSerializable>(ptr) {
}


  constexpr NodePoseSyncStateManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NodePoseSyncStateManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NodePoseSyncStateManager& operator=(NodePoseSyncStateManager&& o) noexcept = default;
  constexpr NodePoseSyncStateManager& operator=(NodePoseSyncStateManager const& o) noexcept = default;
                


// Properties

 float_t __declspec(property(get=get_deltaUpdateFrequency))  deltaUpdateFrequency;

 float_t __declspec(property(get=get_fullStateUpdateFrequency))  fullStateUpdateFrequency;

 int32_t __declspec(property(get=get_localBufferSize))  localBufferSize;

 int32_t __declspec(property(get=get_remoteBufferSize))  remoteBufferSize;

 GlobalNamespace::IPacketPool_1<GlobalNamespace::NodePoseSyncStateNetSerializable> __declspec(property(get=get_serializablePool))  serializablePool;

 GlobalNamespace::IPacketPool_1<GlobalNamespace::NodePoseSyncStateDeltaNetSerializable> __declspec(property(get=get_deltaSerializablePool))  deltaSerializablePool;

 GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType __declspec(property(get=get_messageType))  messageType;

 GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType __declspec(property(get=get_deltaMessageType))  deltaMessageType;


// Methods

/// @brief Method get_deltaUpdateFrequency addr 0x2242ee0 size 0xc virtual true final false
 float_t get_deltaUpdateFrequency() ;

/// @brief Method get_fullStateUpdateFrequency addr 0x2242eec size 0xc virtual true final false
 float_t get_fullStateUpdateFrequency() ;

/// @brief Method get_localBufferSize addr 0x2242ef8 size 0x8 virtual true final false
 int32_t get_localBufferSize() ;

/// @brief Method get_remoteBufferSize addr 0x2242f00 size 0x8 virtual true final false
 int32_t get_remoteBufferSize() ;

/// @brief Method get_serializablePool addr 0x2242f08 size 0x8 virtual true final false
 GlobalNamespace::IPacketPool_1<GlobalNamespace::NodePoseSyncStateNetSerializable> get_serializablePool() ;

/// @brief Method get_deltaSerializablePool addr 0x2242f10 size 0x8 virtual true final false
 GlobalNamespace::IPacketPool_1<GlobalNamespace::NodePoseSyncStateDeltaNetSerializable> get_deltaSerializablePool() ;

/// @brief Method get_messageType addr 0x2242f18 size 0x8 virtual true final false
 GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType get_messageType() ;

/// @brief Method get_deltaMessageType addr 0x2242f20 size 0x8 virtual true final false
 GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType get_deltaMessageType() ;

/// @brief Method Interpolate addr 0x2242f28 size 0x5c virtual true final false
 GlobalNamespace::PoseSerializable Interpolate(GlobalNamespace::PoseSerializable prev, float_t prevTime, GlobalNamespace::PoseSerializable curr, float_t currTime, float_t time) ;

/// @brief Method Smooth addr 0x2242f84 size 0x5c virtual true final false
 GlobalNamespace::PoseSerializable Smooth(GlobalNamespace::PoseSerializable a, GlobalNamespace::PoseSerializable b, float_t smooth) ;

// Ctor Parameters []
explicit NodePoseSyncStateManager() ;

/// @brief Method .ctor addr 0x2242fe0 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::NodePoseSyncStateManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NodePoseSyncStateManager, "", "NodePoseSyncStateManager");
