#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System {
class Array;
}
namespace System::Net {
class IPEndPoint;
}
// Forward declare root types
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Type: LiteNetLib.Utils::NetDataWriter
namespace LiteNetLib::Utils {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14496))
// CS Name: LiteNetLib.Utils.NetDataWriter
class CORDL_TYPE NetDataWriter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~NetDataWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetDataWriter", modifiers: " const&", def_value: None }]
constexpr NetDataWriter(NetDataWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetDataWriter", modifiers: "&&", def_value: None }]
constexpr NetDataWriter(NetDataWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetDataWriter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NetDataWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetDataWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetDataWriter& operator=(NetDataWriter&& o) noexcept = default;
  constexpr NetDataWriter& operator=(NetDataWriter const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get__data, put=__set__data))  _data;

constexpr void __set__data(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__data() const;

 int32_t __declspec(property(get=__get__position, put=__set__position))  _position;

constexpr void __set__position(int32_t value) ;

constexpr int32_t __get__position() const;

/// @brief Field InitialSize offset 0
static constexpr int32_t  InitialSize{64};

 bool __declspec(property(get=__get__autoResize, put=__set__autoResize))  _autoResize;

constexpr void __set__autoResize(bool value) ;

constexpr bool __get__autoResize() const;


// Properties

 int32_t __declspec(property(get=get_Capacity))  Capacity;

 ::ArrayW<uint8_t> __declspec(property(get=get_Data))  Data;

 int32_t __declspec(property(get=get_Length))  Length;


// Methods

/// @brief Method get_Capacity addr 0x20cf61c size 0x1c virtual false final false
 int32_t get_Capacity() ;

// Ctor Parameters []
explicit NetDataWriter() ;

/// @brief Method .ctor addr 0x20bfae0 size 0xc virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "autoResize", ty: "bool", modifiers: "", def_value: None }]
explicit NetDataWriter(bool autoResize) ;

/// @brief Method .ctor addr 0x20cf6a8 size 0xc virtual false final false
 void _ctor(bool autoResize) ;

// Ctor Parameters [CppParam { name: "autoResize", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "initialSize", ty: "int32_t", modifiers: "", def_value: None }]
explicit NetDataWriter(bool autoResize, int32_t initialSize) ;

/// @brief Method .ctor addr 0x20cf638 size 0x70 virtual false final false
 void _ctor(bool autoResize, int32_t initialSize) ;

/// @brief Method FromBytes addr 0x20cf6b4 size 0xa0 virtual false final false
static LiteNetLib::Utils::NetDataWriter FromBytes(::ArrayW<uint8_t> bytes, bool copy) ;

/// @brief Method FromBytes addr 0x20cf7c8 size 0x8c virtual false final false
static LiteNetLib::Utils::NetDataWriter FromBytes(::ArrayW<uint8_t> bytes, int32_t offset, int32_t length) ;

/// @brief Method FromString addr 0x20c6d88 size 0x70 virtual false final false
static LiteNetLib::Utils::NetDataWriter FromString(::StringW value) ;

/// @brief Method ResizeIfNeed addr 0x20cf98c size 0x80 virtual false final false
 void ResizeIfNeed(int32_t newSize) ;

/// @brief Method Reset addr 0x20cfa0c size 0x18 virtual false final false
 void Reset(int32_t size) ;

/// @brief Method Reset addr 0x20cfa24 size 0x8 virtual false final false
 void Reset() ;

/// @brief Method CopyData addr 0x20cfa2c size 0x74 virtual false final false
 ::ArrayW<uint8_t> CopyData() ;

/// @brief Method get_Data addr 0x20cfaa0 size 0x8 virtual false final false
 ::ArrayW<uint8_t> get_Data() ;

/// @brief Method get_Length addr 0x20cfaa8 size 0x8 virtual false final false
 int32_t get_Length() ;

/// @brief Method Put addr 0x20cfab0 size 0x50 virtual false final false
 void Put(float_t value) ;

/// @brief Method Put addr 0x20cfb00 size 0x50 virtual false final false
 void Put(double_t value) ;

/// @brief Method Put addr 0x20cfb50 size 0x50 virtual false final false
 void Put(int64_t value) ;

/// @brief Method Put addr 0x20cfba0 size 0x50 virtual false final false
 void Put(uint64_t value) ;

/// @brief Method Put addr 0x20cfbf0 size 0x50 virtual false final false
 void Put(int32_t value) ;

/// @brief Method Put addr 0x20cfc40 size 0x50 virtual false final false
 void Put(uint32_t value) ;

/// @brief Method Put addr 0x20cfc90 size 0x50 virtual false final false
 void Put(char16_t value) ;

/// @brief Method Put addr 0x20cfce0 size 0x50 virtual false final false
 void Put(uint16_t value) ;

/// @brief Method Put addr 0x20cfd30 size 0x50 virtual false final false
 void Put(int16_t value) ;

/// @brief Method Put addr 0x20cfd80 size 0x68 virtual false final false
 void Put(int8_t value) ;

/// @brief Method Put addr 0x20cfde8 size 0x68 virtual false final false
 void Put(uint8_t value) ;

/// @brief Method Put addr 0x20cf854 size 0x6c virtual false final false
 void Put(::ArrayW<uint8_t> data, int32_t offset, int32_t length) ;

/// @brief Method Put addr 0x20cf754 size 0x74 virtual false final false
 void Put(::ArrayW<uint8_t> data) ;

/// @brief Method PutSBytesWithLength addr 0x20cfe50 size 0x8c virtual false final false
 void PutSBytesWithLength(::ArrayW<int8_t> data, int32_t offset, int32_t length) ;

/// @brief Method PutSBytesWithLength addr 0x20cfedc size 0x90 virtual false final false
 void PutSBytesWithLength(::ArrayW<int8_t> data) ;

/// @brief Method PutBytesWithLength addr 0x20cff6c size 0x8c virtual false final false
 void PutBytesWithLength(::ArrayW<uint8_t> data, int32_t offset, int32_t length) ;

/// @brief Method PutBytesWithLength addr 0x20cfff8 size 0x90 virtual false final false
 void PutBytesWithLength(::ArrayW<uint8_t> data) ;

/// @brief Method Put addr 0x20d0088 size 0x6c virtual false final false
 void Put(bool value) ;

/// @brief Method PutArray addr 0x20d00f4 size 0xac virtual false final false
 void PutArray(System::Array arr, int32_t sz) ;

/// @brief Method PutArray addr 0x20d01a0 size 0x8 virtual false final false
 void PutArray(::ArrayW<float_t> value) ;

/// @brief Method PutArray addr 0x20d01a8 size 0x8 virtual false final false
 void PutArray(::ArrayW<double_t> value) ;

/// @brief Method PutArray addr 0x20d01b0 size 0x8 virtual false final false
 void PutArray(::ArrayW<int64_t> value) ;

/// @brief Method PutArray addr 0x20d01b8 size 0x8 virtual false final false
 void PutArray(::ArrayW<uint64_t> value) ;

/// @brief Method PutArray addr 0x20d01c0 size 0x8 virtual false final false
 void PutArray(::ArrayW<int32_t> value) ;

/// @brief Method PutArray addr 0x20d01c8 size 0x8 virtual false final false
 void PutArray(::ArrayW<uint32_t> value) ;

/// @brief Method PutArray addr 0x20d01d0 size 0x8 virtual false final false
 void PutArray(::ArrayW<uint16_t> value) ;

/// @brief Method PutArray addr 0x20d01d8 size 0x8 virtual false final false
 void PutArray(::ArrayW<int16_t> value) ;

/// @brief Method PutArray addr 0x20d01e0 size 0x8 virtual false final false
 void PutArray(::ArrayW<bool> value) ;

/// @brief Method PutArray addr 0x20d01e8 size 0x88 virtual false final false
 void PutArray(::ArrayW<::StringW> value) ;

/// @brief Method PutArray addr 0x20d0270 size 0x9c virtual false final false
 void PutArray(::ArrayW<::StringW> value, int32_t maxLength) ;

/// @brief Method Put addr 0x20d03f4 size 0x4c virtual false final false
 void Put(System::Net::IPEndPoint endPoint) ;

/// @brief Method Put addr 0x20cf8c0 size 0xcc virtual false final false
 void Put(::StringW value) ;

/// @brief Method Put addr 0x20d030c size 0xe8 virtual false final false
 void Put(::StringW value, int32_t maxLength) ;

/// @brief Method Put addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void Put(T obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
NEED_NO_BOX(LiteNetLib::Utils::NetDataWriter);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Utils::NetDataWriter, "LiteNetLib.Utils", "NetDataWriter");
