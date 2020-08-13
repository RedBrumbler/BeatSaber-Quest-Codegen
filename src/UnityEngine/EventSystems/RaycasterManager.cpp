// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.RaycasterManager
#include "UnityEngine/EventSystems/RaycasterManager.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: UnityEngine.EventSystems.BaseRaycaster
#include "UnityEngine/EventSystems/BaseRaycaster.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster> s_Raycasters
System::Collections::Generic::List_1<UnityEngine::EventSystems::BaseRaycaster*>* UnityEngine::EventSystems::RaycasterManager::_get_s_Raycasters() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::Generic::List_1<UnityEngine::EventSystems::BaseRaycaster*>*>("UnityEngine.EventSystems", "RaycasterManager", "s_Raycasters"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster> s_Raycasters
void UnityEngine::EventSystems::RaycasterManager::_set_s_Raycasters(System::Collections::Generic::List_1<UnityEngine::EventSystems::BaseRaycaster*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.EventSystems", "RaycasterManager", "s_Raycasters", value));
}
// Autogenerated method: UnityEngine.EventSystems.RaycasterManager.AddRaycaster
void UnityEngine::EventSystems::RaycasterManager::AddRaycaster(UnityEngine::EventSystems::BaseRaycaster* baseRaycaster) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.EventSystems", "RaycasterManager", "AddRaycaster", baseRaycaster));
}
// Autogenerated method: UnityEngine.EventSystems.RaycasterManager.GetRaycasters
System::Collections::Generic::List_1<UnityEngine::EventSystems::BaseRaycaster*>* UnityEngine::EventSystems::RaycasterManager::GetRaycasters() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<UnityEngine::EventSystems::BaseRaycaster*>*>("UnityEngine.EventSystems", "RaycasterManager", "GetRaycasters"));
}
// Autogenerated method: UnityEngine.EventSystems.RaycasterManager.RemoveRaycasters
void UnityEngine::EventSystems::RaycasterManager::RemoveRaycasters(UnityEngine::EventSystems::BaseRaycaster* baseRaycaster) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.EventSystems", "RaycasterManager", "RemoveRaycasters", baseRaycaster));
}
// Autogenerated method: UnityEngine.EventSystems.RaycasterManager..cctor
void UnityEngine::EventSystems::RaycasterManager::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.EventSystems", "RaycasterManager", ".cctor"));
}
