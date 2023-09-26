#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
struct FPSTimestamp;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class FPSRecorder;
}
namespace GlobalNamespace {
struct GlobalNamespace__FPSRecorder__FPSRecord;
}
// Type: ::FPSRecord
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5938))
// CS Name: FPSRecorder::FPSRecord
struct CORDL_TYPE GlobalNamespace__FPSRecorder__FPSRecord : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "recordedTimestamps", ty: "System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::FPSTimestamp>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__FPSRecorder__FPSRecord(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::FPSTimestamp> recordedTimestamps) noexcept;


                    constexpr GlobalNamespace__FPSRecorder__FPSRecord(GlobalNamespace__FPSRecorder__FPSRecord const&) = default;
                    constexpr GlobalNamespace__FPSRecorder__FPSRecord(GlobalNamespace__FPSRecorder__FPSRecord&&) = default;
                    constexpr GlobalNamespace__FPSRecorder__FPSRecord& operator=(GlobalNamespace__FPSRecorder__FPSRecord const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__FPSRecorder__FPSRecord& operator=(GlobalNamespace__FPSRecorder__FPSRecord&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__FPSRecorder__FPSRecord(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::FPSTimestamp> __declspec(property(get=__get_recordedTimestamps, put=__set_recordedTimestamps))  recordedTimestamps;

constexpr void __set_recordedTimestamps(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::FPSTimestamp> value) ;

constexpr System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::FPSTimestamp> __get_recordedTimestamps() const;


// Methods

/// @brief Method .ctor addr 0x21cbe30 size 0x8 virtual false final false
 void _ctor(System::Collections::Generic::List_1<GlobalNamespace::FPSTimestamp> recordedTimestamps) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::FPSRecorder
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5939))
// CS Name: FPSRecorder
class CORDL_TYPE FPSRecorder : public UnityEngine::MonoBehaviour {
public:
// Declarations
using FPSRecord = GlobalNamespace::GlobalNamespace__FPSRecorder__FPSRecord;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~FPSRecorder() = default;

// Ctor Parameters [CppParam { name: "", ty: "FPSRecorder", modifiers: " const&", def_value: None }]
constexpr FPSRecorder(FPSRecorder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FPSRecorder", modifiers: "&&", def_value: None }]
constexpr FPSRecorder(FPSRecorder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FPSRecorder(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr FPSRecorder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FPSRecorder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FPSRecorder& operator=(FPSRecorder&& o) noexcept = default;
  constexpr FPSRecorder& operator=(FPSRecorder const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<GlobalNamespace::FPSTimestamp> __declspec(property(get=__get__recordedTimestamps, put=__set__recordedTimestamps))  _recordedTimestamps;

constexpr void __set__recordedTimestamps(System::Collections::Generic::List_1<GlobalNamespace::FPSTimestamp> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::FPSTimestamp> __get__recordedTimestamps() const;

 float_t __declspec(property(get=__get__timeSinceRecordStarted, put=__set__timeSinceRecordStarted))  _timeSinceRecordStarted;

constexpr void __set__timeSinceRecordStarted(float_t value) ;

constexpr float_t __get__timeSinceRecordStarted() const;

 bool __declspec(property(get=__get__isRecordingEnabled, put=__set__isRecordingEnabled))  _isRecordingEnabled;

constexpr void __set__isRecordingEnabled(bool value) ;

constexpr bool __get__isRecordingEnabled() const;


// Methods

/// @brief Method StartRecording addr 0x21cb768 size 0x80 virtual false final false
 void StartRecording() ;

/// @brief Method PauseRecording addr 0x21cb830 size 0x8 virtual false final false
 void PauseRecording() ;

/// @brief Method ResumeRecording addr 0x21cb808 size 0xc virtual false final false
 void ResumeRecording() ;

/// @brief Method GetRecord addr 0x21cbc78 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__FPSRecorder__FPSRecord GetRecord() ;

/// @brief Method Update addr 0x21cbc88 size 0x1a0 virtual false final false
 void Update() ;

// Ctor Parameters []
explicit FPSRecorder() ;

/// @brief Method .ctor addr 0x21cbe28 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FPSRecorder);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FPSRecorder, "", "FPSRecorder");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__FPSRecorder__FPSRecord, "", "FPSRecorder/FPSRecord");
