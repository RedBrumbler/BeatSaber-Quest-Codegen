#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__Background_def.hpp"
#include "UnityEngine/UIElements/zzzz__FontDefinition_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "UnityEngine/UIElements/zzzz__Rotate_def.hpp"
#include "UnityEngine/UIElements/zzzz__Scale_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextShadow_def.hpp"
#include "UnityEngine/UIElements/zzzz__TransformOrigin_def.hpp"
#include "UnityEngine/UIElements/zzzz__Translate_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::Pool {
template<typename T>
class ObjectPool_1;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UIElements {
struct Background;
}
namespace UnityEngine::UIElements {
struct FontDefinition;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
struct Rotate;
}
namespace UnityEngine::UIElements {
struct Scale;
}
namespace UnityEngine::UIElements {
struct TextShadow;
}
namespace UnityEngine::UIElements {
struct TransformOrigin;
}
namespace UnityEngine::UIElements {
struct Translate;
}
namespace UnityEngine::UIElements {
class IStylePropertyAnimationSystem;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState;
}
namespace GlobalNamespace {
template<typename T>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c;
}
namespace UnityEngine::UIElements {
template<typename T>
class UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1;
}
namespace UnityEngine::UIElements {
template<typename T>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState;
}
namespace GlobalNamespace {
class UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>;
}
namespace GlobalNamespace {
template<>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::Color>;
}
namespace GlobalNamespace {
template<>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Background>;
}
namespace GlobalNamespace {
template<>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::FontDefinition>;
}
namespace GlobalNamespace {
template<>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Length>;
}
namespace GlobalNamespace {
template<>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Rotate>;
}
namespace GlobalNamespace {
template<>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Scale>;
}
namespace GlobalNamespace {
template<>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::TextShadow>;
}
namespace GlobalNamespace {
template<>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::TransformOrigin>;
}
namespace GlobalNamespace {
template<>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Translate>;
}
namespace GlobalNamespace {
template<>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<float_t>;
}
namespace GlobalNamespace {
template<>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<int32_t>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T>;
}
namespace GlobalNamespace {
template<>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::Color>;
}
namespace GlobalNamespace {
template<>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::Background>;
}
namespace GlobalNamespace {
template<>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::FontDefinition>;
}
namespace GlobalNamespace {
template<>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::Length>;
}
namespace GlobalNamespace {
template<>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::Rotate>;
}
namespace GlobalNamespace {
template<>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::Scale>;
}
namespace GlobalNamespace {
template<>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::TextShadow>;
}
namespace GlobalNamespace {
template<>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::TransformOrigin>;
}
namespace GlobalNamespace {
template<>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::Translate>;
}
namespace GlobalNamespace {
template<>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<float_t>;
}
namespace GlobalNamespace {
template<>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<int32_t>;
}
namespace UnityEngine::UIElements {
class StylePropertyAnimationSystem;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesBackground;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesColor;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type T>
class UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1<T>;
}
namespace UnityEngine::UIElements {
template<>
class UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1<UnityEngine::UIElements::Background>;
}
namespace UnityEngine::UIElements {
template<>
class UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1<UnityEngine::UIElements::FontDefinition>;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFloat;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFont;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFontDefinition;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesInt;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesLength;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesRotate;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesScale;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTextShadow;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTransformOrigin;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTranslate;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type T>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<T>;
}
namespace UnityEngine::UIElements {
template<>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<UnityEngine::Color>;
}
namespace UnityEngine::UIElements {
template<>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<UnityEngine::UIElements::Background>;
}
namespace UnityEngine::UIElements {
template<>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<UnityEngine::UIElements::FontDefinition>;
}
namespace UnityEngine::UIElements {
template<>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<UnityEngine::UIElements::Length>;
}
namespace UnityEngine::UIElements {
template<>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<UnityEngine::UIElements::Rotate>;
}
namespace UnityEngine::UIElements {
template<>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<UnityEngine::UIElements::Scale>;
}
namespace UnityEngine::UIElements {
template<>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<UnityEngine::UIElements::TextShadow>;
}
namespace UnityEngine::UIElements {
template<>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<UnityEngine::UIElements::TransformOrigin>;
}
namespace UnityEngine::UIElements {
template<>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<UnityEngine::UIElements::Translate>;
}
namespace UnityEngine::UIElements {
template<>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<float_t>;
}
namespace UnityEngine::UIElements {
template<>
class UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<int32_t>;
}
namespace GlobalNamespace {
template<typename T>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData;
}
namespace UnityEngine::UIElements {
template<typename TTimingData,typename TStyleData>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<T>;
}
namespace GlobalNamespace {
template<>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::Color>;
}
namespace GlobalNamespace {
template<>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Background>;
}
namespace GlobalNamespace {
template<>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::FontDefinition>;
}
namespace GlobalNamespace {
template<>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Length>;
}
namespace GlobalNamespace {
template<>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Rotate>;
}
namespace GlobalNamespace {
template<>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Scale>;
}
namespace GlobalNamespace {
template<>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::TextShadow>;
}
namespace GlobalNamespace {
template<>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::TransformOrigin>;
}
namespace GlobalNamespace {
template<>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Translate>;
}
namespace GlobalNamespace {
template<>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<float_t>;
}
namespace GlobalNamespace {
template<>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t>;
}
namespace GlobalNamespace {
template<typename T>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData;
}
namespace GlobalNamespace {
template<typename T>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type TStyleData>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<::bs_hook::Il2CppWrapperType>,TStyleData>;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type TTimingData,::cordl_internals::il2cpp_reference_type TStyleData>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<TTimingData,TStyleData>;
}
namespace UnityEngine::UIElements {
template<>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::Color>,UnityEngine::Color>;
}
namespace UnityEngine::UIElements {
template<>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Background>,UnityEngine::UIElements::Background>;
}
namespace UnityEngine::UIElements {
template<>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::FontDefinition>,UnityEngine::UIElements::FontDefinition>;
}
namespace UnityEngine::UIElements {
template<>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Length>,UnityEngine::UIElements::Length>;
}
namespace UnityEngine::UIElements {
template<>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Rotate>,UnityEngine::UIElements::Rotate>;
}
namespace UnityEngine::UIElements {
template<>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Scale>,UnityEngine::UIElements::Scale>;
}
namespace UnityEngine::UIElements {
template<>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::TextShadow>,UnityEngine::UIElements::TextShadow>;
}
namespace UnityEngine::UIElements {
template<>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::TransformOrigin>,UnityEngine::UIElements::TransformOrigin>;
}
namespace UnityEngine::UIElements {
template<>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Translate>,UnityEngine::UIElements::Translate>;
}
namespace UnityEngine::UIElements {
template<>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<float_t>,float_t>;
}
namespace UnityEngine::UIElements {
template<>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t>,int32_t>;
}
namespace UnityEngine::UIElements {
template<>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<::bs_hook::Il2CppWrapperType>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<::bs_hook::Il2CppWrapperType>>;
}
namespace UnityEngine::UIElements {
template<>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::Color>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::Color>>;
}
namespace UnityEngine::UIElements {
template<>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Background>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Background>>;
}
namespace UnityEngine::UIElements {
template<>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::FontDefinition>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::FontDefinition>>;
}
namespace UnityEngine::UIElements {
template<>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Length>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Length>>;
}
namespace UnityEngine::UIElements {
template<>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Rotate>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Rotate>>;
}
namespace UnityEngine::UIElements {
template<>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Scale>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Scale>>;
}
namespace UnityEngine::UIElements {
template<>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::TextShadow>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::TextShadow>>;
}
namespace UnityEngine::UIElements {
template<>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::TransformOrigin>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::TransformOrigin>>;
}
namespace UnityEngine::UIElements {
template<>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Translate>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Translate>>;
}
namespace UnityEngine::UIElements {
template<>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<float_t>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<float_t>>;
}
namespace UnityEngine::UIElements {
template<>
struct UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<int32_t>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<int32_t>>;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair;
}
// Type: ::TransitionState
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6937))
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::TransitionState
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState(int32_t value__) noexcept;


                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState(UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState(UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState_Unwrapped : int32_t {
__None = 0,
__Running = 1,
__Started = 2,
__Ended = 4,
__Canceled = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState const None;

/// @brief Field Running offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState const Running;

/// @brief Field Started offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState const Started;

/// @brief Field Ended offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState const Ended;

/// @brief Field Canceled offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState const Canceled;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
// Type: ::EqualityComparer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6939))
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::ElementPropertyPair::EqualityComparer
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEqualityComparer_1<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair>
constexpr operator  System::Collections::Generic::IEqualityComparer_1<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer(UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer(UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x2c7edf8 size 0x18 virtual true final true
 bool Equals(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair x, UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair y) ;

/// @brief Method GetHashCode addr 0x2c7ee10 size 0x34 virtual true final true
 int32_t GetHashCode(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair obj) ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer() ;

/// @brief Method .ctor addr 0x2c7edf0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ElementPropertyPair
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6940))
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::ElementPropertyPair
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using EqualityComparer = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer;

// Ctor Parameters [CppParam { name: "element", ty: "UnityEngine::UIElements::VisualElement", modifiers: "", def_value: None }, CppParam { name: "property", ty: "UnityEngine::UIElements::StyleSheets::StylePropertyId", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair(UnityEngine::UIElements::VisualElement element, UnityEngine::UIElements::StyleSheets::StylePropertyId property) noexcept;


                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair(UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair(UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static System::Collections::Generic::IEqualityComparer_1<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair> __declspec(property(get=__get_Comparer, put=__set_Comparer))  Comparer;

static void __set_Comparer(System::Collections::Generic::IEqualityComparer_1<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair> value) ;

static System::Collections::Generic::IEqualityComparer_1<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair> __get_Comparer() ;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_element, put=__set_element))  element;

constexpr void __set_element(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_element() const;

 UnityEngine::UIElements::StyleSheets::StylePropertyId __declspec(property(get=__get_property, put=__set_property))  property;

constexpr void __set_property(UnityEngine::UIElements::StyleSheets::StylePropertyId value) ;

constexpr UnityEngine::UIElements::StyleSheets::StylePropertyId __get_property() const;


// Methods

/// @brief Method .ctor addr 0x2c7ed6c size 0xc virtual false final false
 void _ctor(UnityEngine::UIElements::VisualElement element, UnityEngine::UIElements::StyleSheets::StylePropertyId property) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::Values
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6941))
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__Values() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values(UnityEngine__UIElements__StylePropertyAnimationSystem__Values const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values(UnityEngine__UIElements__StylePropertyAnimationSystem__Values&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values const& o) noexcept = default;
                


// Methods

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final false
 void CancelAllAnimations() ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final false
 void CancelAllAnimations(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method CancelAnimation addr 0x0 size 0xffffffffffffffff virtual true final false
 void CancelAnimation(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method UpdateAnimation addr 0x0 size 0xffffffffffffffff virtual true final false
 void UpdateAnimation(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method GetAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetAllAnimations(UnityEngine::UIElements::VisualElement ve, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outPropertyIds) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final false
 void Update(int64_t currentTimeMs) ;

/// @brief Method UpdateValues addr 0x0 size 0xffffffffffffffff virtual true final false
 void UpdateValues() ;

/// @brief Method UpdateComputedStyle addr 0x0 size 0xffffffffffffffff virtual true final false
 void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle addr 0x0 size 0xffffffffffffffff virtual true final false
 void UpdateComputedStyle(int32_t i) ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values() ;

/// @brief Method .ctor addr 0x2c7ee44 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::<>c
// Type: ::TransitionEventsFrameState
// Type: ::TimingData
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6944))
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::TimingData
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "startTimeMs", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "durationMs", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "easingCurve", ty: "System::Func_2<float_t,float_t>", modifiers: "", def_value: None }, CppParam { name: "easedProgress", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "reversingShorteningFactor", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "isStarted", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "delayMs", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData(int64_t startTimeMs, int32_t durationMs, System::Func_2<float_t,float_t> easingCurve, float_t easedProgress, float_t reversingShorteningFactor, bool isStarted, int32_t delayMs) noexcept;


                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int64_t __declspec(property(get=__get_startTimeMs, put=__set_startTimeMs))  startTimeMs;

constexpr void __set_startTimeMs(int64_t value) ;

constexpr int64_t __get_startTimeMs() const;

 int32_t __declspec(property(get=__get_durationMs, put=__set_durationMs))  durationMs;

constexpr void __set_durationMs(int32_t value) ;

constexpr int32_t __get_durationMs() const;

 System::Func_2<float_t,float_t> __declspec(property(get=__get_easingCurve, put=__set_easingCurve))  easingCurve;

constexpr void __set_easingCurve(System::Func_2<float_t,float_t> value) ;

constexpr System::Func_2<float_t,float_t> __get_easingCurve() const;

 float_t __declspec(property(get=__get_easedProgress, put=__set_easedProgress))  easedProgress;

constexpr void __set_easedProgress(float_t value) ;

constexpr float_t __get_easedProgress() const;

 float_t __declspec(property(get=__get_reversingShorteningFactor, put=__set_reversingShorteningFactor))  reversingShorteningFactor;

constexpr void __set_reversingShorteningFactor(float_t value) ;

constexpr float_t __get_reversingShorteningFactor() const;

 bool __declspec(property(get=__get_isStarted, put=__set_isStarted))  isStarted;

constexpr void __set_isStarted(bool value) ;

constexpr bool __get_isStarted() const;

 int32_t __declspec(property(get=__get_delayMs, put=__set_delayMs))  delayMs;

constexpr void __set_delayMs(int32_t value) ;

constexpr int32_t __get_delayMs() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::StyleData
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6945))
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::StyleData
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "startValue", ty: "T", modifiers: "", def_value: None }, CppParam { name: "endValue", ty: "T", modifiers: "", def_value: None }, CppParam { name: "reversingAdjustedStartValue", ty: "T", modifiers: "", def_value: None }, CppParam { name: "currentValue", ty: "T", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData(T startValue, T endValue, T reversingAdjustedStartValue, T currentValue) noexcept;


                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 T __declspec(property(get=__get_startValue, put=__set_startValue))  startValue;

constexpr void __set_startValue(T value) ;

constexpr T __get_startValue() const;

 T __declspec(property(get=__get_endValue, put=__set_endValue))  endValue;

constexpr void __set_endValue(T value) ;

constexpr T __get_endValue() const;

 T __declspec(property(get=__get_reversingAdjustedStartValue, put=__set_reversingAdjustedStartValue))  reversingAdjustedStartValue;

constexpr void __set_reversingAdjustedStartValue(T value) ;

constexpr T __get_reversingAdjustedStartValue() const;

 T __declspec(property(get=__get_currentValue, put=__set_currentValue))  currentValue;

constexpr void __set_currentValue(T value) ;

constexpr T __get_currentValue() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EmptyData
// Type: ::Values`1
// Type: ::Values`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6941)), TypeDefinitionIndex(TypeDefinitionIndex(6947))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6947), inst: 374 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<float_t> : public UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values {
public:
// Declarations
using EmptyData = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<float_t>;

using StyleData = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<float_t>;

using TimingData = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<float_t>;

using TransitionEventsFrameState = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<float_t>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1 const& o) noexcept = default;
                


// Fields

 int64_t __declspec(property(get=__get_m_CurrentTimeMs, put=__set_m_CurrentTimeMs))  m_CurrentTimeMs;

constexpr void __set_m_CurrentTimeMs(int64_t value) ;

constexpr int64_t __get_m_CurrentTimeMs() const;

 GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<float_t> __declspec(property(get=__get_m_CurrentFrameEventsState, put=__set_m_CurrentFrameEventsState))  m_CurrentFrameEventsState;

constexpr void __set_m_CurrentFrameEventsState(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<float_t> value) ;

constexpr GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<float_t> __get_m_CurrentFrameEventsState() const;

 GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<float_t> __declspec(property(get=__get_m_NextFrameEventsState, put=__set_m_NextFrameEventsState))  m_NextFrameEventsState;

constexpr void __set_m_NextFrameEventsState(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<float_t> value) ;

constexpr GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<float_t> __get_m_NextFrameEventsState() const;

 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<float_t>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<float_t>> __declspec(property(get=__get_running, put=__set_running))  running;

constexpr void __set_running(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<float_t>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<float_t>> value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<float_t>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<float_t>> __get_running() const;

 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<float_t>,float_t> __declspec(property(get=__get_completed, put=__set_completed))  completed;

constexpr void __set_completed(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<float_t>,float_t> value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<float_t>,float_t> __get_completed() const;


// Properties

 bool __declspec(property(get=get_isEmpty))  isEmpty;

 System::Func_3<float_t,float_t,bool> __declspec(property(get=get_SameFunc))  SameFunc;


// Methods

/// @brief Method get_isEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_isEmpty() ;

/// @brief Method get_SameFunc addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Func_3<float_t,float_t,bool> get_SameFunc() ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method SwapFrameStates addr 0x0 size 0xffffffffffffffff virtual false final false
 void SwapFrameStates() ;

/// @brief Method QueueEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueEvent(UnityEngine::UIElements::EventBase evt, UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair epp) ;

/// @brief Method ClearEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ClearEventQueue(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair epp) ;

/// @brief Method QueueTransitionRunEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionRunEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex) ;

/// @brief Method QueueTransitionStartEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionStartEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex) ;

/// @brief Method QueueTransitionEndEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionEndEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex) ;

/// @brief Method QueueTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionCancelEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex, int64_t panelElapsedMs) ;

/// @brief Method SendTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void SendTransitionCancelEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex, int64_t panelElapsedMs) ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
 void CancelAllAnimations() ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
 void CancelAllAnimations(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method CancelAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
 void CancelAnimation(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method UpdateAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
 void UpdateAnimation(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method GetAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
 void GetAllAnimations(UnityEngine::UIElements::VisualElement ve, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outPropertyIds) ;

/// @brief Method ComputeReversingShorteningFactor addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t ComputeReversingShorteningFactor(int32_t oldIndex) ;

/// @brief Method ComputeReversingDuration addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t ComputeReversingDuration(int32_t newTransitionDurationMs, float_t newReversingShorteningFactor) ;

/// @brief Method ComputeReversingDelay addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t ComputeReversingDelay(int32_t delayMs, float_t newReversingShorteningFactor) ;

/// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual false final false
 bool StartTransition(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, float_t startValue, float_t endValue, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve, int64_t currentTimeMs) ;

/// @brief Method ForceComputedStyleEndValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ForceComputedStyleEndValue(int32_t runningIndex) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final true
 void Update(int64_t currentTimeMs) ;

/// @brief Method ProcessEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ProcessEventQueue() ;

/// @brief Method UpdateProgress addr 0x0 size 0xffffffffffffffff virtual false final false
 void UpdateProgress(int64_t currentTimeMs) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::ValuesFloat
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6947), inst: 374 }), TypeDefinitionIndex(TypeDefinitionIndex(6947))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6948))
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::ValuesFloat
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFloat : public UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFloat() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFloat", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFloat(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFloat const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFloat", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFloat(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFloat&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFloat(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<float_t>(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFloat& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFloat& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFloat& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFloat&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFloat& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFloat const& o) noexcept = default;
                


// Fields

 System::Func_3<float_t,float_t,bool> __declspec(property(get=__get__SameFunc_k__BackingField, put=__set__SameFunc_k__BackingField))  _SameFunc_k__BackingField;

constexpr void __set__SameFunc_k__BackingField(System::Func_3<float_t,float_t,bool> value) ;

constexpr System::Func_3<float_t,float_t,bool> __get__SameFunc_k__BackingField() const;


// Properties

 System::Func_3<float_t,float_t,bool> __declspec(property(get=get_SameFunc))  SameFunc;


// Methods

/// @brief Method get_SameFunc addr 0x2c7ee4c size 0x8 virtual true final false
 System::Func_3<float_t,float_t,bool> get_SameFunc() ;

/// @brief Method IsSame addr 0x2c7ee54 size 0x88 virtual false final false
static bool IsSame(float_t a, float_t b) ;

/// @brief Method Lerp addr 0x2c7eedc size 0x10 virtual false final false
static float_t Lerp(float_t a, float_t b, float_t t) ;

/// @brief Method UpdateValues addr 0x2c7eeec size 0x80 virtual true final true
 void UpdateValues() ;

/// @brief Method UpdateComputedStyle addr 0x2c7ef6c size 0xcc virtual true final true
 void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle addr 0x2c7f038 size 0xa8 virtual true final true
 void UpdateComputedStyle(int32_t i) ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFloat() ;

/// @brief Method .ctor addr 0x2c7f0e0 size 0x98 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::Values`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6941)), TypeDefinitionIndex(TypeDefinitionIndex(6947))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6947), inst: 92 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<int32_t> : public UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values {
public:
// Declarations
using EmptyData = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t>;

using StyleData = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<int32_t>;

using TimingData = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<int32_t>;

using TransitionEventsFrameState = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<int32_t>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1 const& o) noexcept = default;
                


// Fields

 int64_t __declspec(property(get=__get_m_CurrentTimeMs, put=__set_m_CurrentTimeMs))  m_CurrentTimeMs;

constexpr void __set_m_CurrentTimeMs(int64_t value) ;

constexpr int64_t __get_m_CurrentTimeMs() const;

 GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<int32_t> __declspec(property(get=__get_m_CurrentFrameEventsState, put=__set_m_CurrentFrameEventsState))  m_CurrentFrameEventsState;

constexpr void __set_m_CurrentFrameEventsState(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<int32_t> value) ;

constexpr GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<int32_t> __get_m_CurrentFrameEventsState() const;

 GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<int32_t> __declspec(property(get=__get_m_NextFrameEventsState, put=__set_m_NextFrameEventsState))  m_NextFrameEventsState;

constexpr void __set_m_NextFrameEventsState(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<int32_t> value) ;

constexpr GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<int32_t> __get_m_NextFrameEventsState() const;

 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<int32_t>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<int32_t>> __declspec(property(get=__get_running, put=__set_running))  running;

constexpr void __set_running(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<int32_t>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<int32_t>> value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<int32_t>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<int32_t>> __get_running() const;

 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t>,int32_t> __declspec(property(get=__get_completed, put=__set_completed))  completed;

constexpr void __set_completed(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t>,int32_t> value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t>,int32_t> __get_completed() const;


// Properties

 bool __declspec(property(get=get_isEmpty))  isEmpty;

 System::Func_3<int32_t,int32_t,bool> __declspec(property(get=get_SameFunc))  SameFunc;


// Methods

/// @brief Method get_isEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_isEmpty() ;

/// @brief Method get_SameFunc addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Func_3<int32_t,int32_t,bool> get_SameFunc() ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method SwapFrameStates addr 0x0 size 0xffffffffffffffff virtual false final false
 void SwapFrameStates() ;

/// @brief Method QueueEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueEvent(UnityEngine::UIElements::EventBase evt, UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair epp) ;

/// @brief Method ClearEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ClearEventQueue(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair epp) ;

/// @brief Method QueueTransitionRunEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionRunEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex) ;

/// @brief Method QueueTransitionStartEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionStartEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex) ;

/// @brief Method QueueTransitionEndEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionEndEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex) ;

/// @brief Method QueueTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionCancelEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex, int64_t panelElapsedMs) ;

/// @brief Method SendTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void SendTransitionCancelEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex, int64_t panelElapsedMs) ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
 void CancelAllAnimations() ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
 void CancelAllAnimations(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method CancelAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
 void CancelAnimation(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method UpdateAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
 void UpdateAnimation(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method GetAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
 void GetAllAnimations(UnityEngine::UIElements::VisualElement ve, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outPropertyIds) ;

/// @brief Method ComputeReversingShorteningFactor addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t ComputeReversingShorteningFactor(int32_t oldIndex) ;

/// @brief Method ComputeReversingDuration addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t ComputeReversingDuration(int32_t newTransitionDurationMs, float_t newReversingShorteningFactor) ;

/// @brief Method ComputeReversingDelay addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t ComputeReversingDelay(int32_t delayMs, float_t newReversingShorteningFactor) ;

/// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual false final false
 bool StartTransition(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, int32_t startValue, int32_t endValue, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve, int64_t currentTimeMs) ;

/// @brief Method ForceComputedStyleEndValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ForceComputedStyleEndValue(int32_t runningIndex) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final true
 void Update(int64_t currentTimeMs) ;

/// @brief Method ProcessEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ProcessEventQueue() ;

/// @brief Method UpdateProgress addr 0x0 size 0xffffffffffffffff virtual false final false
 void UpdateProgress(int64_t currentTimeMs) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::ValuesInt
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6947)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6947), inst: 92 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6949))
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::ValuesInt
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesInt : public UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<int32_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesInt() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesInt", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesInt(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesInt const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesInt", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesInt(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesInt&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesInt(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<int32_t>(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesInt& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesInt& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesInt& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesInt&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesInt& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesInt const& o) noexcept = default;
                


// Fields

 System::Func_3<int32_t,int32_t,bool> __declspec(property(get=__get__SameFunc_k__BackingField, put=__set__SameFunc_k__BackingField))  _SameFunc_k__BackingField;

constexpr void __set__SameFunc_k__BackingField(System::Func_3<int32_t,int32_t,bool> value) ;

constexpr System::Func_3<int32_t,int32_t,bool> __get__SameFunc_k__BackingField() const;


// Properties

 System::Func_3<int32_t,int32_t,bool> __declspec(property(get=get_SameFunc))  SameFunc;


// Methods

/// @brief Method get_SameFunc addr 0x2c7f178 size 0x8 virtual true final false
 System::Func_3<int32_t,int32_t,bool> get_SameFunc() ;

/// @brief Method IsSame addr 0x2c7f180 size 0xc virtual false final false
static bool IsSame(int32_t a, int32_t b) ;

/// @brief Method Lerp addr 0x2c7f18c size 0xec virtual false final false
static int32_t Lerp(int32_t a, int32_t b, float_t t) ;

/// @brief Method UpdateValues addr 0x2c7f278 size 0x98 virtual true final true
 void UpdateValues() ;

/// @brief Method UpdateComputedStyle addr 0x2c7f310 size 0xcc virtual true final true
 void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle addr 0x2c7f3dc size 0xa8 virtual true final true
 void UpdateComputedStyle(int32_t i) ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesInt() ;

/// @brief Method .ctor addr 0x2c7f484 size 0x98 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::Values`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6947)), TypeDefinitionIndex(TypeDefinitionIndex(6941))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6947), inst: 1507 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<UnityEngine::UIElements::Length> : public UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values {
public:
// Declarations
using EmptyData = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Length>;

using StyleData = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Length>;

using TimingData = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Length>;

using TransitionEventsFrameState = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Length>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1 const& o) noexcept = default;
                


// Fields

 int64_t __declspec(property(get=__get_m_CurrentTimeMs, put=__set_m_CurrentTimeMs))  m_CurrentTimeMs;

constexpr void __set_m_CurrentTimeMs(int64_t value) ;

constexpr int64_t __get_m_CurrentTimeMs() const;

 GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Length> __declspec(property(get=__get_m_CurrentFrameEventsState, put=__set_m_CurrentFrameEventsState))  m_CurrentFrameEventsState;

constexpr void __set_m_CurrentFrameEventsState(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Length> value) ;

constexpr GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Length> __get_m_CurrentFrameEventsState() const;

 GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Length> __declspec(property(get=__get_m_NextFrameEventsState, put=__set_m_NextFrameEventsState))  m_NextFrameEventsState;

constexpr void __set_m_NextFrameEventsState(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Length> value) ;

constexpr GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Length> __get_m_NextFrameEventsState() const;

 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Length>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Length>> __declspec(property(get=__get_running, put=__set_running))  running;

constexpr void __set_running(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Length>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Length>> value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Length>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Length>> __get_running() const;

 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Length>,UnityEngine::UIElements::Length> __declspec(property(get=__get_completed, put=__set_completed))  completed;

constexpr void __set_completed(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Length>,UnityEngine::UIElements::Length> value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Length>,UnityEngine::UIElements::Length> __get_completed() const;


// Properties

 bool __declspec(property(get=get_isEmpty))  isEmpty;

 System::Func_3<UnityEngine::UIElements::Length,UnityEngine::UIElements::Length,bool> __declspec(property(get=get_SameFunc))  SameFunc;


// Methods

/// @brief Method get_isEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_isEmpty() ;

/// @brief Method get_SameFunc addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Func_3<UnityEngine::UIElements::Length,UnityEngine::UIElements::Length,bool> get_SameFunc() ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method SwapFrameStates addr 0x0 size 0xffffffffffffffff virtual false final false
 void SwapFrameStates() ;

/// @brief Method QueueEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueEvent(UnityEngine::UIElements::EventBase evt, UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair epp) ;

/// @brief Method ClearEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ClearEventQueue(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair epp) ;

/// @brief Method QueueTransitionRunEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionRunEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex) ;

/// @brief Method QueueTransitionStartEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionStartEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex) ;

/// @brief Method QueueTransitionEndEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionEndEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex) ;

/// @brief Method QueueTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionCancelEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex, int64_t panelElapsedMs) ;

/// @brief Method SendTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void SendTransitionCancelEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex, int64_t panelElapsedMs) ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
 void CancelAllAnimations() ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
 void CancelAllAnimations(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method CancelAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
 void CancelAnimation(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method UpdateAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
 void UpdateAnimation(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method GetAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
 void GetAllAnimations(UnityEngine::UIElements::VisualElement ve, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outPropertyIds) ;

/// @brief Method ComputeReversingShorteningFactor addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t ComputeReversingShorteningFactor(int32_t oldIndex) ;

/// @brief Method ComputeReversingDuration addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t ComputeReversingDuration(int32_t newTransitionDurationMs, float_t newReversingShorteningFactor) ;

/// @brief Method ComputeReversingDelay addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t ComputeReversingDelay(int32_t delayMs, float_t newReversingShorteningFactor) ;

/// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual false final false
 bool StartTransition(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, UnityEngine::UIElements::Length startValue, UnityEngine::UIElements::Length endValue, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve, int64_t currentTimeMs) ;

/// @brief Method ForceComputedStyleEndValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ForceComputedStyleEndValue(int32_t runningIndex) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final true
 void Update(int64_t currentTimeMs) ;

/// @brief Method ProcessEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ProcessEventQueue() ;

/// @brief Method UpdateProgress addr 0x0 size 0xffffffffffffffff virtual false final false
 void UpdateProgress(int64_t currentTimeMs) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::ValuesLength
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6947)), TypeDefinitionIndex(TypeDefinitionIndex(7431)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6947), inst: 1507 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6950))
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::ValuesLength
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesLength : public UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<UnityEngine::UIElements::Length> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesLength() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesLength", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesLength(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesLength const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesLength", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesLength(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesLength&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesLength(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<UnityEngine::UIElements::Length>(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesLength& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesLength& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesLength& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesLength&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesLength& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesLength const& o) noexcept = default;
                


// Fields

 System::Func_3<UnityEngine::UIElements::Length,UnityEngine::UIElements::Length,bool> __declspec(property(get=__get__SameFunc_k__BackingField, put=__set__SameFunc_k__BackingField))  _SameFunc_k__BackingField;

constexpr void __set__SameFunc_k__BackingField(System::Func_3<UnityEngine::UIElements::Length,UnityEngine::UIElements::Length,bool> value) ;

constexpr System::Func_3<UnityEngine::UIElements::Length,UnityEngine::UIElements::Length,bool> __get__SameFunc_k__BackingField() const;


// Properties

 System::Func_3<UnityEngine::UIElements::Length,UnityEngine::UIElements::Length,bool> __declspec(property(get=get_SameFunc))  SameFunc;


// Methods

/// @brief Method get_SameFunc addr 0x2c7f51c size 0x8 virtual true final false
 System::Func_3<UnityEngine::UIElements::Length,UnityEngine::UIElements::Length,bool> get_SameFunc() ;

/// @brief Method IsSame addr 0x2c7f524 size 0xa0 virtual false final false
static bool IsSame(UnityEngine::UIElements::Length a, UnityEngine::UIElements::Length b) ;

/// @brief Method Lerp addr 0x2c7f5c4 size 0x3c virtual false final false
static UnityEngine::UIElements::Length Lerp(UnityEngine::UIElements::Length a, UnityEngine::UIElements::Length b, float_t t) ;

/// @brief Method UpdateValues addr 0x2c7f600 size 0xbc virtual true final true
 void UpdateValues() ;

/// @brief Method UpdateComputedStyle addr 0x2c7f6bc size 0xcc virtual true final true
 void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle addr 0x2c7f788 size 0xa8 virtual true final true
 void UpdateComputedStyle(int32_t i) ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesLength() ;

/// @brief Method .ctor addr 0x2c7f830 size 0x98 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::Values`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6947)), TypeDefinitionIndex(TypeDefinitionIndex(6941))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6947), inst: 280 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<UnityEngine::Color> : public UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values {
public:
// Declarations
using EmptyData = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::Color>;

using StyleData = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::Color>;

using TimingData = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::Color>;

using TransitionEventsFrameState = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::Color>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1 const& o) noexcept = default;
                


// Fields

 int64_t __declspec(property(get=__get_m_CurrentTimeMs, put=__set_m_CurrentTimeMs))  m_CurrentTimeMs;

constexpr void __set_m_CurrentTimeMs(int64_t value) ;

constexpr int64_t __get_m_CurrentTimeMs() const;

 GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::Color> __declspec(property(get=__get_m_CurrentFrameEventsState, put=__set_m_CurrentFrameEventsState))  m_CurrentFrameEventsState;

constexpr void __set_m_CurrentFrameEventsState(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::Color> value) ;

constexpr GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::Color> __get_m_CurrentFrameEventsState() const;

 GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::Color> __declspec(property(get=__get_m_NextFrameEventsState, put=__set_m_NextFrameEventsState))  m_NextFrameEventsState;

constexpr void __set_m_NextFrameEventsState(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::Color> value) ;

constexpr GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::Color> __get_m_NextFrameEventsState() const;

 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::Color>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::Color>> __declspec(property(get=__get_running, put=__set_running))  running;

constexpr void __set_running(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::Color>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::Color>> value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::Color>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::Color>> __get_running() const;

 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::Color>,UnityEngine::Color> __declspec(property(get=__get_completed, put=__set_completed))  completed;

constexpr void __set_completed(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::Color>,UnityEngine::Color> value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::Color>,UnityEngine::Color> __get_completed() const;


// Properties

 bool __declspec(property(get=get_isEmpty))  isEmpty;

 System::Func_3<UnityEngine::Color,UnityEngine::Color,bool> __declspec(property(get=get_SameFunc))  SameFunc;


// Methods

/// @brief Method get_isEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_isEmpty() ;

/// @brief Method get_SameFunc addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Func_3<UnityEngine::Color,UnityEngine::Color,bool> get_SameFunc() ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method SwapFrameStates addr 0x0 size 0xffffffffffffffff virtual false final false
 void SwapFrameStates() ;

/// @brief Method QueueEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueEvent(UnityEngine::UIElements::EventBase evt, UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair epp) ;

/// @brief Method ClearEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ClearEventQueue(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair epp) ;

/// @brief Method QueueTransitionRunEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionRunEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex) ;

/// @brief Method QueueTransitionStartEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionStartEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex) ;

/// @brief Method QueueTransitionEndEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionEndEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex) ;

/// @brief Method QueueTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionCancelEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex, int64_t panelElapsedMs) ;

/// @brief Method SendTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void SendTransitionCancelEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex, int64_t panelElapsedMs) ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
 void CancelAllAnimations() ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
 void CancelAllAnimations(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method CancelAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
 void CancelAnimation(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method UpdateAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
 void UpdateAnimation(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method GetAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
 void GetAllAnimations(UnityEngine::UIElements::VisualElement ve, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outPropertyIds) ;

/// @brief Method ComputeReversingShorteningFactor addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t ComputeReversingShorteningFactor(int32_t oldIndex) ;

/// @brief Method ComputeReversingDuration addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t ComputeReversingDuration(int32_t newTransitionDurationMs, float_t newReversingShorteningFactor) ;

/// @brief Method ComputeReversingDelay addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t ComputeReversingDelay(int32_t delayMs, float_t newReversingShorteningFactor) ;

/// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual false final false
 bool StartTransition(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, UnityEngine::Color startValue, UnityEngine::Color endValue, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve, int64_t currentTimeMs) ;

/// @brief Method ForceComputedStyleEndValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ForceComputedStyleEndValue(int32_t runningIndex) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final true
 void Update(int64_t currentTimeMs) ;

/// @brief Method ProcessEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ProcessEventQueue() ;

/// @brief Method UpdateProgress addr 0x0 size 0xffffffffffffffff virtual false final false
 void UpdateProgress(int64_t currentTimeMs) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::ValuesColor
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10211)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6947), inst: 280 }), TypeDefinitionIndex(TypeDefinitionIndex(6947))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6951))
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::ValuesColor
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesColor : public UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<UnityEngine::Color> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesColor() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesColor", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesColor(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesColor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesColor", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesColor(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesColor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesColor(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<UnityEngine::Color>(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesColor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesColor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesColor& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesColor&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesColor& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesColor const& o) noexcept = default;
                


// Fields

 System::Func_3<UnityEngine::Color,UnityEngine::Color,bool> __declspec(property(get=__get__SameFunc_k__BackingField, put=__set__SameFunc_k__BackingField))  _SameFunc_k__BackingField;

constexpr void __set__SameFunc_k__BackingField(System::Func_3<UnityEngine::Color,UnityEngine::Color,bool> value) ;

constexpr System::Func_3<UnityEngine::Color,UnityEngine::Color,bool> __get__SameFunc_k__BackingField() const;


// Properties

 System::Func_3<UnityEngine::Color,UnityEngine::Color,bool> __declspec(property(get=get_SameFunc))  SameFunc;


// Methods

/// @brief Method get_SameFunc addr 0x2c7f8c8 size 0x8 virtual true final false
 System::Func_3<UnityEngine::Color,UnityEngine::Color,bool> get_SameFunc() ;

/// @brief Method IsSame addr 0x2c7f8d0 size 0x138 virtual false final false
static bool IsSame(UnityEngine::Color c, UnityEngine::Color d) ;

/// @brief Method Lerp addr 0x2c7fa08 size 0x38 virtual false final false
static UnityEngine::Color Lerp(UnityEngine::Color a, UnityEngine::Color b, float_t t) ;

/// @brief Method UpdateValues addr 0x2c7fa40 size 0x84 virtual true final true
 void UpdateValues() ;

/// @brief Method UpdateComputedStyle addr 0x2c7fac4 size 0xd0 virtual true final true
 void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle addr 0x2c7fb94 size 0xac virtual true final true
 void UpdateComputedStyle(int32_t i) ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesColor() ;

/// @brief Method .ctor addr 0x2c7fc40 size 0x98 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::ValuesDiscrete`1
// Type: ::ValuesDiscrete`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6952)), TypeDefinitionIndex(TypeDefinitionIndex(6947)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6947), inst: 5175 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6952), inst: 1505 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::ValuesDiscrete`1
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1<UnityEngine::UIElements::Background> : public UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<UnityEngine::UIElements::Background> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<UnityEngine::UIElements::Background>(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1 const& o) noexcept = default;
                


// Fields

 System::Func_3<UnityEngine::UIElements::Background,UnityEngine::UIElements::Background,bool> __declspec(property(get=__get__SameFunc_k__BackingField, put=__set__SameFunc_k__BackingField))  _SameFunc_k__BackingField;

constexpr void __set__SameFunc_k__BackingField(System::Func_3<UnityEngine::UIElements::Background,UnityEngine::UIElements::Background,bool> value) ;

constexpr System::Func_3<UnityEngine::UIElements::Background,UnityEngine::UIElements::Background,bool> __get__SameFunc_k__BackingField() const;


// Properties

 System::Func_3<UnityEngine::UIElements::Background,UnityEngine::UIElements::Background,bool> __declspec(property(get=get_SameFunc))  SameFunc;


// Methods

/// @brief Method get_SameFunc addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Func_3<UnityEngine::UIElements::Background,UnityEngine::UIElements::Background,bool> get_SameFunc() ;

/// @brief Method IsSame addr 0x0 size 0xffffffffffffffff virtual false final false
static bool IsSame(UnityEngine::UIElements::Background a, UnityEngine::UIElements::Background b) ;

/// @brief Method Lerp addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::UIElements::Background Lerp(UnityEngine::UIElements::Background a, UnityEngine::UIElements::Background b, float_t t) ;

/// @brief Method UpdateValues addr 0x0 size 0xffffffffffffffff virtual true final true
 void UpdateValues() ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::ValuesBackground
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6952)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6952), inst: 1505 }), TypeDefinitionIndex(TypeDefinitionIndex(7411))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6953))
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::ValuesBackground
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesBackground : public UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1<UnityEngine::UIElements::Background> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesBackground() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesBackground", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesBackground(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesBackground const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesBackground", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesBackground(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesBackground&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesBackground(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1<UnityEngine::UIElements::Background>(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesBackground& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesBackground& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesBackground& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesBackground&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesBackground& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesBackground const& o) noexcept = default;
                


// Methods

/// @brief Method UpdateComputedStyle addr 0x2c7fcd8 size 0xdc virtual true final true
 void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle addr 0x2c7fdb4 size 0xbc virtual true final true
 void UpdateComputedStyle(int32_t i) ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesBackground() ;

/// @brief Method .ctor addr 0x2c7fe70 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::ValuesDiscrete`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6952)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6947), inst: 5175 }), TypeDefinitionIndex(TypeDefinitionIndex(6947))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6952), inst: 1506 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::ValuesDiscrete`1
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1<UnityEngine::UIElements::FontDefinition> : public UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<UnityEngine::UIElements::FontDefinition> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<UnityEngine::UIElements::FontDefinition>(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1 const& o) noexcept = default;
                


// Fields

 System::Func_3<UnityEngine::UIElements::FontDefinition,UnityEngine::UIElements::FontDefinition,bool> __declspec(property(get=__get__SameFunc_k__BackingField, put=__set__SameFunc_k__BackingField))  _SameFunc_k__BackingField;

constexpr void __set__SameFunc_k__BackingField(System::Func_3<UnityEngine::UIElements::FontDefinition,UnityEngine::UIElements::FontDefinition,bool> value) ;

constexpr System::Func_3<UnityEngine::UIElements::FontDefinition,UnityEngine::UIElements::FontDefinition,bool> __get__SameFunc_k__BackingField() const;


// Properties

 System::Func_3<UnityEngine::UIElements::FontDefinition,UnityEngine::UIElements::FontDefinition,bool> __declspec(property(get=get_SameFunc))  SameFunc;


// Methods

/// @brief Method get_SameFunc addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Func_3<UnityEngine::UIElements::FontDefinition,UnityEngine::UIElements::FontDefinition,bool> get_SameFunc() ;

/// @brief Method IsSame addr 0x0 size 0xffffffffffffffff virtual false final false
static bool IsSame(UnityEngine::UIElements::FontDefinition a, UnityEngine::UIElements::FontDefinition b) ;

/// @brief Method Lerp addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::UIElements::FontDefinition Lerp(UnityEngine::UIElements::FontDefinition a, UnityEngine::UIElements::FontDefinition b, float_t t) ;

/// @brief Method UpdateValues addr 0x0 size 0xffffffffffffffff virtual true final true
 void UpdateValues() ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::ValuesFontDefinition
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6952), inst: 1506 }), TypeDefinitionIndex(TypeDefinitionIndex(7402)), TypeDefinitionIndex(TypeDefinitionIndex(6952))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6954))
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::ValuesFontDefinition
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFontDefinition : public UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1<UnityEngine::UIElements::FontDefinition> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFontDefinition() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFontDefinition", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFontDefinition(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFontDefinition const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFontDefinition", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFontDefinition(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFontDefinition&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFontDefinition(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1<UnityEngine::UIElements::FontDefinition>(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFontDefinition& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFontDefinition& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFontDefinition& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFontDefinition&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFontDefinition& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFontDefinition const& o) noexcept = default;
                


// Methods

/// @brief Method UpdateComputedStyle addr 0x2c7feb8 size 0xcc virtual true final true
 void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle addr 0x2c7ff84 size 0xa8 virtual true final true
 void UpdateComputedStyle(int32_t i) ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFontDefinition() ;

/// @brief Method .ctor addr 0x2c8002c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::ValuesFont
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6952), inst: 296 }), TypeDefinitionIndex(TypeDefinitionIndex(15814)), TypeDefinitionIndex(TypeDefinitionIndex(6952))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6955))
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::ValuesFont
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFont : public UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1<UnityEngine::Font> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFont() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFont", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFont(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFont const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFont", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFont(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFont&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFont(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1<UnityEngine::Font>(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFont& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFont& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFont& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFont&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFont& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFont const& o) noexcept = default;
                


// Methods

/// @brief Method UpdateComputedStyle addr 0x2c80074 size 0xcc virtual true final true
 void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle addr 0x2c80140 size 0xa8 virtual true final true
 void UpdateComputedStyle(int32_t i) ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFont() ;

/// @brief Method .ctor addr 0x2c801e8 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::Values`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6947)), TypeDefinitionIndex(TypeDefinitionIndex(6941))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6947), inst: 1510 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<UnityEngine::UIElements::TextShadow> : public UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values {
public:
// Declarations
using EmptyData = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::TextShadow>;

using StyleData = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::TextShadow>;

using TimingData = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::TextShadow>;

using TransitionEventsFrameState = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::TextShadow>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1 const& o) noexcept = default;
                


// Fields

 int64_t __declspec(property(get=__get_m_CurrentTimeMs, put=__set_m_CurrentTimeMs))  m_CurrentTimeMs;

constexpr void __set_m_CurrentTimeMs(int64_t value) ;

constexpr int64_t __get_m_CurrentTimeMs() const;

 GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::TextShadow> __declspec(property(get=__get_m_CurrentFrameEventsState, put=__set_m_CurrentFrameEventsState))  m_CurrentFrameEventsState;

constexpr void __set_m_CurrentFrameEventsState(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::TextShadow> value) ;

constexpr GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::TextShadow> __get_m_CurrentFrameEventsState() const;

 GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::TextShadow> __declspec(property(get=__get_m_NextFrameEventsState, put=__set_m_NextFrameEventsState))  m_NextFrameEventsState;

constexpr void __set_m_NextFrameEventsState(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::TextShadow> value) ;

constexpr GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::TextShadow> __get_m_NextFrameEventsState() const;

 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::TextShadow>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::TextShadow>> __declspec(property(get=__get_running, put=__set_running))  running;

constexpr void __set_running(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::TextShadow>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::TextShadow>> value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::TextShadow>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::TextShadow>> __get_running() const;

 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::TextShadow>,UnityEngine::UIElements::TextShadow> __declspec(property(get=__get_completed, put=__set_completed))  completed;

constexpr void __set_completed(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::TextShadow>,UnityEngine::UIElements::TextShadow> value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::TextShadow>,UnityEngine::UIElements::TextShadow> __get_completed() const;


// Properties

 bool __declspec(property(get=get_isEmpty))  isEmpty;

 System::Func_3<UnityEngine::UIElements::TextShadow,UnityEngine::UIElements::TextShadow,bool> __declspec(property(get=get_SameFunc))  SameFunc;


// Methods

/// @brief Method get_isEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_isEmpty() ;

/// @brief Method get_SameFunc addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Func_3<UnityEngine::UIElements::TextShadow,UnityEngine::UIElements::TextShadow,bool> get_SameFunc() ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method SwapFrameStates addr 0x0 size 0xffffffffffffffff virtual false final false
 void SwapFrameStates() ;

/// @brief Method QueueEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueEvent(UnityEngine::UIElements::EventBase evt, UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair epp) ;

/// @brief Method ClearEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ClearEventQueue(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair epp) ;

/// @brief Method QueueTransitionRunEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionRunEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex) ;

/// @brief Method QueueTransitionStartEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionStartEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex) ;

/// @brief Method QueueTransitionEndEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionEndEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex) ;

/// @brief Method QueueTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionCancelEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex, int64_t panelElapsedMs) ;

/// @brief Method SendTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void SendTransitionCancelEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex, int64_t panelElapsedMs) ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
 void CancelAllAnimations() ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
 void CancelAllAnimations(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method CancelAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
 void CancelAnimation(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method UpdateAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
 void UpdateAnimation(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method GetAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
 void GetAllAnimations(UnityEngine::UIElements::VisualElement ve, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outPropertyIds) ;

/// @brief Method ComputeReversingShorteningFactor addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t ComputeReversingShorteningFactor(int32_t oldIndex) ;

/// @brief Method ComputeReversingDuration addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t ComputeReversingDuration(int32_t newTransitionDurationMs, float_t newReversingShorteningFactor) ;

/// @brief Method ComputeReversingDelay addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t ComputeReversingDelay(int32_t delayMs, float_t newReversingShorteningFactor) ;

/// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual false final false
 bool StartTransition(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, UnityEngine::UIElements::TextShadow startValue, UnityEngine::UIElements::TextShadow endValue, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve, int64_t currentTimeMs) ;

/// @brief Method ForceComputedStyleEndValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ForceComputedStyleEndValue(int32_t runningIndex) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final true
 void Update(int64_t currentTimeMs) ;

/// @brief Method ProcessEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ProcessEventQueue() ;

/// @brief Method UpdateProgress addr 0x0 size 0xffffffffffffffff virtual false final false
 void UpdateProgress(int64_t currentTimeMs) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::ValuesTextShadow
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6947)), TypeDefinitionIndex(TypeDefinitionIndex(6894)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6947), inst: 1510 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6956))
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::ValuesTextShadow
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTextShadow : public UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<UnityEngine::UIElements::TextShadow> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTextShadow() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTextShadow", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTextShadow(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTextShadow const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTextShadow", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTextShadow(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTextShadow&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTextShadow(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<UnityEngine::UIElements::TextShadow>(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTextShadow& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTextShadow& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTextShadow& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTextShadow&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTextShadow& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTextShadow const& o) noexcept = default;
                


// Fields

 System::Func_3<UnityEngine::UIElements::TextShadow,UnityEngine::UIElements::TextShadow,bool> __declspec(property(get=__get__SameFunc_k__BackingField, put=__set__SameFunc_k__BackingField))  _SameFunc_k__BackingField;

constexpr void __set__SameFunc_k__BackingField(System::Func_3<UnityEngine::UIElements::TextShadow,UnityEngine::UIElements::TextShadow,bool> value) ;

constexpr System::Func_3<UnityEngine::UIElements::TextShadow,UnityEngine::UIElements::TextShadow,bool> __get__SameFunc_k__BackingField() const;


// Properties

 System::Func_3<UnityEngine::UIElements::TextShadow,UnityEngine::UIElements::TextShadow,bool> __declspec(property(get=get_SameFunc))  SameFunc;


// Methods

/// @brief Method get_SameFunc addr 0x2c80230 size 0x8 virtual true final false
 System::Func_3<UnityEngine::UIElements::TextShadow,UnityEngine::UIElements::TextShadow,bool> get_SameFunc() ;

/// @brief Method IsSame addr 0x2c80238 size 0x44 virtual false final false
static bool IsSame(UnityEngine::UIElements::TextShadow a, UnityEngine::UIElements::TextShadow b) ;

/// @brief Method Lerp addr 0x2c8027c size 0x58 virtual false final false
static UnityEngine::UIElements::TextShadow Lerp(UnityEngine::UIElements::TextShadow a, UnityEngine::UIElements::TextShadow b, float_t t) ;

/// @brief Method UpdateValues addr 0x2c802d4 size 0xcc virtual true final true
 void UpdateValues() ;

/// @brief Method UpdateComputedStyle addr 0x2c803a0 size 0xf0 virtual true final true
 void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle addr 0x2c80490 size 0xd4 virtual true final true
 void UpdateComputedStyle(int32_t i) ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTextShadow() ;

/// @brief Method .ctor addr 0x2c80564 size 0x98 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::Values`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6941)), TypeDefinitionIndex(TypeDefinitionIndex(6947))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6947), inst: 1509 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<UnityEngine::UIElements::Scale> : public UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values {
public:
// Declarations
using EmptyData = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Scale>;

using StyleData = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Scale>;

using TimingData = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Scale>;

using TransitionEventsFrameState = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Scale>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1 const& o) noexcept = default;
                


// Fields

 int64_t __declspec(property(get=__get_m_CurrentTimeMs, put=__set_m_CurrentTimeMs))  m_CurrentTimeMs;

constexpr void __set_m_CurrentTimeMs(int64_t value) ;

constexpr int64_t __get_m_CurrentTimeMs() const;

 GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Scale> __declspec(property(get=__get_m_CurrentFrameEventsState, put=__set_m_CurrentFrameEventsState))  m_CurrentFrameEventsState;

constexpr void __set_m_CurrentFrameEventsState(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Scale> value) ;

constexpr GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Scale> __get_m_CurrentFrameEventsState() const;

 GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Scale> __declspec(property(get=__get_m_NextFrameEventsState, put=__set_m_NextFrameEventsState))  m_NextFrameEventsState;

constexpr void __set_m_NextFrameEventsState(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Scale> value) ;

constexpr GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Scale> __get_m_NextFrameEventsState() const;

 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Scale>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Scale>> __declspec(property(get=__get_running, put=__set_running))  running;

constexpr void __set_running(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Scale>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Scale>> value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Scale>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Scale>> __get_running() const;

 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Scale>,UnityEngine::UIElements::Scale> __declspec(property(get=__get_completed, put=__set_completed))  completed;

constexpr void __set_completed(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Scale>,UnityEngine::UIElements::Scale> value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Scale>,UnityEngine::UIElements::Scale> __get_completed() const;


// Properties

 bool __declspec(property(get=get_isEmpty))  isEmpty;

 System::Func_3<UnityEngine::UIElements::Scale,UnityEngine::UIElements::Scale,bool> __declspec(property(get=get_SameFunc))  SameFunc;


// Methods

/// @brief Method get_isEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_isEmpty() ;

/// @brief Method get_SameFunc addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Func_3<UnityEngine::UIElements::Scale,UnityEngine::UIElements::Scale,bool> get_SameFunc() ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method SwapFrameStates addr 0x0 size 0xffffffffffffffff virtual false final false
 void SwapFrameStates() ;

/// @brief Method QueueEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueEvent(UnityEngine::UIElements::EventBase evt, UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair epp) ;

/// @brief Method ClearEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ClearEventQueue(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair epp) ;

/// @brief Method QueueTransitionRunEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionRunEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex) ;

/// @brief Method QueueTransitionStartEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionStartEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex) ;

/// @brief Method QueueTransitionEndEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionEndEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex) ;

/// @brief Method QueueTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionCancelEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex, int64_t panelElapsedMs) ;

/// @brief Method SendTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void SendTransitionCancelEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex, int64_t panelElapsedMs) ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
 void CancelAllAnimations() ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
 void CancelAllAnimations(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method CancelAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
 void CancelAnimation(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method UpdateAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
 void UpdateAnimation(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method GetAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
 void GetAllAnimations(UnityEngine::UIElements::VisualElement ve, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outPropertyIds) ;

/// @brief Method ComputeReversingShorteningFactor addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t ComputeReversingShorteningFactor(int32_t oldIndex) ;

/// @brief Method ComputeReversingDuration addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t ComputeReversingDuration(int32_t newTransitionDurationMs, float_t newReversingShorteningFactor) ;

/// @brief Method ComputeReversingDelay addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t ComputeReversingDelay(int32_t delayMs, float_t newReversingShorteningFactor) ;

/// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual false final false
 bool StartTransition(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, UnityEngine::UIElements::Scale startValue, UnityEngine::UIElements::Scale endValue, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve, int64_t currentTimeMs) ;

/// @brief Method ForceComputedStyleEndValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ForceComputedStyleEndValue(int32_t runningIndex) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final true
 void Update(int64_t currentTimeMs) ;

/// @brief Method ProcessEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ProcessEventQueue() ;

/// @brief Method UpdateProgress addr 0x0 size 0xffffffffffffffff virtual false final false
 void UpdateProgress(int64_t currentTimeMs) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::ValuesScale
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6947), inst: 1509 }), TypeDefinitionIndex(TypeDefinitionIndex(6947)), TypeDefinitionIndex(TypeDefinitionIndex(7436))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6957))
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::ValuesScale
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesScale : public UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<UnityEngine::UIElements::Scale> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesScale() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesScale", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesScale(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesScale const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesScale", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesScale(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesScale&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesScale(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<UnityEngine::UIElements::Scale>(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesScale& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesScale& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesScale& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesScale&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesScale& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesScale const& o) noexcept = default;
                


// Fields

 System::Func_3<UnityEngine::UIElements::Scale,UnityEngine::UIElements::Scale,bool> __declspec(property(get=__get__SameFunc_k__BackingField, put=__set__SameFunc_k__BackingField))  _SameFunc_k__BackingField;

constexpr void __set__SameFunc_k__BackingField(System::Func_3<UnityEngine::UIElements::Scale,UnityEngine::UIElements::Scale,bool> value) ;

constexpr System::Func_3<UnityEngine::UIElements::Scale,UnityEngine::UIElements::Scale,bool> __get__SameFunc_k__BackingField() const;


// Properties

 System::Func_3<UnityEngine::UIElements::Scale,UnityEngine::UIElements::Scale,bool> __declspec(property(get=get_SameFunc))  SameFunc;


// Methods

/// @brief Method get_SameFunc addr 0x2c805fc size 0x8 virtual true final false
 System::Func_3<UnityEngine::UIElements::Scale,UnityEngine::UIElements::Scale,bool> get_SameFunc() ;

/// @brief Method IsSame addr 0x2c80604 size 0x8 virtual false final false
static bool IsSame(UnityEngine::UIElements::Scale a, UnityEngine::UIElements::Scale b) ;

/// @brief Method UpdateComputedStyle addr 0x2c8060c size 0xcc virtual true final true
 void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle addr 0x2c806d8 size 0xa8 virtual true final true
 void UpdateComputedStyle(int32_t i) ;

/// @brief Method Lerp addr 0x2c80780 size 0x70 virtual false final false
static UnityEngine::UIElements::Scale Lerp(UnityEngine::UIElements::Scale a, UnityEngine::UIElements::Scale b, float_t t) ;

/// @brief Method UpdateValues addr 0x2c807f0 size 0x9c virtual true final true
 void UpdateValues() ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesScale() ;

/// @brief Method .ctor addr 0x2c8088c size 0x98 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::Values`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6947)), TypeDefinitionIndex(TypeDefinitionIndex(6941))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6947), inst: 1508 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<UnityEngine::UIElements::Rotate> : public UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values {
public:
// Declarations
using EmptyData = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Rotate>;

using StyleData = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Rotate>;

using TimingData = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Rotate>;

using TransitionEventsFrameState = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Rotate>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1 const& o) noexcept = default;
                


// Fields

 int64_t __declspec(property(get=__get_m_CurrentTimeMs, put=__set_m_CurrentTimeMs))  m_CurrentTimeMs;

constexpr void __set_m_CurrentTimeMs(int64_t value) ;

constexpr int64_t __get_m_CurrentTimeMs() const;

 GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Rotate> __declspec(property(get=__get_m_CurrentFrameEventsState, put=__set_m_CurrentFrameEventsState))  m_CurrentFrameEventsState;

constexpr void __set_m_CurrentFrameEventsState(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Rotate> value) ;

constexpr GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Rotate> __get_m_CurrentFrameEventsState() const;

 GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Rotate> __declspec(property(get=__get_m_NextFrameEventsState, put=__set_m_NextFrameEventsState))  m_NextFrameEventsState;

constexpr void __set_m_NextFrameEventsState(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Rotate> value) ;

constexpr GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Rotate> __get_m_NextFrameEventsState() const;

 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Rotate>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Rotate>> __declspec(property(get=__get_running, put=__set_running))  running;

constexpr void __set_running(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Rotate>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Rotate>> value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Rotate>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Rotate>> __get_running() const;

 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Rotate>,UnityEngine::UIElements::Rotate> __declspec(property(get=__get_completed, put=__set_completed))  completed;

constexpr void __set_completed(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Rotate>,UnityEngine::UIElements::Rotate> value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Rotate>,UnityEngine::UIElements::Rotate> __get_completed() const;


// Properties

 bool __declspec(property(get=get_isEmpty))  isEmpty;

 System::Func_3<UnityEngine::UIElements::Rotate,UnityEngine::UIElements::Rotate,bool> __declspec(property(get=get_SameFunc))  SameFunc;


// Methods

/// @brief Method get_isEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_isEmpty() ;

/// @brief Method get_SameFunc addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Func_3<UnityEngine::UIElements::Rotate,UnityEngine::UIElements::Rotate,bool> get_SameFunc() ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method SwapFrameStates addr 0x0 size 0xffffffffffffffff virtual false final false
 void SwapFrameStates() ;

/// @brief Method QueueEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueEvent(UnityEngine::UIElements::EventBase evt, UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair epp) ;

/// @brief Method ClearEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ClearEventQueue(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair epp) ;

/// @brief Method QueueTransitionRunEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionRunEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex) ;

/// @brief Method QueueTransitionStartEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionStartEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex) ;

/// @brief Method QueueTransitionEndEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionEndEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex) ;

/// @brief Method QueueTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionCancelEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex, int64_t panelElapsedMs) ;

/// @brief Method SendTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void SendTransitionCancelEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex, int64_t panelElapsedMs) ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
 void CancelAllAnimations() ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
 void CancelAllAnimations(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method CancelAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
 void CancelAnimation(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method UpdateAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
 void UpdateAnimation(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method GetAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
 void GetAllAnimations(UnityEngine::UIElements::VisualElement ve, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outPropertyIds) ;

/// @brief Method ComputeReversingShorteningFactor addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t ComputeReversingShorteningFactor(int32_t oldIndex) ;

/// @brief Method ComputeReversingDuration addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t ComputeReversingDuration(int32_t newTransitionDurationMs, float_t newReversingShorteningFactor) ;

/// @brief Method ComputeReversingDelay addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t ComputeReversingDelay(int32_t delayMs, float_t newReversingShorteningFactor) ;

/// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual false final false
 bool StartTransition(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, UnityEngine::UIElements::Rotate startValue, UnityEngine::UIElements::Rotate endValue, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve, int64_t currentTimeMs) ;

/// @brief Method ForceComputedStyleEndValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ForceComputedStyleEndValue(int32_t runningIndex) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final true
 void Update(int64_t currentTimeMs) ;

/// @brief Method ProcessEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ProcessEventQueue() ;

/// @brief Method UpdateProgress addr 0x0 size 0xffffffffffffffff virtual false final false
 void UpdateProgress(int64_t currentTimeMs) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::ValuesRotate
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6947)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6947), inst: 1508 }), TypeDefinitionIndex(TypeDefinitionIndex(7413))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6958))
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::ValuesRotate
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesRotate : public UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<UnityEngine::UIElements::Rotate> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesRotate() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesRotate", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesRotate(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesRotate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesRotate", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesRotate(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesRotate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesRotate(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<UnityEngine::UIElements::Rotate>(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesRotate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesRotate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesRotate& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesRotate&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesRotate& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesRotate const& o) noexcept = default;
                


// Fields

 System::Func_3<UnityEngine::UIElements::Rotate,UnityEngine::UIElements::Rotate,bool> __declspec(property(get=__get__SameFunc_k__BackingField, put=__set__SameFunc_k__BackingField))  _SameFunc_k__BackingField;

constexpr void __set__SameFunc_k__BackingField(System::Func_3<UnityEngine::UIElements::Rotate,UnityEngine::UIElements::Rotate,bool> value) ;

constexpr System::Func_3<UnityEngine::UIElements::Rotate,UnityEngine::UIElements::Rotate,bool> __get__SameFunc_k__BackingField() const;


// Properties

 System::Func_3<UnityEngine::UIElements::Rotate,UnityEngine::UIElements::Rotate,bool> __declspec(property(get=get_SameFunc))  SameFunc;


// Methods

/// @brief Method get_SameFunc addr 0x2c80924 size 0x8 virtual true final false
 System::Func_3<UnityEngine::UIElements::Rotate,UnityEngine::UIElements::Rotate,bool> get_SameFunc() ;

/// @brief Method IsSame addr 0x2c8092c size 0x48 virtual false final false
static bool IsSame(UnityEngine::UIElements::Rotate a, UnityEngine::UIElements::Rotate b) ;

/// @brief Method UpdateComputedStyle addr 0x2c80974 size 0xe8 virtual true final true
 void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle addr 0x2c80a5c size 0xcc virtual true final true
 void UpdateComputedStyle(int32_t i) ;

/// @brief Method Lerp addr 0x2c80b28 size 0x80 virtual false final false
static UnityEngine::UIElements::Rotate Lerp(UnityEngine::UIElements::Rotate a, UnityEngine::UIElements::Rotate b, float_t t) ;

/// @brief Method UpdateValues addr 0x2c80ba8 size 0xdc virtual true final true
 void UpdateValues() ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesRotate() ;

/// @brief Method .ctor addr 0x2c80c84 size 0x98 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::Values`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6947)), TypeDefinitionIndex(TypeDefinitionIndex(6941))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6947), inst: 1512 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<UnityEngine::UIElements::Translate> : public UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values {
public:
// Declarations
using EmptyData = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Translate>;

using StyleData = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Translate>;

using TimingData = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Translate>;

using TransitionEventsFrameState = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Translate>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1 const& o) noexcept = default;
                


// Fields

 int64_t __declspec(property(get=__get_m_CurrentTimeMs, put=__set_m_CurrentTimeMs))  m_CurrentTimeMs;

constexpr void __set_m_CurrentTimeMs(int64_t value) ;

constexpr int64_t __get_m_CurrentTimeMs() const;

 GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Translate> __declspec(property(get=__get_m_CurrentFrameEventsState, put=__set_m_CurrentFrameEventsState))  m_CurrentFrameEventsState;

constexpr void __set_m_CurrentFrameEventsState(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Translate> value) ;

constexpr GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Translate> __get_m_CurrentFrameEventsState() const;

 GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Translate> __declspec(property(get=__get_m_NextFrameEventsState, put=__set_m_NextFrameEventsState))  m_NextFrameEventsState;

constexpr void __set_m_NextFrameEventsState(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Translate> value) ;

constexpr GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Translate> __get_m_NextFrameEventsState() const;

 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Translate>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Translate>> __declspec(property(get=__get_running, put=__set_running))  running;

constexpr void __set_running(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Translate>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Translate>> value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Translate>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Translate>> __get_running() const;

 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Translate>,UnityEngine::UIElements::Translate> __declspec(property(get=__get_completed, put=__set_completed))  completed;

constexpr void __set_completed(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Translate>,UnityEngine::UIElements::Translate> value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Translate>,UnityEngine::UIElements::Translate> __get_completed() const;


// Properties

 bool __declspec(property(get=get_isEmpty))  isEmpty;

 System::Func_3<UnityEngine::UIElements::Translate,UnityEngine::UIElements::Translate,bool> __declspec(property(get=get_SameFunc))  SameFunc;


// Methods

/// @brief Method get_isEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_isEmpty() ;

/// @brief Method get_SameFunc addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Func_3<UnityEngine::UIElements::Translate,UnityEngine::UIElements::Translate,bool> get_SameFunc() ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method SwapFrameStates addr 0x0 size 0xffffffffffffffff virtual false final false
 void SwapFrameStates() ;

/// @brief Method QueueEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueEvent(UnityEngine::UIElements::EventBase evt, UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair epp) ;

/// @brief Method ClearEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ClearEventQueue(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair epp) ;

/// @brief Method QueueTransitionRunEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionRunEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex) ;

/// @brief Method QueueTransitionStartEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionStartEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex) ;

/// @brief Method QueueTransitionEndEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionEndEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex) ;

/// @brief Method QueueTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionCancelEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex, int64_t panelElapsedMs) ;

/// @brief Method SendTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void SendTransitionCancelEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex, int64_t panelElapsedMs) ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
 void CancelAllAnimations() ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
 void CancelAllAnimations(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method CancelAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
 void CancelAnimation(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method UpdateAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
 void UpdateAnimation(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method GetAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
 void GetAllAnimations(UnityEngine::UIElements::VisualElement ve, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outPropertyIds) ;

/// @brief Method ComputeReversingShorteningFactor addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t ComputeReversingShorteningFactor(int32_t oldIndex) ;

/// @brief Method ComputeReversingDuration addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t ComputeReversingDuration(int32_t newTransitionDurationMs, float_t newReversingShorteningFactor) ;

/// @brief Method ComputeReversingDelay addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t ComputeReversingDelay(int32_t delayMs, float_t newReversingShorteningFactor) ;

/// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual false final false
 bool StartTransition(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, UnityEngine::UIElements::Translate startValue, UnityEngine::UIElements::Translate endValue, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve, int64_t currentTimeMs) ;

/// @brief Method ForceComputedStyleEndValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ForceComputedStyleEndValue(int32_t runningIndex) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final true
 void Update(int64_t currentTimeMs) ;

/// @brief Method ProcessEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ProcessEventQueue() ;

/// @brief Method UpdateProgress addr 0x0 size 0xffffffffffffffff virtual false final false
 void UpdateProgress(int64_t currentTimeMs) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::ValuesTranslate
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6947), inst: 1512 }), TypeDefinitionIndex(TypeDefinitionIndex(7420)), TypeDefinitionIndex(TypeDefinitionIndex(6947))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6959))
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::ValuesTranslate
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTranslate : public UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<UnityEngine::UIElements::Translate> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTranslate() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTranslate", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTranslate(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTranslate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTranslate", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTranslate(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTranslate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTranslate(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<UnityEngine::UIElements::Translate>(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTranslate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTranslate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTranslate& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTranslate&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTranslate& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTranslate const& o) noexcept = default;
                


// Fields

 System::Func_3<UnityEngine::UIElements::Translate,UnityEngine::UIElements::Translate,bool> __declspec(property(get=__get__SameFunc_k__BackingField, put=__set__SameFunc_k__BackingField))  _SameFunc_k__BackingField;

constexpr void __set__SameFunc_k__BackingField(System::Func_3<UnityEngine::UIElements::Translate,UnityEngine::UIElements::Translate,bool> value) ;

constexpr System::Func_3<UnityEngine::UIElements::Translate,UnityEngine::UIElements::Translate,bool> __get__SameFunc_k__BackingField() const;


// Properties

 System::Func_3<UnityEngine::UIElements::Translate,UnityEngine::UIElements::Translate,bool> __declspec(property(get=get_SameFunc))  SameFunc;


// Methods

/// @brief Method get_SameFunc addr 0x2c80d1c size 0x8 virtual true final false
 System::Func_3<UnityEngine::UIElements::Translate,UnityEngine::UIElements::Translate,bool> get_SameFunc() ;

/// @brief Method IsSame addr 0x2c80d24 size 0x48 virtual false final false
static bool IsSame(UnityEngine::UIElements::Translate a, UnityEngine::UIElements::Translate b) ;

/// @brief Method UpdateComputedStyle addr 0x2c80d6c size 0xe8 virtual true final true
 void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle addr 0x2c80e54 size 0xcc virtual true final true
 void UpdateComputedStyle(int32_t i) ;

/// @brief Method Lerp addr 0x2c80f20 size 0xd4 virtual false final false
static UnityEngine::UIElements::Translate Lerp(UnityEngine::UIElements::Translate a, UnityEngine::UIElements::Translate b, float_t t) ;

/// @brief Method UpdateValues addr 0x2c80ff4 size 0xdc virtual true final true
 void UpdateValues() ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTranslate() ;

/// @brief Method .ctor addr 0x2c810d0 size 0x98 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::Values`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6947)), TypeDefinitionIndex(TypeDefinitionIndex(6941))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6947), inst: 1511 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<UnityEngine::UIElements::TransformOrigin> : public UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values {
public:
// Declarations
using EmptyData = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::TransformOrigin>;

using StyleData = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::TransformOrigin>;

using TimingData = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::TransformOrigin>;

using TransitionEventsFrameState = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::TransformOrigin>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1 const& o) noexcept = default;
                


// Fields

 int64_t __declspec(property(get=__get_m_CurrentTimeMs, put=__set_m_CurrentTimeMs))  m_CurrentTimeMs;

constexpr void __set_m_CurrentTimeMs(int64_t value) ;

constexpr int64_t __get_m_CurrentTimeMs() const;

 GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::TransformOrigin> __declspec(property(get=__get_m_CurrentFrameEventsState, put=__set_m_CurrentFrameEventsState))  m_CurrentFrameEventsState;

constexpr void __set_m_CurrentFrameEventsState(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::TransformOrigin> value) ;

constexpr GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::TransformOrigin> __get_m_CurrentFrameEventsState() const;

 GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::TransformOrigin> __declspec(property(get=__get_m_NextFrameEventsState, put=__set_m_NextFrameEventsState))  m_NextFrameEventsState;

constexpr void __set_m_NextFrameEventsState(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::TransformOrigin> value) ;

constexpr GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::TransformOrigin> __get_m_NextFrameEventsState() const;

 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::TransformOrigin>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::TransformOrigin>> __declspec(property(get=__get_running, put=__set_running))  running;

constexpr void __set_running(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::TransformOrigin>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::TransformOrigin>> value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::TransformOrigin>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::TransformOrigin>> __get_running() const;

 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::TransformOrigin>,UnityEngine::UIElements::TransformOrigin> __declspec(property(get=__get_completed, put=__set_completed))  completed;

constexpr void __set_completed(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::TransformOrigin>,UnityEngine::UIElements::TransformOrigin> value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::TransformOrigin>,UnityEngine::UIElements::TransformOrigin> __get_completed() const;


// Properties

 bool __declspec(property(get=get_isEmpty))  isEmpty;

 System::Func_3<UnityEngine::UIElements::TransformOrigin,UnityEngine::UIElements::TransformOrigin,bool> __declspec(property(get=get_SameFunc))  SameFunc;


// Methods

/// @brief Method get_isEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_isEmpty() ;

/// @brief Method get_SameFunc addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Func_3<UnityEngine::UIElements::TransformOrigin,UnityEngine::UIElements::TransformOrigin,bool> get_SameFunc() ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method SwapFrameStates addr 0x0 size 0xffffffffffffffff virtual false final false
 void SwapFrameStates() ;

/// @brief Method QueueEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueEvent(UnityEngine::UIElements::EventBase evt, UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair epp) ;

/// @brief Method ClearEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ClearEventQueue(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair epp) ;

/// @brief Method QueueTransitionRunEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionRunEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex) ;

/// @brief Method QueueTransitionStartEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionStartEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex) ;

/// @brief Method QueueTransitionEndEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionEndEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex) ;

/// @brief Method QueueTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionCancelEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex, int64_t panelElapsedMs) ;

/// @brief Method SendTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void SendTransitionCancelEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex, int64_t panelElapsedMs) ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
 void CancelAllAnimations() ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
 void CancelAllAnimations(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method CancelAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
 void CancelAnimation(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method UpdateAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
 void UpdateAnimation(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method GetAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
 void GetAllAnimations(UnityEngine::UIElements::VisualElement ve, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outPropertyIds) ;

/// @brief Method ComputeReversingShorteningFactor addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t ComputeReversingShorteningFactor(int32_t oldIndex) ;

/// @brief Method ComputeReversingDuration addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t ComputeReversingDuration(int32_t newTransitionDurationMs, float_t newReversingShorteningFactor) ;

/// @brief Method ComputeReversingDelay addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t ComputeReversingDelay(int32_t delayMs, float_t newReversingShorteningFactor) ;

/// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual false final false
 bool StartTransition(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, UnityEngine::UIElements::TransformOrigin startValue, UnityEngine::UIElements::TransformOrigin endValue, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve, int64_t currentTimeMs) ;

/// @brief Method ForceComputedStyleEndValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ForceComputedStyleEndValue(int32_t runningIndex) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final true
 void Update(int64_t currentTimeMs) ;

/// @brief Method ProcessEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ProcessEventQueue() ;

/// @brief Method UpdateProgress addr 0x0 size 0xffffffffffffffff virtual false final false
 void UpdateProgress(int64_t currentTimeMs) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::ValuesTransformOrigin
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6947), inst: 1511 }), TypeDefinitionIndex(TypeDefinitionIndex(6947)), TypeDefinitionIndex(TypeDefinitionIndex(7435))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6960))
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::ValuesTransformOrigin
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTransformOrigin : public UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<UnityEngine::UIElements::TransformOrigin> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTransformOrigin() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTransformOrigin", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTransformOrigin(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTransformOrigin const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTransformOrigin", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTransformOrigin(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTransformOrigin&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTransformOrigin(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<UnityEngine::UIElements::TransformOrigin>(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTransformOrigin& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTransformOrigin& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTransformOrigin& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTransformOrigin&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTransformOrigin& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTransformOrigin const& o) noexcept = default;
                


// Fields

 System::Func_3<UnityEngine::UIElements::TransformOrigin,UnityEngine::UIElements::TransformOrigin,bool> __declspec(property(get=__get__SameFunc_k__BackingField, put=__set__SameFunc_k__BackingField))  _SameFunc_k__BackingField;

constexpr void __set__SameFunc_k__BackingField(System::Func_3<UnityEngine::UIElements::TransformOrigin,UnityEngine::UIElements::TransformOrigin,bool> value) ;

constexpr System::Func_3<UnityEngine::UIElements::TransformOrigin,UnityEngine::UIElements::TransformOrigin,bool> __get__SameFunc_k__BackingField() const;


// Properties

 System::Func_3<UnityEngine::UIElements::TransformOrigin,UnityEngine::UIElements::TransformOrigin,bool> __declspec(property(get=get_SameFunc))  SameFunc;


// Methods

/// @brief Method get_SameFunc addr 0x2c81168 size 0x8 virtual true final false
 System::Func_3<UnityEngine::UIElements::TransformOrigin,UnityEngine::UIElements::TransformOrigin,bool> get_SameFunc() ;

/// @brief Method IsSame addr 0x2c81170 size 0x48 virtual false final false
static bool IsSame(UnityEngine::UIElements::TransformOrigin a, UnityEngine::UIElements::TransformOrigin b) ;

/// @brief Method UpdateComputedStyle addr 0x2c811b8 size 0xe8 virtual true final true
 void UpdateComputedStyle() ;

/// @brief Method UpdateComputedStyle addr 0x2c812a0 size 0xcc virtual true final true
 void UpdateComputedStyle(int32_t i) ;

/// @brief Method Lerp addr 0x2c8136c size 0xd4 virtual false final false
static UnityEngine::UIElements::TransformOrigin Lerp(UnityEngine::UIElements::TransformOrigin a, UnityEngine::UIElements::TransformOrigin b, float_t t) ;

/// @brief Method UpdateValues addr 0x2c81440 size 0xdc virtual true final true
 void UpdateValues() ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTransformOrigin() ;

/// @brief Method .ctor addr 0x2c8151c size 0x98 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::StylePropertyAnimationSystem
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6961))
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem
class CORDL_TYPE StylePropertyAnimationSystem : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ValuesTransformOrigin = UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTransformOrigin;

using ValuesTranslate = UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTranslate;

using ValuesRotate = UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesRotate;

using ValuesScale = UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesScale;

using ValuesTextShadow = UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTextShadow;

using ValuesFont = UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFont;

using ValuesFontDefinition = UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFontDefinition;

using ValuesBackground = UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesBackground;

template<typename T>
using ValuesDiscrete_1 = UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1<T>;

using ValuesColor = UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesColor;

using ValuesLength = UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesLength;

using ValuesInt = UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesInt;

using ValuesFloat = UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFloat;

template<typename T>
using Values_1 = UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<T>;

using Values = UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values;

using ElementPropertyPair = UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair;

template<typename TTimingData,typename TStyleData>
using AnimationDataSet_2 = UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<TTimingData, TStyleData>;

using TransitionState = UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState;

/// @brief Convert operator to UnityEngine::UIElements::IStylePropertyAnimationSystem
constexpr operator  UnityEngine::UIElements::IStylePropertyAnimationSystem() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~StylePropertyAnimationSystem() = default;

// Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem", modifiers: " const&", def_value: None }]
constexpr StylePropertyAnimationSystem(StylePropertyAnimationSystem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StylePropertyAnimationSystem", modifiers: "&&", def_value: None }]
constexpr StylePropertyAnimationSystem(StylePropertyAnimationSystem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StylePropertyAnimationSystem(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StylePropertyAnimationSystem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StylePropertyAnimationSystem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StylePropertyAnimationSystem& operator=(StylePropertyAnimationSystem&& o) noexcept = default;
  constexpr StylePropertyAnimationSystem& operator=(StylePropertyAnimationSystem const& o) noexcept = default;
                


// Fields

 int64_t __declspec(property(get=__get_m_CurrentTimeMs, put=__set_m_CurrentTimeMs))  m_CurrentTimeMs;

constexpr void __set_m_CurrentTimeMs(int64_t value) ;

constexpr int64_t __get_m_CurrentTimeMs() const;

 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFloat __declspec(property(get=__get_m_Floats, put=__set_m_Floats))  m_Floats;

constexpr void __set_m_Floats(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFloat value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFloat __get_m_Floats() const;

 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesInt __declspec(property(get=__get_m_Ints, put=__set_m_Ints))  m_Ints;

constexpr void __set_m_Ints(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesInt value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesInt __get_m_Ints() const;

 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesLength __declspec(property(get=__get_m_Lengths, put=__set_m_Lengths))  m_Lengths;

constexpr void __set_m_Lengths(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesLength value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesLength __get_m_Lengths() const;

 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesColor __declspec(property(get=__get_m_Colors, put=__set_m_Colors))  m_Colors;

constexpr void __set_m_Colors(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesColor value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesColor __get_m_Colors() const;

 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesBackground __declspec(property(get=__get_m_Backgrounds, put=__set_m_Backgrounds))  m_Backgrounds;

constexpr void __set_m_Backgrounds(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesBackground value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesBackground __get_m_Backgrounds() const;

 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFontDefinition __declspec(property(get=__get_m_FontDefinitions, put=__set_m_FontDefinitions))  m_FontDefinitions;

constexpr void __set_m_FontDefinitions(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFontDefinition value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFontDefinition __get_m_FontDefinitions() const;

 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFont __declspec(property(get=__get_m_Fonts, put=__set_m_Fonts))  m_Fonts;

constexpr void __set_m_Fonts(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFont value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFont __get_m_Fonts() const;

 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTextShadow __declspec(property(get=__get_m_TextShadows, put=__set_m_TextShadows))  m_TextShadows;

constexpr void __set_m_TextShadows(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTextShadow value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTextShadow __get_m_TextShadows() const;

 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesScale __declspec(property(get=__get_m_Scale, put=__set_m_Scale))  m_Scale;

constexpr void __set_m_Scale(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesScale value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesScale __get_m_Scale() const;

 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesRotate __declspec(property(get=__get_m_Rotate, put=__set_m_Rotate))  m_Rotate;

constexpr void __set_m_Rotate(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesRotate value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesRotate __get_m_Rotate() const;

 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTranslate __declspec(property(get=__get_m_Translate, put=__set_m_Translate))  m_Translate;

constexpr void __set_m_Translate(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTranslate value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTranslate __get_m_Translate() const;

 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTransformOrigin __declspec(property(get=__get_m_TransformOrigin, put=__set_m_TransformOrigin))  m_TransformOrigin;

constexpr void __set_m_TransformOrigin(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTransformOrigin value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTransformOrigin __get_m_TransformOrigin() const;

 System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values> __declspec(property(get=__get_m_AllValues, put=__set_m_AllValues))  m_AllValues;

constexpr void __set_m_AllValues(System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values> __get_m_AllValues() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::StyleSheets::StylePropertyId,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values> __declspec(property(get=__get_m_PropertyToValues, put=__set_m_PropertyToValues))  m_PropertyToValues;

constexpr void __set_m_PropertyToValues(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::StyleSheets::StylePropertyId,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::StyleSheets::StylePropertyId,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values> __get_m_PropertyToValues() const;


// Methods

// Ctor Parameters []
explicit StylePropertyAnimationSystem() ;

/// @brief Method .ctor addr 0x2c7d988 size 0xf4 virtual false final false
 void _ctor() ;

/// @brief Method GetOrCreate addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T GetOrCreate(ByRef<T> values) ;

/// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 bool StartTransition(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, T startValue, T endValue, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve, UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<T> values) ;

/// @brief Method StartTransition addr 0x2c7da7c size 0xc8 virtual true final true
 bool StartTransition(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, float_t startValue, float_t endValue, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method StartTransition addr 0x2c7db44 size 0xd8 virtual true final true
 bool StartTransition(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, int32_t startValue, int32_t endValue, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method StartTransition addr 0x2c7dc1c size 0xd8 virtual true final true
 bool StartTransition(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, UnityEngine::UIElements::Length startValue, UnityEngine::UIElements::Length endValue, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method StartTransition addr 0x2c7dcf4 size 0x110 virtual true final true
 bool StartTransition(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, UnityEngine::Color startValue, UnityEngine::Color endValue, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method StartTransition addr 0x2c7de04 size 0xf8 virtual true final true
 bool StartTransition(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, UnityEngine::UIElements::Background startValue, UnityEngine::UIElements::Background endValue, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method StartTransition addr 0x2c7defc size 0xf0 virtual true final true
 bool StartTransition(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, UnityEngine::UIElements::FontDefinition startValue, UnityEngine::UIElements::FontDefinition endValue, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method StartTransition addr 0x2c7dfec size 0xd8 virtual true final true
 bool StartTransition(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, UnityEngine::Font startValue, UnityEngine::Font endValue, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method StartTransition addr 0x2c7e0c4 size 0x118 virtual true final true
 bool StartTransition(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, UnityEngine::UIElements::TextShadow startValue, UnityEngine::UIElements::TextShadow endValue, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method StartTransition addr 0x2c7e1dc size 0xf0 virtual true final true
 bool StartTransition(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, UnityEngine::UIElements::Scale startValue, UnityEngine::UIElements::Scale endValue, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method StartTransition addr 0x2c7e2cc size 0x118 virtual true final true
 bool StartTransition(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, UnityEngine::UIElements::Rotate startValue, UnityEngine::UIElements::Rotate endValue, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method StartTransition addr 0x2c7e3e4 size 0x118 virtual true final true
 bool StartTransition(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, UnityEngine::UIElements::Translate startValue, UnityEngine::UIElements::Translate endValue, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method StartTransition addr 0x2c7e4fc size 0x118 virtual true final true
 bool StartTransition(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, UnityEngine::UIElements::TransformOrigin startValue, UnityEngine::UIElements::TransformOrigin endValue, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve) ;

/// @brief Method CancelAllAnimations addr 0x2c7e614 size 0x150 virtual true final true
 void CancelAllAnimations() ;

/// @brief Method CancelAllAnimations addr 0x2c7e764 size 0x2b4 virtual true final true
 void CancelAllAnimations(UnityEngine::UIElements::VisualElement owner) ;

/// @brief Method CancelAnimation addr 0x2c7ea18 size 0x90 virtual true final true
 void CancelAnimation(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method UpdateAnimation addr 0x2c7eaa8 size 0x90 virtual true final true
 void UpdateAnimation(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method GetAllAnimations addr 0x2c7eb38 size 0x158 virtual true final true
 void GetAllAnimations(UnityEngine::UIElements::VisualElement owner, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> propertyIds) ;

/// @brief Method UpdateTracking addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void UpdateTracking(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<T> values) ;

/// @brief Method CurrentTimeMs addr 0x2c7ec90 size 0x8 virtual false final false
 int64_t CurrentTimeMs() ;

/// @brief Method Update addr 0x2c7ec98 size 0xd4 virtual true final true
 void Update() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type TTimingData,::cordl_internals::il2cpp_reference_type TStyleData>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6938)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6938), inst: 80 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::AnimationDataSet`2
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<TTimingData,TStyleData> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<UnityEngine::UIElements::VisualElement>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<TTimingData>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<TStyleData>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<UnityEngine::UIElements::VisualElement> elements, ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> properties, ::ArrayW<TTimingData> timing, ::ArrayW<TStyleData> style, int32_t count, System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> indices) noexcept;


                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_elements, put=__set_elements))  elements;

constexpr void __set_elements(::ArrayW<UnityEngine::UIElements::VisualElement> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::VisualElement> __get_elements() const;

 ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __declspec(property(get=__get_properties, put=__set_properties))  properties;

constexpr void __set_properties(::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __get_properties() const;

 ::ArrayW<TTimingData> __declspec(property(get=__get_timing, put=__set_timing))  timing;

constexpr void __set_timing(::ArrayW<TTimingData> value) ;

constexpr ::ArrayW<TTimingData> __get_timing() const;

 ::ArrayW<TStyleData> __declspec(property(get=__get_style, put=__set_style))  style;

constexpr void __set_style(::ArrayW<TStyleData> value) ;

constexpr ::ArrayW<TStyleData> __get_style() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __declspec(property(get=__get_indices, put=__set_indices))  indices;

constexpr void __set_indices(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __get_indices() const;


// Properties

 int32_t __declspec(property(get=get_capacity, put=set_capacity))  capacity;


// Methods

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_capacity(int32_t value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<TTimingData,TStyleData> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 bool IndexOf(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ByRef<int32_t> index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, TTimingData timingData, TStyleData styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(int32_t cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
 void Replace(int32_t index, TTimingData timingData, TStyleData styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void GetActivePropertiesForElement(UnityEngine::UIElements::VisualElement ve, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outProperties) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6938))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6938), inst: 6318 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::AnimationDataSet`2
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Background>,UnityEngine::UIElements::Background> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<UnityEngine::UIElements::VisualElement>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Background>>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<UnityEngine::UIElements::Background>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<UnityEngine::UIElements::VisualElement> elements, ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> properties, ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Background>> timing, ::ArrayW<UnityEngine::UIElements::Background> style, int32_t count, System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> indices) noexcept;


                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_elements, put=__set_elements))  elements;

constexpr void __set_elements(::ArrayW<UnityEngine::UIElements::VisualElement> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::VisualElement> __get_elements() const;

 ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __declspec(property(get=__get_properties, put=__set_properties))  properties;

constexpr void __set_properties(::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __get_properties() const;

 ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Background>> __declspec(property(get=__get_timing, put=__set_timing))  timing;

constexpr void __set_timing(::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Background>> value) ;

constexpr ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Background>> __get_timing() const;

 ::ArrayW<UnityEngine::UIElements::Background> __declspec(property(get=__get_style, put=__set_style))  style;

constexpr void __set_style(::ArrayW<UnityEngine::UIElements::Background> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::Background> __get_style() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __declspec(property(get=__get_indices, put=__set_indices))  indices;

constexpr void __set_indices(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __get_indices() const;


// Properties

 int32_t __declspec(property(get=get_capacity, put=set_capacity))  capacity;


// Methods

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_capacity(int32_t value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Background>,UnityEngine::UIElements::Background> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 bool IndexOf(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ByRef<int32_t> index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Background> timingData, UnityEngine::UIElements::Background styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(int32_t cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
 void Replace(int32_t index, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Background> timingData, UnityEngine::UIElements::Background styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void GetActivePropertiesForElement(UnityEngine::UIElements::VisualElement ve, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outProperties) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6938))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6938), inst: 6319 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::AnimationDataSet`2
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::Color>,UnityEngine::Color> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<UnityEngine::UIElements::VisualElement>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::Color>>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<UnityEngine::Color>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<UnityEngine::UIElements::VisualElement> elements, ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> properties, ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::Color>> timing, ::ArrayW<UnityEngine::Color> style, int32_t count, System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> indices) noexcept;


                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_elements, put=__set_elements))  elements;

constexpr void __set_elements(::ArrayW<UnityEngine::UIElements::VisualElement> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::VisualElement> __get_elements() const;

 ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __declspec(property(get=__get_properties, put=__set_properties))  properties;

constexpr void __set_properties(::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __get_properties() const;

 ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::Color>> __declspec(property(get=__get_timing, put=__set_timing))  timing;

constexpr void __set_timing(::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::Color>> value) ;

constexpr ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::Color>> __get_timing() const;

 ::ArrayW<UnityEngine::Color> __declspec(property(get=__get_style, put=__set_style))  style;

constexpr void __set_style(::ArrayW<UnityEngine::Color> value) ;

constexpr ::ArrayW<UnityEngine::Color> __get_style() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __declspec(property(get=__get_indices, put=__set_indices))  indices;

constexpr void __set_indices(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __get_indices() const;


// Properties

 int32_t __declspec(property(get=get_capacity, put=set_capacity))  capacity;


// Methods

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_capacity(int32_t value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::Color>,UnityEngine::Color> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 bool IndexOf(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ByRef<int32_t> index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::Color> timingData, UnityEngine::Color styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(int32_t cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
 void Replace(int32_t index, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::Color> timingData, UnityEngine::Color styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void GetActivePropertiesForElement(UnityEngine::UIElements::VisualElement ve, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outProperties) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6938))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6938), inst: 6320 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::AnimationDataSet`2
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::FontDefinition>,UnityEngine::UIElements::FontDefinition> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<UnityEngine::UIElements::VisualElement>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::FontDefinition>>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<UnityEngine::UIElements::FontDefinition>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<UnityEngine::UIElements::VisualElement> elements, ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> properties, ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::FontDefinition>> timing, ::ArrayW<UnityEngine::UIElements::FontDefinition> style, int32_t count, System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> indices) noexcept;


                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_elements, put=__set_elements))  elements;

constexpr void __set_elements(::ArrayW<UnityEngine::UIElements::VisualElement> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::VisualElement> __get_elements() const;

 ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __declspec(property(get=__get_properties, put=__set_properties))  properties;

constexpr void __set_properties(::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __get_properties() const;

 ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::FontDefinition>> __declspec(property(get=__get_timing, put=__set_timing))  timing;

constexpr void __set_timing(::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::FontDefinition>> value) ;

constexpr ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::FontDefinition>> __get_timing() const;

 ::ArrayW<UnityEngine::UIElements::FontDefinition> __declspec(property(get=__get_style, put=__set_style))  style;

constexpr void __set_style(::ArrayW<UnityEngine::UIElements::FontDefinition> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::FontDefinition> __get_style() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __declspec(property(get=__get_indices, put=__set_indices))  indices;

constexpr void __set_indices(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __get_indices() const;


// Properties

 int32_t __declspec(property(get=get_capacity, put=set_capacity))  capacity;


// Methods

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_capacity(int32_t value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::FontDefinition>,UnityEngine::UIElements::FontDefinition> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 bool IndexOf(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ByRef<int32_t> index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::FontDefinition> timingData, UnityEngine::UIElements::FontDefinition styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(int32_t cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
 void Replace(int32_t index, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::FontDefinition> timingData, UnityEngine::UIElements::FontDefinition styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void GetActivePropertiesForElement(UnityEngine::UIElements::VisualElement ve, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outProperties) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6938)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6938), inst: 6321 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::AnimationDataSet`2
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t>,int32_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<UnityEngine::UIElements::VisualElement>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t>>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<UnityEngine::UIElements::VisualElement> elements, ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> properties, ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t>> timing, ::ArrayW<int32_t> style, int32_t count, System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> indices) noexcept;


                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_elements, put=__set_elements))  elements;

constexpr void __set_elements(::ArrayW<UnityEngine::UIElements::VisualElement> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::VisualElement> __get_elements() const;

 ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __declspec(property(get=__get_properties, put=__set_properties))  properties;

constexpr void __set_properties(::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __get_properties() const;

 ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t>> __declspec(property(get=__get_timing, put=__set_timing))  timing;

constexpr void __set_timing(::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t>> value) ;

constexpr ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t>> __get_timing() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_style, put=__set_style))  style;

constexpr void __set_style(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_style() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __declspec(property(get=__get_indices, put=__set_indices))  indices;

constexpr void __set_indices(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __get_indices() const;


// Properties

 int32_t __declspec(property(get=get_capacity, put=set_capacity))  capacity;


// Methods

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_capacity(int32_t value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t>,int32_t> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 bool IndexOf(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ByRef<int32_t> index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t> timingData, int32_t styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(int32_t cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
 void Replace(int32_t index, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t> timingData, int32_t styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void GetActivePropertiesForElement(UnityEngine::UIElements::VisualElement ve, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outProperties) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6938)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6938), inst: 6322 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::AnimationDataSet`2
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Length>,UnityEngine::UIElements::Length> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<UnityEngine::UIElements::VisualElement>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Length>>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<UnityEngine::UIElements::Length>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<UnityEngine::UIElements::VisualElement> elements, ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> properties, ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Length>> timing, ::ArrayW<UnityEngine::UIElements::Length> style, int32_t count, System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> indices) noexcept;


                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_elements, put=__set_elements))  elements;

constexpr void __set_elements(::ArrayW<UnityEngine::UIElements::VisualElement> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::VisualElement> __get_elements() const;

 ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __declspec(property(get=__get_properties, put=__set_properties))  properties;

constexpr void __set_properties(::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __get_properties() const;

 ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Length>> __declspec(property(get=__get_timing, put=__set_timing))  timing;

constexpr void __set_timing(::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Length>> value) ;

constexpr ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Length>> __get_timing() const;

 ::ArrayW<UnityEngine::UIElements::Length> __declspec(property(get=__get_style, put=__set_style))  style;

constexpr void __set_style(::ArrayW<UnityEngine::UIElements::Length> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::Length> __get_style() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __declspec(property(get=__get_indices, put=__set_indices))  indices;

constexpr void __set_indices(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __get_indices() const;


// Properties

 int32_t __declspec(property(get=get_capacity, put=set_capacity))  capacity;


// Methods

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_capacity(int32_t value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Length>,UnityEngine::UIElements::Length> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 bool IndexOf(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ByRef<int32_t> index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Length> timingData, UnityEngine::UIElements::Length styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(int32_t cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
 void Replace(int32_t index, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Length> timingData, UnityEngine::UIElements::Length styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void GetActivePropertiesForElement(UnityEngine::UIElements::VisualElement ve, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outProperties) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type TStyleData>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6938)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6938), inst: 6323 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::AnimationDataSet`2
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<::bs_hook::Il2CppWrapperType>,TStyleData> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<UnityEngine::UIElements::VisualElement>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<TStyleData>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<UnityEngine::UIElements::VisualElement> elements, ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> properties, ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<::bs_hook::Il2CppWrapperType>> timing, ::ArrayW<TStyleData> style, int32_t count, System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> indices) noexcept;


                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_elements, put=__set_elements))  elements;

constexpr void __set_elements(::ArrayW<UnityEngine::UIElements::VisualElement> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::VisualElement> __get_elements() const;

 ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __declspec(property(get=__get_properties, put=__set_properties))  properties;

constexpr void __set_properties(::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __get_properties() const;

 ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get_timing, put=__set_timing))  timing;

constexpr void __set_timing(::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<::bs_hook::Il2CppWrapperType>> value) ;

constexpr ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<::bs_hook::Il2CppWrapperType>> __get_timing() const;

 ::ArrayW<TStyleData> __declspec(property(get=__get_style, put=__set_style))  style;

constexpr void __set_style(::ArrayW<TStyleData> value) ;

constexpr ::ArrayW<TStyleData> __get_style() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __declspec(property(get=__get_indices, put=__set_indices))  indices;

constexpr void __set_indices(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __get_indices() const;


// Properties

 int32_t __declspec(property(get=get_capacity, put=set_capacity))  capacity;


// Methods

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_capacity(int32_t value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<::bs_hook::Il2CppWrapperType>,TStyleData> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 bool IndexOf(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ByRef<int32_t> index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<::bs_hook::Il2CppWrapperType> timingData, TStyleData styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(int32_t cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
 void Replace(int32_t index, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<::bs_hook::Il2CppWrapperType> timingData, TStyleData styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void GetActivePropertiesForElement(UnityEngine::UIElements::VisualElement ve, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outProperties) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6938))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6938), inst: 6324 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::AnimationDataSet`2
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Rotate>,UnityEngine::UIElements::Rotate> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<UnityEngine::UIElements::VisualElement>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Rotate>>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<UnityEngine::UIElements::Rotate>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<UnityEngine::UIElements::VisualElement> elements, ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> properties, ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Rotate>> timing, ::ArrayW<UnityEngine::UIElements::Rotate> style, int32_t count, System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> indices) noexcept;


                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_elements, put=__set_elements))  elements;

constexpr void __set_elements(::ArrayW<UnityEngine::UIElements::VisualElement> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::VisualElement> __get_elements() const;

 ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __declspec(property(get=__get_properties, put=__set_properties))  properties;

constexpr void __set_properties(::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __get_properties() const;

 ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Rotate>> __declspec(property(get=__get_timing, put=__set_timing))  timing;

constexpr void __set_timing(::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Rotate>> value) ;

constexpr ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Rotate>> __get_timing() const;

 ::ArrayW<UnityEngine::UIElements::Rotate> __declspec(property(get=__get_style, put=__set_style))  style;

constexpr void __set_style(::ArrayW<UnityEngine::UIElements::Rotate> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::Rotate> __get_style() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __declspec(property(get=__get_indices, put=__set_indices))  indices;

constexpr void __set_indices(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __get_indices() const;


// Properties

 int32_t __declspec(property(get=get_capacity, put=set_capacity))  capacity;


// Methods

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_capacity(int32_t value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Rotate>,UnityEngine::UIElements::Rotate> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 bool IndexOf(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ByRef<int32_t> index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Rotate> timingData, UnityEngine::UIElements::Rotate styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(int32_t cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
 void Replace(int32_t index, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Rotate> timingData, UnityEngine::UIElements::Rotate styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void GetActivePropertiesForElement(UnityEngine::UIElements::VisualElement ve, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outProperties) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6938))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6938), inst: 6325 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::AnimationDataSet`2
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Scale>,UnityEngine::UIElements::Scale> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<UnityEngine::UIElements::VisualElement>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Scale>>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<UnityEngine::UIElements::Scale>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<UnityEngine::UIElements::VisualElement> elements, ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> properties, ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Scale>> timing, ::ArrayW<UnityEngine::UIElements::Scale> style, int32_t count, System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> indices) noexcept;


                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_elements, put=__set_elements))  elements;

constexpr void __set_elements(::ArrayW<UnityEngine::UIElements::VisualElement> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::VisualElement> __get_elements() const;

 ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __declspec(property(get=__get_properties, put=__set_properties))  properties;

constexpr void __set_properties(::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __get_properties() const;

 ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Scale>> __declspec(property(get=__get_timing, put=__set_timing))  timing;

constexpr void __set_timing(::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Scale>> value) ;

constexpr ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Scale>> __get_timing() const;

 ::ArrayW<UnityEngine::UIElements::Scale> __declspec(property(get=__get_style, put=__set_style))  style;

constexpr void __set_style(::ArrayW<UnityEngine::UIElements::Scale> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::Scale> __get_style() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __declspec(property(get=__get_indices, put=__set_indices))  indices;

constexpr void __set_indices(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __get_indices() const;


// Properties

 int32_t __declspec(property(get=get_capacity, put=set_capacity))  capacity;


// Methods

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_capacity(int32_t value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Scale>,UnityEngine::UIElements::Scale> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 bool IndexOf(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ByRef<int32_t> index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Scale> timingData, UnityEngine::UIElements::Scale styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(int32_t cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
 void Replace(int32_t index, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Scale> timingData, UnityEngine::UIElements::Scale styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void GetActivePropertiesForElement(UnityEngine::UIElements::VisualElement ve, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outProperties) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6938)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6938), inst: 6326 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::AnimationDataSet`2
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<float_t>,float_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<UnityEngine::UIElements::VisualElement>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<float_t>>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<float_t>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<UnityEngine::UIElements::VisualElement> elements, ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> properties, ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<float_t>> timing, ::ArrayW<float_t> style, int32_t count, System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> indices) noexcept;


                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_elements, put=__set_elements))  elements;

constexpr void __set_elements(::ArrayW<UnityEngine::UIElements::VisualElement> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::VisualElement> __get_elements() const;

 ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __declspec(property(get=__get_properties, put=__set_properties))  properties;

constexpr void __set_properties(::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __get_properties() const;

 ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<float_t>> __declspec(property(get=__get_timing, put=__set_timing))  timing;

constexpr void __set_timing(::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<float_t>> value) ;

constexpr ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<float_t>> __get_timing() const;

 ::ArrayW<float_t> __declspec(property(get=__get_style, put=__set_style))  style;

constexpr void __set_style(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_style() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __declspec(property(get=__get_indices, put=__set_indices))  indices;

constexpr void __set_indices(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __get_indices() const;


// Properties

 int32_t __declspec(property(get=get_capacity, put=set_capacity))  capacity;


// Methods

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_capacity(int32_t value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<float_t>,float_t> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 bool IndexOf(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ByRef<int32_t> index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<float_t> timingData, float_t styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(int32_t cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
 void Replace(int32_t index, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<float_t> timingData, float_t styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void GetActivePropertiesForElement(UnityEngine::UIElements::VisualElement ve, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outProperties) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6938)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6938), inst: 6327 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::AnimationDataSet`2
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::TextShadow>,UnityEngine::UIElements::TextShadow> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<UnityEngine::UIElements::VisualElement>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::TextShadow>>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<UnityEngine::UIElements::TextShadow>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<UnityEngine::UIElements::VisualElement> elements, ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> properties, ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::TextShadow>> timing, ::ArrayW<UnityEngine::UIElements::TextShadow> style, int32_t count, System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> indices) noexcept;


                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_elements, put=__set_elements))  elements;

constexpr void __set_elements(::ArrayW<UnityEngine::UIElements::VisualElement> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::VisualElement> __get_elements() const;

 ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __declspec(property(get=__get_properties, put=__set_properties))  properties;

constexpr void __set_properties(::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __get_properties() const;

 ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::TextShadow>> __declspec(property(get=__get_timing, put=__set_timing))  timing;

constexpr void __set_timing(::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::TextShadow>> value) ;

constexpr ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::TextShadow>> __get_timing() const;

 ::ArrayW<UnityEngine::UIElements::TextShadow> __declspec(property(get=__get_style, put=__set_style))  style;

constexpr void __set_style(::ArrayW<UnityEngine::UIElements::TextShadow> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::TextShadow> __get_style() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __declspec(property(get=__get_indices, put=__set_indices))  indices;

constexpr void __set_indices(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __get_indices() const;


// Properties

 int32_t __declspec(property(get=get_capacity, put=set_capacity))  capacity;


// Methods

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_capacity(int32_t value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::TextShadow>,UnityEngine::UIElements::TextShadow> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 bool IndexOf(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ByRef<int32_t> index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::TextShadow> timingData, UnityEngine::UIElements::TextShadow styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(int32_t cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
 void Replace(int32_t index, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::TextShadow> timingData, UnityEngine::UIElements::TextShadow styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void GetActivePropertiesForElement(UnityEngine::UIElements::VisualElement ve, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outProperties) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6938)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6938), inst: 6328 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::AnimationDataSet`2
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::TransformOrigin>,UnityEngine::UIElements::TransformOrigin> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<UnityEngine::UIElements::VisualElement>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::TransformOrigin>>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<UnityEngine::UIElements::TransformOrigin>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<UnityEngine::UIElements::VisualElement> elements, ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> properties, ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::TransformOrigin>> timing, ::ArrayW<UnityEngine::UIElements::TransformOrigin> style, int32_t count, System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> indices) noexcept;


                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_elements, put=__set_elements))  elements;

constexpr void __set_elements(::ArrayW<UnityEngine::UIElements::VisualElement> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::VisualElement> __get_elements() const;

 ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __declspec(property(get=__get_properties, put=__set_properties))  properties;

constexpr void __set_properties(::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __get_properties() const;

 ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::TransformOrigin>> __declspec(property(get=__get_timing, put=__set_timing))  timing;

constexpr void __set_timing(::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::TransformOrigin>> value) ;

constexpr ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::TransformOrigin>> __get_timing() const;

 ::ArrayW<UnityEngine::UIElements::TransformOrigin> __declspec(property(get=__get_style, put=__set_style))  style;

constexpr void __set_style(::ArrayW<UnityEngine::UIElements::TransformOrigin> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::TransformOrigin> __get_style() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __declspec(property(get=__get_indices, put=__set_indices))  indices;

constexpr void __set_indices(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __get_indices() const;


// Properties

 int32_t __declspec(property(get=get_capacity, put=set_capacity))  capacity;


// Methods

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_capacity(int32_t value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::TransformOrigin>,UnityEngine::UIElements::TransformOrigin> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 bool IndexOf(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ByRef<int32_t> index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::TransformOrigin> timingData, UnityEngine::UIElements::TransformOrigin styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(int32_t cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
 void Replace(int32_t index, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::TransformOrigin> timingData, UnityEngine::UIElements::TransformOrigin styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void GetActivePropertiesForElement(UnityEngine::UIElements::VisualElement ve, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outProperties) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6938)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6938), inst: 6329 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::AnimationDataSet`2
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Translate>,UnityEngine::UIElements::Translate> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<UnityEngine::UIElements::VisualElement>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Translate>>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<UnityEngine::UIElements::Translate>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<UnityEngine::UIElements::VisualElement> elements, ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> properties, ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Translate>> timing, ::ArrayW<UnityEngine::UIElements::Translate> style, int32_t count, System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> indices) noexcept;


                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_elements, put=__set_elements))  elements;

constexpr void __set_elements(::ArrayW<UnityEngine::UIElements::VisualElement> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::VisualElement> __get_elements() const;

 ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __declspec(property(get=__get_properties, put=__set_properties))  properties;

constexpr void __set_properties(::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __get_properties() const;

 ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Translate>> __declspec(property(get=__get_timing, put=__set_timing))  timing;

constexpr void __set_timing(::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Translate>> value) ;

constexpr ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Translate>> __get_timing() const;

 ::ArrayW<UnityEngine::UIElements::Translate> __declspec(property(get=__get_style, put=__set_style))  style;

constexpr void __set_style(::ArrayW<UnityEngine::UIElements::Translate> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::Translate> __get_style() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __declspec(property(get=__get_indices, put=__set_indices))  indices;

constexpr void __set_indices(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __get_indices() const;


// Properties

 int32_t __declspec(property(get=get_capacity, put=set_capacity))  capacity;


// Methods

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_capacity(int32_t value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Translate>,UnityEngine::UIElements::Translate> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 bool IndexOf(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ByRef<int32_t> index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Translate> timingData, UnityEngine::UIElements::Translate styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(int32_t cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
 void Replace(int32_t index, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Translate> timingData, UnityEngine::UIElements::Translate styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void GetActivePropertiesForElement(UnityEngine::UIElements::VisualElement ve, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outProperties) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6938))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6938), inst: 6330 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::AnimationDataSet`2
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Background>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Background>> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<UnityEngine::UIElements::VisualElement>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Background>>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Background>>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<UnityEngine::UIElements::VisualElement> elements, ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> properties, ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Background>> timing, ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Background>> style, int32_t count, System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> indices) noexcept;


                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_elements, put=__set_elements))  elements;

constexpr void __set_elements(::ArrayW<UnityEngine::UIElements::VisualElement> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::VisualElement> __get_elements() const;

 ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __declspec(property(get=__get_properties, put=__set_properties))  properties;

constexpr void __set_properties(::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __get_properties() const;

 ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Background>> __declspec(property(get=__get_timing, put=__set_timing))  timing;

constexpr void __set_timing(::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Background>> value) ;

constexpr ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Background>> __get_timing() const;

 ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Background>> __declspec(property(get=__get_style, put=__set_style))  style;

constexpr void __set_style(::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Background>> value) ;

constexpr ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Background>> __get_style() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __declspec(property(get=__get_indices, put=__set_indices))  indices;

constexpr void __set_indices(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __get_indices() const;


// Properties

 int32_t __declspec(property(get=get_capacity, put=set_capacity))  capacity;


// Methods

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_capacity(int32_t value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Background>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Background>> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 bool IndexOf(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ByRef<int32_t> index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Background> timingData, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Background> styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(int32_t cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
 void Replace(int32_t index, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Background> timingData, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Background> styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void GetActivePropertiesForElement(UnityEngine::UIElements::VisualElement ve, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outProperties) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6938))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6938), inst: 6331 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::AnimationDataSet`2
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::Color>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::Color>> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<UnityEngine::UIElements::VisualElement>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::Color>>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::Color>>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<UnityEngine::UIElements::VisualElement> elements, ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> properties, ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::Color>> timing, ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::Color>> style, int32_t count, System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> indices) noexcept;


                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_elements, put=__set_elements))  elements;

constexpr void __set_elements(::ArrayW<UnityEngine::UIElements::VisualElement> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::VisualElement> __get_elements() const;

 ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __declspec(property(get=__get_properties, put=__set_properties))  properties;

constexpr void __set_properties(::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __get_properties() const;

 ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::Color>> __declspec(property(get=__get_timing, put=__set_timing))  timing;

constexpr void __set_timing(::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::Color>> value) ;

constexpr ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::Color>> __get_timing() const;

 ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::Color>> __declspec(property(get=__get_style, put=__set_style))  style;

constexpr void __set_style(::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::Color>> value) ;

constexpr ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::Color>> __get_style() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __declspec(property(get=__get_indices, put=__set_indices))  indices;

constexpr void __set_indices(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __get_indices() const;


// Properties

 int32_t __declspec(property(get=get_capacity, put=set_capacity))  capacity;


// Methods

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_capacity(int32_t value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::Color>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::Color>> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 bool IndexOf(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ByRef<int32_t> index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::Color> timingData, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::Color> styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(int32_t cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
 void Replace(int32_t index, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::Color> timingData, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::Color> styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void GetActivePropertiesForElement(UnityEngine::UIElements::VisualElement ve, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outProperties) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6938))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6938), inst: 6332 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::AnimationDataSet`2
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::FontDefinition>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::FontDefinition>> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<UnityEngine::UIElements::VisualElement>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::FontDefinition>>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::FontDefinition>>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<UnityEngine::UIElements::VisualElement> elements, ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> properties, ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::FontDefinition>> timing, ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::FontDefinition>> style, int32_t count, System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> indices) noexcept;


                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_elements, put=__set_elements))  elements;

constexpr void __set_elements(::ArrayW<UnityEngine::UIElements::VisualElement> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::VisualElement> __get_elements() const;

 ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __declspec(property(get=__get_properties, put=__set_properties))  properties;

constexpr void __set_properties(::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __get_properties() const;

 ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::FontDefinition>> __declspec(property(get=__get_timing, put=__set_timing))  timing;

constexpr void __set_timing(::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::FontDefinition>> value) ;

constexpr ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::FontDefinition>> __get_timing() const;

 ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::FontDefinition>> __declspec(property(get=__get_style, put=__set_style))  style;

constexpr void __set_style(::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::FontDefinition>> value) ;

constexpr ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::FontDefinition>> __get_style() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __declspec(property(get=__get_indices, put=__set_indices))  indices;

constexpr void __set_indices(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __get_indices() const;


// Properties

 int32_t __declspec(property(get=get_capacity, put=set_capacity))  capacity;


// Methods

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_capacity(int32_t value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::FontDefinition>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::FontDefinition>> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 bool IndexOf(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ByRef<int32_t> index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::FontDefinition> timingData, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::FontDefinition> styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(int32_t cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
 void Replace(int32_t index, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::FontDefinition> timingData, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::FontDefinition> styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void GetActivePropertiesForElement(UnityEngine::UIElements::VisualElement ve, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outProperties) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6938)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6938), inst: 6333 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::AnimationDataSet`2
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<int32_t>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<int32_t>> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<UnityEngine::UIElements::VisualElement>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<int32_t>>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<int32_t>>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<UnityEngine::UIElements::VisualElement> elements, ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> properties, ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<int32_t>> timing, ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<int32_t>> style, int32_t count, System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> indices) noexcept;


                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_elements, put=__set_elements))  elements;

constexpr void __set_elements(::ArrayW<UnityEngine::UIElements::VisualElement> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::VisualElement> __get_elements() const;

 ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __declspec(property(get=__get_properties, put=__set_properties))  properties;

constexpr void __set_properties(::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __get_properties() const;

 ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<int32_t>> __declspec(property(get=__get_timing, put=__set_timing))  timing;

constexpr void __set_timing(::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<int32_t>> value) ;

constexpr ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<int32_t>> __get_timing() const;

 ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<int32_t>> __declspec(property(get=__get_style, put=__set_style))  style;

constexpr void __set_style(::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<int32_t>> value) ;

constexpr ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<int32_t>> __get_style() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __declspec(property(get=__get_indices, put=__set_indices))  indices;

constexpr void __set_indices(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __get_indices() const;


// Properties

 int32_t __declspec(property(get=get_capacity, put=set_capacity))  capacity;


// Methods

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_capacity(int32_t value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<int32_t>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<int32_t>> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 bool IndexOf(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ByRef<int32_t> index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<int32_t> timingData, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<int32_t> styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(int32_t cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
 void Replace(int32_t index, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<int32_t> timingData, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<int32_t> styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void GetActivePropertiesForElement(UnityEngine::UIElements::VisualElement ve, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outProperties) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6938)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6938), inst: 6334 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::AnimationDataSet`2
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Length>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Length>> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<UnityEngine::UIElements::VisualElement>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Length>>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Length>>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<UnityEngine::UIElements::VisualElement> elements, ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> properties, ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Length>> timing, ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Length>> style, int32_t count, System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> indices) noexcept;


                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_elements, put=__set_elements))  elements;

constexpr void __set_elements(::ArrayW<UnityEngine::UIElements::VisualElement> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::VisualElement> __get_elements() const;

 ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __declspec(property(get=__get_properties, put=__set_properties))  properties;

constexpr void __set_properties(::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __get_properties() const;

 ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Length>> __declspec(property(get=__get_timing, put=__set_timing))  timing;

constexpr void __set_timing(::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Length>> value) ;

constexpr ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Length>> __get_timing() const;

 ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Length>> __declspec(property(get=__get_style, put=__set_style))  style;

constexpr void __set_style(::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Length>> value) ;

constexpr ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Length>> __get_style() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __declspec(property(get=__get_indices, put=__set_indices))  indices;

constexpr void __set_indices(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __get_indices() const;


// Properties

 int32_t __declspec(property(get=get_capacity, put=set_capacity))  capacity;


// Methods

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_capacity(int32_t value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Length>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Length>> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 bool IndexOf(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ByRef<int32_t> index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Length> timingData, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Length> styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(int32_t cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
 void Replace(int32_t index, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Length> timingData, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Length> styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void GetActivePropertiesForElement(UnityEngine::UIElements::VisualElement ve, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outProperties) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6938))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6938), inst: 6335 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::AnimationDataSet`2
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<::bs_hook::Il2CppWrapperType>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<::bs_hook::Il2CppWrapperType>> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<UnityEngine::UIElements::VisualElement>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<UnityEngine::UIElements::VisualElement> elements, ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> properties, ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<::bs_hook::Il2CppWrapperType>> timing, ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<::bs_hook::Il2CppWrapperType>> style, int32_t count, System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> indices) noexcept;


                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_elements, put=__set_elements))  elements;

constexpr void __set_elements(::ArrayW<UnityEngine::UIElements::VisualElement> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::VisualElement> __get_elements() const;

 ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __declspec(property(get=__get_properties, put=__set_properties))  properties;

constexpr void __set_properties(::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __get_properties() const;

 ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get_timing, put=__set_timing))  timing;

constexpr void __set_timing(::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<::bs_hook::Il2CppWrapperType>> value) ;

constexpr ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<::bs_hook::Il2CppWrapperType>> __get_timing() const;

 ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get_style, put=__set_style))  style;

constexpr void __set_style(::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<::bs_hook::Il2CppWrapperType>> value) ;

constexpr ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<::bs_hook::Il2CppWrapperType>> __get_style() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __declspec(property(get=__get_indices, put=__set_indices))  indices;

constexpr void __set_indices(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __get_indices() const;


// Properties

 int32_t __declspec(property(get=get_capacity, put=set_capacity))  capacity;


// Methods

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_capacity(int32_t value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<::bs_hook::Il2CppWrapperType>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<::bs_hook::Il2CppWrapperType>> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 bool IndexOf(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ByRef<int32_t> index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<::bs_hook::Il2CppWrapperType> timingData, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<::bs_hook::Il2CppWrapperType> styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(int32_t cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
 void Replace(int32_t index, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<::bs_hook::Il2CppWrapperType> timingData, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<::bs_hook::Il2CppWrapperType> styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void GetActivePropertiesForElement(UnityEngine::UIElements::VisualElement ve, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outProperties) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6938)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6938), inst: 6336 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::AnimationDataSet`2
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Rotate>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Rotate>> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<UnityEngine::UIElements::VisualElement>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Rotate>>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Rotate>>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<UnityEngine::UIElements::VisualElement> elements, ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> properties, ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Rotate>> timing, ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Rotate>> style, int32_t count, System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> indices) noexcept;


                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_elements, put=__set_elements))  elements;

constexpr void __set_elements(::ArrayW<UnityEngine::UIElements::VisualElement> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::VisualElement> __get_elements() const;

 ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __declspec(property(get=__get_properties, put=__set_properties))  properties;

constexpr void __set_properties(::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __get_properties() const;

 ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Rotate>> __declspec(property(get=__get_timing, put=__set_timing))  timing;

constexpr void __set_timing(::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Rotate>> value) ;

constexpr ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Rotate>> __get_timing() const;

 ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Rotate>> __declspec(property(get=__get_style, put=__set_style))  style;

constexpr void __set_style(::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Rotate>> value) ;

constexpr ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Rotate>> __get_style() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __declspec(property(get=__get_indices, put=__set_indices))  indices;

constexpr void __set_indices(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __get_indices() const;


// Properties

 int32_t __declspec(property(get=get_capacity, put=set_capacity))  capacity;


// Methods

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_capacity(int32_t value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Rotate>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Rotate>> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 bool IndexOf(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ByRef<int32_t> index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Rotate> timingData, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Rotate> styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(int32_t cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
 void Replace(int32_t index, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Rotate> timingData, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Rotate> styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void GetActivePropertiesForElement(UnityEngine::UIElements::VisualElement ve, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outProperties) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6938)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6938), inst: 6337 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::AnimationDataSet`2
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Scale>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Scale>> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<UnityEngine::UIElements::VisualElement>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Scale>>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Scale>>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<UnityEngine::UIElements::VisualElement> elements, ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> properties, ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Scale>> timing, ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Scale>> style, int32_t count, System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> indices) noexcept;


                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_elements, put=__set_elements))  elements;

constexpr void __set_elements(::ArrayW<UnityEngine::UIElements::VisualElement> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::VisualElement> __get_elements() const;

 ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __declspec(property(get=__get_properties, put=__set_properties))  properties;

constexpr void __set_properties(::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __get_properties() const;

 ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Scale>> __declspec(property(get=__get_timing, put=__set_timing))  timing;

constexpr void __set_timing(::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Scale>> value) ;

constexpr ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Scale>> __get_timing() const;

 ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Scale>> __declspec(property(get=__get_style, put=__set_style))  style;

constexpr void __set_style(::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Scale>> value) ;

constexpr ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Scale>> __get_style() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __declspec(property(get=__get_indices, put=__set_indices))  indices;

constexpr void __set_indices(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __get_indices() const;


// Properties

 int32_t __declspec(property(get=get_capacity, put=set_capacity))  capacity;


// Methods

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_capacity(int32_t value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Scale>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Scale>> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 bool IndexOf(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ByRef<int32_t> index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Scale> timingData, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Scale> styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(int32_t cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
 void Replace(int32_t index, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Scale> timingData, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Scale> styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void GetActivePropertiesForElement(UnityEngine::UIElements::VisualElement ve, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outProperties) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6938))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6938), inst: 6338 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::AnimationDataSet`2
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<float_t>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<float_t>> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<UnityEngine::UIElements::VisualElement>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<float_t>>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<float_t>>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<UnityEngine::UIElements::VisualElement> elements, ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> properties, ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<float_t>> timing, ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<float_t>> style, int32_t count, System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> indices) noexcept;


                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_elements, put=__set_elements))  elements;

constexpr void __set_elements(::ArrayW<UnityEngine::UIElements::VisualElement> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::VisualElement> __get_elements() const;

 ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __declspec(property(get=__get_properties, put=__set_properties))  properties;

constexpr void __set_properties(::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __get_properties() const;

 ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<float_t>> __declspec(property(get=__get_timing, put=__set_timing))  timing;

constexpr void __set_timing(::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<float_t>> value) ;

constexpr ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<float_t>> __get_timing() const;

 ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<float_t>> __declspec(property(get=__get_style, put=__set_style))  style;

constexpr void __set_style(::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<float_t>> value) ;

constexpr ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<float_t>> __get_style() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __declspec(property(get=__get_indices, put=__set_indices))  indices;

constexpr void __set_indices(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __get_indices() const;


// Properties

 int32_t __declspec(property(get=get_capacity, put=set_capacity))  capacity;


// Methods

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_capacity(int32_t value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<float_t>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<float_t>> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 bool IndexOf(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ByRef<int32_t> index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<float_t> timingData, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<float_t> styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(int32_t cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
 void Replace(int32_t index, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<float_t> timingData, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<float_t> styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void GetActivePropertiesForElement(UnityEngine::UIElements::VisualElement ve, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outProperties) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6938))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6938), inst: 6339 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::AnimationDataSet`2
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::TextShadow>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::TextShadow>> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<UnityEngine::UIElements::VisualElement>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::TextShadow>>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::TextShadow>>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<UnityEngine::UIElements::VisualElement> elements, ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> properties, ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::TextShadow>> timing, ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::TextShadow>> style, int32_t count, System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> indices) noexcept;


                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_elements, put=__set_elements))  elements;

constexpr void __set_elements(::ArrayW<UnityEngine::UIElements::VisualElement> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::VisualElement> __get_elements() const;

 ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __declspec(property(get=__get_properties, put=__set_properties))  properties;

constexpr void __set_properties(::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __get_properties() const;

 ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::TextShadow>> __declspec(property(get=__get_timing, put=__set_timing))  timing;

constexpr void __set_timing(::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::TextShadow>> value) ;

constexpr ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::TextShadow>> __get_timing() const;

 ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::TextShadow>> __declspec(property(get=__get_style, put=__set_style))  style;

constexpr void __set_style(::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::TextShadow>> value) ;

constexpr ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::TextShadow>> __get_style() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __declspec(property(get=__get_indices, put=__set_indices))  indices;

constexpr void __set_indices(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __get_indices() const;


// Properties

 int32_t __declspec(property(get=get_capacity, put=set_capacity))  capacity;


// Methods

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_capacity(int32_t value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::TextShadow>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::TextShadow>> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 bool IndexOf(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ByRef<int32_t> index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::TextShadow> timingData, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::TextShadow> styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(int32_t cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
 void Replace(int32_t index, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::TextShadow> timingData, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::TextShadow> styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void GetActivePropertiesForElement(UnityEngine::UIElements::VisualElement ve, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outProperties) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6938))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6938), inst: 6340 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::AnimationDataSet`2
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::TransformOrigin>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::TransformOrigin>> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<UnityEngine::UIElements::VisualElement>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::TransformOrigin>>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::TransformOrigin>>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<UnityEngine::UIElements::VisualElement> elements, ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> properties, ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::TransformOrigin>> timing, ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::TransformOrigin>> style, int32_t count, System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> indices) noexcept;


                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_elements, put=__set_elements))  elements;

constexpr void __set_elements(::ArrayW<UnityEngine::UIElements::VisualElement> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::VisualElement> __get_elements() const;

 ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __declspec(property(get=__get_properties, put=__set_properties))  properties;

constexpr void __set_properties(::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __get_properties() const;

 ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::TransformOrigin>> __declspec(property(get=__get_timing, put=__set_timing))  timing;

constexpr void __set_timing(::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::TransformOrigin>> value) ;

constexpr ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::TransformOrigin>> __get_timing() const;

 ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::TransformOrigin>> __declspec(property(get=__get_style, put=__set_style))  style;

constexpr void __set_style(::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::TransformOrigin>> value) ;

constexpr ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::TransformOrigin>> __get_style() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __declspec(property(get=__get_indices, put=__set_indices))  indices;

constexpr void __set_indices(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __get_indices() const;


// Properties

 int32_t __declspec(property(get=get_capacity, put=set_capacity))  capacity;


// Methods

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_capacity(int32_t value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::TransformOrigin>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::TransformOrigin>> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 bool IndexOf(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ByRef<int32_t> index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::TransformOrigin> timingData, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::TransformOrigin> styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(int32_t cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
 void Replace(int32_t index, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::TransformOrigin> timingData, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::TransformOrigin> styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void GetActivePropertiesForElement(UnityEngine::UIElements::VisualElement ve, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outProperties) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AnimationDataSet`2
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6938))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6938), inst: 6341 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::AnimationDataSet`2
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Translate>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Translate>> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<UnityEngine::UIElements::VisualElement>", modifiers: "", def_value: None }, CppParam { name: "properties", ty: "::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId>", modifiers: "", def_value: None }, CppParam { name: "timing", ty: "::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Translate>>", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Translate>>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t>", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(::ArrayW<UnityEngine::UIElements::VisualElement> elements, ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> properties, ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Translate>> timing, ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Translate>> style, int32_t count, System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> indices) noexcept;


                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_elements, put=__set_elements))  elements;

constexpr void __set_elements(::ArrayW<UnityEngine::UIElements::VisualElement> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::VisualElement> __get_elements() const;

 ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __declspec(property(get=__get_properties, put=__set_properties))  properties;

constexpr void __set_properties(::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __get_properties() const;

 ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Translate>> __declspec(property(get=__get_timing, put=__set_timing))  timing;

constexpr void __set_timing(::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Translate>> value) ;

constexpr ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Translate>> __get_timing() const;

 ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Translate>> __declspec(property(get=__get_style, put=__set_style))  style;

constexpr void __set_style(::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Translate>> value) ;

constexpr ::ArrayW<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Translate>> __get_style() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __declspec(property(get=__get_indices, put=__set_indices))  indices;

constexpr void __set_indices(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,int32_t> __get_indices() const;


// Properties

 int32_t __declspec(property(get=get_capacity, put=set_capacity))  capacity;


// Methods

/// @brief Method get_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_capacity() ;

/// @brief Method set_capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_capacity(int32_t value) ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Translate>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Translate>> Create() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 bool IndexOf(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ByRef<int32_t> index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Translate> timingData, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Translate> styleData) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(int32_t cancelledIndex) ;

/// @brief Method Replace addr 0x0 size 0xffffffffffffffff virtual false final false
 void Replace(int32_t index, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Translate> timingData, GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Translate> styleData) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAll() ;

/// @brief Method GetActivePropertiesForElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void GetActivePropertiesForElement(UnityEngine::UIElements::VisualElement ve, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outProperties) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6942))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6942), inst: 2 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState::<>c
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T> value) ;

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T> __get___9() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <.cctor>b__11_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase> __cctor_b__11_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6942))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6942), inst: 92 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState::<>c
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<int32_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<int32_t> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<int32_t> value) ;

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<int32_t> __get___9() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <.cctor>b__11_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase> __cctor_b__11_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6942))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6942), inst: 280 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState::<>c
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::Color> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::Color> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::Color> value) ;

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::Color> __get___9() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <.cctor>b__11_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase> __cctor_b__11_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6942))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6942), inst: 374 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState::<>c
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<float_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<float_t> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<float_t> value) ;

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<float_t> __get___9() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <.cctor>b__11_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase> __cctor_b__11_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6942))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6942), inst: 1505 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState::<>c
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::Background> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::Background> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::Background> value) ;

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::Background> __get___9() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <.cctor>b__11_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase> __cctor_b__11_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6942))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6942), inst: 1506 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState::<>c
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::FontDefinition> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::FontDefinition> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::FontDefinition> value) ;

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::FontDefinition> __get___9() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <.cctor>b__11_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase> __cctor_b__11_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6942))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6942), inst: 1507 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState::<>c
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::Length> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::Length> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::Length> value) ;

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::Length> __get___9() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <.cctor>b__11_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase> __cctor_b__11_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6942))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6942), inst: 1508 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState::<>c
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::Rotate> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::Rotate> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::Rotate> value) ;

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::Rotate> __get___9() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <.cctor>b__11_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase> __cctor_b__11_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6942))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6942), inst: 1509 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState::<>c
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::Scale> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::Scale> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::Scale> value) ;

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::Scale> __get___9() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <.cctor>b__11_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase> __cctor_b__11_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6942))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6942), inst: 1510 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState::<>c
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::TextShadow> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::TextShadow> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::TextShadow> value) ;

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::TextShadow> __get___9() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <.cctor>b__11_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase> __cctor_b__11_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6942))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6942), inst: 1511 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState::<>c
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::TransformOrigin> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::TransformOrigin> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::TransformOrigin> value) ;

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::TransformOrigin> __get___9() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <.cctor>b__11_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase> __cctor_b__11_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6942))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6942), inst: 1512 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState::<>c
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::Translate> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::Translate> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::Translate> value) ;

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::Translate> __get___9() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <.cctor>b__11_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase> __cctor_b__11_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TransitionEventsFrameState
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6943))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6943), inst: 2 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<T>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState const& o) noexcept = default;
                


// Fields

static UnityEngine::Pool::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __declspec(property(get=__get_k_EventQueuePool, put=__set_k_EventQueuePool))  k_EventQueuePool;

static void __set_k_EventQueuePool(UnityEngine::Pool::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> value) ;

static UnityEngine::Pool::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __get_k_EventQueuePool() ;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState> __declspec(property(get=__get_elementPropertyStateDelta, put=__set_elementPropertyStateDelta))  elementPropertyStateDelta;

constexpr void __set_elementPropertyStateDelta(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState> __get_elementPropertyStateDelta() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __declspec(property(get=__get_elementPropertyQueuedEvents, put=__set_elementPropertyQueuedEvents))  elementPropertyQueuedEvents;

constexpr void __set_elementPropertyQueuedEvents(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __get_elementPropertyQueuedEvents() const;

 UnityEngine::UIElements::IPanel __declspec(property(get=__get_panel, put=__set_panel))  panel;

constexpr void __set_panel(UnityEngine::UIElements::IPanel value) ;

constexpr UnityEngine::UIElements::IPanel __get_panel() const;

 int32_t __declspec(property(get=__get_m_ChangesCount, put=__set_m_ChangesCount))  m_ChangesCount;

constexpr void __set_m_ChangesCount(int32_t value) ;

constexpr int32_t __get_m_ChangesCount() const;


// Methods

/// @brief Method GetPooledQueue addr 0x0 size 0xffffffffffffffff virtual false final false
static System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase> GetPooledQueue() ;

/// @brief Method RegisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
 void RegisterChange() ;

/// @brief Method UnregisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
 void UnregisterChange() ;

/// @brief Method StateChanged addr 0x0 size 0xffffffffffffffff virtual false final false
 bool StateChanged() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TransitionEventsFrameState
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6943))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6943), inst: 92 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<int32_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<int32_t>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState const& o) noexcept = default;
                


// Fields

static UnityEngine::Pool::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __declspec(property(get=__get_k_EventQueuePool, put=__set_k_EventQueuePool))  k_EventQueuePool;

static void __set_k_EventQueuePool(UnityEngine::Pool::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> value) ;

static UnityEngine::Pool::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __get_k_EventQueuePool() ;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState> __declspec(property(get=__get_elementPropertyStateDelta, put=__set_elementPropertyStateDelta))  elementPropertyStateDelta;

constexpr void __set_elementPropertyStateDelta(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState> __get_elementPropertyStateDelta() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __declspec(property(get=__get_elementPropertyQueuedEvents, put=__set_elementPropertyQueuedEvents))  elementPropertyQueuedEvents;

constexpr void __set_elementPropertyQueuedEvents(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __get_elementPropertyQueuedEvents() const;

 UnityEngine::UIElements::IPanel __declspec(property(get=__get_panel, put=__set_panel))  panel;

constexpr void __set_panel(UnityEngine::UIElements::IPanel value) ;

constexpr UnityEngine::UIElements::IPanel __get_panel() const;

 int32_t __declspec(property(get=__get_m_ChangesCount, put=__set_m_ChangesCount))  m_ChangesCount;

constexpr void __set_m_ChangesCount(int32_t value) ;

constexpr int32_t __get_m_ChangesCount() const;


// Methods

/// @brief Method GetPooledQueue addr 0x0 size 0xffffffffffffffff virtual false final false
static System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase> GetPooledQueue() ;

/// @brief Method RegisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
 void RegisterChange() ;

/// @brief Method UnregisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
 void UnregisterChange() ;

/// @brief Method StateChanged addr 0x0 size 0xffffffffffffffff virtual false final false
 bool StateChanged() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TransitionEventsFrameState
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6943))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6943), inst: 280 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::Color> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::Color>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState const& o) noexcept = default;
                


// Fields

static UnityEngine::Pool::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __declspec(property(get=__get_k_EventQueuePool, put=__set_k_EventQueuePool))  k_EventQueuePool;

static void __set_k_EventQueuePool(UnityEngine::Pool::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> value) ;

static UnityEngine::Pool::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __get_k_EventQueuePool() ;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState> __declspec(property(get=__get_elementPropertyStateDelta, put=__set_elementPropertyStateDelta))  elementPropertyStateDelta;

constexpr void __set_elementPropertyStateDelta(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState> __get_elementPropertyStateDelta() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __declspec(property(get=__get_elementPropertyQueuedEvents, put=__set_elementPropertyQueuedEvents))  elementPropertyQueuedEvents;

constexpr void __set_elementPropertyQueuedEvents(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __get_elementPropertyQueuedEvents() const;

 UnityEngine::UIElements::IPanel __declspec(property(get=__get_panel, put=__set_panel))  panel;

constexpr void __set_panel(UnityEngine::UIElements::IPanel value) ;

constexpr UnityEngine::UIElements::IPanel __get_panel() const;

 int32_t __declspec(property(get=__get_m_ChangesCount, put=__set_m_ChangesCount))  m_ChangesCount;

constexpr void __set_m_ChangesCount(int32_t value) ;

constexpr int32_t __get_m_ChangesCount() const;


// Methods

/// @brief Method GetPooledQueue addr 0x0 size 0xffffffffffffffff virtual false final false
static System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase> GetPooledQueue() ;

/// @brief Method RegisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
 void RegisterChange() ;

/// @brief Method UnregisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
 void UnregisterChange() ;

/// @brief Method StateChanged addr 0x0 size 0xffffffffffffffff virtual false final false
 bool StateChanged() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TransitionEventsFrameState
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6943))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6943), inst: 374 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<float_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<float_t>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState const& o) noexcept = default;
                


// Fields

static UnityEngine::Pool::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __declspec(property(get=__get_k_EventQueuePool, put=__set_k_EventQueuePool))  k_EventQueuePool;

static void __set_k_EventQueuePool(UnityEngine::Pool::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> value) ;

static UnityEngine::Pool::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __get_k_EventQueuePool() ;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState> __declspec(property(get=__get_elementPropertyStateDelta, put=__set_elementPropertyStateDelta))  elementPropertyStateDelta;

constexpr void __set_elementPropertyStateDelta(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState> __get_elementPropertyStateDelta() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __declspec(property(get=__get_elementPropertyQueuedEvents, put=__set_elementPropertyQueuedEvents))  elementPropertyQueuedEvents;

constexpr void __set_elementPropertyQueuedEvents(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __get_elementPropertyQueuedEvents() const;

 UnityEngine::UIElements::IPanel __declspec(property(get=__get_panel, put=__set_panel))  panel;

constexpr void __set_panel(UnityEngine::UIElements::IPanel value) ;

constexpr UnityEngine::UIElements::IPanel __get_panel() const;

 int32_t __declspec(property(get=__get_m_ChangesCount, put=__set_m_ChangesCount))  m_ChangesCount;

constexpr void __set_m_ChangesCount(int32_t value) ;

constexpr int32_t __get_m_ChangesCount() const;


// Methods

/// @brief Method GetPooledQueue addr 0x0 size 0xffffffffffffffff virtual false final false
static System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase> GetPooledQueue() ;

/// @brief Method RegisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
 void RegisterChange() ;

/// @brief Method UnregisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
 void UnregisterChange() ;

/// @brief Method StateChanged addr 0x0 size 0xffffffffffffffff virtual false final false
 bool StateChanged() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TransitionEventsFrameState
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6943))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6943), inst: 1505 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Background> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::Background>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState const& o) noexcept = default;
                


// Fields

static UnityEngine::Pool::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __declspec(property(get=__get_k_EventQueuePool, put=__set_k_EventQueuePool))  k_EventQueuePool;

static void __set_k_EventQueuePool(UnityEngine::Pool::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> value) ;

static UnityEngine::Pool::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __get_k_EventQueuePool() ;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState> __declspec(property(get=__get_elementPropertyStateDelta, put=__set_elementPropertyStateDelta))  elementPropertyStateDelta;

constexpr void __set_elementPropertyStateDelta(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState> __get_elementPropertyStateDelta() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __declspec(property(get=__get_elementPropertyQueuedEvents, put=__set_elementPropertyQueuedEvents))  elementPropertyQueuedEvents;

constexpr void __set_elementPropertyQueuedEvents(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __get_elementPropertyQueuedEvents() const;

 UnityEngine::UIElements::IPanel __declspec(property(get=__get_panel, put=__set_panel))  panel;

constexpr void __set_panel(UnityEngine::UIElements::IPanel value) ;

constexpr UnityEngine::UIElements::IPanel __get_panel() const;

 int32_t __declspec(property(get=__get_m_ChangesCount, put=__set_m_ChangesCount))  m_ChangesCount;

constexpr void __set_m_ChangesCount(int32_t value) ;

constexpr int32_t __get_m_ChangesCount() const;


// Methods

/// @brief Method GetPooledQueue addr 0x0 size 0xffffffffffffffff virtual false final false
static System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase> GetPooledQueue() ;

/// @brief Method RegisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
 void RegisterChange() ;

/// @brief Method UnregisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
 void UnregisterChange() ;

/// @brief Method StateChanged addr 0x0 size 0xffffffffffffffff virtual false final false
 bool StateChanged() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TransitionEventsFrameState
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6943))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6943), inst: 1506 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::FontDefinition> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::FontDefinition>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState const& o) noexcept = default;
                


// Fields

static UnityEngine::Pool::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __declspec(property(get=__get_k_EventQueuePool, put=__set_k_EventQueuePool))  k_EventQueuePool;

static void __set_k_EventQueuePool(UnityEngine::Pool::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> value) ;

static UnityEngine::Pool::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __get_k_EventQueuePool() ;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState> __declspec(property(get=__get_elementPropertyStateDelta, put=__set_elementPropertyStateDelta))  elementPropertyStateDelta;

constexpr void __set_elementPropertyStateDelta(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState> __get_elementPropertyStateDelta() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __declspec(property(get=__get_elementPropertyQueuedEvents, put=__set_elementPropertyQueuedEvents))  elementPropertyQueuedEvents;

constexpr void __set_elementPropertyQueuedEvents(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __get_elementPropertyQueuedEvents() const;

 UnityEngine::UIElements::IPanel __declspec(property(get=__get_panel, put=__set_panel))  panel;

constexpr void __set_panel(UnityEngine::UIElements::IPanel value) ;

constexpr UnityEngine::UIElements::IPanel __get_panel() const;

 int32_t __declspec(property(get=__get_m_ChangesCount, put=__set_m_ChangesCount))  m_ChangesCount;

constexpr void __set_m_ChangesCount(int32_t value) ;

constexpr int32_t __get_m_ChangesCount() const;


// Methods

/// @brief Method GetPooledQueue addr 0x0 size 0xffffffffffffffff virtual false final false
static System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase> GetPooledQueue() ;

/// @brief Method RegisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
 void RegisterChange() ;

/// @brief Method UnregisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
 void UnregisterChange() ;

/// @brief Method StateChanged addr 0x0 size 0xffffffffffffffff virtual false final false
 bool StateChanged() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TransitionEventsFrameState
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6943))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6943), inst: 1507 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Length> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::Length>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState const& o) noexcept = default;
                


