#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace System::Collections::Concurrent {
template<typename T>
class BlockingCollectionDebugView_1;
}
// Type: System.Collections.Concurrent::BlockingCollectionDebugView`1
namespace System::Collections::Concurrent {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8395))
// CS Name: System.Collections.Concurrent.BlockingCollectionDebugView`1
class CORDL_TYPE BlockingCollectionDebugView_1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BlockingCollectionDebugView_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "BlockingCollectionDebugView_1", modifiers: " const&", def_value: None }]
constexpr BlockingCollectionDebugView_1(BlockingCollectionDebugView_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BlockingCollectionDebugView_1", modifiers: "&&", def_value: None }]
constexpr BlockingCollectionDebugView_1(BlockingCollectionDebugView_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BlockingCollectionDebugView_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BlockingCollectionDebugView_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BlockingCollectionDebugView_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BlockingCollectionDebugView_1& operator=(BlockingCollectionDebugView_1&& o) noexcept = default;
  constexpr BlockingCollectionDebugView_1& operator=(BlockingCollectionDebugView_1 const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Concurrent
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Concurrent::BlockingCollectionDebugView_1, "System.Collections.Concurrent", "BlockingCollectionDebugView`1");
