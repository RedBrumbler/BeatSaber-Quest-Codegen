#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRNativeBuffer;
}
// Type: ::OVRNativeBuffer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8474))
// CS Name: OVRNativeBuffer
class CORDL_TYPE OVRNativeBuffer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OVRNativeBuffer() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRNativeBuffer", modifiers: " const&", def_value: None }]
constexpr OVRNativeBuffer(OVRNativeBuffer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRNativeBuffer", modifiers: "&&", def_value: None }]
constexpr OVRNativeBuffer(OVRNativeBuffer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRNativeBuffer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OVRNativeBuffer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRNativeBuffer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRNativeBuffer& operator=(OVRNativeBuffer&& o) noexcept = default;
  constexpr OVRNativeBuffer& operator=(OVRNativeBuffer const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_disposed, put=__set_disposed))  disposed;

constexpr void __set_disposed(bool value) ;

constexpr bool __get_disposed() const;

 int32_t __declspec(property(get=__get_m_numBytes, put=__set_m_numBytes))  m_numBytes;

constexpr void __set_m_numBytes(int32_t value) ;

constexpr int32_t __get_m_numBytes() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_ptr, put=__set_m_ptr))  m_ptr;

constexpr void __set_m_ptr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_ptr() const;


// Methods

// Ctor Parameters [CppParam { name: "numBytes", ty: "int32_t", modifiers: "", def_value: None }]
explicit OVRNativeBuffer(int32_t numBytes) ;

/// @brief Method .ctor addr 0x25d9abc size 0x70 virtual false final false
 void _ctor(int32_t numBytes) ;

/// @brief Method Finalize addr 0x25ddba0 size 0xa8 virtual true final false
 void Finalize() ;

/// @brief Method Reset addr 0x25d9660 size 0x4 virtual false final false
 void Reset(int32_t numBytes) ;

/// @brief Method GetCapacity addr 0x25ddc6c size 0x8 virtual false final false
 int32_t GetCapacity() ;

/// @brief Method GetPointer addr 0x25d9664 size 0x9c virtual false final false
 ::cordl_internals::intptr_t GetPointer(int32_t byteOffset) ;

/// @brief Method Dispose addr 0x25ddc74 size 0x70 virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x25ddc48 size 0x24 virtual false final false
 void Dispose(bool disposing) ;

/// @brief Method Reallocate addr 0x25ddb00 size 0xa0 virtual false final false
 void Reallocate(int32_t numBytes) ;

/// @brief Method Release addr 0x25ddce4 size 0xa4 virtual false final false
 void Release() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRNativeBuffer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRNativeBuffer, "", "OVRNativeBuffer");