// Fields

static UnityEngine::Pool::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __declspec(property(get=__get_k_EventQueuePool, put=__set_k_EventQueuePool))  k_EventQueuePool;

static void __set_k_EventQueuePool(UnityEngine::Pool::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> value) ;

static UnityEngine::Pool::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __get_k_EventQueuePool() ;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState> __declspec(property(get=__get_elementPropertyStateDelta, put=__set_elementPropertyStateDelta))  elementPropertyStateDelta;

constexpr void __set_elementPropertyStateDelta(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState> __get_elementPropertyStateDelta() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __declspec(property(get=__get_elementPropertyQueuedEvents, put=__set_elementPropertyQueuedEvents))  elementPropertyQueuedEvents;

constexpr void __set_elementPropertyQueuedEvents(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __get_elementPropertyQueuedEvents() const;

 UnityEngine::UIElements::IPanel __declspec(property(get=__get_panel, put=__set_panel))  panel;

constexpr void __set_panel(UnityEngine::UIElements::IPanel value) ;

constexpr UnityEngine::UIElements::IPanel __get_panel() const;

 int32_t __declspec(property(get=__get_m_ChangesCount, put=__set_m_ChangesCount))  m_ChangesCount;

constexpr void __set_m_ChangesCount(int32_t value) ;

constexpr int32_t __get_m_ChangesCount() const;


// Methods

/// @brief Method GetPooledQueue addr 0x0 size 0xffffffffffffffff virtual false final false
static System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase> GetPooledQueue() ;

/// @brief Method RegisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
 void RegisterChange() ;

/// @brief Method UnregisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
 void UnregisterChange() ;

/// @brief Method StateChanged addr 0x0 size 0xffffffffffffffff virtual false final false
 bool StateChanged() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TransitionEventsFrameState
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6943))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6943), inst: 1508 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Rotate> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::Rotate>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState const& o) noexcept = default;
                


