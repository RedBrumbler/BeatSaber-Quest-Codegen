// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BloomPrePassLight/LightsDataItem
#include "GlobalNamespace/BloomPrePassLight_LightsDataItem.hpp"
// Including type: BloomPrePassLightTypeSO
#include "GlobalNamespace/BloomPrePassLightTypeSO.hpp"
// Including type: System.Collections.Generic.HashSet`1
#include "System/Collections/Generic/HashSet_1.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: BloomPrePassLight/LightsDataItem..ctor
GlobalNamespace::BloomPrePassLight::LightsDataItem* GlobalNamespace::BloomPrePassLight::LightsDataItem::New_ctor(GlobalNamespace::BloomPrePassLightTypeSO* lightType, System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight*>* lights) {
  return (BloomPrePassLight::LightsDataItem*)THROW_UNLESS(il2cpp_utils::New("", "BloomPrePassLight/LightsDataItem", lightType, lights));
}