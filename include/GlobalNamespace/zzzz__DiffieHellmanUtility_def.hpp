#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace BGNet::Core {
class ITaskUtility;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECDomainParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
class IDiffieHellmanKeyPair;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Agreement {
class DHBasicAgreement;
}
namespace Org::BouncyCastle::Crypto::Agreement {
class ECDHBasicAgreement;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHPrivateKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPrivateKeyParameters;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__DiffieHellmanUtility__KeyType;
}
namespace GlobalNamespace {
class DiffieHellmanUtility;
}
namespace GlobalNamespace {
class GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair;
}
namespace GlobalNamespace {
class GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0;
}
namespace GlobalNamespace {
class GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair;
}
namespace GlobalNamespace {
class GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0;
}
namespace GlobalNamespace {
class GlobalNamespace__DiffieHellmanUtility__OperationTimer;
}
// Type: ::KeyType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12673))
// CS Name: DiffieHellmanUtility::KeyType
struct CORDL_TYPE GlobalNamespace__DiffieHellmanUtility__KeyType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__DiffieHellmanUtility__KeyType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__DiffieHellmanUtility__KeyType(GlobalNamespace__DiffieHellmanUtility__KeyType const&) = default;
                    constexpr GlobalNamespace__DiffieHellmanUtility__KeyType(GlobalNamespace__DiffieHellmanUtility__KeyType&&) = default;
                    constexpr GlobalNamespace__DiffieHellmanUtility__KeyType& operator=(GlobalNamespace__DiffieHellmanUtility__KeyType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__DiffieHellmanUtility__KeyType& operator=(GlobalNamespace__DiffieHellmanUtility__KeyType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__DiffieHellmanUtility__KeyType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__DiffieHellmanUtility__KeyType_Unwrapped : int32_t {
__DiffieHellman = 0,
__ElipticalCurve = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__DiffieHellmanUtility__KeyType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__DiffieHellmanUtility__KeyType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field DiffieHellman offset 0
static GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__KeyType const DiffieHellman;

/// @brief Field ElipticalCurve offset 0
static GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__KeyType const ElipticalCurve;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass5_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12674))
// CS Name: DiffieHellmanUtility::DiffieHellmanKeyPair::<>c__DisplayClass5_0
class CORDL_TYPE GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0(GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0(GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0& operator=(GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0&& o) noexcept = default;
  constexpr GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0& operator=(GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair value) ;

constexpr GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair __get___4__this() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_clientPublicKey, put=__set_clientPublicKey))  clientPublicKey;

constexpr void __set_clientPublicKey(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_clientPublicKey() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0() ;

/// @brief Method .ctor addr 0xdb54b4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetPreMasterSecretAsync>b__0 addr 0xdb5524 size 0x6c virtual false final false
 ::ArrayW<uint8_t> _GetPreMasterSecretAsync_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::DiffieHellmanKeyPair
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12675))
// CS Name: DiffieHellmanUtility::DiffieHellmanKeyPair
class CORDL_TYPE GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass5_0 = GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0;

/// @brief Convert operator to GlobalNamespace::IDiffieHellmanKeyPair
constexpr operator  GlobalNamespace::IDiffieHellmanKeyPair() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair(GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair(GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair& operator=(GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair&& o) noexcept = default;
  constexpr GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair& operator=(GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement __declspec(property(get=__get__dhBasicAgreement, put=__set__dhBasicAgreement))  _dhBasicAgreement;

constexpr void __set__dhBasicAgreement(Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement value) ;

constexpr Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement __get__dhBasicAgreement() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__publicKey, put=__set__publicKey))  _publicKey;

constexpr void __set__publicKey(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__publicKey() const;


// Properties

 ::ArrayW<uint8_t> __declspec(property(get=get_publicKey))  publicKey;


// Methods

/// @brief Method get_publicKey addr 0xdb535c size 0x8 virtual true final true
 ::ArrayW<uint8_t> get_publicKey() ;

// Ctor Parameters [CppParam { name: "privateKeyParameters", ty: "Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters", modifiers: "", def_value: None }, CppParam { name: "publicKey", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair(Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters privateKeyParameters, ::ArrayW<uint8_t> publicKey) ;

/// @brief Method .ctor addr 0xdb4d84 size 0x98 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters privateKeyParameters, ::ArrayW<uint8_t> publicKey) ;

/// @brief Method GetPreMasterSecretAsync addr 0xdb5364 size 0x150 virtual true final true
 System::Threading::Tasks::Task_1<::ArrayW<uint8_t>> GetPreMasterSecretAsync(BGNet::Core::ITaskUtility taskUtility, ::ArrayW<uint8_t> clientPublicKey) ;

/// @brief Method GetPreMasterSecret addr 0xdb54bc size 0x68 virtual true final true
 ::ArrayW<uint8_t> GetPreMasterSecret(::ArrayW<uint8_t> clientPublicKey) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass5_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12676))
