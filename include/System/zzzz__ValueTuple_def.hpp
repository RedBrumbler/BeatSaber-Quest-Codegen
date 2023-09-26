#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections {
class IEqualityComparer;
}
namespace System::Collections {
class IComparer;
}
namespace System {
class IComparable;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System::Collections {
class IStructuralComparable;
}
namespace System {
class IValueTupleInternal;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System::Runtime::CompilerServices {
class ITuple;
}
namespace System::Collections {
class IStructuralEquatable;
}
// Forward declare root types
namespace System {
struct ValueTuple;
}
// Type: System::ValueTuple
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2504))
// CS Name: System.ValueTuple
struct CORDL_TYPE ValueTuple : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<System::ValueTuple>
constexpr operator  System::IEquatable_1<System::ValueTuple>() const;

/// @brief Convert operator to System::Collections::IStructuralEquatable
constexpr operator  System::Collections::IStructuralEquatable() const;

/// @brief Convert operator to System::Collections::IStructuralComparable
constexpr operator  System::Collections::IStructuralComparable() const;

/// @brief Convert operator to System::IComparable
constexpr operator  System::IComparable() const;

/// @brief Convert operator to System::IComparable_1<System::ValueTuple>
constexpr operator  System::IComparable_1<System::ValueTuple>() const;

/// @brief Convert operator to System::IValueTupleInternal
constexpr operator  System::IValueTupleInternal() const;

/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr operator  System::Runtime::CompilerServices::ITuple() const;


                    constexpr ValueTuple(ValueTuple const&) = default;
                    constexpr ValueTuple(ValueTuple&&) = default;
                    constexpr ValueTuple& operator=(ValueTuple const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ValueTuple& operator=(ValueTuple&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ValueTuple(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Properties

 int32_t __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length))  System_Runtime_CompilerServices_ITuple_Length;


// Methods

/// @brief Method Equals addr 0x2492af4 size 0x5c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x2492b50 size 0x8 virtual true final true
 bool Equals(System::ValueTuple other) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x2492b58 size 0x5c virtual true final true
 bool System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x2492bb4 size 0x118 virtual true final true
 int32_t System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method CompareTo addr 0x2492ccc size 0x8 virtual true final true
 int32_t CompareTo(System::ValueTuple other) ;

/// @brief Method System.Collections.IStructuralComparable.CompareTo addr 0x2492cd4 size 0x118 virtual true final true
 int32_t System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, System::Collections::IComparer comparer) ;

/// @brief Method GetHashCode addr 0x2492dec size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method System.Collections.IStructuralEquatable.GetHashCode addr 0x2492df4 size 0x8 virtual true final true
 int32_t System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer comparer) ;

/// @brief Method System.IValueTupleInternal.GetHashCode addr 0x2492dfc size 0x8 virtual true final true
 int32_t System_IValueTupleInternal_GetHashCode(System::Collections::IEqualityComparer comparer) ;

/// @brief Method ToString addr 0x2492e04 size 0x40 virtual true final false
 ::StringW ToString() ;

/// @brief Method System.IValueTupleInternal.ToStringEnd addr 0x2492e44 size 0x40 virtual true final true
 ::StringW System_IValueTupleInternal_ToStringEnd() ;

/// @brief Method System.Runtime.CompilerServices.ITuple.get_Length addr 0x2492e84 size 0x8 virtual true final true
 int32_t System_Runtime_CompilerServices_ITuple_get_Length() ;

/// @brief Method CombineHashCodes addr 0x2492e8c size 0x7c virtual false final false
static int32_t CombineHashCodes(int32_t h1, int32_t h2) ;

/// @brief Method CombineHashCodes addr 0x2492f08 size 0x80 virtual false final false
static int32_t CombineHashCodes(int32_t h1, int32_t h2, int32_t h3) ;

/// @brief Method CombineHashCodes addr 0x2492f88 size 0x90 virtual false final false
static int32_t CombineHashCodes(int32_t h1, int32_t h2, int32_t h3, int32_t h4) ;

/// @brief Method CombineHashCodes addr 0x2493018 size 0x98 virtual false final false
static int32_t CombineHashCodes(int32_t h1, int32_t h2, int32_t h3, int32_t h4, int32_t h5) ;

/// @brief Method CombineHashCodes addr 0x24930b0 size 0xa8 virtual false final false
static int32_t CombineHashCodes(int32_t h1, int32_t h2, int32_t h3, int32_t h4, int32_t h5, int32_t h6) ;

/// @brief Method CombineHashCodes addr 0x2493158 size 0xb0 virtual false final false
static int32_t CombineHashCodes(int32_t h1, int32_t h2, int32_t h3, int32_t h4, int32_t h5, int32_t h6, int32_t h7) ;

/// @brief Method CombineHashCodes addr 0x2493208 size 0xc0 virtual false final false
static int32_t CombineHashCodes(int32_t h1, int32_t h2, int32_t h3, int32_t h4, int32_t h5, int32_t h6, int32_t h7, int32_t h8) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::ValueTuple, "System", "ValueTuple");
