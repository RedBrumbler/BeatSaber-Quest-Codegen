#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace GlobalNamespace {
class FileUtility;
}
// Type: ::FileUtility
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5930))
// CS Name: FileUtility
class CORDL_TYPE FileUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~FileUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "FileUtility", modifiers: " const&", def_value: None }]
constexpr FileUtility(FileUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FileUtility", modifiers: "&&", def_value: None }]
constexpr FileUtility(FileUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FileUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FileUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FileUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FileUtility& operator=(FileUtility&& o) noexcept = default;
  constexpr FileUtility& operator=(FileUtility const& o) noexcept = default;
                


// Methods

/// @brief Method GetPlatformPersistentDataPath addr 0x21c9a30 size 0x8 virtual false final false
static ::StringW GetPlatformPersistentDataPath() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FileUtility);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FileUtility, "", "FileUtility");