// CS Name: DiffieHellmanUtility::ElipticalCurveKeyPair::<>c__DisplayClass5_0
class CORDL_TYPE GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0(GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0(GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0& operator=(GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0&& o) noexcept = default;
  constexpr GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0& operator=(GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair value) ;

constexpr GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair __get___4__this() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_clientPublicKey, put=__set_clientPublicKey))  clientPublicKey;

constexpr void __set_clientPublicKey(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_clientPublicKey() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0() ;

/// @brief Method .ctor addr 0xdb56e8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetPreMasterSecretAsync>b__0 addr 0xdb5758 size 0x6c virtual false final false
 ::ArrayW<uint8_t> _GetPreMasterSecretAsync_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ElipticalCurveKeyPair
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12677))
// CS Name: DiffieHellmanUtility::ElipticalCurveKeyPair
class CORDL_TYPE GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass5_0 = GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0;

/// @brief Convert operator to GlobalNamespace::IDiffieHellmanKeyPair
constexpr operator  GlobalNamespace::IDiffieHellmanKeyPair() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair(GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair(GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair& operator=(GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair&& o) noexcept = default;
  constexpr GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair& operator=(GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement __declspec(property(get=__get__ecdhBasicAgreement, put=__set__ecdhBasicAgreement))  _ecdhBasicAgreement;

constexpr void __set__ecdhBasicAgreement(Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement value) ;

constexpr Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement __get__ecdhBasicAgreement() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__publicKey, put=__set__publicKey))  _publicKey;

constexpr void __set__publicKey(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__publicKey() const;


// Properties

 ::ArrayW<uint8_t> __declspec(property(get=get_publicKey))  publicKey;


// Methods

/// @brief Method get_publicKey addr 0xdb5590 size 0x8 virtual true final true
 ::ArrayW<uint8_t> get_publicKey() ;

// Ctor Parameters [CppParam { name: "privateKeyParameters", ty: "Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters", modifiers: "", def_value: None }, CppParam { name: "publicKey", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair(Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters privateKeyParameters, ::ArrayW<uint8_t> publicKey) ;

/// @brief Method .ctor addr 0xdb4e1c size 0x98 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters privateKeyParameters, ::ArrayW<uint8_t> publicKey) ;

/// @brief Method GetPreMasterSecretAsync addr 0xdb5598 size 0x150 virtual true final true
 System::Threading::Tasks::Task_1<::ArrayW<uint8_t>> GetPreMasterSecretAsync(BGNet::Core::ITaskUtility taskUtility, ::ArrayW<uint8_t> clientPublicKey) ;

/// @brief Method GetPreMasterSecret addr 0xdb56f0 size 0x68 virtual true final true
 ::ArrayW<uint8_t> GetPreMasterSecret(::ArrayW<uint8_t> clientPublicKey) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OperationTimer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12678))
// CS Name: DiffieHellmanUtility::OperationTimer
class CORDL_TYPE GlobalNamespace__DiffieHellmanUtility__OperationTimer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__DiffieHellmanUtility__OperationTimer() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__DiffieHellmanUtility__OperationTimer", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__DiffieHellmanUtility__OperationTimer(GlobalNamespace__DiffieHellmanUtility__OperationTimer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__DiffieHellmanUtility__OperationTimer", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__DiffieHellmanUtility__OperationTimer(GlobalNamespace__DiffieHellmanUtility__OperationTimer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__DiffieHellmanUtility__OperationTimer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__DiffieHellmanUtility__OperationTimer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__DiffieHellmanUtility__OperationTimer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__DiffieHellmanUtility__OperationTimer& operator=(GlobalNamespace__DiffieHellmanUtility__OperationTimer&& o) noexcept = default;
  constexpr GlobalNamespace__DiffieHellmanUtility__OperationTimer& operator=(GlobalNamespace__DiffieHellmanUtility__OperationTimer const& o) noexcept = default;
                


// Fields

 System::Diagnostics::Stopwatch __declspec(property(get=__get__stopwatch, put=__set__stopwatch))  _stopwatch;

constexpr void __set__stopwatch(System::Diagnostics::Stopwatch value) ;

constexpr System::Diagnostics::Stopwatch __get__stopwatch() const;

 ::StringW __declspec(property(get=__get__operationName, put=__set__operationName))  _operationName;

constexpr void __set__operationName(::StringW value) ;

constexpr ::StringW __get__operationName() const;


// Methods

// Ctor Parameters [CppParam { name: "operationName", ty: "::StringW", modifiers: "", def_value: None }]
explicit GlobalNamespace__DiffieHellmanUtility__OperationTimer(::StringW operationName) ;

/// @brief Method .ctor addr 0xdb57c4 size 0x84 virtual false final false
 void _ctor(::StringW operationName) ;

/// @brief Method Dispose addr 0xdb5848 size 0xe8 virtual true final true
 void Dispose() ;

/// @brief Method Time addr 0xdb4d7c size 0x8 virtual false final false
static GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__OperationTimer Time(::StringW operation) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::DiffieHellmanUtility
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12679))
// CS Name: DiffieHellmanUtility
class CORDL_TYPE DiffieHellmanUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using OperationTimer = GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__OperationTimer;

