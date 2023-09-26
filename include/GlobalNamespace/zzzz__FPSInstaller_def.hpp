#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
namespace GlobalNamespace {
class FPSRecordController;
}
namespace GlobalNamespace {
class BoolSO;
}
namespace GlobalNamespace {
class GraphyController;
}
// Forward declare root types
namespace GlobalNamespace {
class FPSInstaller;
}
// Type: ::FPSInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11099))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5934))
// CS Name: FPSInstaller
class CORDL_TYPE FPSInstaller : public Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~FPSInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "FPSInstaller", modifiers: " const&", def_value: None }]
constexpr FPSInstaller(FPSInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FPSInstaller", modifiers: "&&", def_value: None }]
constexpr FPSInstaller(FPSInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FPSInstaller(void* ptr) noexcept : Zenject::MonoInstaller(ptr) {
}


  constexpr FPSInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FPSInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FPSInstaller& operator=(FPSInstaller&& o) noexcept = default;
  constexpr FPSInstaller& operator=(FPSInstaller const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BoolSO __declspec(property(get=__get__enableFPSCounter, put=__set__enableFPSCounter))  _enableFPSCounter;

constexpr void __set__enableFPSCounter(GlobalNamespace::BoolSO value) ;

constexpr GlobalNamespace::BoolSO __get__enableFPSCounter() const;

 GlobalNamespace::BoolSO __declspec(property(get=__get__enableFPSRecorder, put=__set__enableFPSRecorder))  _enableFPSRecorder;

constexpr void __set__enableFPSRecorder(GlobalNamespace::BoolSO value) ;

constexpr GlobalNamespace::BoolSO __get__enableFPSRecorder() const;

 GlobalNamespace::BoolSO __declspec(property(get=__get__enableMemoryTracker, put=__set__enableMemoryTracker))  _enableMemoryTracker;

constexpr void __set__enableMemoryTracker(GlobalNamespace::BoolSO value) ;

constexpr GlobalNamespace::BoolSO __get__enableMemoryTracker() const;

 GlobalNamespace::GraphyController __declspec(property(get=__get__fpsCounterCanvasPrefab, put=__set__fpsCounterCanvasPrefab))  _fpsCounterCanvasPrefab;

constexpr void __set__fpsCounterCanvasPrefab(GlobalNamespace::GraphyController value) ;

constexpr GlobalNamespace::GraphyController __get__fpsCounterCanvasPrefab() const;

 GlobalNamespace::FPSRecordController __declspec(property(get=__get__fpsRecordControllerPrefab, put=__set__fpsRecordControllerPrefab))  _fpsRecordControllerPrefab;

constexpr void __set__fpsRecordControllerPrefab(GlobalNamespace::FPSRecordController value) ;

constexpr GlobalNamespace::FPSRecordController __get__fpsRecordControllerPrefab() const;


// Methods

/// @brief Method InstallBindings addr 0x21ca9d4 size 0x1d8 virtual true final false
 void InstallBindings() ;

// Ctor Parameters []
explicit FPSInstaller() ;

/// @brief Method .ctor addr 0x21cabc0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FPSInstaller);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FPSInstaller, "", "FPSInstaller");
