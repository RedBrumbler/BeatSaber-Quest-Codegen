// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Globalization.Unicode.ContractionComparer
#include "Mono/Globalization/Unicode/ContractionComparer.hpp"
// Including type: Mono.Globalization.Unicode.Contraction
#include "Mono/Globalization/Unicode/Contraction.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly Mono.Globalization.Unicode.ContractionComparer Instance
Mono::Globalization::Unicode::ContractionComparer* Mono::Globalization::Unicode::ContractionComparer::_get_Instance() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<Mono::Globalization::Unicode::ContractionComparer*>("Mono.Globalization.Unicode", "ContractionComparer", "Instance"));
}
// Autogenerated static field setter
// Set static field: static public readonly Mono.Globalization.Unicode.ContractionComparer Instance
void Mono::Globalization::Unicode::ContractionComparer::_set_Instance(Mono::Globalization::Unicode::ContractionComparer* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Mono.Globalization.Unicode", "ContractionComparer", "Instance", value));
}
// Autogenerated method: Mono.Globalization.Unicode.ContractionComparer..cctor
void Mono::Globalization::Unicode::ContractionComparer::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("Mono.Globalization.Unicode", "ContractionComparer", ".cctor"));
}
// Autogenerated method: Mono.Globalization.Unicode.ContractionComparer.Compare
int Mono::Globalization::Unicode::ContractionComparer::Compare(Mono::Globalization::Unicode::Contraction* c1, Mono::Globalization::Unicode::Contraction* c2) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Compare", c1, c2));
}
// Autogenerated method: Mono.Globalization.Unicode.ContractionComparer..ctor
Mono::Globalization::Unicode::ContractionComparer* Mono::Globalization::Unicode::ContractionComparer::New_ctor() {
  return (ContractionComparer*)THROW_UNLESS(il2cpp_utils::New("Mono.Globalization.Unicode", "ContractionComparer"));
}