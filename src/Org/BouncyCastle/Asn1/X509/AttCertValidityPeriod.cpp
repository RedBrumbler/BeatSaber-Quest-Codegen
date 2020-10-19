// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.X509.AttCertValidityPeriod
#include "Org/BouncyCastle/Asn1/X509/AttCertValidityPeriod.hpp"
// Including type: Org.BouncyCastle.Asn1.DerGeneralizedTime
#include "Org/BouncyCastle/Asn1/DerGeneralizedTime.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Sequence
#include "Org/BouncyCastle/Asn1/Asn1Sequence.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Object
#include "Org/BouncyCastle/Asn1/Asn1Object.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Asn1.X509.AttCertValidityPeriod.GetInstance
Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod* Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod::GetInstance(::Il2CppObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod*>("Org.BouncyCastle.Asn1.X509", "AttCertValidityPeriod", "GetInstance", obj));
}
// Autogenerated method: Org.BouncyCastle.Asn1.X509.AttCertValidityPeriod..ctor
Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod* Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod::New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(il2cpp_utils::New<AttCertValidityPeriod*>(seq));
}
// Autogenerated method: Org.BouncyCastle.Asn1.X509.AttCertValidityPeriod.get_NotBeforeTime
Org::BouncyCastle::Asn1::DerGeneralizedTime* Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod::get_NotBeforeTime() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Asn1::DerGeneralizedTime*>(this, "get_NotBeforeTime"));
}
// Autogenerated method: Org.BouncyCastle.Asn1.X509.AttCertValidityPeriod.get_NotAfterTime
Org::BouncyCastle::Asn1::DerGeneralizedTime* Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod::get_NotAfterTime() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Asn1::DerGeneralizedTime*>(this, "get_NotAfterTime"));
}
// Autogenerated method: Org.BouncyCastle.Asn1.X509.AttCertValidityPeriod.ToAsn1Object
Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod::ToAsn1Object() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Asn1::Asn1Object*>(this, "ToAsn1Object"));
}