// Fields

static UnityEngine::Pool::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __declspec(property(get=__get_k_EventQueuePool, put=__set_k_EventQueuePool))  k_EventQueuePool;

static void __set_k_EventQueuePool(UnityEngine::Pool::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> value) ;

static UnityEngine::Pool::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __get_k_EventQueuePool() ;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState> __declspec(property(get=__get_elementPropertyStateDelta, put=__set_elementPropertyStateDelta))  elementPropertyStateDelta;

constexpr void __set_elementPropertyStateDelta(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState> __get_elementPropertyStateDelta() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __declspec(property(get=__get_elementPropertyQueuedEvents, put=__set_elementPropertyQueuedEvents))  elementPropertyQueuedEvents;

constexpr void __set_elementPropertyQueuedEvents(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __get_elementPropertyQueuedEvents() const;

 UnityEngine::UIElements::IPanel __declspec(property(get=__get_panel, put=__set_panel))  panel;

constexpr void __set_panel(UnityEngine::UIElements::IPanel value) ;

constexpr UnityEngine::UIElements::IPanel __get_panel() const;

 int32_t __declspec(property(get=__get_m_ChangesCount, put=__set_m_ChangesCount))  m_ChangesCount;

constexpr void __set_m_ChangesCount(int32_t value) ;

constexpr int32_t __get_m_ChangesCount() const;


// Methods

/// @brief Method GetPooledQueue addr 0x0 size 0xffffffffffffffff virtual false final false
static System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase> GetPooledQueue() ;

/// @brief Method RegisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
 void RegisterChange() ;

/// @brief Method UnregisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
 void UnregisterChange() ;

/// @brief Method StateChanged addr 0x0 size 0xffffffffffffffff virtual false final false
 bool StateChanged() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TransitionEventsFrameState
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6943))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6943), inst: 1509 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Scale> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::Scale>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState const& o) noexcept = default;
                


