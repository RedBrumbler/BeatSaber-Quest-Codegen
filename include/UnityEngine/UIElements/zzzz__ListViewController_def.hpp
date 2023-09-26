#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__CollectionViewController_def.hpp"
#include <cstdint>
namespace System {
class Action;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
class Array;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
namespace UnityEngine::UIElements {
class ListView;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ListViewController;
}
// Type: UnityEngine.UIElements::ListViewController
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7484))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7483))
// CS Name: UnityEngine.UIElements.ListViewController
class CORDL_TYPE ListViewController : public UnityEngine::UIElements::CollectionViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~ListViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "ListViewController", modifiers: " const&", def_value: None }]
constexpr ListViewController(ListViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ListViewController", modifiers: "&&", def_value: None }]
constexpr ListViewController(ListViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ListViewController(void* ptr) noexcept : UnityEngine::UIElements::CollectionViewController(ptr) {
}


  constexpr ListViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ListViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ListViewController& operator=(ListViewController&& o) noexcept = default;
  constexpr ListViewController& operator=(ListViewController const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_itemsSourceSizeChanged, put=__set_itemsSourceSizeChanged))  itemsSourceSizeChanged;

constexpr void __set_itemsSourceSizeChanged(System::Action value) ;

constexpr System::Action __get_itemsSourceSizeChanged() const;

 System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>> __declspec(property(get=__get_itemsAdded, put=__set_itemsAdded))  itemsAdded;

constexpr void __set_itemsAdded(System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>> value) ;

constexpr System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>> __get_itemsAdded() const;

 System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>> __declspec(property(get=__get_itemsRemoved, put=__set_itemsRemoved))  itemsRemoved;

constexpr void __set_itemsRemoved(System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>> value) ;

constexpr System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>> __get_itemsRemoved() const;


// Properties

 UnityEngine::UIElements::ListView __declspec(property(get=get_listView))  listView;


// Methods

/// @brief Method add_itemsSourceSizeChanged addr 0x2d4000c size 0x9c virtual false final false
 void add_itemsSourceSizeChanged(System::Action value) ;

/// @brief Method remove_itemsSourceSizeChanged addr 0x2d400a8 size 0x9c virtual false final false
 void remove_itemsSourceSizeChanged(System::Action value) ;

/// @brief Method add_itemsAdded addr 0x2d40144 size 0xb0 virtual false final false
 void add_itemsAdded(System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>> value) ;

/// @brief Method remove_itemsAdded addr 0x2d401f4 size 0xb0 virtual false final false
 void remove_itemsAdded(System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>> value) ;

/// @brief Method add_itemsRemoved addr 0x2d402a4 size 0xb0 virtual false final false
 void add_itemsRemoved(System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>> value) ;

/// @brief Method remove_itemsRemoved addr 0x2d40354 size 0xb0 virtual false final false
 void remove_itemsRemoved(System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>> value) ;

/// @brief Method get_listView addr 0x2d40404 size 0x7c virtual false final false
 UnityEngine::UIElements::ListView get_listView() ;

/// @brief Method InvokeMakeItem addr 0x2d40480 size 0x46c virtual true final false
 void InvokeMakeItem(UnityEngine::UIElements::ReusableCollectionItem reusableItem) ;

/// @brief Method InvokeBindItem addr 0x2d408fc size 0xec virtual true final false
 void InvokeBindItem(UnityEngine::UIElements::ReusableCollectionItem reusableItem, int32_t index) ;

/// @brief Method NeedsDragHandle addr 0x2d40bec size 0x3c virtual true final false
 bool NeedsDragHandle(int32_t index) ;

/// @brief Method AddItems addr 0x2d40c28 size 0x520 virtual true final false
 void AddItems(int32_t itemCount) ;

/// @brief Method Move addr 0x2d4139c size 0x9c virtual true final false
 void Move(int32_t index, int32_t newIndex) ;

/// @brief Method RemoveItem addr 0x2d4164c size 0x1b0 virtual true final false
 void RemoveItem(int32_t index) ;

/// @brief Method RemoveItems addr 0x2d417fc size 0x260 virtual true final false
 void RemoveItems(System::Collections::Generic::List_1<int32_t> indices) ;

/// @brief Method RaiseOnSizeChanged addr 0x2d41380 size 0x1c virtual false final false
 void RaiseOnSizeChanged() ;

/// @brief Method RaiseItemsAdded addr 0x2d41364 size 0x1c virtual false final false
 void RaiseItemsAdded(System::Collections::Generic::IEnumerable_1<int32_t> indices) ;

/// @brief Method RaiseItemsRemoved addr 0x2d41c10 size 0x1c virtual false final false
 void RaiseItemsRemoved(System::Collections::Generic::IEnumerable_1<int32_t> indices) ;

/// @brief Method AddToArray addr 0x2d41260 size 0xd8 virtual false final false
static System::Array AddToArray(System::Array source, int32_t itemCount) ;

/// @brief Method RemoveFromArray addr 0x2d41a5c size 0x1b4 virtual false final false
static System::Array RemoveFromArray(System::Array source, System::Collections::Generic::List_1<int32_t> indicesToRemove) ;

/// @brief Method Swap addr 0x2d41438 size 0x1f8 virtual false final false
 void Swap(int32_t lhs, int32_t rhs) ;

/// @brief Method EnsureItemSourceCanBeResized addr 0x2d41148 size 0x118 virtual false final false
 void EnsureItemSourceCanBeResized() ;

// Ctor Parameters []
explicit ListViewController() ;

/// @brief Method .ctor addr 0x2d41c2c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::ListViewController);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::ListViewController, "UnityEngine.UIElements", "ListViewController");
