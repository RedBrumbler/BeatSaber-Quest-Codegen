#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ThreadedTask_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace HoudiniEngineUnity {
class HEU_LoadBufferMesh;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
struct HAPI_PartInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
class HEU_LoadBufferInstancer;
}
namespace HoudiniEngineUnity {
class HEU_LoadBufferVolume;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector2;
}
namespace HoudiniEngineUnity {
struct HAPI_ObjectInfo;
}
namespace HoudiniEngineUnity {
struct HEU_GenerateOptions;
}
namespace HoudiniEngineUnity {
class HEU_BaseSync;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace HoudiniEngineUnity {
class HEU_LoadBufferBase;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
struct HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus;
}
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType;
}
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType;
}
namespace HoudiniEngineUnity {
class HEU_ThreadedTaskLoadGeo;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject;
}
// Type: ::LoadType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9770))
// CS Name: HoudiniEngineUnity.HEU_ThreadedTaskLoadGeo::LoadType
struct CORDL_TYPE HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType(int32_t value__) noexcept;


                    constexpr HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType(HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType const&) = default;
                    constexpr HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType(HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType&&) = default;
                    constexpr HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType& operator=(HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType& operator=(HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType_Unwrapped : int32_t {
__FILE = 0,
__NODE = 1,
__ASSET = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType_Unwrapped () const noexcept {
return std::bit_cast<__HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field FILE offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType const FILE;

/// @brief Field NODE offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType const NODE;

/// @brief Field ASSET offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType const ASSET;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::LoadStatus
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9771))
// CS Name: HoudiniEngineUnity.HEU_ThreadedTaskLoadGeo::HEU_LoadData::LoadStatus
struct CORDL_TYPE HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus(int32_t value__) noexcept;


                    constexpr HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus(HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus const&) = default;
                    constexpr HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus(HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus&&) = default;
                    constexpr HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus& operator=(HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus& operator=(HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus_Unwrapped : int32_t {
__NONE = 0,
__STARTED = 1,
__SUCCESS = 2,
__ERROR = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus_Unwrapped () const noexcept {
return std::bit_cast<__HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NONE offset 0
static GlobalNamespace::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus const NONE;

/// @brief Field STARTED offset 0
static GlobalNamespace::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus const STARTED;

/// @brief Field SUCCESS offset 0
static GlobalNamespace::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus const SUCCESS;

/// @brief Field ERROR offset 0
static GlobalNamespace::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus const ERROR;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::HEU_LoadData
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9772))
// CS Name: HoudiniEngineUnity.HEU_ThreadedTaskLoadGeo::HEU_LoadData
class CORDL_TYPE HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using LoadStatus = GlobalNamespace::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData(HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData(HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData& operator=(HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData& operator=(HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__cookNodeID, put=__set__cookNodeID))  _cookNodeID;

constexpr void __set__cookNodeID(int32_t value) ;

constexpr int32_t __get__cookNodeID() const;

 GlobalNamespace::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus __declspec(property(get=__get__loadStatus, put=__set__loadStatus))  _loadStatus;

constexpr void __set__loadStatus(GlobalNamespace::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus value) ;

constexpr GlobalNamespace::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus __get__loadStatus() const;

 System::Text::StringBuilder __declspec(property(get=__get__logStr, put=__set__logStr))  _logStr;

constexpr void __set__logStr(System::Text::StringBuilder value) ;

constexpr System::Text::StringBuilder __get__logStr() const;

 HoudiniEngineUnity::HEU_SessionBase __declspec(property(get=__get__session, put=__set__session))  _session;

constexpr void __set__session(HoudiniEngineUnity::HEU_SessionBase value) ;

constexpr HoudiniEngineUnity::HEU_SessionBase __get__session() const;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject> __declspec(property(get=__get__loadedObjects, put=__set__loadedObjects))  _loadedObjects;

constexpr void __set__loadedObjects(System::Collections::Generic::List_1<HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject> __get__loadedObjects() const;

 System::Collections::Generic::Dictionary_2<int32_t,HoudiniEngineUnity::HEU_LoadBufferBase> __declspec(property(get=__get__idBuffersMap, put=__set__idBuffersMap))  _idBuffersMap;

constexpr void __set__idBuffersMap(System::Collections::Generic::Dictionary_2<int32_t,HoudiniEngineUnity::HEU_LoadBufferBase> value) ;

constexpr System::Collections::Generic::Dictionary_2<int32_t,HoudiniEngineUnity::HEU_LoadBufferBase> __get__idBuffersMap() const;


// Methods

// Ctor Parameters []
explicit HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData() ;

/// @brief Method .ctor addr 0x2077b98 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::HEU_LoadObject
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9773))
// CS Name: HoudiniEngineUnity.HEU_ThreadedTaskLoadGeo::HEU_LoadObject
class CORDL_TYPE HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject(HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject(HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject& operator=(HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject& operator=(HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__objectNodeID, put=__set__objectNodeID))  _objectNodeID;

constexpr void __set__objectNodeID(int32_t value) ;

constexpr int32_t __get__objectNodeID() const;

 int32_t __declspec(property(get=__get__displayNodeID, put=__set__displayNodeID))  _displayNodeID;

constexpr void __set__displayNodeID(int32_t value) ;

constexpr int32_t __get__displayNodeID() const;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_LoadBufferVolume> __declspec(property(get=__get__terrainBuffers, put=__set__terrainBuffers))  _terrainBuffers;

constexpr void __set__terrainBuffers(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_LoadBufferVolume> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_LoadBufferVolume> __get__terrainBuffers() const;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_LoadBufferMesh> __declspec(property(get=__get__meshBuffers, put=__set__meshBuffers))  _meshBuffers;

constexpr void __set__meshBuffers(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_LoadBufferMesh> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_LoadBufferMesh> __get__meshBuffers() const;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_LoadBufferInstancer> __declspec(property(get=__get__instancerBuffers, put=__set__instancerBuffers))  _instancerBuffers;

constexpr void __set__instancerBuffers(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_LoadBufferInstancer> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_LoadBufferInstancer> __get__instancerBuffers() const;


// Methods

// Ctor Parameters []
explicit HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject() ;

/// @brief Method .ctor addr 0x2077ba0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::HEU_LoadCallbackType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9774))
// CS Name: HoudiniEngineUnity.HEU_ThreadedTaskLoadGeo::HEU_LoadCallbackType
struct CORDL_TYPE HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType(int32_t value__) noexcept;


                    constexpr HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType(HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType const&) = default;
                    constexpr HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType(HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType&&) = default;
                    constexpr HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType& operator=(HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType& operator=(HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType_Unwrapped : int32_t {
__PRECOOK = 0,
__POSTCOOK = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType_Unwrapped () const noexcept {
return std::bit_cast<__HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field PRECOOK offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType const PRECOOK;

/// @brief Field POSTCOOK offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType const POSTCOOK;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::HEU_LoadCallback
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9775))
// CS Name: HoudiniEngineUnity.HEU_ThreadedTaskLoadGeo::HEU_LoadCallback
class CORDL_TYPE HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback(HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback(HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback& operator=(HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback& operator=(HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2077ba8 size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2077cd8 size 0x14 virtual true final false
 void Invoke(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData loadData, HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType callbackType) ;

/// @brief Method BeginInvoke addr 0x2077cec size 0x98 virtual true final false
 System::IAsyncResult BeginInvoke(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData loadData, HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType callbackType, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2077d84 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9769))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9776))
// CS Name: HoudiniEngineUnity.HEU_ThreadedTaskLoadGeo
class CORDL_TYPE HEU_ThreadedTaskLoadGeo : public HoudiniEngineUnity::HEU_ThreadedTask {
public:
// Declarations
using HEU_LoadCallback = HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback;

using HEU_LoadCallbackType = HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType;

using HEU_LoadObject = HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject;

using HEU_LoadData = HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData;

using LoadType = HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~HEU_ThreadedTaskLoadGeo() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ThreadedTaskLoadGeo", modifiers: " const&", def_value: None }]
constexpr HEU_ThreadedTaskLoadGeo(HEU_ThreadedTaskLoadGeo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ThreadedTaskLoadGeo", modifiers: "&&", def_value: None }]
constexpr HEU_ThreadedTaskLoadGeo(HEU_ThreadedTaskLoadGeo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_ThreadedTaskLoadGeo(void* ptr) noexcept : HoudiniEngineUnity::HEU_ThreadedTask(ptr) {
}


  constexpr HEU_ThreadedTaskLoadGeo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_ThreadedTaskLoadGeo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_ThreadedTaskLoadGeo& operator=(HEU_ThreadedTaskLoadGeo&& o) noexcept = default;
  constexpr HEU_ThreadedTaskLoadGeo& operator=(HEU_ThreadedTaskLoadGeo const& o) noexcept = default;
                


// Fields

 HoudiniEngineUnity::HEU_BaseSync __declspec(property(get=__get__ownerSync, put=__set__ownerSync))  _ownerSync;

constexpr void __set__ownerSync(HoudiniEngineUnity::HEU_BaseSync value) ;

constexpr HoudiniEngineUnity::HEU_BaseSync __get__ownerSync() const;

 HoudiniEngineUnity::HEU_SessionBase __declspec(property(get=__get__session, put=__set__session))  _session;

constexpr void __set__session(HoudiniEngineUnity::HEU_SessionBase value) ;

constexpr HoudiniEngineUnity::HEU_SessionBase __get__session() const;

 HoudiniEngineUnity::HEU_GenerateOptions __declspec(property(get=__get__generateOptions, put=__set__generateOptions))  _generateOptions;

constexpr void __set__generateOptions(HoudiniEngineUnity::HEU_GenerateOptions value) ;

constexpr HoudiniEngineUnity::HEU_GenerateOptions __get__generateOptions() const;

 HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType __declspec(property(get=__get__loadType, put=__set__loadType))  _loadType;

constexpr void __set__loadType(HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType value) ;

constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType __get__loadType() const;

 ::StringW __declspec(property(get=__get__filePath, put=__set__filePath))  _filePath;

constexpr void __set__filePath(::StringW value) ;

constexpr ::StringW __get__filePath() const;

 HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData __declspec(property(get=__get__loadData, put=__set__loadData))  _loadData;

constexpr void __set__loadData(HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData value) ;

constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData __get__loadData() const;

 HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback __declspec(property(get=__get__loadCallback, put=__set__loadCallback))  _loadCallback;

constexpr void __set__loadCallback(HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback value) ;

constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback __get__loadCallback() const;


// Methods

/// @brief Method SetupLoad addr 0x2072308 size 0xe8 virtual false final false
 void SetupLoad(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_BaseSync ownerSync, HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType loadType, int32_t cookNodeID, ::StringW name, ::StringW filePath) ;

/// @brief Method SetupLoadNode addr 0x206ff2c size 0x14 virtual false final false
 void SetupLoadNode(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_BaseSync ownerSync, int32_t cookNodeID, ::StringW name) ;

/// @brief Method SetupLoadFile addr 0x206fd78 size 0x14 virtual false final false
 void SetupLoadFile(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_BaseSync ownerSync, int32_t cookNodeID, ::StringW filePath) ;

/// @brief Method SetupLoadAsset addr 0x206b374 size 0x14 virtual false final false
 void SetupLoadAsset(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_BaseSync ownerSync, ::StringW assetPath, ::StringW name) ;

/// @brief Method SetLoadCallback addr 0x20723f0 size 0x8 virtual false final false
 void SetLoadCallback(HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback loadCallback) ;

/// @brief Method DoWork addr 0x20723f8 size 0x338 virtual true final false
 void DoWork() ;

/// @brief Method CookNode addr 0x2072848 size 0x190 virtual true final false
 bool CookNode(HoudiniEngineUnity::HEU_SessionBase session, int32_t cookNodeID) ;

/// @brief Method LoadObjectBuffers addr 0x20729e4 size 0x1cc virtual true final false
 bool LoadObjectBuffers(HoudiniEngineUnity::HEU_SessionBase session, ByRef<HoudiniEngineUnity::HAPI_ObjectInfo> objectInfo) ;

/// @brief Method LoadNodeBuffer addr 0x2072bb0 size 0x2a0 virtual true final false
 bool LoadNodeBuffer(HoudiniEngineUnity::HEU_SessionBase session, int32_t nodeID, HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject loadObject) ;

/// @brief Method BuildBufferIDsMap addr 0x20750b4 size 0x4c8 virtual true final false
 void BuildBufferIDsMap(HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData loadData) ;

/// @brief Method DoFileLoad addr 0x207557c size 0x20c virtual true final false
 bool DoFileLoad() ;

/// @brief Method DoAssetLoad addr 0x207591c size 0x32c virtual true final false
 bool DoAssetLoad() ;

/// @brief Method QueryParts addr 0x2072e50 size 0x484 virtual false final false
 bool QueryParts(int32_t nodeID, ByRef<System::Collections::Generic::List_1<HoudiniEngineUnity::HAPI_PartInfo>> meshParts, ByRef<System::Collections::Generic::List_1<HoudiniEngineUnity::HAPI_PartInfo>> volumeParts, ByRef<System::Collections::Generic::List_1<HoudiniEngineUnity::HAPI_PartInfo>> instancerParts, ByRef<System::Collections::Generic::List_1<HoudiniEngineUnity::HAPI_PartInfo>> curveParts, ByRef<System::Collections::Generic::List_1<HoudiniEngineUnity::HAPI_PartInfo>> scatterInstancerParts) ;

/// @brief Method OnComplete addr 0x2075c48 size 0x90 virtual true final false
 void OnComplete() ;

/// @brief Method OnStopped addr 0x2075cd8 size 0x84 virtual true final false
 void OnStopped() ;

/// @brief Method CleanUp addr 0x2075d5c size 0x8 virtual true final false
 void CleanUp() ;

/// @brief Method CreateLogString addr 0x2075d64 size 0xa4 virtual false final false
 ::StringW CreateLogString(GlobalNamespace::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus status, ::StringW logStr) ;

/// @brief Method AppendLog addr 0x2072730 size 0x118 virtual false final false
 void AppendLog(GlobalNamespace::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus status, ::StringW logStr) ;

/// @brief Method SetLog addr 0x2075e08 size 0x150 virtual false final false
 void SetLog(GlobalNamespace::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus status, ::StringW logStr) ;

/// @brief Method CreateFileNode addr 0x2075788 size 0x8c virtual false final false
 bool CreateFileNode(ByRef<int32_t> fileNodeID) ;

/// @brief Method GetCookNodeID addr 0x2075f58 size 0x1c virtual true final false
 int32_t GetCookNodeID() ;

/// @brief Method GetDisplayNodeID addr 0x2075814 size 0x50 virtual false final false
 int32_t GetDisplayNodeID(int32_t objNodeID) ;

/// @brief Method SetFileParm addr 0x2075864 size 0xb8 virtual false final false
 bool SetFileParm(int32_t fileNodeID, ::StringW filePath) ;

/// @brief Method Sleep addr 0x20729d8 size 0xc virtual false final false
 void Sleep() ;

/// @brief Method GenerateTerrainBuffers addr 0x20737e8 size 0x14a0 virtual false final false
 bool GenerateTerrainBuffers(HoudiniEngineUnity::HEU_SessionBase session, int32_t nodeID, System::Collections::Generic::List_1<HoudiniEngineUnity::HAPI_PartInfo> volumeParts, System::Collections::Generic::List_1<HoudiniEngineUnity::HAPI_PartInfo> scatterInstancerParts, ByRef<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_LoadBufferVolume>> volumeBuffers) ;

/// @brief Method LoadStringFromAttribute addr 0x2075f74 size 0x84 virtual false final false
 void LoadStringFromAttribute(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attrName, ByRef<::StringW> strValue) ;

/// @brief Method LoadFloatFromAttribute addr 0x2075ff8 size 0x128 virtual false final false
 void LoadFloatFromAttribute(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attrName, ByRef<float_t> floatValue) ;

/// @brief Method LoadLayerColorFromAttribute addr 0x2076120 size 0x160 virtual false final false
 void LoadLayerColorFromAttribute(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attrName, ByRef<UnityEngine::Color> colorValue) ;

/// @brief Method LoadLayerVector2FromAttribute addr 0x2076280 size 0x138 virtual false final false
 void LoadLayerVector2FromAttribute(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attrName, ByRef<UnityEngine::Vector2> vectorValue) ;

/// @brief Method GenerateMeshBuffers addr 0x20732d4 size 0x514 virtual false final false
 bool GenerateMeshBuffers(HoudiniEngineUnity::HEU_SessionBase session, int32_t nodeID, System::Collections::Generic::List_1<HoudiniEngineUnity::HAPI_PartInfo> meshParts, bool bSplitPoints, bool bUseLODGroups, bool bGenerateUVs, bool bGenerateTangents, bool bGenerateNormals, ByRef<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_LoadBufferMesh>> meshBuffers) ;

/// @brief Method GenerateInstancerBuffers addr 0x2074c88 size 0x42c virtual false final false
 bool GenerateInstancerBuffers(HoudiniEngineUnity::HEU_SessionBase session, int32_t nodeID, System::Collections::Generic::List_1<HoudiniEngineUnity::HAPI_PartInfo> instancerParts, ByRef<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_LoadBufferInstancer>> instancerBuffers) ;

/// @brief Method GeneratePartsInstancerBuffer addr 0x207651c size 0x2c0 virtual false final false
 HoudiniEngineUnity::HEU_LoadBufferInstancer GeneratePartsInstancerBuffer(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW partName, HoudiniEngineUnity::HAPI_PartInfo partInfo) ;

/// @brief Method GeneratePointAttributeInstancerBuffer addr 0x20767dc size 0x13bc virtual false final false
 HoudiniEngineUnity::HEU_LoadBufferInstancer GeneratePointAttributeInstancerBuffer(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW partName, HoudiniEngineUnity::HAPI_PartInfo partInfo) ;

/// @brief Method GetLoadBufferVolumeFromTileIndex addr 0x20763b8 size 0x164 virtual false final false
static HoudiniEngineUnity::HEU_LoadBufferVolume GetLoadBufferVolumeFromTileIndex(int32_t tileIndex, System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_LoadBufferVolume> buffers) ;

// Ctor Parameters []
explicit HEU_ThreadedTaskLoadGeo() ;

/// @brief Method .ctor addr 0x206b2d8 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus, "HoudiniEngineUnity", "HEU_ThreadedTaskLoadGeo/HEU_LoadData/LoadStatus");
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType, "HoudiniEngineUnity", "HEU_ThreadedTaskLoadGeo/HEU_LoadCallbackType");
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType, "HoudiniEngineUnity", "HEU_ThreadedTaskLoadGeo/LoadType");
NEED_NO_BOX(HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo, "HoudiniEngineUnity", "HEU_ThreadedTaskLoadGeo");
NEED_NO_BOX(HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback, "HoudiniEngineUnity", "HEU_ThreadedTaskLoadGeo/HEU_LoadCallback");
NEED_NO_BOX(HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData, "HoudiniEngineUnity", "HEU_ThreadedTaskLoadGeo/HEU_LoadData");
NEED_NO_BOX(HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject, "HoudiniEngineUnity", "HEU_ThreadedTaskLoadGeo/HEU_LoadObject");
