// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.DefaultControls/DefaultRuntimeFactory
#include "UnityEngine/UI/DefaultControls_DefaultRuntimeFactory.hpp"
// Including type: UnityEngine.GameObject
#include "UnityEngine/GameObject.hpp"
// Including type: System.Type
#include "System/Type.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public UnityEngine.UI.DefaultControls/IFactoryControls Default
UnityEngine::UI::DefaultControls::IFactoryControls* UnityEngine::UI::DefaultControls::DefaultRuntimeFactory::_get_Default() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<UnityEngine::UI::DefaultControls::IFactoryControls*>("UnityEngine.UI", "DefaultControls/DefaultRuntimeFactory", "Default"));
}
// Autogenerated static field setter
// Set static field: static public UnityEngine.UI.DefaultControls/IFactoryControls Default
void UnityEngine::UI::DefaultControls::DefaultRuntimeFactory::_set_Default(UnityEngine::UI::DefaultControls::IFactoryControls* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.UI", "DefaultControls/DefaultRuntimeFactory", "Default", value));
}
// Autogenerated method: UnityEngine.UI.DefaultControls/DefaultRuntimeFactory..cctor
void UnityEngine::UI::DefaultControls::DefaultRuntimeFactory::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.UI", "DefaultControls/DefaultRuntimeFactory", ".cctor"));
}
// Autogenerated method: UnityEngine.UI.DefaultControls/DefaultRuntimeFactory.CreateGameObject
UnityEngine::GameObject* UnityEngine::UI::DefaultControls::DefaultRuntimeFactory::CreateGameObject(::CsString* name, ::Array<System::Type*>* components) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::GameObject*>(this, "CreateGameObject", name, components));
}
// Autogenerated method: UnityEngine.UI.DefaultControls/DefaultRuntimeFactory..ctor
UnityEngine::UI::DefaultControls::DefaultRuntimeFactory* UnityEngine::UI::DefaultControls::DefaultRuntimeFactory::New_ctor() {
  return (DefaultControls::DefaultRuntimeFactory*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.UI", "DefaultControls/DefaultRuntimeFactory"));
}