// Fields

static UnityEngine::Pool::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __declspec(property(get=__get_k_EventQueuePool, put=__set_k_EventQueuePool))  k_EventQueuePool;

static void __set_k_EventQueuePool(UnityEngine::Pool::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> value) ;

static UnityEngine::Pool::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __get_k_EventQueuePool() ;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState> __declspec(property(get=__get_elementPropertyStateDelta, put=__set_elementPropertyStateDelta))  elementPropertyStateDelta;

constexpr void __set_elementPropertyStateDelta(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState> __get_elementPropertyStateDelta() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __declspec(property(get=__get_elementPropertyQueuedEvents, put=__set_elementPropertyQueuedEvents))  elementPropertyQueuedEvents;

constexpr void __set_elementPropertyQueuedEvents(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __get_elementPropertyQueuedEvents() const;

 UnityEngine::UIElements::IPanel __declspec(property(get=__get_panel, put=__set_panel))  panel;

constexpr void __set_panel(UnityEngine::UIElements::IPanel value) ;

constexpr UnityEngine::UIElements::IPanel __get_panel() const;

 int32_t __declspec(property(get=__get_m_ChangesCount, put=__set_m_ChangesCount))  m_ChangesCount;

constexpr void __set_m_ChangesCount(int32_t value) ;

constexpr int32_t __get_m_ChangesCount() const;


// Methods

/// @brief Method GetPooledQueue addr 0x0 size 0xffffffffffffffff virtual false final false
static System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase> GetPooledQueue() ;

/// @brief Method RegisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
 void RegisterChange() ;

/// @brief Method UnregisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
 void UnregisterChange() ;

/// @brief Method StateChanged addr 0x0 size 0xffffffffffffffff virtual false final false
 bool StateChanged() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TransitionEventsFrameState
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6943))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6943), inst: 1510 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::TextShadow> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::TextShadow>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState const& o) noexcept = default;
                


