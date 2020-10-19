// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier
#include "Org/BouncyCastle/Asn1/X509/AlgorithmIdentifier.hpp"
// Including type: Org.BouncyCastle.Asn1.DerObjectIdentifier
#include "Org/BouncyCastle/Asn1/DerObjectIdentifier.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1TaggedObject
#include "Org/BouncyCastle/Asn1/Asn1TaggedObject.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Sequence
#include "Org/BouncyCastle/Asn1/Asn1Sequence.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Object
#include "Org/BouncyCastle/Asn1/Asn1Object.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier.GetInstance
Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier::GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>("Org.BouncyCastle.Asn1.X509", "AlgorithmIdentifier", "GetInstance", obj, explicitly));
}
// Autogenerated method: Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier.GetInstance
Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier::GetInstance(::Il2CppObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>("Org.BouncyCastle.Asn1.X509", "AlgorithmIdentifier", "GetInstance", obj));
}
// Autogenerated method: Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier..ctor
Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier::New_ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm, Org::BouncyCastle::Asn1::Asn1Encodable* parameters) {
  return THROW_UNLESS(il2cpp_utils::New<AlgorithmIdentifier*>(algorithm, parameters));
}
// Autogenerated method: Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier..ctor
Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier::New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(il2cpp_utils::New<AlgorithmIdentifier*>(seq));
}
// Autogenerated method: Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier.get_Algorithm
Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier::get_Algorithm() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Asn1::DerObjectIdentifier*>(this, "get_Algorithm"));
}
// Autogenerated method: Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier.get_Parameters
Org::BouncyCastle::Asn1::Asn1Encodable* Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier::get_Parameters() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Asn1::Asn1Encodable*>(this, "get_Parameters"));
}
// Autogenerated method: Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier.ToAsn1Object
Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier::ToAsn1Object() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Asn1::Asn1Object*>(this, "ToAsn1Object"));
}