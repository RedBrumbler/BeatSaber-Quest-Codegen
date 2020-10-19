// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.X509.DigestInfo
#include "Org/BouncyCastle/Asn1/X509/DigestInfo.hpp"
// Including type: Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier
#include "Org/BouncyCastle/Asn1/X509/AlgorithmIdentifier.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Object
#include "Org/BouncyCastle/Asn1/Asn1Object.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Asn1.X509.DigestInfo..ctor
Org::BouncyCastle::Asn1::X509::DigestInfo* Org::BouncyCastle::Asn1::X509::DigestInfo::New_ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID, ::Array<uint8_t>* digest) {
  return THROW_UNLESS(il2cpp_utils::New<DigestInfo*>(algID, digest));
}
// Autogenerated method: Org.BouncyCastle.Asn1.X509.DigestInfo.ToAsn1Object
Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::DigestInfo::ToAsn1Object() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Asn1::Asn1Object*>(this, "ToAsn1Object"));
}