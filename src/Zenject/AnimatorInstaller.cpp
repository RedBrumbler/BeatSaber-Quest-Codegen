// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.AnimatorInstaller
#include "Zenject/AnimatorInstaller.hpp"
// Including type: UnityEngine.Animator
#include "UnityEngine/Animator.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.AnimatorInstaller..ctor
Zenject::AnimatorInstaller* Zenject::AnimatorInstaller::New_ctor(UnityEngine::Animator* animator) {
  return (AnimatorInstaller*)THROW_UNLESS(il2cpp_utils::New("Zenject", "AnimatorInstaller", animator));
}
// Autogenerated method: Zenject.AnimatorInstaller.InstallBindings
void Zenject::AnimatorInstaller::InstallBindings() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InstallBindings"));
}