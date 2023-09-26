#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HMUI {
class TableCell;
}
namespace UnityEngine {
struct UnityEngine__RectTransform__Axis;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace HMUI {
class ScrollView;
}
namespace HMUI {
class SelectableCell;
}
namespace HMUI {
struct HMUI__SelectableCell__TransitionType;
}
namespace HMUI {
class ITableCellOwner;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class RectTransform;
}
namespace HMUI {
struct TableViewSelectionType;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace HMUI {
struct HMUI__TableView__ScrollPositionType;
}
namespace HMUI {
struct HMUI__TableView__TableType;
}
namespace HMUI {
class HMUI__TableView__CellsGroup;
}
namespace HMUI {
class HMUI__TableView__IDataSource;
}
namespace HMUI {
class TableView;
}
// Type: ::TableType
namespace HMUI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13735))
// CS Name: HMUI.TableView::TableType
struct CORDL_TYPE HMUI__TableView__TableType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HMUI__TableView__TableType(int32_t value__) noexcept;


                    constexpr HMUI__TableView__TableType(HMUI__TableView__TableType const&) = default;
                    constexpr HMUI__TableView__TableType(HMUI__TableView__TableType&&) = default;
                    constexpr HMUI__TableView__TableType& operator=(HMUI__TableView__TableType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HMUI__TableView__TableType& operator=(HMUI__TableView__TableType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HMUI__TableView__TableType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HMUI__TableView__TableType_Unwrapped : int32_t {
__Vertical = 0,
__Horizontal = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HMUI__TableView__TableType_Unwrapped () const noexcept {
return std::bit_cast<__HMUI__TableView__TableType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Vertical offset 0
static HMUI::HMUI__TableView__TableType const Vertical;

/// @brief Field Horizontal offset 0
static HMUI::HMUI__TableView__TableType const Horizontal;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::ScrollPositionType
namespace HMUI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13736))
// CS Name: HMUI.TableView::ScrollPositionType
struct CORDL_TYPE HMUI__TableView__ScrollPositionType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HMUI__TableView__ScrollPositionType(int32_t value__) noexcept;


                    constexpr HMUI__TableView__ScrollPositionType(HMUI__TableView__ScrollPositionType const&) = default;
                    constexpr HMUI__TableView__ScrollPositionType(HMUI__TableView__ScrollPositionType&&) = default;
                    constexpr HMUI__TableView__ScrollPositionType& operator=(HMUI__TableView__ScrollPositionType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HMUI__TableView__ScrollPositionType& operator=(HMUI__TableView__ScrollPositionType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HMUI__TableView__ScrollPositionType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HMUI__TableView__ScrollPositionType_Unwrapped : int32_t {
__Beginning = 0,
__Center = 1,
__End = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HMUI__TableView__ScrollPositionType_Unwrapped () const noexcept {
return std::bit_cast<__HMUI__TableView__ScrollPositionType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Beginning offset 0
static HMUI::HMUI__TableView__ScrollPositionType const Beginning;

/// @brief Field Center offset 0
static HMUI::HMUI__TableView__ScrollPositionType const Center;

/// @brief Field End offset 0
static HMUI::HMUI__TableView__ScrollPositionType const End;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::CellsGroup
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13737))
// CS Name: HMUI.TableView::CellsGroup
class CORDL_TYPE HMUI__TableView__CellsGroup : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~HMUI__TableView__CellsGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__TableView__CellsGroup", modifiers: " const&", def_value: None }]
constexpr HMUI__TableView__CellsGroup(HMUI__TableView__CellsGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__TableView__CellsGroup", modifiers: "&&", def_value: None }]
constexpr HMUI__TableView__CellsGroup(HMUI__TableView__CellsGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__TableView__CellsGroup(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__TableView__CellsGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__TableView__CellsGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__TableView__CellsGroup& operator=(HMUI__TableView__CellsGroup&& o) noexcept = default;
  constexpr HMUI__TableView__CellsGroup& operator=(HMUI__TableView__CellsGroup const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__reuseIdentifier, put=__set__reuseIdentifier))  _reuseIdentifier;

constexpr void __set__reuseIdentifier(::StringW value) ;

constexpr ::StringW __get__reuseIdentifier() const;

 System::Collections::Generic::List_1<HMUI::TableCell> __declspec(property(get=__get__cells, put=__set__cells))  _cells;

constexpr void __set__cells(System::Collections::Generic::List_1<HMUI::TableCell> value) ;

constexpr System::Collections::Generic::List_1<HMUI::TableCell> __get__cells() const;


// Properties

 ::StringW __declspec(property(get=get_reuseIdentifier))  reuseIdentifier;

 System::Collections::Generic::List_1<HMUI::TableCell> __declspec(property(get=get_cells))  cells;


// Methods

/// @brief Method get_reuseIdentifier addr 0x201078c size 0x8 virtual false final false
 ::StringW get_reuseIdentifier() ;

/// @brief Method get_cells addr 0x2010794 size 0x8 virtual false final false
 System::Collections::Generic::List_1<HMUI::TableCell> get_cells() ;

// Ctor Parameters []
explicit HMUI__TableView__CellsGroup() ;

/// @brief Method .ctor addr 0x201079c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::IDataSource
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13738))
// CS Name: HMUI.TableView::IDataSource
class CORDL_TYPE HMUI__TableView__IDataSource : public ::cordl_internals::InterfaceW {
public:
// Declarations
~HMUI__TableView__IDataSource() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__TableView__IDataSource(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method CellSize addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t CellSize() ;

/// @brief Method NumberOfCells addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t NumberOfCells() ;

/// @brief Method CellForIdx addr 0x0 size 0xffffffffffffffff virtual true final false
 HMUI::TableCell CellForIdx(HMUI::TableView tableView, int32_t idx) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: HMUI::TableView
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13739))
// CS Name: HMUI.TableView
class CORDL_TYPE TableView : public UnityEngine::MonoBehaviour {
public:
// Declarations
using IDataSource = HMUI::HMUI__TableView__IDataSource;

using CellsGroup = HMUI::HMUI__TableView__CellsGroup;

using ScrollPositionType = HMUI::HMUI__TableView__ScrollPositionType;

using TableType = HMUI::HMUI__TableView__TableType;

/// @brief Convert operator to HMUI::ITableCellOwner
constexpr operator  HMUI::ITableCellOwner() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~TableView() = default;

// Ctor Parameters [CppParam { name: "", ty: "TableView", modifiers: " const&", def_value: None }]
constexpr TableView(TableView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TableView", modifiers: "&&", def_value: None }]
constexpr TableView(TableView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TableView(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr TableView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TableView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TableView& operator=(TableView&& o) noexcept = default;
  constexpr TableView& operator=(TableView const& o) noexcept = default;
                


// Fields

 HMUI::ScrollView __declspec(property(get=__get__scrollView, put=__set__scrollView))  _scrollView;

constexpr void __set__scrollView(HMUI::ScrollView value) ;

constexpr HMUI::ScrollView __get__scrollView() const;

 bool __declspec(property(get=__get__scrollToTopOnEnable, put=__set__scrollToTopOnEnable))  _scrollToTopOnEnable;

constexpr void __set__scrollToTopOnEnable(bool value) ;

constexpr bool __get__scrollToTopOnEnable() const;

 bool __declspec(property(get=__get__alignToCenter, put=__set__alignToCenter))  _alignToCenter;

constexpr void __set__alignToCenter(bool value) ;

constexpr bool __get__alignToCenter() const;

 HMUI::HMUI__TableView__TableType __declspec(property(get=__get__tableType, put=__set__tableType))  _tableType;

constexpr void __set__tableType(HMUI::HMUI__TableView__TableType value) ;

constexpr HMUI::HMUI__TableView__TableType __get__tableType() const;

 HMUI::TableViewSelectionType __declspec(property(get=__get__selectionType, put=__set__selectionType))  _selectionType;

constexpr void __set__selectionType(HMUI::TableViewSelectionType value) ;

constexpr HMUI::TableViewSelectionType __get__selectionType() const;

 bool __declspec(property(get=__get__canSelectSelectedCell, put=__set__canSelectSelectedCell))  _canSelectSelectedCell;

constexpr void __set__canSelectSelectedCell(bool value) ;

constexpr bool __get__canSelectSelectedCell() const;

 ::ArrayW<HMUI::HMUI__TableView__CellsGroup> __declspec(property(get=__get__preallocatedCells, put=__set__preallocatedCells))  _preallocatedCells;

constexpr void __set__preallocatedCells(::ArrayW<HMUI::HMUI__TableView__CellsGroup> value) ;

constexpr ::ArrayW<HMUI::HMUI__TableView__CellsGroup> __get__preallocatedCells() const;

 System::Action_2<HMUI::TableView,int32_t> __declspec(property(get=__get_didSelectCellWithIdxEvent, put=__set_didSelectCellWithIdxEvent))  didSelectCellWithIdxEvent;

constexpr void __set_didSelectCellWithIdxEvent(System::Action_2<HMUI::TableView,int32_t> value) ;

constexpr System::Action_2<HMUI::TableView,int32_t> __get_didSelectCellWithIdxEvent() const;

 System::Action_1<HMUI::TableView> __declspec(property(get=__get_didReloadDataEvent, put=__set_didReloadDataEvent))  didReloadDataEvent;

constexpr void __set_didReloadDataEvent(System::Action_1<HMUI::TableView> value) ;

constexpr System::Action_1<HMUI::TableView> __get_didReloadDataEvent() const;

 System::Action_1<HMUI::TableView> __declspec(property(get=__get_didInsertCellsEvent, put=__set_didInsertCellsEvent))  didInsertCellsEvent;

constexpr void __set_didInsertCellsEvent(System::Action_1<HMUI::TableView> value) ;

constexpr System::Action_1<HMUI::TableView> __get_didInsertCellsEvent() const;

 System::Action_1<HMUI::TableView> __declspec(property(get=__get_didDeleteCellsEvent, put=__set_didDeleteCellsEvent))  didDeleteCellsEvent;

constexpr void __set_didDeleteCellsEvent(System::Action_1<HMUI::TableView> value) ;

constexpr System::Action_1<HMUI::TableView> __get_didDeleteCellsEvent() const;

 System::Action_1<HMUI::TableView> __declspec(property(get=__get_didChangeRectSizeEvent, put=__set_didChangeRectSizeEvent))  didChangeRectSizeEvent;

constexpr void __set_didChangeRectSizeEvent(System::Action_1<HMUI::TableView> value) ;

constexpr System::Action_1<HMUI::TableView> __get_didChangeRectSizeEvent() const;

 UnityEngine::RectTransform __declspec(property(get=__get__contentTransform, put=__set__contentTransform))  _contentTransform;

constexpr void __set__contentTransform(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get__contentTransform() const;

 UnityEngine::RectTransform __declspec(property(get=__get__viewportTransform, put=__set__viewportTransform))  _viewportTransform;

constexpr void __set__viewportTransform(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get__viewportTransform() const;

 HMUI::HMUI__TableView__IDataSource __declspec(property(get=__get__dataSource, put=__set__dataSource))  _dataSource;

constexpr void __set__dataSource(HMUI::HMUI__TableView__IDataSource value) ;

constexpr HMUI::HMUI__TableView__IDataSource __get__dataSource() const;

 int32_t __declspec(property(get=__get__numberOfCells, put=__set__numberOfCells))  _numberOfCells;

constexpr void __set__numberOfCells(int32_t value) ;

constexpr int32_t __get__numberOfCells() const;

 float_t __declspec(property(get=__get__cellSize, put=__set__cellSize))  _cellSize;

constexpr void __set__cellSize(float_t value) ;

constexpr float_t __get__cellSize() const;

 System::Collections::Generic::List_1<HMUI::TableCell> __declspec(property(get=__get__visibleCells, put=__set__visibleCells))  _visibleCells;

constexpr void __set__visibleCells(System::Collections::Generic::List_1<HMUI::TableCell> value) ;

constexpr System::Collections::Generic::List_1<HMUI::TableCell> __get__visibleCells() const;

 System::Collections::Generic::Dictionary_2<::StringW,System::Collections::Generic::List_1<HMUI::TableCell>> __declspec(property(get=__get__reusableCells, put=__set__reusableCells))  _reusableCells;

constexpr void __set__reusableCells(System::Collections::Generic::Dictionary_2<::StringW,System::Collections::Generic::List_1<HMUI::TableCell>> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,System::Collections::Generic::List_1<HMUI::TableCell>> __get__reusableCells() const;

 System::Collections::Generic::HashSet_1<int32_t> __declspec(property(get=__get__selectedCellIdxs, put=__set__selectedCellIdxs))  _selectedCellIdxs;

constexpr void __set__selectedCellIdxs(System::Collections::Generic::HashSet_1<int32_t> value) ;

constexpr System::Collections::Generic::HashSet_1<int32_t> __get__selectedCellIdxs() const;

 int32_t __declspec(property(get=__get__prevMinIdx, put=__set__prevMinIdx))  _prevMinIdx;

constexpr void __set__prevMinIdx(int32_t value) ;

constexpr int32_t __get__prevMinIdx() const;

 int32_t __declspec(property(get=__get__prevMaxIdx, put=__set__prevMaxIdx))  _prevMaxIdx;

constexpr void __set__prevMaxIdx(int32_t value) ;

constexpr int32_t __get__prevMaxIdx() const;

 bool __declspec(property(get=__get__isInitialized, put=__set__isInitialized))  _isInitialized;

constexpr void __set__isInitialized(bool value) ;

constexpr bool __get__isInitialized() const;

 bool __declspec(property(get=__get__refreshCellsOnEnable, put=__set__refreshCellsOnEnable))  _refreshCellsOnEnable;

constexpr void __set__refreshCellsOnEnable(bool value) ;

constexpr bool __get__refreshCellsOnEnable() const;


// Properties

 HMUI::TableViewSelectionType __declspec(property(get=get_selectionType, put=set_selectionType))  selectionType;

 bool __declspec(property(get=get_canSelectSelectedCell))  canSelectSelectedCell;

 HMUI::HMUI__TableView__IDataSource __declspec(property(get=get_dataSource))  dataSource;

 System::Collections::Generic::IEnumerable_1<HMUI::TableCell> __declspec(property(get=get_visibleCells))  visibleCells;

 UnityEngine::RectTransform __declspec(property(get=get_viewportTransform))  viewportTransform;

 UnityEngine::RectTransform __declspec(property(get=get_contentTransform))  contentTransform;

 int32_t __declspec(property(get=get_numberOfCells))  numberOfCells;

 float_t __declspec(property(get=get_cellSize))  cellSize;

 HMUI::HMUI__TableView__TableType __declspec(property(get=get_tableType))  tableType;

 HMUI::ScrollView __declspec(property(get=get_scrollView))  scrollView;


// Methods

/// @brief Method get_selectionType addr 0x200e7ac size 0x8 virtual true final true
 HMUI::TableViewSelectionType get_selectionType() ;

/// @brief Method set_selectionType addr 0x200e7b4 size 0x8 virtual false final false
 void set_selectionType(HMUI::TableViewSelectionType value) ;

/// @brief Method get_canSelectSelectedCell addr 0x200e7bc size 0x8 virtual true final true
 bool get_canSelectSelectedCell() ;

/// @brief Method add_didSelectCellWithIdxEvent addr 0x200e7c4 size 0xb0 virtual false final false
 void add_didSelectCellWithIdxEvent(System::Action_2<HMUI::TableView,int32_t> value) ;

/// @brief Method remove_didSelectCellWithIdxEvent addr 0x200e874 size 0xb0 virtual false final false
 void remove_didSelectCellWithIdxEvent(System::Action_2<HMUI::TableView,int32_t> value) ;

/// @brief Method add_didReloadDataEvent addr 0x200e924 size 0xb0 virtual false final false
 void add_didReloadDataEvent(System::Action_1<HMUI::TableView> value) ;

/// @brief Method remove_didReloadDataEvent addr 0x200e9d4 size 0xb0 virtual false final false
 void remove_didReloadDataEvent(System::Action_1<HMUI::TableView> value) ;

/// @brief Method add_didInsertCellsEvent addr 0x200ea84 size 0xb0 virtual false final false
 void add_didInsertCellsEvent(System::Action_1<HMUI::TableView> value) ;

/// @brief Method remove_didInsertCellsEvent addr 0x200eb34 size 0xb0 virtual false final false
 void remove_didInsertCellsEvent(System::Action_1<HMUI::TableView> value) ;

/// @brief Method add_didDeleteCellsEvent addr 0x200ebe4 size 0xb0 virtual false final false
 void add_didDeleteCellsEvent(System::Action_1<HMUI::TableView> value) ;

/// @brief Method remove_didDeleteCellsEvent addr 0x200ec94 size 0xb0 virtual false final false
 void remove_didDeleteCellsEvent(System::Action_1<HMUI::TableView> value) ;

/// @brief Method add_didChangeRectSizeEvent addr 0x200ed44 size 0xb0 virtual false final false
 void add_didChangeRectSizeEvent(System::Action_1<HMUI::TableView> value) ;

/// @brief Method remove_didChangeRectSizeEvent addr 0x200edf4 size 0xb0 virtual false final false
 void remove_didChangeRectSizeEvent(System::Action_1<HMUI::TableView> value) ;

/// @brief Method get_dataSource addr 0x200eea4 size 0x8 virtual false final false
 HMUI::HMUI__TableView__IDataSource get_dataSource() ;

/// @brief Method SetDataSource addr 0x200eeac size 0x18 virtual false final false
 void SetDataSource(HMUI::HMUI__TableView__IDataSource newDataSource, bool reloadData) ;

/// @brief Method get_visibleCells addr 0x200eec4 size 0x8 virtual false final false
 System::Collections::Generic::IEnumerable_1<HMUI::TableCell> get_visibleCells() ;

/// @brief Method get_viewportTransform addr 0x200eecc size 0x8 virtual false final false
 UnityEngine::RectTransform get_viewportTransform() ;

/// @brief Method get_contentTransform addr 0x200eed4 size 0x8 virtual false final false
 UnityEngine::RectTransform get_contentTransform() ;

/// @brief Method get_numberOfCells addr 0x200eedc size 0x8 virtual true final true
 int32_t get_numberOfCells() ;

/// @brief Method get_cellSize addr 0x200eee4 size 0x8 virtual false final false
 float_t get_cellSize() ;

/// @brief Method get_tableType addr 0x200eeec size 0x8 virtual false final false
 HMUI::HMUI__TableView__TableType get_tableType() ;

/// @brief Method get_scrollView addr 0x200eef4 size 0x8 virtual false final false
 HMUI::ScrollView get_scrollView() ;

/// @brief Method Awake addr 0x200eefc size 0x10 virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x200f25c size 0x88 virtual false final false
 void OnDestroy() ;

/// @brief Method OnEnable addr 0x200f2e4 size 0x54 virtual false final false
 void OnEnable() ;

/// @brief Method LazyInit addr 0x200ef0c size 0x350 virtual false final false
 void LazyInit() ;

/// @brief Method Hide addr 0x200fa84 size 0x24 virtual false final false
 void Hide() ;

/// @brief Method Show addr 0x200faa8 size 0x24 virtual false final false
 void Show() ;

/// @brief Method RefreshContentSize addr 0x200facc size 0x54 virtual false final false
 void RefreshContentSize() ;

/// @brief Method RefreshCellsContent addr 0x200fb20 size 0xc virtual false final false
 void RefreshCellsContent() ;

/// @brief Method GetVisibleCellsIdRange addr 0x200fb2c size 0x1dc virtual false final false
 System::Tuple_2<int32_t,int32_t> GetVisibleCellsIdRange() ;

/// @brief Method RefreshCells addr 0x200f338 size 0x5f8 virtual false final false
 void RefreshCells(bool forcedVisualsRefresh, bool forcedContentRefresh) ;

/// @brief Method LayoutCellForIdx addr 0x200fe70 size 0x18c virtual false final false
 void LayoutCellForIdx(HMUI::TableCell cell, int32_t idx, float_t offset) ;

/// @brief Method AddCellToReusableCells addr 0x200fd08 size 0x168 virtual false final false
 void AddCellToReusableCells(HMUI::TableCell cell) ;

/// @brief Method HandleScrollRectValueChanged addr 0x200fffc size 0xc virtual false final false
 void HandleScrollRectValueChanged(float_t f) ;

/// @brief Method HandleCellSelectionDidChange addr 0x2010008 size 0x2cc virtual false final false
 void HandleCellSelectionDidChange(HMUI::SelectableCell selectableCell, HMUI::HMUI__SelectableCell__TransitionType transitionType, ::bs_hook::Il2CppWrapperType changeOwner) ;

/// @brief Method DidSelectCellWithIdx addr 0x20102d4 size 0x28 virtual true final false
 void DidSelectCellWithIdx(int32_t idx) ;

/// @brief Method ReloadDataKeepingPosition addr 0x20102fc size 0x50 virtual false final false
 void ReloadDataKeepingPosition() ;

/// @brief Method ReloadData addr 0x200d5d8 size 0x334 virtual true final false
 void ReloadData() ;

/// @brief Method InsertCells addr 0x200dba0 size 0x3b0 virtual false final false
 void InsertCells(int32_t idx, int32_t count) ;

/// @brief Method DeleteCells addr 0x200dff8 size 0x36c virtual false final false
 void DeleteCells(int32_t idx, int32_t count) ;

/// @brief Method DequeueReusableCellForIdentifier addr 0x200c5ac size 0xec virtual false final false
 HMUI::TableCell DequeueReusableCellForIdentifier(::StringW identifier) ;

/// @brief Method SelectCellWithIdx addr 0x201034c size 0x1e4 virtual false final false
 void SelectCellWithIdx(int32_t idx, bool callbackTable) ;

/// @brief Method ClearSelection addr 0x2010530 size 0x1ac virtual false final false
 void ClearSelection() ;

/// @brief Method ClearHighlights addr 0x200f930 size 0x154 virtual false final false
 void ClearHighlights() ;

/// @brief Method ScrollToCellWithIdx addr 0x200e3a8 size 0xdc virtual false final false
 void ScrollToCellWithIdx(int32_t idx, HMUI::HMUI__TableView__ScrollPositionType scrollPositionType, bool animated) ;

/// @brief Method ChangeRectSize addr 0x20106dc size 0xb0 virtual false final false
 void ChangeRectSize(UnityEngine::UnityEngine__RectTransform__Axis axis, float_t size) ;

// Ctor Parameters []
explicit TableView() ;

/// @brief Method .ctor addr 0x200e488 size 0xd0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__TableView__ScrollPositionType, "HMUI", "TableView/ScrollPositionType");
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__TableView__TableType, "HMUI", "TableView/TableType");
NEED_NO_BOX(HMUI::HMUI__TableView__CellsGroup);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__TableView__CellsGroup, "HMUI", "TableView/CellsGroup");
NEED_NO_BOX(HMUI::HMUI__TableView__IDataSource);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__TableView__IDataSource, "HMUI", "TableView/IDataSource");
NEED_NO_BOX(HMUI::TableView);
DEFINE_IL2CPP_ARG_TYPE(HMUI::TableView, "HMUI", "TableView");
