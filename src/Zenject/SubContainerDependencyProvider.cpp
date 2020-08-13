// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.SubContainerDependencyProvider
#include "Zenject/SubContainerDependencyProvider.hpp"
// Including type: Zenject.ISubContainerCreator
#include "Zenject/ISubContainerCreator.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: Zenject.InjectContext
#include "Zenject/InjectContext.hpp"
// Including type: Zenject.DiContainer
#include "Zenject/DiContainer.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.Action
#include "System/Action.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.SubContainerDependencyProvider..ctor
Zenject::SubContainerDependencyProvider* Zenject::SubContainerDependencyProvider::New_ctor(System::Type* dependencyType, ::CsObject* identifier, Zenject::ISubContainerCreator* subContainerCreator, bool resolveAll) {
  return (SubContainerDependencyProvider*)THROW_UNLESS(il2cpp_utils::New("Zenject", "SubContainerDependencyProvider", dependencyType, identifier, subContainerCreator, resolveAll));
}
// Autogenerated method: Zenject.SubContainerDependencyProvider.CreateSubContext
Zenject::InjectContext* Zenject::SubContainerDependencyProvider::CreateSubContext(Zenject::InjectContext* parent, Zenject::DiContainer* subContainer) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::InjectContext*>(this, "CreateSubContext", parent, subContainer));
}
// Autogenerated method: Zenject.SubContainerDependencyProvider.get_IsCached
bool Zenject::SubContainerDependencyProvider::get_IsCached() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsCached"));
}
// Autogenerated method: Zenject.SubContainerDependencyProvider.get_TypeVariesBasedOnMemberType
bool Zenject::SubContainerDependencyProvider::get_TypeVariesBasedOnMemberType() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_TypeVariesBasedOnMemberType"));
}
// Autogenerated method: Zenject.SubContainerDependencyProvider.GetInstanceType
System::Type* Zenject::SubContainerDependencyProvider::GetInstanceType(Zenject::InjectContext* context) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Type*>(this, "GetInstanceType", context));
}
// Autogenerated method: Zenject.SubContainerDependencyProvider.GetAllInstancesWithInjectSplit
void Zenject::SubContainerDependencyProvider::GetAllInstancesWithInjectSplit(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Action*& injectAction, System::Collections::Generic::List_1<::CsObject*>* buffer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetAllInstancesWithInjectSplit", context, args, injectAction, buffer));
}