// Fields

static UnityEngine::Pool::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __declspec(property(get=__get_k_EventQueuePool, put=__set_k_EventQueuePool))  k_EventQueuePool;

static void __set_k_EventQueuePool(UnityEngine::Pool::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> value) ;

static UnityEngine::Pool::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __get_k_EventQueuePool() ;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState> __declspec(property(get=__get_elementPropertyStateDelta, put=__set_elementPropertyStateDelta))  elementPropertyStateDelta;

constexpr void __set_elementPropertyStateDelta(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState> __get_elementPropertyStateDelta() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __declspec(property(get=__get_elementPropertyQueuedEvents, put=__set_elementPropertyQueuedEvents))  elementPropertyQueuedEvents;

constexpr void __set_elementPropertyQueuedEvents(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __get_elementPropertyQueuedEvents() const;

 UnityEngine::UIElements::IPanel __declspec(property(get=__get_panel, put=__set_panel))  panel;

constexpr void __set_panel(UnityEngine::UIElements::IPanel value) ;

constexpr UnityEngine::UIElements::IPanel __get_panel() const;

 int32_t __declspec(property(get=__get_m_ChangesCount, put=__set_m_ChangesCount))  m_ChangesCount;

constexpr void __set_m_ChangesCount(int32_t value) ;

constexpr int32_t __get_m_ChangesCount() const;


// Methods

/// @brief Method GetPooledQueue addr 0x0 size 0xffffffffffffffff virtual false final false
static System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase> GetPooledQueue() ;

/// @brief Method RegisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
 void RegisterChange() ;

/// @brief Method UnregisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
 void UnregisterChange() ;

/// @brief Method StateChanged addr 0x0 size 0xffffffffffffffff virtual false final false
 bool StateChanged() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TransitionEventsFrameState
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6943))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6943), inst: 1511 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::TransformOrigin> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::TransformOrigin>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState const& o) noexcept = default;
                


