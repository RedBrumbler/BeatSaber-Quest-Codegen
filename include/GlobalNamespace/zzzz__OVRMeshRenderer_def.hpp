#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class OVRSkeleton;
}
namespace UnityEngine {
class Material;
}
namespace GlobalNamespace {
class OVRMesh;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRMeshRenderer__IOVRMeshRendererDataProvider;
}
namespace GlobalNamespace {
class OVRMeshRenderer;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRMeshRenderer__MeshRendererData;
}
// Type: ::IOVRMeshRendererDataProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8943))
// CS Name: OVRMeshRenderer::IOVRMeshRendererDataProvider
class CORDL_TYPE GlobalNamespace__OVRMeshRenderer__IOVRMeshRendererDataProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~GlobalNamespace__OVRMeshRenderer__IOVRMeshRendererDataProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRMeshRenderer__IOVRMeshRendererDataProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetMeshRendererData addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::GlobalNamespace__OVRMeshRenderer__MeshRendererData GetMeshRendererData() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MeshRendererData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8944))
// CS Name: OVRMeshRenderer::MeshRendererData
struct CORDL_TYPE GlobalNamespace__OVRMeshRenderer__MeshRendererData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_IsDataValid_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_IsDataHighConfidence_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_ShouldUseSystemGestureMaterial_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRMeshRenderer__MeshRendererData(bool _IsDataValid_k__BackingField, bool _IsDataHighConfidence_k__BackingField, bool _ShouldUseSystemGestureMaterial_k__BackingField) noexcept;


                    constexpr GlobalNamespace__OVRMeshRenderer__MeshRendererData(GlobalNamespace__OVRMeshRenderer__MeshRendererData const&) = default;
                    constexpr GlobalNamespace__OVRMeshRenderer__MeshRendererData(GlobalNamespace__OVRMeshRenderer__MeshRendererData&&) = default;
                    constexpr GlobalNamespace__OVRMeshRenderer__MeshRendererData& operator=(GlobalNamespace__OVRMeshRenderer__MeshRendererData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRMeshRenderer__MeshRendererData& operator=(GlobalNamespace__OVRMeshRenderer__MeshRendererData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x3};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRMeshRenderer__MeshRendererData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get__IsDataValid_k__BackingField, put=__set__IsDataValid_k__BackingField))  _IsDataValid_k__BackingField;

constexpr void __set__IsDataValid_k__BackingField(bool value) ;

constexpr bool __get__IsDataValid_k__BackingField() const;

 bool __declspec(property(get=__get__IsDataHighConfidence_k__BackingField, put=__set__IsDataHighConfidence_k__BackingField))  _IsDataHighConfidence_k__BackingField;

constexpr void __set__IsDataHighConfidence_k__BackingField(bool value) ;

constexpr bool __get__IsDataHighConfidence_k__BackingField() const;

 bool __declspec(property(get=__get__ShouldUseSystemGestureMaterial_k__BackingField, put=__set__ShouldUseSystemGestureMaterial_k__BackingField))  _ShouldUseSystemGestureMaterial_k__BackingField;

constexpr void __set__ShouldUseSystemGestureMaterial_k__BackingField(bool value) ;

constexpr bool __get__ShouldUseSystemGestureMaterial_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_IsDataValid, put=set_IsDataValid))  IsDataValid;

 bool __declspec(property(get=get_IsDataHighConfidence, put=set_IsDataHighConfidence))  IsDataHighConfidence;

 bool __declspec(property(get=get_ShouldUseSystemGestureMaterial, put=set_ShouldUseSystemGestureMaterial))  ShouldUseSystemGestureMaterial;


// Methods

/// @brief Method get_IsDataValid addr 0x2657740 size 0x8 virtual false final false
 bool get_IsDataValid() ;

/// @brief Method set_IsDataValid addr 0x2657748 size 0xc virtual false final false
 void set_IsDataValid(bool value) ;

/// @brief Method get_IsDataHighConfidence addr 0x2657754 size 0x8 virtual false final false
 bool get_IsDataHighConfidence() ;

/// @brief Method set_IsDataHighConfidence addr 0x265775c size 0xc virtual false final false
 void set_IsDataHighConfidence(bool value) ;

/// @brief Method get_ShouldUseSystemGestureMaterial addr 0x2657768 size 0x8 virtual false final false
 bool get_ShouldUseSystemGestureMaterial() ;

