#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace UnityEngine {
struct Vector3Int;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Forward declare root types
namespace UnityEngine {
struct BoundsInt;
}
namespace UnityEngine {
struct UnityEngine__BoundsInt__PositionEnumerator;
}
// Type: ::PositionEnumerator
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10128))
// CS Name: UnityEngine.BoundsInt::PositionEnumerator
struct CORDL_TYPE UnityEngine__BoundsInt__PositionEnumerator : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::Vector3Int>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::Vector3Int>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "_min", ty: "UnityEngine::Vector3Int", modifiers: "", def_value: None }, CppParam { name: "_max", ty: "UnityEngine::Vector3Int", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "UnityEngine::Vector3Int", modifiers: "", def_value: None }]
constexpr UnityEngine__BoundsInt__PositionEnumerator(UnityEngine::Vector3Int _min, UnityEngine::Vector3Int _max, UnityEngine::Vector3Int _current) noexcept;


                    constexpr UnityEngine__BoundsInt__PositionEnumerator(UnityEngine__BoundsInt__PositionEnumerator const&) = default;
                    constexpr UnityEngine__BoundsInt__PositionEnumerator(UnityEngine__BoundsInt__PositionEnumerator&&) = default;
                    constexpr UnityEngine__BoundsInt__PositionEnumerator& operator=(UnityEngine__BoundsInt__PositionEnumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__BoundsInt__PositionEnumerator& operator=(UnityEngine__BoundsInt__PositionEnumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x24};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__BoundsInt__PositionEnumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Vector3Int __declspec(property(get=__get__min, put=__set__min))  _min;

constexpr void __set__min(UnityEngine::Vector3Int value) ;

constexpr UnityEngine::Vector3Int __get__min() const;

 UnityEngine::Vector3Int __declspec(property(get=__get__max, put=__set__max))  _max;

constexpr void __set__max(UnityEngine::Vector3Int value) ;

constexpr UnityEngine::Vector3Int __get__max() const;

 UnityEngine::Vector3Int __declspec(property(get=__get__current, put=__set__current))  _current;

constexpr void __set__current(UnityEngine::Vector3Int value) ;

constexpr UnityEngine::Vector3Int __get__current() const;


// Properties

 UnityEngine::Vector3Int __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x2b86a70 size 0x20 virtual false final false
 void _ctor(UnityEngine::Vector3Int min, UnityEngine::Vector3Int max) ;

/// @brief Method GetEnumerator addr 0x2b86aac size 0x14 virtual false final false
 UnityEngine::UnityEngine__BoundsInt__PositionEnumerator GetEnumerator() ;

/// @brief Method MoveNext addr 0x2b86ac0 size 0x7c virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x2b86a90 size 0x1c virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x2b86b3c size 0x10 virtual true final true
 UnityEngine::Vector3Int get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2b86b4c size 0x64 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose addr 0x2b86bb0 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::BoundsInt
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10129))
// CS Name: UnityEngine.BoundsInt
struct CORDL_TYPE BoundsInt : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using PositionEnumerator = UnityEngine::UnityEngine__BoundsInt__PositionEnumerator;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::BoundsInt>
constexpr operator  System::IEquatable_1<UnityEngine::BoundsInt>() const;

/// @brief Convert operator to System::IFormattable
constexpr operator  System::IFormattable() const;

