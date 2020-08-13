// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.InitializableManager
#include "Zenject/InitializableManager.hpp"
// Including type: Zenject.InitializableManager/InitializableInfo
#include "Zenject/InitializableManager_InitializableInfo.hpp"
// Including type: Zenject.InitializableManager/<>c__DisplayClass2_0
#include "Zenject/InitializableManager_--c__DisplayClass2_0.hpp"
// Including type: Zenject.InitializableManager/<>c
#include "Zenject/InitializableManager_--c.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: Zenject.IInitializable
#include "Zenject/IInitializable.hpp"
// Including type: ModestTree.Util.ValuePair`2
#include "ModestTree/Util/ValuePair_2.hpp"
// Including type: System.Type
#include "System/Type.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.InitializableManager..ctor
Zenject::InitializableManager* Zenject::InitializableManager::New_ctor(System::Collections::Generic::List_1<Zenject::IInitializable*>* initializables, System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type*, int>*>* priorities) {
  return (InitializableManager*)THROW_UNLESS(il2cpp_utils::New("Zenject", "InitializableManager", initializables, priorities));
}
// Autogenerated method: Zenject.InitializableManager.Add
void Zenject::InitializableManager::Add(Zenject::IInitializable* initializable) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Add", initializable));
}
// Autogenerated method: Zenject.InitializableManager.Add
void Zenject::InitializableManager::Add(Zenject::IInitializable* initializable, int priority) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Add", initializable, priority));
}
// Autogenerated method: Zenject.InitializableManager.Initialize
void Zenject::InitializableManager::Initialize() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Initialize"));
}
