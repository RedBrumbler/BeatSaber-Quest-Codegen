// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ParticleSystem/MinMaxGradient
#include "UnityEngine/ParticleSystem_MinMaxGradient.hpp"
// Including type: UnityEngine.Gradient
#include "UnityEngine/Gradient.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.ParticleSystem/MinMaxGradient..ctor
UnityEngine::ParticleSystem::MinMaxGradient* UnityEngine::ParticleSystem::MinMaxGradient::New_ctor(UnityEngine::Color color) {
  return (ParticleSystem::MinMaxGradient*)THROW_UNLESS(il2cpp_utils::New("UnityEngine", "ParticleSystem/MinMaxGradient", color));
}
// Autogenerated method: UnityEngine.ParticleSystem/MinMaxGradient.get_color
UnityEngine::Color UnityEngine::ParticleSystem::MinMaxGradient::get_color() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Color>(*this, "get_color"));
}