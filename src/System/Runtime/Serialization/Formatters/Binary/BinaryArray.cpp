// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.Formatters.Binary.BinaryArray
#include "System/Runtime/Serialization/Formatters/Binary/BinaryArray.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.__BinaryWriter
#include "System/Runtime/Serialization/Formatters/Binary/__BinaryWriter.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.__BinaryParser
#include "System/Runtime/Serialization/Formatters/Binary/__BinaryParser.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.BinaryArray..ctor
System::Runtime::Serialization::Formatters::Binary::BinaryArray* System::Runtime::Serialization::Formatters::Binary::BinaryArray::New_ctor(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) {
  return (BinaryArray*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Serialization.Formatters.Binary", "BinaryArray", binaryHeaderEnum));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.BinaryArray.Set
void System::Runtime::Serialization::Formatters::Binary::BinaryArray::Set(int objectId, int rank, ::Array<int>* lengthA, ::Array<int>* lowerBoundA, System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum, ::CsObject* typeInformation, System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum binaryArrayTypeEnum, int assemId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Set", objectId, rank, lengthA, lowerBoundA, binaryTypeEnum, typeInformation, binaryArrayTypeEnum, assemId));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.BinaryArray.Write
void System::Runtime::Serialization::Formatters::Binary::BinaryArray::Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Write", sout));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.BinaryArray.Read
void System::Runtime::Serialization::Formatters::Binary::BinaryArray::Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Read", input));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.BinaryArray..ctor
System::Runtime::Serialization::Formatters::Binary::BinaryArray* System::Runtime::Serialization::Formatters::Binary::BinaryArray::New_ctor() {
  return (BinaryArray*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Serialization.Formatters.Binary", "BinaryArray"));
}