// Fields

static UnityEngine::Pool::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __declspec(property(get=__get_k_EventQueuePool, put=__set_k_EventQueuePool))  k_EventQueuePool;

static void __set_k_EventQueuePool(UnityEngine::Pool::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> value) ;

static UnityEngine::Pool::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __get_k_EventQueuePool() ;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState> __declspec(property(get=__get_elementPropertyStateDelta, put=__set_elementPropertyStateDelta))  elementPropertyStateDelta;

constexpr void __set_elementPropertyStateDelta(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState> __get_elementPropertyStateDelta() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __declspec(property(get=__get_elementPropertyQueuedEvents, put=__set_elementPropertyQueuedEvents))  elementPropertyQueuedEvents;

constexpr void __set_elementPropertyQueuedEvents(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __get_elementPropertyQueuedEvents() const;

 UnityEngine::UIElements::IPanel __declspec(property(get=__get_panel, put=__set_panel))  panel;

constexpr void __set_panel(UnityEngine::UIElements::IPanel value) ;

constexpr UnityEngine::UIElements::IPanel __get_panel() const;

 int32_t __declspec(property(get=__get_m_ChangesCount, put=__set_m_ChangesCount))  m_ChangesCount;

constexpr void __set_m_ChangesCount(int32_t value) ;

constexpr int32_t __get_m_ChangesCount() const;


// Methods

/// @brief Method GetPooledQueue addr 0x0 size 0xffffffffffffffff virtual false final false
static System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase> GetPooledQueue() ;

/// @brief Method RegisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
 void RegisterChange() ;

/// @brief Method UnregisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
 void UnregisterChange() ;

/// @brief Method StateChanged addr 0x0 size 0xffffffffffffffff virtual false final false
 bool StateChanged() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TransitionEventsFrameState
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6943))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6943), inst: 1512 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::TransitionEventsFrameState
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Translate> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c<UnityEngine::UIElements::Translate>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState const& o) noexcept = default;
                


