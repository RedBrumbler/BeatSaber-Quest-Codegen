#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
class IPlayableBehaviour;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::Playables {
class IPlayableAsset;
}
namespace UnityEngine::Playables {
struct PlayableBinding;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class BasicPlayableBehaviour;
}
// Type: UnityEngine.Timeline::BasicPlayableBehaviour
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14134))
// CS Name: UnityEngine.Timeline.BasicPlayableBehaviour
class CORDL_TYPE BasicPlayableBehaviour : public UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Convert operator to UnityEngine::Playables::IPlayableAsset
constexpr operator  UnityEngine::Playables::IPlayableAsset() const noexcept;

/// @brief Convert operator to UnityEngine::Playables::IPlayableBehaviour
constexpr operator  UnityEngine::Playables::IPlayableBehaviour() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BasicPlayableBehaviour() = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicPlayableBehaviour", modifiers: " const&", def_value: None }]
constexpr BasicPlayableBehaviour(BasicPlayableBehaviour const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicPlayableBehaviour", modifiers: "&&", def_value: None }]
constexpr BasicPlayableBehaviour(BasicPlayableBehaviour&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BasicPlayableBehaviour(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr BasicPlayableBehaviour& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BasicPlayableBehaviour& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BasicPlayableBehaviour& operator=(BasicPlayableBehaviour&& o) noexcept = default;
  constexpr BasicPlayableBehaviour& operator=(BasicPlayableBehaviour const& o) noexcept = default;
                


// Properties

 double_t __declspec(property(get=get_duration))  duration;

 System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding> __declspec(property(get=get_outputs))  outputs;


// Methods

/// @brief Method get_duration addr 0x2b04e64 size 0x58 virtual true final false
 double_t get_duration() ;

/// @brief Method get_outputs addr 0x2b04ebc size 0x58 virtual true final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding> get_outputs() ;

/// @brief Method OnGraphStart addr 0x2b04f14 size 0x4 virtual true final false
 void OnGraphStart(UnityEngine::Playables::Playable playable) ;

/// @brief Method OnGraphStop addr 0x2b04f18 size 0x4 virtual true final false
 void OnGraphStop(UnityEngine::Playables::Playable playable) ;

/// @brief Method OnPlayableCreate addr 0x2b04f1c size 0x4 virtual true final false
 void OnPlayableCreate(UnityEngine::Playables::Playable playable) ;

/// @brief Method OnPlayableDestroy addr 0x2b04f20 size 0x4 virtual true final false
 void OnPlayableDestroy(UnityEngine::Playables::Playable playable) ;

/// @brief Method OnBehaviourPlay addr 0x2b04f24 size 0x4 virtual true final false
 void OnBehaviourPlay(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info) ;

/// @brief Method OnBehaviourPause addr 0x2b04f28 size 0x4 virtual true final false
 void OnBehaviourPause(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info) ;

/// @brief Method PrepareFrame addr 0x2b04f2c size 0x4 virtual true final false
 void PrepareFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info) ;

/// @brief Method ProcessFrame addr 0x2b04f30 size 0x4 virtual true final false
 void ProcessFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info, ::bs_hook::Il2CppWrapperType playerData) ;

/// @brief Method CreatePlayable addr 0x2b04f34 size 0xa4 virtual true final false
 UnityEngine::Playables::Playable CreatePlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject owner) ;

// Ctor Parameters []
explicit BasicPlayableBehaviour() ;

/// @brief Method .ctor addr 0x2b04fd8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::BasicPlayableBehaviour);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::BasicPlayableBehaviour, "UnityEngine.Timeline", "BasicPlayableBehaviour");