using ElipticalCurveKeyPair = GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair;

using DiffieHellmanKeyPair = GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair;

using KeyType = GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__KeyType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DiffieHellmanUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "DiffieHellmanUtility", modifiers: " const&", def_value: None }]
constexpr DiffieHellmanUtility(DiffieHellmanUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DiffieHellmanUtility", modifiers: "&&", def_value: None }]
constexpr DiffieHellmanUtility(DiffieHellmanUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DiffieHellmanUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DiffieHellmanUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DiffieHellmanUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DiffieHellmanUtility& operator=(DiffieHellmanUtility&& o) noexcept = default;
  constexpr DiffieHellmanUtility& operator=(DiffieHellmanUtility const& o) noexcept = default;
                


// Fields

/// @brief Field kMaxDiffieHellmanPublicKeyLength offset 0
static constexpr int32_t  kMaxDiffieHellmanPublicKeyLength{2048};

/// @brief Field kMaxElipticalCurvePublicKeyLength offset 0
static constexpr int32_t  kMaxElipticalCurvePublicKeyLength{256};

static Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get__secureRandom, put=__set__secureRandom))  _secureRandom;

static void __set__secureRandom(Org::BouncyCastle::Security::SecureRandom value) ;

static Org::BouncyCastle::Security::SecureRandom __get__secureRandom() ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __declspec(property(get=__get__dhParameters, put=__set__dhParameters))  _dhParameters;

static void __set__dhParameters(Org::BouncyCastle::Crypto::Parameters::DHParameters value) ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __get__dhParameters() ;

static Org::BouncyCastle::Crypto::Parameters::ECDomainParameters __declspec(property(get=__get__ecParameters, put=__set__ecParameters))  _ecParameters;

static void __set__ecParameters(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters value) ;

static Org::BouncyCastle::Crypto::Parameters::ECDomainParameters __get__ecParameters() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get__ecPointFormats, put=__set__ecPointFormats))  _ecPointFormats;

static void __set__ecPointFormats(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get__ecPointFormats() ;


// Methods

/// @brief Method GenerateKeysAsync addr 0xdb48d4 size 0x194 virtual false final false
static System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair> GenerateKeysAsync(BGNet::Core::ITaskUtility taskUtility, System::Threading::CancellationToken cancellationToken, GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__KeyType keyType) ;

/// @brief Method GenerateKeys addr 0xdb0e5c size 0x64 virtual false final false
static GlobalNamespace::IDiffieHellmanKeyPair GenerateKeys(GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__KeyType keyType) ;

/// @brief Method GenerateDiffieHellmanKeys addr 0xdb4bf8 size 0x184 virtual false final false
static GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair GenerateDiffieHellmanKeys() ;

/// @brief Method GenerateElipticalCurveKeys addr 0xdb4a68 size 0x190 virtual false final false
static GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair GenerateElipticalCurveKeys() ;

/// @brief Method GetPreMasterSecret addr 0xdb4eb4 size 0x19c virtual false final false
static ::ArrayW<uint8_t> GetPreMasterSecret(Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement dhBasicAgreement, ::ArrayW<uint8_t> clientPublicKey) ;

/// @brief Method GetPreMasterSecret addr 0xdb5050 size 0x1d0 virtual false final false
static ::ArrayW<uint8_t> GetPreMasterSecret(Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement ecdhBasicAgreement, ::ArrayW<uint8_t> clientPublicKey) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__KeyType, "", "DiffieHellmanUtility/KeyType");
NEED_NO_BOX(GlobalNamespace::DiffieHellmanUtility);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DiffieHellmanUtility, "", "DiffieHellmanUtility");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair, "", "DiffieHellmanUtility/DiffieHellmanKeyPair");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0, "", "DiffieHellmanUtility/DiffieHellmanKeyPair/<>c__DisplayClass5_0");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair, "", "DiffieHellmanUtility/ElipticalCurveKeyPair");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0, "", "DiffieHellmanUtility/ElipticalCurveKeyPair/<>c__DisplayClass5_0");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__OperationTimer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__OperationTimer, "", "DiffieHellmanUtility/OperationTimer");