// Fields

static UnityEngine::Pool::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __declspec(property(get=__get_k_EventQueuePool, put=__set_k_EventQueuePool))  k_EventQueuePool;

static void __set_k_EventQueuePool(UnityEngine::Pool::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> value) ;

static UnityEngine::Pool::ObjectPool_1<System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __get_k_EventQueuePool() ;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState> __declspec(property(get=__get_elementPropertyStateDelta, put=__set_elementPropertyStateDelta))  elementPropertyStateDelta;

constexpr void __set_elementPropertyStateDelta(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState> __get_elementPropertyStateDelta() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __declspec(property(get=__get_elementPropertyQueuedEvents, put=__set_elementPropertyQueuedEvents))  elementPropertyQueuedEvents;

constexpr void __set_elementPropertyQueuedEvents(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair,System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase>> __get_elementPropertyQueuedEvents() const;

 UnityEngine::UIElements::IPanel __declspec(property(get=__get_panel, put=__set_panel))  panel;

constexpr void __set_panel(UnityEngine::UIElements::IPanel value) ;

constexpr UnityEngine::UIElements::IPanel __get_panel() const;

 int32_t __declspec(property(get=__get_m_ChangesCount, put=__set_m_ChangesCount))  m_ChangesCount;

constexpr void __set_m_ChangesCount(int32_t value) ;

constexpr int32_t __get_m_ChangesCount() const;


// Methods

/// @brief Method GetPooledQueue addr 0x0 size 0xffffffffffffffff virtual false final false
static System::Collections::Generic::Queue_1<UnityEngine::UIElements::EventBase> GetPooledQueue() ;

/// @brief Method RegisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
 void RegisterChange() ;

/// @brief Method UnregisterChange addr 0x0 size 0xffffffffffffffff virtual false final false
 void UnregisterChange() ;

/// @brief Method StateChanged addr 0x0 size 0xffffffffffffffff virtual false final false
 bool StateChanged() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EmptyData
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6946))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6946), inst: 2 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::EmptyData
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<T> __declspec(property(get=__get_Default, put=__set_Default))  Default;

