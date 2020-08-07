// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ParticleSystem
#include "UnityEngine/ParticleSystem.hpp"
// Including type: UnityEngine.ParticleSystem/MainModule
#include "UnityEngine/ParticleSystem_MainModule.hpp"
// Including type: UnityEngine.ParticleSystem/EmissionModule
#include "UnityEngine/ParticleSystem_EmissionModule.hpp"
// Including type: UnityEngine.ParticleSystem/ShapeModule
#include "UnityEngine/ParticleSystem_ShapeModule.hpp"
// Including type: UnityEngine.ParticleSystem/Particle
#include "UnityEngine/ParticleSystem_Particle.hpp"
// Including type: UnityEngine.ParticleSystem/MinMaxCurve
#include "UnityEngine/ParticleSystem_MinMaxCurve.hpp"
// Including type: UnityEngine.ParticleSystem/MinMaxGradient
#include "UnityEngine/ParticleSystem_MinMaxGradient.hpp"
// Including type: UnityEngine.ParticleSystem/EmitParams
#include "UnityEngine/ParticleSystem_EmitParams.hpp"
// Including type: UnityEngine.ParticleSystem/ForceOverLifetimeModule
#include "UnityEngine/ParticleSystem_ForceOverLifetimeModule.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
// Including type: UnityEngine.ParticleSystemStopBehavior
#include "UnityEngine/ParticleSystemStopBehavior.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.ParticleSystem.Emit
void UnityEngine::ParticleSystem::Emit(UnityEngine::Vector3 position, UnityEngine::Vector3 velocity, float size, float lifetime, UnityEngine::Color32 color) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Emit", position, velocity, size, lifetime, color));
}
// Autogenerated method: UnityEngine.ParticleSystem.Emit
void UnityEngine::ParticleSystem::Emit(UnityEngine::ParticleSystem::Particle particle) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Emit", particle));
}
// Autogenerated method: UnityEngine.ParticleSystem.get_particleCount
int UnityEngine::ParticleSystem::get_particleCount() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_particleCount"));
}
// Autogenerated method: UnityEngine.ParticleSystem.get_time
float UnityEngine::ParticleSystem::get_time() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_time"));
}
// Autogenerated method: UnityEngine.ParticleSystem.get_randomSeed
uint UnityEngine::ParticleSystem::get_randomSeed() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "get_randomSeed"));
}
// Autogenerated method: UnityEngine.ParticleSystem.set_randomSeed
void UnityEngine::ParticleSystem::set_randomSeed(uint value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_randomSeed", value));
}
// Autogenerated method: UnityEngine.ParticleSystem.get_useAutoRandomSeed
bool UnityEngine::ParticleSystem::get_useAutoRandomSeed() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_useAutoRandomSeed"));
}
// Autogenerated method: UnityEngine.ParticleSystem.set_useAutoRandomSeed
void UnityEngine::ParticleSystem::set_useAutoRandomSeed(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_useAutoRandomSeed", value));
}
// Autogenerated method: UnityEngine.ParticleSystem.SetParticles
void UnityEngine::ParticleSystem::SetParticles(::Array<UnityEngine::ParticleSystem::Particle>*& particles, int size, int offset) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetParticles", particles, size, offset));
}
// Autogenerated method: UnityEngine.ParticleSystem.SetParticles
void UnityEngine::ParticleSystem::SetParticles(::Array<UnityEngine::ParticleSystem::Particle>*& particles, int size) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetParticles", particles, size));
}
// Autogenerated method: UnityEngine.ParticleSystem.GetParticles
int UnityEngine::ParticleSystem::GetParticles(::Array<UnityEngine::ParticleSystem::Particle>*& particles, int size, int offset) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetParticles", particles, size, offset));
}
// Autogenerated method: UnityEngine.ParticleSystem.GetParticles
int UnityEngine::ParticleSystem::GetParticles(::Array<UnityEngine::ParticleSystem::Particle>*& particles, int size) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetParticles", particles, size));
}
// Autogenerated method: UnityEngine.ParticleSystem.GetParticles
int UnityEngine::ParticleSystem::GetParticles(::Array<UnityEngine::ParticleSystem::Particle>*& particles) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetParticles", particles));
}
// Autogenerated method: UnityEngine.ParticleSystem.Simulate
void UnityEngine::ParticleSystem::Simulate(float t, bool withChildren, bool restart, bool fixedTimeStep) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Simulate", t, withChildren, restart, fixedTimeStep));
}
// Autogenerated method: UnityEngine.ParticleSystem.Simulate
void UnityEngine::ParticleSystem::Simulate(float t, bool withChildren, bool restart) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Simulate", t, withChildren, restart));
}
// Autogenerated method: UnityEngine.ParticleSystem.Stop
void UnityEngine::ParticleSystem::Stop(bool withChildren, UnityEngine::ParticleSystemStopBehavior stopBehavior) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Stop", withChildren, stopBehavior));
}
// Autogenerated method: UnityEngine.ParticleSystem.Clear
void UnityEngine::ParticleSystem::Clear(bool withChildren) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Clear", withChildren));
}
// Autogenerated method: UnityEngine.ParticleSystem.Clear
void UnityEngine::ParticleSystem::Clear() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Clear"));
}
// Autogenerated method: UnityEngine.ParticleSystem.Emit
void UnityEngine::ParticleSystem::Emit(int count) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Emit", count));
}
// Autogenerated method: UnityEngine.ParticleSystem.Emit_Internal
void UnityEngine::ParticleSystem::Emit_Internal(int count) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Emit_Internal", count));
}
// Autogenerated method: UnityEngine.ParticleSystem.Emit
void UnityEngine::ParticleSystem::Emit(UnityEngine::ParticleSystem::EmitParams emitParams, int count) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Emit", emitParams, count));
}
// Autogenerated method: UnityEngine.ParticleSystem.EmitOld_Internal
void UnityEngine::ParticleSystem::EmitOld_Internal(UnityEngine::ParticleSystem::Particle& particle) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EmitOld_Internal", particle));
}
// Autogenerated method: UnityEngine.ParticleSystem.get_main
UnityEngine::ParticleSystem::MainModule UnityEngine::ParticleSystem::get_main() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::ParticleSystem::MainModule>(this, "get_main"));
}
// Autogenerated method: UnityEngine.ParticleSystem.get_emission
UnityEngine::ParticleSystem::EmissionModule UnityEngine::ParticleSystem::get_emission() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::ParticleSystem::EmissionModule>(this, "get_emission"));
}
// Autogenerated method: UnityEngine.ParticleSystem.get_shape
UnityEngine::ParticleSystem::ShapeModule UnityEngine::ParticleSystem::get_shape() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::ParticleSystem::ShapeModule>(this, "get_shape"));
}
// Autogenerated method: UnityEngine.ParticleSystem.get_forceOverLifetime
UnityEngine::ParticleSystem::ForceOverLifetimeModule UnityEngine::ParticleSystem::get_forceOverLifetime() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::ParticleSystem::ForceOverLifetimeModule>(this, "get_forceOverLifetime"));
}
// Autogenerated method: UnityEngine.ParticleSystem.Emit_Injected
void UnityEngine::ParticleSystem::Emit_Injected(UnityEngine::ParticleSystem::EmitParams& emitParams, int count) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Emit_Injected", emitParams, count));
}