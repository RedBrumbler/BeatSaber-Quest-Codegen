// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.PanelAnimation
#include "HMUI/PanelAnimation.hpp"
// Including type: HMUI.PanelAnimation/<AnimationCoroutine>d__1
#include "HMUI/PanelAnimation_-AnimationCoroutine-d__1.hpp"
// Including type: UnityEngine.CanvasGroup
#include "UnityEngine/CanvasGroup.hpp"
// Including type: UnityEngine.AnimationCurve
#include "UnityEngine/AnimationCurve.hpp"
// Including type: System.Action
#include "System/Action.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: HMUI.PanelAnimation.StartAnimation
void HMUI::PanelAnimation::StartAnimation(UnityEngine::CanvasGroup* canvasGroup, UnityEngine::CanvasGroup* parentCanvasGroup, float duration, UnityEngine::AnimationCurve* scaleXAnimationCurve, UnityEngine::AnimationCurve* scaleYAnimationCurve, UnityEngine::AnimationCurve* alphaAnimationCurve, UnityEngine::AnimationCurve* parentAlphaAnimationCurve, System::Action* finishedCallback) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "StartAnimation", canvasGroup, parentCanvasGroup, duration, scaleXAnimationCurve, scaleYAnimationCurve, alphaAnimationCurve, parentAlphaAnimationCurve, finishedCallback));
}
// Autogenerated method: HMUI.PanelAnimation.AnimationCoroutine
System::Collections::IEnumerator* HMUI::PanelAnimation::AnimationCoroutine(float duration, UnityEngine::CanvasGroup* canvasGroup, UnityEngine::CanvasGroup* parentCanvasGroup, UnityEngine::AnimationCurve* scaleXAnimationCurve, UnityEngine::AnimationCurve* scaleYAnimationCurve, UnityEngine::AnimationCurve* alphaAnimationCurve, UnityEngine::AnimationCurve* parentAlphaAnimationCurve, System::Action* finishedCallback) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "AnimationCoroutine", duration, canvasGroup, parentCanvasGroup, scaleXAnimationCurve, scaleYAnimationCurve, alphaAnimationCurve, parentAlphaAnimationCurve, finishedCallback));
}
// Autogenerated method: HMUI.PanelAnimation..ctor
HMUI::PanelAnimation* HMUI::PanelAnimation::New_ctor() {
  return (PanelAnimation*)THROW_UNLESS(il2cpp_utils::New("HMUI", "PanelAnimation"));
}