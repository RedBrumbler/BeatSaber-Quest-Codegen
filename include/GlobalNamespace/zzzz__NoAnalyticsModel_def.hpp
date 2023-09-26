#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
// Forward declare root types
namespace GlobalNamespace {
class NoAnalyticsModel;
}
// Type: ::NoAnalyticsModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4005))
// CS Name: NoAnalyticsModel
class CORDL_TYPE NoAnalyticsModel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IAnalyticsModel
constexpr operator  GlobalNamespace::IAnalyticsModel() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NoAnalyticsModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoAnalyticsModel", modifiers: " const&", def_value: None }]
constexpr NoAnalyticsModel(NoAnalyticsModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoAnalyticsModel", modifiers: "&&", def_value: None }]
constexpr NoAnalyticsModel(NoAnalyticsModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoAnalyticsModel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NoAnalyticsModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoAnalyticsModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoAnalyticsModel& operator=(NoAnalyticsModel&& o) noexcept = default;
  constexpr NoAnalyticsModel& operator=(NoAnalyticsModel const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_supportsOpenDataPrivacyPage))  supportsOpenDataPrivacyPage;


// Methods

/// @brief Method get_supportsOpenDataPrivacyPage addr 0x20ea470 size 0x8 virtual true final true
 bool get_supportsOpenDataPrivacyPage() ;

/// @brief Method OpenDataPrivacyPage addr 0x20ea478 size 0x4 virtual true final true
 void OpenDataPrivacyPage() ;

/// @brief Method LogEditAvatarEvent addr 0x20ea47c size 0x4 virtual true final true
 void LogEditAvatarEvent(::StringW eventType, System::Collections::Generic::Dictionary_2<::StringW,::StringW> eventData) ;

/// @brief Method LogEvent addr 0x20ea480 size 0x4 virtual true final true
 void LogEvent(::StringW eventType, System::Collections::Generic::Dictionary_2<::StringW,::StringW> eventData) ;

/// @brief Method LogClick addr 0x20ea484 size 0x4 virtual true final true
 void LogClick(::StringW clickType, System::Collections::Generic::Dictionary_2<::StringW,::StringW> clickData) ;

/// @brief Method LogImpression addr 0x20ea488 size 0x4 virtual true final true
 void LogImpression(::StringW impressionType, System::Collections::Generic::Dictionary_2<::StringW,::StringW> impressionData) ;

/// @brief Method LogExposure addr 0x20ea48c size 0x4 virtual true final true
 void LogExposure(::StringW exposureType, System::Collections::Generic::Dictionary_2<::StringW,::StringW> exposureData) ;

// Ctor Parameters []
explicit NoAnalyticsModel() ;

/// @brief Method .ctor addr 0x20ea490 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::NoAnalyticsModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoAnalyticsModel, "", "NoAnalyticsModel");
