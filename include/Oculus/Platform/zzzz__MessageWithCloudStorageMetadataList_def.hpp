#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__CloudStorageMetadataList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class CloudStorageMetadataList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithCloudStorageMetadataList;
}
// Type: Oculus.Platform::MessageWithCloudStorageMetadataList
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13222), inst: 4448 }), TypeDefinitionIndex(TypeDefinitionIndex(13222)), TypeDefinitionIndex(TypeDefinitionIndex(13427))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13250))
// CS Name: Oculus.Platform.MessageWithCloudStorageMetadataList
class CORDL_TYPE MessageWithCloudStorageMetadataList : public Oculus::Platform::Message_1<Oculus::Platform::Models::CloudStorageMetadataList> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithCloudStorageMetadataList() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithCloudStorageMetadataList", modifiers: " const&", def_value: None }]
constexpr MessageWithCloudStorageMetadataList(MessageWithCloudStorageMetadataList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithCloudStorageMetadataList", modifiers: "&&", def_value: None }]
constexpr MessageWithCloudStorageMetadataList(MessageWithCloudStorageMetadataList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithCloudStorageMetadataList(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::CloudStorageMetadataList>(ptr) {
}


  constexpr MessageWithCloudStorageMetadataList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithCloudStorageMetadataList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithCloudStorageMetadataList& operator=(MessageWithCloudStorageMetadataList&& o) noexcept = default;
  constexpr MessageWithCloudStorageMetadataList& operator=(MessageWithCloudStorageMetadataList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithCloudStorageMetadataList(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x25ae2cc size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetCloudStorageMetadataList addr 0x25b0d0c size 0x3c virtual true final false
 Oculus::Platform::Models::CloudStorageMetadataList GetCloudStorageMetadataList() ;

/// @brief Method GetDataFromMessage addr 0x25b0d48 size 0x9c virtual true final false
 Oculus::Platform::Models::CloudStorageMetadataList GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithCloudStorageMetadataList);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithCloudStorageMetadataList, "Oculus.Platform", "MessageWithCloudStorageMetadataList");
