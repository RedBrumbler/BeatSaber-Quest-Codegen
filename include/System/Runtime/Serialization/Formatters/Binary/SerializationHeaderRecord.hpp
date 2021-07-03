// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum
#include "System/Runtime/Serialization/Formatters/Binary/BinaryHeaderEnum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: __BinaryWriter
  class __BinaryWriter;
  // Forward declaring type: __BinaryParser
  class __BinaryParser;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.SerializationHeaderRecord
  class SerializationHeaderRecord : public ::Il2CppObject {
    public:
    // System.Int32 binaryFormatterMajorVersion
    // Size: 0x4
    // Offset: 0x10
    int binaryFormatterMajorVersion;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 binaryFormatterMinorVersion
    // Size: 0x4
    // Offset: 0x14
    int binaryFormatterMinorVersion;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum
    // Size: 0x4
    // Offset: 0x18
    System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum) == 0x4);
    // System.Int32 topId
    // Size: 0x4
    // Offset: 0x1C
    int topId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 headerId
    // Size: 0x4
    // Offset: 0x20
    int headerId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 majorVersion
    // Size: 0x4
    // Offset: 0x24
    int majorVersion;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 minorVersion
    // Size: 0x4
    // Offset: 0x28
    int minorVersion;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SerializationHeaderRecord
    SerializationHeaderRecord(int binaryFormatterMajorVersion_ = {}, int binaryFormatterMinorVersion_ = {}, System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum_ = {}, int topId_ = {}, int headerId_ = {}, int majorVersion_ = {}, int minorVersion_ = {}) noexcept : binaryFormatterMajorVersion{binaryFormatterMajorVersion_}, binaryFormatterMinorVersion{binaryFormatterMinorVersion_}, binaryHeaderEnum{binaryHeaderEnum_}, topId{topId_}, headerId{headerId_}, majorVersion{majorVersion_}, minorVersion{minorVersion_} {}
    // System.Void .ctor(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum, System.Int32 topId, System.Int32 headerId, System.Int32 majorVersion, System.Int32 minorVersion)
    // Offset: 0x1614B70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerializationHeaderRecord* New_ctor(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum, int topId, int headerId, int majorVersion, int minorVersion) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerializationHeaderRecord*, creationType>(binaryHeaderEnum, topId, headerId, majorVersion, minorVersion)));
    }
    // public System.Void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0x1614BCC
    void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // static private System.Int32 GetInt32(System.Byte[] buffer, System.Int32 index)
    // Offset: 0x1614C48
    static int GetInt32(::Array<uint8_t>* buffer, int index);
    // public System.Void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
    // Offset: 0x1614CC8
    void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);
    // public System.Void Dump()
    // Offset: 0x1614EA4
    void Dump();
    // System.Void .ctor()
    // Offset: 0x1614B60
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerializationHeaderRecord* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerializationHeaderRecord*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.SerializationHeaderRecord
  #pragma pack(pop)
  static check_size<sizeof(SerializationHeaderRecord), 40 + sizeof(int)> __System_Runtime_Serialization_Formatters_Binary_SerializationHeaderRecordSizeCheck;
  static_assert(sizeof(SerializationHeaderRecord) == 0x2C);
  // Writing MetadataGetter for method: SerializationHeaderRecord::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SerializationHeaderRecord::*)(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum, int, int, int, int)>(&SerializationHeaderRecord::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationHeaderRecord*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SerializationHeaderRecord::*)(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum, int, int, int, int)>(&SerializationHeaderRecord::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationHeaderRecord*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: SerializationHeaderRecord::Write
  // Il2CppName: Write
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SerializationHeaderRecord::*)(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*)>(&SerializationHeaderRecord::Write)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationHeaderRecord*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>()});
    }
  };
  // Writing MetadataGetter for method: SerializationHeaderRecord::GetInt32
  // Il2CppName: GetInt32
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Array<uint8_t>*, int)>(&SerializationHeaderRecord::GetInt32)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationHeaderRecord*), "GetInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: SerializationHeaderRecord::Read
  // Il2CppName: Read
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SerializationHeaderRecord::*)(System::Runtime::Serialization::Formatters::Binary::__BinaryParser*)>(&SerializationHeaderRecord::Read)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationHeaderRecord*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>()});
    }
  };
  // Writing MetadataGetter for method: SerializationHeaderRecord::Dump
  // Il2CppName: Dump
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SerializationHeaderRecord::*)()>(&SerializationHeaderRecord::Dump)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationHeaderRecord*), "Dump", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SerializationHeaderRecord::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SerializationHeaderRecord::*)()>(&SerializationHeaderRecord::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationHeaderRecord*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SerializationHeaderRecord::*)()>(&SerializationHeaderRecord::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SerializationHeaderRecord*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*, "System.Runtime.Serialization.Formatters.Binary", "SerializationHeaderRecord");
