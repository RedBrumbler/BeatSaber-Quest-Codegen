#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
// Forward declare root types
namespace System::Threading {
class Interlocked;
}
// Type: System.Threading::Interlocked
namespace System::Threading {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2740))
// CS Name: System.Threading.Interlocked
class CORDL_TYPE Interlocked : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Interlocked() = default;

// Ctor Parameters [CppParam { name: "", ty: "Interlocked", modifiers: " const&", def_value: None }]
constexpr Interlocked(Interlocked const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Interlocked", modifiers: "&&", def_value: None }]
constexpr Interlocked(Interlocked&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Interlocked(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Interlocked& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Interlocked& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Interlocked& operator=(Interlocked&& o) noexcept = default;
  constexpr Interlocked& operator=(Interlocked const& o) noexcept = default;
                


// Methods

/// @brief Method CompareExchange addr 0x24e06ac size 0x4 virtual false final false
static int32_t CompareExchange(ByRef<int32_t> location1, int32_t value, int32_t comparand) ;

/// @brief Method CompareExchange addr 0x24e27d8 size 0x4 virtual false final false
static int32_t CompareExchange(ByRef<int32_t> location1, int32_t value, int32_t comparand, ByRef<bool> succeeded) ;

/// @brief Method CompareExchange addr 0x24e27dc size 0x4 virtual false final false
static void CompareExchange(ByRef<::bs_hook::Il2CppWrapperType> location1, ByRef<::bs_hook::Il2CppWrapperType> value, ByRef<::bs_hook::Il2CppWrapperType> comparand, ByRef<::bs_hook::Il2CppWrapperType> result) ;

/// @brief Method CompareExchange addr 0x24e27e0 size 0x2c virtual false final false
static ::bs_hook::Il2CppWrapperType CompareExchange(ByRef<::bs_hook::Il2CppWrapperType> location1, ::bs_hook::Il2CppWrapperType value, ::bs_hook::Il2CppWrapperType comparand) ;

/// @brief Method CompareExchange addr 0x24e280c size 0x4 virtual false final false
static float_t CompareExchange(ByRef<float_t> location1, float_t value, float_t comparand) ;

/// @brief Method Decrement addr 0x24e2810 size 0x4 virtual false final false
static int32_t Decrement(ByRef<int32_t> location) ;

/// @brief Method Decrement addr 0x24e2814 size 0x4 virtual false final false
static int64_t Decrement(ByRef<int64_t> location) ;

/// @brief Method Increment addr 0x24e2818 size 0x4 virtual false final false
static int32_t Increment(ByRef<int32_t> location) ;

/// @brief Method Increment addr 0x24e281c size 0x4 virtual false final false
static int64_t Increment(ByRef<int64_t> location) ;

/// @brief Method Exchange addr 0x24e2820 size 0x4 virtual false final false
static int32_t Exchange(ByRef<int32_t> location1, int32_t value) ;

/// @brief Method Exchange addr 0x24e2824 size 0x4 virtual false final false
static void Exchange(ByRef<::bs_hook::Il2CppWrapperType> location1, ByRef<::bs_hook::Il2CppWrapperType> value, ByRef<::bs_hook::Il2CppWrapperType> result) ;

/// @brief Method Exchange addr 0x24e2828 size 0x24 virtual false final false
static ::bs_hook::Il2CppWrapperType Exchange(ByRef<::bs_hook::Il2CppWrapperType> location1, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method Exchange addr 0x24e284c size 0x4 virtual false final false
static float_t Exchange(ByRef<float_t> location1, float_t value) ;

/// @brief Method CompareExchange addr 0x24e2850 size 0x4 virtual false final false
static int64_t CompareExchange(ByRef<int64_t> location1, int64_t value, int64_t comparand) ;

/// @brief Method CompareExchange addr 0x24e2854 size 0x4 virtual false final false
static ::cordl_internals::intptr_t CompareExchange(ByRef<::cordl_internals::intptr_t> location1, ::cordl_internals::intptr_t value, ::cordl_internals::intptr_t comparand) ;

/// @brief Method CompareExchange addr 0x24e2858 size 0x4 virtual false final false
static double_t CompareExchange(ByRef<double_t> location1, double_t value, double_t comparand) ;

/// @brief Method CompareExchange addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T CompareExchange(ByRef<T> location1, T value, T comparand) ;

/// @brief Method Exchange addr 0x24e285c size 0x4 virtual false final false
static int64_t Exchange(ByRef<int64_t> location1, int64_t value) ;

/// @brief Method Exchange addr 0x24e2860 size 0x4 virtual false final false
static ::cordl_internals::intptr_t Exchange(ByRef<::cordl_internals::intptr_t> location1, ::cordl_internals::intptr_t value) ;

/// @brief Method Exchange addr 0x24e2864 size 0x4 virtual false final false
static double_t Exchange(ByRef<double_t> location1, double_t value) ;

/// @brief Method Exchange addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T Exchange(ByRef<T> location1, T value) ;

/// @brief Method Read addr 0x24e2868 size 0x4 virtual false final false
static int64_t Read(ByRef<int64_t> location) ;

/// @brief Method Add addr 0x24e286c size 0x4 virtual false final false
static int32_t Add(ByRef<int32_t> location1, int32_t value) ;

/// @brief Method Add addr 0x24e2870 size 0x4 virtual false final false
static int64_t Add(ByRef<int64_t> location1, int64_t value) ;

/// @brief Method MemoryBarrier addr 0x24e2874 size 0x8 virtual false final false
static void MemoryBarrier() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
NEED_NO_BOX(System::Threading::Interlocked);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Interlocked, "System.Threading", "Interlocked");
