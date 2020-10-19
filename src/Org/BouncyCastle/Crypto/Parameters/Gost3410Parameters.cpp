// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters
#include "Org/BouncyCastle/Crypto/Parameters/Gost3410Parameters.hpp"
// Including type: Org.BouncyCastle.Math.BigInteger
#include "Org/BouncyCastle/Math/BigInteger.hpp"
// Including type: Org.BouncyCastle.Crypto.Parameters.Gost3410ValidationParameters
#include "Org/BouncyCastle/Crypto/Parameters/Gost3410ValidationParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters..ctor
Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::New_ctor(Org::BouncyCastle::Math::BigInteger* p, Org::BouncyCastle::Math::BigInteger* q, Org::BouncyCastle::Math::BigInteger* a) {
  return THROW_UNLESS(il2cpp_utils::New<Gost3410Parameters*>(p, q, a));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters..ctor
Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::New_ctor(Org::BouncyCastle::Math::BigInteger* p, Org::BouncyCastle::Math::BigInteger* q, Org::BouncyCastle::Math::BigInteger* a, Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters* validation) {
  return THROW_UNLESS(il2cpp_utils::New<Gost3410Parameters*>(p, q, a, validation));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters.get_P
Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::get_P() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::BigInteger*>(this, "get_P"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters.get_Q
Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::get_Q() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::BigInteger*>(this, "get_Q"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters.get_A
Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::get_A() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::BigInteger*>(this, "get_A"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters.Equals
bool Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::Equals(Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* other) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", other));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters.Equals
bool Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::Equals(::Il2CppObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", obj));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters.GetHashCode
int Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode"));
}