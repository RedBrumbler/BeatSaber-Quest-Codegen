// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.AnimatorMoveHandlerManager
#include "Zenject/AnimatorMoveHandlerManager.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: Zenject.IAnimatorMoveHandler
#include "Zenject/IAnimatorMoveHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.AnimatorMoveHandlerManager.Construct
void Zenject::AnimatorMoveHandlerManager::Construct(System::Collections::Generic::List_1<Zenject::IAnimatorMoveHandler*>* handlers) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Construct", handlers));
}
// Autogenerated method: Zenject.AnimatorMoveHandlerManager.OnAnimatorMove
void Zenject::AnimatorMoveHandlerManager::OnAnimatorMove() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnAnimatorMove"));
}
// Autogenerated method: Zenject.AnimatorMoveHandlerManager..ctor
Zenject::AnimatorMoveHandlerManager* Zenject::AnimatorMoveHandlerManager::New_ctor() {
  return (AnimatorMoveHandlerManager*)THROW_UNLESS(il2cpp_utils::New("Zenject", "AnimatorMoveHandlerManager"));
}
