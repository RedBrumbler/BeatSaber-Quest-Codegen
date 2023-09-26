#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Menu::ViewControllers {
class EditAvatarHistorySnapshot;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
struct GlobalNamespace__EditAvatarViewController__AvatarEditPart;
}
namespace GlobalNamespace {
class AvatarData;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarEditHistory;
}
// Type: ::AvatarEditHistory
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5711))
// CS Name: AvatarEditHistory
class CORDL_TYPE AvatarEditHistory : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~AvatarEditHistory() = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarEditHistory", modifiers: " const&", def_value: None }]
constexpr AvatarEditHistory(AvatarEditHistory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarEditHistory", modifiers: "&&", def_value: None }]
constexpr AvatarEditHistory(AvatarEditHistory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AvatarEditHistory(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AvatarEditHistory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AvatarEditHistory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AvatarEditHistory& operator=(AvatarEditHistory&& o) noexcept = default;
  constexpr AvatarEditHistory& operator=(AvatarEditHistory const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_disableNextSnapshotOverride, put=__set_disableNextSnapshotOverride))  disableNextSnapshotOverride;

constexpr void __set_disableNextSnapshotOverride(bool value) ;

constexpr bool __get_disableNextSnapshotOverride() const;

 System::Collections::Generic::List_1<Menu::ViewControllers::EditAvatarHistorySnapshot> __declspec(property(get=__get__snapShots, put=__set__snapShots))  _snapShots;

constexpr void __set__snapShots(System::Collections::Generic::List_1<Menu::ViewControllers::EditAvatarHistorySnapshot> value) ;

constexpr System::Collections::Generic::List_1<Menu::ViewControllers::EditAvatarHistorySnapshot> __get__snapShots() const;

 int32_t __declspec(property(get=__get__currentDataId, put=__set__currentDataId))  _currentDataId;

constexpr void __set__currentDataId(int32_t value) ;

constexpr int32_t __get__currentDataId() const;


// Properties

 bool __declspec(property(get=get_undoAvailable))  undoAvailable;

 bool __declspec(property(get=get_redoAvailable))  redoAvailable;

 Menu::ViewControllers::EditAvatarHistorySnapshot __declspec(property(get=get_currentSnapShot))  currentSnapShot;

 GlobalNamespace::GlobalNamespace__EditAvatarViewController__AvatarEditPart __declspec(property(get=get_lastEditedPart))  lastEditedPart;


// Methods

/// @brief Method get_undoAvailable addr 0x218c194 size 0x10 virtual false final false
 bool get_undoAvailable() ;

/// @brief Method get_redoAvailable addr 0x218c1a4 size 0x58 virtual false final false
 bool get_redoAvailable() ;

/// @brief Method get_currentSnapShot addr 0x218c1fc size 0x54 virtual false final false
 Menu::ViewControllers::EditAvatarHistorySnapshot get_currentSnapShot() ;

/// @brief Method get_lastEditedPart addr 0x218c250 size 0x1c virtual false final false
 GlobalNamespace::GlobalNamespace__EditAvatarViewController__AvatarEditPart get_lastEditedPart() ;

/// @brief Method Clear addr 0x218c26c size 0x6c virtual false final false
 void Clear() ;

/// @brief Method Undo addr 0x218c2d8 size 0x1c virtual false final false
 void Undo() ;

/// @brief Method Redo addr 0x218c2f4 size 0x68 virtual false final false
 void Redo() ;

/// @brief Method UpdateEditHistory addr 0x218c35c size 0x1c4 virtual false final false
 void UpdateEditHistory(GlobalNamespace::AvatarData avatarData, GlobalNamespace::GlobalNamespace__EditAvatarViewController__AvatarEditPart avatarEditPart) ;

// Ctor Parameters []
explicit AvatarEditHistory() ;

/// @brief Method .ctor addr 0x218c520 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::AvatarEditHistory);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarEditHistory, "", "AvatarEditHistory");
