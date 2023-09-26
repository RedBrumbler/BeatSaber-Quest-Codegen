#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class Material;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class GameObject;
}
namespace TMPro {
class TMP_FontAsset;
}
namespace UnityEngine::UI {
class MaskableGraphic;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace TMPro {
class TMP_MaterialManager;
}
namespace TMPro {
class TMPro__TMP_MaterialManager__FallbackMaterial;
}
namespace TMPro {
class TMPro__TMP_MaterialManager__MaskingMaterial;
}
namespace TMPro {
class TMPro__TMP_MaterialManager____c__DisplayClass11_0;
}
namespace TMPro {
class TMPro__TMP_MaterialManager____c__DisplayClass12_0;
}
namespace TMPro {
class TMPro__TMP_MaterialManager____c__DisplayClass13_0;
}
namespace TMPro {
class TMPro__TMP_MaterialManager____c__DisplayClass9_0;
}
// Type: ::FallbackMaterial
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12358))
// CS Name: TMPro.TMP_MaterialManager::FallbackMaterial
class CORDL_TYPE TMPro__TMP_MaterialManager__FallbackMaterial : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~TMPro__TMP_MaterialManager__FallbackMaterial() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_MaterialManager__FallbackMaterial", modifiers: " const&", def_value: None }]
constexpr TMPro__TMP_MaterialManager__FallbackMaterial(TMPro__TMP_MaterialManager__FallbackMaterial const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_MaterialManager__FallbackMaterial", modifiers: "&&", def_value: None }]
constexpr TMPro__TMP_MaterialManager__FallbackMaterial(TMPro__TMP_MaterialManager__FallbackMaterial&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMPro__TMP_MaterialManager__FallbackMaterial(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMPro__TMP_MaterialManager__FallbackMaterial& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMPro__TMP_MaterialManager__FallbackMaterial& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMPro__TMP_MaterialManager__FallbackMaterial& operator=(TMPro__TMP_MaterialManager__FallbackMaterial&& o) noexcept = default;
  constexpr TMPro__TMP_MaterialManager__FallbackMaterial& operator=(TMPro__TMP_MaterialManager__FallbackMaterial const& o) noexcept = default;
                


// Fields

 int64_t __declspec(property(get=__get_fallbackID, put=__set_fallbackID))  fallbackID;

constexpr void __set_fallbackID(int64_t value) ;

constexpr int64_t __get_fallbackID() const;

 UnityEngine::Material __declspec(property(get=__get_sourceMaterial, put=__set_sourceMaterial))  sourceMaterial;

constexpr void __set_sourceMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_sourceMaterial() const;

 int32_t __declspec(property(get=__get_sourceMaterialCRC, put=__set_sourceMaterialCRC))  sourceMaterialCRC;

constexpr void __set_sourceMaterialCRC(int32_t value) ;

constexpr int32_t __get_sourceMaterialCRC() const;

 UnityEngine::Material __declspec(property(get=__get_fallbackMaterial, put=__set_fallbackMaterial))  fallbackMaterial;

constexpr void __set_fallbackMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_fallbackMaterial() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;


// Methods

// Ctor Parameters []
explicit TMPro__TMP_MaterialManager__FallbackMaterial() ;

/// @brief Method .ctor addr 0x2ad6c80 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
// Type: ::MaskingMaterial
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12359))
// CS Name: TMPro.TMP_MaterialManager::MaskingMaterial
class CORDL_TYPE TMPro__TMP_MaterialManager__MaskingMaterial : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~TMPro__TMP_MaterialManager__MaskingMaterial() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_MaterialManager__MaskingMaterial", modifiers: " const&", def_value: None }]
constexpr TMPro__TMP_MaterialManager__MaskingMaterial(TMPro__TMP_MaterialManager__MaskingMaterial const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_MaterialManager__MaskingMaterial", modifiers: "&&", def_value: None }]
constexpr TMPro__TMP_MaterialManager__MaskingMaterial(TMPro__TMP_MaterialManager__MaskingMaterial&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMPro__TMP_MaterialManager__MaskingMaterial(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMPro__TMP_MaterialManager__MaskingMaterial& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMPro__TMP_MaterialManager__MaskingMaterial& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMPro__TMP_MaterialManager__MaskingMaterial& operator=(TMPro__TMP_MaterialManager__MaskingMaterial&& o) noexcept = default;
  constexpr TMPro__TMP_MaterialManager__MaskingMaterial& operator=(TMPro__TMP_MaterialManager__MaskingMaterial const& o) noexcept = default;
                


// Fields

 UnityEngine::Material __declspec(property(get=__get_baseMaterial, put=__set_baseMaterial))  baseMaterial;

constexpr void __set_baseMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_baseMaterial() const;

 UnityEngine::Material __declspec(property(get=__get_stencilMaterial, put=__set_stencilMaterial))  stencilMaterial;

constexpr void __set_stencilMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_stencilMaterial() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 int32_t __declspec(property(get=__get_stencilID, put=__set_stencilID))  stencilID;

constexpr void __set_stencilID(int32_t value) ;

constexpr int32_t __get_stencilID() const;


// Methods

// Ctor Parameters []
explicit TMPro__TMP_MaterialManager__MaskingMaterial() ;

/// @brief Method .ctor addr 0x2ad51dc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
// Type: ::<>c__DisplayClass9_0
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12360))
// CS Name: TMPro.TMP_MaterialManager::<>c__DisplayClass9_0
class CORDL_TYPE TMPro__TMP_MaterialManager____c__DisplayClass9_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TMPro__TMP_MaterialManager____c__DisplayClass9_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_MaterialManager____c__DisplayClass9_0", modifiers: " const&", def_value: None }]
constexpr TMPro__TMP_MaterialManager____c__DisplayClass9_0(TMPro__TMP_MaterialManager____c__DisplayClass9_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_MaterialManager____c__DisplayClass9_0", modifiers: "&&", def_value: None }]
constexpr TMPro__TMP_MaterialManager____c__DisplayClass9_0(TMPro__TMP_MaterialManager____c__DisplayClass9_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMPro__TMP_MaterialManager____c__DisplayClass9_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMPro__TMP_MaterialManager____c__DisplayClass9_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMPro__TMP_MaterialManager____c__DisplayClass9_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMPro__TMP_MaterialManager____c__DisplayClass9_0& operator=(TMPro__TMP_MaterialManager____c__DisplayClass9_0&& o) noexcept = default;
  constexpr TMPro__TMP_MaterialManager____c__DisplayClass9_0& operator=(TMPro__TMP_MaterialManager____c__DisplayClass9_0 const& o) noexcept = default;
                


// Fields

 UnityEngine::Material __declspec(property(get=__get_stencilMaterial, put=__set_stencilMaterial))  stencilMaterial;

constexpr void __set_stencilMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_stencilMaterial() const;


// Methods

// Ctor Parameters []
explicit TMPro__TMP_MaterialManager____c__DisplayClass9_0() ;

/// @brief Method .ctor addr 0x2ad5544 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetBaseMaterial>b__0 addr 0x2ad75b4 size 0x70 virtual false final false
 bool _GetBaseMaterial_b__0(TMPro::TMPro__TMP_MaterialManager__MaskingMaterial item) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
// Type: ::<>c__DisplayClass11_0
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12361))
// CS Name: TMPro.TMP_MaterialManager::<>c__DisplayClass11_0
class CORDL_TYPE TMPro__TMP_MaterialManager____c__DisplayClass11_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TMPro__TMP_MaterialManager____c__DisplayClass11_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_MaterialManager____c__DisplayClass11_0", modifiers: " const&", def_value: None }]
constexpr TMPro__TMP_MaterialManager____c__DisplayClass11_0(TMPro__TMP_MaterialManager____c__DisplayClass11_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_MaterialManager____c__DisplayClass11_0", modifiers: "&&", def_value: None }]
constexpr TMPro__TMP_MaterialManager____c__DisplayClass11_0(TMPro__TMP_MaterialManager____c__DisplayClass11_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMPro__TMP_MaterialManager____c__DisplayClass11_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMPro__TMP_MaterialManager____c__DisplayClass11_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMPro__TMP_MaterialManager____c__DisplayClass11_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMPro__TMP_MaterialManager____c__DisplayClass11_0& operator=(TMPro__TMP_MaterialManager____c__DisplayClass11_0&& o) noexcept = default;
  constexpr TMPro__TMP_MaterialManager____c__DisplayClass11_0& operator=(TMPro__TMP_MaterialManager____c__DisplayClass11_0 const& o) noexcept = default;
                


// Fields

 UnityEngine::Material __declspec(property(get=__get_stencilMaterial, put=__set_stencilMaterial))  stencilMaterial;

constexpr void __set_stencilMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_stencilMaterial() const;


// Methods

// Ctor Parameters []
explicit TMPro__TMP_MaterialManager____c__DisplayClass11_0() ;

/// @brief Method .ctor addr 0x2ad587c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <AddMaskingMaterial>b__0 addr 0x2ad7624 size 0x70 virtual false final false
 bool _AddMaskingMaterial_b__0(TMPro::TMPro__TMP_MaterialManager__MaskingMaterial item) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
// Type: ::<>c__DisplayClass12_0
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12362))
// CS Name: TMPro.TMP_MaterialManager::<>c__DisplayClass12_0
class CORDL_TYPE TMPro__TMP_MaterialManager____c__DisplayClass12_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TMPro__TMP_MaterialManager____c__DisplayClass12_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_MaterialManager____c__DisplayClass12_0", modifiers: " const&", def_value: None }]
constexpr TMPro__TMP_MaterialManager____c__DisplayClass12_0(TMPro__TMP_MaterialManager____c__DisplayClass12_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_MaterialManager____c__DisplayClass12_0", modifiers: "&&", def_value: None }]
constexpr TMPro__TMP_MaterialManager____c__DisplayClass12_0(TMPro__TMP_MaterialManager____c__DisplayClass12_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMPro__TMP_MaterialManager____c__DisplayClass12_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMPro__TMP_MaterialManager____c__DisplayClass12_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMPro__TMP_MaterialManager____c__DisplayClass12_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMPro__TMP_MaterialManager____c__DisplayClass12_0& operator=(TMPro__TMP_MaterialManager____c__DisplayClass12_0&& o) noexcept = default;
  constexpr TMPro__TMP_MaterialManager____c__DisplayClass12_0& operator=(TMPro__TMP_MaterialManager____c__DisplayClass12_0 const& o) noexcept = default;
                


// Fields

 UnityEngine::Material __declspec(property(get=__get_stencilMaterial, put=__set_stencilMaterial))  stencilMaterial;

constexpr void __set_stencilMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_stencilMaterial() const;


// Methods

// Ctor Parameters []
explicit TMPro__TMP_MaterialManager____c__DisplayClass12_0() ;

/// @brief Method .ctor addr 0x2ad59e4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <RemoveStencilMaterial>b__0 addr 0x2ad7694 size 0x70 virtual false final false
 bool _RemoveStencilMaterial_b__0(TMPro::TMPro__TMP_MaterialManager__MaskingMaterial item) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
// Type: ::<>c__DisplayClass13_0
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12363))
// CS Name: TMPro.TMP_MaterialManager::<>c__DisplayClass13_0
class CORDL_TYPE TMPro__TMP_MaterialManager____c__DisplayClass13_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TMPro__TMP_MaterialManager____c__DisplayClass13_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_MaterialManager____c__DisplayClass13_0", modifiers: " const&", def_value: None }]
constexpr TMPro__TMP_MaterialManager____c__DisplayClass13_0(TMPro__TMP_MaterialManager____c__DisplayClass13_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_MaterialManager____c__DisplayClass13_0", modifiers: "&&", def_value: None }]
constexpr TMPro__TMP_MaterialManager____c__DisplayClass13_0(TMPro__TMP_MaterialManager____c__DisplayClass13_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMPro__TMP_MaterialManager____c__DisplayClass13_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMPro__TMP_MaterialManager____c__DisplayClass13_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMPro__TMP_MaterialManager____c__DisplayClass13_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMPro__TMP_MaterialManager____c__DisplayClass13_0& operator=(TMPro__TMP_MaterialManager____c__DisplayClass13_0&& o) noexcept = default;
  constexpr TMPro__TMP_MaterialManager____c__DisplayClass13_0& operator=(TMPro__TMP_MaterialManager____c__DisplayClass13_0 const& o) noexcept = default;
                


// Fields

 UnityEngine::Material __declspec(property(get=__get_baseMaterial, put=__set_baseMaterial))  baseMaterial;

constexpr void __set_baseMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_baseMaterial() const;


// Methods

// Ctor Parameters []
explicit TMPro__TMP_MaterialManager____c__DisplayClass13_0() ;

/// @brief Method .ctor addr 0x2ad5f18 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ReleaseBaseMaterial>b__0 addr 0x2ad7704 size 0x70 virtual false final false
 bool _ReleaseBaseMaterial_b__0(TMPro::TMPro__TMP_MaterialManager__MaskingMaterial item) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
// Type: TMPro::TMP_MaterialManager
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12364))
// CS Name: TMPro.TMP_MaterialManager
class CORDL_TYPE TMP_MaterialManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass13_0 = TMPro::TMPro__TMP_MaterialManager____c__DisplayClass13_0;

using __c__DisplayClass12_0 = TMPro::TMPro__TMP_MaterialManager____c__DisplayClass12_0;

using __c__DisplayClass11_0 = TMPro::TMPro__TMP_MaterialManager____c__DisplayClass11_0;

using __c__DisplayClass9_0 = TMPro::TMPro__TMP_MaterialManager____c__DisplayClass9_0;

using MaskingMaterial = TMPro::TMPro__TMP_MaterialManager__MaskingMaterial;

using FallbackMaterial = TMPro::TMPro__TMP_MaterialManager__FallbackMaterial;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TMP_MaterialManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_MaterialManager", modifiers: " const&", def_value: None }]
constexpr TMP_MaterialManager(TMP_MaterialManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_MaterialManager", modifiers: "&&", def_value: None }]
constexpr TMP_MaterialManager(TMP_MaterialManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMP_MaterialManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMP_MaterialManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMP_MaterialManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMP_MaterialManager& operator=(TMP_MaterialManager&& o) noexcept = default;
  constexpr TMP_MaterialManager& operator=(TMP_MaterialManager const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::List_1<TMPro::TMPro__TMP_MaterialManager__MaskingMaterial> __declspec(property(get=__get_m_materialList, put=__set_m_materialList))  m_materialList;

static void __set_m_materialList(System::Collections::Generic::List_1<TMPro::TMPro__TMP_MaterialManager__MaskingMaterial> value) ;

static System::Collections::Generic::List_1<TMPro::TMPro__TMP_MaterialManager__MaskingMaterial> __get_m_materialList() ;

static System::Collections::Generic::Dictionary_2<int64_t,TMPro::TMPro__TMP_MaterialManager__FallbackMaterial> __declspec(property(get=__get_m_fallbackMaterials, put=__set_m_fallbackMaterials))  m_fallbackMaterials;

static void __set_m_fallbackMaterials(System::Collections::Generic::Dictionary_2<int64_t,TMPro::TMPro__TMP_MaterialManager__FallbackMaterial> value) ;

static System::Collections::Generic::Dictionary_2<int64_t,TMPro::TMPro__TMP_MaterialManager__FallbackMaterial> __get_m_fallbackMaterials() ;

static System::Collections::Generic::Dictionary_2<int32_t,int64_t> __declspec(property(get=__get_m_fallbackMaterialLookup, put=__set_m_fallbackMaterialLookup))  m_fallbackMaterialLookup;

static void __set_m_fallbackMaterialLookup(System::Collections::Generic::Dictionary_2<int32_t,int64_t> value) ;

static System::Collections::Generic::Dictionary_2<int32_t,int64_t> __get_m_fallbackMaterialLookup() ;

static System::Collections::Generic::List_1<TMPro::TMPro__TMP_MaterialManager__FallbackMaterial> __declspec(property(get=__get_m_fallbackCleanupList, put=__set_m_fallbackCleanupList))  m_fallbackCleanupList;

static void __set_m_fallbackCleanupList(System::Collections::Generic::List_1<TMPro::TMPro__TMP_MaterialManager__FallbackMaterial> value) ;

static System::Collections::Generic::List_1<TMPro::TMPro__TMP_MaterialManager__FallbackMaterial> __get_m_fallbackCleanupList() ;

static bool __declspec(property(get=__get_isFallbackListDirty, put=__set_isFallbackListDirty))  isFallbackListDirty;

static void __set_isFallbackListDirty(bool value) ;

static bool __get_isFallbackListDirty() ;


// Methods

/// @brief Method OnPreRender addr 0x2ad40b0 size 0x78 virtual false final false
static void OnPreRender() ;

/// @brief Method GetStencilMaterial addr 0x2ad433c size 0x3b4 virtual false final false
static UnityEngine::Material GetStencilMaterial(UnityEngine::Material baseMaterial, int32_t stencilID) ;

/// @brief Method ReleaseStencilMaterial addr 0x2ad51e4 size 0x1fc virtual false final false
static void ReleaseStencilMaterial(UnityEngine::Material stencilMaterial) ;

/// @brief Method GetBaseMaterial addr 0x2ad53e0 size 0x164 virtual false final false
static UnityEngine::Material GetBaseMaterial(UnityEngine::Material stencilMaterial) ;

/// @brief Method SetStencil addr 0x2ad554c size 0xbc virtual false final false
static UnityEngine::Material SetStencil(UnityEngine::Material material, int32_t stencilID) ;

/// @brief Method AddMaskingMaterial addr 0x2ad5608 size 0x274 virtual false final false
static void AddMaskingMaterial(UnityEngine::Material baseMaterial, UnityEngine::Material stencilMaterial, int32_t stencilID) ;

/// @brief Method RemoveStencilMaterial addr 0x2ad5884 size 0x160 virtual false final false
static void RemoveStencilMaterial(UnityEngine::Material stencilMaterial) ;

/// @brief Method ReleaseBaseMaterial addr 0x2ad59ec size 0x52c virtual false final false
static void ReleaseBaseMaterial(UnityEngine::Material baseMaterial) ;

/// @brief Method ClearMaterials addr 0x2ad5f20 size 0x1bc virtual false final false
static void ClearMaterials() ;

/// @brief Method GetStencilID addr 0x2ad60dc size 0x2cc virtual false final false
static int32_t GetStencilID(UnityEngine::GameObject obj) ;

/// @brief Method GetMaterialForRendering addr 0x2ad6548 size 0x1fc virtual false final false
static UnityEngine::Material GetMaterialForRendering(UnityEngine::UI::MaskableGraphic graphic, UnityEngine::Material baseMaterial) ;

/// @brief Method FindRootSortOverrideCanvas addr 0x2ad63a8 size 0x1a0 virtual false final false
static UnityEngine::Transform FindRootSortOverrideCanvas(UnityEngine::Transform start) ;

/// @brief Method GetFallbackMaterial addr 0x2ad6744 size 0x2d0 virtual false final false
static UnityEngine::Material GetFallbackMaterial(TMPro::TMP_FontAsset fontAsset, UnityEngine::Material sourceMaterial, int32_t atlasIndex) ;

/// @brief Method GetFallbackMaterial addr 0x2ad6c88 size 0x420 virtual false final false
static UnityEngine::Material GetFallbackMaterial(UnityEngine::Material sourceMaterial, UnityEngine::Material targetMaterial) ;

/// @brief Method AddFallbackMaterialReference addr 0x2ad70a8 size 0x144 virtual false final false
static void AddFallbackMaterialReference(UnityEngine::Material targetMaterial) ;

/// @brief Method RemoveFallbackMaterialReference addr 0x2ad71ec size 0x1d4 virtual false final false
static void RemoveFallbackMaterialReference(UnityEngine::Material targetMaterial) ;

/// @brief Method CleanupFallbackMaterials addr 0x2ad4128 size 0x214 virtual false final false
static void CleanupFallbackMaterials() ;

/// @brief Method ReleaseFallbackMaterial addr 0x2ad73c0 size 0x1f4 virtual false final false
static void ReleaseFallbackMaterial(UnityEngine::Material fallbackMaterial) ;

/// @brief Method CopyMaterialPresetProperties addr 0x2ad6a14 size 0x26c virtual false final false
static void CopyMaterialPresetProperties(UnityEngine::Material source, UnityEngine::Material destination) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
NEED_NO_BOX(TMPro::TMP_MaterialManager);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_MaterialManager, "TMPro", "TMP_MaterialManager");
NEED_NO_BOX(TMPro::TMPro__TMP_MaterialManager__FallbackMaterial);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__TMP_MaterialManager__FallbackMaterial, "TMPro", "TMP_MaterialManager/FallbackMaterial");
NEED_NO_BOX(TMPro::TMPro__TMP_MaterialManager__MaskingMaterial);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__TMP_MaterialManager__MaskingMaterial, "TMPro", "TMP_MaterialManager/MaskingMaterial");
NEED_NO_BOX(TMPro::TMPro__TMP_MaterialManager____c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__TMP_MaterialManager____c__DisplayClass11_0, "TMPro", "TMP_MaterialManager/<>c__DisplayClass11_0");
NEED_NO_BOX(TMPro::TMPro__TMP_MaterialManager____c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__TMP_MaterialManager____c__DisplayClass12_0, "TMPro", "TMP_MaterialManager/<>c__DisplayClass12_0");
NEED_NO_BOX(TMPro::TMPro__TMP_MaterialManager____c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__TMP_MaterialManager____c__DisplayClass13_0, "TMPro", "TMP_MaterialManager/<>c__DisplayClass13_0");
NEED_NO_BOX(TMPro::TMPro__TMP_MaterialManager____c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__TMP_MaterialManager____c__DisplayClass9_0, "TMPro", "TMP_MaterialManager/<>c__DisplayClass9_0");
