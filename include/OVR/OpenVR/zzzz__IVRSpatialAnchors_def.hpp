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
namespace OVR::OpenVR {
struct EVRSpatialAnchorError;
}
namespace OVR::OpenVR {
struct SpatialAnchorPose_t;
}
namespace OVR::OpenVR {
struct ETrackingUniverseOrigin;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromPose;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorDescriptor;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorPose;
}
namespace OVR::OpenVR {
struct IVRSpatialAnchors;
}
// Type: ::_CreateSpatialAnchorFromDescriptor
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9349))
// CS Name: OVR.OpenVR.IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor
class CORDL_TYPE OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor(OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor(OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor& operator=(OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor& operator=(OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26926e0 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26927b8 size 0x14 virtual true final false
 OVR::OpenVR::EVRSpatialAnchorError Invoke(::StringW pchDescriptor, ByRef<uint32_t> pHandleOut) ;

/// @brief Method BeginInvoke addr 0x26927cc size 0x94 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchDescriptor, ByRef<uint32_t> pHandleOut, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2692860 size 0x2c virtual true final false
 OVR::OpenVR::EVRSpatialAnchorError EndInvoke(ByRef<uint32_t> pHandleOut, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_CreateSpatialAnchorFromPose
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9350))
// CS Name: OVR.OpenVR.IVRSpatialAnchors::_CreateSpatialAnchorFromPose
class CORDL_TYPE OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromPose : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromPose() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromPose", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromPose(OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromPose const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromPose", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromPose(OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromPose&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromPose(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromPose& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromPose& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromPose& operator=(OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromPose&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromPose& operator=(OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromPose const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromPose(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x269288c size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2692950 size 0x14 virtual true final false
 OVR::OpenVR::EVRSpatialAnchorError Invoke(uint32_t unDeviceIndex, OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ByRef<OVR::OpenVR::SpatialAnchorPose_t> pPose, ByRef<uint32_t> pHandleOut) ;

/// @brief Method BeginInvoke addr 0x2692964 size 0x100 virtual true final false
 System::IAsyncResult BeginInvoke(uint32_t unDeviceIndex, OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ByRef<OVR::OpenVR::SpatialAnchorPose_t> pPose, ByRef<uint32_t> pHandleOut, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2692a64 size 0x34 virtual true final false
 OVR::OpenVR::EVRSpatialAnchorError EndInvoke(ByRef<OVR::OpenVR::SpatialAnchorPose_t> pPose, ByRef<uint32_t> pHandleOut, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetSpatialAnchorPose
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9351))
// CS Name: OVR.OpenVR.IVRSpatialAnchors::_GetSpatialAnchorPose
class CORDL_TYPE OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorPose : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorPose() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorPose", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorPose(OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorPose const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorPose", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorPose(OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorPose&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorPose(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorPose& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorPose& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorPose& operator=(OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorPose&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorPose& operator=(OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorPose const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorPose(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2692a98 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2692b5c size 0x14 virtual true final false
 OVR::OpenVR::EVRSpatialAnchorError Invoke(uint32_t unHandle, OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ByRef<OVR::OpenVR::SpatialAnchorPose_t> pPoseOut) ;

/// @brief Method BeginInvoke addr 0x2692b70 size 0xe8 virtual true final false
 System::IAsyncResult BeginInvoke(uint32_t unHandle, OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ByRef<OVR::OpenVR::SpatialAnchorPose_t> pPoseOut, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2692c58 size 0x2c virtual true final false
 OVR::OpenVR::EVRSpatialAnchorError EndInvoke(ByRef<OVR::OpenVR::SpatialAnchorPose_t> pPoseOut, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetSpatialAnchorDescriptor
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9352))
// CS Name: OVR.OpenVR.IVRSpatialAnchors::_GetSpatialAnchorDescriptor
class CORDL_TYPE OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorDescriptor : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorDescriptor() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorDescriptor", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorDescriptor(OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorDescriptor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorDescriptor", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorDescriptor(OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorDescriptor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorDescriptor(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorDescriptor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorDescriptor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorDescriptor& operator=(OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorDescriptor&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorDescriptor& operator=(OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorDescriptor const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorDescriptor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2692c84 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2692d48 size 0x14 virtual true final false
 OVR::OpenVR::EVRSpatialAnchorError Invoke(uint32_t unHandle, System::Text::StringBuilder pchDescriptorOut, ByRef<uint32_t> punDescriptorBufferLenInOut) ;

/// @brief Method BeginInvoke addr 0x2692d5c size 0xa8 virtual true final false
 System::IAsyncResult BeginInvoke(uint32_t unHandle, System::Text::StringBuilder pchDescriptorOut, ByRef<uint32_t> punDescriptorBufferLenInOut, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2692e04 size 0x2c virtual true final false
 OVR::OpenVR::EVRSpatialAnchorError EndInvoke(ByRef<uint32_t> punDescriptorBufferLenInOut, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: OVR.OpenVR::IVRSpatialAnchors
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9353))
// CS Name: OVR.OpenVR.IVRSpatialAnchors
struct CORDL_TYPE IVRSpatialAnchors : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _GetSpatialAnchorDescriptor = OVR::OpenVR::OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorDescriptor;

using _GetSpatialAnchorPose = OVR::OpenVR::OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorPose;

using _CreateSpatialAnchorFromPose = OVR::OpenVR::OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromPose;

using _CreateSpatialAnchorFromDescriptor = OVR::OpenVR::OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor;

// Ctor Parameters [CppParam { name: "CreateSpatialAnchorFromDescriptor", ty: "OVR::OpenVR::OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor", modifiers: "", def_value: None }, CppParam { name: "CreateSpatialAnchorFromPose", ty: "OVR::OpenVR::OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromPose", modifiers: "", def_value: None }, CppParam { name: "GetSpatialAnchorPose", ty: "OVR::OpenVR::OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorPose", modifiers: "", def_value: None }, CppParam { name: "GetSpatialAnchorDescriptor", ty: "OVR::OpenVR::OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorDescriptor", modifiers: "", def_value: None }]
constexpr IVRSpatialAnchors(OVR::OpenVR::OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor CreateSpatialAnchorFromDescriptor, OVR::OpenVR::OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromPose CreateSpatialAnchorFromPose, OVR::OpenVR::OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorPose GetSpatialAnchorPose, OVR::OpenVR::OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorDescriptor GetSpatialAnchorDescriptor) noexcept;


                    constexpr IVRSpatialAnchors(IVRSpatialAnchors const&) = default;
                    constexpr IVRSpatialAnchors(IVRSpatialAnchors&&) = default;
                    constexpr IVRSpatialAnchors& operator=(IVRSpatialAnchors const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IVRSpatialAnchors& operator=(IVRSpatialAnchors&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IVRSpatialAnchors(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 OVR::OpenVR::OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor __declspec(property(get=__get_CreateSpatialAnchorFromDescriptor, put=__set_CreateSpatialAnchorFromDescriptor))  CreateSpatialAnchorFromDescriptor;

constexpr void __set_CreateSpatialAnchorFromDescriptor(OVR::OpenVR::OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor __get_CreateSpatialAnchorFromDescriptor() const;

 OVR::OpenVR::OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromPose __declspec(property(get=__get_CreateSpatialAnchorFromPose, put=__set_CreateSpatialAnchorFromPose))  CreateSpatialAnchorFromPose;

constexpr void __set_CreateSpatialAnchorFromPose(OVR::OpenVR::OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromPose value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromPose __get_CreateSpatialAnchorFromPose() const;

 OVR::OpenVR::OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorPose __declspec(property(get=__get_GetSpatialAnchorPose, put=__set_GetSpatialAnchorPose))  GetSpatialAnchorPose;

constexpr void __set_GetSpatialAnchorPose(OVR::OpenVR::OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorPose value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorPose __get_GetSpatialAnchorPose() const;

 OVR::OpenVR::OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorDescriptor __declspec(property(get=__get_GetSpatialAnchorDescriptor, put=__set_GetSpatialAnchorDescriptor))  GetSpatialAnchorDescriptor;

constexpr void __set_GetSpatialAnchorDescriptor(OVR::OpenVR::OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorDescriptor value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorDescriptor __get_GetSpatialAnchorDescriptor() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromDescriptor, "OVR.OpenVR", "IVRSpatialAnchors/_CreateSpatialAnchorFromDescriptor");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromPose);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSpatialAnchors___CreateSpatialAnchorFromPose, "OVR.OpenVR", "IVRSpatialAnchors/_CreateSpatialAnchorFromPose");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorDescriptor);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorDescriptor, "OVR.OpenVR", "IVRSpatialAnchors/_GetSpatialAnchorDescriptor");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorPose);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSpatialAnchors___GetSpatialAnchorPose, "OVR.OpenVR", "IVRSpatialAnchors/_GetSpatialAnchorPose");
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSpatialAnchors, "OVR.OpenVR", "IVRSpatialAnchors");
