#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace Oculus::Platform {
struct RoomMembershipLockStatus;
}
namespace Oculus::Platform {
struct ChallengeVisibility;
}
namespace Oculus::Platform {
struct Oculus__Platform__Message__MessageType;
}
namespace Oculus::Platform {
struct TimeWindow;
}
namespace Oculus::Platform {
struct CloudStorageDataStatus;
}
namespace Oculus::Platform {
struct ReportRequestResponse;
}
namespace Oculus::Platform {
struct LivestreamingStartStatus;
}
namespace Oculus::Platform {
struct UserOrdering;
}
namespace Oculus::Platform {
struct LivestreamingMicrophoneStatus;
}
namespace Oculus::Platform {
struct RoomType;
}
namespace Oculus::Platform {
struct VoipSampleRate;
}
namespace Oculus::Platform {
struct AbuseReportType;
}
namespace Oculus::Platform {
struct RoomJoinPolicy;
}
namespace Oculus::Platform {
struct VoipMuteState;
}
namespace Oculus::Platform {
struct NetSyncConnectionStatus;
}
namespace Oculus::Platform {
struct NetSyncDisconnectReason;
}
namespace System {
class Array;
}
namespace Oculus::Platform {
struct PartyUpdateAction;
}
namespace Oculus::Platform {
struct LivestreamingAudience;
}
namespace Oculus::Platform {
struct RoomJoinability;
}
namespace Oculus::Platform {
struct ChallengeCreationType;
}
namespace Oculus::Platform {
struct SystemVoipStatus;
}
namespace Oculus::Platform {
struct MediaContentType;
}
namespace Oculus::Platform {
struct NetSyncVoipMicSource;
}
namespace Oculus::Platform {
struct PeerConnectionState;
}
namespace Oculus::Platform {
struct LeaderboardStartAt;
}
namespace System {
struct DateTime;
}
namespace Oculus::Platform {
struct AchievementType;
}
namespace Oculus::Platform {
struct UserPresenceStatus;
}
namespace Oculus::Platform {
struct ChallengeViewerFilter;
}
namespace Oculus::Platform {
struct SendPolicy;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace Oculus::Platform {
struct AbuseReportVideoMode;
}
namespace Oculus::Platform {
struct VoipDtxState;
}
namespace Oculus::Platform {
struct LaunchType;
}
namespace Oculus::Platform {
struct LogEventName;
}
namespace Oculus::Platform {
struct VoipBitrate;
}
namespace Oculus::Platform {
struct ShareMediaStatus;
}
namespace Oculus::Platform {
struct PlatformInitializeResult;
}
namespace Oculus::Platform {
struct LaunchResult;
}
namespace System::Text {
class UTF8Encoding;
}
namespace Oculus::Platform {
struct NetSyncVoipStreamMode;
}
namespace Oculus::Platform {
struct InitConfigOptions;
}
namespace Oculus::Platform {
struct LeaderboardFilterType;
}
namespace Oculus::Platform {
struct CloudStorageUpdateStatus;
}
namespace Oculus::Platform {
struct MatchmakingStatApproach;
}
namespace Oculus::Platform {
struct ServiceProvider;
}
namespace Oculus::Platform {
struct SdkAccountType;
}
namespace Oculus::Platform {
struct MultiplayerErrorErrorKey;
}
namespace Oculus::Platform {
struct RichPresenceExtraContext;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace Oculus::Platform {
struct KeyValuePairType;
}
namespace Oculus::Platform {
struct MatchmakingCriterionImportance;
}
// Forward declare root types
namespace Oculus::Platform {
class CAPI;
}
namespace Oculus::Platform {
class Oculus__Platform__CAPI__FilterCallback;
}
namespace Oculus::Platform {
struct Oculus__Platform__CAPI__OculusInitParams;
}
namespace Oculus::Platform {
struct Oculus__Platform__CAPI__ovrKeyValuePair;
}
namespace Oculus::Platform {
struct Oculus__Platform__CAPI__ovrMatchmakingCriterion;
}
namespace Oculus::Platform {
struct Oculus__Platform__CAPI__ovrMatchmakingCustomQueryData;
}
namespace Oculus::Platform {
struct Oculus__Platform__CAPI__ovrNetSyncVec3;
}
// Type: ::ovrKeyValuePair
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13189))
// CS Name: Oculus.Platform.CAPI::ovrKeyValuePair
struct CORDL_TYPE Oculus__Platform__CAPI__ovrKeyValuePair : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "key_", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "valueType_", ty: "Oculus::Platform::KeyValuePairType", modifiers: "", def_value: None }, CppParam { name: "stringValue_", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "intValue_", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "doubleValue_", ty: "double_t", modifiers: "", def_value: None }]
constexpr Oculus__Platform__CAPI__ovrKeyValuePair(::StringW key_, Oculus::Platform::KeyValuePairType valueType_, ::StringW stringValue_, int32_t intValue_, double_t doubleValue_) noexcept;


                    constexpr Oculus__Platform__CAPI__ovrKeyValuePair(Oculus__Platform__CAPI__ovrKeyValuePair const&) = default;
                    constexpr Oculus__Platform__CAPI__ovrKeyValuePair(Oculus__Platform__CAPI__ovrKeyValuePair&&) = default;
                    constexpr Oculus__Platform__CAPI__ovrKeyValuePair& operator=(Oculus__Platform__CAPI__ovrKeyValuePair const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Oculus__Platform__CAPI__ovrKeyValuePair& operator=(Oculus__Platform__CAPI__ovrKeyValuePair&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Oculus__Platform__CAPI__ovrKeyValuePair(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_key_, put=__set_key_))  key_;

constexpr void __set_key_(::StringW value) ;

constexpr ::StringW __get_key_() const;

 Oculus::Platform::KeyValuePairType __declspec(property(get=__get_valueType_, put=__set_valueType_))  valueType_;

constexpr void __set_valueType_(Oculus::Platform::KeyValuePairType value) ;

constexpr Oculus::Platform::KeyValuePairType __get_valueType_() const;

 ::StringW __declspec(property(get=__get_stringValue_, put=__set_stringValue_))  stringValue_;

constexpr void __set_stringValue_(::StringW value) ;

constexpr ::StringW __get_stringValue_() const;

 int32_t __declspec(property(get=__get_intValue_, put=__set_intValue_))  intValue_;

constexpr void __set_intValue_(int32_t value) ;

constexpr int32_t __get_intValue_() const;

 double_t __declspec(property(get=__get_doubleValue_, put=__set_doubleValue_))  doubleValue_;

constexpr void __set_doubleValue_(double_t value) ;

constexpr double_t __get_doubleValue_() const;


// Methods

/// @brief Method .ctor addr 0x2584f5c size 0x18 virtual false final false
 void _ctor(::StringW key, ::StringW value) ;

/// @brief Method .ctor addr 0x2584a3c size 0x1c virtual false final false
 void _ctor(::StringW key, int32_t value) ;

/// @brief Method .ctor addr 0x2584f74 size 0x1c virtual false final false
 void _ctor(::StringW key, double_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
// Type: ::ovrNetSyncVec3
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13190))
// CS Name: Oculus.Platform.CAPI::ovrNetSyncVec3
struct CORDL_TYPE Oculus__Platform__CAPI__ovrNetSyncVec3 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: None }]
constexpr Oculus__Platform__CAPI__ovrNetSyncVec3(float_t x, float_t y, float_t z) noexcept;


                    constexpr Oculus__Platform__CAPI__ovrNetSyncVec3(Oculus__Platform__CAPI__ovrNetSyncVec3 const&) = default;
                    constexpr Oculus__Platform__CAPI__ovrNetSyncVec3(Oculus__Platform__CAPI__ovrNetSyncVec3&&) = default;
                    constexpr Oculus__Platform__CAPI__ovrNetSyncVec3& operator=(Oculus__Platform__CAPI__ovrNetSyncVec3 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Oculus__Platform__CAPI__ovrNetSyncVec3& operator=(Oculus__Platform__CAPI__ovrNetSyncVec3&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Oculus__Platform__CAPI__ovrNetSyncVec3(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(float_t value) ;

constexpr float_t __get_x() const;

 float_t __declspec(property(get=__get_y, put=__set_y))  y;

constexpr void __set_y(float_t value) ;

constexpr float_t __get_y() const;

 float_t __declspec(property(get=__get_z, put=__set_z))  z;

constexpr void __set_z(float_t value) ;

constexpr float_t __get_z() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
// Type: ::ovrMatchmakingCriterion
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13191))
// CS Name: Oculus.Platform.CAPI::ovrMatchmakingCriterion
struct CORDL_TYPE Oculus__Platform__CAPI__ovrMatchmakingCriterion : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "key_", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "importance_", ty: "Oculus::Platform::MatchmakingCriterionImportance", modifiers: "", def_value: None }, CppParam { name: "parameterArray", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "parameterArrayCount", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr Oculus__Platform__CAPI__ovrMatchmakingCriterion(::StringW key_, Oculus::Platform::MatchmakingCriterionImportance importance_, ::cordl_internals::intptr_t parameterArray, uint32_t parameterArrayCount) noexcept;


                    constexpr Oculus__Platform__CAPI__ovrMatchmakingCriterion(Oculus__Platform__CAPI__ovrMatchmakingCriterion const&) = default;
                    constexpr Oculus__Platform__CAPI__ovrMatchmakingCriterion(Oculus__Platform__CAPI__ovrMatchmakingCriterion&&) = default;
                    constexpr Oculus__Platform__CAPI__ovrMatchmakingCriterion& operator=(Oculus__Platform__CAPI__ovrMatchmakingCriterion const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Oculus__Platform__CAPI__ovrMatchmakingCriterion& operator=(Oculus__Platform__CAPI__ovrMatchmakingCriterion&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Oculus__Platform__CAPI__ovrMatchmakingCriterion(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_key_, put=__set_key_))  key_;

constexpr void __set_key_(::StringW value) ;

constexpr ::StringW __get_key_() const;

 Oculus::Platform::MatchmakingCriterionImportance __declspec(property(get=__get_importance_, put=__set_importance_))  importance_;

constexpr void __set_importance_(Oculus::Platform::MatchmakingCriterionImportance value) ;

constexpr Oculus::Platform::MatchmakingCriterionImportance __get_importance_() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_parameterArray, put=__set_parameterArray))  parameterArray;

constexpr void __set_parameterArray(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_parameterArray() const;

 uint32_t __declspec(property(get=__get_parameterArrayCount, put=__set_parameterArrayCount))  parameterArrayCount;

constexpr void __set_parameterArrayCount(uint32_t value) ;

constexpr uint32_t __get_parameterArrayCount() const;


// Methods

/// @brief Method .ctor addr 0x25aa184 size 0x6c virtual false final false
 void _ctor(::StringW key, Oculus::Platform::MatchmakingCriterionImportance importance) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
// Type: ::ovrMatchmakingCustomQueryData
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13192))
// CS Name: Oculus.Platform.CAPI::ovrMatchmakingCustomQueryData
struct CORDL_TYPE Oculus__Platform__CAPI__ovrMatchmakingCustomQueryData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "dataArray", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "dataArrayCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "criterionArray", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "criterionArrayCount", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr Oculus__Platform__CAPI__ovrMatchmakingCustomQueryData(::cordl_internals::intptr_t dataArray, uint32_t dataArrayCount, ::cordl_internals::intptr_t criterionArray, uint32_t criterionArrayCount) noexcept;


                    constexpr Oculus__Platform__CAPI__ovrMatchmakingCustomQueryData(Oculus__Platform__CAPI__ovrMatchmakingCustomQueryData const&) = default;
                    constexpr Oculus__Platform__CAPI__ovrMatchmakingCustomQueryData(Oculus__Platform__CAPI__ovrMatchmakingCustomQueryData&&) = default;
                    constexpr Oculus__Platform__CAPI__ovrMatchmakingCustomQueryData& operator=(Oculus__Platform__CAPI__ovrMatchmakingCustomQueryData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Oculus__Platform__CAPI__ovrMatchmakingCustomQueryData& operator=(Oculus__Platform__CAPI__ovrMatchmakingCustomQueryData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Oculus__Platform__CAPI__ovrMatchmakingCustomQueryData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_dataArray, put=__set_dataArray))  dataArray;

constexpr void __set_dataArray(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_dataArray() const;

 uint32_t __declspec(property(get=__get_dataArrayCount, put=__set_dataArrayCount))  dataArrayCount;

constexpr void __set_dataArrayCount(uint32_t value) ;

constexpr uint32_t __get_dataArrayCount() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_criterionArray, put=__set_criterionArray))  criterionArray;

