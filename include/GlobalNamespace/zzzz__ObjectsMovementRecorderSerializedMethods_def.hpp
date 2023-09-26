#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
struct GlobalNamespace__ObjectsMovementRecorder__Mode;
}
namespace GlobalNamespace {
struct GlobalNamespace__ObjectsMovementRecorder__CameraView;
}
namespace GlobalNamespace {
struct GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type;
}
// Forward declare root types
namespace GlobalNamespace {
class ObjectsMovementRecorderSerializedMethods;
}
// Type: ::ObjectsMovementRecorderSerializedMethods
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6030))
// CS Name: ObjectsMovementRecorderSerializedMethods
class CORDL_TYPE ObjectsMovementRecorderSerializedMethods : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ObjectsMovementRecorderSerializedMethods() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectsMovementRecorderSerializedMethods", modifiers: " const&", def_value: None }]
constexpr ObjectsMovementRecorderSerializedMethods(ObjectsMovementRecorderSerializedMethods const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectsMovementRecorderSerializedMethods", modifiers: "&&", def_value: None }]
constexpr ObjectsMovementRecorderSerializedMethods(ObjectsMovementRecorderSerializedMethods&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObjectsMovementRecorderSerializedMethods(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ObjectsMovementRecorderSerializedMethods& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObjectsMovementRecorderSerializedMethods& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObjectsMovementRecorderSerializedMethods& operator=(ObjectsMovementRecorderSerializedMethods&& o) noexcept = default;
  constexpr ObjectsMovementRecorderSerializedMethods& operator=(ObjectsMovementRecorderSerializedMethods const& o) noexcept = default;
                


// Fields

/// @brief Field kRecordRecordingMode offset 0
static constexpr ::ConstString  kRecordRecordingMode{u"Record"};

/// @brief Field kPlaybackRecordingMode offset 0
static constexpr ::ConstString  kPlaybackRecordingMode{u"Playback"};

/// @brief Field kOffRecordingMode offset 0
static constexpr ::ConstString  kOffRecordingMode{u"Off"};

/// @brief Field kFirstPersonCameraView offset 0
static constexpr ::ConstString  kFirstPersonCameraView{u"FirstPerson"};

/// @brief Field kThirdPersonCameraView offset 0
static constexpr ::ConstString  kThirdPersonCameraView{u"ThirdPerson"};

/// @brief Field kBackgroundPlaybackScreenshotType offset 0
static constexpr ::ConstString  kBackgroundPlaybackScreenshotType{u"Background"};

/// @brief Field kForegroundPlaybackScreenshotType offset 0
static constexpr ::ConstString  kForegroundPlaybackScreenshotType{u"Foreground"};


// Methods

/// @brief Method SerializedName addr 0x21dda84 size 0x74 virtual false final false
static ::StringW SerializedName(GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__Mode mode) ;

/// @brief Method ModeFromSerializedName addr 0x21ddaf8 size 0xcc virtual false final false
static bool ModeFromSerializedName(::StringW name, ByRef<GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__Mode> mode) ;

/// @brief Method SerializedName addr 0x21ddbc4 size 0x70 virtual false final false
static ::StringW SerializedName(GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__CameraView cameraView) ;

/// @brief Method CameraViewFromSerializedName addr 0x21ddc34 size 0x9c virtual false final false
static bool CameraViewFromSerializedName(::StringW name, ByRef<GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__CameraView> cameraView) ;

/// @brief Method SerializedName addr 0x21ddcd0 size 0x68 virtual false final false
static ::StringW SerializedName(GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type type) ;

/// @brief Method PlaybackScreenshotTypeFromSerializedName addr 0x21ddd38 size 0xa4 virtual false final false
static bool PlaybackScreenshotTypeFromSerializedName(::StringW name, ByRef<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type> type) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ObjectsMovementRecorderSerializedMethods);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ObjectsMovementRecorderSerializedMethods, "", "ObjectsMovementRecorderSerializedMethods");
