#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class IOVRSceneComponent;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRSemanticClassification;
}
// Type: ::OVRSemanticClassification
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8856))
// CS Name: OVRSemanticClassification
class CORDL_TYPE OVRSemanticClassification : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IOVRSceneComponent
constexpr operator  GlobalNamespace::IOVRSceneComponent() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OVRSemanticClassification() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRSemanticClassification", modifiers: " const&", def_value: None }]
constexpr OVRSemanticClassification(OVRSemanticClassification const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRSemanticClassification", modifiers: "&&", def_value: None }]
constexpr OVRSemanticClassification(OVRSemanticClassification&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRSemanticClassification(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRSemanticClassification& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRSemanticClassification& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRSemanticClassification& operator=(OVRSemanticClassification&& o) noexcept = default;
  constexpr OVRSemanticClassification& operator=(OVRSemanticClassification const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get__labels, put=__set__labels))  _labels;

constexpr void __set__labels(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get__labels() const;


// Properties

 System::Collections::Generic::IReadOnlyList_1<::StringW> __declspec(property(get=get_Labels))  Labels;


// Methods

/// @brief Method get_Labels addr 0x263c584 size 0x8 virtual false final false
 System::Collections::Generic::IReadOnlyList_1<::StringW> get_Labels() ;

/// @brief Method Contains addr 0x263c58c size 0x160 virtual false final false
 bool Contains(::StringW label) ;

/// @brief Method Awake addr 0x263c6ec size 0xd0 virtual false final false
 void Awake() ;

/// @brief Method IOVRSceneComponent.Initialize addr 0x263c7bc size 0x11c virtual true final true
 void IOVRSceneComponent_Initialize() ;

// Ctor Parameters []
explicit OVRSemanticClassification() ;

/// @brief Method .ctor addr 0x263c8d8 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRSemanticClassification);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSemanticClassification, "", "OVRSemanticClassification");
