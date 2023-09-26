#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace HMUI {
class TableCell;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace GlobalNamespace {
class NetworkPlayerTableCell;
}
namespace GlobalNamespace {
class NetworkPlayerOptionsTableCell;
}
namespace HMUI {
class HMUI__TableView__IDataSource;
}
namespace GlobalNamespace {
class LevelPackHeaderTableCell;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HMUI {
class TableView;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__NetworkPlayersTableView__CellInfo__CellType;
}
namespace GlobalNamespace {
class GlobalNamespace__NetworkPlayersTableView__CellInfo;
}
namespace GlobalNamespace {
class NetworkPlayersTableView;
}
// Type: ::CellType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5679))
// CS Name: NetworkPlayersTableView::CellInfo::CellType
struct CORDL_TYPE GlobalNamespace__NetworkPlayersTableView__CellInfo__CellType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__NetworkPlayersTableView__CellInfo__CellType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__NetworkPlayersTableView__CellInfo__CellType(GlobalNamespace__NetworkPlayersTableView__CellInfo__CellType const&) = default;
                    constexpr GlobalNamespace__NetworkPlayersTableView__CellInfo__CellType(GlobalNamespace__NetworkPlayersTableView__CellInfo__CellType&&) = default;
                    constexpr GlobalNamespace__NetworkPlayersTableView__CellInfo__CellType& operator=(GlobalNamespace__NetworkPlayersTableView__CellInfo__CellType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__NetworkPlayersTableView__CellInfo__CellType& operator=(GlobalNamespace__NetworkPlayersTableView__CellInfo__CellType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__NetworkPlayersTableView__CellInfo__CellType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__NetworkPlayersTableView__CellInfo__CellType_Unwrapped : int32_t {
__Header = 0,
__Player = 1,
__Options = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__NetworkPlayersTableView__CellInfo__CellType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__NetworkPlayersTableView__CellInfo__CellType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Header offset 0
static GlobalNamespace::GlobalNamespace__NetworkPlayersTableView__CellInfo__CellType const Header;

/// @brief Field Player offset 0
static GlobalNamespace::GlobalNamespace__NetworkPlayersTableView__CellInfo__CellType const Player;

/// @brief Field Options offset 0
static GlobalNamespace::GlobalNamespace__NetworkPlayersTableView__CellInfo__CellType const Options;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CellInfo
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5680))
// CS Name: NetworkPlayersTableView::CellInfo
class CORDL_TYPE GlobalNamespace__NetworkPlayersTableView__CellInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using CellType = GlobalNamespace::GlobalNamespace__NetworkPlayersTableView__CellInfo__CellType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__NetworkPlayersTableView__CellInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__NetworkPlayersTableView__CellInfo", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__NetworkPlayersTableView__CellInfo(GlobalNamespace__NetworkPlayersTableView__CellInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__NetworkPlayersTableView__CellInfo", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__NetworkPlayersTableView__CellInfo(GlobalNamespace__NetworkPlayersTableView__CellInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__NetworkPlayersTableView__CellInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__NetworkPlayersTableView__CellInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__NetworkPlayersTableView__CellInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__NetworkPlayersTableView__CellInfo& operator=(GlobalNamespace__NetworkPlayersTableView__CellInfo&& o) noexcept = default;
  constexpr GlobalNamespace__NetworkPlayersTableView__CellInfo& operator=(GlobalNamespace__NetworkPlayersTableView__CellInfo const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__NetworkPlayersTableView__CellInfo__CellType __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(GlobalNamespace::GlobalNamespace__NetworkPlayersTableView__CellInfo__CellType value) ;

constexpr GlobalNamespace::GlobalNamespace__NetworkPlayersTableView__CellInfo__CellType __get_type() const;

 ::StringW __declspec(property(get=__get_headerString, put=__set_headerString))  headerString;

constexpr void __set_headerString(::StringW value) ;

constexpr ::StringW __get_headerString() const;

 GlobalNamespace::INetworkPlayer __declspec(property(get=__get_player, put=__set_player))  player;

constexpr void __set_player(GlobalNamespace::INetworkPlayer value) ;

constexpr GlobalNamespace::INetworkPlayer __get_player() const;

 bool __declspec(property(get=__get_lastCellInParty, put=__set_lastCellInParty))  lastCellInParty;

constexpr void __set_lastCellInParty(bool value) ;

constexpr bool __get_lastCellInParty() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__NetworkPlayersTableView__CellInfo() ;

/// @brief Method .ctor addr 0x21885c0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NetworkPlayersTableView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5681))
// CS Name: NetworkPlayersTableView
class CORDL_TYPE NetworkPlayersTableView : public UnityEngine::MonoBehaviour {
public:
// Declarations
using CellInfo = GlobalNamespace::GlobalNamespace__NetworkPlayersTableView__CellInfo;

/// @brief Convert operator to HMUI::HMUI__TableView__IDataSource
constexpr operator  HMUI::HMUI__TableView__IDataSource() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~NetworkPlayersTableView() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetworkPlayersTableView", modifiers: " const&", def_value: None }]
constexpr NetworkPlayersTableView(NetworkPlayersTableView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetworkPlayersTableView", modifiers: "&&", def_value: None }]
constexpr NetworkPlayersTableView(NetworkPlayersTableView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetworkPlayersTableView(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr NetworkPlayersTableView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetworkPlayersTableView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetworkPlayersTableView& operator=(NetworkPlayersTableView&& o) noexcept = default;
  constexpr NetworkPlayersTableView& operator=(NetworkPlayersTableView const& o) noexcept = default;
                


// Fields

 HMUI::TableView __declspec(property(get=__get__tableView, put=__set__tableView))  _tableView;

constexpr void __set__tableView(HMUI::TableView value) ;

constexpr HMUI::TableView __get__tableView() const;

 GlobalNamespace::NetworkPlayerTableCell __declspec(property(get=__get__playerCellPrefab, put=__set__playerCellPrefab))  _playerCellPrefab;

constexpr void __set__playerCellPrefab(GlobalNamespace::NetworkPlayerTableCell value) ;

constexpr GlobalNamespace::NetworkPlayerTableCell __get__playerCellPrefab() const;

 GlobalNamespace::NetworkPlayerOptionsTableCell __declspec(property(get=__get__optionsCellPrefab, put=__set__optionsCellPrefab))  _optionsCellPrefab;

constexpr void __set__optionsCellPrefab(GlobalNamespace::NetworkPlayerOptionsTableCell value) ;

constexpr GlobalNamespace::NetworkPlayerOptionsTableCell __get__optionsCellPrefab() const;

 GlobalNamespace::LevelPackHeaderTableCell __declspec(property(get=__get__headerCellPrefab, put=__set__headerCellPrefab))  _headerCellPrefab;

constexpr void __set__headerCellPrefab(GlobalNamespace::LevelPackHeaderTableCell value) ;

constexpr GlobalNamespace::LevelPackHeaderTableCell __get__headerCellPrefab() const;

 float_t __declspec(property(get=__get__rowHeight, put=__set__rowHeight))  _rowHeight;

constexpr void __set__rowHeight(float_t value) ;

constexpr float_t __get__rowHeight() const;

/// @brief Field kPlayerCellIdentifier offset 0
static constexpr ::ConstString  kPlayerCellIdentifier{u"PlayerCell"};

/// @brief Field kHeaderCellIdentifier offset 0
static constexpr ::ConstString  kHeaderCellIdentifier{u"HeaderCell"};

/// @brief Field kOptionsCellIdentifier offset 0
static constexpr ::ConstString  kOptionsCellIdentifier{u"OptionsCell"};

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__NetworkPlayersTableView__CellInfo> __declspec(property(get=__get__cellInfo, put=__set__cellInfo))  _cellInfo;

constexpr void __set__cellInfo(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__NetworkPlayersTableView__CellInfo> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__NetworkPlayersTableView__CellInfo> __get__cellInfo() const;

 int32_t __declspec(property(get=__get__selectedCellIndex, put=__set__selectedCellIndex))  _selectedCellIndex;

constexpr void __set__selectedCellIndex(int32_t value) ;

constexpr int32_t __get__selectedCellIndex() const;

 ::StringW __declspec(property(get=__get__selectedPlayerID, put=__set__selectedPlayerID))  _selectedPlayerID;

constexpr void __set__selectedPlayerID(::StringW value) ;

constexpr ::StringW __get__selectedPlayerID() const;

 bool __declspec(property(get=__get__selectedCellHasOptions, put=__set__selectedCellHasOptions))  _selectedCellHasOptions;

constexpr void __set__selectedCellHasOptions(bool value) ;

constexpr bool __get__selectedCellHasOptions() const;


// Methods

/// @brief Method CellSize addr 0x218782c size 0x8 virtual true final true
 float_t CellSize() ;

/// @brief Method NumberOfCells addr 0x2187834 size 0x48 virtual true final true
 int32_t NumberOfCells() ;

/// @brief Method CellForIdx addr 0x218787c size 0x5c4 virtual true final true
 HMUI::TableCell CellForIdx(HMUI::TableView tableView, int32_t row) ;

/// @brief Method AddPlayers addr 0x2187f08 size 0x6b8 virtual false final false
 void AddPlayers(System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> players, ::StringW title) ;

/// @brief Method SetParties addr 0x2188918 size 0x13c virtual false final false
 void SetParties(System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> partyPlayers, System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> otherPlayers, ::StringW myPartyTitle, ::StringW otherPlayersTitle) ;

/// @brief Method HandleCellWasPressed addr 0x2188a54 size 0x4 virtual false final false
 void HandleCellWasPressed(HMUI::TableView tableView, HMUI::TableCell tableCell) ;

/// @brief Method HasVisibleOptions addr 0x21885c8 size 0x350 virtual false final false
static bool HasVisibleOptions(GlobalNamespace::INetworkPlayer player) ;

// Ctor Parameters []
explicit NetworkPlayersTableView() ;

/// @brief Method .ctor addr 0x2188a58 size 0x8c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__NetworkPlayersTableView__CellInfo__CellType, "", "NetworkPlayersTableView/CellInfo/CellType");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__NetworkPlayersTableView__CellInfo);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__NetworkPlayersTableView__CellInfo, "", "NetworkPlayersTableView/CellInfo");
NEED_NO_BOX(GlobalNamespace::NetworkPlayersTableView);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetworkPlayersTableView, "", "NetworkPlayersTableView");
