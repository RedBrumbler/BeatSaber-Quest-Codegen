#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace UnityEngine::EventSystems {
class IEndDragHandler;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::EventSystems {
class IDeselectHandler;
}
namespace UnityEngine::EventSystems {
class IDragHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class ISelectHandler;
}
namespace UnityEngine::EventSystems {
class IUpdateSelectedHandler;
}
namespace UnityEngine::EventSystems {
class IInitializePotentialDragHandler;
}
namespace UnityEngine::EventSystems {
class IBeginDragHandler;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace UnityEngine::EventSystems {
class IPointerUpHandler;
}
namespace UnityEngine::EventSystems {
class IPointerMoveHandler;
}
namespace UnityEngine::EventSystems {
class IScrollHandler;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine::EventSystems {
class ICancelHandler;
}
namespace UnityEngine::EventSystems {
class IMoveHandler;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class IPointerExitHandler;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine::EventSystems {
class IDropHandler;
}
namespace UnityEngine::EventSystems {
class ISubmitHandler;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::EventSystems {
class IPointerDownHandler;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
template<typename T1>
class UnityEngine__EventSystems__ExecuteEvents__EventFunction_1;
}
namespace UnityEngine::EventSystems {
class ExecuteEvents;
}
namespace UnityEngine::EventSystems {
template<::cordl_internals::il2cpp_reference_type T1>
class UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<T1>;
}
// Type: ::EventFunction`1
// Type: UnityEngine.EventSystems::ExecuteEvents
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13155))
// CS Name: UnityEngine.EventSystems.ExecuteEvents
class CORDL_TYPE ExecuteEvents : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename T1>
using EventFunction_1 = UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<T1>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ExecuteEvents() = default;

// Ctor Parameters [CppParam { name: "", ty: "ExecuteEvents", modifiers: " const&", def_value: None }]
constexpr ExecuteEvents(ExecuteEvents const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ExecuteEvents", modifiers: "&&", def_value: None }]
constexpr ExecuteEvents(ExecuteEvents&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ExecuteEvents(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ExecuteEvents& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ExecuteEvents& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ExecuteEvents& operator=(ExecuteEvents&& o) noexcept = default;
  constexpr ExecuteEvents& operator=(ExecuteEvents const& o) noexcept = default;
                


// Fields

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IPointerMoveHandler> __declspec(property(get=__get_s_PointerMoveHandler, put=__set_s_PointerMoveHandler))  s_PointerMoveHandler;

static void __set_s_PointerMoveHandler(UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IPointerMoveHandler> value) ;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IPointerMoveHandler> __get_s_PointerMoveHandler() ;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IPointerEnterHandler> __declspec(property(get=__get_s_PointerEnterHandler, put=__set_s_PointerEnterHandler))  s_PointerEnterHandler;

static void __set_s_PointerEnterHandler(UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IPointerEnterHandler> value) ;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IPointerEnterHandler> __get_s_PointerEnterHandler() ;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IPointerExitHandler> __declspec(property(get=__get_s_PointerExitHandler, put=__set_s_PointerExitHandler))  s_PointerExitHandler;

static void __set_s_PointerExitHandler(UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IPointerExitHandler> value) ;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IPointerExitHandler> __get_s_PointerExitHandler() ;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IPointerDownHandler> __declspec(property(get=__get_s_PointerDownHandler, put=__set_s_PointerDownHandler))  s_PointerDownHandler;

static void __set_s_PointerDownHandler(UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IPointerDownHandler> value) ;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IPointerDownHandler> __get_s_PointerDownHandler() ;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IPointerUpHandler> __declspec(property(get=__get_s_PointerUpHandler, put=__set_s_PointerUpHandler))  s_PointerUpHandler;

static void __set_s_PointerUpHandler(UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IPointerUpHandler> value) ;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IPointerUpHandler> __get_s_PointerUpHandler() ;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IPointerClickHandler> __declspec(property(get=__get_s_PointerClickHandler, put=__set_s_PointerClickHandler))  s_PointerClickHandler;

static void __set_s_PointerClickHandler(UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IPointerClickHandler> value) ;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IPointerClickHandler> __get_s_PointerClickHandler() ;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IInitializePotentialDragHandler> __declspec(property(get=__get_s_InitializePotentialDragHandler, put=__set_s_InitializePotentialDragHandler))  s_InitializePotentialDragHandler;

static void __set_s_InitializePotentialDragHandler(UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IInitializePotentialDragHandler> value) ;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IInitializePotentialDragHandler> __get_s_InitializePotentialDragHandler() ;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IBeginDragHandler> __declspec(property(get=__get_s_BeginDragHandler, put=__set_s_BeginDragHandler))  s_BeginDragHandler;

static void __set_s_BeginDragHandler(UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IBeginDragHandler> value) ;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IBeginDragHandler> __get_s_BeginDragHandler() ;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IDragHandler> __declspec(property(get=__get_s_DragHandler, put=__set_s_DragHandler))  s_DragHandler;

static void __set_s_DragHandler(UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IDragHandler> value) ;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IDragHandler> __get_s_DragHandler() ;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IEndDragHandler> __declspec(property(get=__get_s_EndDragHandler, put=__set_s_EndDragHandler))  s_EndDragHandler;

static void __set_s_EndDragHandler(UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IEndDragHandler> value) ;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IEndDragHandler> __get_s_EndDragHandler() ;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IDropHandler> __declspec(property(get=__get_s_DropHandler, put=__set_s_DropHandler))  s_DropHandler;

static void __set_s_DropHandler(UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IDropHandler> value) ;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IDropHandler> __get_s_DropHandler() ;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IScrollHandler> __declspec(property(get=__get_s_ScrollHandler, put=__set_s_ScrollHandler))  s_ScrollHandler;

static void __set_s_ScrollHandler(UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IScrollHandler> value) ;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IScrollHandler> __get_s_ScrollHandler() ;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IUpdateSelectedHandler> __declspec(property(get=__get_s_UpdateSelectedHandler, put=__set_s_UpdateSelectedHandler))  s_UpdateSelectedHandler;

static void __set_s_UpdateSelectedHandler(UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IUpdateSelectedHandler> value) ;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IUpdateSelectedHandler> __get_s_UpdateSelectedHandler() ;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::ISelectHandler> __declspec(property(get=__get_s_SelectHandler, put=__set_s_SelectHandler))  s_SelectHandler;

static void __set_s_SelectHandler(UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::ISelectHandler> value) ;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::ISelectHandler> __get_s_SelectHandler() ;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IDeselectHandler> __declspec(property(get=__get_s_DeselectHandler, put=__set_s_DeselectHandler))  s_DeselectHandler;

static void __set_s_DeselectHandler(UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IDeselectHandler> value) ;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IDeselectHandler> __get_s_DeselectHandler() ;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IMoveHandler> __declspec(property(get=__get_s_MoveHandler, put=__set_s_MoveHandler))  s_MoveHandler;

static void __set_s_MoveHandler(UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IMoveHandler> value) ;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IMoveHandler> __get_s_MoveHandler() ;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::ISubmitHandler> __declspec(property(get=__get_s_SubmitHandler, put=__set_s_SubmitHandler))  s_SubmitHandler;

static void __set_s_SubmitHandler(UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::ISubmitHandler> value) ;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::ISubmitHandler> __get_s_SubmitHandler() ;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::ICancelHandler> __declspec(property(get=__get_s_CancelHandler, put=__set_s_CancelHandler))  s_CancelHandler;

static void __set_s_CancelHandler(UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::ICancelHandler> value) ;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::ICancelHandler> __get_s_CancelHandler() ;

static System::Collections::Generic::List_1<UnityEngine::Transform> __declspec(property(get=__get_s_InternalTransformList, put=__set_s_InternalTransformList))  s_InternalTransformList;

static void __set_s_InternalTransformList(System::Collections::Generic::List_1<UnityEngine::Transform> value) ;

static System::Collections::Generic::List_1<UnityEngine::Transform> __get_s_InternalTransformList() ;


// Properties

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IPointerMoveHandler> __declspec(property(get=get_pointerMoveHandler))  pointerMoveHandler;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IPointerEnterHandler> __declspec(property(get=get_pointerEnterHandler))  pointerEnterHandler;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IPointerExitHandler> __declspec(property(get=get_pointerExitHandler))  pointerExitHandler;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IPointerDownHandler> __declspec(property(get=get_pointerDownHandler))  pointerDownHandler;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IPointerUpHandler> __declspec(property(get=get_pointerUpHandler))  pointerUpHandler;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IPointerClickHandler> __declspec(property(get=get_pointerClickHandler))  pointerClickHandler;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IInitializePotentialDragHandler> __declspec(property(get=get_initializePotentialDrag))  initializePotentialDrag;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IBeginDragHandler> __declspec(property(get=get_beginDragHandler))  beginDragHandler;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IDragHandler> __declspec(property(get=get_dragHandler))  dragHandler;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IEndDragHandler> __declspec(property(get=get_endDragHandler))  endDragHandler;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IDropHandler> __declspec(property(get=get_dropHandler))  dropHandler;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IScrollHandler> __declspec(property(get=get_scrollHandler))  scrollHandler;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IUpdateSelectedHandler> __declspec(property(get=get_updateSelectedHandler))  updateSelectedHandler;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::ISelectHandler> __declspec(property(get=get_selectHandler))  selectHandler;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IDeselectHandler> __declspec(property(get=get_deselectHandler))  deselectHandler;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IMoveHandler> __declspec(property(get=get_moveHandler))  moveHandler;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::ISubmitHandler> __declspec(property(get=get_submitHandler))  submitHandler;

static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::ICancelHandler> __declspec(property(get=get_cancelHandler))  cancelHandler;


// Methods

/// @brief Method ValidateEventData addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T ValidateEventData(UnityEngine::EventSystems::BaseEventData data) ;

/// @brief Method Execute addr 0x2c51994 size 0xf4 virtual false final false
static void Execute(UnityEngine::EventSystems::IPointerMoveHandler handler, UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method Execute addr 0x2c51a88 size 0xf4 virtual false final false
static void Execute(UnityEngine::EventSystems::IPointerEnterHandler handler, UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method Execute addr 0x2c51b7c size 0xf4 virtual false final false
static void Execute(UnityEngine::EventSystems::IPointerExitHandler handler, UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method Execute addr 0x2c51c70 size 0xf4 virtual false final false
static void Execute(UnityEngine::EventSystems::IPointerDownHandler handler, UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method Execute addr 0x2c51d64 size 0xf4 virtual false final false
static void Execute(UnityEngine::EventSystems::IPointerUpHandler handler, UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method Execute addr 0x2c51e58 size 0xf4 virtual false final false
static void Execute(UnityEngine::EventSystems::IPointerClickHandler handler, UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method Execute addr 0x2c51f4c size 0xf4 virtual false final false
static void Execute(UnityEngine::EventSystems::IInitializePotentialDragHandler handler, UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method Execute addr 0x2c52040 size 0xf4 virtual false final false
static void Execute(UnityEngine::EventSystems::IBeginDragHandler handler, UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method Execute addr 0x2c52134 size 0xf4 virtual false final false
static void Execute(UnityEngine::EventSystems::IDragHandler handler, UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method Execute addr 0x2c52228 size 0xf4 virtual false final false
static void Execute(UnityEngine::EventSystems::IEndDragHandler handler, UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method Execute addr 0x2c5231c size 0xf4 virtual false final false
static void Execute(UnityEngine::EventSystems::IDropHandler handler, UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method Execute addr 0x2c52410 size 0xf4 virtual false final false
static void Execute(UnityEngine::EventSystems::IScrollHandler handler, UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method Execute addr 0x2c52504 size 0xa4 virtual false final false
static void Execute(UnityEngine::EventSystems::IUpdateSelectedHandler handler, UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method Execute addr 0x2c525a8 size 0xa4 virtual false final false
static void Execute(UnityEngine::EventSystems::ISelectHandler handler, UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method Execute addr 0x2c5264c size 0xa4 virtual false final false
static void Execute(UnityEngine::EventSystems::IDeselectHandler handler, UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method Execute addr 0x2c526f0 size 0xf4 virtual false final false
static void Execute(UnityEngine::EventSystems::IMoveHandler handler, UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method Execute addr 0x2c527e4 size 0xa4 virtual false final false
static void Execute(UnityEngine::EventSystems::ISubmitHandler handler, UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method Execute addr 0x2c52888 size 0xa4 virtual false final false
static void Execute(UnityEngine::EventSystems::ICancelHandler handler, UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method get_pointerMoveHandler addr 0x2c5292c size 0x58 virtual false final false
static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IPointerMoveHandler> get_pointerMoveHandler() ;

/// @brief Method get_pointerEnterHandler addr 0x2c52984 size 0x58 virtual false final false
static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IPointerEnterHandler> get_pointerEnterHandler() ;

/// @brief Method get_pointerExitHandler addr 0x2c529dc size 0x58 virtual false final false
static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IPointerExitHandler> get_pointerExitHandler() ;

/// @brief Method get_pointerDownHandler addr 0x2c52a34 size 0x58 virtual false final false
static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IPointerDownHandler> get_pointerDownHandler() ;

/// @brief Method get_pointerUpHandler addr 0x2c52a8c size 0x58 virtual false final false
static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IPointerUpHandler> get_pointerUpHandler() ;

/// @brief Method get_pointerClickHandler addr 0x2c52ae4 size 0x58 virtual false final false
static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IPointerClickHandler> get_pointerClickHandler() ;

/// @brief Method get_initializePotentialDrag addr 0x2c52b3c size 0x58 virtual false final false
static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IInitializePotentialDragHandler> get_initializePotentialDrag() ;

/// @brief Method get_beginDragHandler addr 0x2c52b94 size 0x58 virtual false final false
static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IBeginDragHandler> get_beginDragHandler() ;

/// @brief Method get_dragHandler addr 0x2c52bec size 0x58 virtual false final false
static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IDragHandler> get_dragHandler() ;

/// @brief Method get_endDragHandler addr 0x2c52c44 size 0x58 virtual false final false
static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IEndDragHandler> get_endDragHandler() ;

/// @brief Method get_dropHandler addr 0x2c52c9c size 0x58 virtual false final false
static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IDropHandler> get_dropHandler() ;

/// @brief Method get_scrollHandler addr 0x2c52cf4 size 0x58 virtual false final false
static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IScrollHandler> get_scrollHandler() ;

/// @brief Method get_updateSelectedHandler addr 0x2c52d4c size 0x58 virtual false final false
static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IUpdateSelectedHandler> get_updateSelectedHandler() ;

/// @brief Method get_selectHandler addr 0x2c52da4 size 0x58 virtual false final false
static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::ISelectHandler> get_selectHandler() ;

/// @brief Method get_deselectHandler addr 0x2c52dfc size 0x58 virtual false final false
static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IDeselectHandler> get_deselectHandler() ;

/// @brief Method get_moveHandler addr 0x2c52e54 size 0x58 virtual false final false
static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::IMoveHandler> get_moveHandler() ;

/// @brief Method get_submitHandler addr 0x2c52eac size 0x58 virtual false final false
static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::ISubmitHandler> get_submitHandler() ;

/// @brief Method get_cancelHandler addr 0x2c52f04 size 0x58 virtual false final false
static UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<UnityEngine::EventSystems::ICancelHandler> get_cancelHandler() ;

/// @brief Method GetEventChain addr 0x2c52f5c size 0x194 virtual false final false
static void GetEventChain(UnityEngine::GameObject root, System::Collections::Generic::IList_1<UnityEngine::Transform> eventChain) ;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool Execute(UnityEngine::GameObject target, UnityEngine::EventSystems::BaseEventData eventData, UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<T> functor) ;

/// @brief Method ExecuteHierarchy addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static UnityEngine::GameObject ExecuteHierarchy(UnityEngine::GameObject root, UnityEngine::EventSystems::BaseEventData eventData, UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<T> callbackFunction) ;

/// @brief Method ShouldSendToComponent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool ShouldSendToComponent(UnityEngine::Component component) ;

/// @brief Method GetEventList addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void GetEventList(UnityEngine::GameObject go, System::Collections::Generic::IList_1<UnityEngine::EventSystems::IEventSystemHandler> results) ;

/// @brief Method CanHandleEvent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool CanHandleEvent(UnityEngine::GameObject go) ;

/// @brief Method GetEventHandler addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static UnityEngine::GameObject GetEventHandler(UnityEngine::GameObject root) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
// Type: ::EventFunction`1
namespace UnityEngine::EventSystems {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13154)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13154), inst: 2 })
// CS Name: UnityEngine.EventSystems.ExecuteEvents::EventFunction`1
class CORDL_TYPE UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<T1> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__EventSystems__ExecuteEvents__EventFunction_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__EventSystems__ExecuteEvents__EventFunction_1", modifiers: " const&", def_value: None }]
constexpr UnityEngine__EventSystems__ExecuteEvents__EventFunction_1(UnityEngine__EventSystems__ExecuteEvents__EventFunction_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__EventSystems__ExecuteEvents__EventFunction_1", modifiers: "&&", def_value: None }]
constexpr UnityEngine__EventSystems__ExecuteEvents__EventFunction_1(UnityEngine__EventSystems__ExecuteEvents__EventFunction_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__EventSystems__ExecuteEvents__EventFunction_1(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__EventSystems__ExecuteEvents__EventFunction_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__EventSystems__ExecuteEvents__EventFunction_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__EventSystems__ExecuteEvents__EventFunction_1& operator=(UnityEngine__EventSystems__ExecuteEvents__EventFunction_1&& o) noexcept = default;
  constexpr UnityEngine__EventSystems__ExecuteEvents__EventFunction_1& operator=(UnityEngine__EventSystems__ExecuteEvents__EventFunction_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UnityEngine__EventSystems__ExecuteEvents__EventFunction_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 handler, UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(T1 handler, UnityEngine::EventSystems::BaseEventData eventData, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::EventSystems::UnityEngine__EventSystems__ExecuteEvents__EventFunction_1, "UnityEngine.EventSystems", "ExecuteEvents/EventFunction`1");
NEED_NO_BOX(UnityEngine::EventSystems::ExecuteEvents);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::ExecuteEvents, "UnityEngine.EventSystems", "ExecuteEvents");
