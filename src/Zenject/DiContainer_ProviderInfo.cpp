// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.DiContainer/ProviderInfo
#include "Zenject/DiContainer_ProviderInfo.hpp"
// Including type: Zenject.IProvider
#include "Zenject/IProvider.hpp"
// Including type: Zenject.BindingCondition
#include "Zenject/BindingCondition.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.DiContainer/ProviderInfo..ctor
Zenject::DiContainer::ProviderInfo* Zenject::DiContainer::ProviderInfo::New_ctor(Zenject::IProvider* provider, Zenject::BindingCondition* condition, bool nonLazy, Zenject::DiContainer* container) {
  return (DiContainer::ProviderInfo*)THROW_UNLESS(il2cpp_utils::New("Zenject", "DiContainer/ProviderInfo", provider, condition, nonLazy, container));
}