constexpr void __set_criterionArray(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_criterionArray() const;

 uint32_t __declspec(property(get=__get_criterionArrayCount, put=__set_criterionArrayCount))  criterionArrayCount;

constexpr void __set_criterionArrayCount(uint32_t value) ;

constexpr uint32_t __get_criterionArrayCount() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
// Type: ::OculusInitParams
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13193))
// CS Name: Oculus.Platform.CAPI::OculusInitParams
struct CORDL_TYPE Oculus__Platform__CAPI__OculusInitParams : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "sType", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "email", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "password", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "appId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "uriPrefixOverride", ty: "::StringW", modifiers: "", def_value: None }]
constexpr Oculus__Platform__CAPI__OculusInitParams(int32_t sType, ::StringW email, ::StringW password, uint64_t appId, ::StringW uriPrefixOverride) noexcept;


                    constexpr Oculus__Platform__CAPI__OculusInitParams(Oculus__Platform__CAPI__OculusInitParams const&) = default;
                    constexpr Oculus__Platform__CAPI__OculusInitParams(Oculus__Platform__CAPI__OculusInitParams&&) = default;
                    constexpr Oculus__Platform__CAPI__OculusInitParams& operator=(Oculus__Platform__CAPI__OculusInitParams const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Oculus__Platform__CAPI__OculusInitParams& operator=(Oculus__Platform__CAPI__OculusInitParams&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Oculus__Platform__CAPI__OculusInitParams(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_sType, put=__set_sType))  sType;

constexpr void __set_sType(int32_t value) ;

constexpr int32_t __get_sType() const;

 ::StringW __declspec(property(get=__get_email, put=__set_email))  email;

constexpr void __set_email(::StringW value) ;

constexpr ::StringW __get_email() const;

 ::StringW __declspec(property(get=__get_password, put=__set_password))  password;

constexpr void __set_password(::StringW value) ;

constexpr ::StringW __get_password() const;

 uint64_t __declspec(property(get=__get_appId, put=__set_appId))  appId;

constexpr void __set_appId(uint64_t value) ;

constexpr uint64_t __get_appId() const;

 ::StringW __declspec(property(get=__get_uriPrefixOverride, put=__set_uriPrefixOverride))  uriPrefixOverride;

constexpr void __set_uriPrefixOverride(::StringW value) ;

constexpr ::StringW __get_uriPrefixOverride() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
// Type: ::FilterCallback
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13194))
// CS Name: Oculus.Platform.CAPI::FilterCallback
class CORDL_TYPE Oculus__Platform__CAPI__FilterCallback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Oculus__Platform__CAPI__FilterCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "Oculus__Platform__CAPI__FilterCallback", modifiers: " const&", def_value: None }]
constexpr Oculus__Platform__CAPI__FilterCallback(Oculus__Platform__CAPI__FilterCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Oculus__Platform__CAPI__FilterCallback", modifiers: "&&", def_value: None }]
constexpr Oculus__Platform__CAPI__FilterCallback(Oculus__Platform__CAPI__FilterCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Oculus__Platform__CAPI__FilterCallback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Oculus__Platform__CAPI__FilterCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Oculus__Platform__CAPI__FilterCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Oculus__Platform__CAPI__FilterCallback& operator=(Oculus__Platform__CAPI__FilterCallback&& o) noexcept = default;
  constexpr Oculus__Platform__CAPI__FilterCallback& operator=(Oculus__Platform__CAPI__FilterCallback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Oculus__Platform__CAPI__FilterCallback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x25aa1f0 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x25aa2c8 size 0x14 virtual true final false
 void Invoke(ByRef<::ArrayW<int16_t>> pcmData, ::cordl_internals::uintptr_t pcmDataLength, int32_t frequency, int32_t numChannels) ;

/// @brief Method BeginInvoke addr 0x25aa2dc size 0xd4 virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<::ArrayW<int16_t>> pcmData, ::cordl_internals::uintptr_t pcmDataLength, int32_t frequency, int32_t numChannels, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x25aa3b0 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
// Type: Oculus.Platform::CAPI
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13195))
// CS Name: Oculus.Platform.CAPI
class CORDL_TYPE CAPI : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using FilterCallback = Oculus::Platform::Oculus__Platform__CAPI__FilterCallback;

using OculusInitParams = Oculus::Platform::Oculus__Platform__CAPI__OculusInitParams;

using ovrMatchmakingCustomQueryData = Oculus::Platform::Oculus__Platform__CAPI__ovrMatchmakingCustomQueryData;

using ovrMatchmakingCriterion = Oculus::Platform::Oculus__Platform__CAPI__ovrMatchmakingCriterion;

using ovrNetSyncVec3 = Oculus::Platform::Oculus__Platform__CAPI__ovrNetSyncVec3;

using ovrKeyValuePair = Oculus::Platform::Oculus__Platform__CAPI__ovrKeyValuePair;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CAPI() = default;

// Ctor Parameters [CppParam { name: "", ty: "CAPI", modifiers: " const&", def_value: None }]
constexpr CAPI(CAPI const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CAPI", modifiers: "&&", def_value: None }]
constexpr CAPI(CAPI&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CAPI(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CAPI& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CAPI& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CAPI& operator=(CAPI&& o) noexcept = default;
  constexpr CAPI& operator=(CAPI const& o) noexcept = default;
                


// Fields

/// @brief Field DLL_NAME offset 0
static constexpr ::ConstString  DLL_NAME{u"ovrplatformloader"};

static System::Text::UTF8Encoding __declspec(property(get=__get_nativeStringEncoding, put=__set_nativeStringEncoding))  nativeStringEncoding;

static void __set_nativeStringEncoding(System::Text::UTF8Encoding value) ;

static System::Text::UTF8Encoding __get_nativeStringEncoding() ;

/// @brief Field VoipFilterBufferSize offset 0
static constexpr int32_t  VoipFilterBufferSize{480};


// Methods

/// @brief Method ArrayOfStructsToIntPtr addr 0x2584658 size 0x198 virtual false final false
static ::cordl_internals::intptr_t ArrayOfStructsToIntPtr(System::Array ar) ;

/// @brief Method DictionaryToOVRKeyValuePairs addr 0x25847f0 size 0x24c virtual false final false
static ::ArrayW<Oculus::Platform::Oculus__Platform__CAPI__ovrKeyValuePair> DictionaryToOVRKeyValuePairs(System::Collections::Generic::Dictionary_2<Oculus::Platform::InitConfigOptions,bool> dict) ;

/// @brief Method DictionaryToOVRKeyValuePairs addr 0x2584a58 size 0x504 virtual false final false
static ::ArrayW<Oculus::Platform::Oculus__Platform__CAPI__ovrKeyValuePair> DictionaryToOVRKeyValuePairs(System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType> dict) ;

/// @brief Method IntPtrToByteArray addr 0x2584f90 size 0xbc virtual false final false
static ::ArrayW<uint8_t> IntPtrToByteArray(::cordl_internals::intptr_t data, uint64_t size) ;

/// @brief Method DataStoreFromNative addr 0x258504c size 0x158 virtual false final false
static System::Collections::Generic::Dictionary_2<::StringW,::StringW> DataStoreFromNative(::cordl_internals::intptr_t pointer) ;

/// @brief Method StringFromNative addr 0x258533c size 0x134 virtual false final false
static ::StringW StringFromNative(::cordl_internals::intptr_t pointer) ;

/// @brief Method GetNativeStringLengthNotIncludingNullTerminator addr 0x2585470 size 0x74 virtual false final false
static int32_t GetNativeStringLengthNotIncludingNullTerminator(::cordl_internals::intptr_t pointer) ;

/// @brief Method DateTimeFromNative addr 0x25854e4 size 0x64 virtual false final false
static System::DateTime DateTimeFromNative(uint64_t seconds_since_the_one_true_epoch) ;

/// @brief Method DateTimeToNative addr 0x2585548 size 0xe8 virtual false final false
static uint64_t DateTimeToNative(System::DateTime dt) ;

/// @brief Method BlobFromNative addr 0x2585630 size 0xd8 virtual false final false
static ::ArrayW<uint8_t> BlobFromNative(uint32_t size, ::cordl_internals::intptr_t pointer) ;

/// @brief Method FiledataFromNative addr 0x2585708 size 0xa0 virtual false final false
static ::ArrayW<uint8_t> FiledataFromNative(uint32_t size, ::cordl_internals::intptr_t pointer) ;

/// @brief Method StringToNative addr 0x25857a8 size 0x180 virtual false final false
static ::cordl_internals::intptr_t StringToNative(::StringW s) ;

/// @brief Method ovr_UnityInitWrapper addr 0x2582c20 size 0x98 virtual false final false
static bool ovr_UnityInitWrapper(::StringW appId) ;

/// @brief Method ovr_UnityInitGlobals addr 0x2585928 size 0x7c virtual false final false
static void ovr_UnityInitGlobals(::cordl_internals::intptr_t loggingCB) ;

/// @brief Method ovr_UnityInitWrapperAsynchronous addr 0x2582dc0 size 0x94 virtual false final false
static uint64_t ovr_UnityInitWrapperAsynchronous(::StringW appId) ;

/// @brief Method ovr_UnityInitWrapperStandalone addr 0x25859a4 size 0xa0 virtual false final false
static bool ovr_UnityInitWrapperStandalone(::StringW accessToken, ::cordl_internals::intptr_t loggingCB) ;

/// @brief Method ovr_Platform_InitializeStandaloneOculus addr 0x2585a44 size 0xe4 virtual false final false
static uint64_t ovr_Platform_InitializeStandaloneOculus(ByRef<Oculus::Platform::Oculus__Platform__CAPI__OculusInitParams> init) ;

/// @brief Method ovr_PlatformInitializeWithAccessToken addr 0x2585b28 size 0xa0 virtual false final false
static uint64_t ovr_PlatformInitializeWithAccessToken(uint64_t appId, ::StringW accessToken) ;

/// @brief Method ovr_PlatformInitializeWithAccessTokenAndOptions addr 0x2585bc8 size 0x1a8 virtual false final false
static uint64_t ovr_PlatformInitializeWithAccessTokenAndOptions(uint64_t appId, ::StringW accessToken, ::ArrayW<Oculus::Platform::Oculus__Platform__CAPI__ovrKeyValuePair> configOptions, ::cordl_internals::uintptr_t numOptions) ;

/// @brief Method ovr_UnityInitWrapperWindows addr 0x2585d70 size 0xa0 virtual false final false
static bool ovr_UnityInitWrapperWindows(::StringW appId, ::cordl_internals::intptr_t loggingCB) ;

/// @brief Method ovr_UnityInitWrapperWindowsAsynchronous addr 0x2585e10 size 0x9c virtual false final false
static uint64_t ovr_UnityInitWrapperWindowsAsynchronous(::StringW appId, ::cordl_internals::intptr_t loggingCB) ;

/// @brief Method ovr_SetDeveloperAccessToken addr 0x2585eac size 0x98 virtual false final false
static bool ovr_SetDeveloperAccessToken(::StringW accessToken) ;

/// @brief Method ovr_GetLoggedInUserLocale addr 0x2585f44 size 0x50 virtual false final false
static ::StringW ovr_GetLoggedInUserLocale() ;

/// @brief Method ovr_GetLoggedInUserLocale_Native addr 0x2585f94 size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_GetLoggedInUserLocale_Native() ;

/// @brief Method ovr_PopMessage addr 0x2585ffc size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_PopMessage() ;

/// @brief Method ovr_FreeMessage addr 0x2586064 size 0x7c virtual false final false
static void ovr_FreeMessage(::cordl_internals::intptr_t message) ;

/// @brief Method ovr_Voip_CreateEncoder addr 0x25860e0 size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_Voip_CreateEncoder() ;

/// @brief Method ovr_Voip_DestroyEncoder addr 0x2586148 size 0x7c virtual false final false
static void ovr_Voip_DestroyEncoder(::cordl_internals::intptr_t encoder) ;

/// @brief Method ovr_Voip_CreateDecoder addr 0x25861c4 size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_Voip_CreateDecoder() ;

/// @brief Method ovr_Voip_DestroyDecoder addr 0x258622c size 0x7c virtual false final false
static void ovr_Voip_DestroyDecoder(::cordl_internals::intptr_t decoder) ;

/// @brief Method ovr_VoipDecoder_Decode addr 0x25862a8 size 0x9c virtual false final false
static void ovr_VoipDecoder_Decode(::cordl_internals::intptr_t obj, ::ArrayW<uint8_t> compressedData, uint64_t compressedSize) ;

/// @brief Method ovr_Microphone_Create addr 0x2586344 size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_Microphone_Create() ;

/// @brief Method ovr_Microphone_Destroy addr 0x25863ac size 0x7c virtual false final false
static void ovr_Microphone_Destroy(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Voip_SetSystemVoipPassthrough addr 0x2586428 size 0x7c virtual false final false
static void ovr_Voip_SetSystemVoipPassthrough(bool passthrough) ;

/// @brief Method ovr_Voip_SetSystemVoipMicrophoneMuted addr 0x25864a4 size 0x7c virtual false final false
static void ovr_Voip_SetSystemVoipMicrophoneMuted(Oculus::Platform::VoipMuteState muted) ;

/// @brief Method ovr_UnityResetTestPlatform addr 0x2586520 size 0x64 virtual false final false
static void ovr_UnityResetTestPlatform() ;

/// @brief Method ovr_HTTP_GetWithMessageType addr 0x2586584 size 0x9c virtual false final false
static uint64_t ovr_HTTP_GetWithMessageType(::StringW url, int32_t messageType) ;

/// @brief Method ovr_CrashApplication addr 0x2586620 size 0x64 virtual false final false
static void ovr_CrashApplication() ;

/// @brief Method ovr_Voip_SetMicrophoneFilterCallback addr 0x2586684 size 0x80 virtual false final false
static void ovr_Voip_SetMicrophoneFilterCallback(Oculus::Platform::Oculus__Platform__CAPI__FilterCallback cb) ;

/// @brief Method ovr_Voip_SetMicrophoneFilterCallbackWithFixedSizeBuffer addr 0x2586704 size 0x88 virtual false final false
static void ovr_Voip_SetMicrophoneFilterCallbackWithFixedSizeBuffer(Oculus::Platform::Oculus__Platform__CAPI__FilterCallback cb, ::cordl_internals::uintptr_t bufferSizeElements) ;

/// @brief Method LogNewUnifiedEvent addr 0x258678c size 0xa8 virtual false final false
static void LogNewUnifiedEvent(Oculus::Platform::LogEventName eventName, System::Collections::Generic::Dictionary_2<::StringW,::StringW> values) ;

/// @brief Method LogNewEvent addr 0x2586834 size 0x354 virtual false final false
static void LogNewEvent(::StringW eventName, System::Collections::Generic::Dictionary_2<::StringW,::StringW> values) ;

/// @brief Method ovr_Log_NewEvent addr 0x2586b88 size 0x9c virtual false final false
static void ovr_Log_NewEvent(::cordl_internals::intptr_t eventName, ::ArrayW<::cordl_internals::intptr_t> values, ::cordl_internals::uintptr_t length) ;

/// @brief Method ovr_ApplicationLifecycle_GetLaunchDetails addr 0x2586c24 size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_ApplicationLifecycle_GetLaunchDetails() ;

/// @brief Method ovr_ApplicationLifecycle_LogDeeplinkResult addr 0x2586c8c size 0x9c virtual false final false
static void ovr_ApplicationLifecycle_LogDeeplinkResult(::StringW trackingID, Oculus::Platform::LaunchResult result) ;

/// @brief Method ovr_ApplicationLifecycle_LogDeeplinkResult_Native addr 0x2586d28 size 0x84 virtual false final false
static void ovr_ApplicationLifecycle_LogDeeplinkResult_Native(::cordl_internals::intptr_t trackingID, Oculus::Platform::LaunchResult result) ;

/// @brief Method ovr_HTTP_StartTransfer addr 0x2586dac size 0xec virtual false final false
static uint64_t ovr_HTTP_StartTransfer(::StringW url, ::ArrayW<Oculus::Platform::Oculus__Platform__CAPI__ovrKeyValuePair> headers) ;

/// @brief Method ovr_HTTP_StartTransfer_Native addr 0x2586e98 size 0x1a4 virtual false final false
static uint64_t ovr_HTTP_StartTransfer_Native(::cordl_internals::intptr_t url, ::ArrayW<Oculus::Platform::Oculus__Platform__CAPI__ovrKeyValuePair> headers, ::cordl_internals::uintptr_t numItems) ;

/// @brief Method ovr_HTTP_Write addr 0x258703c size 0xa4 virtual false final false
static bool ovr_HTTP_Write(uint64_t transferId, ::ArrayW<uint8_t> bytes, ::cordl_internals::uintptr_t length) ;

/// @brief Method ovr_HTTP_WriteEOM addr 0x25870e0 size 0x78 virtual false final false
static void ovr_HTTP_WriteEOM(uint64_t transferId) ;

/// @brief Method ovr_Message_GetStringForJavascript addr 0x2587158 size 0x58 virtual false final false
static ::StringW ovr_Message_GetStringForJavascript(::cordl_internals::intptr_t message) ;

/// @brief Method ovr_Message_GetStringForJavascript_Native addr 0x25871b0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetStringForJavascript_Native(::cordl_internals::intptr_t message) ;

/// @brief Method ovr_NetSync_GetAmbisonicFloatPCM addr 0x258722c size 0x9c virtual false final false
static ::cordl_internals::uintptr_t ovr_NetSync_GetAmbisonicFloatPCM(int64_t connection_id, ::ArrayW<float_t> outputBuffer, ::cordl_internals::uintptr_t outputBufferNumElements) ;

/// @brief Method ovr_NetSync_GetAmbisonicInt16PCM addr 0x25872c8 size 0x9c virtual false final false
static ::cordl_internals::uintptr_t ovr_NetSync_GetAmbisonicInt16PCM(int64_t connection_id, ::ArrayW<int16_t> outputBuffer, ::cordl_internals::uintptr_t outputBufferNumElements) ;

/// @brief Method ovr_NetSync_GetAmbisonicInterleavedFloatPCM addr 0x2587364 size 0x9c virtual false final false
static ::cordl_internals::uintptr_t ovr_NetSync_GetAmbisonicInterleavedFloatPCM(int64_t connection_id, ::ArrayW<float_t> outputBuffer, ::cordl_internals::uintptr_t outputBufferNumElements) ;

/// @brief Method ovr_NetSync_GetAmbisonicInterleavedInt16PCM addr 0x2587400 size 0x9c virtual false final false
static ::cordl_internals::uintptr_t ovr_NetSync_GetAmbisonicInterleavedInt16PCM(int64_t connection_id, ::ArrayW<int16_t> outputBuffer, ::cordl_internals::uintptr_t outputBufferNumElements) ;

/// @brief Method ovr_NetSync_GetListenerPosition addr 0x258749c size 0x9c virtual false final false
static bool ovr_NetSync_GetListenerPosition(int64_t connection_id, uint64_t sessionId, ByRef<Oculus::Platform::Oculus__Platform__CAPI__ovrNetSyncVec3> position) ;

/// @brief Method ovr_NetSync_GetMonostreamFloatPCM addr 0x2587538 size 0xa4 virtual false final false
static ::cordl_internals::uintptr_t ovr_NetSync_GetMonostreamFloatPCM(int64_t connection_id, uint64_t sessionId, ::ArrayW<float_t> outputBuffer, ::cordl_internals::uintptr_t outputBufferNumElements) ;

/// @brief Method ovr_NetSync_GetMonostreamInt16PCM addr 0x25875dc size 0xa4 virtual false final false
static ::cordl_internals::uintptr_t ovr_NetSync_GetMonostreamInt16PCM(int64_t connection_id, uint64_t session_id, ::ArrayW<int16_t> outputBuffer, ::cordl_internals::uintptr_t outputBufferNumElements) ;

/// @brief Method ovr_NetSync_GetPcmBufferMaxSamples addr 0x2587680 size 0x68 virtual false final false
static ::cordl_internals::uintptr_t ovr_NetSync_GetPcmBufferMaxSamples() ;

/// @brief Method ovr_NetSync_GetVoipAmplitude addr 0x25876e8 size 0x9c virtual false final false
static bool ovr_NetSync_GetVoipAmplitude(int64_t connection_id, uint64_t sessionId, ByRef<float_t> amplitude) ;

/// @brief Method ovr_NetSync_SetListenerPosition addr 0x2587784 size 0x84 virtual false final false
static void ovr_NetSync_SetListenerPosition(int64_t connection_id, ByRef<Oculus::Platform::Oculus__Platform__CAPI__ovrNetSyncVec3> position) ;

/// @brief Method ovr_Net_Accept addr 0x2587808 size 0x7c virtual false final false
static void ovr_Net_Accept(uint64_t peerID) ;

/// @brief Method ovr_Net_AcceptForCurrentRoom addr 0x2587884 size 0x70 virtual false final false
static bool ovr_Net_AcceptForCurrentRoom() ;

/// @brief Method ovr_Net_Close addr 0x25878f4 size 0x7c virtual false final false
static void ovr_Net_Close(uint64_t peerID) ;

/// @brief Method ovr_Net_CloseForCurrentRoom addr 0x2587970 size 0x64 virtual false final false
static void ovr_Net_CloseForCurrentRoom() ;

/// @brief Method ovr_Net_Connect addr 0x25879d4 size 0x7c virtual false final false
static void ovr_Net_Connect(uint64_t peerID) ;

/// @brief Method ovr_Net_IsConnected addr 0x2587a50 size 0x84 virtual false final false
static bool ovr_Net_IsConnected(uint64_t peerID) ;

/// @brief Method ovr_Net_Ping addr 0x2587ad4 size 0x7c virtual false final false
static uint64_t ovr_Net_Ping(uint64_t peerID) ;

/// @brief Method ovr_Net_ReadPacket addr 0x2587b50 size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_Net_ReadPacket() ;

/// @brief Method ovr_Net_SendPacket addr 0x2587bb8 size 0xac virtual false final false
static bool ovr_Net_SendPacket(uint64_t userID, ::cordl_internals::uintptr_t length, ::ArrayW<uint8_t> bytes, Oculus::Platform::SendPolicy policy) ;

/// @brief Method ovr_Net_SendPacketToCurrentRoom addr 0x2587c64 size 0xa4 virtual false final false
static bool ovr_Net_SendPacketToCurrentRoom(::cordl_internals::uintptr_t length, ::ArrayW<uint8_t> bytes, Oculus::Platform::SendPolicy policy) ;

/// @brief Method ovr_Party_PluginGetSharedMemHandle addr 0x2587d08 size 0x68 virtual false final false
static int32_t ovr_Party_PluginGetSharedMemHandle() ;

/// @brief Method ovr_Party_PluginGetVoipMicrophoneMuted addr 0x2587d70 size 0x68 virtual false final false
static Oculus::Platform::VoipMuteState ovr_Party_PluginGetVoipMicrophoneMuted() ;

/// @brief Method ovr_Party_PluginGetVoipPassthrough addr 0x2587dd8 size 0x70 virtual false final false
static bool ovr_Party_PluginGetVoipPassthrough() ;

/// @brief Method ovr_Party_PluginGetVoipStatus addr 0x2587e48 size 0x68 virtual false final false
static Oculus::Platform::SystemVoipStatus ovr_Party_PluginGetVoipStatus() ;

/// @brief Method ovr_Voip_Accept addr 0x2587eb0 size 0x7c virtual false final false
static void ovr_Voip_Accept(uint64_t userID) ;

/// @brief Method ovr_Voip_GetIsConnectionUsingDtx addr 0x2587f2c size 0x7c virtual false final false
static Oculus::Platform::VoipDtxState ovr_Voip_GetIsConnectionUsingDtx(uint64_t peerID) ;

/// @brief Method ovr_Voip_GetLocalBitrate addr 0x2587fa8 size 0x7c virtual false final false
static Oculus::Platform::VoipBitrate ovr_Voip_GetLocalBitrate(uint64_t peerID) ;

/// @brief Method ovr_Voip_GetOutputBufferMaxSize addr 0x2588024 size 0x68 virtual false final false
static ::cordl_internals::uintptr_t ovr_Voip_GetOutputBufferMaxSize() ;

/// @brief Method ovr_Voip_GetPCM addr 0x258808c size 0x9c virtual false final false
static ::cordl_internals::uintptr_t ovr_Voip_GetPCM(uint64_t senderID, ::ArrayW<int16_t> outputBuffer, ::cordl_internals::uintptr_t outputBufferNumElements) ;

/// @brief Method ovr_Voip_GetPCMFloat addr 0x2588128 size 0x9c virtual false final false
static ::cordl_internals::uintptr_t ovr_Voip_GetPCMFloat(uint64_t senderID, ::ArrayW<float_t> outputBuffer, ::cordl_internals::uintptr_t outputBufferNumElements) ;

/// @brief Method ovr_Voip_GetPCMSize addr 0x25881c4 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_Voip_GetPCMSize(uint64_t senderID) ;

/// @brief Method ovr_Voip_GetPCMWithTimestamp addr 0x2588240 size 0xac virtual false final false
static ::cordl_internals::uintptr_t ovr_Voip_GetPCMWithTimestamp(uint64_t senderID, ::ArrayW<int16_t> outputBuffer, ::cordl_internals::uintptr_t outputBufferNumElements, ::ArrayW<uint32_t> timestamp) ;

/// @brief Method ovr_Voip_GetPCMWithTimestampFloat addr 0x25882ec size 0xac virtual false final false
static ::cordl_internals::uintptr_t ovr_Voip_GetPCMWithTimestampFloat(uint64_t senderID, ::ArrayW<float_t> outputBuffer, ::cordl_internals::uintptr_t outputBufferNumElements, ::ArrayW<uint32_t> timestamp) ;

/// @brief Method ovr_Voip_GetRemoteBitrate addr 0x2588398 size 0x7c virtual false final false
static Oculus::Platform::VoipBitrate ovr_Voip_GetRemoteBitrate(uint64_t peerID) ;

/// @brief Method ovr_Voip_GetSyncTimestamp addr 0x2588414 size 0x7c virtual false final false
static uint32_t ovr_Voip_GetSyncTimestamp(uint64_t userID) ;

/// @brief Method ovr_Voip_GetSyncTimestampDifference addr 0x2588490 size 0x84 virtual false final false
static int64_t ovr_Voip_GetSyncTimestampDifference(uint32_t lhs, uint32_t rhs) ;

/// @brief Method ovr_Voip_GetSystemVoipMicrophoneMuted addr 0x2588514 size 0x68 virtual false final false
static Oculus::Platform::VoipMuteState ovr_Voip_GetSystemVoipMicrophoneMuted() ;

/// @brief Method ovr_Voip_GetSystemVoipStatus addr 0x258857c size 0x68 virtual false final false
static Oculus::Platform::SystemVoipStatus ovr_Voip_GetSystemVoipStatus() ;

/// @brief Method ovr_Voip_SetMicrophoneMuted addr 0x25885e4 size 0x7c virtual false final false
static void ovr_Voip_SetMicrophoneMuted(Oculus::Platform::VoipMuteState state) ;

/// @brief Method ovr_Voip_SetNewConnectionOptions addr 0x2588660 size 0x7c virtual false final false
static void ovr_Voip_SetNewConnectionOptions(::cordl_internals::intptr_t voipOptions) ;

/// @brief Method ovr_Voip_SetOutputSampleRate addr 0x25886dc size 0x7c virtual false final false
static void ovr_Voip_SetOutputSampleRate(Oculus::Platform::VoipSampleRate rate) ;

/// @brief Method ovr_Voip_Start addr 0x2588758 size 0x7c virtual false final false
static void ovr_Voip_Start(uint64_t userID) ;

/// @brief Method ovr_Voip_Stop addr 0x25887d4 size 0x7c virtual false final false
static void ovr_Voip_Stop(uint64_t userID) ;

/// @brief Method ovr_AbuseReport_LaunchAdvancedReportFlow addr 0x2588850 size 0x84 virtual false final false
static uint64_t ovr_AbuseReport_LaunchAdvancedReportFlow(uint64_t content_id, ::cordl_internals::intptr_t abuse_report_options) ;

/// @brief Method ovr_AbuseReport_ReportRequestHandled addr 0x25888d4 size 0x7c virtual false final false
static uint64_t ovr_AbuseReport_ReportRequestHandled(Oculus::Platform::ReportRequestResponse response) ;

/// @brief Method ovr_Achievements_AddCount addr 0x2588950 size 0xac virtual false final false
static uint64_t ovr_Achievements_AddCount(::StringW name, uint64_t count) ;

/// @brief Method ovr_Achievements_AddCount_Native addr 0x25889fc size 0x84 virtual false final false
static uint64_t ovr_Achievements_AddCount_Native(::cordl_internals::intptr_t name, uint64_t count) ;

/// @brief Method ovr_Achievements_AddFields addr 0x2588a80 size 0xc8 virtual false final false
static uint64_t ovr_Achievements_AddFields(::StringW name, ::StringW fields) ;

/// @brief Method ovr_Achievements_AddFields_Native addr 0x2588b48 size 0x84 virtual false final false
static uint64_t ovr_Achievements_AddFields_Native(::cordl_internals::intptr_t name, ::cordl_internals::intptr_t fields) ;

/// @brief Method ovr_Achievements_GetAllDefinitions addr 0x2588bcc size 0x68 virtual false final false
static uint64_t ovr_Achievements_GetAllDefinitions() ;

/// @brief Method ovr_Achievements_GetAllProgress addr 0x2588c34 size 0x68 virtual false final false
static uint64_t ovr_Achievements_GetAllProgress() ;

/// @brief Method ovr_Achievements_GetDefinitionsByName addr 0x2588c9c size 0x148 virtual false final false
static uint64_t ovr_Achievements_GetDefinitionsByName(::ArrayW<::StringW> names, int32_t count) ;

/// @brief Method ovr_Achievements_GetProgressByName addr 0x2588de4 size 0x148 virtual false final false
static uint64_t ovr_Achievements_GetProgressByName(::ArrayW<::StringW> names, int32_t count) ;

/// @brief Method ovr_Achievements_Unlock addr 0x2588f2c size 0x9c virtual false final false
static uint64_t ovr_Achievements_Unlock(::StringW name) ;

/// @brief Method ovr_Achievements_Unlock_Native addr 0x2588fc8 size 0x7c virtual false final false
static uint64_t ovr_Achievements_Unlock_Native(::cordl_internals::intptr_t name) ;

/// @brief Method ovr_Application_ExecuteCoordinatedLaunch addr 0x2589044 size 0x84 virtual false final false
static uint64_t ovr_Application_ExecuteCoordinatedLaunch(uint64_t appID, uint64_t roomID) ;

/// @brief Method ovr_Application_GetInstalledApplications addr 0x25890c8 size 0x68 virtual false final false
static uint64_t ovr_Application_GetInstalledApplications() ;

/// @brief Method ovr_Application_GetVersion addr 0x2589130 size 0x68 virtual false final false
static uint64_t ovr_Application_GetVersion() ;

/// @brief Method ovr_Application_LaunchOtherApp addr 0x2589198 size 0x84 virtual false final false
static uint64_t ovr_Application_LaunchOtherApp(uint64_t appID, ::cordl_internals::intptr_t deeplink_options) ;

/// @brief Method ovr_ApplicationLifecycle_GetRegisteredPIDs addr 0x258921c size 0x68 virtual false final false
static uint64_t ovr_ApplicationLifecycle_GetRegisteredPIDs() ;

/// @brief Method ovr_ApplicationLifecycle_GetSessionKey addr 0x2589284 size 0x68 virtual false final false
static uint64_t ovr_ApplicationLifecycle_GetSessionKey() ;

/// @brief Method ovr_ApplicationLifecycle_RegisterSessionKey addr 0x25892ec size 0x9c virtual false final false
static uint64_t ovr_ApplicationLifecycle_RegisterSessionKey(::StringW sessionKey) ;

/// @brief Method ovr_ApplicationLifecycle_RegisterSessionKey_Native addr 0x2589388 size 0x7c virtual false final false
static uint64_t ovr_ApplicationLifecycle_RegisterSessionKey_Native(::cordl_internals::intptr_t sessionKey) ;

/// @brief Method ovr_AssetFile_Delete addr 0x2589404 size 0x7c virtual false final false
static uint64_t ovr_AssetFile_Delete(uint64_t assetFileID) ;

/// @brief Method ovr_AssetFile_DeleteById addr 0x2589480 size 0x7c virtual false final false
static uint64_t ovr_AssetFile_DeleteById(uint64_t assetFileID) ;

/// @brief Method ovr_AssetFile_DeleteByName addr 0x25894fc size 0x9c virtual false final false
static uint64_t ovr_AssetFile_DeleteByName(::StringW assetFileName) ;

/// @brief Method ovr_AssetFile_DeleteByName_Native addr 0x2589598 size 0x7c virtual false final false
static uint64_t ovr_AssetFile_DeleteByName_Native(::cordl_internals::intptr_t assetFileName) ;

/// @brief Method ovr_AssetFile_Download addr 0x2589614 size 0x7c virtual false final false
static uint64_t ovr_AssetFile_Download(uint64_t assetFileID) ;

/// @brief Method ovr_AssetFile_DownloadById addr 0x2589690 size 0x7c virtual false final false
static uint64_t ovr_AssetFile_DownloadById(uint64_t assetFileID) ;

/// @brief Method ovr_AssetFile_DownloadByName addr 0x258970c size 0x9c virtual false final false
static uint64_t ovr_AssetFile_DownloadByName(::StringW assetFileName) ;

/// @brief Method ovr_AssetFile_DownloadByName_Native addr 0x25897a8 size 0x7c virtual false final false
static uint64_t ovr_AssetFile_DownloadByName_Native(::cordl_internals::intptr_t assetFileName) ;

/// @brief Method ovr_AssetFile_DownloadCancel addr 0x2589824 size 0x7c virtual false final false
static uint64_t ovr_AssetFile_DownloadCancel(uint64_t assetFileID) ;

/// @brief Method ovr_AssetFile_DownloadCancelById addr 0x25898a0 size 0x7c virtual false final false
static uint64_t ovr_AssetFile_DownloadCancelById(uint64_t assetFileID) ;

/// @brief Method ovr_AssetFile_DownloadCancelByName addr 0x258991c size 0x9c virtual false final false
static uint64_t ovr_AssetFile_DownloadCancelByName(::StringW assetFileName) ;

/// @brief Method ovr_AssetFile_DownloadCancelByName_Native addr 0x25899b8 size 0x7c virtual false final false
static uint64_t ovr_AssetFile_DownloadCancelByName_Native(::cordl_internals::intptr_t assetFileName) ;

/// @brief Method ovr_AssetFile_GetList addr 0x2589a34 size 0x68 virtual false final false
static uint64_t ovr_AssetFile_GetList() ;

/// @brief Method ovr_AssetFile_Status addr 0x2589a9c size 0x7c virtual false final false
static uint64_t ovr_AssetFile_Status(uint64_t assetFileID) ;

/// @brief Method ovr_AssetFile_StatusById addr 0x2589b18 size 0x7c virtual false final false
static uint64_t ovr_AssetFile_StatusById(uint64_t assetFileID) ;

/// @brief Method ovr_AssetFile_StatusByName addr 0x2589b94 size 0x9c virtual false final false
static uint64_t ovr_AssetFile_StatusByName(::StringW assetFileName) ;

/// @brief Method ovr_AssetFile_StatusByName_Native addr 0x2589c30 size 0x7c virtual false final false
static uint64_t ovr_AssetFile_StatusByName_Native(::cordl_internals::intptr_t assetFileName) ;

/// @brief Method ovr_Avatar_LaunchAvatarEditor addr 0x2589cac size 0x7c virtual false final false
static uint64_t ovr_Avatar_LaunchAvatarEditor(::cordl_internals::intptr_t options) ;

/// @brief Method ovr_Avatar_UpdateMetaData addr 0x2589d28 size 0xc8 virtual false final false
static uint64_t ovr_Avatar_UpdateMetaData(::StringW avatarMetaData, ::StringW imageFilePath) ;

/// @brief Method ovr_Avatar_UpdateMetaData_Native addr 0x2589df0 size 0x84 virtual false final false
static uint64_t ovr_Avatar_UpdateMetaData_Native(::cordl_internals::intptr_t avatarMetaData, ::cordl_internals::intptr_t imageFilePath) ;

/// @brief Method ovr_Cal_FinalizeApplication addr 0x2589e74 size 0xa4 virtual false final false
static uint64_t ovr_Cal_FinalizeApplication(uint64_t groupingObject, ::ArrayW<uint64_t> userIDs, int32_t numUserIDs, uint64_t finalized_application_ID) ;

/// @brief Method ovr_Cal_GetSuggestedApplications addr 0x2589f18 size 0x9c virtual false final false
static uint64_t ovr_Cal_GetSuggestedApplications(uint64_t groupingObject, ::ArrayW<uint64_t> userIDs, int32_t numUserIDs) ;

/// @brief Method ovr_Cal_ProposeApplication addr 0x2589fb4 size 0xa4 virtual false final false
static uint64_t ovr_Cal_ProposeApplication(uint64_t groupingObject, ::ArrayW<uint64_t> userIDs, int32_t numUserIDs, uint64_t proposed_application_ID) ;

/// @brief Method ovr_Challenges_Create addr 0x258a058 size 0xac virtual false final false
static uint64_t ovr_Challenges_Create(::StringW leaderboardName, ::cordl_internals::intptr_t challengeOptions) ;

/// @brief Method ovr_Challenges_Create_Native addr 0x258a104 size 0x84 virtual false final false
static uint64_t ovr_Challenges_Create_Native(::cordl_internals::intptr_t leaderboardName, ::cordl_internals::intptr_t challengeOptions) ;

/// @brief Method ovr_Challenges_DeclineInvite addr 0x258a188 size 0x7c virtual false final false
static uint64_t ovr_Challenges_DeclineInvite(uint64_t challengeID) ;

/// @brief Method ovr_Challenges_Delete addr 0x258a204 size 0x7c virtual false final false
static uint64_t ovr_Challenges_Delete(uint64_t challengeID) ;

/// @brief Method ovr_Challenges_Get addr 0x258a280 size 0x7c virtual false final false
static uint64_t ovr_Challenges_Get(uint64_t challengeID) ;

/// @brief Method ovr_Challenges_GetEntries addr 0x258a2fc size 0x9c virtual false final false
static uint64_t ovr_Challenges_GetEntries(uint64_t challengeID, int32_t limit, Oculus::Platform::LeaderboardFilterType filter, Oculus::Platform::LeaderboardStartAt startAt) ;

/// @brief Method ovr_Challenges_GetEntriesAfterRank addr 0x258a398 size 0x94 virtual false final false
static uint64_t ovr_Challenges_GetEntriesAfterRank(uint64_t challengeID, int32_t limit, uint64_t afterRank) ;

/// @brief Method ovr_Challenges_GetEntriesByIds addr 0x258a42c size 0xb4 virtual false final false
static uint64_t ovr_Challenges_GetEntriesByIds(uint64_t challengeID, int32_t limit, Oculus::Platform::LeaderboardStartAt startAt, ::ArrayW<uint64_t> userIDs, uint32_t userIDLength) ;

/// @brief Method ovr_Challenges_GetList addr 0x258a4e0 size 0x84 virtual false final false
static uint64_t ovr_Challenges_GetList(::cordl_internals::intptr_t challengeOptions, int32_t limit) ;

/// @brief Method ovr_Challenges_GetNextChallenges addr 0x258a564 size 0x7c virtual false final false
static uint64_t ovr_Challenges_GetNextChallenges(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_Challenges_GetNextEntries addr 0x258a5e0 size 0x7c virtual false final false
static uint64_t ovr_Challenges_GetNextEntries(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_Challenges_GetPreviousChallenges addr 0x258a65c size 0x7c virtual false final false
static uint64_t ovr_Challenges_GetPreviousChallenges(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_Challenges_GetPreviousEntries addr 0x258a6d8 size 0x7c virtual false final false
static uint64_t ovr_Challenges_GetPreviousEntries(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_Challenges_Join addr 0x258a754 size 0x7c virtual false final false
static uint64_t ovr_Challenges_Join(uint64_t challengeID) ;

/// @brief Method ovr_Challenges_Leave addr 0x258a7d0 size 0x7c virtual false final false
static uint64_t ovr_Challenges_Leave(uint64_t challengeID) ;

/// @brief Method ovr_Challenges_UpdateInfo addr 0x258a84c size 0x84 virtual false final false
static uint64_t ovr_Challenges_UpdateInfo(uint64_t challengeID, ::cordl_internals::intptr_t challengeOptions) ;

/// @brief Method ovr_CloudStorage_Delete addr 0x258a8d0 size 0xc8 virtual false final false
static uint64_t ovr_CloudStorage_Delete(::StringW bucket, ::StringW key) ;

/// @brief Method ovr_CloudStorage_Delete_Native addr 0x258a998 size 0x84 virtual false final false
static uint64_t ovr_CloudStorage_Delete_Native(::cordl_internals::intptr_t bucket, ::cordl_internals::intptr_t key) ;

/// @brief Method ovr_CloudStorage_Load addr 0x258aa1c size 0xc8 virtual false final false
static uint64_t ovr_CloudStorage_Load(::StringW bucket, ::StringW key) ;

/// @brief Method ovr_CloudStorage_Load_Native addr 0x258aae4 size 0x84 virtual false final false
static uint64_t ovr_CloudStorage_Load_Native(::cordl_internals::intptr_t bucket, ::cordl_internals::intptr_t key) ;

/// @brief Method ovr_CloudStorage_LoadBucketMetadata addr 0x258ab68 size 0x9c virtual false final false
static uint64_t ovr_CloudStorage_LoadBucketMetadata(::StringW bucket) ;

/// @brief Method ovr_CloudStorage_LoadBucketMetadata_Native addr 0x258ac04 size 0x7c virtual false final false
static uint64_t ovr_CloudStorage_LoadBucketMetadata_Native(::cordl_internals::intptr_t bucket) ;

/// @brief Method ovr_CloudStorage_LoadConflictMetadata addr 0x258ac80 size 0xc8 virtual false final false
static uint64_t ovr_CloudStorage_LoadConflictMetadata(::StringW bucket, ::StringW key) ;

/// @brief Method ovr_CloudStorage_LoadConflictMetadata_Native addr 0x258ad48 size 0x84 virtual false final false
static uint64_t ovr_CloudStorage_LoadConflictMetadata_Native(::cordl_internals::intptr_t bucket, ::cordl_internals::intptr_t key) ;

/// @brief Method ovr_CloudStorage_LoadHandle addr 0x258adcc size 0x9c virtual false final false
static uint64_t ovr_CloudStorage_LoadHandle(::StringW handle) ;

/// @brief Method ovr_CloudStorage_LoadHandle_Native addr 0x258ae68 size 0x7c virtual false final false
static uint64_t ovr_CloudStorage_LoadHandle_Native(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_CloudStorage_LoadMetadata addr 0x258aee4 size 0xc8 virtual false final false
static uint64_t ovr_CloudStorage_LoadMetadata(::StringW bucket, ::StringW key) ;

/// @brief Method ovr_CloudStorage_LoadMetadata_Native addr 0x258afac size 0x84 virtual false final false
static uint64_t ovr_CloudStorage_LoadMetadata_Native(::cordl_internals::intptr_t bucket, ::cordl_internals::intptr_t key) ;

/// @brief Method ovr_CloudStorage_ResolveKeepLocal addr 0x258b030 size 0xe8 virtual false final false
static uint64_t ovr_CloudStorage_ResolveKeepLocal(::StringW bucket, ::StringW key, ::StringW remoteHandle) ;

/// @brief Method ovr_CloudStorage_ResolveKeepLocal_Native addr 0x258b118 size 0x94 virtual false final false
static uint64_t ovr_CloudStorage_ResolveKeepLocal_Native(::cordl_internals::intptr_t bucket, ::cordl_internals::intptr_t key, ::cordl_internals::intptr_t remoteHandle) ;

/// @brief Method ovr_CloudStorage_ResolveKeepRemote addr 0x258b1ac size 0xe8 virtual false final false
static uint64_t ovr_CloudStorage_ResolveKeepRemote(::StringW bucket, ::StringW key, ::StringW remoteHandle) ;

/// @brief Method ovr_CloudStorage_ResolveKeepRemote_Native addr 0x258b294 size 0x94 virtual false final false
static uint64_t ovr_CloudStorage_ResolveKeepRemote_Native(::cordl_internals::intptr_t bucket, ::cordl_internals::intptr_t key, ::cordl_internals::intptr_t remoteHandle) ;

/// @brief Method ovr_CloudStorage_Save addr 0x258b328 size 0x110 virtual false final false
static uint64_t ovr_CloudStorage_Save(::StringW bucket, ::StringW key, ::ArrayW<uint8_t> data, uint32_t dataSize, int64_t counter, ::StringW extraData) ;

/// @brief Method ovr_CloudStorage_Save_Native addr 0x258b438 size 0xbc virtual false final false
static uint64_t ovr_CloudStorage_Save_Native(::cordl_internals::intptr_t bucket, ::cordl_internals::intptr_t key, ::ArrayW<uint8_t> data, uint32_t dataSize, int64_t counter, ::cordl_internals::intptr_t extraData) ;

/// @brief Method ovr_CloudStorage2_GetUserDirectoryPath addr 0x258b4f4 size 0x68 virtual false final false
static uint64_t ovr_CloudStorage2_GetUserDirectoryPath() ;

/// @brief Method ovr_Colocation_GetCurrentMapUuid addr 0x258b55c size 0x68 virtual false final false
static uint64_t ovr_Colocation_GetCurrentMapUuid() ;

/// @brief Method ovr_Colocation_RequestMap addr 0x258b5c4 size 0x9c virtual false final false
static uint64_t ovr_Colocation_RequestMap(::StringW uuid) ;

/// @brief Method ovr_Colocation_RequestMap_Native addr 0x258b660 size 0x7c virtual false final false
static uint64_t ovr_Colocation_RequestMap_Native(::cordl_internals::intptr_t uuid) ;

/// @brief Method ovr_Colocation_ShareMap addr 0x258b6dc size 0x9c virtual false final false
static uint64_t ovr_Colocation_ShareMap(::StringW uuid) ;

/// @brief Method ovr_Colocation_ShareMap_Native addr 0x258b778 size 0x7c virtual false final false
static uint64_t ovr_Colocation_ShareMap_Native(::cordl_internals::intptr_t uuid) ;

/// @brief Method ovr_DeviceApplicationIntegrity_GetAttestationToken addr 0x258b7f4 size 0x9c virtual false final false
static uint64_t ovr_DeviceApplicationIntegrity_GetAttestationToken(::StringW challenge_nonce) ;

/// @brief Method ovr_DeviceApplicationIntegrity_GetAttestationToken_Native addr 0x258b890 size 0x7c virtual false final false
static uint64_t ovr_DeviceApplicationIntegrity_GetAttestationToken_Native(::cordl_internals::intptr_t challenge_nonce) ;

/// @brief Method ovr_Entitlement_GetIsViewerEntitled addr 0x258b90c size 0x68 virtual false final false
static uint64_t ovr_Entitlement_GetIsViewerEntitled() ;

/// @brief Method ovr_GraphAPI_Get addr 0x258b974 size 0x9c virtual false final false
static uint64_t ovr_GraphAPI_Get(::StringW url) ;

/// @brief Method ovr_GraphAPI_Get_Native addr 0x258ba10 size 0x7c virtual false final false
static uint64_t ovr_GraphAPI_Get_Native(::cordl_internals::intptr_t url) ;

/// @brief Method ovr_GraphAPI_Post addr 0x258ba8c size 0x9c virtual false final false
static uint64_t ovr_GraphAPI_Post(::StringW url) ;

/// @brief Method ovr_GraphAPI_Post_Native addr 0x258bb28 size 0x78 virtual false final false
static uint64_t ovr_GraphAPI_Post_Native(::cordl_internals::intptr_t url) ;

/// @brief Method ovr_GroupPresence_Clear addr 0x258bba0 size 0x68 virtual false final false
static uint64_t ovr_GroupPresence_Clear() ;

/// @brief Method ovr_GroupPresence_GetInvitableUsers addr 0x258bc08 size 0x7c virtual false final false
static uint64_t ovr_GroupPresence_GetInvitableUsers(::cordl_internals::intptr_t options) ;

/// @brief Method ovr_GroupPresence_GetSentInvites addr 0x258bc84 size 0x68 virtual false final false
static uint64_t ovr_GroupPresence_GetSentInvites() ;

/// @brief Method ovr_GroupPresence_LaunchInvitePanel addr 0x258bcec size 0x7c virtual false final false
static uint64_t ovr_GroupPresence_LaunchInvitePanel(::cordl_internals::intptr_t options) ;

/// @brief Method ovr_GroupPresence_LaunchMultiplayerErrorDialog addr 0x258bd68 size 0x7c virtual false final false
static uint64_t ovr_GroupPresence_LaunchMultiplayerErrorDialog(::cordl_internals::intptr_t options) ;

/// @brief Method ovr_GroupPresence_LaunchRejoinDialog addr 0x258bde4 size 0xe8 virtual false final false
static uint64_t ovr_GroupPresence_LaunchRejoinDialog(::StringW lobby_session_id, ::StringW match_session_id, ::StringW destination_api_name) ;

/// @brief Method ovr_GroupPresence_LaunchRejoinDialog_Native addr 0x258becc size 0x94 virtual false final false
static uint64_t ovr_GroupPresence_LaunchRejoinDialog_Native(::cordl_internals::intptr_t lobby_session_id, ::cordl_internals::intptr_t match_session_id, ::cordl_internals::intptr_t destination_api_name) ;

/// @brief Method ovr_GroupPresence_LaunchRosterPanel addr 0x258bf60 size 0x7c virtual false final false
static uint64_t ovr_GroupPresence_LaunchRosterPanel(::cordl_internals::intptr_t options) ;

/// @brief Method ovr_GroupPresence_SendInvites addr 0x258bfdc size 0x8c virtual false final false
static uint64_t ovr_GroupPresence_SendInvites(::ArrayW<uint64_t> userIDs, uint32_t userIDLength) ;

/// @brief Method ovr_GroupPresence_Set addr 0x258c068 size 0x7c virtual false final false
static uint64_t ovr_GroupPresence_Set(::cordl_internals::intptr_t groupPresenceOptions) ;

/// @brief Method ovr_GroupPresence_SetDeeplinkMessageOverride addr 0x258c0e4 size 0x9c virtual false final false
static uint64_t ovr_GroupPresence_SetDeeplinkMessageOverride(::StringW deeplink_message) ;

/// @brief Method ovr_GroupPresence_SetDeeplinkMessageOverride_Native addr 0x258c180 size 0x7c virtual false final false
static uint64_t ovr_GroupPresence_SetDeeplinkMessageOverride_Native(::cordl_internals::intptr_t deeplink_message) ;

/// @brief Method ovr_GroupPresence_SetDestination addr 0x258c1fc size 0x9c virtual false final false
static uint64_t ovr_GroupPresence_SetDestination(::StringW api_name) ;

/// @brief Method ovr_GroupPresence_SetDestination_Native addr 0x258c298 size 0x7c virtual false final false
static uint64_t ovr_GroupPresence_SetDestination_Native(::cordl_internals::intptr_t api_name) ;

/// @brief Method ovr_GroupPresence_SetIsJoinable addr 0x258c314 size 0x7c virtual false final false
static uint64_t ovr_GroupPresence_SetIsJoinable(bool is_joinable) ;

/// @brief Method ovr_GroupPresence_SetLobbySession addr 0x258c390 size 0x9c virtual false final false
static uint64_t ovr_GroupPresence_SetLobbySession(::StringW id) ;

/// @brief Method ovr_GroupPresence_SetLobbySession_Native addr 0x258c42c size 0x7c virtual false final false
static uint64_t ovr_GroupPresence_SetLobbySession_Native(::cordl_internals::intptr_t id) ;

/// @brief Method ovr_GroupPresence_SetMatchSession addr 0x258c4a8 size 0x9c virtual false final false
static uint64_t ovr_GroupPresence_SetMatchSession(::StringW id) ;

/// @brief Method ovr_GroupPresence_SetMatchSession_Native addr 0x258c544 size 0x7c virtual false final false
static uint64_t ovr_GroupPresence_SetMatchSession_Native(::cordl_internals::intptr_t id) ;

/// @brief Method ovr_HTTP_Get addr 0x258c5c0 size 0x9c virtual false final false
static uint64_t ovr_HTTP_Get(::StringW url) ;

/// @brief Method ovr_HTTP_Get_Native addr 0x258c65c size 0x7c virtual false final false
static uint64_t ovr_HTTP_Get_Native(::cordl_internals::intptr_t url) ;

/// @brief Method ovr_HTTP_GetToFile addr 0x258c6d8 size 0xc8 virtual false final false
static uint64_t ovr_HTTP_GetToFile(::StringW url, ::StringW diskFile) ;

/// @brief Method ovr_HTTP_GetToFile_Native addr 0x258c7a0 size 0x84 virtual false final false
static uint64_t ovr_HTTP_GetToFile_Native(::cordl_internals::intptr_t url, ::cordl_internals::intptr_t diskFile) ;

/// @brief Method ovr_HTTP_MultiPartPost addr 0x258c824 size 0x154 virtual false final false
static uint64_t ovr_HTTP_MultiPartPost(::StringW url, ::StringW filepath_param_name, ::StringW filepath, ::StringW access_token, ::ArrayW<Oculus::Platform::Oculus__Platform__CAPI__ovrKeyValuePair> post_params) ;

/// @brief Method ovr_HTTP_MultiPartPost_Native addr 0x258c978 size 0x1d8 virtual false final false
static uint64_t ovr_HTTP_MultiPartPost_Native(::cordl_internals::intptr_t url, ::cordl_internals::intptr_t filepath_param_name, ::cordl_internals::intptr_t filepath, ::cordl_internals::intptr_t access_token, ::ArrayW<Oculus::Platform::Oculus__Platform__CAPI__ovrKeyValuePair> post_params, ::cordl_internals::uintptr_t numItems) ;

/// @brief Method ovr_HTTP_Post addr 0x258cb50 size 0x9c virtual false final false
static uint64_t ovr_HTTP_Post(::StringW url) ;

/// @brief Method ovr_HTTP_Post_Native addr 0x258cbec size 0x7c virtual false final false
static uint64_t ovr_HTTP_Post_Native(::cordl_internals::intptr_t url) ;

/// @brief Method ovr_IAP_ConsumePurchase addr 0x258cc68 size 0x9c virtual false final false
static uint64_t ovr_IAP_ConsumePurchase(::StringW sku) ;

/// @brief Method ovr_IAP_ConsumePurchase_Native addr 0x258cd04 size 0x7c virtual false final false
static uint64_t ovr_IAP_ConsumePurchase_Native(::cordl_internals::intptr_t sku) ;

/// @brief Method ovr_IAP_GetProductsBySKU addr 0x258cd80 size 0x148 virtual false final false
static uint64_t ovr_IAP_GetProductsBySKU(::ArrayW<::StringW> skus, int32_t count) ;

/// @brief Method ovr_IAP_GetViewerPurchases addr 0x258cec8 size 0x68 virtual false final false
static uint64_t ovr_IAP_GetViewerPurchases() ;

/// @brief Method ovr_IAP_GetViewerPurchasesDurableCache addr 0x258cf30 size 0x68 virtual false final false
static uint64_t ovr_IAP_GetViewerPurchasesDurableCache() ;

/// @brief Method ovr_IAP_LaunchCheckoutFlow addr 0x258cf98 size 0x9c virtual false final false
static uint64_t ovr_IAP_LaunchCheckoutFlow(::StringW sku) ;

/// @brief Method ovr_IAP_LaunchCheckoutFlow_Native addr 0x258d034 size 0x7c virtual false final false
static uint64_t ovr_IAP_LaunchCheckoutFlow_Native(::cordl_internals::intptr_t sku) ;

/// @brief Method ovr_LanguagePack_GetCurrent addr 0x258d0b0 size 0x68 virtual false final false
static uint64_t ovr_LanguagePack_GetCurrent() ;

/// @brief Method ovr_LanguagePack_SetCurrent addr 0x258d118 size 0x9c virtual false final false
static uint64_t ovr_LanguagePack_SetCurrent(::StringW tag) ;

/// @brief Method ovr_LanguagePack_SetCurrent_Native addr 0x258d1b4 size 0x7c virtual false final false
static uint64_t ovr_LanguagePack_SetCurrent_Native(::cordl_internals::intptr_t tag) ;

/// @brief Method ovr_Leaderboard_Get addr 0x258d230 size 0x9c virtual false final false
static uint64_t ovr_Leaderboard_Get(::StringW leaderboardName) ;

/// @brief Method ovr_Leaderboard_Get_Native addr 0x258d2cc size 0x7c virtual false final false
static uint64_t ovr_Leaderboard_Get_Native(::cordl_internals::intptr_t leaderboardName) ;

/// @brief Method ovr_Leaderboard_GetEntries addr 0x258d348 size 0xc4 virtual false final false
static uint64_t ovr_Leaderboard_GetEntries(::StringW leaderboardName, int32_t limit, Oculus::Platform::LeaderboardFilterType filter, Oculus::Platform::LeaderboardStartAt startAt) ;

/// @brief Method ovr_Leaderboard_GetEntries_Native addr 0x258d40c size 0x9c virtual false final false
static uint64_t ovr_Leaderboard_GetEntries_Native(::cordl_internals::intptr_t leaderboardName, int32_t limit, Oculus::Platform::LeaderboardFilterType filter, Oculus::Platform::LeaderboardStartAt startAt) ;

/// @brief Method ovr_Leaderboard_GetEntriesAfterRank addr 0x258d4a8 size 0xb4 virtual false final false
static uint64_t ovr_Leaderboard_GetEntriesAfterRank(::StringW leaderboardName, int32_t limit, uint64_t afterRank) ;

/// @brief Method ovr_Leaderboard_GetEntriesAfterRank_Native addr 0x258d55c size 0x94 virtual false final false
static uint64_t ovr_Leaderboard_GetEntriesAfterRank_Native(::cordl_internals::intptr_t leaderboardName, int32_t limit, uint64_t afterRank) ;

/// @brief Method ovr_Leaderboard_GetEntriesByIds addr 0x258d5f0 size 0xcc virtual false final false
static uint64_t ovr_Leaderboard_GetEntriesByIds(::StringW leaderboardName, int32_t limit, Oculus::Platform::LeaderboardStartAt startAt, ::ArrayW<uint64_t> userIDs, uint32_t userIDLength) ;

/// @brief Method ovr_Leaderboard_GetEntriesByIds_Native addr 0x258d6bc size 0xb4 virtual false final false
static uint64_t ovr_Leaderboard_GetEntriesByIds_Native(::cordl_internals::intptr_t leaderboardName, int32_t limit, Oculus::Platform::LeaderboardStartAt startAt, ::ArrayW<uint64_t> userIDs, uint32_t userIDLength) ;

/// @brief Method ovr_Leaderboard_GetNextEntries addr 0x258d770 size 0x7c virtual false final false
static uint64_t ovr_Leaderboard_GetNextEntries(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_Leaderboard_GetPreviousEntries addr 0x258d7ec size 0x7c virtual false final false
static uint64_t ovr_Leaderboard_GetPreviousEntries(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_Leaderboard_WriteEntry addr 0x258d868 size 0xcc virtual false final false
static uint64_t ovr_Leaderboard_WriteEntry(::StringW leaderboardName, int64_t score, ::ArrayW<uint8_t> extraData, uint32_t extraDataLength, bool forceUpdate) ;

/// @brief Method ovr_Leaderboard_WriteEntry_Native addr 0x258d934 size 0xb4 virtual false final false
static uint64_t ovr_Leaderboard_WriteEntry_Native(::cordl_internals::intptr_t leaderboardName, int64_t score, ::ArrayW<uint8_t> extraData, uint32_t extraDataLength, bool forceUpdate) ;

/// @brief Method ovr_Leaderboard_WriteEntryWithSupplementaryMetric addr 0x258d9e8 size 0xdc virtual false final false
static uint64_t ovr_Leaderboard_WriteEntryWithSupplementaryMetric(::StringW leaderboardName, int64_t score, int64_t supplementaryMetric, ::ArrayW<uint8_t> extraData, uint32_t extraDataLength, bool forceUpdate) ;

/// @brief Method ovr_Leaderboard_WriteEntryWithSupplementaryMetric_Native addr 0x258dac4 size 0xbc virtual false final false
static uint64_t ovr_Leaderboard_WriteEntryWithSupplementaryMetric_Native(::cordl_internals::intptr_t leaderboardName, int64_t score, int64_t supplementaryMetric, ::ArrayW<uint8_t> extraData, uint32_t extraDataLength, bool forceUpdate) ;

/// @brief Method ovr_Livestreaming_IsAllowedForApplication addr 0x258db80 size 0x9c virtual false final false
static uint64_t ovr_Livestreaming_IsAllowedForApplication(::StringW packageName) ;

/// @brief Method ovr_Livestreaming_IsAllowedForApplication_Native addr 0x258dc1c size 0x7c virtual false final false
static uint64_t ovr_Livestreaming_IsAllowedForApplication_Native(::cordl_internals::intptr_t packageName) ;

/// @brief Method ovr_Livestreaming_StartPartyStream addr 0x258dc98 size 0x68 virtual false final false
static uint64_t ovr_Livestreaming_StartPartyStream() ;

/// @brief Method ovr_Livestreaming_StartStream addr 0x258dd00 size 0x84 virtual false final false
static uint64_t ovr_Livestreaming_StartStream(Oculus::Platform::LivestreamingAudience audience, Oculus::Platform::LivestreamingMicrophoneStatus micStatus) ;

/// @brief Method ovr_Livestreaming_StopPartyStream addr 0x258dd84 size 0x68 virtual false final false
static uint64_t ovr_Livestreaming_StopPartyStream() ;

/// @brief Method ovr_Livestreaming_StopStream addr 0x258ddec size 0x68 virtual false final false
static uint64_t ovr_Livestreaming_StopStream() ;

/// @brief Method ovr_Livestreaming_UpdateMicStatus addr 0x258de54 size 0x7c virtual false final false
static uint64_t ovr_Livestreaming_UpdateMicStatus(Oculus::Platform::LivestreamingMicrophoneStatus micStatus) ;

/// @brief Method ovr_Matchmaking_Browse addr 0x258ded0 size 0xac virtual false final false
static uint64_t ovr_Matchmaking_Browse(::StringW pool, ::cordl_internals::intptr_t customQueryData) ;

/// @brief Method ovr_Matchmaking_Browse_Native addr 0x258df7c size 0x84 virtual false final false
static uint64_t ovr_Matchmaking_Browse_Native(::cordl_internals::intptr_t pool, ::cordl_internals::intptr_t customQueryData) ;

/// @brief Method ovr_Matchmaking_Browse2 addr 0x258e000 size 0xac virtual false final false
static uint64_t ovr_Matchmaking_Browse2(::StringW pool, ::cordl_internals::intptr_t matchmakingOptions) ;

/// @brief Method ovr_Matchmaking_Browse2_Native addr 0x258e0ac size 0x84 virtual false final false
static uint64_t ovr_Matchmaking_Browse2_Native(::cordl_internals::intptr_t pool, ::cordl_internals::intptr_t matchmakingOptions) ;

/// @brief Method ovr_Matchmaking_Cancel addr 0x258e130 size 0xc8 virtual false final false
static uint64_t ovr_Matchmaking_Cancel(::StringW pool, ::StringW requestHash) ;

/// @brief Method ovr_Matchmaking_Cancel_Native addr 0x258e1f8 size 0x84 virtual false final false
static uint64_t ovr_Matchmaking_Cancel_Native(::cordl_internals::intptr_t pool, ::cordl_internals::intptr_t requestHash) ;

/// @brief Method ovr_Matchmaking_Cancel2 addr 0x258e27c size 0x68 virtual false final false
static uint64_t ovr_Matchmaking_Cancel2() ;

/// @brief Method ovr_Matchmaking_CreateAndEnqueueRoom addr 0x258e2e4 size 0xc4 virtual false final false
static uint64_t ovr_Matchmaking_CreateAndEnqueueRoom(::StringW pool, uint32_t maxUsers, bool subscribeToUpdates, ::cordl_internals::intptr_t customQueryData) ;

/// @brief Method ovr_Matchmaking_CreateAndEnqueueRoom_Native addr 0x258e3a8 size 0x9c virtual false final false
static uint64_t ovr_Matchmaking_CreateAndEnqueueRoom_Native(::cordl_internals::intptr_t pool, uint32_t maxUsers, bool subscribeToUpdates, ::cordl_internals::intptr_t customQueryData) ;

/// @brief Method ovr_Matchmaking_CreateAndEnqueueRoom2 addr 0x258e444 size 0xac virtual false final false
static uint64_t ovr_Matchmaking_CreateAndEnqueueRoom2(::StringW pool, ::cordl_internals::intptr_t matchmakingOptions) ;

/// @brief Method ovr_Matchmaking_CreateAndEnqueueRoom2_Native addr 0x258e4f0 size 0x84 virtual false final false
static uint64_t ovr_Matchmaking_CreateAndEnqueueRoom2_Native(::cordl_internals::intptr_t pool, ::cordl_internals::intptr_t matchmakingOptions) ;

/// @brief Method ovr_Matchmaking_CreateRoom addr 0x258e574 size 0xb4 virtual false final false
static uint64_t ovr_Matchmaking_CreateRoom(::StringW pool, uint32_t maxUsers, bool subscribeToUpdates) ;

/// @brief Method ovr_Matchmaking_CreateRoom_Native addr 0x258e628 size 0x94 virtual false final false
static uint64_t ovr_Matchmaking_CreateRoom_Native(::cordl_internals::intptr_t pool, uint32_t maxUsers, bool subscribeToUpdates) ;

/// @brief Method ovr_Matchmaking_CreateRoom2 addr 0x258e6bc size 0xac virtual false final false
static uint64_t ovr_Matchmaking_CreateRoom2(::StringW pool, ::cordl_internals::intptr_t matchmakingOptions) ;

/// @brief Method ovr_Matchmaking_CreateRoom2_Native addr 0x258e768 size 0x84 virtual false final false
static uint64_t ovr_Matchmaking_CreateRoom2_Native(::cordl_internals::intptr_t pool, ::cordl_internals::intptr_t matchmakingOptions) ;

/// @brief Method ovr_Matchmaking_Enqueue addr 0x258e7ec size 0xac virtual false final false
static uint64_t ovr_Matchmaking_Enqueue(::StringW pool, ::cordl_internals::intptr_t customQueryData) ;

/// @brief Method ovr_Matchmaking_Enqueue_Native addr 0x258e898 size 0x84 virtual false final false
static uint64_t ovr_Matchmaking_Enqueue_Native(::cordl_internals::intptr_t pool, ::cordl_internals::intptr_t customQueryData) ;

/// @brief Method ovr_Matchmaking_Enqueue2 addr 0x258e91c size 0xac virtual false final false
static uint64_t ovr_Matchmaking_Enqueue2(::StringW pool, ::cordl_internals::intptr_t matchmakingOptions) ;

/// @brief Method ovr_Matchmaking_Enqueue2_Native addr 0x258e9c8 size 0x84 virtual false final false
static uint64_t ovr_Matchmaking_Enqueue2_Native(::cordl_internals::intptr_t pool, ::cordl_internals::intptr_t matchmakingOptions) ;

/// @brief Method ovr_Matchmaking_EnqueueRoom addr 0x258ea4c size 0x84 virtual false final false
static uint64_t ovr_Matchmaking_EnqueueRoom(uint64_t roomID, ::cordl_internals::intptr_t customQueryData) ;

/// @brief Method ovr_Matchmaking_EnqueueRoom2 addr 0x258ead0 size 0x84 virtual false final false
static uint64_t ovr_Matchmaking_EnqueueRoom2(uint64_t roomID, ::cordl_internals::intptr_t matchmakingOptions) ;

/// @brief Method ovr_Matchmaking_GetAdminSnapshot addr 0x258eb54 size 0x68 virtual false final false
static uint64_t ovr_Matchmaking_GetAdminSnapshot() ;

/// @brief Method ovr_Matchmaking_GetStats addr 0x258ebbc size 0xb4 virtual false final false
static uint64_t ovr_Matchmaking_GetStats(::StringW pool, uint32_t maxLevel, Oculus::Platform::MatchmakingStatApproach approach) ;

/// @brief Method ovr_Matchmaking_GetStats_Native addr 0x258ec70 size 0x94 virtual false final false
static uint64_t ovr_Matchmaking_GetStats_Native(::cordl_internals::intptr_t pool, uint32_t maxLevel, Oculus::Platform::MatchmakingStatApproach approach) ;

/// @brief Method ovr_Matchmaking_JoinRoom addr 0x258ed04 size 0x84 virtual false final false
static uint64_t ovr_Matchmaking_JoinRoom(uint64_t roomID, bool subscribeToUpdates) ;

/// @brief Method ovr_Matchmaking_ReportResultInsecure addr 0x258ed88 size 0xa0 virtual false final false
static uint64_t ovr_Matchmaking_ReportResultInsecure(uint64_t roomID, ::ArrayW<Oculus::Platform::Oculus__Platform__CAPI__ovrKeyValuePair> data) ;

/// @brief Method ovr_Matchmaking_ReportResultInsecure_Native addr 0x258ee28 size 0x1a4 virtual false final false
static uint64_t ovr_Matchmaking_ReportResultInsecure_Native(uint64_t roomID, ::ArrayW<Oculus::Platform::Oculus__Platform__CAPI__ovrKeyValuePair> data, ::cordl_internals::uintptr_t numItems) ;

/// @brief Method ovr_Matchmaking_StartMatch addr 0x258efcc size 0x7c virtual false final false
static uint64_t ovr_Matchmaking_StartMatch(uint64_t roomID) ;

/// @brief Method ovr_Media_ShareToFacebook addr 0x258f048 size 0xd0 virtual false final false
static uint64_t ovr_Media_ShareToFacebook(::StringW postTextSuggestion, ::StringW filePath, Oculus::Platform::MediaContentType contentType) ;

/// @brief Method ovr_Media_ShareToFacebook_Native addr 0x258f118 size 0x94 virtual false final false
static uint64_t ovr_Media_ShareToFacebook_Native(::cordl_internals::intptr_t postTextSuggestion, ::cordl_internals::intptr_t filePath, Oculus::Platform::MediaContentType contentType) ;

/// @brief Method ovr_NetSync_Connect addr 0x258f1ac size 0x7c virtual false final false
static uint64_t ovr_NetSync_Connect(::cordl_internals::intptr_t connect_options) ;

/// @brief Method ovr_NetSync_Disconnect addr 0x258f228 size 0x7c virtual false final false
static uint64_t ovr_NetSync_Disconnect(int64_t connection_id) ;

/// @brief Method ovr_NetSync_GetSessions addr 0x258f2a4 size 0x7c virtual false final false
static uint64_t ovr_NetSync_GetSessions(int64_t connection_id) ;

/// @brief Method ovr_NetSync_GetVoipAttenuation addr 0x258f320 size 0x7c virtual false final false
static uint64_t ovr_NetSync_GetVoipAttenuation(int64_t connection_id) ;

/// @brief Method ovr_NetSync_GetVoipAttenuationDefault addr 0x258f39c size 0x68 virtual false final false
static uint64_t ovr_NetSync_GetVoipAttenuationDefault() ;

/// @brief Method ovr_NetSync_SetVoipAttenuation addr 0x258f404 size 0xac virtual false final false
static uint64_t ovr_NetSync_SetVoipAttenuation(int64_t connection_id, ::ArrayW<float_t> distances, ::ArrayW<float_t> decibels, ::cordl_internals::uintptr_t count) ;

/// @brief Method ovr_NetSync_SetVoipAttenuationModel addr 0x258f4b0 size 0xd0 virtual false final false
static uint64_t ovr_NetSync_SetVoipAttenuationModel(int64_t connection_id, ::StringW name, ::ArrayW<float_t> distances, ::ArrayW<float_t> decibels, ::cordl_internals::uintptr_t count) ;

/// @brief Method ovr_NetSync_SetVoipAttenuationModel_Native addr 0x258f580 size 0xbc virtual false final false
static uint64_t ovr_NetSync_SetVoipAttenuationModel_Native(int64_t connection_id, ::cordl_internals::intptr_t name, ::ArrayW<float_t> distances, ::ArrayW<float_t> decibels, ::cordl_internals::uintptr_t count) ;

/// @brief Method ovr_NetSync_SetVoipChannelCfg addr 0x258f63c size 0xe0 virtual false final false
static uint64_t ovr_NetSync_SetVoipChannelCfg(int64_t connection_id, ::StringW channel_name, ::StringW attnmodel, bool disable_spatialization) ;

/// @brief Method ovr_NetSync_SetVoipChannelCfg_Native addr 0x258f71c size 0x9c virtual false final false
static uint64_t ovr_NetSync_SetVoipChannelCfg_Native(int64_t connection_id, ::cordl_internals::intptr_t channel_name, ::cordl_internals::intptr_t attnmodel, bool disable_spatialization) ;

/// @brief Method ovr_NetSync_SetVoipGroup addr 0x258f7b8 size 0xb0 virtual false final false
static uint64_t ovr_NetSync_SetVoipGroup(int64_t connection_id, ::StringW group_id) ;

/// @brief Method ovr_NetSync_SetVoipGroup_Native addr 0x258f868 size 0x84 virtual false final false
static uint64_t ovr_NetSync_SetVoipGroup_Native(int64_t connection_id, ::cordl_internals::intptr_t group_id) ;

/// @brief Method ovr_NetSync_SetVoipListentoChannels addr 0x258f8ec size 0x160 virtual false final false
static uint64_t ovr_NetSync_SetVoipListentoChannels(int64_t connection_id, ::ArrayW<::StringW> listento_channels, ::cordl_internals::uintptr_t count) ;

/// @brief Method ovr_NetSync_SetVoipMicSource addr 0x258fa4c size 0x84 virtual false final false
static uint64_t ovr_NetSync_SetVoipMicSource(int64_t connection_id, Oculus::Platform::NetSyncVoipMicSource mic_source) ;

/// @brief Method ovr_NetSync_SetVoipSessionMuted addr 0x258fad0 size 0x94 virtual false final false
static uint64_t ovr_NetSync_SetVoipSessionMuted(int64_t connection_id, uint64_t session_id, bool muted) ;

/// @brief Method ovr_NetSync_SetVoipSpeaktoChannels addr 0x258fb64 size 0x160 virtual false final false
static uint64_t ovr_NetSync_SetVoipSpeaktoChannels(int64_t connection_id, ::ArrayW<::StringW> speakto_channels, ::cordl_internals::uintptr_t count) ;

/// @brief Method ovr_NetSync_SetVoipStreamMode addr 0x258fcc4 size 0x94 virtual false final false
static uint64_t ovr_NetSync_SetVoipStreamMode(int64_t connection_id, uint64_t sessionId, Oculus::Platform::NetSyncVoipStreamMode streamMode) ;

/// @brief Method ovr_Notification_GetRoomInvites addr 0x258fd58 size 0x68 virtual false final false
static uint64_t ovr_Notification_GetRoomInvites() ;

/// @brief Method ovr_Notification_MarkAsRead addr 0x258fdc0 size 0x7c virtual false final false
static uint64_t ovr_Notification_MarkAsRead(uint64_t notificationID) ;

/// @brief Method ovr_Party_Create addr 0x258fe3c size 0x68 virtual false final false
static uint64_t ovr_Party_Create() ;

/// @brief Method ovr_Party_GatherInApplication addr 0x258fea4 size 0x84 virtual false final false
static uint64_t ovr_Party_GatherInApplication(uint64_t partyID, uint64_t appID) ;

/// @brief Method ovr_Party_Get addr 0x258ff28 size 0x7c virtual false final false
static uint64_t ovr_Party_Get(uint64_t partyID) ;

/// @brief Method ovr_Party_GetCurrent addr 0x258ffa4 size 0x68 virtual false final false
static uint64_t ovr_Party_GetCurrent() ;

/// @brief Method ovr_Party_GetCurrentForUser addr 0x259000c size 0x7c virtual false final false
static uint64_t ovr_Party_GetCurrentForUser(uint64_t userID) ;

/// @brief Method ovr_Party_Invite addr 0x2590088 size 0x80 virtual false final false
static uint64_t ovr_Party_Invite(uint64_t partyID, uint64_t userID) ;

/// @brief Method ovr_Party_Join addr 0x2590108 size 0x7c virtual false final false
static uint64_t ovr_Party_Join(uint64_t partyID) ;

/// @brief Method ovr_Party_Leave addr 0x2590184 size 0x7c virtual false final false
static uint64_t ovr_Party_Leave(uint64_t partyID) ;

/// @brief Method ovr_RichPresence_Clear addr 0x2590200 size 0x68 virtual false final false
static uint64_t ovr_RichPresence_Clear() ;

/// @brief Method ovr_RichPresence_GetDestinations addr 0x2590268 size 0x68 virtual false final false
static uint64_t ovr_RichPresence_GetDestinations() ;

/// @brief Method ovr_RichPresence_Set addr 0x25902d0 size 0x7c virtual false final false
static uint64_t ovr_RichPresence_Set(::cordl_internals::intptr_t richPresenceOptions) ;

/// @brief Method ovr_RichPresence_SetDestination addr 0x259034c size 0x9c virtual false final false
static uint64_t ovr_RichPresence_SetDestination(::StringW api_name) ;

/// @brief Method ovr_RichPresence_SetDestination_Native addr 0x25903e8 size 0x7c virtual false final false
static uint64_t ovr_RichPresence_SetDestination_Native(::cordl_internals::intptr_t api_name) ;

/// @brief Method ovr_RichPresence_SetIsJoinable addr 0x2590464 size 0x7c virtual false final false
static uint64_t ovr_RichPresence_SetIsJoinable(bool is_joinable) ;

/// @brief Method ovr_RichPresence_SetLobbySession addr 0x25904e0 size 0x9c virtual false final false
static uint64_t ovr_RichPresence_SetLobbySession(::StringW id) ;

/// @brief Method ovr_RichPresence_SetLobbySession_Native addr 0x259057c size 0x7c virtual false final false
static uint64_t ovr_RichPresence_SetLobbySession_Native(::cordl_internals::intptr_t id) ;

/// @brief Method ovr_RichPresence_SetMatchSession addr 0x25905f8 size 0x9c virtual false final false
static uint64_t ovr_RichPresence_SetMatchSession(::StringW id) ;

/// @brief Method ovr_RichPresence_SetMatchSession_Native addr 0x2590694 size 0x7c virtual false final false
static uint64_t ovr_RichPresence_SetMatchSession_Native(::cordl_internals::intptr_t id) ;

/// @brief Method ovr_Room_CreateAndJoinPrivate addr 0x2590710 size 0x94 virtual false final false
static uint64_t ovr_Room_CreateAndJoinPrivate(Oculus::Platform::RoomJoinPolicy joinPolicy, uint32_t maxUsers, bool subscribeToUpdates) ;

/// @brief Method ovr_Room_CreateAndJoinPrivate2 addr 0x25907a4 size 0x94 virtual false final false
static uint64_t ovr_Room_CreateAndJoinPrivate2(Oculus::Platform::RoomJoinPolicy joinPolicy, uint32_t maxUsers, ::cordl_internals::intptr_t roomOptions) ;

/// @brief Method ovr_Room_Get addr 0x2590838 size 0x7c virtual false final false
static uint64_t ovr_Room_Get(uint64_t roomID) ;

/// @brief Method ovr_Room_GetCurrent addr 0x25908b4 size 0x68 virtual false final false
static uint64_t ovr_Room_GetCurrent() ;

/// @brief Method ovr_Room_GetCurrentForUser addr 0x259091c size 0x7c virtual false final false
static uint64_t ovr_Room_GetCurrentForUser(uint64_t userID) ;

/// @brief Method ovr_Room_GetInvitableUsers addr 0x2590998 size 0x68 virtual false final false
static uint64_t ovr_Room_GetInvitableUsers() ;

/// @brief Method ovr_Room_GetInvitableUsers2 addr 0x2590a00 size 0x7c virtual false final false
static uint64_t ovr_Room_GetInvitableUsers2(::cordl_internals::intptr_t roomOptions) ;

/// @brief Method ovr_Room_GetModeratedRooms addr 0x2590a7c size 0x68 virtual false final false
static uint64_t ovr_Room_GetModeratedRooms() ;

/// @brief Method ovr_Room_GetSocialRooms addr 0x2590ae4 size 0x7c virtual false final false
static uint64_t ovr_Room_GetSocialRooms(uint64_t appID) ;

/// @brief Method ovr_Room_InviteUser addr 0x2590b60 size 0xb0 virtual false final false
static uint64_t ovr_Room_InviteUser(uint64_t roomID, ::StringW inviteToken) ;

/// @brief Method ovr_Room_InviteUser_Native addr 0x2590c10 size 0x84 virtual false final false
static uint64_t ovr_Room_InviteUser_Native(uint64_t roomID, ::cordl_internals::intptr_t inviteToken) ;

/// @brief Method ovr_Room_Join addr 0x2590c94 size 0x84 virtual false final false
static uint64_t ovr_Room_Join(uint64_t roomID, bool subscribeToUpdates) ;

/// @brief Method ovr_Room_Join2 addr 0x2590d18 size 0x84 virtual false final false
static uint64_t ovr_Room_Join2(uint64_t roomID, ::cordl_internals::intptr_t roomOptions) ;

/// @brief Method ovr_Room_KickUser addr 0x2590d9c size 0x90 virtual false final false
static uint64_t ovr_Room_KickUser(uint64_t roomID, uint64_t userID, int32_t kickDurationSeconds) ;

/// @brief Method ovr_Room_LaunchInvitableUserFlow addr 0x2590e2c size 0x7c virtual false final false
static uint64_t ovr_Room_LaunchInvitableUserFlow(uint64_t roomID) ;

/// @brief Method ovr_Room_Leave addr 0x2590ea8 size 0x7c virtual false final false
static uint64_t ovr_Room_Leave(uint64_t roomID) ;

/// @brief Method ovr_Room_SetDescription addr 0x2590f24 size 0xb0 virtual false final false
static uint64_t ovr_Room_SetDescription(uint64_t roomID, ::StringW description) ;

/// @brief Method ovr_Room_SetDescription_Native addr 0x2590fd4 size 0x84 virtual false final false
static uint64_t ovr_Room_SetDescription_Native(uint64_t roomID, ::cordl_internals::intptr_t description) ;

/// @brief Method ovr_Room_UpdateDataStore addr 0x2591058 size 0xa0 virtual false final false
static uint64_t ovr_Room_UpdateDataStore(uint64_t roomID, ::ArrayW<Oculus::Platform::Oculus__Platform__CAPI__ovrKeyValuePair> data) ;

/// @brief Method ovr_Room_UpdateDataStore_Native addr 0x25910f8 size 0x1a0 virtual false final false
static uint64_t ovr_Room_UpdateDataStore_Native(uint64_t roomID, ::ArrayW<Oculus::Platform::Oculus__Platform__CAPI__ovrKeyValuePair> data, ::cordl_internals::uintptr_t numItems) ;

/// @brief Method ovr_Room_UpdateMembershipLockStatus addr 0x2591298 size 0x84 virtual false final false
static uint64_t ovr_Room_UpdateMembershipLockStatus(uint64_t roomID, Oculus::Platform::RoomMembershipLockStatus membershipLockStatus) ;

/// @brief Method ovr_Room_UpdateOwner addr 0x259131c size 0x84 virtual false final false
static uint64_t ovr_Room_UpdateOwner(uint64_t roomID, uint64_t userID) ;

/// @brief Method ovr_Room_UpdatePrivateRoomJoinPolicy addr 0x25913a0 size 0x84 virtual false final false
static uint64_t ovr_Room_UpdatePrivateRoomJoinPolicy(uint64_t roomID, Oculus::Platform::RoomJoinPolicy newJoinPolicy) ;

/// @brief Method ovr_User_CancelRecordingForReportFlow addr 0x2591424 size 0x9c virtual false final false
static uint64_t ovr_User_CancelRecordingForReportFlow(::StringW recordingUUID) ;

/// @brief Method ovr_User_CancelRecordingForReportFlow_Native addr 0x25914c0 size 0x7c virtual false final false
static uint64_t ovr_User_CancelRecordingForReportFlow_Native(::cordl_internals::intptr_t recordingUUID) ;

/// @brief Method ovr_User_Get addr 0x259153c size 0x7c virtual false final false
static uint64_t ovr_User_Get(uint64_t userID) ;

/// @brief Method ovr_User_GetAccessToken addr 0x25915b8 size 0x68 virtual false final false
static uint64_t ovr_User_GetAccessToken() ;

/// @brief Method ovr_User_GetBlockedUsers addr 0x2591620 size 0x68 virtual false final false
static uint64_t ovr_User_GetBlockedUsers() ;

/// @brief Method ovr_User_GetLinkedAccounts addr 0x2591688 size 0x7c virtual false final false
static uint64_t ovr_User_GetLinkedAccounts(::cordl_internals::intptr_t userOptions) ;

/// @brief Method ovr_User_GetLoggedInUser addr 0x2591704 size 0x68 virtual false final false
static uint64_t ovr_User_GetLoggedInUser() ;

/// @brief Method ovr_User_GetLoggedInUserFriends addr 0x259176c size 0x68 virtual false final false
static uint64_t ovr_User_GetLoggedInUserFriends() ;

/// @brief Method ovr_User_GetLoggedInUserFriendsAndRooms addr 0x25917d4 size 0x68 virtual false final false
static uint64_t ovr_User_GetLoggedInUserFriendsAndRooms() ;

/// @brief Method ovr_User_GetLoggedInUserRecentlyMetUsersAndRooms addr 0x259183c size 0x7c virtual false final false
static uint64_t ovr_User_GetLoggedInUserRecentlyMetUsersAndRooms(::cordl_internals::intptr_t userOptions) ;

/// @brief Method ovr_User_GetOrgScopedID addr 0x25918b8 size 0x7c virtual false final false
static uint64_t ovr_User_GetOrgScopedID(uint64_t userID) ;

/// @brief Method ovr_User_GetSdkAccounts addr 0x2591934 size 0x68 virtual false final false
static uint64_t ovr_User_GetSdkAccounts() ;

/// @brief Method ovr_User_GetUserCapabilities addr 0x259199c size 0x68 virtual false final false
static uint64_t ovr_User_GetUserCapabilities() ;

/// @brief Method ovr_User_GetUserProof addr 0x2591a04 size 0x68 virtual false final false
static uint64_t ovr_User_GetUserProof() ;

/// @brief Method ovr_User_LaunchBlockFlow addr 0x2591a6c size 0x7c virtual false final false
static uint64_t ovr_User_LaunchBlockFlow(uint64_t userID) ;

/// @brief Method ovr_User_LaunchFriendRequestFlow addr 0x2591ae8 size 0x7c virtual false final false
static uint64_t ovr_User_LaunchFriendRequestFlow(uint64_t userID) ;

/// @brief Method ovr_User_LaunchProfile addr 0x2591b64 size 0x7c virtual false final false
static uint64_t ovr_User_LaunchProfile(uint64_t userID) ;

/// @brief Method ovr_User_LaunchReportFlow addr 0x2591be0 size 0x7c virtual false final false
static uint64_t ovr_User_LaunchReportFlow(uint64_t userID) ;

/// @brief Method ovr_User_LaunchReportFlow2 addr 0x2591c5c size 0x84 virtual false final false
static uint64_t ovr_User_LaunchReportFlow2(uint64_t optionalUserID, ::cordl_internals::intptr_t abuseReportOptions) ;

/// @brief Method ovr_User_LaunchUnblockFlow addr 0x2591ce0 size 0x7c virtual false final false
static uint64_t ovr_User_LaunchUnblockFlow(uint64_t userID) ;

/// @brief Method ovr_User_NewEntitledTestUser addr 0x2591d5c size 0x68 virtual false final false
static uint64_t ovr_User_NewEntitledTestUser() ;

/// @brief Method ovr_User_NewTestUser addr 0x2591dc4 size 0x68 virtual false final false
static uint64_t ovr_User_NewTestUser() ;

/// @brief Method ovr_User_NewTestUserFriends addr 0x2591e2c size 0x68 virtual false final false
static uint64_t ovr_User_NewTestUserFriends() ;

/// @brief Method ovr_User_StartRecordingForReportFlow addr 0x2591e94 size 0x68 virtual false final false
static uint64_t ovr_User_StartRecordingForReportFlow() ;

/// @brief Method ovr_User_StopRecordingAndLaunchReportFlow addr 0x2591efc size 0xb0 virtual false final false
static uint64_t ovr_User_StopRecordingAndLaunchReportFlow(uint64_t optionalUserID, ::StringW optionalRecordingUUID) ;

/// @brief Method ovr_User_StopRecordingAndLaunchReportFlow_Native addr 0x2591fac size 0x84 virtual false final false
static uint64_t ovr_User_StopRecordingAndLaunchReportFlow_Native(uint64_t optionalUserID, ::cordl_internals::intptr_t optionalRecordingUUID) ;

/// @brief Method ovr_User_StopRecordingAndLaunchReportFlow2 addr 0x2592030 size 0xb8 virtual false final false
static uint64_t ovr_User_StopRecordingAndLaunchReportFlow2(uint64_t optionalUserID, ::StringW optionalRecordingUUID, ::cordl_internals::intptr_t abuseReportOptions) ;

/// @brief Method ovr_User_StopRecordingAndLaunchReportFlow2_Native addr 0x25920e8 size 0x94 virtual false final false
static uint64_t ovr_User_StopRecordingAndLaunchReportFlow2_Native(uint64_t optionalUserID, ::cordl_internals::intptr_t optionalRecordingUUID, ::cordl_internals::intptr_t abuseReportOptions) ;

/// @brief Method ovr_User_TestUserCreateDeviceManifest addr 0x259217c size 0xb4 virtual false final false
static uint64_t ovr_User_TestUserCreateDeviceManifest(::StringW deviceID, ::ArrayW<uint64_t> appIDs, int32_t numAppIDs) ;

/// @brief Method ovr_User_TestUserCreateDeviceManifest_Native addr 0x2592230 size 0x9c virtual false final false
static uint64_t ovr_User_TestUserCreateDeviceManifest_Native(::cordl_internals::intptr_t deviceID, ::ArrayW<uint64_t> appIDs, int32_t numAppIDs) ;

/// @brief Method ovr_UserDataStore_PrivateDeleteEntryByKey addr 0x25922cc size 0xb0 virtual false final false
static uint64_t ovr_UserDataStore_PrivateDeleteEntryByKey(uint64_t userID, ::StringW key) ;

/// @brief Method ovr_UserDataStore_PrivateDeleteEntryByKey_Native addr 0x259237c size 0x84 virtual false final false
static uint64_t ovr_UserDataStore_PrivateDeleteEntryByKey_Native(uint64_t userID, ::cordl_internals::intptr_t key) ;

/// @brief Method ovr_UserDataStore_PrivateGetEntries addr 0x2592400 size 0x7c virtual false final false
static uint64_t ovr_UserDataStore_PrivateGetEntries(uint64_t userID) ;

/// @brief Method ovr_UserDataStore_PrivateGetEntryByKey addr 0x259247c size 0xb0 virtual false final false
static uint64_t ovr_UserDataStore_PrivateGetEntryByKey(uint64_t userID, ::StringW key) ;

/// @brief Method ovr_UserDataStore_PrivateGetEntryByKey_Native addr 0x259252c size 0x84 virtual false final false
static uint64_t ovr_UserDataStore_PrivateGetEntryByKey_Native(uint64_t userID, ::cordl_internals::intptr_t key) ;

/// @brief Method ovr_UserDataStore_PrivateWriteEntry addr 0x25925b0 size 0xd0 virtual false final false
static uint64_t ovr_UserDataStore_PrivateWriteEntry(uint64_t userID, ::StringW key, ::StringW value) ;

/// @brief Method ovr_UserDataStore_PrivateWriteEntry_Native addr 0x2592680 size 0x94 virtual false final false
static uint64_t ovr_UserDataStore_PrivateWriteEntry_Native(uint64_t userID, ::cordl_internals::intptr_t key, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_UserDataStore_PublicDeleteEntryByKey addr 0x2592714 size 0xb0 virtual false final false
static uint64_t ovr_UserDataStore_PublicDeleteEntryByKey(uint64_t userID, ::StringW key) ;

/// @brief Method ovr_UserDataStore_PublicDeleteEntryByKey_Native addr 0x25927c4 size 0x84 virtual false final false
static uint64_t ovr_UserDataStore_PublicDeleteEntryByKey_Native(uint64_t userID, ::cordl_internals::intptr_t key) ;

/// @brief Method ovr_UserDataStore_PublicGetEntries addr 0x2592848 size 0x7c virtual false final false
static uint64_t ovr_UserDataStore_PublicGetEntries(uint64_t userID) ;

/// @brief Method ovr_UserDataStore_PublicGetEntryByKey addr 0x25928c4 size 0xb0 virtual false final false
static uint64_t ovr_UserDataStore_PublicGetEntryByKey(uint64_t userID, ::StringW key) ;

/// @brief Method ovr_UserDataStore_PublicGetEntryByKey_Native addr 0x2592974 size 0x84 virtual false final false
static uint64_t ovr_UserDataStore_PublicGetEntryByKey_Native(uint64_t userID, ::cordl_internals::intptr_t key) ;

/// @brief Method ovr_UserDataStore_PublicWriteEntry addr 0x25929f8 size 0xd0 virtual false final false
static uint64_t ovr_UserDataStore_PublicWriteEntry(uint64_t userID, ::StringW key, ::StringW value) ;

/// @brief Method ovr_UserDataStore_PublicWriteEntry_Native addr 0x2592ac8 size 0x94 virtual false final false
static uint64_t ovr_UserDataStore_PublicWriteEntry_Native(uint64_t userID, ::cordl_internals::intptr_t key, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_Voip_GetMicrophoneAvailability addr 0x2592b5c size 0x68 virtual false final false
static uint64_t ovr_Voip_GetMicrophoneAvailability() ;

/// @brief Method ovr_Voip_ReportAppVoipSessions addr 0x2592bc4 size 0x84 virtual false final false
static uint64_t ovr_Voip_ReportAppVoipSessions(::ArrayW<uint64_t> sessionIDs) ;

/// @brief Method ovr_Voip_SetSystemVoipSuppressed addr 0x2592c48 size 0x7c virtual false final false
static uint64_t ovr_Voip_SetSystemVoipSuppressed(bool suppressed) ;

/// @brief Method ovr_AbuseReportRecording_GetRecordingUuid addr 0x2592cc4 size 0x58 virtual false final false
static ::StringW ovr_AbuseReportRecording_GetRecordingUuid(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AbuseReportRecording_GetRecordingUuid_Native addr 0x2592d1c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_AbuseReportRecording_GetRecordingUuid_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementDefinition_GetBitfieldLength addr 0x2592d98 size 0x7c virtual false final false
static uint32_t ovr_AchievementDefinition_GetBitfieldLength(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementDefinition_GetName addr 0x2592e14 size 0x58 virtual false final false
static ::StringW ovr_AchievementDefinition_GetName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementDefinition_GetName_Native addr 0x2592e6c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_AchievementDefinition_GetName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementDefinition_GetTarget addr 0x2592ee8 size 0x7c virtual false final false
static uint64_t ovr_AchievementDefinition_GetTarget(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementDefinition_GetType addr 0x2592f64 size 0x7c virtual false final false
static Oculus::Platform::AchievementType ovr_AchievementDefinition_GetType(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementDefinitionArray_GetElement addr 0x2592fe0 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_AchievementDefinitionArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_AchievementDefinitionArray_GetNextUrl addr 0x2593064 size 0x58 virtual false final false
static ::StringW ovr_AchievementDefinitionArray_GetNextUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementDefinitionArray_GetNextUrl_Native addr 0x25930bc size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_AchievementDefinitionArray_GetNextUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementDefinitionArray_GetSize addr 0x2593138 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_AchievementDefinitionArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementDefinitionArray_HasNextPage addr 0x25931b4 size 0x84 virtual false final false
static bool ovr_AchievementDefinitionArray_HasNextPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementProgress_GetBitfield addr 0x2593238 size 0x58 virtual false final false
static ::StringW ovr_AchievementProgress_GetBitfield(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementProgress_GetBitfield_Native addr 0x2593290 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_AchievementProgress_GetBitfield_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementProgress_GetCount addr 0x259330c size 0x7c virtual false final false
static uint64_t ovr_AchievementProgress_GetCount(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementProgress_GetIsUnlocked addr 0x2593388 size 0x84 virtual false final false
static bool ovr_AchievementProgress_GetIsUnlocked(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementProgress_GetName addr 0x259340c size 0x58 virtual false final false
static ::StringW ovr_AchievementProgress_GetName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementProgress_GetName_Native addr 0x2593464 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_AchievementProgress_GetName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementProgress_GetUnlockTime addr 0x25934e0 size 0x58 virtual false final false
static System::DateTime ovr_AchievementProgress_GetUnlockTime(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementProgress_GetUnlockTime_Native addr 0x2593538 size 0x7c virtual false final false
static uint64_t ovr_AchievementProgress_GetUnlockTime_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementProgressArray_GetElement addr 0x25935b4 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_AchievementProgressArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_AchievementProgressArray_GetNextUrl addr 0x2593638 size 0x58 virtual false final false
static ::StringW ovr_AchievementProgressArray_GetNextUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementProgressArray_GetNextUrl_Native addr 0x2593690 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_AchievementProgressArray_GetNextUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementProgressArray_GetSize addr 0x259370c size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_AchievementProgressArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementProgressArray_HasNextPage addr 0x2593788 size 0x84 virtual false final false
static bool ovr_AchievementProgressArray_HasNextPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementUpdate_GetJustUnlocked addr 0x259380c size 0x84 virtual false final false
static bool ovr_AchievementUpdate_GetJustUnlocked(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementUpdate_GetName addr 0x2593890 size 0x58 virtual false final false
static ::StringW ovr_AchievementUpdate_GetName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementUpdate_GetName_Native addr 0x25938e8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_AchievementUpdate_GetName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Application_GetID addr 0x2593964 size 0x7c virtual false final false
static uint64_t ovr_Application_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ApplicationInvite_GetDestination addr 0x25939e0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_ApplicationInvite_GetDestination(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ApplicationInvite_GetID addr 0x2593a5c size 0x7c virtual false final false
static uint64_t ovr_ApplicationInvite_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ApplicationInvite_GetIsActive addr 0x2593ad8 size 0x84 virtual false final false
static bool ovr_ApplicationInvite_GetIsActive(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ApplicationInvite_GetLobbySessionId addr 0x2593b5c size 0x58 virtual false final false
static ::StringW ovr_ApplicationInvite_GetLobbySessionId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ApplicationInvite_GetLobbySessionId_Native addr 0x2593bb4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_ApplicationInvite_GetLobbySessionId_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ApplicationInvite_GetMatchSessionId addr 0x2593c30 size 0x58 virtual false final false
static ::StringW ovr_ApplicationInvite_GetMatchSessionId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ApplicationInvite_GetMatchSessionId_Native addr 0x2593c88 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_ApplicationInvite_GetMatchSessionId_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ApplicationInvite_GetRecipient addr 0x2593d04 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_ApplicationInvite_GetRecipient(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ApplicationInviteArray_GetElement addr 0x2593d80 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_ApplicationInviteArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_ApplicationInviteArray_GetNextUrl addr 0x2593e04 size 0x58 virtual false final false
static ::StringW ovr_ApplicationInviteArray_GetNextUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ApplicationInviteArray_GetNextUrl_Native addr 0x2593e5c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_ApplicationInviteArray_GetNextUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ApplicationInviteArray_GetSize addr 0x2593ed8 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_ApplicationInviteArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ApplicationInviteArray_HasNextPage addr 0x2593f54 size 0x84 virtual false final false
static bool ovr_ApplicationInviteArray_HasNextPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ApplicationVersion_GetCurrentCode addr 0x2593fd8 size 0x7c virtual false final false
static int32_t ovr_ApplicationVersion_GetCurrentCode(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ApplicationVersion_GetCurrentName addr 0x2594054 size 0x58 virtual false final false
static ::StringW ovr_ApplicationVersion_GetCurrentName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ApplicationVersion_GetCurrentName_Native addr 0x25940ac size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_ApplicationVersion_GetCurrentName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ApplicationVersion_GetLatestCode addr 0x2594128 size 0x7c virtual false final false
static int32_t ovr_ApplicationVersion_GetLatestCode(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ApplicationVersion_GetLatestName addr 0x25941a4 size 0x58 virtual false final false
static ::StringW ovr_ApplicationVersion_GetLatestName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ApplicationVersion_GetLatestName_Native addr 0x25941fc size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_ApplicationVersion_GetLatestName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetDetails_GetAssetId addr 0x2594278 size 0x7c virtual false final false
static uint64_t ovr_AssetDetails_GetAssetId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetDetails_GetAssetType addr 0x25942f4 size 0x58 virtual false final false
static ::StringW ovr_AssetDetails_GetAssetType(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetDetails_GetAssetType_Native addr 0x259434c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_AssetDetails_GetAssetType_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetDetails_GetDownloadStatus addr 0x25943c8 size 0x58 virtual false final false
static ::StringW ovr_AssetDetails_GetDownloadStatus(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetDetails_GetDownloadStatus_Native addr 0x2594420 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_AssetDetails_GetDownloadStatus_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetDetails_GetFilepath addr 0x259449c size 0x58 virtual false final false
static ::StringW ovr_AssetDetails_GetFilepath(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetDetails_GetFilepath_Native addr 0x25944f4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_AssetDetails_GetFilepath_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetDetails_GetIapStatus addr 0x2594570 size 0x58 virtual false final false
static ::StringW ovr_AssetDetails_GetIapStatus(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetDetails_GetIapStatus_Native addr 0x25945c8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_AssetDetails_GetIapStatus_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetDetails_GetLanguage addr 0x2594644 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_AssetDetails_GetLanguage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetDetails_GetMetadata addr 0x25946c0 size 0x58 virtual false final false
static ::StringW ovr_AssetDetails_GetMetadata(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetDetails_GetMetadata_Native addr 0x2594718 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_AssetDetails_GetMetadata_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetDetailsArray_GetElement addr 0x2594794 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_AssetDetailsArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_AssetDetailsArray_GetSize addr 0x2594818 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_AssetDetailsArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDeleteResult_GetAssetFileId addr 0x2594894 size 0x7c virtual false final false
static uint64_t ovr_AssetFileDeleteResult_GetAssetFileId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDeleteResult_GetAssetId addr 0x2594910 size 0x7c virtual false final false
static uint64_t ovr_AssetFileDeleteResult_GetAssetId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDeleteResult_GetFilepath addr 0x259498c size 0x58 virtual false final false
static ::StringW ovr_AssetFileDeleteResult_GetFilepath(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDeleteResult_GetFilepath_Native addr 0x25949e4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_AssetFileDeleteResult_GetFilepath_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDeleteResult_GetSuccess addr 0x2594a60 size 0x84 virtual false final false
static bool ovr_AssetFileDeleteResult_GetSuccess(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDownloadCancelResult_GetAssetFileId addr 0x2594ae4 size 0x7c virtual false final false
static uint64_t ovr_AssetFileDownloadCancelResult_GetAssetFileId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDownloadCancelResult_GetAssetId addr 0x2594b60 size 0x7c virtual false final false
static uint64_t ovr_AssetFileDownloadCancelResult_GetAssetId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDownloadCancelResult_GetFilepath addr 0x2594bdc size 0x58 virtual false final false
static ::StringW ovr_AssetFileDownloadCancelResult_GetFilepath(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDownloadCancelResult_GetFilepath_Native addr 0x2594c34 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_AssetFileDownloadCancelResult_GetFilepath_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDownloadCancelResult_GetSuccess addr 0x2594cb0 size 0x84 virtual false final false
static bool ovr_AssetFileDownloadCancelResult_GetSuccess(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDownloadResult_GetAssetId addr 0x2594d34 size 0x7c virtual false final false
static uint64_t ovr_AssetFileDownloadResult_GetAssetId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDownloadResult_GetFilepath addr 0x2594db0 size 0x58 virtual false final false
static ::StringW ovr_AssetFileDownloadResult_GetFilepath(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDownloadResult_GetFilepath_Native addr 0x2594e08 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_AssetFileDownloadResult_GetFilepath_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetAssetFileId addr 0x2594e84 size 0x7c virtual false final false
static uint64_t ovr_AssetFileDownloadUpdate_GetAssetFileId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetAssetId addr 0x2594f00 size 0x7c virtual false final false
static uint64_t ovr_AssetFileDownloadUpdate_GetAssetId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTotal addr 0x2594f7c size 0x7c virtual false final false
static uint32_t ovr_AssetFileDownloadUpdate_GetBytesTotal(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTotalLong addr 0x2594ff8 size 0x7c virtual false final false
static uint64_t ovr_AssetFileDownloadUpdate_GetBytesTotalLong(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTransferred addr 0x2595074 size 0x7c virtual false final false
static int32_t ovr_AssetFileDownloadUpdate_GetBytesTransferred(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTransferredLong addr 0x25950f0 size 0x7c virtual false final false
static int64_t ovr_AssetFileDownloadUpdate_GetBytesTransferredLong(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetCompleted addr 0x259516c size 0x84 virtual false final false
static bool ovr_AssetFileDownloadUpdate_GetCompleted(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AvatarEditorResult_GetRequestSent addr 0x25951f0 size 0x84 virtual false final false
static bool ovr_AvatarEditorResult_GetRequestSent(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_BlockedUser_GetId addr 0x2595274 size 0x7c virtual false final false
static uint64_t ovr_BlockedUser_GetId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_BlockedUserArray_GetElement addr 0x25952f0 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_BlockedUserArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_BlockedUserArray_GetNextUrl addr 0x2595374 size 0x58 virtual false final false
static ::StringW ovr_BlockedUserArray_GetNextUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_BlockedUserArray_GetNextUrl_Native addr 0x25953cc size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_BlockedUserArray_GetNextUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_BlockedUserArray_GetSize addr 0x2595448 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_BlockedUserArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_BlockedUserArray_HasNextPage addr 0x25954c4 size 0x84 virtual false final false
static bool ovr_BlockedUserArray_HasNextPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CalApplicationFinalized_GetCountdownMS addr 0x2595548 size 0x7c virtual false final false
static int32_t ovr_CalApplicationFinalized_GetCountdownMS(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CalApplicationFinalized_GetID addr 0x25955c4 size 0x7c virtual false final false
static uint64_t ovr_CalApplicationFinalized_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CalApplicationFinalized_GetLaunchDetails addr 0x2595640 size 0x58 virtual false final false
static ::StringW ovr_CalApplicationFinalized_GetLaunchDetails(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CalApplicationFinalized_GetLaunchDetails_Native addr 0x2595698 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_CalApplicationFinalized_GetLaunchDetails_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CalApplicationProposed_GetID addr 0x2595714 size 0x7c virtual false final false
static uint64_t ovr_CalApplicationProposed_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CalApplicationSuggestion_GetID addr 0x2595790 size 0x7c virtual false final false
static uint64_t ovr_CalApplicationSuggestion_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CalApplicationSuggestion_GetSocialContext addr 0x259580c size 0x58 virtual false final false
static ::StringW ovr_CalApplicationSuggestion_GetSocialContext(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CalApplicationSuggestion_GetSocialContext_Native addr 0x2595864 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_CalApplicationSuggestion_GetSocialContext_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CalApplicationSuggestionArray_GetElement addr 0x25958e0 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_CalApplicationSuggestionArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_CalApplicationSuggestionArray_GetSize addr 0x2595964 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_CalApplicationSuggestionArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Challenge_GetCreationType addr 0x25959e0 size 0x7c virtual false final false
static Oculus::Platform::ChallengeCreationType ovr_Challenge_GetCreationType(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Challenge_GetDescription addr 0x2595a5c size 0x58 virtual false final false
static ::StringW ovr_Challenge_GetDescription(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Challenge_GetDescription_Native addr 0x2595ab4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Challenge_GetDescription_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Challenge_GetEndDate addr 0x2595b30 size 0x58 virtual false final false
static System::DateTime ovr_Challenge_GetEndDate(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Challenge_GetEndDate_Native addr 0x2595b88 size 0x7c virtual false final false
static uint64_t ovr_Challenge_GetEndDate_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Challenge_GetID addr 0x2595c04 size 0x7c virtual false final false
static uint64_t ovr_Challenge_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Challenge_GetInvitedUsers addr 0x2595c80 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Challenge_GetInvitedUsers(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Challenge_GetLeaderboard addr 0x2595cfc size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Challenge_GetLeaderboard(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Challenge_GetParticipants addr 0x2595d78 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Challenge_GetParticipants(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Challenge_GetStartDate addr 0x2595df4 size 0x58 virtual false final false
static System::DateTime ovr_Challenge_GetStartDate(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Challenge_GetStartDate_Native addr 0x2595e4c size 0x7c virtual false final false
static uint64_t ovr_Challenge_GetStartDate_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Challenge_GetTitle addr 0x2595ec8 size 0x58 virtual false final false
static ::StringW ovr_Challenge_GetTitle(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Challenge_GetTitle_Native addr 0x2595f20 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Challenge_GetTitle_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Challenge_GetVisibility addr 0x2595f9c size 0x7c virtual false final false
static Oculus::Platform::ChallengeVisibility ovr_Challenge_GetVisibility(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeArray_GetElement addr 0x2596018 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_ChallengeArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_ChallengeArray_GetNextUrl addr 0x259609c size 0x58 virtual false final false
static ::StringW ovr_ChallengeArray_GetNextUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeArray_GetNextUrl_Native addr 0x25960f4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_ChallengeArray_GetNextUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeArray_GetPreviousUrl addr 0x2596170 size 0x58 virtual false final false
static ::StringW ovr_ChallengeArray_GetPreviousUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeArray_GetPreviousUrl_Native addr 0x25961c8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_ChallengeArray_GetPreviousUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeArray_GetSize addr 0x2596244 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_ChallengeArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeArray_GetTotalCount addr 0x25962c0 size 0x7c virtual false final false
static uint64_t ovr_ChallengeArray_GetTotalCount(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeArray_HasNextPage addr 0x259633c size 0x84 virtual false final false
static bool ovr_ChallengeArray_HasNextPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeArray_HasPreviousPage addr 0x25963c0 size 0x84 virtual false final false
static bool ovr_ChallengeArray_HasPreviousPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeEntry_GetDisplayScore addr 0x2596444 size 0x58 virtual false final false
static ::StringW ovr_ChallengeEntry_GetDisplayScore(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeEntry_GetDisplayScore_Native addr 0x259649c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_ChallengeEntry_GetDisplayScore_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeEntry_GetExtraData addr 0x2596518 size 0x6c virtual false final false
static ::ArrayW<uint8_t> ovr_ChallengeEntry_GetExtraData(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeEntry_GetExtraData_Native addr 0x2596600 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_ChallengeEntry_GetExtraData_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeEntry_GetExtraDataLength addr 0x259667c size 0x7c virtual false final false
static uint32_t ovr_ChallengeEntry_GetExtraDataLength(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeEntry_GetID addr 0x25966f8 size 0x7c virtual false final false
static uint64_t ovr_ChallengeEntry_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeEntry_GetRank addr 0x2596774 size 0x7c virtual false final false
static int32_t ovr_ChallengeEntry_GetRank(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeEntry_GetScore addr 0x25967f0 size 0x7c virtual false final false
static int64_t ovr_ChallengeEntry_GetScore(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeEntry_GetTimestamp addr 0x259686c size 0x58 virtual false final false
static System::DateTime ovr_ChallengeEntry_GetTimestamp(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeEntry_GetTimestamp_Native addr 0x25968c4 size 0x7c virtual false final false
static uint64_t ovr_ChallengeEntry_GetTimestamp_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeEntry_GetUser addr 0x2596940 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_ChallengeEntry_GetUser(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeEntryArray_GetElement addr 0x25969bc size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_ChallengeEntryArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_ChallengeEntryArray_GetNextUrl addr 0x2596a40 size 0x58 virtual false final false
static ::StringW ovr_ChallengeEntryArray_GetNextUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeEntryArray_GetNextUrl_Native addr 0x2596a98 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_ChallengeEntryArray_GetNextUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeEntryArray_GetPreviousUrl addr 0x2596b14 size 0x58 virtual false final false
static ::StringW ovr_ChallengeEntryArray_GetPreviousUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeEntryArray_GetPreviousUrl_Native addr 0x2596b6c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_ChallengeEntryArray_GetPreviousUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeEntryArray_GetSize addr 0x2596be8 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_ChallengeEntryArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeEntryArray_GetTotalCount addr 0x2596c64 size 0x7c virtual false final false
static uint64_t ovr_ChallengeEntryArray_GetTotalCount(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeEntryArray_HasNextPage addr 0x2596ce0 size 0x84 virtual false final false
static bool ovr_ChallengeEntryArray_HasNextPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeEntryArray_HasPreviousPage addr 0x2596d64 size 0x84 virtual false final false
static bool ovr_ChallengeEntryArray_HasPreviousPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorage2UserDirectoryPathResponse_GetPath addr 0x2596de8 size 0x58 virtual false final false
static ::StringW ovr_CloudStorage2UserDirectoryPathResponse_GetPath(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorage2UserDirectoryPathResponse_GetPath_Native addr 0x2596e40 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_CloudStorage2UserDirectoryPathResponse_GetPath_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageConflictMetadata_GetLocal addr 0x2596ebc size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_CloudStorageConflictMetadata_GetLocal(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageConflictMetadata_GetRemote addr 0x2596f38 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_CloudStorageConflictMetadata_GetRemote(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageData_GetBucket addr 0x2596fb4 size 0x58 virtual false final false
static ::StringW ovr_CloudStorageData_GetBucket(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageData_GetBucket_Native addr 0x259700c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_CloudStorageData_GetBucket_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageData_GetData addr 0x2597088 size 0x6c virtual false final false
static ::ArrayW<uint8_t> ovr_CloudStorageData_GetData(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageData_GetData_Native addr 0x2597170 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_CloudStorageData_GetData_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageData_GetDataSize addr 0x25970f4 size 0x7c virtual false final false
static uint32_t ovr_CloudStorageData_GetDataSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageData_GetKey addr 0x25971ec size 0x58 virtual false final false
static ::StringW ovr_CloudStorageData_GetKey(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageData_GetKey_Native addr 0x2597244 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_CloudStorageData_GetKey_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageMetadata_GetBucket addr 0x25972c0 size 0x58 virtual false final false
static ::StringW ovr_CloudStorageMetadata_GetBucket(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageMetadata_GetBucket_Native addr 0x2597318 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_CloudStorageMetadata_GetBucket_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageMetadata_GetCounter addr 0x2597394 size 0x7c virtual false final false
static int64_t ovr_CloudStorageMetadata_GetCounter(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageMetadata_GetDataSize addr 0x2597410 size 0x7c virtual false final false
static uint32_t ovr_CloudStorageMetadata_GetDataSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageMetadata_GetExtraData addr 0x259748c size 0x58 virtual false final false
static ::StringW ovr_CloudStorageMetadata_GetExtraData(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageMetadata_GetExtraData_Native addr 0x25974e4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_CloudStorageMetadata_GetExtraData_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageMetadata_GetKey addr 0x2597560 size 0x58 virtual false final false
static ::StringW ovr_CloudStorageMetadata_GetKey(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageMetadata_GetKey_Native addr 0x25975b8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_CloudStorageMetadata_GetKey_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageMetadata_GetSaveTime addr 0x2597634 size 0x7c virtual false final false
static uint64_t ovr_CloudStorageMetadata_GetSaveTime(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageMetadata_GetStatus addr 0x25976b0 size 0x7c virtual false final false
static Oculus::Platform::CloudStorageDataStatus ovr_CloudStorageMetadata_GetStatus(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageMetadata_GetVersionHandle addr 0x259772c size 0x58 virtual false final false
static ::StringW ovr_CloudStorageMetadata_GetVersionHandle(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageMetadata_GetVersionHandle_Native addr 0x2597784 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_CloudStorageMetadata_GetVersionHandle_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageMetadataArray_GetElement addr 0x2597800 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_CloudStorageMetadataArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_CloudStorageMetadataArray_GetNextUrl addr 0x2597884 size 0x58 virtual false final false
static ::StringW ovr_CloudStorageMetadataArray_GetNextUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageMetadataArray_GetNextUrl_Native addr 0x25978dc size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_CloudStorageMetadataArray_GetNextUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageMetadataArray_GetSize addr 0x2597958 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_CloudStorageMetadataArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageMetadataArray_HasNextPage addr 0x25979d4 size 0x84 virtual false final false
static bool ovr_CloudStorageMetadataArray_HasNextPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageUpdateResponse_GetBucket addr 0x2597a58 size 0x58 virtual false final false
static ::StringW ovr_CloudStorageUpdateResponse_GetBucket(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageUpdateResponse_GetBucket_Native addr 0x2597ab0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_CloudStorageUpdateResponse_GetBucket_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageUpdateResponse_GetKey addr 0x2597b2c size 0x58 virtual false final false
static ::StringW ovr_CloudStorageUpdateResponse_GetKey(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageUpdateResponse_GetKey_Native addr 0x2597b84 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_CloudStorageUpdateResponse_GetKey_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageUpdateResponse_GetStatus addr 0x2597c00 size 0x7c virtual false final false
static Oculus::Platform::CloudStorageUpdateStatus ovr_CloudStorageUpdateResponse_GetStatus(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageUpdateResponse_GetVersionHandle addr 0x2597c7c size 0x58 virtual false final false
static ::StringW ovr_CloudStorageUpdateResponse_GetVersionHandle(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageUpdateResponse_GetVersionHandle_Native addr 0x2597cd4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_CloudStorageUpdateResponse_GetVersionHandle_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_DataStore_Contains addr 0x2597d50 size 0xb0 virtual false final false
static uint32_t ovr_DataStore_Contains(::cordl_internals::intptr_t obj, ::StringW key) ;

/// @brief Method ovr_DataStore_Contains_Native addr 0x2597e00 size 0x84 virtual false final false
static uint32_t ovr_DataStore_Contains_Native(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t key) ;

/// @brief Method ovr_DataStore_GetKey addr 0x2585220 size 0x68 virtual false final false
static ::StringW ovr_DataStore_GetKey(::cordl_internals::intptr_t obj, int32_t index) ;

/// @brief Method ovr_DataStore_GetKey_Native addr 0x2597e84 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_DataStore_GetKey_Native(::cordl_internals::intptr_t obj, int32_t index) ;

/// @brief Method ovr_DataStore_GetNumKeys addr 0x25851a4 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_DataStore_GetNumKeys(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_DataStore_GetValue addr 0x2585288 size 0xb4 virtual false final false
static ::StringW ovr_DataStore_GetValue(::cordl_internals::intptr_t obj, ::StringW key) ;

/// @brief Method ovr_DataStore_GetValue_Native addr 0x2597f08 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_DataStore_GetValue_Native(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t key) ;

/// @brief Method ovr_Destination_GetApiName addr 0x2597f8c size 0x58 virtual false final false
static ::StringW ovr_Destination_GetApiName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Destination_GetApiName_Native addr 0x2597fe4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Destination_GetApiName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Destination_GetDeeplinkMessage addr 0x2598060 size 0x58 virtual false final false
static ::StringW ovr_Destination_GetDeeplinkMessage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Destination_GetDeeplinkMessage_Native addr 0x25980b8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Destination_GetDeeplinkMessage_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Destination_GetDisplayName addr 0x2598134 size 0x58 virtual false final false
static ::StringW ovr_Destination_GetDisplayName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Destination_GetDisplayName_Native addr 0x259818c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Destination_GetDisplayName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_DestinationArray_GetElement addr 0x2598208 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_DestinationArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_DestinationArray_GetNextUrl addr 0x259828c size 0x58 virtual false final false
static ::StringW ovr_DestinationArray_GetNextUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_DestinationArray_GetNextUrl_Native addr 0x25982e4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_DestinationArray_GetNextUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_DestinationArray_GetSize addr 0x2598360 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_DestinationArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_DestinationArray_HasNextPage addr 0x25983dc size 0x84 virtual false final false
static bool ovr_DestinationArray_HasNextPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Error_GetCode addr 0x2598460 size 0x78 virtual false final false
static int32_t ovr_Error_GetCode(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Error_GetDisplayableMessage addr 0x25984d8 size 0x58 virtual false final false
static ::StringW ovr_Error_GetDisplayableMessage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Error_GetDisplayableMessage_Native addr 0x2598530 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Error_GetDisplayableMessage_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Error_GetHttpCode addr 0x25985ac size 0x7c virtual false final false
static int32_t ovr_Error_GetHttpCode(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Error_GetMessage addr 0x2598628 size 0x58 virtual false final false
static ::StringW ovr_Error_GetMessage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Error_GetMessage_Native addr 0x2598680 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Error_GetMessage_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetDeeplinkMessage addr 0x25986fc size 0x58 virtual false final false
static ::StringW ovr_GroupPresenceJoinIntent_GetDeeplinkMessage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetDeeplinkMessage_Native addr 0x2598754 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_GroupPresenceJoinIntent_GetDeeplinkMessage_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetDestinationApiName addr 0x25987d0 size 0x58 virtual false final false
static ::StringW ovr_GroupPresenceJoinIntent_GetDestinationApiName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetDestinationApiName_Native addr 0x2598828 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_GroupPresenceJoinIntent_GetDestinationApiName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetLobbySessionId addr 0x25988a4 size 0x58 virtual false final false
static ::StringW ovr_GroupPresenceJoinIntent_GetLobbySessionId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetLobbySessionId_Native addr 0x25988fc size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_GroupPresenceJoinIntent_GetLobbySessionId_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetMatchSessionId addr 0x2598978 size 0x58 virtual false final false
static ::StringW ovr_GroupPresenceJoinIntent_GetMatchSessionId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetMatchSessionId_Native addr 0x25989d0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_GroupPresenceJoinIntent_GetMatchSessionId_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_GroupPresenceLeaveIntent_GetDestinationApiName addr 0x2598a4c size 0x58 virtual false final false
static ::StringW ovr_GroupPresenceLeaveIntent_GetDestinationApiName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_GroupPresenceLeaveIntent_GetDestinationApiName_Native addr 0x2598aa4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_GroupPresenceLeaveIntent_GetDestinationApiName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_GroupPresenceLeaveIntent_GetLobbySessionId addr 0x2598b20 size 0x58 virtual false final false
static ::StringW ovr_GroupPresenceLeaveIntent_GetLobbySessionId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_GroupPresenceLeaveIntent_GetLobbySessionId_Native addr 0x2598b78 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_GroupPresenceLeaveIntent_GetLobbySessionId_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_GroupPresenceLeaveIntent_GetMatchSessionId addr 0x2598bf4 size 0x58 virtual false final false
static ::StringW ovr_GroupPresenceLeaveIntent_GetMatchSessionId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_GroupPresenceLeaveIntent_GetMatchSessionId_Native addr 0x2598c4c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_GroupPresenceLeaveIntent_GetMatchSessionId_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_HttpTransferUpdate_GetBytes addr 0x2598cc8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_HttpTransferUpdate_GetBytes(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_HttpTransferUpdate_GetID addr 0x2598d44 size 0x7c virtual false final false
static uint64_t ovr_HttpTransferUpdate_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_HttpTransferUpdate_GetSize addr 0x2598dc0 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_HttpTransferUpdate_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_HttpTransferUpdate_IsCompleted addr 0x2598e3c size 0x84 virtual false final false
static bool ovr_HttpTransferUpdate_IsCompleted(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_InstalledApplication_GetApplicationId addr 0x2598ec0 size 0x58 virtual false final false
static ::StringW ovr_InstalledApplication_GetApplicationId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_InstalledApplication_GetApplicationId_Native addr 0x2598f18 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_InstalledApplication_GetApplicationId_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_InstalledApplication_GetPackageName addr 0x2598f94 size 0x58 virtual false final false
static ::StringW ovr_InstalledApplication_GetPackageName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_InstalledApplication_GetPackageName_Native addr 0x2598fec size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_InstalledApplication_GetPackageName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_InstalledApplication_GetStatus addr 0x2599068 size 0x58 virtual false final false
static ::StringW ovr_InstalledApplication_GetStatus(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_InstalledApplication_GetStatus_Native addr 0x25990c0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_InstalledApplication_GetStatus_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_InstalledApplication_GetVersionCode addr 0x259913c size 0x7c virtual false final false
static int32_t ovr_InstalledApplication_GetVersionCode(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_InstalledApplication_GetVersionName addr 0x25991b8 size 0x58 virtual false final false
static ::StringW ovr_InstalledApplication_GetVersionName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_InstalledApplication_GetVersionName_Native addr 0x2599210 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_InstalledApplication_GetVersionName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_InstalledApplicationArray_GetElement addr 0x259928c size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_InstalledApplicationArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_InstalledApplicationArray_GetSize addr 0x2599310 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_InstalledApplicationArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_InvitePanelResultInfo_GetInvitesSent addr 0x259938c size 0x84 virtual false final false
static bool ovr_InvitePanelResultInfo_GetInvitesSent(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LanguagePackInfo_GetEnglishName addr 0x2599410 size 0x58 virtual false final false
static ::StringW ovr_LanguagePackInfo_GetEnglishName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LanguagePackInfo_GetEnglishName_Native addr 0x2599468 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_LanguagePackInfo_GetEnglishName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LanguagePackInfo_GetNativeName addr 0x25994e4 size 0x58 virtual false final false
static ::StringW ovr_LanguagePackInfo_GetNativeName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LanguagePackInfo_GetNativeName_Native addr 0x259953c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_LanguagePackInfo_GetNativeName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LanguagePackInfo_GetTag addr 0x25995b8 size 0x58 virtual false final false
static ::StringW ovr_LanguagePackInfo_GetTag(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LanguagePackInfo_GetTag_Native addr 0x2599610 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_LanguagePackInfo_GetTag_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchBlockFlowResult_GetDidBlock addr 0x259968c size 0x84 virtual false final false
static bool ovr_LaunchBlockFlowResult_GetDidBlock(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchBlockFlowResult_GetDidCancel addr 0x2599710 size 0x84 virtual false final false
static bool ovr_LaunchBlockFlowResult_GetDidCancel(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchDetails_GetDeeplinkMessage addr 0x2599794 size 0x58 virtual false final false
static ::StringW ovr_LaunchDetails_GetDeeplinkMessage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchDetails_GetDeeplinkMessage_Native addr 0x25997ec size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_LaunchDetails_GetDeeplinkMessage_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchDetails_GetDestinationApiName addr 0x2599868 size 0x58 virtual false final false
static ::StringW ovr_LaunchDetails_GetDestinationApiName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchDetails_GetDestinationApiName_Native addr 0x25998c0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_LaunchDetails_GetDestinationApiName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchDetails_GetLaunchSource addr 0x259993c size 0x58 virtual false final false
static ::StringW ovr_LaunchDetails_GetLaunchSource(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchDetails_GetLaunchSource_Native addr 0x2599994 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_LaunchDetails_GetLaunchSource_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchDetails_GetLaunchType addr 0x2599a10 size 0x7c virtual false final false
static Oculus::Platform::LaunchType ovr_LaunchDetails_GetLaunchType(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchDetails_GetRoomID addr 0x2599a8c size 0x7c virtual false final false
static uint64_t ovr_LaunchDetails_GetRoomID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchDetails_GetTrackingID addr 0x2599b08 size 0x58 virtual false final false
static ::StringW ovr_LaunchDetails_GetTrackingID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchDetails_GetTrackingID_Native addr 0x2599b60 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_LaunchDetails_GetTrackingID_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchDetails_GetUsers addr 0x2599bdc size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_LaunchDetails_GetUsers(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchFriendRequestFlowResult_GetDidCancel addr 0x2599c58 size 0x84 virtual false final false
static bool ovr_LaunchFriendRequestFlowResult_GetDidCancel(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchFriendRequestFlowResult_GetDidSendRequest addr 0x2599cdc size 0x84 virtual false final false
static bool ovr_LaunchFriendRequestFlowResult_GetDidSendRequest(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchInvitePanelFlowResult_GetInvitedUsers addr 0x2599d60 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_LaunchInvitePanelFlowResult_GetInvitedUsers(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchReportFlowResult_GetDidCancel addr 0x2599ddc size 0x84 virtual false final false
static bool ovr_LaunchReportFlowResult_GetDidCancel(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchReportFlowResult_GetUserReportId addr 0x2599e60 size 0x7c virtual false final false
static uint64_t ovr_LaunchReportFlowResult_GetUserReportId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchUnblockFlowResult_GetDidCancel addr 0x2599edc size 0x84 virtual false final false
static bool ovr_LaunchUnblockFlowResult_GetDidCancel(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchUnblockFlowResult_GetDidUnblock addr 0x2599f60 size 0x84 virtual false final false
static bool ovr_LaunchUnblockFlowResult_GetDidUnblock(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Leaderboard_GetApiName addr 0x2599fe4 size 0x58 virtual false final false
static ::StringW ovr_Leaderboard_GetApiName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Leaderboard_GetApiName_Native addr 0x259a03c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Leaderboard_GetApiName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Leaderboard_GetDestination addr 0x259a0b8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Leaderboard_GetDestination(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Leaderboard_GetID addr 0x259a134 size 0x7c virtual false final false
static uint64_t ovr_Leaderboard_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardArray_GetElement addr 0x259a1b0 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_LeaderboardArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_LeaderboardArray_GetNextUrl addr 0x259a234 size 0x58 virtual false final false
static ::StringW ovr_LeaderboardArray_GetNextUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardArray_GetNextUrl_Native addr 0x259a28c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_LeaderboardArray_GetNextUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardArray_GetSize addr 0x259a308 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_LeaderboardArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardArray_HasNextPage addr 0x259a384 size 0x84 virtual false final false
static bool ovr_LeaderboardArray_HasNextPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntry_GetDisplayScore addr 0x259a408 size 0x58 virtual false final false
static ::StringW ovr_LeaderboardEntry_GetDisplayScore(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntry_GetDisplayScore_Native addr 0x259a460 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_LeaderboardEntry_GetDisplayScore_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntry_GetExtraData addr 0x259a4dc size 0x6c virtual false final false
static ::ArrayW<uint8_t> ovr_LeaderboardEntry_GetExtraData(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntry_GetExtraData_Native addr 0x259a548 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_LeaderboardEntry_GetExtraData_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntry_GetExtraDataLength addr 0x2596584 size 0x7c virtual false final false
static uint32_t ovr_LeaderboardEntry_GetExtraDataLength(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntry_GetID addr 0x259a5c4 size 0x7c virtual false final false
static uint64_t ovr_LeaderboardEntry_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntry_GetRank addr 0x259a640 size 0x7c virtual false final false
static int32_t ovr_LeaderboardEntry_GetRank(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntry_GetScore addr 0x259a6bc size 0x7c virtual false final false
static int64_t ovr_LeaderboardEntry_GetScore(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntry_GetSupplementaryMetric addr 0x259a738 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_LeaderboardEntry_GetSupplementaryMetric(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntry_GetTimestamp addr 0x259a7b4 size 0x58 virtual false final false
static System::DateTime ovr_LeaderboardEntry_GetTimestamp(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntry_GetTimestamp_Native addr 0x259a80c size 0x7c virtual false final false
static uint64_t ovr_LeaderboardEntry_GetTimestamp_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntry_GetUser addr 0x259a888 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_LeaderboardEntry_GetUser(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntryArray_GetElement addr 0x259a904 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_LeaderboardEntryArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_LeaderboardEntryArray_GetNextUrl addr 0x259a988 size 0x58 virtual false final false
static ::StringW ovr_LeaderboardEntryArray_GetNextUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntryArray_GetNextUrl_Native addr 0x259a9e0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_LeaderboardEntryArray_GetNextUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntryArray_GetPreviousUrl addr 0x259aa5c size 0x58 virtual false final false
static ::StringW ovr_LeaderboardEntryArray_GetPreviousUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntryArray_GetPreviousUrl_Native addr 0x259aab4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_LeaderboardEntryArray_GetPreviousUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntryArray_GetSize addr 0x259ab30 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_LeaderboardEntryArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntryArray_GetTotalCount addr 0x259abac size 0x7c virtual false final false
static uint64_t ovr_LeaderboardEntryArray_GetTotalCount(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntryArray_HasNextPage addr 0x259ac28 size 0x84 virtual false final false
static bool ovr_LeaderboardEntryArray_HasNextPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntryArray_HasPreviousPage addr 0x259acac size 0x84 virtual false final false
static bool ovr_LeaderboardEntryArray_HasPreviousPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardUpdateStatus_GetDidUpdate addr 0x259ad30 size 0x84 virtual false final false
static bool ovr_LeaderboardUpdateStatus_GetDidUpdate(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardUpdateStatus_GetUpdatedChallengeId addr 0x259adb4 size 0x84 virtual false final false
static uint64_t ovr_LeaderboardUpdateStatus_GetUpdatedChallengeId(::cordl_internals::intptr_t obj, uint32_t index) ;

/// @brief Method ovr_LeaderboardUpdateStatus_GetUpdatedChallengeIdsSize addr 0x259ae38 size 0x7c virtual false final false
static uint32_t ovr_LeaderboardUpdateStatus_GetUpdatedChallengeIdsSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LinkedAccount_GetAccessToken addr 0x259aeb4 size 0x58 virtual false final false
static ::StringW ovr_LinkedAccount_GetAccessToken(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LinkedAccount_GetAccessToken_Native addr 0x259af0c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_LinkedAccount_GetAccessToken_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LinkedAccount_GetServiceProvider addr 0x259af88 size 0x7c virtual false final false
static Oculus::Platform::ServiceProvider ovr_LinkedAccount_GetServiceProvider(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LinkedAccount_GetUserId addr 0x259b004 size 0x58 virtual false final false
static ::StringW ovr_LinkedAccount_GetUserId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LinkedAccount_GetUserId_Native addr 0x259b05c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_LinkedAccount_GetUserId_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LinkedAccountArray_GetElement addr 0x259b0d8 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_LinkedAccountArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_LinkedAccountArray_GetSize addr 0x259b15c size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_LinkedAccountArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LivestreamingApplicationStatus_GetStreamingEnabled addr 0x259b1d8 size 0x84 virtual false final false
static bool ovr_LivestreamingApplicationStatus_GetStreamingEnabled(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LivestreamingStartResult_GetStreamingResult addr 0x259b25c size 0x7c virtual false final false
static Oculus::Platform::LivestreamingStartStatus ovr_LivestreamingStartResult_GetStreamingResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LivestreamingStatus_GetCommentsVisible addr 0x259b2d8 size 0x84 virtual false final false
static bool ovr_LivestreamingStatus_GetCommentsVisible(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LivestreamingStatus_GetIsPaused addr 0x259b35c size 0x84 virtual false final false
static bool ovr_LivestreamingStatus_GetIsPaused(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LivestreamingStatus_GetLivestreamingEnabled addr 0x259b3e0 size 0x84 virtual false final false
static bool ovr_LivestreamingStatus_GetLivestreamingEnabled(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LivestreamingStatus_GetLivestreamingType addr 0x259b464 size 0x7c virtual false final false
static int32_t ovr_LivestreamingStatus_GetLivestreamingType(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LivestreamingStatus_GetMicEnabled addr 0x259b4e0 size 0x84 virtual false final false
static bool ovr_LivestreamingStatus_GetMicEnabled(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LivestreamingVideoStats_GetCommentCount addr 0x259b564 size 0x7c virtual false final false
static int32_t ovr_LivestreamingVideoStats_GetCommentCount(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LivestreamingVideoStats_GetReactionCount addr 0x259b5e0 size 0x7c virtual false final false
static int32_t ovr_LivestreamingVideoStats_GetReactionCount(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LivestreamingVideoStats_GetTotalViews addr 0x259b65c size 0x58 virtual false final false
static ::StringW ovr_LivestreamingVideoStats_GetTotalViews(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LivestreamingVideoStats_GetTotalViews_Native addr 0x259b6b4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_LivestreamingVideoStats_GetTotalViews_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingAdminSnapshot_GetCandidates addr 0x259b730 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingAdminSnapshot_GetCandidates(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingAdminSnapshot_GetMyCurrentThreshold addr 0x259b7ac size 0x7c virtual false final false
static double_t ovr_MatchmakingAdminSnapshot_GetMyCurrentThreshold(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingAdminSnapshotCandidate_GetCanMatch addr 0x259b828 size 0x84 virtual false final false
static bool ovr_MatchmakingAdminSnapshotCandidate_GetCanMatch(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingAdminSnapshotCandidate_GetMyTotalScore addr 0x259b8ac size 0x7c virtual false final false
static double_t ovr_MatchmakingAdminSnapshotCandidate_GetMyTotalScore(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingAdminSnapshotCandidate_GetTheirCurrentThreshold addr 0x259b928 size 0x7c virtual false final false
static double_t ovr_MatchmakingAdminSnapshotCandidate_GetTheirCurrentThreshold(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingAdminSnapshotCandidate_GetTheirTotalScore addr 0x259b9a4 size 0x7c virtual false final false
static double_t ovr_MatchmakingAdminSnapshotCandidate_GetTheirTotalScore(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingAdminSnapshotCandidate_GetTraceId addr 0x259ba20 size 0x58 virtual false final false
static ::StringW ovr_MatchmakingAdminSnapshotCandidate_GetTraceId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingAdminSnapshotCandidate_GetTraceId_Native addr 0x259ba78 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingAdminSnapshotCandidate_GetTraceId_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingAdminSnapshotCandidateArray_GetElement addr 0x259baf4 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingAdminSnapshotCandidateArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_MatchmakingAdminSnapshotCandidateArray_GetSize addr 0x259bb78 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_MatchmakingAdminSnapshotCandidateArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingBrowseResult_GetEnqueueResult addr 0x259bbf4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingBrowseResult_GetEnqueueResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingBrowseResult_GetRooms addr 0x259bc70 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingBrowseResult_GetRooms(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingCandidate_GetEntryHash addr 0x259bcec size 0x58 virtual false final false
static ::StringW ovr_MatchmakingCandidate_GetEntryHash(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingCandidate_GetEntryHash_Native addr 0x259bd44 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingCandidate_GetEntryHash_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingCandidate_GetUserId addr 0x259bdc0 size 0x7c virtual false final false
static uint64_t ovr_MatchmakingCandidate_GetUserId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingCandidateArray_GetElement addr 0x259be3c size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingCandidateArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_MatchmakingCandidateArray_GetNextUrl addr 0x259bec0 size 0x58 virtual false final false
static ::StringW ovr_MatchmakingCandidateArray_GetNextUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingCandidateArray_GetNextUrl_Native addr 0x259bf18 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingCandidateArray_GetNextUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingCandidateArray_GetSize addr 0x259bf94 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_MatchmakingCandidateArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingCandidateArray_HasNextPage addr 0x259c010 size 0x84 virtual false final false
static bool ovr_MatchmakingCandidateArray_HasNextPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingEnqueueResult_GetAdminSnapshot addr 0x259c094 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingEnqueueResult_GetAdminSnapshot(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingEnqueueResult_GetAverageWait addr 0x259c110 size 0x7c virtual false final false
static uint32_t ovr_MatchmakingEnqueueResult_GetAverageWait(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingEnqueueResult_GetMatchesInLastHourCount addr 0x259c18c size 0x7c virtual false final false
static uint32_t ovr_MatchmakingEnqueueResult_GetMatchesInLastHourCount(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingEnqueueResult_GetMaxExpectedWait addr 0x259c208 size 0x7c virtual false final false
static uint32_t ovr_MatchmakingEnqueueResult_GetMaxExpectedWait(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingEnqueueResult_GetPool addr 0x259c284 size 0x58 virtual false final false
static ::StringW ovr_MatchmakingEnqueueResult_GetPool(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingEnqueueResult_GetPool_Native addr 0x259c2dc size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingEnqueueResult_GetPool_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingEnqueueResult_GetRecentMatchPercentage addr 0x259c358 size 0x7c virtual false final false
static uint32_t ovr_MatchmakingEnqueueResult_GetRecentMatchPercentage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingEnqueueResult_GetRequestHash addr 0x259c3d4 size 0x58 virtual false final false
static ::StringW ovr_MatchmakingEnqueueResult_GetRequestHash(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingEnqueueResult_GetRequestHash_Native addr 0x259c42c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingEnqueueResult_GetRequestHash_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingEnqueueResultAndRoom_GetMatchmakingEnqueueResult addr 0x259c4a8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingEnqueueResultAndRoom_GetMatchmakingEnqueueResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingEnqueueResultAndRoom_GetRoom addr 0x259c524 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingEnqueueResultAndRoom_GetRoom(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingEnqueuedUser_GetAdditionalUserID addr 0x259c5a0 size 0x84 virtual false final false
static uint64_t ovr_MatchmakingEnqueuedUser_GetAdditionalUserID(::cordl_internals::intptr_t obj, uint32_t index) ;

/// @brief Method ovr_MatchmakingEnqueuedUser_GetAdditionalUserIDsSize addr 0x259c624 size 0x7c virtual false final false
static uint32_t ovr_MatchmakingEnqueuedUser_GetAdditionalUserIDsSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingEnqueuedUser_GetCustomData addr 0x259c6a0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingEnqueuedUser_GetCustomData(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingEnqueuedUser_GetUser addr 0x259c71c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingEnqueuedUser_GetUser(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingEnqueuedUserArray_GetElement addr 0x259c798 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingEnqueuedUserArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_MatchmakingEnqueuedUserArray_GetSize addr 0x259c81c size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_MatchmakingEnqueuedUserArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingNotification_GetAddedByUserId addr 0x259c898 size 0x7c virtual false final false
static uint64_t ovr_MatchmakingNotification_GetAddedByUserId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingNotification_GetRoom addr 0x259c914 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingNotification_GetRoom(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingNotification_GetTraceId addr 0x259c990 size 0x58 virtual false final false
static ::StringW ovr_MatchmakingNotification_GetTraceId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingNotification_GetTraceId_Native addr 0x259c9e8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingNotification_GetTraceId_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingRoom_GetPingTime addr 0x259ca64 size 0x7c virtual false final false
static uint32_t ovr_MatchmakingRoom_GetPingTime(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingRoom_GetRoom addr 0x259cae0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingRoom_GetRoom(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingRoom_HasPingTime addr 0x259cb5c size 0x84 virtual false final false
static bool ovr_MatchmakingRoom_HasPingTime(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingRoomArray_GetElement addr 0x259cbe0 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingRoomArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_MatchmakingRoomArray_GetSize addr 0x259cc64 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_MatchmakingRoomArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingStats_GetDrawCount addr 0x259cce0 size 0x7c virtual false final false
static uint32_t ovr_MatchmakingStats_GetDrawCount(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingStats_GetLossCount addr 0x259cd5c size 0x7c virtual false final false
static uint32_t ovr_MatchmakingStats_GetLossCount(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingStats_GetSkillLevel addr 0x259cdd8 size 0x7c virtual false final false
static uint32_t ovr_MatchmakingStats_GetSkillLevel(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingStats_GetSkillMean addr 0x259ce54 size 0x7c virtual false final false
static double_t ovr_MatchmakingStats_GetSkillMean(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingStats_GetSkillStandardDeviation addr 0x259ced0 size 0x7c virtual false final false
static double_t ovr_MatchmakingStats_GetSkillStandardDeviation(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingStats_GetWinCount addr 0x259cf4c size 0x7c virtual false final false
static uint32_t ovr_MatchmakingStats_GetWinCount(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetAbuseReportRecording addr 0x259cfc8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetAbuseReportRecording(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetAchievementDefinitionArray addr 0x259d044 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetAchievementDefinitionArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetAchievementProgressArray addr 0x259d0c0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetAchievementProgressArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetAchievementUpdate addr 0x259d13c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetAchievementUpdate(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetApplicationInviteArray addr 0x259d1b8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetApplicationInviteArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetApplicationVersion addr 0x259d234 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetApplicationVersion(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetAssetDetails addr 0x259d2b0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetAssetDetails(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetAssetDetailsArray addr 0x259d32c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetAssetDetailsArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetAssetFileDeleteResult addr 0x259d3a8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetAssetFileDeleteResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetAssetFileDownloadCancelResult addr 0x259d424 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetAssetFileDownloadCancelResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetAssetFileDownloadResult addr 0x259d4a0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetAssetFileDownloadResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetAssetFileDownloadUpdate addr 0x259d51c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetAssetFileDownloadUpdate(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetAvatarEditorResult addr 0x259d598 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetAvatarEditorResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetBlockedUserArray addr 0x259d614 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetBlockedUserArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetCalApplicationFinalized addr 0x259d690 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetCalApplicationFinalized(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetCalApplicationProposed addr 0x259d70c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetCalApplicationProposed(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetCalApplicationSuggestionArray addr 0x259d788 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetCalApplicationSuggestionArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetChallenge addr 0x259d804 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetChallenge(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetChallengeArray addr 0x259d880 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetChallengeArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetChallengeEntryArray addr 0x259d8fc size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetChallengeEntryArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetCloudStorageConflictMetadata addr 0x259d978 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetCloudStorageConflictMetadata(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetCloudStorageData addr 0x259d9f4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetCloudStorageData(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetCloudStorageMetadata addr 0x259da70 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetCloudStorageMetadata(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetCloudStorageMetadataArray addr 0x259daec size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetCloudStorageMetadataArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetCloudStorageUpdateResponse addr 0x259db68 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetCloudStorageUpdateResponse(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetDataStore addr 0x259dbe4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetDataStore(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetDestinationArray addr 0x259dc60 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetDestinationArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetError addr 0x259dcdc size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetError(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetGroupPresenceJoinIntent addr 0x259dd58 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetGroupPresenceJoinIntent(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetGroupPresenceLeaveIntent addr 0x259ddd4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetGroupPresenceLeaveIntent(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetHttpTransferUpdate addr 0x259de50 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetHttpTransferUpdate(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetInstalledApplicationArray addr 0x259decc size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetInstalledApplicationArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetInvitePanelResultInfo addr 0x259df48 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetInvitePanelResultInfo(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetLaunchBlockFlowResult addr 0x259dfc4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetLaunchBlockFlowResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetLaunchFriendRequestFlowResult addr 0x259e040 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetLaunchFriendRequestFlowResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetLaunchInvitePanelFlowResult addr 0x259e0bc size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetLaunchInvitePanelFlowResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetLaunchReportFlowResult addr 0x259e138 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetLaunchReportFlowResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetLaunchUnblockFlowResult addr 0x259e1b4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetLaunchUnblockFlowResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetLeaderboardArray addr 0x259e230 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetLeaderboardArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetLeaderboardEntryArray addr 0x259e2ac size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetLeaderboardEntryArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetLeaderboardUpdateStatus addr 0x259e328 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetLeaderboardUpdateStatus(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetLinkedAccountArray addr 0x259e3a4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetLinkedAccountArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetLivestreamingApplicationStatus addr 0x259e420 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetLivestreamingApplicationStatus(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetLivestreamingStartResult addr 0x259e49c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetLivestreamingStartResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetLivestreamingStatus addr 0x259e518 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetLivestreamingStatus(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetLivestreamingVideoStats addr 0x259e594 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetLivestreamingVideoStats(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetMatchmakingAdminSnapshot addr 0x259e610 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetMatchmakingAdminSnapshot(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetMatchmakingBrowseResult addr 0x259e68c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetMatchmakingBrowseResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetMatchmakingEnqueueResult addr 0x259e708 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetMatchmakingEnqueueResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetMatchmakingEnqueueResultAndRoom addr 0x259e784 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetMatchmakingEnqueueResultAndRoom(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetMatchmakingRoomArray addr 0x259e800 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetMatchmakingRoomArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetMatchmakingStats addr 0x259e87c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetMatchmakingStats(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetMicrophoneAvailabilityState addr 0x259e8f8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetMicrophoneAvailabilityState(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetNativeMessage addr 0x259e974 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetNativeMessage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetNetSyncConnection addr 0x259e9f0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetNetSyncConnection(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetNetSyncSessionArray addr 0x259ea6c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetNetSyncSessionArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetNetSyncSessionsChangedNotification addr 0x259eae8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetNetSyncSessionsChangedNotification(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetNetSyncSetSessionPropertyResult addr 0x259eb64 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetNetSyncSetSessionPropertyResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetNetSyncVoipAttenuationValueArray addr 0x259ebe0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetNetSyncVoipAttenuationValueArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetNetworkingPeer addr 0x259ec5c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetNetworkingPeer(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetOrgScopedID addr 0x259ecd8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetOrgScopedID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetParty addr 0x259ed54 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetParty(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetPartyID addr 0x259edd0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetPartyID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetPartyUpdateNotification addr 0x259ee4c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetPartyUpdateNotification(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetPidArray addr 0x259eec8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetPidArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetPingResult addr 0x259ef44 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetPingResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetPlatformInitialize addr 0x259efc0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetPlatformInitialize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetProductArray addr 0x259f03c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetProductArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetPurchase addr 0x259f0b8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetPurchase(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetPurchaseArray addr 0x259f134 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetPurchaseArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetRejoinDialogResult addr 0x259f1b0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetRejoinDialogResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetRequestID addr 0x259f22c size 0x7c virtual false final false
static uint64_t ovr_Message_GetRequestID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetRoom addr 0x259f2a8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetRoom(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetRoomArray addr 0x259f324 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetRoomArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetRoomInviteNotification addr 0x259f3a0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetRoomInviteNotification(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetRoomInviteNotificationArray addr 0x259f41c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetRoomInviteNotificationArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetSdkAccountArray addr 0x259f498 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetSdkAccountArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetSendInvitesResult addr 0x259f514 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetSendInvitesResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetShareMediaResult addr 0x259f590 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetShareMediaResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetString addr 0x259f60c size 0x58 virtual false final false
static ::StringW ovr_Message_GetString(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetString_Native addr 0x259f664 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetString_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetSystemVoipState addr 0x259f6e0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetSystemVoipState(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetType addr 0x259f75c size 0x7c virtual false final false
static Oculus::Platform::Oculus__Platform__Message__MessageType ovr_Message_GetType(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetUser addr 0x259f7d8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetUser(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetUserAndRoomArray addr 0x259f854 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetUserAndRoomArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetUserArray addr 0x259f8d0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetUserArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetUserCapabilityArray addr 0x259f94c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetUserCapabilityArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetUserDataStoreUpdateResponse addr 0x259f9c8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetUserDataStoreUpdateResponse(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetUserProof addr 0x259fa44 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetUserProof(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetUserReportID addr 0x259fac0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetUserReportID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_IsError addr 0x259fb3c size 0x84 virtual false final false
static bool ovr_Message_IsError(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Microphone_GetNumSamplesAvailable addr 0x259fbc0 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_Microphone_GetNumSamplesAvailable(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Microphone_GetOutputBufferMaxSize addr 0x259fc3c size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_Microphone_GetOutputBufferMaxSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Microphone_GetPCM addr 0x259fcb8 size 0x9c virtual false final false
static ::cordl_internals::uintptr_t ovr_Microphone_GetPCM(::cordl_internals::intptr_t obj, ::ArrayW<int16_t> outputBuffer, ::cordl_internals::uintptr_t outputBufferNumElements) ;

/// @brief Method ovr_Microphone_GetPCMFloat addr 0x259fd54 size 0x9c virtual false final false
static ::cordl_internals::uintptr_t ovr_Microphone_GetPCMFloat(::cordl_internals::intptr_t obj, ::ArrayW<float_t> outputBuffer, ::cordl_internals::uintptr_t outputBufferNumElements) ;

/// @brief Method ovr_Microphone_ReadData addr 0x259fdf0 size 0x9c virtual false final false
static ::cordl_internals::uintptr_t ovr_Microphone_ReadData(::cordl_internals::intptr_t obj, ::ArrayW<float_t> outputBuffer, ::cordl_internals::uintptr_t outputBufferSize) ;

/// @brief Method ovr_Microphone_SetAcceptableRecordingDelayHint addr 0x259fe8c size 0x84 virtual false final false
static void ovr_Microphone_SetAcceptableRecordingDelayHint(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t delayMs) ;

/// @brief Method ovr_Microphone_Start addr 0x259ff10 size 0x7c virtual false final false
static void ovr_Microphone_Start(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Microphone_Stop addr 0x259ff8c size 0x7c virtual false final false
static void ovr_Microphone_Stop(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MicrophoneAvailabilityState_GetMicrophoneAvailable addr 0x25a0008 size 0x84 virtual false final false
static bool ovr_MicrophoneAvailabilityState_GetMicrophoneAvailable(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetSyncConnection_GetConnectionId addr 0x25a008c size 0x7c virtual false final false
static int64_t ovr_NetSyncConnection_GetConnectionId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetSyncConnection_GetDisconnectReason addr 0x25a0108 size 0x7c virtual false final false
static Oculus::Platform::NetSyncDisconnectReason ovr_NetSyncConnection_GetDisconnectReason(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetSyncConnection_GetSessionId addr 0x25a0184 size 0x7c virtual false final false
static uint64_t ovr_NetSyncConnection_GetSessionId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetSyncConnection_GetStatus addr 0x25a0200 size 0x7c virtual false final false
static Oculus::Platform::NetSyncConnectionStatus ovr_NetSyncConnection_GetStatus(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetSyncConnection_GetZoneId addr 0x25a027c size 0x58 virtual false final false
static ::StringW ovr_NetSyncConnection_GetZoneId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetSyncConnection_GetZoneId_Native addr 0x25a02d4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_NetSyncConnection_GetZoneId_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetSyncSession_GetConnectionId addr 0x25a0350 size 0x7c virtual false final false
static int64_t ovr_NetSyncSession_GetConnectionId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetSyncSession_GetMuted addr 0x25a03cc size 0x84 virtual false final false
static bool ovr_NetSyncSession_GetMuted(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetSyncSession_GetSessionId addr 0x25a0450 size 0x7c virtual false final false
static uint64_t ovr_NetSyncSession_GetSessionId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetSyncSession_GetUserId addr 0x25a04cc size 0x7c virtual false final false
static uint64_t ovr_NetSyncSession_GetUserId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetSyncSession_GetVoipGroup addr 0x25a0548 size 0x58 virtual false final false
static ::StringW ovr_NetSyncSession_GetVoipGroup(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetSyncSession_GetVoipGroup_Native addr 0x25a05a0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_NetSyncSession_GetVoipGroup_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetSyncSessionArray_GetElement addr 0x25a061c size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_NetSyncSessionArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_NetSyncSessionArray_GetSize addr 0x25a06a0 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_NetSyncSessionArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetSyncSessionsChangedNotification_GetConnectionId addr 0x25a071c size 0x7c virtual false final false
static int64_t ovr_NetSyncSessionsChangedNotification_GetConnectionId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetSyncSessionsChangedNotification_GetSessions addr 0x25a0798 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_NetSyncSessionsChangedNotification_GetSessions(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetSyncSetSessionPropertyResult_GetSession addr 0x25a0814 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_NetSyncSetSessionPropertyResult_GetSession(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetSyncVoipAttenuationValue_GetDecibels addr 0x25a0890 size 0x7c virtual false final false
static float_t ovr_NetSyncVoipAttenuationValue_GetDecibels(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetSyncVoipAttenuationValue_GetDistance addr 0x25a090c size 0x7c virtual false final false
static float_t ovr_NetSyncVoipAttenuationValue_GetDistance(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetSyncVoipAttenuationValueArray_GetElement addr 0x25a0988 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_NetSyncVoipAttenuationValueArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_NetSyncVoipAttenuationValueArray_GetSize addr 0x25a0a0c size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_NetSyncVoipAttenuationValueArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetworkingPeer_GetID addr 0x25a0a88 size 0x7c virtual false final false
static uint64_t ovr_NetworkingPeer_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetworkingPeer_GetState addr 0x25a0b04 size 0x7c virtual false final false
static Oculus::Platform::PeerConnectionState ovr_NetworkingPeer_GetState(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_OrgScopedID_GetID addr 0x25a0b80 size 0x7c virtual false final false
static uint64_t ovr_OrgScopedID_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Packet_Free addr 0x25a0bfc size 0x7c virtual false final false
static void ovr_Packet_Free(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Packet_GetBytes addr 0x25a0c78 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Packet_GetBytes(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Packet_GetSendPolicy addr 0x25a0cf4 size 0x7c virtual false final false
static Oculus::Platform::SendPolicy ovr_Packet_GetSendPolicy(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Packet_GetSenderID addr 0x25a0d70 size 0x7c virtual false final false
static uint64_t ovr_Packet_GetSenderID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Packet_GetSize addr 0x25a0dec size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_Packet_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Party_GetID addr 0x25a0e68 size 0x7c virtual false final false
static uint64_t ovr_Party_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Party_GetInvitedUsers addr 0x25a0ee4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Party_GetInvitedUsers(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Party_GetLeader addr 0x25a0f60 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Party_GetLeader(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Party_GetRoom addr 0x25a0fdc size 0x78 virtual false final false
static ::cordl_internals::intptr_t ovr_Party_GetRoom(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Party_GetUsers addr 0x25a1054 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Party_GetUsers(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PartyID_GetID addr 0x25a10d0 size 0x78 virtual false final false
static uint64_t ovr_PartyID_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetAction addr 0x25a1148 size 0x7c virtual false final false
static Oculus::Platform::PartyUpdateAction ovr_PartyUpdateNotification_GetAction(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetPartyId addr 0x25a11c4 size 0x7c virtual false final false
static uint64_t ovr_PartyUpdateNotification_GetPartyId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetSenderId addr 0x25a1240 size 0x7c virtual false final false
static uint64_t ovr_PartyUpdateNotification_GetSenderId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUpdateTimestamp addr 0x25a12bc size 0x58 virtual false final false
static ::StringW ovr_PartyUpdateNotification_GetUpdateTimestamp(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUpdateTimestamp_Native addr 0x25a1314 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_PartyUpdateNotification_GetUpdateTimestamp_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUserAlias addr 0x25a1390 size 0x58 virtual false final false
static ::StringW ovr_PartyUpdateNotification_GetUserAlias(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUserAlias_Native addr 0x25a13e8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_PartyUpdateNotification_GetUserAlias_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUserId addr 0x25a1464 size 0x7c virtual false final false
static uint64_t ovr_PartyUpdateNotification_GetUserId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUserName addr 0x25a14e0 size 0x58 virtual false final false
static ::StringW ovr_PartyUpdateNotification_GetUserName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUserName_Native addr 0x25a1538 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_PartyUpdateNotification_GetUserName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Pid_GetId addr 0x25a15b4 size 0x58 virtual false final false
static ::StringW ovr_Pid_GetId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Pid_GetId_Native addr 0x25a160c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Pid_GetId_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PidArray_GetElement addr 0x25a1688 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_PidArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_PidArray_GetSize addr 0x25a170c size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_PidArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PingResult_GetID addr 0x25a1788 size 0x7c virtual false final false
static uint64_t ovr_PingResult_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PingResult_GetPingTimeUsec addr 0x25a1804 size 0x7c virtual false final false
static uint64_t ovr_PingResult_GetPingTimeUsec(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PingResult_IsTimeout addr 0x25a1880 size 0x84 virtual false final false
static bool ovr_PingResult_IsTimeout(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PlatformInitialize_GetResult addr 0x25a1904 size 0x7c virtual false final false
static Oculus::Platform::PlatformInitializeResult ovr_PlatformInitialize_GetResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Price_GetAmountInHundredths addr 0x25a1980 size 0x7c virtual false final false
static uint32_t ovr_Price_GetAmountInHundredths(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Price_GetCurrency addr 0x25a19fc size 0x58 virtual false final false
static ::StringW ovr_Price_GetCurrency(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Price_GetCurrency_Native addr 0x25a1a54 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Price_GetCurrency_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Price_GetFormatted addr 0x25a1ad0 size 0x58 virtual false final false
static ::StringW ovr_Price_GetFormatted(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Price_GetFormatted_Native addr 0x25a1b28 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Price_GetFormatted_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Product_GetDescription addr 0x25a1ba4 size 0x58 virtual false final false
static ::StringW ovr_Product_GetDescription(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Product_GetDescription_Native addr 0x25a1bfc size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Product_GetDescription_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Product_GetFormattedPrice addr 0x25a1c78 size 0x58 virtual false final false
static ::StringW ovr_Product_GetFormattedPrice(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Product_GetFormattedPrice_Native addr 0x25a1cd0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Product_GetFormattedPrice_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Product_GetName addr 0x25a1d4c size 0x58 virtual false final false
static ::StringW ovr_Product_GetName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Product_GetName_Native addr 0x25a1da4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Product_GetName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Product_GetSKU addr 0x25a1e20 size 0x58 virtual false final false
static ::StringW ovr_Product_GetSKU(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Product_GetSKU_Native addr 0x25a1e78 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Product_GetSKU_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ProductArray_GetElement addr 0x25a1ef4 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_ProductArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_ProductArray_GetNextUrl addr 0x25a1f78 size 0x58 virtual false final false
static ::StringW ovr_ProductArray_GetNextUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ProductArray_GetNextUrl_Native addr 0x25a1fd0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_ProductArray_GetNextUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ProductArray_GetSize addr 0x25a204c size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_ProductArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ProductArray_HasNextPage addr 0x25a20c8 size 0x84 virtual false final false
static bool ovr_ProductArray_HasNextPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Purchase_GetDeveloperPayload addr 0x25a214c size 0x58 virtual false final false
static ::StringW ovr_Purchase_GetDeveloperPayload(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Purchase_GetDeveloperPayload_Native addr 0x25a21a4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Purchase_GetDeveloperPayload_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Purchase_GetExpirationTime addr 0x25a2220 size 0x58 virtual false final false
static System::DateTime ovr_Purchase_GetExpirationTime(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Purchase_GetExpirationTime_Native addr 0x25a2278 size 0x7c virtual false final false
static uint64_t ovr_Purchase_GetExpirationTime_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Purchase_GetGrantTime addr 0x25a22f4 size 0x58 virtual false final false
static System::DateTime ovr_Purchase_GetGrantTime(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Purchase_GetGrantTime_Native addr 0x25a234c size 0x7c virtual false final false
static uint64_t ovr_Purchase_GetGrantTime_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Purchase_GetPurchaseID addr 0x25a23c8 size 0x7c virtual false final false
static uint64_t ovr_Purchase_GetPurchaseID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Purchase_GetPurchaseStrID addr 0x25a2444 size 0x58 virtual false final false
static ::StringW ovr_Purchase_GetPurchaseStrID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Purchase_GetPurchaseStrID_Native addr 0x25a249c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Purchase_GetPurchaseStrID_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Purchase_GetReportingId addr 0x25a2518 size 0x58 virtual false final false
static ::StringW ovr_Purchase_GetReportingId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Purchase_GetReportingId_Native addr 0x25a2570 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Purchase_GetReportingId_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Purchase_GetSKU addr 0x25a25ec size 0x58 virtual false final false
static ::StringW ovr_Purchase_GetSKU(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Purchase_GetSKU_Native addr 0x25a2644 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Purchase_GetSKU_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PurchaseArray_GetElement addr 0x25a26c0 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_PurchaseArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_PurchaseArray_GetNextUrl addr 0x25a2744 size 0x58 virtual false final false
static ::StringW ovr_PurchaseArray_GetNextUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PurchaseArray_GetNextUrl_Native addr 0x25a279c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_PurchaseArray_GetNextUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PurchaseArray_GetSize addr 0x25a2818 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_PurchaseArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PurchaseArray_HasNextPage addr 0x25a2894 size 0x84 virtual false final false
static bool ovr_PurchaseArray_HasNextPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_RejoinDialogResult_GetRejoinSelected addr 0x25a2918 size 0x84 virtual false final false
static bool ovr_RejoinDialogResult_GetRejoinSelected(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Room_GetApplicationID addr 0x25a299c size 0x7c virtual false final false
static uint64_t ovr_Room_GetApplicationID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Room_GetDataStore addr 0x25a2a18 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Room_GetDataStore(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Room_GetDescription addr 0x25a2a94 size 0x58 virtual false final false
static ::StringW ovr_Room_GetDescription(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Room_GetDescription_Native addr 0x25a2aec size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Room_GetDescription_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Room_GetID addr 0x25a2b68 size 0x7c virtual false final false
static uint64_t ovr_Room_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Room_GetInvitedUsers addr 0x25a2be4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Room_GetInvitedUsers(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Room_GetIsMembershipLocked addr 0x25a2c60 size 0x84 virtual false final false
static bool ovr_Room_GetIsMembershipLocked(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Room_GetJoinPolicy addr 0x25a2ce4 size 0x7c virtual false final false
static Oculus::Platform::RoomJoinPolicy ovr_Room_GetJoinPolicy(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Room_GetJoinability addr 0x25a2d60 size 0x7c virtual false final false
static Oculus::Platform::RoomJoinability ovr_Room_GetJoinability(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Room_GetMatchedUsers addr 0x25a2ddc size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Room_GetMatchedUsers(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Room_GetMaxUsers addr 0x25a2e58 size 0x7c virtual false final false
static uint32_t ovr_Room_GetMaxUsers(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Room_GetName addr 0x25a2ed4 size 0x58 virtual false final false
static ::StringW ovr_Room_GetName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Room_GetName_Native addr 0x25a2f2c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Room_GetName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Room_GetOwner addr 0x25a2fa8 size 0x78 virtual false final false
static ::cordl_internals::intptr_t ovr_Room_GetOwner(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Room_GetTeams addr 0x25a3020 size 0x78 virtual false final false
static ::cordl_internals::intptr_t ovr_Room_GetTeams(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Room_GetType addr 0x25a3098 size 0x7c virtual false final false
static Oculus::Platform::RoomType ovr_Room_GetType(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Room_GetUsers addr 0x25a3114 size 0x78 virtual false final false
static ::cordl_internals::intptr_t ovr_Room_GetUsers(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Room_GetVersion addr 0x25a318c size 0x7c virtual false final false
static uint32_t ovr_Room_GetVersion(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_RoomArray_GetElement addr 0x25a3208 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_RoomArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_RoomArray_GetNextUrl addr 0x25a328c size 0x58 virtual false final false
static ::StringW ovr_RoomArray_GetNextUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_RoomArray_GetNextUrl_Native addr 0x25a32e4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_RoomArray_GetNextUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_RoomArray_GetSize addr 0x25a3360 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_RoomArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_RoomArray_HasNextPage addr 0x25a33dc size 0x84 virtual false final false
static bool ovr_RoomArray_HasNextPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_RoomInviteNotification_GetID addr 0x25a3460 size 0x7c virtual false final false
static uint64_t ovr_RoomInviteNotification_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_RoomInviteNotification_GetRoomID addr 0x25a34dc size 0x7c virtual false final false
static uint64_t ovr_RoomInviteNotification_GetRoomID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_RoomInviteNotification_GetSenderID addr 0x25a3558 size 0x7c virtual false final false
static uint64_t ovr_RoomInviteNotification_GetSenderID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_RoomInviteNotification_GetSentTime addr 0x25a35d4 size 0x58 virtual false final false
static System::DateTime ovr_RoomInviteNotification_GetSentTime(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_RoomInviteNotification_GetSentTime_Native addr 0x25a362c size 0x7c virtual false final false
static uint64_t ovr_RoomInviteNotification_GetSentTime_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_RoomInviteNotificationArray_GetElement addr 0x25a36a8 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_RoomInviteNotificationArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_RoomInviteNotificationArray_GetNextUrl addr 0x25a372c size 0x58 virtual false final false
static ::StringW ovr_RoomInviteNotificationArray_GetNextUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_RoomInviteNotificationArray_GetNextUrl_Native addr 0x25a3784 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_RoomInviteNotificationArray_GetNextUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_RoomInviteNotificationArray_GetSize addr 0x25a3800 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_RoomInviteNotificationArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_RoomInviteNotificationArray_HasNextPage addr 0x25a387c size 0x84 virtual false final false
static bool ovr_RoomInviteNotificationArray_HasNextPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_SdkAccount_GetAccountType addr 0x25a3900 size 0x7c virtual false final false
static Oculus::Platform::SdkAccountType ovr_SdkAccount_GetAccountType(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_SdkAccount_GetUserId addr 0x25a397c size 0x7c virtual false final false
static uint64_t ovr_SdkAccount_GetUserId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_SdkAccountArray_GetElement addr 0x25a39f8 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_SdkAccountArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_SdkAccountArray_GetSize addr 0x25a3a7c size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_SdkAccountArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_SendInvitesResult_GetInvites addr 0x25a3af8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_SendInvitesResult_GetInvites(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ShareMediaResult_GetStatus addr 0x25a3b74 size 0x7c virtual false final false
static Oculus::Platform::ShareMediaStatus ovr_ShareMediaResult_GetStatus(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_SupplementaryMetric_GetID addr 0x25a3bf0 size 0x7c virtual false final false
static uint64_t ovr_SupplementaryMetric_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_SupplementaryMetric_GetMetric addr 0x25a3c6c size 0x7c virtual false final false
static int64_t ovr_SupplementaryMetric_GetMetric(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_SystemVoipState_GetMicrophoneMuted addr 0x25a3ce8 size 0x7c virtual false final false
static Oculus::Platform::VoipMuteState ovr_SystemVoipState_GetMicrophoneMuted(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_SystemVoipState_GetStatus addr 0x25a3d64 size 0x7c virtual false final false
static Oculus::Platform::SystemVoipStatus ovr_SystemVoipState_GetStatus(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Team_GetAssignedUsers addr 0x25a3de0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Team_GetAssignedUsers(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Team_GetMaxUsers addr 0x25a3e5c size 0x7c virtual false final false
static int32_t ovr_Team_GetMaxUsers(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Team_GetMinUsers addr 0x25a3ed8 size 0x7c virtual false final false
static int32_t ovr_Team_GetMinUsers(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Team_GetName addr 0x25a3f54 size 0x58 virtual false final false
static ::StringW ovr_Team_GetName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Team_GetName_Native addr 0x25a3fac size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Team_GetName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_TeamArray_GetElement addr 0x25a4028 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_TeamArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_TeamArray_GetSize addr 0x25a40ac size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_TeamArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_TestUser_GetAccessToken addr 0x25a4128 size 0x58 virtual false final false
static ::StringW ovr_TestUser_GetAccessToken(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_TestUser_GetAccessToken_Native addr 0x25a4180 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_TestUser_GetAccessToken_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_TestUser_GetAppAccessArray addr 0x25a41fc size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_TestUser_GetAppAccessArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_TestUser_GetFbAppAccessArray addr 0x25a4278 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_TestUser_GetFbAppAccessArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_TestUser_GetFriendAccessToken addr 0x25a42f4 size 0x58 virtual false final false
static ::StringW ovr_TestUser_GetFriendAccessToken(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_TestUser_GetFriendAccessToken_Native addr 0x25a434c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_TestUser_GetFriendAccessToken_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_TestUser_GetFriendAppAccessArray addr 0x25a43c8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_TestUser_GetFriendAppAccessArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_TestUser_GetUserAlias addr 0x25a4444 size 0x58 virtual false final false
static ::StringW ovr_TestUser_GetUserAlias(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_TestUser_GetUserAlias_Native addr 0x25a449c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_TestUser_GetUserAlias_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_TestUser_GetUserFbid addr 0x25a4518 size 0x7c virtual false final false
static uint64_t ovr_TestUser_GetUserFbid(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_TestUser_GetUserId addr 0x25a4594 size 0x7c virtual false final false
static uint64_t ovr_TestUser_GetUserId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_TestUserAppAccess_GetAccessToken addr 0x25a4610 size 0x58 virtual false final false
static ::StringW ovr_TestUserAppAccess_GetAccessToken(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_TestUserAppAccess_GetAccessToken_Native addr 0x25a4668 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_TestUserAppAccess_GetAccessToken_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_TestUserAppAccess_GetAppId addr 0x25a46e4 size 0x7c virtual false final false
static uint64_t ovr_TestUserAppAccess_GetAppId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_TestUserAppAccess_GetUserId addr 0x25a4760 size 0x7c virtual false final false
static uint64_t ovr_TestUserAppAccess_GetUserId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_TestUserAppAccessArray_GetElement addr 0x25a47dc size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_TestUserAppAccessArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_TestUserAppAccessArray_GetSize addr 0x25a4860 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_TestUserAppAccessArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetDisplayName addr 0x25a48dc size 0x58 virtual false final false
static ::StringW ovr_User_GetDisplayName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetDisplayName_Native addr 0x25a4934 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_User_GetDisplayName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetID addr 0x25a49b0 size 0x7c virtual false final false
static uint64_t ovr_User_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetImageUrl addr 0x25a4a2c size 0x58 virtual false final false
static ::StringW ovr_User_GetImageUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetImageUrl_Native addr 0x25a4a84 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_User_GetImageUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetInviteToken addr 0x25a4b00 size 0x58 virtual false final false
static ::StringW ovr_User_GetInviteToken(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetInviteToken_Native addr 0x25a4b58 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_User_GetInviteToken_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetOculusID addr 0x25a4bd4 size 0x58 virtual false final false
static ::StringW ovr_User_GetOculusID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetOculusID_Native addr 0x25a4c2c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_User_GetOculusID_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetPresence addr 0x25a4ca8 size 0x58 virtual false final false
static ::StringW ovr_User_GetPresence(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetPresence_Native addr 0x25a4d00 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_User_GetPresence_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetPresenceDeeplinkMessage addr 0x25a4d7c size 0x58 virtual false final false
static ::StringW ovr_User_GetPresenceDeeplinkMessage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetPresenceDeeplinkMessage_Native addr 0x25a4dd4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_User_GetPresenceDeeplinkMessage_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetPresenceDestinationApiName addr 0x25a4e50 size 0x58 virtual false final false
static ::StringW ovr_User_GetPresenceDestinationApiName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetPresenceDestinationApiName_Native addr 0x25a4ea8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_User_GetPresenceDestinationApiName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetPresenceLobbySessionId addr 0x25a4f24 size 0x58 virtual false final false
static ::StringW ovr_User_GetPresenceLobbySessionId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetPresenceLobbySessionId_Native addr 0x25a4f7c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_User_GetPresenceLobbySessionId_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetPresenceMatchSessionId addr 0x25a4ff8 size 0x58 virtual false final false
static ::StringW ovr_User_GetPresenceMatchSessionId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetPresenceMatchSessionId_Native addr 0x25a5050 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_User_GetPresenceMatchSessionId_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetPresenceStatus addr 0x25a50cc size 0x7c virtual false final false
static Oculus::Platform::UserPresenceStatus ovr_User_GetPresenceStatus(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetSmallImageUrl addr 0x25a5148 size 0x58 virtual false final false
static ::StringW ovr_User_GetSmallImageUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetSmallImageUrl_Native addr 0x25a51a0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_User_GetSmallImageUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserAndRoom_GetRoom addr 0x25a521c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_UserAndRoom_GetRoom(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserAndRoom_GetUser addr 0x25a5298 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_UserAndRoom_GetUser(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserAndRoomArray_GetElement addr 0x25a5314 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_UserAndRoomArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_UserAndRoomArray_GetNextUrl addr 0x25a5398 size 0x58 virtual false final false
static ::StringW ovr_UserAndRoomArray_GetNextUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserAndRoomArray_GetNextUrl_Native addr 0x25a53f0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_UserAndRoomArray_GetNextUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserAndRoomArray_GetSize addr 0x25a546c size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_UserAndRoomArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserAndRoomArray_HasNextPage addr 0x25a54e8 size 0x84 virtual false final false
static bool ovr_UserAndRoomArray_HasNextPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserArray_GetElement addr 0x25a556c size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_UserArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_UserArray_GetNextUrl addr 0x25a55f0 size 0x58 virtual false final false
static ::StringW ovr_UserArray_GetNextUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserArray_GetNextUrl_Native addr 0x25a5648 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_UserArray_GetNextUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserArray_GetSize addr 0x25a56c4 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_UserArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserArray_HasNextPage addr 0x25a5740 size 0x84 virtual false final false
static bool ovr_UserArray_HasNextPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserCapability_GetDescription addr 0x25a57c4 size 0x58 virtual false final false
static ::StringW ovr_UserCapability_GetDescription(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserCapability_GetDescription_Native addr 0x25a581c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_UserCapability_GetDescription_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserCapability_GetIsEnabled addr 0x25a5898 size 0x84 virtual false final false
static bool ovr_UserCapability_GetIsEnabled(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserCapability_GetName addr 0x25a591c size 0x58 virtual false final false
static ::StringW ovr_UserCapability_GetName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserCapability_GetName_Native addr 0x25a5974 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_UserCapability_GetName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserCapability_GetReasonCode addr 0x25a59f0 size 0x58 virtual false final false
static ::StringW ovr_UserCapability_GetReasonCode(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserCapability_GetReasonCode_Native addr 0x25a5a48 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_UserCapability_GetReasonCode_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserCapabilityArray_GetElement addr 0x25a5ac4 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_UserCapabilityArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_UserCapabilityArray_GetNextUrl addr 0x25a5b48 size 0x58 virtual false final false
static ::StringW ovr_UserCapabilityArray_GetNextUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserCapabilityArray_GetNextUrl_Native addr 0x25a5ba0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_UserCapabilityArray_GetNextUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserCapabilityArray_GetSize addr 0x25a5c1c size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_UserCapabilityArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserCapabilityArray_HasNextPage addr 0x25a5c98 size 0x84 virtual false final false
static bool ovr_UserCapabilityArray_HasNextPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserDataStoreUpdateResponse_GetSuccess addr 0x25a5d1c size 0x84 virtual false final false
static bool ovr_UserDataStoreUpdateResponse_GetSuccess(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserProof_GetNonce addr 0x25a5da0 size 0x58 virtual false final false
static ::StringW ovr_UserProof_GetNonce(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserProof_GetNonce_Native addr 0x25a5df8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_UserProof_GetNonce_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserReportID_GetDidCancel addr 0x25a5e74 size 0x84 virtual false final false
static bool ovr_UserReportID_GetDidCancel(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserReportID_GetID addr 0x25a5ef8 size 0x7c virtual false final false
static uint64_t ovr_UserReportID_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_VoipDecoder_Decode addr 0x25a5f74 size 0x9c virtual false final false
static void ovr_VoipDecoder_Decode(::cordl_internals::intptr_t obj, ::ArrayW<uint8_t> compressedData, ::cordl_internals::uintptr_t compressedSize) ;

/// @brief Method ovr_VoipDecoder_GetDecodedPCM addr 0x25a6010 size 0x9c virtual false final false
static ::cordl_internals::uintptr_t ovr_VoipDecoder_GetDecodedPCM(::cordl_internals::intptr_t obj, ::ArrayW<float_t> outputBuffer, ::cordl_internals::uintptr_t outputBufferSize) ;

/// @brief Method ovr_VoipEncoder_AddPCM addr 0x25a60ac size 0x9c virtual false final false
static void ovr_VoipEncoder_AddPCM(::cordl_internals::intptr_t obj, ::ArrayW<float_t> inputData, uint32_t inputSize) ;

/// @brief Method ovr_VoipEncoder_GetCompressedData addr 0x25a6148 size 0x9c virtual false final false
static ::cordl_internals::uintptr_t ovr_VoipEncoder_GetCompressedData(::cordl_internals::intptr_t obj, ::ArrayW<uint8_t> outputBuffer, ::cordl_internals::uintptr_t intputSize) ;

/// @brief Method ovr_VoipEncoder_GetCompressedDataSize addr 0x25a61e4 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_VoipEncoder_GetCompressedDataSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AbuseReportOptions_Create addr 0x2581e70 size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_AbuseReportOptions_Create() ;

/// @brief Method ovr_AbuseReportOptions_Destroy addr 0x25821dc size 0x7c virtual false final false
static void ovr_AbuseReportOptions_Destroy(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_AbuseReportOptions_SetPreventPeopleChooser addr 0x2581f40 size 0x84 virtual false final false
static void ovr_AbuseReportOptions_SetPreventPeopleChooser(::cordl_internals::intptr_t handle, bool value) ;

/// @brief Method ovr_AbuseReportOptions_SetReportType addr 0x258202c size 0x84 virtual false final false
static void ovr_AbuseReportOptions_SetReportType(::cordl_internals::intptr_t handle, Oculus::Platform::AbuseReportType value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_Create addr 0x25822bc size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_AdvancedAbuseReportOptions_Create() ;

/// @brief Method ovr_AdvancedAbuseReportOptions_Destroy addr 0x2582af4 size 0x7c virtual false final false
static void ovr_AdvancedAbuseReportOptions_Destroy(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString addr 0x2582394 size 0xc0 virtual false final false
static void ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString(::cordl_internals::intptr_t handle, ::StringW key, ::StringW value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString_Native addr 0x25a6260 size 0x94 virtual false final false
static void ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t key, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_ClearDeveloperDefinedContext addr 0x25824ac size 0x7c virtual false final false
static void ovr_AdvancedAbuseReportOptions_ClearDeveloperDefinedContext(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_SetObjectType addr 0x2582590 size 0xa0 virtual false final false
static void ovr_AdvancedAbuseReportOptions_SetObjectType(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_SetObjectType_Native addr 0x25a62f4 size 0x84 virtual false final false
static void ovr_AdvancedAbuseReportOptions_SetObjectType_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_SetReportType addr 0x2582698 size 0x84 virtual false final false
static void ovr_AdvancedAbuseReportOptions_SetReportType(::cordl_internals::intptr_t handle, Oculus::Platform::AbuseReportType value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_AddSuggestedUser addr 0x2582784 size 0x84 virtual false final false
static void ovr_AdvancedAbuseReportOptions_AddSuggestedUser(::cordl_internals::intptr_t handle, uint64_t value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_ClearSuggestedUsers addr 0x2582860 size 0x7c virtual false final false
static void ovr_AdvancedAbuseReportOptions_ClearSuggestedUsers(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_SetVideoMode addr 0x2582944 size 0x84 virtual false final false
static void ovr_AdvancedAbuseReportOptions_SetVideoMode(::cordl_internals::intptr_t handle, Oculus::Platform::AbuseReportVideoMode value) ;

/// @brief Method ovr_ApplicationOptions_Create addr 0x2582ec0 size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_ApplicationOptions_Create() ;

/// @brief Method ovr_ApplicationOptions_Destroy addr 0x2583560 size 0x7c virtual false final false
static void ovr_ApplicationOptions_Destroy(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_ApplicationOptions_SetDeeplinkMessage addr 0x2582f90 size 0xa0 virtual false final false
static void ovr_ApplicationOptions_SetDeeplinkMessage(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_ApplicationOptions_SetDeeplinkMessage_Native addr 0x25a6378 size 0x84 virtual false final false
static void ovr_ApplicationOptions_SetDeeplinkMessage_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_ApplicationOptions_SetDestinationApiName addr 0x2583098 size 0xa0 virtual false final false
static void ovr_ApplicationOptions_SetDestinationApiName(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_ApplicationOptions_SetDestinationApiName_Native addr 0x25a63fc size 0x84 virtual false final false
static void ovr_ApplicationOptions_SetDestinationApiName_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_ApplicationOptions_SetLobbySessionId addr 0x25831a0 size 0xa0 virtual false final false
static void ovr_ApplicationOptions_SetLobbySessionId(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_ApplicationOptions_SetLobbySessionId_Native addr 0x25a6480 size 0x84 virtual false final false
static void ovr_ApplicationOptions_SetLobbySessionId_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_ApplicationOptions_SetMatchSessionId addr 0x25832a8 size 0xa0 virtual false final false
static void ovr_ApplicationOptions_SetMatchSessionId(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_ApplicationOptions_SetMatchSessionId_Native addr 0x25a6504 size 0x84 virtual false final false
static void ovr_ApplicationOptions_SetMatchSessionId_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_ApplicationOptions_SetRoomId addr 0x25833b0 size 0x84 virtual false final false
static void ovr_ApplicationOptions_SetRoomId(::cordl_internals::intptr_t handle, uint64_t value) ;

/// @brief Method ovr_AvatarEditorOptions_Create addr 0x2583640 size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_AvatarEditorOptions_Create() ;

/// @brief Method ovr_AvatarEditorOptions_Destroy addr 0x25838dc size 0x7c virtual false final false
static void ovr_AvatarEditorOptions_Destroy(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_AvatarEditorOptions_SetSourceOverride addr 0x2583710 size 0xa0 virtual false final false
static void ovr_AvatarEditorOptions_SetSourceOverride(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_AvatarEditorOptions_SetSourceOverride_Native addr 0x25a6588 size 0x84 virtual false final false
static void ovr_AvatarEditorOptions_SetSourceOverride_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_ChallengeOptions_Create addr 0x25a660c size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_ChallengeOptions_Create() ;

/// @brief Method ovr_ChallengeOptions_Destroy addr 0x25a6674 size 0x7c virtual false final false
static void ovr_ChallengeOptions_Destroy(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_ChallengeOptions_SetDescription addr 0x25a66f0 size 0xa0 virtual false final false
static void ovr_ChallengeOptions_SetDescription(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_ChallengeOptions_SetDescription_Native addr 0x25a6790 size 0x84 virtual false final false
static void ovr_ChallengeOptions_SetDescription_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_ChallengeOptions_SetEndDate addr 0x25a6814 size 0x6c virtual false final false
static void ovr_ChallengeOptions_SetEndDate(::cordl_internals::intptr_t handle, System::DateTime value) ;

/// @brief Method ovr_ChallengeOptions_SetEndDate_Native addr 0x25a6880 size 0x84 virtual false final false
static void ovr_ChallengeOptions_SetEndDate_Native(::cordl_internals::intptr_t handle, uint64_t value) ;

/// @brief Method ovr_ChallengeOptions_SetIncludeActiveChallenges addr 0x25a6904 size 0x84 virtual false final false
static void ovr_ChallengeOptions_SetIncludeActiveChallenges(::cordl_internals::intptr_t handle, bool value) ;

/// @brief Method ovr_ChallengeOptions_SetIncludeFutureChallenges addr 0x25a6988 size 0x84 virtual false final false
static void ovr_ChallengeOptions_SetIncludeFutureChallenges(::cordl_internals::intptr_t handle, bool value) ;

/// @brief Method ovr_ChallengeOptions_SetIncludePastChallenges addr 0x25a6a0c size 0x84 virtual false final false
static void ovr_ChallengeOptions_SetIncludePastChallenges(::cordl_internals::intptr_t handle, bool value) ;

/// @brief Method ovr_ChallengeOptions_SetLeaderboardName addr 0x25a6a90 size 0xa0 virtual false final false
static void ovr_ChallengeOptions_SetLeaderboardName(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_ChallengeOptions_SetLeaderboardName_Native addr 0x25a6b30 size 0x84 virtual false final false
static void ovr_ChallengeOptions_SetLeaderboardName_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_ChallengeOptions_SetStartDate addr 0x25a6bb4 size 0x6c virtual false final false
static void ovr_ChallengeOptions_SetStartDate(::cordl_internals::intptr_t handle, System::DateTime value) ;

/// @brief Method ovr_ChallengeOptions_SetStartDate_Native addr 0x25a6c20 size 0x84 virtual false final false
static void ovr_ChallengeOptions_SetStartDate_Native(::cordl_internals::intptr_t handle, uint64_t value) ;

/// @brief Method ovr_ChallengeOptions_SetTitle addr 0x25a6ca4 size 0xa0 virtual false final false
static void ovr_ChallengeOptions_SetTitle(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_ChallengeOptions_SetTitle_Native addr 0x25a6d44 size 0x84 virtual false final false
static void ovr_ChallengeOptions_SetTitle_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_ChallengeOptions_SetViewerFilter addr 0x25a6dc8 size 0x84 virtual false final false
static void ovr_ChallengeOptions_SetViewerFilter(::cordl_internals::intptr_t handle, Oculus::Platform::ChallengeViewerFilter value) ;

/// @brief Method ovr_ChallengeOptions_SetVisibility addr 0x25a6e4c size 0x84 virtual false final false
static void ovr_ChallengeOptions_SetVisibility(::cordl_internals::intptr_t handle, Oculus::Platform::ChallengeVisibility value) ;

/// @brief Method ovr_GroupPresenceOptions_Create addr 0x25a6ed0 size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_GroupPresenceOptions_Create() ;

/// @brief Method ovr_GroupPresenceOptions_Destroy addr 0x25a6f38 size 0x7c virtual false final false
static void ovr_GroupPresenceOptions_Destroy(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_GroupPresenceOptions_SetDeeplinkMessageOverride addr 0x25a6fb4 size 0xa0 virtual false final false
static void ovr_GroupPresenceOptions_SetDeeplinkMessageOverride(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_GroupPresenceOptions_SetDeeplinkMessageOverride_Native addr 0x25a7054 size 0x84 virtual false final false
static void ovr_GroupPresenceOptions_SetDeeplinkMessageOverride_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_GroupPresenceOptions_SetDestinationApiName addr 0x25a70d8 size 0xa0 virtual false final false
static void ovr_GroupPresenceOptions_SetDestinationApiName(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_GroupPresenceOptions_SetDestinationApiName_Native addr 0x25a7178 size 0x84 virtual false final false
static void ovr_GroupPresenceOptions_SetDestinationApiName_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_GroupPresenceOptions_SetIsJoinable addr 0x25a71fc size 0x84 virtual false final false
static void ovr_GroupPresenceOptions_SetIsJoinable(::cordl_internals::intptr_t handle, bool value) ;

/// @brief Method ovr_GroupPresenceOptions_SetLobbySessionId addr 0x25a7280 size 0xa0 virtual false final false
static void ovr_GroupPresenceOptions_SetLobbySessionId(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_GroupPresenceOptions_SetLobbySessionId_Native addr 0x25a7320 size 0x84 virtual false final false
static void ovr_GroupPresenceOptions_SetLobbySessionId_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_GroupPresenceOptions_SetMatchSessionId addr 0x25a73a4 size 0xa0 virtual false final false
static void ovr_GroupPresenceOptions_SetMatchSessionId(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_GroupPresenceOptions_SetMatchSessionId_Native addr 0x25a7444 size 0x84 virtual false final false
static void ovr_GroupPresenceOptions_SetMatchSessionId_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_InviteOptions_Create addr 0x25a74c8 size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_InviteOptions_Create() ;

/// @brief Method ovr_InviteOptions_Destroy addr 0x25a7530 size 0x7c virtual false final false
static void ovr_InviteOptions_Destroy(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_InviteOptions_AddSuggestedUser addr 0x25a75ac size 0x84 virtual false final false
static void ovr_InviteOptions_AddSuggestedUser(::cordl_internals::intptr_t handle, uint64_t value) ;

/// @brief Method ovr_InviteOptions_ClearSuggestedUsers addr 0x25a7630 size 0x7c virtual false final false
static void ovr_InviteOptions_ClearSuggestedUsers(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_MatchmakingOptions_Create addr 0x25a76ac size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingOptions_Create() ;

/// @brief Method ovr_MatchmakingOptions_Destroy addr 0x25a7714 size 0x7c virtual false final false
static void ovr_MatchmakingOptions_Destroy(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_MatchmakingOptions_SetCreateRoomDataStoreString addr 0x25a7790 size 0xc0 virtual false final false
static void ovr_MatchmakingOptions_SetCreateRoomDataStoreString(::cordl_internals::intptr_t handle, ::StringW key, ::StringW value) ;

/// @brief Method ovr_MatchmakingOptions_SetCreateRoomDataStoreString_Native addr 0x25a7850 size 0x94 virtual false final false
static void ovr_MatchmakingOptions_SetCreateRoomDataStoreString_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t key, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_MatchmakingOptions_ClearCreateRoomDataStore addr 0x25a78e4 size 0x7c virtual false final false
static void ovr_MatchmakingOptions_ClearCreateRoomDataStore(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_MatchmakingOptions_SetCreateRoomJoinPolicy addr 0x25a7960 size 0x84 virtual false final false
static void ovr_MatchmakingOptions_SetCreateRoomJoinPolicy(::cordl_internals::intptr_t handle, Oculus::Platform::RoomJoinPolicy value) ;

/// @brief Method ovr_MatchmakingOptions_SetCreateRoomMaxUsers addr 0x25a79e4 size 0x84 virtual false final false
static void ovr_MatchmakingOptions_SetCreateRoomMaxUsers(::cordl_internals::intptr_t handle, uint32_t value) ;

/// @brief Method ovr_MatchmakingOptions_AddEnqueueAdditionalUser addr 0x25a7a68 size 0x84 virtual false final false
static void ovr_MatchmakingOptions_AddEnqueueAdditionalUser(::cordl_internals::intptr_t handle, uint64_t value) ;

/// @brief Method ovr_MatchmakingOptions_ClearEnqueueAdditionalUsers addr 0x25a7aec size 0x7c virtual false final false
static void ovr_MatchmakingOptions_ClearEnqueueAdditionalUsers(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_MatchmakingOptions_SetEnqueueDataSettingsInt addr 0x25a7b68 size 0xa8 virtual false final false
static void ovr_MatchmakingOptions_SetEnqueueDataSettingsInt(::cordl_internals::intptr_t handle, ::StringW key, int32_t value) ;

/// @brief Method ovr_MatchmakingOptions_SetEnqueueDataSettingsInt_Native addr 0x25a7c10 size 0x94 virtual false final false
static void ovr_MatchmakingOptions_SetEnqueueDataSettingsInt_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t key, int32_t value) ;

/// @brief Method ovr_MatchmakingOptions_SetEnqueueDataSettingsDouble addr 0x25a7ca4 size 0xb0 virtual false final false
static void ovr_MatchmakingOptions_SetEnqueueDataSettingsDouble(::cordl_internals::intptr_t handle, ::StringW key, double_t value) ;

/// @brief Method ovr_MatchmakingOptions_SetEnqueueDataSettingsDouble_Native addr 0x25a7d54 size 0x94 virtual false final false
static void ovr_MatchmakingOptions_SetEnqueueDataSettingsDouble_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t key, double_t value) ;

/// @brief Method ovr_MatchmakingOptions_SetEnqueueDataSettingsString addr 0x25a7de8 size 0xc0 virtual false final false
static void ovr_MatchmakingOptions_SetEnqueueDataSettingsString(::cordl_internals::intptr_t handle, ::StringW key, ::StringW value) ;

/// @brief Method ovr_MatchmakingOptions_SetEnqueueDataSettingsString_Native addr 0x25a7ea8 size 0x94 virtual false final false
static void ovr_MatchmakingOptions_SetEnqueueDataSettingsString_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t key, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_MatchmakingOptions_ClearEnqueueDataSettings addr 0x25a7f3c size 0x7c virtual false final false
static void ovr_MatchmakingOptions_ClearEnqueueDataSettings(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_MatchmakingOptions_SetEnqueueIsDebug addr 0x25a7fb8 size 0x84 virtual false final false
static void ovr_MatchmakingOptions_SetEnqueueIsDebug(::cordl_internals::intptr_t handle, bool value) ;

/// @brief Method ovr_MatchmakingOptions_SetEnqueueQueryKey addr 0x25a803c size 0xa0 virtual false final false
static void ovr_MatchmakingOptions_SetEnqueueQueryKey(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_MatchmakingOptions_SetEnqueueQueryKey_Native addr 0x25a80dc size 0x84 virtual false final false
static void ovr_MatchmakingOptions_SetEnqueueQueryKey_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_MultiplayerErrorOptions_Create addr 0x25a8160 size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_MultiplayerErrorOptions_Create() ;

/// @brief Method ovr_MultiplayerErrorOptions_Destroy addr 0x25a81c8 size 0x7c virtual false final false
static void ovr_MultiplayerErrorOptions_Destroy(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_MultiplayerErrorOptions_SetErrorKey addr 0x25a8244 size 0x84 virtual false final false
static void ovr_MultiplayerErrorOptions_SetErrorKey(::cordl_internals::intptr_t handle, Oculus::Platform::MultiplayerErrorErrorKey value) ;

/// @brief Method ovr_NetSyncOptions_Create addr 0x25a82c8 size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_NetSyncOptions_Create() ;

/// @brief Method ovr_NetSyncOptions_Destroy addr 0x25a8330 size 0x7c virtual false final false
static void ovr_NetSyncOptions_Destroy(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_NetSyncOptions_SetVoipGroup addr 0x25a83ac size 0xa0 virtual false final false
static void ovr_NetSyncOptions_SetVoipGroup(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_NetSyncOptions_SetVoipGroup_Native addr 0x25a844c size 0x84 virtual false final false
static void ovr_NetSyncOptions_SetVoipGroup_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_NetSyncOptions_SetVoipStreamDefault addr 0x25a84d0 size 0x84 virtual false final false
static void ovr_NetSyncOptions_SetVoipStreamDefault(::cordl_internals::intptr_t handle, Oculus::Platform::NetSyncVoipStreamMode value) ;

/// @brief Method ovr_NetSyncOptions_SetZoneId addr 0x25a8554 size 0xa0 virtual false final false
static void ovr_NetSyncOptions_SetZoneId(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_NetSyncOptions_SetZoneId_Native addr 0x25a85f4 size 0x84 virtual false final false
static void ovr_NetSyncOptions_SetZoneId_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_RichPresenceOptions_Create addr 0x25a8678 size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_RichPresenceOptions_Create() ;

/// @brief Method ovr_RichPresenceOptions_Destroy addr 0x25a86e0 size 0x7c virtual false final false
static void ovr_RichPresenceOptions_Destroy(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_RichPresenceOptions_SetApiName addr 0x25a875c size 0xa0 virtual false final false
static void ovr_RichPresenceOptions_SetApiName(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_RichPresenceOptions_SetApiName_Native addr 0x25a87fc size 0x84 virtual false final false
static void ovr_RichPresenceOptions_SetApiName_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_RichPresenceOptions_SetArgsString addr 0x25a8880 size 0xc0 virtual false final false
static void ovr_RichPresenceOptions_SetArgsString(::cordl_internals::intptr_t handle, ::StringW key, ::StringW value) ;

/// @brief Method ovr_RichPresenceOptions_SetArgsString_Native addr 0x25a8940 size 0x94 virtual false final false
static void ovr_RichPresenceOptions_SetArgsString_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t key, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_RichPresenceOptions_ClearArgs addr 0x25a89d4 size 0x7c virtual false final false
static void ovr_RichPresenceOptions_ClearArgs(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_RichPresenceOptions_SetCurrentCapacity addr 0x25a8a50 size 0x84 virtual false final false
static void ovr_RichPresenceOptions_SetCurrentCapacity(::cordl_internals::intptr_t handle, uint32_t value) ;

/// @brief Method ovr_RichPresenceOptions_SetDeeplinkMessageOverride addr 0x25a8ad4 size 0xa0 virtual false final false
static void ovr_RichPresenceOptions_SetDeeplinkMessageOverride(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_RichPresenceOptions_SetDeeplinkMessageOverride_Native addr 0x25a8b74 size 0x84 virtual false final false
static void ovr_RichPresenceOptions_SetDeeplinkMessageOverride_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_RichPresenceOptions_SetEndTime addr 0x25a8bf8 size 0x6c virtual false final false
static void ovr_RichPresenceOptions_SetEndTime(::cordl_internals::intptr_t handle, System::DateTime value) ;

/// @brief Method ovr_RichPresenceOptions_SetEndTime_Native addr 0x25a8c64 size 0x84 virtual false final false
static void ovr_RichPresenceOptions_SetEndTime_Native(::cordl_internals::intptr_t handle, uint64_t value) ;

/// @brief Method ovr_RichPresenceOptions_SetExtraContext addr 0x25a8ce8 size 0x84 virtual false final false
static void ovr_RichPresenceOptions_SetExtraContext(::cordl_internals::intptr_t handle, Oculus::Platform::RichPresenceExtraContext value) ;

/// @brief Method ovr_RichPresenceOptions_SetInstanceId addr 0x25a8d6c size 0xa0 virtual false final false
static void ovr_RichPresenceOptions_SetInstanceId(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_RichPresenceOptions_SetInstanceId_Native addr 0x25a8e0c size 0x84 virtual false final false
static void ovr_RichPresenceOptions_SetInstanceId_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_RichPresenceOptions_SetIsIdle addr 0x25a8e90 size 0x84 virtual false final false
static void ovr_RichPresenceOptions_SetIsIdle(::cordl_internals::intptr_t handle, bool value) ;

/// @brief Method ovr_RichPresenceOptions_SetIsJoinable addr 0x25a8f14 size 0x84 virtual false final false
static void ovr_RichPresenceOptions_SetIsJoinable(::cordl_internals::intptr_t handle, bool value) ;

/// @brief Method ovr_RichPresenceOptions_SetJoinableId addr 0x25a8f98 size 0xa0 virtual false final false
static void ovr_RichPresenceOptions_SetJoinableId(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_RichPresenceOptions_SetJoinableId_Native addr 0x25a9038 size 0x84 virtual false final false
static void ovr_RichPresenceOptions_SetJoinableId_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_RichPresenceOptions_SetLobbySessionId addr 0x25a90bc size 0xa0 virtual false final false
static void ovr_RichPresenceOptions_SetLobbySessionId(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_RichPresenceOptions_SetLobbySessionId_Native addr 0x25a915c size 0x84 virtual false final false
static void ovr_RichPresenceOptions_SetLobbySessionId_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_RichPresenceOptions_SetMatchSessionId addr 0x25a91e0 size 0xa0 virtual false final false
static void ovr_RichPresenceOptions_SetMatchSessionId(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_RichPresenceOptions_SetMatchSessionId_Native addr 0x25a9280 size 0x84 virtual false final false
static void ovr_RichPresenceOptions_SetMatchSessionId_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_RichPresenceOptions_SetMaxCapacity addr 0x25a9304 size 0x84 virtual false final false
static void ovr_RichPresenceOptions_SetMaxCapacity(::cordl_internals::intptr_t handle, uint32_t value) ;

/// @brief Method ovr_RichPresenceOptions_SetStartTime addr 0x25a9388 size 0x6c virtual false final false
static void ovr_RichPresenceOptions_SetStartTime(::cordl_internals::intptr_t handle, System::DateTime value) ;

/// @brief Method ovr_RichPresenceOptions_SetStartTime_Native addr 0x25a93f4 size 0x84 virtual false final false
static void ovr_RichPresenceOptions_SetStartTime_Native(::cordl_internals::intptr_t handle, uint64_t value) ;

/// @brief Method ovr_RoomOptions_Create addr 0x25a9478 size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_RoomOptions_Create() ;

/// @brief Method ovr_RoomOptions_Destroy addr 0x25a94e0 size 0x7c virtual false final false
static void ovr_RoomOptions_Destroy(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_RoomOptions_SetDataStoreString addr 0x25a955c size 0xc0 virtual false final false
static void ovr_RoomOptions_SetDataStoreString(::cordl_internals::intptr_t handle, ::StringW key, ::StringW value) ;

/// @brief Method ovr_RoomOptions_SetDataStoreString_Native addr 0x25a961c size 0x94 virtual false final false
static void ovr_RoomOptions_SetDataStoreString_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t key, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_RoomOptions_ClearDataStore addr 0x25a96b0 size 0x7c virtual false final false
static void ovr_RoomOptions_ClearDataStore(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_RoomOptions_SetExcludeRecentlyMet addr 0x25a972c size 0x84 virtual false final false
static void ovr_RoomOptions_SetExcludeRecentlyMet(::cordl_internals::intptr_t handle, bool value) ;

/// @brief Method ovr_RoomOptions_SetMaxUserResults addr 0x25a97b0 size 0x84 virtual false final false
static void ovr_RoomOptions_SetMaxUserResults(::cordl_internals::intptr_t handle, uint32_t value) ;

/// @brief Method ovr_RoomOptions_SetOrdering addr 0x25a9834 size 0x84 virtual false final false
static void ovr_RoomOptions_SetOrdering(::cordl_internals::intptr_t handle, Oculus::Platform::UserOrdering value) ;

/// @brief Method ovr_RoomOptions_SetRecentlyMetTimeWindow addr 0x25a98b8 size 0x84 virtual false final false
static void ovr_RoomOptions_SetRecentlyMetTimeWindow(::cordl_internals::intptr_t handle, Oculus::Platform::TimeWindow value) ;

/// @brief Method ovr_RoomOptions_SetRoomId addr 0x25a993c size 0x84 virtual false final false
static void ovr_RoomOptions_SetRoomId(::cordl_internals::intptr_t handle, uint64_t value) ;

/// @brief Method ovr_RoomOptions_SetTurnOffUpdates addr 0x25a99c0 size 0x84 virtual false final false
static void ovr_RoomOptions_SetTurnOffUpdates(::cordl_internals::intptr_t handle, bool value) ;

/// @brief Method ovr_RosterOptions_Create addr 0x25a9a44 size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_RosterOptions_Create() ;

/// @brief Method ovr_RosterOptions_Destroy addr 0x25a9aac size 0x7c virtual false final false
static void ovr_RosterOptions_Destroy(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_RosterOptions_AddSuggestedUser addr 0x25a9b28 size 0x84 virtual false final false
static void ovr_RosterOptions_AddSuggestedUser(::cordl_internals::intptr_t handle, uint64_t value) ;

/// @brief Method ovr_RosterOptions_ClearSuggestedUsers addr 0x25a9bac size 0x7c virtual false final false
static void ovr_RosterOptions_ClearSuggestedUsers(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_UserOptions_Create addr 0x25a9c28 size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_UserOptions_Create() ;

/// @brief Method ovr_UserOptions_Destroy addr 0x25a9c90 size 0x7c virtual false final false
static void ovr_UserOptions_Destroy(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_UserOptions_SetMaxUsers addr 0x25a9d0c size 0x84 virtual false final false
static void ovr_UserOptions_SetMaxUsers(::cordl_internals::intptr_t handle, uint32_t value) ;

/// @brief Method ovr_UserOptions_AddServiceProvider addr 0x25a9d90 size 0x84 virtual false final false
static void ovr_UserOptions_AddServiceProvider(::cordl_internals::intptr_t handle, Oculus::Platform::ServiceProvider value) ;

/// @brief Method ovr_UserOptions_ClearServiceProviders addr 0x25a9e14 size 0x7c virtual false final false
static void ovr_UserOptions_ClearServiceProviders(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_UserOptions_SetTimeWindow addr 0x25a9e90 size 0x84 virtual false final false
static void ovr_UserOptions_SetTimeWindow(::cordl_internals::intptr_t handle, Oculus::Platform::TimeWindow value) ;

/// @brief Method ovr_VoipOptions_Create addr 0x25a9f14 size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_VoipOptions_Create() ;

/// @brief Method ovr_VoipOptions_Destroy addr 0x25a9f7c size 0x7c virtual false final false
static void ovr_VoipOptions_Destroy(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_VoipOptions_SetBitrateForNewConnections addr 0x25a9ff8 size 0x84 virtual false final false
static void ovr_VoipOptions_SetBitrateForNewConnections(::cordl_internals::intptr_t handle, Oculus::Platform::VoipBitrate value) ;

/// @brief Method ovr_VoipOptions_SetCreateNewConnectionUseDtx addr 0x25aa07c size 0x84 virtual false final false
static void ovr_VoipOptions_SetCreateNewConnectionUseDtx(::cordl_internals::intptr_t handle, Oculus::Platform::VoipDtxState value) ;

// Ctor Parameters []
explicit CAPI() ;

/// @brief Method .ctor addr 0x25aa100 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::CAPI);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::CAPI, "Oculus.Platform", "CAPI");
NEED_NO_BOX(Oculus::Platform::Oculus__Platform__CAPI__FilterCallback);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Oculus__Platform__CAPI__FilterCallback, "Oculus.Platform", "CAPI/FilterCallback");
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Oculus__Platform__CAPI__OculusInitParams, "Oculus.Platform", "CAPI/OculusInitParams");
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Oculus__Platform__CAPI__ovrKeyValuePair, "Oculus.Platform", "CAPI/ovrKeyValuePair");
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Oculus__Platform__CAPI__ovrMatchmakingCriterion, "Oculus.Platform", "CAPI/ovrMatchmakingCriterion");
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Oculus__Platform__CAPI__ovrMatchmakingCustomQueryData, "Oculus.Platform", "CAPI/ovrMatchmakingCustomQueryData");
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Oculus__Platform__CAPI__ovrNetSyncVec3, "Oculus.Platform", "CAPI/ovrNetSyncVec3");
