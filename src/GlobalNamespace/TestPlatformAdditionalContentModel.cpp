// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TestPlatformAdditionalContentModel
#include "GlobalNamespace/TestPlatformAdditionalContentModel.hpp"
// Including type: TestPlatformAdditionalContentModel/Entitlement
#include "GlobalNamespace/TestPlatformAdditionalContentModel_Entitlement.hpp"
// Including type: TestPlatformAdditionalContentModel/<GetLevelEntitlementStatusInternalAsync>d__5
#include "GlobalNamespace/TestPlatformAdditionalContentModel_-GetLevelEntitlementStatusInternalAsync-d__5.hpp"
// Including type: TestPlatformAdditionalContentModel/<GetPackEntitlementStatusInternalAsync>d__6
#include "GlobalNamespace/TestPlatformAdditionalContentModel_-GetPackEntitlementStatusInternalAsync-d__6.hpp"
// Including type: TestPlatformAdditionalContentModel/<IsPackBetterBuyThanLevelAsync>d__7
#include "GlobalNamespace/TestPlatformAdditionalContentModel_-IsPackBetterBuyThanLevelAsync-d__7.hpp"
// Including type: TestPlatformAdditionalContentModel/<OpenLevelProductStoreAsync>d__8
#include "GlobalNamespace/TestPlatformAdditionalContentModel_-OpenLevelProductStoreAsync-d__8.hpp"
// Including type: TestPlatformAdditionalContentModel/<OpenLevelPackProductStoreAsync>d__10
#include "GlobalNamespace/TestPlatformAdditionalContentModel_-OpenLevelPackProductStoreAsync-d__10.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: TestPlatformAdditionalContentModel.BuyLevel
void GlobalNamespace::TestPlatformAdditionalContentModel::BuyLevel(::CsString* levelId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "BuyLevel", levelId));
}
// Autogenerated method: TestPlatformAdditionalContentModel.InvalidateDataInternal
void GlobalNamespace::TestPlatformAdditionalContentModel::InvalidateDataInternal() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvalidateDataInternal"));
}
// Autogenerated method: TestPlatformAdditionalContentModel.GetLevelEntitlementStatusInternalAsync
System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>* GlobalNamespace::TestPlatformAdditionalContentModel::GetLevelEntitlementStatusInternalAsync(::CsString* levelId, System::Threading::CancellationToken token) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>*>(this, "GetLevelEntitlementStatusInternalAsync", levelId, token));
}
// Autogenerated method: TestPlatformAdditionalContentModel.GetPackEntitlementStatusInternalAsync
System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>* GlobalNamespace::TestPlatformAdditionalContentModel::GetPackEntitlementStatusInternalAsync(::CsString* levelPackId, System::Threading::CancellationToken token) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>*>(this, "GetPackEntitlementStatusInternalAsync", levelPackId, token));
}
// Autogenerated method: TestPlatformAdditionalContentModel.IsPackBetterBuyThanLevelAsync
System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::IsPackBetterBuyThanLevelResult>* GlobalNamespace::TestPlatformAdditionalContentModel::IsPackBetterBuyThanLevelAsync(::CsString* levelPackId, System::Threading::CancellationToken token) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::IsPackBetterBuyThanLevelResult>*>(this, "IsPackBetterBuyThanLevelAsync", levelPackId, token));
}
// Autogenerated method: TestPlatformAdditionalContentModel.OpenLevelProductStoreAsync
System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::OpenProductStoreResult>* GlobalNamespace::TestPlatformAdditionalContentModel::OpenLevelProductStoreAsync(::CsString* levelId, System::Threading::CancellationToken token) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::OpenProductStoreResult>*>(this, "OpenLevelProductStoreAsync", levelId, token));
}
// Autogenerated method: TestPlatformAdditionalContentModel.OpenLevelPackProductStoreAsync
System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::OpenProductStoreResult>* GlobalNamespace::TestPlatformAdditionalContentModel::OpenLevelPackProductStoreAsync(::CsString* levelPackId, System::Threading::CancellationToken token) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::OpenProductStoreResult>*>(this, "OpenLevelPackProductStoreAsync", levelPackId, token));
}
// Autogenerated method: TestPlatformAdditionalContentModel..ctor
GlobalNamespace::TestPlatformAdditionalContentModel* GlobalNamespace::TestPlatformAdditionalContentModel::New_ctor() {
  return (TestPlatformAdditionalContentModel*)THROW_UNLESS(il2cpp_utils::New("", "TestPlatformAdditionalContentModel"));
}
