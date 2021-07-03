// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: IAsn1Convertible
  class IAsn1Convertible;
  // Forward declaring type: Asn1Object
  class Asn1Object;
  // Forward declaring type: Asn1EncodableVector
  class Asn1EncodableVector;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Asn1StreamParser
  class Asn1StreamParser : public ::Il2CppObject {
    public:
    // private readonly System.IO.Stream _in
    // Size: 0x8
    // Offset: 0x10
    System::IO::Stream* in;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // private readonly System.Int32 _limit
    // Size: 0x4
    // Offset: 0x18
    int limit;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: limit and: tmpBuffers
    char __padding1[0x4] = {};
    // private readonly System.Byte[][] tmpBuffers
    // Size: 0x8
    // Offset: 0x20
    ::Array<::Array<uint8_t>*>* tmpBuffers;
    // Field size check
    static_assert(sizeof(::Array<::Array<uint8_t>*>*) == 0x8);
    // Creating value type constructor for type: Asn1StreamParser
    Asn1StreamParser(System::IO::Stream* in_ = {}, int limit_ = {}, ::Array<::Array<uint8_t>*>* tmpBuffers_ = {}) noexcept : in{in_}, limit{limit_}, tmpBuffers{tmpBuffers_} {}
    // public System.Void .ctor(System.IO.Stream inStream)
    // Offset: 0x16F0D1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Asn1StreamParser* New_ctor(System::IO::Stream* inStream) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Asn1StreamParser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Asn1StreamParser*, creationType>(inStream)));
    }
    // public System.Void .ctor(System.IO.Stream inStream, System.Int32 limit)
    // Offset: 0x16F2240
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Asn1StreamParser* New_ctor(System::IO::Stream* inStream, int limit) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Asn1StreamParser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Asn1StreamParser*, creationType>(inStream, limit)));
    }
    // Org.BouncyCastle.Asn1.IAsn1Convertible ReadIndef(System.Int32 tagValue)
    // Offset: 0x16F62F0
    Org::BouncyCastle::Asn1::IAsn1Convertible* ReadIndef(int tagValue);
    // Org.BouncyCastle.Asn1.Asn1Object ReadTaggedObject(System.Boolean constructed, System.Int32 tag)
    // Offset: 0x16F0D50
    Org::BouncyCastle::Asn1::Asn1Object* ReadTaggedObject(bool constructed, int tag);
    // public Org.BouncyCastle.Asn1.IAsn1Convertible ReadObject()
    // Offset: 0x16F6600
    Org::BouncyCastle::Asn1::IAsn1Convertible* ReadObject();
    // private System.Void Set00Check(System.Boolean enabled)
    // Offset: 0x16F6B54
    void Set00Check(bool enabled);
    // Org.BouncyCastle.Asn1.Asn1EncodableVector ReadVector()
    // Offset: 0x16F6434
    Org::BouncyCastle::Asn1::Asn1EncodableVector* ReadVector();
  }; // Org.BouncyCastle.Asn1.Asn1StreamParser
  #pragma pack(pop)
  static check_size<sizeof(Asn1StreamParser), 32 + sizeof(::Array<::Array<uint8_t>*>*)> __Org_BouncyCastle_Asn1_Asn1StreamParserSizeCheck;
  static_assert(sizeof(Asn1StreamParser) == 0x28);
  // Writing MetadataGetter for method: Asn1StreamParser::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Asn1StreamParser::*)(System::IO::Stream*)>(&Asn1StreamParser::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Asn1StreamParser*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IO::Stream*>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Asn1StreamParser::*)(System::IO::Stream*)>(&Asn1StreamParser::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Asn1StreamParser*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IO::Stream*>()});
    }
  };
  // Writing MetadataGetter for method: Asn1StreamParser::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Asn1StreamParser::*)(System::IO::Stream*, int)>(&Asn1StreamParser::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Asn1StreamParser*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IO::Stream*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Asn1StreamParser::*)(System::IO::Stream*, int)>(&Asn1StreamParser::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Asn1StreamParser*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IO::Stream*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: Asn1StreamParser::ReadIndef
  // Il2CppName: ReadIndef
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::IAsn1Convertible* (Asn1StreamParser::*)(int)>(&Asn1StreamParser::ReadIndef)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Asn1StreamParser*), "ReadIndef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: Asn1StreamParser::ReadTaggedObject
  // Il2CppName: ReadTaggedObject
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Asn1StreamParser::*)(bool, int)>(&Asn1StreamParser::ReadTaggedObject)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Asn1StreamParser*), "ReadTaggedObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: Asn1StreamParser::ReadObject
  // Il2CppName: ReadObject
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::IAsn1Convertible* (Asn1StreamParser::*)()>(&Asn1StreamParser::ReadObject)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Asn1StreamParser*), "ReadObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Asn1StreamParser::Set00Check
  // Il2CppName: Set00Check
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Asn1StreamParser::*)(bool)>(&Asn1StreamParser::Set00Check)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Asn1StreamParser*), "Set00Check", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
    }
  };
  // Writing MetadataGetter for method: Asn1StreamParser::ReadVector
  // Il2CppName: ReadVector
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1EncodableVector* (Asn1StreamParser::*)()>(&Asn1StreamParser::ReadVector)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Asn1StreamParser*), "ReadVector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Asn1StreamParser*, "Org.BouncyCastle.Asn1", "Asn1StreamParser");
