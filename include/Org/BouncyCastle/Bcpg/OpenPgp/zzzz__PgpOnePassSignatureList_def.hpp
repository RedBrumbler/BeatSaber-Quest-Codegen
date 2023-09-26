#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpOnePassSignature;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpOnePassSignatureList;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpOnePassSignatureList
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1628))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1655))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpOnePassSignatureList
class CORDL_TYPE PgpOnePassSignatureList : public Org::BouncyCastle::Bcpg::OpenPgp::PgpObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PgpOnePassSignatureList() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpOnePassSignatureList", modifiers: " const&", def_value: None }]
constexpr PgpOnePassSignatureList(PgpOnePassSignatureList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpOnePassSignatureList", modifiers: "&&", def_value: None }]
constexpr PgpOnePassSignatureList(PgpOnePassSignatureList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpOnePassSignatureList(void* ptr) noexcept : Org::BouncyCastle::Bcpg::OpenPgp::PgpObject(ptr) {
}


  constexpr PgpOnePassSignatureList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpOnePassSignatureList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpOnePassSignatureList& operator=(PgpOnePassSignatureList&& o) noexcept = default;
  constexpr PgpOnePassSignatureList& operator=(PgpOnePassSignatureList const& o) noexcept = default;
                


// Fields

 ::ArrayW<Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature> __declspec(property(get=__get_sigs, put=__set_sigs))  sigs;

constexpr void __set_sigs(::ArrayW<Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature> value) ;

constexpr ::ArrayW<Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature> __get_sigs() const;


// Properties

 Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature __declspec(property(get=get_Item))  Item;

 int32_t __declspec(property(get=get_Size))  Size;

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsEmpty))  IsEmpty;


// Methods

// Ctor Parameters [CppParam { name: "sigs", ty: "::ArrayW<Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature>", modifiers: "", def_value: None }]
explicit PgpOnePassSignatureList(::ArrayW<Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature> sigs) ;

/// @brief Method .ctor addr 0x1032f80 size 0xb8 virtual false final false
 void _ctor(::ArrayW<Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature> sigs) ;

// Ctor Parameters [CppParam { name: "sig", ty: "Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature", modifiers: "", def_value: None }]
explicit PgpOnePassSignatureList(Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature sig) ;

/// @brief Method .ctor addr 0x1033d3c size 0xa8 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature sig) ;

/// @brief Method get_Item addr 0x1033de4 size 0x30 virtual false final false
 Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature get_Item(int32_t index) ;

/// @brief Method Get addr 0x1033e14 size 0x4 virtual false final false
 Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature Get(int32_t index) ;

/// @brief Method get_Size addr 0x1033e18 size 0x1c virtual false final false
 int32_t get_Size() ;

/// @brief Method get_Count addr 0x1033e34 size 0x1c virtual false final false
 int32_t get_Count() ;

/// @brief Method get_IsEmpty addr 0x1033e50 size 0x24 virtual false final false
 bool get_IsEmpty() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignatureList);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignatureList, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpOnePassSignatureList");
