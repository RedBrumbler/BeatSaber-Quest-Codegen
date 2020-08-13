// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.Internal.ZenPools
#include "Zenject/Internal/ZenPools.hpp"
// Including type: Zenject.StaticMemoryPool`1
#include "Zenject/StaticMemoryPool_1.hpp"
// Including type: Zenject.InjectContext
#include "Zenject/InjectContext.hpp"
// Including type: Zenject.Internal.LookupId
#include "Zenject/Internal/LookupId.hpp"
// Including type: Zenject.BindInfo
#include "Zenject/BindInfo.hpp"
// Including type: Zenject.BindStatement
#include "Zenject/BindStatement.hpp"
// Including type: System.Collections.Generic.HashSet`1
#include "System/Collections/Generic/HashSet_1.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: Zenject.IProvider
#include "Zenject/IProvider.hpp"
// Including type: Zenject.BindingId
#include "Zenject/BindingId.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: Zenject.DiContainer
#include "Zenject/DiContainer.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: Zenject.InjectableInfo
#include "Zenject/InjectableInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly Zenject.StaticMemoryPool`1<Zenject.InjectContext> _contextPool
Zenject::StaticMemoryPool_1<Zenject::InjectContext*>* Zenject::Internal::ZenPools::_get__contextPool() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<Zenject::StaticMemoryPool_1<Zenject::InjectContext*>*>("Zenject.Internal", "ZenPools", "_contextPool"));
}
// Autogenerated static field setter
// Set static field: static private readonly Zenject.StaticMemoryPool`1<Zenject.InjectContext> _contextPool
void Zenject::Internal::ZenPools::_set__contextPool(Zenject::StaticMemoryPool_1<Zenject::InjectContext*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Zenject.Internal", "ZenPools", "_contextPool", value));
}
// Autogenerated static field getter
// Get static field: static private readonly Zenject.StaticMemoryPool`1<Zenject.Internal.LookupId> _lookupIdPool
Zenject::StaticMemoryPool_1<Zenject::Internal::LookupId*>* Zenject::Internal::ZenPools::_get__lookupIdPool() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<Zenject::StaticMemoryPool_1<Zenject::Internal::LookupId*>*>("Zenject.Internal", "ZenPools", "_lookupIdPool"));
}
// Autogenerated static field setter
// Set static field: static private readonly Zenject.StaticMemoryPool`1<Zenject.Internal.LookupId> _lookupIdPool
void Zenject::Internal::ZenPools::_set__lookupIdPool(Zenject::StaticMemoryPool_1<Zenject::Internal::LookupId*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Zenject.Internal", "ZenPools", "_lookupIdPool", value));
}
// Autogenerated static field getter
// Get static field: static private readonly Zenject.StaticMemoryPool`1<Zenject.BindInfo> _bindInfoPool
Zenject::StaticMemoryPool_1<Zenject::BindInfo*>* Zenject::Internal::ZenPools::_get__bindInfoPool() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<Zenject::StaticMemoryPool_1<Zenject::BindInfo*>*>("Zenject.Internal", "ZenPools", "_bindInfoPool"));
}
// Autogenerated static field setter
// Set static field: static private readonly Zenject.StaticMemoryPool`1<Zenject.BindInfo> _bindInfoPool
void Zenject::Internal::ZenPools::_set__bindInfoPool(Zenject::StaticMemoryPool_1<Zenject::BindInfo*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Zenject.Internal", "ZenPools", "_bindInfoPool", value));
}
// Autogenerated static field getter
// Get static field: static private readonly Zenject.StaticMemoryPool`1<Zenject.BindStatement> _bindStatementPool
Zenject::StaticMemoryPool_1<Zenject::BindStatement*>* Zenject::Internal::ZenPools::_get__bindStatementPool() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<Zenject::StaticMemoryPool_1<Zenject::BindStatement*>*>("Zenject.Internal", "ZenPools", "_bindStatementPool"));
}
// Autogenerated static field setter
// Set static field: static private readonly Zenject.StaticMemoryPool`1<Zenject.BindStatement> _bindStatementPool
void Zenject::Internal::ZenPools::_set__bindStatementPool(Zenject::StaticMemoryPool_1<Zenject::BindStatement*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Zenject.Internal", "ZenPools", "_bindStatementPool", value));
}
// Autogenerated method: Zenject.Internal.ZenPools.SpawnStatement
Zenject::BindStatement* Zenject::Internal::ZenPools::SpawnStatement() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::BindStatement*>("Zenject.Internal", "ZenPools", "SpawnStatement"));
}
// Autogenerated method: Zenject.Internal.ZenPools.DespawnStatement
void Zenject::Internal::ZenPools::DespawnStatement(Zenject::BindStatement* statement) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Zenject.Internal", "ZenPools", "DespawnStatement", statement));
}
// Autogenerated method: Zenject.Internal.ZenPools.SpawnBindInfo
Zenject::BindInfo* Zenject::Internal::ZenPools::SpawnBindInfo() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::BindInfo*>("Zenject.Internal", "ZenPools", "SpawnBindInfo"));
}
// Autogenerated method: Zenject.Internal.ZenPools.DespawnBindInfo
void Zenject::Internal::ZenPools::DespawnBindInfo(Zenject::BindInfo* bindInfo) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Zenject.Internal", "ZenPools", "DespawnBindInfo", bindInfo));
}
// Autogenerated method: Zenject.Internal.ZenPools.SpawnLookupId
Zenject::Internal::LookupId* Zenject::Internal::ZenPools::SpawnLookupId(Zenject::IProvider* provider, Zenject::BindingId bindingId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::Internal::LookupId*>("Zenject.Internal", "ZenPools", "SpawnLookupId", provider, bindingId));
}
// Autogenerated method: Zenject.Internal.ZenPools.DespawnLookupId
void Zenject::Internal::ZenPools::DespawnLookupId(Zenject::Internal::LookupId* lookupId) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Zenject.Internal", "ZenPools", "DespawnLookupId", lookupId));
}
// Autogenerated method: Zenject.Internal.ZenPools.SpawnInjectContext
Zenject::InjectContext* Zenject::Internal::ZenPools::SpawnInjectContext(Zenject::DiContainer* container, System::Type* memberType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::InjectContext*>("Zenject.Internal", "ZenPools", "SpawnInjectContext", container, memberType));
}
// Autogenerated method: Zenject.Internal.ZenPools.DespawnInjectContext
void Zenject::Internal::ZenPools::DespawnInjectContext(Zenject::InjectContext* context) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Zenject.Internal", "ZenPools", "DespawnInjectContext", context));
}
// Autogenerated method: Zenject.Internal.ZenPools.SpawnInjectContext
Zenject::InjectContext* Zenject::Internal::ZenPools::SpawnInjectContext(Zenject::DiContainer* container, Zenject::InjectableInfo* injectableInfo, Zenject::InjectContext* currentContext, ::CsObject* targetInstance, System::Type* targetType, ::CsObject* concreteIdentifier) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::InjectContext*>("Zenject.Internal", "ZenPools", "SpawnInjectContext", container, injectableInfo, currentContext, targetInstance, targetType, concreteIdentifier));
}
// Autogenerated method: Zenject.Internal.ZenPools..cctor
void Zenject::Internal::ZenPools::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("Zenject.Internal", "ZenPools", ".cctor"));
}
