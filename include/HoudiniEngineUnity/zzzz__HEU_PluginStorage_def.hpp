#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
class HEU_SessionData;
}
// Forward declare root types
namespace HoudiniEngineUnity {
template<typename T>
class HoudiniEngineUnity__HEU_PluginStorage__StoreDataArray_1;
}
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_PluginStorage__DataType;
}
namespace HoudiniEngineUnity {
class HEU_PluginStorage;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_PluginStorage__StoreData;
}
namespace HoudiniEngineUnity {
template<::cordl_internals::il2cpp_reference_type T>
class HoudiniEngineUnity__HEU_PluginStorage__StoreDataArray_1<T>;
}
// Type: ::DataType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9637))
// CS Name: HoudiniEngineUnity.HEU_PluginStorage::DataType
struct CORDL_TYPE HoudiniEngineUnity__HEU_PluginStorage__DataType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HoudiniEngineUnity__HEU_PluginStorage__DataType(int32_t value__) noexcept;


                    constexpr HoudiniEngineUnity__HEU_PluginStorage__DataType(HoudiniEngineUnity__HEU_PluginStorage__DataType const&) = default;
                    constexpr HoudiniEngineUnity__HEU_PluginStorage__DataType(HoudiniEngineUnity__HEU_PluginStorage__DataType&&) = default;
                    constexpr HoudiniEngineUnity__HEU_PluginStorage__DataType& operator=(HoudiniEngineUnity__HEU_PluginStorage__DataType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HoudiniEngineUnity__HEU_PluginStorage__DataType& operator=(HoudiniEngineUnity__HEU_PluginStorage__DataType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_PluginStorage__DataType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HoudiniEngineUnity__HEU_PluginStorage__DataType_Unwrapped : int32_t {
__BOOL = 0,
__INT = 1,
__LONG = 2,
__FLOAT = 3,
__STRING = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HoudiniEngineUnity__HEU_PluginStorage__DataType_Unwrapped () const noexcept {
return std::bit_cast<__HoudiniEngineUnity__HEU_PluginStorage__DataType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field BOOL offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_PluginStorage__DataType const BOOL;

/// @brief Field INT offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_PluginStorage__DataType const INT;

/// @brief Field LONG offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_PluginStorage__DataType const LONG;

/// @brief Field FLOAT offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_PluginStorage__DataType const FLOAT;

/// @brief Field STRING offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_PluginStorage__DataType const STRING;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::StoreData
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9638))
// CS Name: HoudiniEngineUnity.HEU_PluginStorage::StoreData
class CORDL_TYPE HoudiniEngineUnity__HEU_PluginStorage__StoreData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~HoudiniEngineUnity__HEU_PluginStorage__StoreData() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_PluginStorage__StoreData", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_PluginStorage__StoreData(HoudiniEngineUnity__HEU_PluginStorage__StoreData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_PluginStorage__StoreData", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_PluginStorage__StoreData(HoudiniEngineUnity__HEU_PluginStorage__StoreData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_PluginStorage__StoreData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_PluginStorage__StoreData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_PluginStorage__StoreData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_PluginStorage__StoreData& operator=(HoudiniEngineUnity__HEU_PluginStorage__StoreData&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_PluginStorage__StoreData& operator=(HoudiniEngineUnity__HEU_PluginStorage__StoreData const& o) noexcept = default;
                


// Fields

 HoudiniEngineUnity::HoudiniEngineUnity__HEU_PluginStorage__DataType __declspec(property(get=__get__type, put=__set__type))  _type;

constexpr void __set__type(HoudiniEngineUnity::HoudiniEngineUnity__HEU_PluginStorage__DataType value) ;

constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_PluginStorage__DataType __get__type() const;

 ::StringW __declspec(property(get=__get__valueStr, put=__set__valueStr))  _valueStr;

constexpr void __set__valueStr(::StringW value) ;

constexpr ::StringW __get__valueStr() const;


// Methods

// Ctor Parameters []
explicit HoudiniEngineUnity__HEU_PluginStorage__StoreData() ;

/// @brief Method .ctor addr 0x2054fe8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::StoreDataArray`1
// Type: HoudiniEngineUnity::HEU_PluginStorage
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9640))
// CS Name: HoudiniEngineUnity.HEU_PluginStorage
class CORDL_TYPE HEU_PluginStorage : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename T>
using StoreDataArray_1 = HoudiniEngineUnity::HoudiniEngineUnity__HEU_PluginStorage__StoreDataArray_1<T>;

using StoreData = HoudiniEngineUnity::HoudiniEngineUnity__HEU_PluginStorage__StoreData;

using DataType = HoudiniEngineUnity::HoudiniEngineUnity__HEU_PluginStorage__DataType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~HEU_PluginStorage() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_PluginStorage", modifiers: " const&", def_value: None }]
constexpr HEU_PluginStorage(HEU_PluginStorage const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_PluginStorage", modifiers: "&&", def_value: None }]
constexpr HEU_PluginStorage(HEU_PluginStorage&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_PluginStorage(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_PluginStorage& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_PluginStorage& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_PluginStorage& operator=(HEU_PluginStorage&& o) noexcept = default;
  constexpr HEU_PluginStorage& operator=(HEU_PluginStorage const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::Dictionary_2<::StringW,HoudiniEngineUnity::HoudiniEngineUnity__HEU_PluginStorage__StoreData> __declspec(property(get=__get__dataMap, put=__set__dataMap))  _dataMap;

constexpr void __set__dataMap(System::Collections::Generic::Dictionary_2<::StringW,HoudiniEngineUnity::HoudiniEngineUnity__HEU_PluginStorage__StoreData> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,HoudiniEngineUnity::HoudiniEngineUnity__HEU_PluginStorage__StoreData> __get__dataMap() const;

 System::Collections::Generic::Dictionary_2<::StringW,::StringW> __declspec(property(get=__get__envPathMap, put=__set__envPathMap))  _envPathMap;

constexpr void __set__envPathMap(System::Collections::Generic::Dictionary_2<::StringW,::StringW> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,::StringW> __get__envPathMap() const;

 bool __declspec(property(get=__get__requiresSave, put=__set__requiresSave))  _requiresSave;

constexpr void __set__requiresSave(bool value) ;

constexpr bool __get__requiresSave() const;

static HoudiniEngineUnity::HEU_PluginStorage __declspec(property(get=__get__instance, put=__set__instance))  _instance;

static void __set__instance(HoudiniEngineUnity::HEU_PluginStorage value) ;

static HoudiniEngineUnity::HEU_PluginStorage __get__instance() ;

/// @brief Field PluginSettingsLine1 offset 0
static constexpr ::ConstString  PluginSettingsLine1{u"Houdini Engine for Unity Plugin Settings"};

/// @brief Field PluginSettingsLine2 offset 0
static constexpr ::ConstString  PluginSettingsLine2{u"Version="};

/// @brief Field PluginSettingsVersion offset 0
static constexpr ::ConstString  PluginSettingsVersion{u"1.0"};


// Properties

 bool __declspec(property(get=get_RequiresSave))  RequiresSave;

static HoudiniEngineUnity::HEU_PluginStorage __declspec(property(get=get_Instance))  Instance;


// Methods

/// @brief Method GetEnvironmentPathMap addr 0x2054454 size 0x8 virtual false final false
 System::Collections::Generic::Dictionary_2<::StringW,::StringW> GetEnvironmentPathMap() ;

/// @brief Method get_RequiresSave addr 0x205445c size 0x8 virtual false final false
 bool get_RequiresSave() ;

/// @brief Method get_Instance addr 0x204b8b4 size 0x5c virtual false final false
static HoudiniEngineUnity::HEU_PluginStorage get_Instance() ;

/// @brief Method InstantiateAndLoad addr 0x2054464 size 0xd4 virtual false final false
static void InstantiateAndLoad() ;

/// @brief Method SetCurrentCulture addr 0x20539c0 size 0x10c virtual false final false
static void SetCurrentCulture(bool useInvariant) ;

/// @brief Method GetJSONArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 ::ArrayW<T> GetJSONArray(::StringW jsonArray) ;

/// @brief Method Set addr 0x2050b28 size 0xcc virtual false final false
 void Set(::StringW key, bool value) ;

/// @brief Method Set addr 0x205224c size 0xd0 virtual false final false
 void Set(::StringW key, int32_t value) ;

/// @brief Method Set addr 0x2054ff4 size 0xd0 virtual false final false
 void Set(::StringW key, int64_t value) ;

/// @brief Method Set addr 0x20518c0 size 0xd8 virtual false final false
 void Set(::StringW key, float_t value) ;

/// @brief Method Set addr 0x205050c size 0xa0 virtual false final false
 void Set(::StringW key, ::StringW value) ;

/// @brief Method Set addr 0x2052ba4 size 0x154 virtual false final false
 void Set(::StringW key, System::Collections::Generic::List_1<::StringW> values, char16_t delimiter) ;

/// @brief Method Get addr 0x20509e0 size 0xf4 virtual false final false
 bool Get(::StringW key, ByRef<bool> value, bool defaultValue) ;

/// @brief Method Get addr 0x2052104 size 0xf4 virtual false final false
 bool Get(::StringW key, ByRef<int32_t> value, int32_t defaultValue) ;

/// @brief Method Get addr 0x20550c4 size 0xf4 virtual false final false
 bool Get(::StringW key, ByRef<int64_t> value, int64_t defaultValue) ;

/// @brief Method Get addr 0x2051738 size 0x134 virtual false final false
 bool Get(::StringW key, ByRef<float_t> value, float_t defaultValue) ;

/// @brief Method Get addr 0x20503ec size 0xc0 virtual false final false
 bool Get(::StringW key, ByRef<::StringW> value, ::StringW defaultValue) ;

/// @brief Method Get addr 0x2052980 size 0x1cc virtual false final false
 bool Get(::StringW key, ByRef<System::Collections::Generic::List_1<::StringW>> values, char16_t delimiter) ;

/// @brief Method MarkDirtyForSave addr 0x2054ff0 size 0x4 virtual false final false
 void MarkDirtyForSave() ;

/// @brief Method SaveIfRequired addr 0x20551b8 size 0x60 virtual false final false
static void SaveIfRequired() ;

/// @brief Method SettingsFilePath addr 0x20556e0 size 0xd4 virtual false final false
static ::StringW SettingsFilePath() ;

/// @brief Method SavePluginData addr 0x2055218 size 0x4c8 virtual false final false
 bool SavePluginData() ;

/// @brief Method LoadPluginData addr 0x20545b4 size 0xa34 virtual false final false
 bool LoadPluginData() ;

/// @brief Method ReadFromEditorPrefs addr 0x20557b4 size 0x8 virtual false final false
 bool ReadFromEditorPrefs() ;

/// @brief Method ClearPluginData addr 0x20557bc size 0xb0 virtual false final false
static void ClearPluginData() ;

/// @brief Method LoadFromSavedFile addr 0x205586c size 0x58 virtual false final false
static void LoadFromSavedFile() ;

/// @brief Method SessionFilePath addr 0x20558c4 size 0xd4 virtual false final false
static ::StringW SessionFilePath() ;

/// @brief Method SaveAllSessionData addr 0x2055998 size 0x4 virtual false final false
static void SaveAllSessionData(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_SessionBase> allSessions) ;

/// @brief Method LoadAllSessionData addr 0x205599c size 0x70 virtual false final false
static System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_SessionData> LoadAllSessionData() ;

/// @brief Method DeleteAllSavedSessionData addr 0x2055a0c size 0x4 virtual false final false
static void DeleteAllSavedSessionData() ;

/// @brief Method LoadAssetEnvironmentPaths addr 0x20505ac size 0x3d0 virtual false final false
 void LoadAssetEnvironmentPaths() ;

/// @brief Method ConvertRealPathToEnvKeyedPath addr 0x2055a10 size 0x1e8 virtual false final false
 ::StringW ConvertRealPathToEnvKeyedPath(::StringW inPath) ;

/// @brief Method ConvertEnvKeyedPathToReal addr 0x204b910 size 0x230 virtual false final false
 ::StringW ConvertEnvKeyedPathToReal(::StringW inPath) ;

// Ctor Parameters []
explicit HEU_PluginStorage() ;

/// @brief Method .ctor addr 0x2054538 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::StoreDataArray`1
namespace HoudiniEngineUnity {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9639))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9639), inst: 2 })
// CS Name: HoudiniEngineUnity.HEU_PluginStorage::StoreDataArray`1
class CORDL_TYPE HoudiniEngineUnity__HEU_PluginStorage__StoreDataArray_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~HoudiniEngineUnity__HEU_PluginStorage__StoreDataArray_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_PluginStorage__StoreDataArray_1", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_PluginStorage__StoreDataArray_1(HoudiniEngineUnity__HEU_PluginStorage__StoreDataArray_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_PluginStorage__StoreDataArray_1", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_PluginStorage__StoreDataArray_1(HoudiniEngineUnity__HEU_PluginStorage__StoreDataArray_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_PluginStorage__StoreDataArray_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_PluginStorage__StoreDataArray_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_PluginStorage__StoreDataArray_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_PluginStorage__StoreDataArray_1& operator=(HoudiniEngineUnity__HEU_PluginStorage__StoreDataArray_1&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_PluginStorage__StoreDataArray_1& operator=(HoudiniEngineUnity__HEU_PluginStorage__StoreDataArray_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<T> __declspec(property(get=__get__array, put=__set__array))  _array;

constexpr void __set__array(::ArrayW<T> value) ;

constexpr ::ArrayW<T> __get__array() const;


// Methods

// Ctor Parameters []
explicit HoudiniEngineUnity__HEU_PluginStorage__StoreDataArray_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(HoudiniEngineUnity::HoudiniEngineUnity__HEU_PluginStorage__StoreDataArray_1, "HoudiniEngineUnity", "HEU_PluginStorage/StoreDataArray`1");
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_PluginStorage__DataType, "HoudiniEngineUnity", "HEU_PluginStorage/DataType");
NEED_NO_BOX(HoudiniEngineUnity::HEU_PluginStorage);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_PluginStorage, "HoudiniEngineUnity", "HEU_PluginStorage");
NEED_NO_BOX(HoudiniEngineUnity::HoudiniEngineUnity__HEU_PluginStorage__StoreData);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_PluginStorage__StoreData, "HoudiniEngineUnity", "HEU_PluginStorage/StoreData");
