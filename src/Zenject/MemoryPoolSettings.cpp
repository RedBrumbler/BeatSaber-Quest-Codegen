// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MemoryPoolSettings
#include "Zenject/MemoryPoolSettings.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly Zenject.MemoryPoolSettings Default
Zenject::MemoryPoolSettings* Zenject::MemoryPoolSettings::_get_Default() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<Zenject::MemoryPoolSettings*>("Zenject", "MemoryPoolSettings", "Default"));
}
// Autogenerated static field setter
// Set static field: static public readonly Zenject.MemoryPoolSettings Default
void Zenject::MemoryPoolSettings::_set_Default(Zenject::MemoryPoolSettings* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Zenject", "MemoryPoolSettings", "Default", value));
}
// Autogenerated method: Zenject.MemoryPoolSettings..ctor
Zenject::MemoryPoolSettings* Zenject::MemoryPoolSettings::New_ctor(int initialSize, int maxSize, Zenject::PoolExpandMethods expandMethod) {
  return (MemoryPoolSettings*)THROW_UNLESS(il2cpp_utils::New("Zenject", "MemoryPoolSettings", initialSize, maxSize, expandMethod));
}
// Autogenerated method: Zenject.MemoryPoolSettings..cctor
void Zenject::MemoryPoolSettings::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("Zenject", "MemoryPoolSettings", ".cctor"));
}
// Autogenerated method: Zenject.MemoryPoolSettings..ctor
Zenject::MemoryPoolSettings* Zenject::MemoryPoolSettings::New_ctor() {
  return (MemoryPoolSettings*)THROW_UNLESS(il2cpp_utils::New("Zenject", "MemoryPoolSettings"));
}