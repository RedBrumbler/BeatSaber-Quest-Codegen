#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Vector2;
}
namespace GlobalNamespace {
class SliderData;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData;
}
namespace System {
class AsyncCallback;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData;
}
namespace GlobalNamespace {
class NoteData;
}
namespace System {
class IAsyncResult;
}
// Forward declare root types
namespace GlobalNamespace {
class BurstSliderSpawner;
}
namespace GlobalNamespace {
class GlobalNamespace__BurstSliderSpawner__ProcessNoteDataDelegate;
}
// Type: ::ProcessNoteDataDelegate
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4846))
// CS Name: BurstSliderSpawner::ProcessNoteDataDelegate
class CORDL_TYPE GlobalNamespace__BurstSliderSpawner__ProcessNoteDataDelegate : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~GlobalNamespace__BurstSliderSpawner__ProcessNoteDataDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BurstSliderSpawner__ProcessNoteDataDelegate", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BurstSliderSpawner__ProcessNoteDataDelegate(GlobalNamespace__BurstSliderSpawner__ProcessNoteDataDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BurstSliderSpawner__ProcessNoteDataDelegate", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BurstSliderSpawner__ProcessNoteDataDelegate(GlobalNamespace__BurstSliderSpawner__ProcessNoteDataDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BurstSliderSpawner__ProcessNoteDataDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr GlobalNamespace__BurstSliderSpawner__ProcessNoteDataDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BurstSliderSpawner__ProcessNoteDataDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BurstSliderSpawner__ProcessNoteDataDelegate& operator=(GlobalNamespace__BurstSliderSpawner__ProcessNoteDataDelegate&& o) noexcept = default;
  constexpr GlobalNamespace__BurstSliderSpawner__ProcessNoteDataDelegate& operator=(GlobalNamespace__BurstSliderSpawner__ProcessNoteDataDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__BurstSliderSpawner__ProcessNoteDataDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2269e88 size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2271b0c size 0x18 virtual true final false
 void Invoke(GlobalNamespace::NoteData noteData, ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData> noteSpawnData, float_t rotation, bool forceIsFirstNote) ;

/// @brief Method BeginInvoke addr 0x2271b24 size 0xf8 virtual true final false
 System::IAsyncResult BeginInvoke(GlobalNamespace::NoteData noteData, ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData> noteSpawnData, float_t rotation, bool forceIsFirstNote, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2271c1c size 0xc virtual true final false
 void EndInvoke(ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData> noteSpawnData, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BurstSliderSpawner
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4847))
// CS Name: BurstSliderSpawner
class CORDL_TYPE BurstSliderSpawner : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ProcessNoteDataDelegate = GlobalNamespace::GlobalNamespace__BurstSliderSpawner__ProcessNoteDataDelegate;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BurstSliderSpawner() = default;

// Ctor Parameters [CppParam { name: "", ty: "BurstSliderSpawner", modifiers: " const&", def_value: None }]
constexpr BurstSliderSpawner(BurstSliderSpawner const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BurstSliderSpawner", modifiers: "&&", def_value: None }]
constexpr BurstSliderSpawner(BurstSliderSpawner&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BurstSliderSpawner(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BurstSliderSpawner& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BurstSliderSpawner& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BurstSliderSpawner& operator=(BurstSliderSpawner&& o) noexcept = default;
  constexpr BurstSliderSpawner& operator=(BurstSliderSpawner const& o) noexcept = default;
                


// Methods

/// @brief Method BezierCurve addr 0x2271a94 size 0x78 virtual false final false
static void BezierCurve(UnityEngine::Vector2 p0, UnityEngine::Vector2 p1, UnityEngine::Vector2 p2, float_t t, ByRef<UnityEngine::Vector2> pos, ByRef<UnityEngine::Vector2> tangent) ;

/// @brief Method ProcessSliderData addr 0x2269fb8 size 0x3f8 virtual false final false
static void ProcessSliderData(GlobalNamespace::SliderData sliderData, ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData> sliderSpawnData, float_t rotation, bool forceIsFirstNote, GlobalNamespace::GlobalNamespace__BurstSliderSpawner__ProcessNoteDataDelegate processNoteData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BurstSliderSpawner);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BurstSliderSpawner, "", "BurstSliderSpawner");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BurstSliderSpawner__ProcessNoteDataDelegate);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BurstSliderSpawner__ProcessNoteDataDelegate, "", "BurstSliderSpawner/ProcessNoteDataDelegate");