static void __set_Default(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<T> value) ;

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<T> __get_Default() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EmptyData
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6946)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6946), inst: 92 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::EmptyData
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t> __declspec(property(get=__get_Default, put=__set_Default))  Default;

static void __set_Default(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t> value) ;

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<int32_t> __get_Default() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EmptyData
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6946)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6946), inst: 280 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::EmptyData
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::Color> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::Color> __declspec(property(get=__get_Default, put=__set_Default))  Default;

static void __set_Default(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::Color> value) ;

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::Color> __get_Default() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EmptyData
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6946))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6946), inst: 374 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::EmptyData
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<float_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<float_t> __declspec(property(get=__get_Default, put=__set_Default))  Default;

static void __set_Default(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<float_t> value) ;

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<float_t> __get_Default() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EmptyData
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6946)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6946), inst: 1505 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::EmptyData
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Background> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Background> __declspec(property(get=__get_Default, put=__set_Default))  Default;

static void __set_Default(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Background> value) ;

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Background> __get_Default() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EmptyData
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6946))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6946), inst: 1506 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::EmptyData
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::FontDefinition> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::FontDefinition> __declspec(property(get=__get_Default, put=__set_Default))  Default;

static void __set_Default(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::FontDefinition> value) ;

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::FontDefinition> __get_Default() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EmptyData
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6946)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6946), inst: 1507 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::EmptyData
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Length> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Length> __declspec(property(get=__get_Default, put=__set_Default))  Default;

static void __set_Default(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Length> value) ;

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Length> __get_Default() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EmptyData
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6946))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6946), inst: 1508 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::EmptyData
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Rotate> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Rotate> __declspec(property(get=__get_Default, put=__set_Default))  Default;

static void __set_Default(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Rotate> value) ;

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Rotate> __get_Default() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EmptyData
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6946))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6946), inst: 1509 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::EmptyData
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Scale> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Scale> __declspec(property(get=__get_Default, put=__set_Default))  Default;

static void __set_Default(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Scale> value) ;

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Scale> __get_Default() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EmptyData
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6946))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6946), inst: 1510 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::EmptyData
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::TextShadow> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::TextShadow> __declspec(property(get=__get_Default, put=__set_Default))  Default;

static void __set_Default(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::TextShadow> value) ;

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::TextShadow> __get_Default() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EmptyData
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6946))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6946), inst: 1511 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::EmptyData
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::TransformOrigin> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::TransformOrigin> __declspec(property(get=__get_Default, put=__set_Default))  Default;

static void __set_Default(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::TransformOrigin> value) ;

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::TransformOrigin> __get_Default() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EmptyData
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6946)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6946), inst: 1512 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1::EmptyData
struct CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Translate> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData const&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData&&) = default;
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Translate> __declspec(property(get=__get_Default, put=__set_Default))  Default;

static void __set_Default(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Translate> value) ;

static GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Translate> __get_Default() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Values`1
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6947)), TypeDefinitionIndex(TypeDefinitionIndex(6941))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6947), inst: 2 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<T> : public UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values {
public:
// Declarations
using EmptyData = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<T>;

using StyleData = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<T>;

using TimingData = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<T>;

using TransitionEventsFrameState = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1 const& o) noexcept = default;
                


// Fields

 int64_t __declspec(property(get=__get_m_CurrentTimeMs, put=__set_m_CurrentTimeMs))  m_CurrentTimeMs;

constexpr void __set_m_CurrentTimeMs(int64_t value) ;

constexpr int64_t __get_m_CurrentTimeMs() const;

 GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T> __declspec(property(get=__get_m_CurrentFrameEventsState, put=__set_m_CurrentFrameEventsState))  m_CurrentFrameEventsState;

constexpr void __set_m_CurrentFrameEventsState(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T> value) ;

constexpr GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T> __get_m_CurrentFrameEventsState() const;

 GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T> __declspec(property(get=__get_m_NextFrameEventsState, put=__set_m_NextFrameEventsState))  m_NextFrameEventsState;

constexpr void __set_m_NextFrameEventsState(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T> value) ;

constexpr GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<T> __get_m_NextFrameEventsState() const;

 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<T>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<T>> __declspec(property(get=__get_running, put=__set_running))  running;

constexpr void __set_running(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<T>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<T>> value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<T>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<T>> __get_running() const;

 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<T>,T> __declspec(property(get=__get_completed, put=__set_completed))  completed;

constexpr void __set_completed(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<T>,T> value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<T>,T> __get_completed() const;


// Properties

 bool __declspec(property(get=get_isEmpty))  isEmpty;

 System::Func_3<T,T,bool> __declspec(property(get=get_SameFunc))  SameFunc;


// Methods

/// @brief Method get_isEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_isEmpty() ;

/// @brief Method get_SameFunc addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Func_3<T,T,bool> get_SameFunc() ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method SwapFrameStates addr 0x0 size 0xffffffffffffffff virtual false final false
 void SwapFrameStates() ;

/// @brief Method QueueEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueEvent(UnityEngine::UIElements::EventBase evt, UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair epp) ;

/// @brief Method ClearEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ClearEventQueue(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair epp) ;

/// @brief Method QueueTransitionRunEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionRunEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex) ;

/// @brief Method QueueTransitionStartEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionStartEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex) ;

/// @brief Method QueueTransitionEndEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionEndEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex) ;

/// @brief Method QueueTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionCancelEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex, int64_t panelElapsedMs) ;

/// @brief Method SendTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void SendTransitionCancelEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex, int64_t panelElapsedMs) ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
 void CancelAllAnimations() ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
 void CancelAllAnimations(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method CancelAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
 void CancelAnimation(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method UpdateAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
 void UpdateAnimation(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method GetAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
 void GetAllAnimations(UnityEngine::UIElements::VisualElement ve, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outPropertyIds) ;

/// @brief Method ComputeReversingShorteningFactor addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t ComputeReversingShorteningFactor(int32_t oldIndex) ;

/// @brief Method ComputeReversingDuration addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t ComputeReversingDuration(int32_t newTransitionDurationMs, float_t newReversingShorteningFactor) ;

/// @brief Method ComputeReversingDelay addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t ComputeReversingDelay(int32_t delayMs, float_t newReversingShorteningFactor) ;

/// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual false final false
 bool StartTransition(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, T startValue, T endValue, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve, int64_t currentTimeMs) ;

/// @brief Method ForceComputedStyleEndValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ForceComputedStyleEndValue(int32_t runningIndex) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final true
 void Update(int64_t currentTimeMs) ;

/// @brief Method ProcessEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ProcessEventQueue() ;

/// @brief Method UpdateProgress addr 0x0 size 0xffffffffffffffff virtual false final false
 void UpdateProgress(int64_t currentTimeMs) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::Values`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6947)), TypeDefinitionIndex(TypeDefinitionIndex(6941))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6947), inst: 1505 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<UnityEngine::UIElements::Background> : public UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values {
public:
// Declarations
using EmptyData = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Background>;

using StyleData = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Background>;

using TimingData = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Background>;

using TransitionEventsFrameState = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Background>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1 const& o) noexcept = default;
                


// Fields

 int64_t __declspec(property(get=__get_m_CurrentTimeMs, put=__set_m_CurrentTimeMs))  m_CurrentTimeMs;

constexpr void __set_m_CurrentTimeMs(int64_t value) ;

constexpr int64_t __get_m_CurrentTimeMs() const;

 GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Background> __declspec(property(get=__get_m_CurrentFrameEventsState, put=__set_m_CurrentFrameEventsState))  m_CurrentFrameEventsState;

constexpr void __set_m_CurrentFrameEventsState(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Background> value) ;

constexpr GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Background> __get_m_CurrentFrameEventsState() const;

 GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Background> __declspec(property(get=__get_m_NextFrameEventsState, put=__set_m_NextFrameEventsState))  m_NextFrameEventsState;

constexpr void __set_m_NextFrameEventsState(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Background> value) ;

constexpr GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::Background> __get_m_NextFrameEventsState() const;

 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Background>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Background>> __declspec(property(get=__get_running, put=__set_running))  running;

constexpr void __set_running(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Background>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Background>> value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::Background>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::Background>> __get_running() const;

 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Background>,UnityEngine::UIElements::Background> __declspec(property(get=__get_completed, put=__set_completed))  completed;

constexpr void __set_completed(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Background>,UnityEngine::UIElements::Background> value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::Background>,UnityEngine::UIElements::Background> __get_completed() const;


// Properties

 bool __declspec(property(get=get_isEmpty))  isEmpty;

 System::Func_3<UnityEngine::UIElements::Background,UnityEngine::UIElements::Background,bool> __declspec(property(get=get_SameFunc))  SameFunc;


// Methods

/// @brief Method get_isEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_isEmpty() ;

/// @brief Method get_SameFunc addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Func_3<UnityEngine::UIElements::Background,UnityEngine::UIElements::Background,bool> get_SameFunc() ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method SwapFrameStates addr 0x0 size 0xffffffffffffffff virtual false final false
 void SwapFrameStates() ;

/// @brief Method QueueEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueEvent(UnityEngine::UIElements::EventBase evt, UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair epp) ;

/// @brief Method ClearEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ClearEventQueue(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair epp) ;

/// @brief Method QueueTransitionRunEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionRunEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex) ;

/// @brief Method QueueTransitionStartEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionStartEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex) ;

/// @brief Method QueueTransitionEndEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionEndEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex) ;

/// @brief Method QueueTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionCancelEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex, int64_t panelElapsedMs) ;

/// @brief Method SendTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void SendTransitionCancelEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex, int64_t panelElapsedMs) ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
 void CancelAllAnimations() ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
 void CancelAllAnimations(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method CancelAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
 void CancelAnimation(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method UpdateAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
 void UpdateAnimation(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method GetAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
 void GetAllAnimations(UnityEngine::UIElements::VisualElement ve, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outPropertyIds) ;

/// @brief Method ComputeReversingShorteningFactor addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t ComputeReversingShorteningFactor(int32_t oldIndex) ;

/// @brief Method ComputeReversingDuration addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t ComputeReversingDuration(int32_t newTransitionDurationMs, float_t newReversingShorteningFactor) ;

/// @brief Method ComputeReversingDelay addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t ComputeReversingDelay(int32_t delayMs, float_t newReversingShorteningFactor) ;

/// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual false final false
 bool StartTransition(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, UnityEngine::UIElements::Background startValue, UnityEngine::UIElements::Background endValue, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve, int64_t currentTimeMs) ;

/// @brief Method ForceComputedStyleEndValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ForceComputedStyleEndValue(int32_t runningIndex) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final true
 void Update(int64_t currentTimeMs) ;

/// @brief Method ProcessEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ProcessEventQueue() ;

/// @brief Method UpdateProgress addr 0x0 size 0xffffffffffffffff virtual false final false
 void UpdateProgress(int64_t currentTimeMs) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::Values`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6947)), TypeDefinitionIndex(TypeDefinitionIndex(6941))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6947), inst: 1506 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::Values`1
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<UnityEngine::UIElements::FontDefinition> : public UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values {
public:
// Declarations
using EmptyData = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::FontDefinition>;

using StyleData = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::FontDefinition>;

using TimingData = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::FontDefinition>;

using TransitionEventsFrameState = GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::FontDefinition>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1 const& o) noexcept = default;
                


// Fields

 int64_t __declspec(property(get=__get_m_CurrentTimeMs, put=__set_m_CurrentTimeMs))  m_CurrentTimeMs;

constexpr void __set_m_CurrentTimeMs(int64_t value) ;

constexpr int64_t __get_m_CurrentTimeMs() const;

 GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::FontDefinition> __declspec(property(get=__get_m_CurrentFrameEventsState, put=__set_m_CurrentFrameEventsState))  m_CurrentFrameEventsState;

constexpr void __set_m_CurrentFrameEventsState(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::FontDefinition> value) ;

constexpr GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::FontDefinition> __get_m_CurrentFrameEventsState() const;

 GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::FontDefinition> __declspec(property(get=__get_m_NextFrameEventsState, put=__set_m_NextFrameEventsState))  m_NextFrameEventsState;

constexpr void __set_m_NextFrameEventsState(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::FontDefinition> value) ;

constexpr GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState<UnityEngine::UIElements::FontDefinition> __get_m_NextFrameEventsState() const;

 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::FontDefinition>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::FontDefinition>> __declspec(property(get=__get_running, put=__set_running))  running;

constexpr void __set_running(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::FontDefinition>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::FontDefinition>> value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData<UnityEngine::UIElements::FontDefinition>,GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData<UnityEngine::UIElements::FontDefinition>> __get_running() const;

 UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::FontDefinition>,UnityEngine::UIElements::FontDefinition> __declspec(property(get=__get_completed, put=__set_completed))  completed;

constexpr void __set_completed(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::FontDefinition>,UnityEngine::UIElements::FontDefinition> value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2<GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData<UnityEngine::UIElements::FontDefinition>,UnityEngine::UIElements::FontDefinition> __get_completed() const;


// Properties

 bool __declspec(property(get=get_isEmpty))  isEmpty;

 System::Func_3<UnityEngine::UIElements::FontDefinition,UnityEngine::UIElements::FontDefinition,bool> __declspec(property(get=get_SameFunc))  SameFunc;


// Methods

/// @brief Method get_isEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_isEmpty() ;

/// @brief Method get_SameFunc addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Func_3<UnityEngine::UIElements::FontDefinition,UnityEngine::UIElements::FontDefinition,bool> get_SameFunc() ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method SwapFrameStates addr 0x0 size 0xffffffffffffffff virtual false final false
 void SwapFrameStates() ;

/// @brief Method QueueEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueEvent(UnityEngine::UIElements::EventBase evt, UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair epp) ;

/// @brief Method ClearEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ClearEventQueue(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair epp) ;

/// @brief Method QueueTransitionRunEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionRunEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex) ;

/// @brief Method QueueTransitionStartEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionStartEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex) ;

/// @brief Method QueueTransitionEndEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionEndEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex) ;

/// @brief Method QueueTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void QueueTransitionCancelEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex, int64_t panelElapsedMs) ;

/// @brief Method SendTransitionCancelEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void SendTransitionCancelEvent(UnityEngine::UIElements::VisualElement ve, int32_t runningIndex, int64_t panelElapsedMs) ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
 void CancelAllAnimations() ;

/// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
 void CancelAllAnimations(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method CancelAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
 void CancelAnimation(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method UpdateAnimation addr 0x0 size 0xffffffffffffffff virtual true final true
 void UpdateAnimation(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method GetAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final true
 void GetAllAnimations(UnityEngine::UIElements::VisualElement ve, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyId> outPropertyIds) ;

/// @brief Method ComputeReversingShorteningFactor addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t ComputeReversingShorteningFactor(int32_t oldIndex) ;

/// @brief Method ComputeReversingDuration addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t ComputeReversingDuration(int32_t newTransitionDurationMs, float_t newReversingShorteningFactor) ;

/// @brief Method ComputeReversingDelay addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t ComputeReversingDelay(int32_t delayMs, float_t newReversingShorteningFactor) ;

/// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual false final false
 bool StartTransition(UnityEngine::UIElements::VisualElement owner, UnityEngine::UIElements::StyleSheets::StylePropertyId prop, UnityEngine::UIElements::FontDefinition startValue, UnityEngine::UIElements::FontDefinition endValue, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve, int64_t currentTimeMs) ;

/// @brief Method ForceComputedStyleEndValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ForceComputedStyleEndValue(int32_t runningIndex) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final true
 void Update(int64_t currentTimeMs) ;

/// @brief Method ProcessEventQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ProcessEventQueue() ;

/// @brief Method UpdateProgress addr 0x0 size 0xffffffffffffffff virtual false final false
 void UpdateProgress(int64_t currentTimeMs) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::ValuesDiscrete`1
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6947)), TypeDefinitionIndex(TypeDefinitionIndex(6952)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6947), inst: 5175 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6952), inst: 2 })
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem::ValuesDiscrete`1
class CORDL_TYPE UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1<T> : public UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<T> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1<T>(ptr) {
}


  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1& operator=(UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1 const& o) noexcept = default;
                


// Fields

 System::Func_3<T,T,bool> __declspec(property(get=__get__SameFunc_k__BackingField, put=__set__SameFunc_k__BackingField))  _SameFunc_k__BackingField;

constexpr void __set__SameFunc_k__BackingField(System::Func_3<T,T,bool> value) ;

constexpr System::Func_3<T,T,bool> __get__SameFunc_k__BackingField() const;


// Properties

 System::Func_3<T,T,bool> __declspec(property(get=get_SameFunc))  SameFunc;


// Methods

/// @brief Method get_SameFunc addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Func_3<T,T,bool> get_SameFunc() ;

/// @brief Method IsSame addr 0x0 size 0xffffffffffffffff virtual false final false
static bool IsSame(T a, T b) ;

/// @brief Method Lerp addr 0x0 size 0xffffffffffffffff virtual false final false
static T Lerp(T a, T b, float_t t) ;

/// @brief Method UpdateValues addr 0x0 size 0xffffffffffffffff virtual true final true
 void UpdateValues() ;

// Ctor Parameters []
explicit UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState, "UnityEngine.UIElements", "StylePropertyAnimationSystem/Values`1/TransitionEventsFrameState");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TransitionEventsFrameState____c, "UnityEngine.UIElements", "StylePropertyAnimationSystem/Values`1/TransitionEventsFrameState/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesDiscrete_1, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesDiscrete`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1, "UnityEngine.UIElements", "StylePropertyAnimationSystem/Values`1");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__TransitionState, "UnityEngine.UIElements", "StylePropertyAnimationSystem/TransitionState");
NEED_NO_BOX(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair__EqualityComparer, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ElementPropertyPair/EqualityComparer");
NEED_NO_BOX(UnityEngine::UIElements::StylePropertyAnimationSystem);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StylePropertyAnimationSystem, "UnityEngine.UIElements", "StylePropertyAnimationSystem");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__Values, "UnityEngine.UIElements", "StylePropertyAnimationSystem/Values");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesBackground);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesBackground, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesBackground");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesColor);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesColor, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesColor");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFloat);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFloat, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesFloat");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFont);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFont, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesFont");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFontDefinition);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesFontDefinition, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesFontDefinition");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesInt);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesInt, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesInt");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesLength);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesLength, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesLength");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesRotate);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesRotate, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesRotate");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesScale);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesScale, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesScale");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTextShadow);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTextShadow, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesTextShadow");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTransformOrigin);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTransformOrigin, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesTransformOrigin");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTranslate);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ValuesTranslate, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesTranslate");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__EmptyData, "UnityEngine.UIElements", "StylePropertyAnimationSystem/Values`1/EmptyData");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__AnimationDataSet_2, "UnityEngine.UIElements", "StylePropertyAnimationSystem/AnimationDataSet`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__StyleData, "UnityEngine.UIElements", "StylePropertyAnimationSystem/Values`1/StyleData");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(GlobalNamespace::UnityEngine__UIElements__StylePropertyAnimationSystem__Values_1__TimingData, "UnityEngine.UIElements", "StylePropertyAnimationSystem/Values`1/TimingData");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__StylePropertyAnimationSystem__ElementPropertyPair, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ElementPropertyPair");
