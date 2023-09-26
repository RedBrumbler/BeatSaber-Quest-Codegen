#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
namespace GlobalNamespace {
class NoteSpawnInfoNetSerializable;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteDataFromNoteSpawnInfoNetSerializable;
}
// Type: ::NoteDataFromNoteSpawnInfoNetSerializable
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14960))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5243))
// CS Name: NoteDataFromNoteSpawnInfoNetSerializable
class CORDL_TYPE NoteDataFromNoteSpawnInfoNetSerializable : public GlobalNamespace::NoteData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~NoteDataFromNoteSpawnInfoNetSerializable() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteDataFromNoteSpawnInfoNetSerializable", modifiers: " const&", def_value: None }]
constexpr NoteDataFromNoteSpawnInfoNetSerializable(NoteDataFromNoteSpawnInfoNetSerializable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteDataFromNoteSpawnInfoNetSerializable", modifiers: "&&", def_value: None }]
constexpr NoteDataFromNoteSpawnInfoNetSerializable(NoteDataFromNoteSpawnInfoNetSerializable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoteDataFromNoteSpawnInfoNetSerializable(void* ptr) noexcept : GlobalNamespace::NoteData(ptr) {
}


  constexpr NoteDataFromNoteSpawnInfoNetSerializable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoteDataFromNoteSpawnInfoNetSerializable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoteDataFromNoteSpawnInfoNetSerializable& operator=(NoteDataFromNoteSpawnInfoNetSerializable&& o) noexcept = default;
  constexpr NoteDataFromNoteSpawnInfoNetSerializable& operator=(NoteDataFromNoteSpawnInfoNetSerializable const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "noteSpawnInfo", ty: "GlobalNamespace::NoteSpawnInfoNetSerializable", modifiers: "", def_value: None }]
explicit NoteDataFromNoteSpawnInfoNetSerializable(GlobalNamespace::NoteSpawnInfoNetSerializable noteSpawnInfo) ;

/// @brief Method .ctor addr 0x2115f34 size 0x50 virtual false final false
 void _ctor(GlobalNamespace::NoteSpawnInfoNetSerializable noteSpawnInfo) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::NoteDataFromNoteSpawnInfoNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteDataFromNoteSpawnInfoNetSerializable, "", "NoteDataFromNoteSpawnInfoNetSerializable");
