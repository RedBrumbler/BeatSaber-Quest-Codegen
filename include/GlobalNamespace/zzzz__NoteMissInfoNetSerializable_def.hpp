#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PoolableSerializable_def.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
struct ColorType;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteMissInfoNetSerializable;
}
// Type: ::NoteMissInfoNetSerializable
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15136))
// CS Name: NoteMissInfoNetSerializable
class CORDL_TYPE NoteMissInfoNetSerializable : public GlobalNamespace::PoolableSerializable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~NoteMissInfoNetSerializable() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteMissInfoNetSerializable", modifiers: " const&", def_value: None }]
constexpr NoteMissInfoNetSerializable(NoteMissInfoNetSerializable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteMissInfoNetSerializable", modifiers: "&&", def_value: None }]
constexpr NoteMissInfoNetSerializable(NoteMissInfoNetSerializable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoteMissInfoNetSerializable(void* ptr) noexcept : GlobalNamespace::PoolableSerializable(ptr) {
}


  constexpr NoteMissInfoNetSerializable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoteMissInfoNetSerializable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoteMissInfoNetSerializable& operator=(NoteMissInfoNetSerializable&& o) noexcept = default;
  constexpr NoteMissInfoNetSerializable& operator=(NoteMissInfoNetSerializable const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ColorType __declspec(property(get=__get__colorType_k__BackingField, put=__set__colorType_k__BackingField))  _colorType_k__BackingField;

constexpr void __set__colorType_k__BackingField(GlobalNamespace::ColorType value) ;

constexpr GlobalNamespace::ColorType __get__colorType_k__BackingField() const;

 float_t __declspec(property(get=__get__noteTime_k__BackingField, put=__set__noteTime_k__BackingField))  _noteTime_k__BackingField;

constexpr void __set__noteTime_k__BackingField(float_t value) ;

constexpr float_t __get__noteTime_k__BackingField() const;

 int32_t __declspec(property(get=__get__noteLineIndex_k__BackingField, put=__set__noteLineIndex_k__BackingField))  _noteLineIndex_k__BackingField;

constexpr void __set__noteLineIndex_k__BackingField(int32_t value) ;

constexpr int32_t __get__noteLineIndex_k__BackingField() const;

 GlobalNamespace::NoteLineLayer __declspec(property(get=__get__noteLineLayer_k__BackingField, put=__set__noteLineLayer_k__BackingField))  _noteLineLayer_k__BackingField;

constexpr void __set__noteLineLayer_k__BackingField(GlobalNamespace::NoteLineLayer value) ;

constexpr GlobalNamespace::NoteLineLayer __get__noteLineLayer_k__BackingField() const;


// Properties

 GlobalNamespace::ColorType __declspec(property(get=get_colorType, put=set_colorType))  colorType;

 float_t __declspec(property(get=get_noteTime, put=set_noteTime))  noteTime;

 int32_t __declspec(property(get=get_noteLineIndex, put=set_noteLineIndex))  noteLineIndex;

 GlobalNamespace::NoteLineLayer __declspec(property(get=get_noteLineLayer, put=set_noteLineLayer))  noteLineLayer;


// Methods

/// @brief Method get_colorType addr 0x12247a0 size 0x8 virtual false final false
 GlobalNamespace::ColorType get_colorType() ;

/// @brief Method set_colorType addr 0x12247a8 size 0x8 virtual false final false
 void set_colorType(GlobalNamespace::ColorType value) ;

/// @brief Method get_noteTime addr 0x12247b0 size 0x8 virtual false final false
 float_t get_noteTime() ;

/// @brief Method set_noteTime addr 0x12247b8 size 0x8 virtual false final false
 void set_noteTime(float_t value) ;

/// @brief Method get_noteLineIndex addr 0x12247c0 size 0x8 virtual false final false
 int32_t get_noteLineIndex() ;

/// @brief Method set_noteLineIndex addr 0x12247c8 size 0x8 virtual false final false
 void set_noteLineIndex(int32_t value) ;

/// @brief Method get_noteLineLayer addr 0x12247d0 size 0x8 virtual false final false
 GlobalNamespace::NoteLineLayer get_noteLineLayer() ;

/// @brief Method set_noteLineLayer addr 0x12247d8 size 0x8 virtual false final false
 void set_noteLineLayer(GlobalNamespace::NoteLineLayer value) ;

/// @brief Method Obtain addr 0x12247e0 size 0x64 virtual false final false
static GlobalNamespace::NoteMissInfoNetSerializable Obtain() ;

/// @brief Method Deserialize addr 0x1224844 size 0x7c virtual true final false
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Serialize addr 0x12248c0 size 0x6c virtual true final false
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

// Ctor Parameters []
explicit NoteMissInfoNetSerializable() ;

/// @brief Method .ctor addr 0x122492c size 0x58 virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0x1224984 size 0x28 virtual false final false
 GlobalNamespace::NoteMissInfoNetSerializable Init(GlobalNamespace::NoteData noteData) ;

/// @brief Method Init addr 0x12249ac size 0x10 virtual false final false
 GlobalNamespace::NoteMissInfoNetSerializable Init(GlobalNamespace::ColorType colorType, GlobalNamespace::NoteLineLayer lineLayer, int32_t noteLineIndex, float_t noteTime) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::NoteMissInfoNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteMissInfoNetSerializable, "", "NoteMissInfoNetSerializable");
