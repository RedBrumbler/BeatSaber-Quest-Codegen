// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.DisposableManager
#include "Zenject/DisposableManager.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: Zenject.DisposableManager/LateDisposableInfo
#include "Zenject/DisposableManager_LateDisposableInfo.hpp"
// Including type: Zenject.DisposableManager/<>c__DisplayClass4_0
#include "Zenject/DisposableManager_--c__DisplayClass4_0.hpp"
// Including type: Zenject.DisposableManager/<>c__DisplayClass4_1
#include "Zenject/DisposableManager_--c__DisplayClass4_1.hpp"
// Including type: Zenject.DisposableManager/<>c
#include "Zenject/DisposableManager_--c.hpp"
// Including type: Zenject.DisposableManager/<>c__DisplayClass9_0
#include "Zenject/DisposableManager_--c__DisplayClass9_0.hpp"
// Including type: ModestTree.Util.ValuePair`2
#include "ModestTree/Util/ValuePair_2.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: Zenject.ILateDisposable
#include "Zenject/ILateDisposable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.DisposableManager..ctor
Zenject::DisposableManager* Zenject::DisposableManager::New_ctor(System::Collections::Generic::List_1<System::IDisposable*>* disposables, System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type*, int>*>* priorities, System::Collections::Generic::List_1<Zenject::ILateDisposable*>* lateDisposables, System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type*, int>*>* latePriorities) {
  return (DisposableManager*)THROW_UNLESS(il2cpp_utils::New("Zenject", "DisposableManager", disposables, priorities, lateDisposables, latePriorities));
}
// Autogenerated method: Zenject.DisposableManager.Add
void Zenject::DisposableManager::Add(System::IDisposable* disposable) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Add", disposable));
}
// Autogenerated method: Zenject.DisposableManager.Add
void Zenject::DisposableManager::Add(System::IDisposable* disposable, int priority) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Add", disposable, priority));
}
// Autogenerated method: Zenject.DisposableManager.AddLate
void Zenject::DisposableManager::AddLate(Zenject::ILateDisposable* disposable) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddLate", disposable));
}
// Autogenerated method: Zenject.DisposableManager.AddLate
void Zenject::DisposableManager::AddLate(Zenject::ILateDisposable* disposable, int priority) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddLate", disposable, priority));
}
// Autogenerated method: Zenject.DisposableManager.Remove
void Zenject::DisposableManager::Remove(System::IDisposable* disposable) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Remove", disposable));
}
// Autogenerated method: Zenject.DisposableManager.LateDispose
void Zenject::DisposableManager::LateDispose() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "LateDispose"));
}
// Autogenerated method: Zenject.DisposableManager.Dispose
void Zenject::DisposableManager::Dispose() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose"));
}
void Zenject::DisposableManager::System_IDisposable_Dispose() {
  Dispose();
}
