// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.Extents
#include "TMPro/Extents.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: TMPro.Extents..ctor
TMPro::Extents* TMPro::Extents::New_ctor(UnityEngine::Vector2 min, UnityEngine::Vector2 max) {
  return (Extents*)THROW_UNLESS(il2cpp_utils::New("TMPro", "Extents", min, max));
}
// Autogenerated method: TMPro.Extents.ToString
::Il2CppString* TMPro::Extents::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(*this, "ToString"));
}