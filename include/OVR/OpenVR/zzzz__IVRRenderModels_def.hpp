#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace System::Text {
class StringBuilder;
}
namespace OVR::OpenVR {
struct RenderModel_ComponentState_t;
}
namespace OVR::OpenVR {
struct VRControllerState_t;
}
namespace OVR::OpenVR {
struct RenderModel_ControllerMode_State_t;
}
namespace OVR::OpenVR {
struct EVRRenderModelError;
}
// Forward declare root types
namespace OVR::OpenVR {
class OVR__OpenVR__IVRRenderModels___FreeRenderModel;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRRenderModels___FreeTexture;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRRenderModels___FreeTextureD3D11;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRRenderModels___GetComponentButtonMask;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRRenderModels___GetComponentCount;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRRenderModels___GetComponentName;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRRenderModels___GetComponentRenderModelName;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRRenderModels___GetComponentState;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRRenderModels___GetComponentStateForDevicePath;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRRenderModels___GetRenderModelCount;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRRenderModels___GetRenderModelErrorNameFromEnum;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRRenderModels___GetRenderModelName;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRRenderModels___GetRenderModelOriginalPath;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRRenderModels___GetRenderModelThumbnailURL;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRRenderModels___LoadIntoTextureD3D11_Async;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRRenderModels___LoadRenderModel_Async;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRRenderModels___LoadTextureD3D11_Async;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRRenderModels___LoadTexture_Async;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRRenderModels___RenderModelHasComponent;
}
namespace OVR::OpenVR {
struct IVRRenderModels;
}
// Type: ::_LoadRenderModel_Async
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9273))
// CS Name: OVR.OpenVR.IVRRenderModels::_LoadRenderModel_Async
class CORDL_TYPE OVR__OpenVR__IVRRenderModels___LoadRenderModel_Async : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRRenderModels___LoadRenderModel_Async() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRRenderModels___LoadRenderModel_Async", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRRenderModels___LoadRenderModel_Async(OVR__OpenVR__IVRRenderModels___LoadRenderModel_Async const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRRenderModels___LoadRenderModel_Async", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRRenderModels___LoadRenderModel_Async(OVR__OpenVR__IVRRenderModels___LoadRenderModel_Async&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRRenderModels___LoadRenderModel_Async(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRRenderModels___LoadRenderModel_Async& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRRenderModels___LoadRenderModel_Async& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRRenderModels___LoadRenderModel_Async& operator=(OVR__OpenVR__IVRRenderModels___LoadRenderModel_Async&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRRenderModels___LoadRenderModel_Async& operator=(OVR__OpenVR__IVRRenderModels___LoadRenderModel_Async const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRRenderModels___LoadRenderModel_Async(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x268b094 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x268b16c size 0x14 virtual true final false
 OVR::OpenVR::EVRRenderModelError Invoke(::StringW pchRenderModelName, ByRef<::cordl_internals::intptr_t> ppRenderModel) ;

/// @brief Method BeginInvoke addr 0x268b180 size 0x94 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchRenderModelName, ByRef<::cordl_internals::intptr_t> ppRenderModel, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x268b214 size 0x2c virtual true final false
 OVR::OpenVR::EVRRenderModelError EndInvoke(ByRef<::cordl_internals::intptr_t> ppRenderModel, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_FreeRenderModel
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9274))
// CS Name: OVR.OpenVR.IVRRenderModels::_FreeRenderModel
class CORDL_TYPE OVR__OpenVR__IVRRenderModels___FreeRenderModel : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRRenderModels___FreeRenderModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRRenderModels___FreeRenderModel", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRRenderModels___FreeRenderModel(OVR__OpenVR__IVRRenderModels___FreeRenderModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRRenderModels___FreeRenderModel", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRRenderModels___FreeRenderModel(OVR__OpenVR__IVRRenderModels___FreeRenderModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRRenderModels___FreeRenderModel(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRRenderModels___FreeRenderModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRRenderModels___FreeRenderModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRRenderModels___FreeRenderModel& operator=(OVR__OpenVR__IVRRenderModels___FreeRenderModel&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRRenderModels___FreeRenderModel& operator=(OVR__OpenVR__IVRRenderModels___FreeRenderModel const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRRenderModels___FreeRenderModel(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x268b240 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x268b304 size 0x14 virtual true final false
 void Invoke(::cordl_internals::intptr_t pRenderModel) ;

/// @brief Method BeginInvoke addr 0x268b318 size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(::cordl_internals::intptr_t pRenderModel, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x268b39c size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_LoadTexture_Async
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9275))
// CS Name: OVR.OpenVR.IVRRenderModels::_LoadTexture_Async
class CORDL_TYPE OVR__OpenVR__IVRRenderModels___LoadTexture_Async : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRRenderModels___LoadTexture_Async() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRRenderModels___LoadTexture_Async", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRRenderModels___LoadTexture_Async(OVR__OpenVR__IVRRenderModels___LoadTexture_Async const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRRenderModels___LoadTexture_Async", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRRenderModels___LoadTexture_Async(OVR__OpenVR__IVRRenderModels___LoadTexture_Async&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRRenderModels___LoadTexture_Async(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRRenderModels___LoadTexture_Async& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRRenderModels___LoadTexture_Async& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRRenderModels___LoadTexture_Async& operator=(OVR__OpenVR__IVRRenderModels___LoadTexture_Async&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRRenderModels___LoadTexture_Async& operator=(OVR__OpenVR__IVRRenderModels___LoadTexture_Async const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRRenderModels___LoadTexture_Async(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x268b3a8 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x268b46c size 0x14 virtual true final false
 OVR::OpenVR::EVRRenderModelError Invoke(int32_t textureId, ByRef<::cordl_internals::intptr_t> ppTexture) ;

/// @brief Method BeginInvoke addr 0x268b480 size 0xb8 virtual true final false
 System::IAsyncResult BeginInvoke(int32_t textureId, ByRef<::cordl_internals::intptr_t> ppTexture, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x268b538 size 0x2c virtual true final false
 OVR::OpenVR::EVRRenderModelError EndInvoke(ByRef<::cordl_internals::intptr_t> ppTexture, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_FreeTexture
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9276))
// CS Name: OVR.OpenVR.IVRRenderModels::_FreeTexture
class CORDL_TYPE OVR__OpenVR__IVRRenderModels___FreeTexture : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRRenderModels___FreeTexture() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRRenderModels___FreeTexture", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRRenderModels___FreeTexture(OVR__OpenVR__IVRRenderModels___FreeTexture const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRRenderModels___FreeTexture", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRRenderModels___FreeTexture(OVR__OpenVR__IVRRenderModels___FreeTexture&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRRenderModels___FreeTexture(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRRenderModels___FreeTexture& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRRenderModels___FreeTexture& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRRenderModels___FreeTexture& operator=(OVR__OpenVR__IVRRenderModels___FreeTexture&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRRenderModels___FreeTexture& operator=(OVR__OpenVR__IVRRenderModels___FreeTexture const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRRenderModels___FreeTexture(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x268b564 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x268b628 size 0x14 virtual true final false
 void Invoke(::cordl_internals::intptr_t pTexture) ;

/// @brief Method BeginInvoke addr 0x268b63c size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(::cordl_internals::intptr_t pTexture, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x268b6c0 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_LoadTextureD3D11_Async
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9277))
// CS Name: OVR.OpenVR.IVRRenderModels::_LoadTextureD3D11_Async
class CORDL_TYPE OVR__OpenVR__IVRRenderModels___LoadTextureD3D11_Async : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRRenderModels___LoadTextureD3D11_Async() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRRenderModels___LoadTextureD3D11_Async", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRRenderModels___LoadTextureD3D11_Async(OVR__OpenVR__IVRRenderModels___LoadTextureD3D11_Async const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRRenderModels___LoadTextureD3D11_Async", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRRenderModels___LoadTextureD3D11_Async(OVR__OpenVR__IVRRenderModels___LoadTextureD3D11_Async&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRRenderModels___LoadTextureD3D11_Async(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRRenderModels___LoadTextureD3D11_Async& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRRenderModels___LoadTextureD3D11_Async& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRRenderModels___LoadTextureD3D11_Async& operator=(OVR__OpenVR__IVRRenderModels___LoadTextureD3D11_Async&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRRenderModels___LoadTextureD3D11_Async& operator=(OVR__OpenVR__IVRRenderModels___LoadTextureD3D11_Async const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRRenderModels___LoadTextureD3D11_Async(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x268b6cc size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x268b790 size 0x14 virtual true final false
 OVR::OpenVR::EVRRenderModelError Invoke(int32_t textureId, ::cordl_internals::intptr_t pD3D11Device, ByRef<::cordl_internals::intptr_t> ppD3D11Texture2D) ;

/// @brief Method BeginInvoke addr 0x268b7a4 size 0xd0 virtual true final false
 System::IAsyncResult BeginInvoke(int32_t textureId, ::cordl_internals::intptr_t pD3D11Device, ByRef<::cordl_internals::intptr_t> ppD3D11Texture2D, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x268b874 size 0x2c virtual true final false
 OVR::OpenVR::EVRRenderModelError EndInvoke(ByRef<::cordl_internals::intptr_t> ppD3D11Texture2D, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_LoadIntoTextureD3D11_Async
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9278))
// CS Name: OVR.OpenVR.IVRRenderModels::_LoadIntoTextureD3D11_Async
class CORDL_TYPE OVR__OpenVR__IVRRenderModels___LoadIntoTextureD3D11_Async : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRRenderModels___LoadIntoTextureD3D11_Async() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRRenderModels___LoadIntoTextureD3D11_Async", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRRenderModels___LoadIntoTextureD3D11_Async(OVR__OpenVR__IVRRenderModels___LoadIntoTextureD3D11_Async const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRRenderModels___LoadIntoTextureD3D11_Async", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRRenderModels___LoadIntoTextureD3D11_Async(OVR__OpenVR__IVRRenderModels___LoadIntoTextureD3D11_Async&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRRenderModels___LoadIntoTextureD3D11_Async(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRRenderModels___LoadIntoTextureD3D11_Async& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRRenderModels___LoadIntoTextureD3D11_Async& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRRenderModels___LoadIntoTextureD3D11_Async& operator=(OVR__OpenVR__IVRRenderModels___LoadIntoTextureD3D11_Async&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRRenderModels___LoadIntoTextureD3D11_Async& operator=(OVR__OpenVR__IVRRenderModels___LoadIntoTextureD3D11_Async const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRRenderModels___LoadIntoTextureD3D11_Async(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x268b8a0 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x268b964 size 0x14 virtual true final false
 OVR::OpenVR::EVRRenderModelError Invoke(int32_t textureId, ::cordl_internals::intptr_t pDstTexture) ;

/// @brief Method BeginInvoke addr 0x268b978 size 0xb4 virtual true final false
 System::IAsyncResult BeginInvoke(int32_t textureId, ::cordl_internals::intptr_t pDstTexture, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x268ba2c size 0x28 virtual true final false
 OVR::OpenVR::EVRRenderModelError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_FreeTextureD3D11
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9279))
// CS Name: OVR.OpenVR.IVRRenderModels::_FreeTextureD3D11
class CORDL_TYPE OVR__OpenVR__IVRRenderModels___FreeTextureD3D11 : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRRenderModels___FreeTextureD3D11() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRRenderModels___FreeTextureD3D11", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRRenderModels___FreeTextureD3D11(OVR__OpenVR__IVRRenderModels___FreeTextureD3D11 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRRenderModels___FreeTextureD3D11", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRRenderModels___FreeTextureD3D11(OVR__OpenVR__IVRRenderModels___FreeTextureD3D11&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRRenderModels___FreeTextureD3D11(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRRenderModels___FreeTextureD3D11& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRRenderModels___FreeTextureD3D11& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRRenderModels___FreeTextureD3D11& operator=(OVR__OpenVR__IVRRenderModels___FreeTextureD3D11&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRRenderModels___FreeTextureD3D11& operator=(OVR__OpenVR__IVRRenderModels___FreeTextureD3D11 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRRenderModels___FreeTextureD3D11(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x268ba54 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x268bb18 size 0x14 virtual true final false
 void Invoke(::cordl_internals::intptr_t pD3D11Texture2D) ;

/// @brief Method BeginInvoke addr 0x268bb2c size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(::cordl_internals::intptr_t pD3D11Texture2D, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x268bbb0 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetRenderModelName
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9280))
// CS Name: OVR.OpenVR.IVRRenderModels::_GetRenderModelName
class CORDL_TYPE OVR__OpenVR__IVRRenderModels___GetRenderModelName : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRRenderModels___GetRenderModelName() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRRenderModels___GetRenderModelName", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRRenderModels___GetRenderModelName(OVR__OpenVR__IVRRenderModels___GetRenderModelName const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRRenderModels___GetRenderModelName", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRRenderModels___GetRenderModelName(OVR__OpenVR__IVRRenderModels___GetRenderModelName&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRRenderModels___GetRenderModelName(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRRenderModels___GetRenderModelName& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRRenderModels___GetRenderModelName& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRRenderModels___GetRenderModelName& operator=(OVR__OpenVR__IVRRenderModels___GetRenderModelName&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRRenderModels___GetRenderModelName& operator=(OVR__OpenVR__IVRRenderModels___GetRenderModelName const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRRenderModels___GetRenderModelName(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x268bbbc size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x268bc80 size 0x14 virtual true final false
 uint32_t Invoke(uint32_t unRenderModelIndex, System::Text::StringBuilder pchRenderModelName, uint32_t unRenderModelNameLen) ;

/// @brief Method BeginInvoke addr 0x268bc94 size 0xa4 virtual true final false
 System::IAsyncResult BeginInvoke(uint32_t unRenderModelIndex, System::Text::StringBuilder pchRenderModelName, uint32_t unRenderModelNameLen, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x268bd38 size 0x28 virtual true final false
 uint32_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetRenderModelCount
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9281))
// CS Name: OVR.OpenVR.IVRRenderModels::_GetRenderModelCount
class CORDL_TYPE OVR__OpenVR__IVRRenderModels___GetRenderModelCount : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRRenderModels___GetRenderModelCount() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRRenderModels___GetRenderModelCount", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRRenderModels___GetRenderModelCount(OVR__OpenVR__IVRRenderModels___GetRenderModelCount const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRRenderModels___GetRenderModelCount", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRRenderModels___GetRenderModelCount(OVR__OpenVR__IVRRenderModels___GetRenderModelCount&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRRenderModels___GetRenderModelCount(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRRenderModels___GetRenderModelCount& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRRenderModels___GetRenderModelCount& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRRenderModels___GetRenderModelCount& operator=(OVR__OpenVR__IVRRenderModels___GetRenderModelCount&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRRenderModels___GetRenderModelCount& operator=(OVR__OpenVR__IVRRenderModels___GetRenderModelCount const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRRenderModels___GetRenderModelCount(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x268bd60 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x268be1c size 0x14 virtual true final false
 uint32_t Invoke() ;

/// @brief Method BeginInvoke addr 0x268be30 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x268be50 size 0x28 virtual true final false
 uint32_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetComponentCount
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9282))
// CS Name: OVR.OpenVR.IVRRenderModels::_GetComponentCount
class CORDL_TYPE OVR__OpenVR__IVRRenderModels___GetComponentCount : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRRenderModels___GetComponentCount() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRRenderModels___GetComponentCount", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRRenderModels___GetComponentCount(OVR__OpenVR__IVRRenderModels___GetComponentCount const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRRenderModels___GetComponentCount", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRRenderModels___GetComponentCount(OVR__OpenVR__IVRRenderModels___GetComponentCount&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRRenderModels___GetComponentCount(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRRenderModels___GetComponentCount& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRRenderModels___GetComponentCount& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRRenderModels___GetComponentCount& operator=(OVR__OpenVR__IVRRenderModels___GetComponentCount&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRRenderModels___GetComponentCount& operator=(OVR__OpenVR__IVRRenderModels___GetComponentCount const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRRenderModels___GetComponentCount(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x268be78 size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x268bf4c size 0x14 virtual true final false
 uint32_t Invoke(::StringW pchRenderModelName) ;

/// @brief Method BeginInvoke addr 0x268bf60 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchRenderModelName, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x268bf80 size 0x28 virtual true final false
 uint32_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetComponentName
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9283))
// CS Name: OVR.OpenVR.IVRRenderModels::_GetComponentName
class CORDL_TYPE OVR__OpenVR__IVRRenderModels___GetComponentName : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRRenderModels___GetComponentName() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRRenderModels___GetComponentName", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRRenderModels___GetComponentName(OVR__OpenVR__IVRRenderModels___GetComponentName const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRRenderModels___GetComponentName", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRRenderModels___GetComponentName(OVR__OpenVR__IVRRenderModels___GetComponentName&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRRenderModels___GetComponentName(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRRenderModels___GetComponentName& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRRenderModels___GetComponentName& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRRenderModels___GetComponentName& operator=(OVR__OpenVR__IVRRenderModels___GetComponentName&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRRenderModels___GetComponentName& operator=(OVR__OpenVR__IVRRenderModels___GetComponentName const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRRenderModels___GetComponentName(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x268bfa8 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x268c080 size 0x14 virtual true final false
 uint32_t Invoke(::StringW pchRenderModelName, uint32_t unComponentIndex, System::Text::StringBuilder pchComponentName, uint32_t unComponentNameLen) ;

/// @brief Method BeginInvoke addr 0x268c094 size 0xac virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchRenderModelName, uint32_t unComponentIndex, System::Text::StringBuilder pchComponentName, uint32_t unComponentNameLen, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x268c140 size 0x28 virtual true final false
 uint32_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetComponentButtonMask
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9284))
// CS Name: OVR.OpenVR.IVRRenderModels::_GetComponentButtonMask
class CORDL_TYPE OVR__OpenVR__IVRRenderModels___GetComponentButtonMask : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRRenderModels___GetComponentButtonMask() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRRenderModels___GetComponentButtonMask", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRRenderModels___GetComponentButtonMask(OVR__OpenVR__IVRRenderModels___GetComponentButtonMask const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRRenderModels___GetComponentButtonMask", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRRenderModels___GetComponentButtonMask(OVR__OpenVR__IVRRenderModels___GetComponentButtonMask&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRRenderModels___GetComponentButtonMask(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRRenderModels___GetComponentButtonMask& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRRenderModels___GetComponentButtonMask& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRRenderModels___GetComponentButtonMask& operator=(OVR__OpenVR__IVRRenderModels___GetComponentButtonMask&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRRenderModels___GetComponentButtonMask& operator=(OVR__OpenVR__IVRRenderModels___GetComponentButtonMask const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRRenderModels___GetComponentButtonMask(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x268c168 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x268c240 size 0x14 virtual true final false
 uint64_t Invoke(::StringW pchRenderModelName, ::StringW pchComponentName) ;

/// @brief Method BeginInvoke addr 0x268c254 size 0x28 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchRenderModelName, ::StringW pchComponentName, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x268c27c size 0x28 virtual true final false
 uint64_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetComponentRenderModelName
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9285))
// CS Name: OVR.OpenVR.IVRRenderModels::_GetComponentRenderModelName
class CORDL_TYPE OVR__OpenVR__IVRRenderModels___GetComponentRenderModelName : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRRenderModels___GetComponentRenderModelName() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRRenderModels___GetComponentRenderModelName", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRRenderModels___GetComponentRenderModelName(OVR__OpenVR__IVRRenderModels___GetComponentRenderModelName const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRRenderModels___GetComponentRenderModelName", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRRenderModels___GetComponentRenderModelName(OVR__OpenVR__IVRRenderModels___GetComponentRenderModelName&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRRenderModels___GetComponentRenderModelName(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRRenderModels___GetComponentRenderModelName& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRRenderModels___GetComponentRenderModelName& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRRenderModels___GetComponentRenderModelName& operator=(OVR__OpenVR__IVRRenderModels___GetComponentRenderModelName&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRRenderModels___GetComponentRenderModelName& operator=(OVR__OpenVR__IVRRenderModels___GetComponentRenderModelName const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRRenderModels___GetComponentRenderModelName(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x268c2a4 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x268c37c size 0x14 virtual true final false
 uint32_t Invoke(::StringW pchRenderModelName, ::StringW pchComponentName, System::Text::StringBuilder pchComponentRenderModelName, uint32_t unComponentRenderModelNameLen) ;

/// @brief Method BeginInvoke addr 0x268c390 size 0xa8 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchRenderModelName, ::StringW pchComponentName, System::Text::StringBuilder pchComponentRenderModelName, uint32_t unComponentRenderModelNameLen, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x268c438 size 0x28 virtual true final false
 uint32_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetComponentStateForDevicePath
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9286))
// CS Name: OVR.OpenVR.IVRRenderModels::_GetComponentStateForDevicePath
class CORDL_TYPE OVR__OpenVR__IVRRenderModels___GetComponentStateForDevicePath : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRRenderModels___GetComponentStateForDevicePath() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRRenderModels___GetComponentStateForDevicePath", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRRenderModels___GetComponentStateForDevicePath(OVR__OpenVR__IVRRenderModels___GetComponentStateForDevicePath const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRRenderModels___GetComponentStateForDevicePath", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRRenderModels___GetComponentStateForDevicePath(OVR__OpenVR__IVRRenderModels___GetComponentStateForDevicePath&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRRenderModels___GetComponentStateForDevicePath(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRRenderModels___GetComponentStateForDevicePath& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRRenderModels___GetComponentStateForDevicePath& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRRenderModels___GetComponentStateForDevicePath& operator=(OVR__OpenVR__IVRRenderModels___GetComponentStateForDevicePath&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRRenderModels___GetComponentStateForDevicePath& operator=(OVR__OpenVR__IVRRenderModels___GetComponentStateForDevicePath const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRRenderModels___GetComponentStateForDevicePath(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x268c460 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x268c538 size 0x14 virtual true final false
 bool Invoke(::StringW pchRenderModelName, ::StringW pchComponentName, uint64_t devicePath, ByRef<OVR::OpenVR::RenderModel_ControllerMode_State_t> pState, ByRef<OVR::OpenVR::RenderModel_ComponentState_t> pComponentState) ;

/// @brief Method BeginInvoke addr 0x268c54c size 0x100 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchRenderModelName, ::StringW pchComponentName, uint64_t devicePath, ByRef<OVR::OpenVR::RenderModel_ControllerMode_State_t> pState, ByRef<OVR::OpenVR::RenderModel_ComponentState_t> pComponentState, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x268c64c size 0x34 virtual true final false
 bool EndInvoke(ByRef<OVR::OpenVR::RenderModel_ControllerMode_State_t> pState, ByRef<OVR::OpenVR::RenderModel_ComponentState_t> pComponentState, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetComponentState
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9287))
// CS Name: OVR.OpenVR.IVRRenderModels::_GetComponentState
class CORDL_TYPE OVR__OpenVR__IVRRenderModels___GetComponentState : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRRenderModels___GetComponentState() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRRenderModels___GetComponentState", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRRenderModels___GetComponentState(OVR__OpenVR__IVRRenderModels___GetComponentState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRRenderModels___GetComponentState", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRRenderModels___GetComponentState(OVR__OpenVR__IVRRenderModels___GetComponentState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRRenderModels___GetComponentState(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRRenderModels___GetComponentState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRRenderModels___GetComponentState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRRenderModels___GetComponentState& operator=(OVR__OpenVR__IVRRenderModels___GetComponentState&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRRenderModels___GetComponentState& operator=(OVR__OpenVR__IVRRenderModels___GetComponentState const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRRenderModels___GetComponentState(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x268c680 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x268c758 size 0x14 virtual true final false
 bool Invoke(::StringW pchRenderModelName, ::StringW pchComponentName, ByRef<OVR::OpenVR::VRControllerState_t> pControllerState, ByRef<OVR::OpenVR::RenderModel_ControllerMode_State_t> pState, ByRef<OVR::OpenVR::RenderModel_ComponentState_t> pComponentState) ;

/// @brief Method BeginInvoke addr 0x268c76c size 0x100 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchRenderModelName, ::StringW pchComponentName, ByRef<OVR::OpenVR::VRControllerState_t> pControllerState, ByRef<OVR::OpenVR::RenderModel_ControllerMode_State_t> pState, ByRef<OVR::OpenVR::RenderModel_ComponentState_t> pComponentState, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x268c86c size 0x34 virtual true final false
 bool EndInvoke(ByRef<OVR::OpenVR::VRControllerState_t> pControllerState, ByRef<OVR::OpenVR::RenderModel_ControllerMode_State_t> pState, ByRef<OVR::OpenVR::RenderModel_ComponentState_t> pComponentState, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_RenderModelHasComponent
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9288))
// CS Name: OVR.OpenVR.IVRRenderModels::_RenderModelHasComponent
class CORDL_TYPE OVR__OpenVR__IVRRenderModels___RenderModelHasComponent : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRRenderModels___RenderModelHasComponent() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRRenderModels___RenderModelHasComponent", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRRenderModels___RenderModelHasComponent(OVR__OpenVR__IVRRenderModels___RenderModelHasComponent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRRenderModels___RenderModelHasComponent", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRRenderModels___RenderModelHasComponent(OVR__OpenVR__IVRRenderModels___RenderModelHasComponent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRRenderModels___RenderModelHasComponent(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRRenderModels___RenderModelHasComponent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRRenderModels___RenderModelHasComponent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRRenderModels___RenderModelHasComponent& operator=(OVR__OpenVR__IVRRenderModels___RenderModelHasComponent&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRRenderModels___RenderModelHasComponent& operator=(OVR__OpenVR__IVRRenderModels___RenderModelHasComponent const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRRenderModels___RenderModelHasComponent(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x268c8a0 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x268c978 size 0x14 virtual true final false
 bool Invoke(::StringW pchRenderModelName, ::StringW pchComponentName) ;

/// @brief Method BeginInvoke addr 0x268c98c size 0x28 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchRenderModelName, ::StringW pchComponentName, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x268c9b4 size 0x28 virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetRenderModelThumbnailURL
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9289))
// CS Name: OVR.OpenVR.IVRRenderModels::_GetRenderModelThumbnailURL
class CORDL_TYPE OVR__OpenVR__IVRRenderModels___GetRenderModelThumbnailURL : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRRenderModels___GetRenderModelThumbnailURL() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRRenderModels___GetRenderModelThumbnailURL", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRRenderModels___GetRenderModelThumbnailURL(OVR__OpenVR__IVRRenderModels___GetRenderModelThumbnailURL const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRRenderModels___GetRenderModelThumbnailURL", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRRenderModels___GetRenderModelThumbnailURL(OVR__OpenVR__IVRRenderModels___GetRenderModelThumbnailURL&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRRenderModels___GetRenderModelThumbnailURL(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRRenderModels___GetRenderModelThumbnailURL& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRRenderModels___GetRenderModelThumbnailURL& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRRenderModels___GetRenderModelThumbnailURL& operator=(OVR__OpenVR__IVRRenderModels___GetRenderModelThumbnailURL&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRRenderModels___GetRenderModelThumbnailURL& operator=(OVR__OpenVR__IVRRenderModels___GetRenderModelThumbnailURL const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRRenderModels___GetRenderModelThumbnailURL(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x268c9dc size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x268cab4 size 0x14 virtual true final false
 uint32_t Invoke(::StringW pchRenderModelName, System::Text::StringBuilder pchThumbnailURL, uint32_t unThumbnailURLLen, ByRef<OVR::OpenVR::EVRRenderModelError> peError) ;

/// @brief Method BeginInvoke addr 0x268cac8 size 0xcc virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchRenderModelName, System::Text::StringBuilder pchThumbnailURL, uint32_t unThumbnailURLLen, ByRef<OVR::OpenVR::EVRRenderModelError> peError, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x268cb94 size 0x2c virtual true final false
 uint32_t EndInvoke(ByRef<OVR::OpenVR::EVRRenderModelError> peError, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetRenderModelOriginalPath
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9290))
// CS Name: OVR.OpenVR.IVRRenderModels::_GetRenderModelOriginalPath
class CORDL_TYPE OVR__OpenVR__IVRRenderModels___GetRenderModelOriginalPath : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRRenderModels___GetRenderModelOriginalPath() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRRenderModels___GetRenderModelOriginalPath", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRRenderModels___GetRenderModelOriginalPath(OVR__OpenVR__IVRRenderModels___GetRenderModelOriginalPath const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRRenderModels___GetRenderModelOriginalPath", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRRenderModels___GetRenderModelOriginalPath(OVR__OpenVR__IVRRenderModels___GetRenderModelOriginalPath&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRRenderModels___GetRenderModelOriginalPath(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRRenderModels___GetRenderModelOriginalPath& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRRenderModels___GetRenderModelOriginalPath& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRRenderModels___GetRenderModelOriginalPath& operator=(OVR__OpenVR__IVRRenderModels___GetRenderModelOriginalPath&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRRenderModels___GetRenderModelOriginalPath& operator=(OVR__OpenVR__IVRRenderModels___GetRenderModelOriginalPath const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRRenderModels___GetRenderModelOriginalPath(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x268cbc0 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x268cc98 size 0x14 virtual true final false
 uint32_t Invoke(::StringW pchRenderModelName, System::Text::StringBuilder pchOriginalPath, uint32_t unOriginalPathLen, ByRef<OVR::OpenVR::EVRRenderModelError> peError) ;

/// @brief Method BeginInvoke addr 0x268ccac size 0xcc virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchRenderModelName, System::Text::StringBuilder pchOriginalPath, uint32_t unOriginalPathLen, ByRef<OVR::OpenVR::EVRRenderModelError> peError, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x268cd78 size 0x2c virtual true final false
 uint32_t EndInvoke(ByRef<OVR::OpenVR::EVRRenderModelError> peError, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetRenderModelErrorNameFromEnum
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9291))
// CS Name: OVR.OpenVR.IVRRenderModels::_GetRenderModelErrorNameFromEnum
class CORDL_TYPE OVR__OpenVR__IVRRenderModels___GetRenderModelErrorNameFromEnum : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRRenderModels___GetRenderModelErrorNameFromEnum() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRRenderModels___GetRenderModelErrorNameFromEnum", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRRenderModels___GetRenderModelErrorNameFromEnum(OVR__OpenVR__IVRRenderModels___GetRenderModelErrorNameFromEnum const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRRenderModels___GetRenderModelErrorNameFromEnum", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRRenderModels___GetRenderModelErrorNameFromEnum(OVR__OpenVR__IVRRenderModels___GetRenderModelErrorNameFromEnum&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRRenderModels___GetRenderModelErrorNameFromEnum(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRRenderModels___GetRenderModelErrorNameFromEnum& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRRenderModels___GetRenderModelErrorNameFromEnum& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRRenderModels___GetRenderModelErrorNameFromEnum& operator=(OVR__OpenVR__IVRRenderModels___GetRenderModelErrorNameFromEnum&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRRenderModels___GetRenderModelErrorNameFromEnum& operator=(OVR__OpenVR__IVRRenderModels___GetRenderModelErrorNameFromEnum const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRRenderModels___GetRenderModelErrorNameFromEnum(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x268cda4 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x268ce68 size 0x14 virtual true final false
 ::cordl_internals::intptr_t Invoke(OVR::OpenVR::EVRRenderModelError error) ;

/// @brief Method BeginInvoke addr 0x268ce7c size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(OVR::OpenVR::EVRRenderModelError error, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x268cf00 size 0x28 virtual true final false
 ::cordl_internals::intptr_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: OVR.OpenVR::IVRRenderModels
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9292))
// CS Name: OVR.OpenVR.IVRRenderModels
struct CORDL_TYPE IVRRenderModels : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _GetRenderModelErrorNameFromEnum = OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelErrorNameFromEnum;

using _GetRenderModelOriginalPath = OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelOriginalPath;

using _GetRenderModelThumbnailURL = OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelThumbnailURL;

using _RenderModelHasComponent = OVR::OpenVR::OVR__OpenVR__IVRRenderModels___RenderModelHasComponent;

using _GetComponentState = OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentState;

using _GetComponentStateForDevicePath = OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentStateForDevicePath;

using _GetComponentRenderModelName = OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentRenderModelName;

using _GetComponentButtonMask = OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentButtonMask;

using _GetComponentName = OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentName;

using _GetComponentCount = OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentCount;

using _GetRenderModelCount = OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelCount;

using _GetRenderModelName = OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelName;

using _FreeTextureD3D11 = OVR::OpenVR::OVR__OpenVR__IVRRenderModels___FreeTextureD3D11;

using _LoadIntoTextureD3D11_Async = OVR::OpenVR::OVR__OpenVR__IVRRenderModels___LoadIntoTextureD3D11_Async;

using _LoadTextureD3D11_Async = OVR::OpenVR::OVR__OpenVR__IVRRenderModels___LoadTextureD3D11_Async;

using _FreeTexture = OVR::OpenVR::OVR__OpenVR__IVRRenderModels___FreeTexture;

using _LoadTexture_Async = OVR::OpenVR::OVR__OpenVR__IVRRenderModels___LoadTexture_Async;

using _FreeRenderModel = OVR::OpenVR::OVR__OpenVR__IVRRenderModels___FreeRenderModel;

using _LoadRenderModel_Async = OVR::OpenVR::OVR__OpenVR__IVRRenderModels___LoadRenderModel_Async;

// Ctor Parameters [CppParam { name: "LoadRenderModel_Async", ty: "OVR::OpenVR::OVR__OpenVR__IVRRenderModels___LoadRenderModel_Async", modifiers: "", def_value: None }, CppParam { name: "FreeRenderModel", ty: "OVR::OpenVR::OVR__OpenVR__IVRRenderModels___FreeRenderModel", modifiers: "", def_value: None }, CppParam { name: "LoadTexture_Async", ty: "OVR::OpenVR::OVR__OpenVR__IVRRenderModels___LoadTexture_Async", modifiers: "", def_value: None }, CppParam { name: "FreeTexture", ty: "OVR::OpenVR::OVR__OpenVR__IVRRenderModels___FreeTexture", modifiers: "", def_value: None }, CppParam { name: "LoadTextureD3D11_Async", ty: "OVR::OpenVR::OVR__OpenVR__IVRRenderModels___LoadTextureD3D11_Async", modifiers: "", def_value: None }, CppParam { name: "LoadIntoTextureD3D11_Async", ty: "OVR::OpenVR::OVR__OpenVR__IVRRenderModels___LoadIntoTextureD3D11_Async", modifiers: "", def_value: None }, CppParam { name: "FreeTextureD3D11", ty: "OVR::OpenVR::OVR__OpenVR__IVRRenderModels___FreeTextureD3D11", modifiers: "", def_value: None }, CppParam { name: "GetRenderModelName", ty: "OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelName", modifiers: "", def_value: None }, CppParam { name: "GetRenderModelCount", ty: "OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelCount", modifiers: "", def_value: None }, CppParam { name: "GetComponentCount", ty: "OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentCount", modifiers: "", def_value: None }, CppParam { name: "GetComponentName", ty: "OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentName", modifiers: "", def_value: None }, CppParam { name: "GetComponentButtonMask", ty: "OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentButtonMask", modifiers: "", def_value: None }, CppParam { name: "GetComponentRenderModelName", ty: "OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentRenderModelName", modifiers: "", def_value: None }, CppParam { name: "GetComponentStateForDevicePath", ty: "OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentStateForDevicePath", modifiers: "", def_value: None }, CppParam { name: "GetComponentState", ty: "OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentState", modifiers: "", def_value: None }, CppParam { name: "RenderModelHasComponent", ty: "OVR::OpenVR::OVR__OpenVR__IVRRenderModels___RenderModelHasComponent", modifiers: "", def_value: None }, CppParam { name: "GetRenderModelThumbnailURL", ty: "OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelThumbnailURL", modifiers: "", def_value: None }, CppParam { name: "GetRenderModelOriginalPath", ty: "OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelOriginalPath", modifiers: "", def_value: None }, CppParam { name: "GetRenderModelErrorNameFromEnum", ty: "OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelErrorNameFromEnum", modifiers: "", def_value: None }]
constexpr IVRRenderModels(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___LoadRenderModel_Async LoadRenderModel_Async, OVR::OpenVR::OVR__OpenVR__IVRRenderModels___FreeRenderModel FreeRenderModel, OVR::OpenVR::OVR__OpenVR__IVRRenderModels___LoadTexture_Async LoadTexture_Async, OVR::OpenVR::OVR__OpenVR__IVRRenderModels___FreeTexture FreeTexture, OVR::OpenVR::OVR__OpenVR__IVRRenderModels___LoadTextureD3D11_Async LoadTextureD3D11_Async, OVR::OpenVR::OVR__OpenVR__IVRRenderModels___LoadIntoTextureD3D11_Async LoadIntoTextureD3D11_Async, OVR::OpenVR::OVR__OpenVR__IVRRenderModels___FreeTextureD3D11 FreeTextureD3D11, OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelName GetRenderModelName, OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelCount GetRenderModelCount, OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentCount GetComponentCount, OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentName GetComponentName, OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentButtonMask GetComponentButtonMask, OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentRenderModelName GetComponentRenderModelName, OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentStateForDevicePath GetComponentStateForDevicePath, OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentState GetComponentState, OVR::OpenVR::OVR__OpenVR__IVRRenderModels___RenderModelHasComponent RenderModelHasComponent, OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelThumbnailURL GetRenderModelThumbnailURL, OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelOriginalPath GetRenderModelOriginalPath, OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelErrorNameFromEnum GetRenderModelErrorNameFromEnum) noexcept;


                    constexpr IVRRenderModels(IVRRenderModels const&) = default;
                    constexpr IVRRenderModels(IVRRenderModels&&) = default;
                    constexpr IVRRenderModels& operator=(IVRRenderModels const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IVRRenderModels& operator=(IVRRenderModels&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x98};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IVRRenderModels(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 OVR::OpenVR::OVR__OpenVR__IVRRenderModels___LoadRenderModel_Async __declspec(property(get=__get_LoadRenderModel_Async, put=__set_LoadRenderModel_Async))  LoadRenderModel_Async;

constexpr void __set_LoadRenderModel_Async(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___LoadRenderModel_Async value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRRenderModels___LoadRenderModel_Async __get_LoadRenderModel_Async() const;

 OVR::OpenVR::OVR__OpenVR__IVRRenderModels___FreeRenderModel __declspec(property(get=__get_FreeRenderModel, put=__set_FreeRenderModel))  FreeRenderModel;

constexpr void __set_FreeRenderModel(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___FreeRenderModel value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRRenderModels___FreeRenderModel __get_FreeRenderModel() const;

 OVR::OpenVR::OVR__OpenVR__IVRRenderModels___LoadTexture_Async __declspec(property(get=__get_LoadTexture_Async, put=__set_LoadTexture_Async))  LoadTexture_Async;

constexpr void __set_LoadTexture_Async(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___LoadTexture_Async value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRRenderModels___LoadTexture_Async __get_LoadTexture_Async() const;

 OVR::OpenVR::OVR__OpenVR__IVRRenderModels___FreeTexture __declspec(property(get=__get_FreeTexture, put=__set_FreeTexture))  FreeTexture;

constexpr void __set_FreeTexture(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___FreeTexture value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRRenderModels___FreeTexture __get_FreeTexture() const;

 OVR::OpenVR::OVR__OpenVR__IVRRenderModels___LoadTextureD3D11_Async __declspec(property(get=__get_LoadTextureD3D11_Async, put=__set_LoadTextureD3D11_Async))  LoadTextureD3D11_Async;

constexpr void __set_LoadTextureD3D11_Async(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___LoadTextureD3D11_Async value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRRenderModels___LoadTextureD3D11_Async __get_LoadTextureD3D11_Async() const;

 OVR::OpenVR::OVR__OpenVR__IVRRenderModels___LoadIntoTextureD3D11_Async __declspec(property(get=__get_LoadIntoTextureD3D11_Async, put=__set_LoadIntoTextureD3D11_Async))  LoadIntoTextureD3D11_Async;

constexpr void __set_LoadIntoTextureD3D11_Async(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___LoadIntoTextureD3D11_Async value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRRenderModels___LoadIntoTextureD3D11_Async __get_LoadIntoTextureD3D11_Async() const;

 OVR::OpenVR::OVR__OpenVR__IVRRenderModels___FreeTextureD3D11 __declspec(property(get=__get_FreeTextureD3D11, put=__set_FreeTextureD3D11))  FreeTextureD3D11;

constexpr void __set_FreeTextureD3D11(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___FreeTextureD3D11 value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRRenderModels___FreeTextureD3D11 __get_FreeTextureD3D11() const;

 OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelName __declspec(property(get=__get_GetRenderModelName, put=__set_GetRenderModelName))  GetRenderModelName;

constexpr void __set_GetRenderModelName(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelName value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelName __get_GetRenderModelName() const;

 OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelCount __declspec(property(get=__get_GetRenderModelCount, put=__set_GetRenderModelCount))  GetRenderModelCount;

constexpr void __set_GetRenderModelCount(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelCount value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelCount __get_GetRenderModelCount() const;

 OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentCount __declspec(property(get=__get_GetComponentCount, put=__set_GetComponentCount))  GetComponentCount;

constexpr void __set_GetComponentCount(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentCount value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentCount __get_GetComponentCount() const;

 OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentName __declspec(property(get=__get_GetComponentName, put=__set_GetComponentName))  GetComponentName;

constexpr void __set_GetComponentName(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentName value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentName __get_GetComponentName() const;

 OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentButtonMask __declspec(property(get=__get_GetComponentButtonMask, put=__set_GetComponentButtonMask))  GetComponentButtonMask;

constexpr void __set_GetComponentButtonMask(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentButtonMask value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentButtonMask __get_GetComponentButtonMask() const;

 OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentRenderModelName __declspec(property(get=__get_GetComponentRenderModelName, put=__set_GetComponentRenderModelName))  GetComponentRenderModelName;

constexpr void __set_GetComponentRenderModelName(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentRenderModelName value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentRenderModelName __get_GetComponentRenderModelName() const;

 OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentStateForDevicePath __declspec(property(get=__get_GetComponentStateForDevicePath, put=__set_GetComponentStateForDevicePath))  GetComponentStateForDevicePath;

constexpr void __set_GetComponentStateForDevicePath(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentStateForDevicePath value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentStateForDevicePath __get_GetComponentStateForDevicePath() const;

 OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentState __declspec(property(get=__get_GetComponentState, put=__set_GetComponentState))  GetComponentState;

constexpr void __set_GetComponentState(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentState value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentState __get_GetComponentState() const;

 OVR::OpenVR::OVR__OpenVR__IVRRenderModels___RenderModelHasComponent __declspec(property(get=__get_RenderModelHasComponent, put=__set_RenderModelHasComponent))  RenderModelHasComponent;

constexpr void __set_RenderModelHasComponent(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___RenderModelHasComponent value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRRenderModels___RenderModelHasComponent __get_RenderModelHasComponent() const;

 OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelThumbnailURL __declspec(property(get=__get_GetRenderModelThumbnailURL, put=__set_GetRenderModelThumbnailURL))  GetRenderModelThumbnailURL;

constexpr void __set_GetRenderModelThumbnailURL(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelThumbnailURL value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelThumbnailURL __get_GetRenderModelThumbnailURL() const;

 OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelOriginalPath __declspec(property(get=__get_GetRenderModelOriginalPath, put=__set_GetRenderModelOriginalPath))  GetRenderModelOriginalPath;

constexpr void __set_GetRenderModelOriginalPath(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelOriginalPath value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelOriginalPath __get_GetRenderModelOriginalPath() const;

 OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelErrorNameFromEnum __declspec(property(get=__get_GetRenderModelErrorNameFromEnum, put=__set_GetRenderModelErrorNameFromEnum))  GetRenderModelErrorNameFromEnum;

constexpr void __set_GetRenderModelErrorNameFromEnum(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelErrorNameFromEnum value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelErrorNameFromEnum __get_GetRenderModelErrorNameFromEnum() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___FreeRenderModel);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___FreeRenderModel, "OVR.OpenVR", "IVRRenderModels/_FreeRenderModel");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___FreeTexture);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___FreeTexture, "OVR.OpenVR", "IVRRenderModels/_FreeTexture");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___FreeTextureD3D11);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___FreeTextureD3D11, "OVR.OpenVR", "IVRRenderModels/_FreeTextureD3D11");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentButtonMask);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentButtonMask, "OVR.OpenVR", "IVRRenderModels/_GetComponentButtonMask");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentCount);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentCount, "OVR.OpenVR", "IVRRenderModels/_GetComponentCount");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentName);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentName, "OVR.OpenVR", "IVRRenderModels/_GetComponentName");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentRenderModelName);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentRenderModelName, "OVR.OpenVR", "IVRRenderModels/_GetComponentRenderModelName");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentState);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentState, "OVR.OpenVR", "IVRRenderModels/_GetComponentState");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentStateForDevicePath);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentStateForDevicePath, "OVR.OpenVR", "IVRRenderModels/_GetComponentStateForDevicePath");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelCount);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelCount, "OVR.OpenVR", "IVRRenderModels/_GetRenderModelCount");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelErrorNameFromEnum);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelErrorNameFromEnum, "OVR.OpenVR", "IVRRenderModels/_GetRenderModelErrorNameFromEnum");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelName);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelName, "OVR.OpenVR", "IVRRenderModels/_GetRenderModelName");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelOriginalPath);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelOriginalPath, "OVR.OpenVR", "IVRRenderModels/_GetRenderModelOriginalPath");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelThumbnailURL);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetRenderModelThumbnailURL, "OVR.OpenVR", "IVRRenderModels/_GetRenderModelThumbnailURL");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___LoadIntoTextureD3D11_Async);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___LoadIntoTextureD3D11_Async, "OVR.OpenVR", "IVRRenderModels/_LoadIntoTextureD3D11_Async");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___LoadRenderModel_Async);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___LoadRenderModel_Async, "OVR.OpenVR", "IVRRenderModels/_LoadRenderModel_Async");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___LoadTextureD3D11_Async);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___LoadTextureD3D11_Async, "OVR.OpenVR", "IVRRenderModels/_LoadTextureD3D11_Async");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___LoadTexture_Async);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___LoadTexture_Async, "OVR.OpenVR", "IVRRenderModels/_LoadTexture_Async");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___RenderModelHasComponent);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___RenderModelHasComponent, "OVR.OpenVR", "IVRRenderModels/_RenderModelHasComponent");
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRRenderModels, "OVR.OpenVR", "IVRRenderModels");