// Ctor Parameters [CppParam { name: "m_Position", ty: "UnityEngine::Vector3Int", modifiers: "", def_value: None }, CppParam { name: "m_Size", ty: "UnityEngine::Vector3Int", modifiers: "", def_value: None }]
constexpr BoundsInt(UnityEngine::Vector3Int m_Position, UnityEngine::Vector3Int m_Size) noexcept;


                    constexpr BoundsInt(BoundsInt const&) = default;
                    constexpr BoundsInt(BoundsInt&&) = default;
                    constexpr BoundsInt& operator=(BoundsInt const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BoundsInt& operator=(BoundsInt&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BoundsInt(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Vector3Int __declspec(property(get=__get_m_Position, put=__set_m_Position))  m_Position;

constexpr void __set_m_Position(UnityEngine::Vector3Int value) ;

constexpr UnityEngine::Vector3Int __get_m_Position() const;

 UnityEngine::Vector3Int __declspec(property(get=__get_m_Size, put=__set_m_Size))  m_Size;

constexpr void __set_m_Size(UnityEngine::Vector3Int value) ;

constexpr UnityEngine::Vector3Int __get_m_Size() const;


// Properties

 UnityEngine::Vector3Int __declspec(property(get=get_min, put=set_min))  min;

 UnityEngine::Vector3Int __declspec(property(get=get_max, put=set_max))  max;

 int32_t __declspec(property(get=get_xMin, put=set_xMin))  xMin;

 int32_t __declspec(property(get=get_yMin, put=set_yMin))  yMin;

 int32_t __declspec(property(get=get_zMin, put=set_zMin))  zMin;

 int32_t __declspec(property(get=get_xMax, put=set_xMax))  xMax;

 int32_t __declspec(property(get=get_yMax, put=set_yMax))  yMax;

 int32_t __declspec(property(get=get_zMax, put=set_zMax))  zMax;

 UnityEngine::Vector3Int __declspec(property(get=get_size))  size;

 UnityEngine::UnityEngine__BoundsInt__PositionEnumerator __declspec(property(get=get_allPositionsWithin))  allPositionsWithin;


// Methods

/// @brief Method get_min addr 0x2b860dc size 0x44 virtual false final false
 UnityEngine::Vector3Int get_min() ;

/// @brief Method set_min addr 0x2b8624c size 0x64 virtual false final false
 void set_min(UnityEngine::Vector3Int value) ;

/// @brief Method get_max addr 0x2b86334 size 0x44 virtual false final false
 UnityEngine::Vector3Int get_max() ;

/// @brief Method set_max addr 0x2b864a4 size 0x24 virtual false final false
 void set_max(UnityEngine::Vector3Int value) ;

/// @brief Method get_xMin addr 0x2b86120 size 0x64 virtual false final false
 int32_t get_xMin() ;

/// @brief Method set_xMin addr 0x2b862b0 size 0x2c virtual false final false
 void set_xMin(int32_t value) ;

/// @brief Method get_yMin addr 0x2b86184 size 0x64 virtual false final false
 int32_t get_yMin() ;

/// @brief Method set_yMin addr 0x2b862dc size 0x2c virtual false final false
 void set_yMin(int32_t value) ;

/// @brief Method get_zMin addr 0x2b861e8 size 0x64 virtual false final false
 int32_t get_zMin() ;

/// @brief Method set_zMin addr 0x2b86308 size 0x2c virtual false final false
 void set_zMin(int32_t value) ;

/// @brief Method get_xMax addr 0x2b86378 size 0x64 virtual false final false
 int32_t get_xMax() ;

/// @brief Method set_xMax addr 0x2b864c8 size 0x10 virtual false final false
 void set_xMax(int32_t value) ;

/// @brief Method get_yMax addr 0x2b863dc size 0x64 virtual false final false
 int32_t get_yMax() ;

/// @brief Method set_yMax addr 0x2b864d8 size 0x10 virtual false final false
 void set_yMax(int32_t value) ;

/// @brief Method get_zMax addr 0x2b86440 size 0x64 virtual false final false
 int32_t get_zMax() ;

/// @brief Method set_zMax addr 0x2b864e8 size 0x10 virtual false final false
 void set_zMax(int32_t value) ;

/// @brief Method get_size addr 0x2b864f8 size 0x10 virtual false final false
 UnityEngine::Vector3Int get_size() ;

/// @brief Method .ctor addr 0x2b86508 size 0x14 virtual false final false
 void _ctor(UnityEngine::Vector3Int position, UnityEngine::Vector3Int size) ;

/// @brief Method ToString addr 0x2b8651c size 0xc virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x2b86528 size 0x154 virtual true final true
 ::StringW ToString(::StringW format, System::IFormatProvider formatProvider) ;

/// @brief Method Equals addr 0x2b86840 size 0x90 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method Equals addr 0x2b868d0 size 0x78 virtual true final true
 bool Equals(UnityEngine::BoundsInt other) ;

/// @brief Method GetHashCode addr 0x2b86948 size 0xd4 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method get_allPositionsWithin addr 0x2b86a1c size 0x54 virtual false final false
 UnityEngine::UnityEngine__BoundsInt__PositionEnumerator get_allPositionsWithin() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::BoundsInt, "UnityEngine", "BoundsInt");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__BoundsInt__PositionEnumerator, "UnityEngine", "BoundsInt/PositionEnumerator");
