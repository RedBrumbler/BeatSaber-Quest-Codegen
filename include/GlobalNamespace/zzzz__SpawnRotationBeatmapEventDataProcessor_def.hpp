#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataProcessor_1_def.hpp"
#include "GlobalNamespace/zzzz__SpawnRotationBeatmapEventData_def.hpp"
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SpawnRotationBeatmapEventDataProcessor;
}
// Type: ::SpawnRotationBeatmapEventDataProcessor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14944), inst: 923 }), TypeDefinitionIndex(TypeDefinitionIndex(14942)), TypeDefinitionIndex(TypeDefinitionIndex(14944))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14949))
// CS Name: SpawnRotationBeatmapEventDataProcessor
class CORDL_TYPE SpawnRotationBeatmapEventDataProcessor : public GlobalNamespace::BeatmapEventDataProcessor_1<GlobalNamespace::SpawnRotationBeatmapEventData> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SpawnRotationBeatmapEventDataProcessor() = default;

// Ctor Parameters [CppParam { name: "", ty: "SpawnRotationBeatmapEventDataProcessor", modifiers: " const&", def_value: None }]
constexpr SpawnRotationBeatmapEventDataProcessor(SpawnRotationBeatmapEventDataProcessor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SpawnRotationBeatmapEventDataProcessor", modifiers: "&&", def_value: None }]
constexpr SpawnRotationBeatmapEventDataProcessor(SpawnRotationBeatmapEventDataProcessor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SpawnRotationBeatmapEventDataProcessor(void* ptr) noexcept : GlobalNamespace::BeatmapEventDataProcessor_1<GlobalNamespace::SpawnRotationBeatmapEventData>(ptr) {
}


  constexpr SpawnRotationBeatmapEventDataProcessor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SpawnRotationBeatmapEventDataProcessor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SpawnRotationBeatmapEventDataProcessor& operator=(SpawnRotationBeatmapEventDataProcessor&& o) noexcept = default;
  constexpr SpawnRotationBeatmapEventDataProcessor& operator=(SpawnRotationBeatmapEventDataProcessor const& o) noexcept = default;
                


// Methods

/// @brief Method ProcessInsertedEventDataInternal addr 0xda2368 size 0x1f0 virtual true final false
 void ProcessInsertedEventDataInternal(System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem> insertedNode) ;

/// @brief Method ProcessBeforeDeleteEventDataInternal addr 0xda2558 size 0x240 virtual true final false
 void ProcessBeforeDeleteEventDataInternal(System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem> nodeToDelete) ;

// Ctor Parameters []
explicit SpawnRotationBeatmapEventDataProcessor() ;

/// @brief Method .ctor addr 0xda2798 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SpawnRotationBeatmapEventDataProcessor);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SpawnRotationBeatmapEventDataProcessor, "", "SpawnRotationBeatmapEventDataProcessor");
