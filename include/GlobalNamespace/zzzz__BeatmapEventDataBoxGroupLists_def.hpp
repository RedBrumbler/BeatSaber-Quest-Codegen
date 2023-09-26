#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace GlobalNamespace {
class BeatmapEventDataBoxGroup;
}
namespace GlobalNamespace {
class BeatmapData;
}
namespace GlobalNamespace {
class IBeatToTimeConvertor;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class BeatmapEventDataBoxGroupList;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapEventDataBoxGroupLists;
}
// Type: ::BeatmapEventDataBoxGroupLists
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4329))
// CS Name: BeatmapEventDataBoxGroupLists
class CORDL_TYPE BeatmapEventDataBoxGroupLists : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BeatmapEventDataBoxGroupLists() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataBoxGroupLists", modifiers: " const&", def_value: None }]
constexpr BeatmapEventDataBoxGroupLists(BeatmapEventDataBoxGroupLists const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataBoxGroupLists", modifiers: "&&", def_value: None }]
constexpr BeatmapEventDataBoxGroupLists(BeatmapEventDataBoxGroupLists&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapEventDataBoxGroupLists(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapEventDataBoxGroupLists& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapEventDataBoxGroupLists& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapEventDataBoxGroupLists& operator=(BeatmapEventDataBoxGroupLists&& o) noexcept = default;
  constexpr BeatmapEventDataBoxGroupLists& operator=(BeatmapEventDataBoxGroupLists const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::Dictionary_2<int32_t,GlobalNamespace::BeatmapEventDataBoxGroupList> __declspec(property(get=__get__beatmapEventDataBoxGroupListDict, put=__set__beatmapEventDataBoxGroupListDict))  _beatmapEventDataBoxGroupListDict;

constexpr void __set__beatmapEventDataBoxGroupListDict(System::Collections::Generic::Dictionary_2<int32_t,GlobalNamespace::BeatmapEventDataBoxGroupList> value) ;

constexpr System::Collections::Generic::Dictionary_2<int32_t,GlobalNamespace::BeatmapEventDataBoxGroupList> __get__beatmapEventDataBoxGroupListDict() const;

 GlobalNamespace::BeatmapData __declspec(property(get=__get__beatmapData, put=__set__beatmapData))  _beatmapData;

constexpr void __set__beatmapData(GlobalNamespace::BeatmapData value) ;

constexpr GlobalNamespace::BeatmapData __get__beatmapData() const;

 GlobalNamespace::IBeatToTimeConvertor __declspec(property(get=__get__beatToTimeConvertor, put=__set__beatToTimeConvertor))  _beatToTimeConvertor;

constexpr void __set__beatToTimeConvertor(GlobalNamespace::IBeatToTimeConvertor value) ;

constexpr GlobalNamespace::IBeatToTimeConvertor __get__beatToTimeConvertor() const;

 bool __declspec(property(get=__get__updateBeatmapDataOnInsert, put=__set__updateBeatmapDataOnInsert))  _updateBeatmapDataOnInsert;

constexpr void __set__updateBeatmapDataOnInsert(bool value) ;

constexpr bool __get__updateBeatmapDataOnInsert() const;


// Methods

// Ctor Parameters [CppParam { name: "beatmapData", ty: "GlobalNamespace::BeatmapData", modifiers: "", def_value: None }, CppParam { name: "beatToTimeConvertor", ty: "GlobalNamespace::IBeatToTimeConvertor", modifiers: "", def_value: None }, CppParam { name: "updateBeatmapDataOnInsert", ty: "bool", modifiers: "", def_value: None }]
explicit BeatmapEventDataBoxGroupLists(GlobalNamespace::BeatmapData beatmapData, GlobalNamespace::IBeatToTimeConvertor beatToTimeConvertor, bool updateBeatmapDataOnInsert) ;

/// @brief Method .ctor addr 0x22144dc size 0xa8 virtual false final false
 void _ctor(GlobalNamespace::BeatmapData beatmapData, GlobalNamespace::IBeatToTimeConvertor beatToTimeConvertor, bool updateBeatmapDataOnInsert) ;

/// @brief Method Insert addr 0x2211ca4 size 0xfc virtual false final false
 System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapEventDataBoxGroup> Insert(int32_t groupId, GlobalNamespace::BeatmapEventDataBoxGroup beatmapEventDataBoxGroup) ;

/// @brief Method Remove addr 0x2214584 size 0xc0 virtual false final false
 void Remove(int32_t groupId, System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapEventDataBoxGroup> nodeToDelete) ;

/// @brief Method ToggleUpdateBeatmapDataOnInsert addr 0x2214644 size 0x15c virtual false final false
 void ToggleUpdateBeatmapDataOnInsert(bool enableUpdateOnInsert) ;

/// @brief Method SyncWithBeatmapData addr 0x22147a0 size 0x158 virtual false final false
 void SyncWithBeatmapData() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapEventDataBoxGroupLists);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapEventDataBoxGroupLists, "", "BeatmapEventDataBoxGroupLists");
