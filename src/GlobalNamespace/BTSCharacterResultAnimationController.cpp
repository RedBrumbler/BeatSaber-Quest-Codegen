// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: BTSCharacterResultAnimationController
#include "GlobalNamespace/BTSCharacterResultAnimationController.hpp"
// Including type: MaterialPropertyBlockColorSetter
#include "GlobalNamespace/MaterialPropertyBlockColorSetter.hpp"
// Including type: MaterialPropertyBlockFloatAnimator
#include "GlobalNamespace/MaterialPropertyBlockFloatAnimator.hpp"
// Including type: UnityEngine.GameObject
#include "UnityEngine/GameObject.hpp"
// Including type: BTSCharacter
#include "GlobalNamespace/BTSCharacter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: BTSCharacterResultAnimationController.SetCharacter
void GlobalNamespace::BTSCharacterResultAnimationController::SetCharacter(GlobalNamespace::BTSCharacter* btsCharacter) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BTSCharacterResultAnimationController").WithContext("SetCharacter");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SetCharacter", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(btsCharacter)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, btsCharacter);
}
// Autogenerated method: BTSCharacterResultAnimationController.StopAnimation
void GlobalNamespace::BTSCharacterResultAnimationController::StopAnimation() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BTSCharacterResultAnimationController").WithContext("StopAnimation");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "StopAnimation", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}