/// @brief Method set_ShouldUseSystemGestureMaterial addr 0x2657770 size 0xc virtual false final false
 void set_ShouldUseSystemGestureMaterial(bool value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ConfidenceBehavior
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8945))
// CS Name: OVRMeshRenderer::ConfidenceBehavior
struct CORDL_TYPE GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior(GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior const&) = default;
                    constexpr GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior(GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior&&) = default;
                    constexpr GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior& operator=(GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior& operator=(GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior_Unwrapped : int32_t {
__None = 0,
__ToggleRenderer = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior const None;

/// @brief Field ToggleRenderer offset 0
static GlobalNamespace::GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior const ToggleRenderer;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SystemGestureBehavior
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8946))
// CS Name: OVRMeshRenderer::SystemGestureBehavior
struct CORDL_TYPE GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior(GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior const&) = default;
                    constexpr GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior(GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior&&) = default;
                    constexpr GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior& operator=(GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior& operator=(GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior_Unwrapped : int32_t {
__None = 0,
__SwapMaterial = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior const None;

/// @brief Field SwapMaterial offset 0
static GlobalNamespace::GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior const SwapMaterial;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRMeshRenderer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8947))
// CS Name: OVRMeshRenderer
class CORDL_TYPE OVRMeshRenderer : public UnityEngine::MonoBehaviour {
public:
// Declarations
using SystemGestureBehavior = GlobalNamespace::GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior;

using ConfidenceBehavior = GlobalNamespace::GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior;

using MeshRendererData = GlobalNamespace::GlobalNamespace__OVRMeshRenderer__MeshRendererData;

using IOVRMeshRendererDataProvider = GlobalNamespace::GlobalNamespace__OVRMeshRenderer__IOVRMeshRendererDataProvider;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~OVRMeshRenderer() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRMeshRenderer", modifiers: " const&", def_value: None }]
constexpr OVRMeshRenderer(OVRMeshRenderer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRMeshRenderer", modifiers: "&&", def_value: None }]
constexpr OVRMeshRenderer(OVRMeshRenderer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRMeshRenderer(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRMeshRenderer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRMeshRenderer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRMeshRenderer& operator=(OVRMeshRenderer&& o) noexcept = default;
  constexpr OVRMeshRenderer& operator=(OVRMeshRenderer const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__OVRMeshRenderer__IOVRMeshRendererDataProvider __declspec(property(get=__get__dataProvider, put=__set__dataProvider))  _dataProvider;

constexpr void __set__dataProvider(GlobalNamespace::GlobalNamespace__OVRMeshRenderer__IOVRMeshRendererDataProvider value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRMeshRenderer__IOVRMeshRendererDataProvider __get__dataProvider() const;

 GlobalNamespace::OVRMesh __declspec(property(get=__get__ovrMesh, put=__set__ovrMesh))  _ovrMesh;

constexpr void __set__ovrMesh(GlobalNamespace::OVRMesh value) ;

constexpr GlobalNamespace::OVRMesh __get__ovrMesh() const;

 GlobalNamespace::OVRSkeleton __declspec(property(get=__get__ovrSkeleton, put=__set__ovrSkeleton))  _ovrSkeleton;

constexpr void __set__ovrSkeleton(GlobalNamespace::OVRSkeleton value) ;

constexpr GlobalNamespace::OVRSkeleton __get__ovrSkeleton() const;

 GlobalNamespace::GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior __declspec(property(get=__get__confidenceBehavior, put=__set__confidenceBehavior))  _confidenceBehavior;

constexpr void __set__confidenceBehavior(GlobalNamespace::GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior __get__confidenceBehavior() const;

 GlobalNamespace::GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior __declspec(property(get=__get__systemGestureBehavior, put=__set__systemGestureBehavior))  _systemGestureBehavior;

constexpr void __set__systemGestureBehavior(GlobalNamespace::GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior __get__systemGestureBehavior() const;

 UnityEngine::Material __declspec(property(get=__get__systemGestureMaterial, put=__set__systemGestureMaterial))  _systemGestureMaterial;

constexpr void __set__systemGestureMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get__systemGestureMaterial() const;

 UnityEngine::Material __declspec(property(get=__get__originalMaterial, put=__set__originalMaterial))  _originalMaterial;

constexpr void __set__originalMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get__originalMaterial() const;

 UnityEngine::SkinnedMeshRenderer __declspec(property(get=__get__skinnedMeshRenderer, put=__set__skinnedMeshRenderer))  _skinnedMeshRenderer;

constexpr void __set__skinnedMeshRenderer(UnityEngine::SkinnedMeshRenderer value) ;

constexpr UnityEngine::SkinnedMeshRenderer __get__skinnedMeshRenderer() const;

 bool __declspec(property(get=__get__IsInitialized_k__BackingField, put=__set__IsInitialized_k__BackingField))  _IsInitialized_k__BackingField;

constexpr void __set__IsInitialized_k__BackingField(bool value) ;

constexpr bool __get__IsInitialized_k__BackingField() const;

 bool __declspec(property(get=__get__IsDataValid_k__BackingField, put=__set__IsDataValid_k__BackingField))  _IsDataValid_k__BackingField;

constexpr void __set__IsDataValid_k__BackingField(bool value) ;

constexpr bool __get__IsDataValid_k__BackingField() const;

 bool __declspec(property(get=__get__IsDataHighConfidence_k__BackingField, put=__set__IsDataHighConfidence_k__BackingField))  _IsDataHighConfidence_k__BackingField;

constexpr void __set__IsDataHighConfidence_k__BackingField(bool value) ;

constexpr bool __get__IsDataHighConfidence_k__BackingField() const;

 bool __declspec(property(get=__get__ShouldUseSystemGestureMaterial_k__BackingField, put=__set__ShouldUseSystemGestureMaterial_k__BackingField))  _ShouldUseSystemGestureMaterial_k__BackingField;

constexpr void __set__ShouldUseSystemGestureMaterial_k__BackingField(bool value) ;

constexpr bool __get__ShouldUseSystemGestureMaterial_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_IsInitialized, put=set_IsInitialized))  IsInitialized;

 bool __declspec(property(get=get_IsDataValid, put=set_IsDataValid))  IsDataValid;

 bool __declspec(property(get=get_IsDataHighConfidence, put=set_IsDataHighConfidence))  IsDataHighConfidence;

 bool __declspec(property(get=get_ShouldUseSystemGestureMaterial, put=set_ShouldUseSystemGestureMaterial))  ShouldUseSystemGestureMaterial;


// Methods

/// @brief Method get_IsInitialized addr 0x2656d10 size 0x8 virtual false final false
 bool get_IsInitialized() ;

/// @brief Method set_IsInitialized addr 0x2656d18 size 0xc virtual false final false
 void set_IsInitialized(bool value) ;

/// @brief Method get_IsDataValid addr 0x2656d24 size 0x8 virtual false final false
 bool get_IsDataValid() ;

/// @brief Method set_IsDataValid addr 0x2656d2c size 0xc virtual false final false
 void set_IsDataValid(bool value) ;

/// @brief Method get_IsDataHighConfidence addr 0x2656d38 size 0x8 virtual false final false
 bool get_IsDataHighConfidence() ;

/// @brief Method set_IsDataHighConfidence addr 0x2656d40 size 0xc virtual false final false
 void set_IsDataHighConfidence(bool value) ;

/// @brief Method get_ShouldUseSystemGestureMaterial addr 0x2656d4c size 0x8 virtual false final false
 bool get_ShouldUseSystemGestureMaterial() ;

/// @brief Method set_ShouldUseSystemGestureMaterial addr 0x2656d54 size 0xc virtual false final false
 void set_ShouldUseSystemGestureMaterial(bool value) ;

/// @brief Method Awake addr 0x2656d60 size 0x104 virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x2656e64 size 0x9c virtual false final false
 void Start() ;

/// @brief Method ShouldInitialize addr 0x2656f00 size 0xf0 virtual false final false
 bool ShouldInitialize() ;

/// @brief Method Initialize addr 0x2656ff0 size 0x4a0 virtual false final false
 void Initialize() ;

/// @brief Method Update addr 0x2657490 size 0x2a0 virtual false final false
 void Update() ;

// Ctor Parameters []
explicit OVRMeshRenderer() ;

/// @brief Method .ctor addr 0x2657730 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior, "", "OVRMeshRenderer/ConfidenceBehavior");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior, "", "OVRMeshRenderer/SystemGestureBehavior");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRMeshRenderer__IOVRMeshRendererDataProvider);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRMeshRenderer__IOVRMeshRendererDataProvider, "", "OVRMeshRenderer/IOVRMeshRendererDataProvider");
NEED_NO_BOX(GlobalNamespace::OVRMeshRenderer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRMeshRenderer, "", "OVRMeshRenderer");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRMeshRenderer__MeshRendererData, "", "OVRMeshRenderer/MeshRendererData");
