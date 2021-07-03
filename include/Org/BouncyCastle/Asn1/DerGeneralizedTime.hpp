// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Asn1Object
#include "Org/BouncyCastle/Asn1/Asn1Object.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerOutputStream
  class DerOutputStream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.DerGeneralizedTime
  class DerGeneralizedTime : public Org::BouncyCastle::Asn1::Asn1Object {
    public:
    // private readonly System.String time
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* time;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: DerGeneralizedTime
    DerGeneralizedTime(::Il2CppString* time_ = {}) noexcept : time{time_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return time;
    }
    // static public Org.BouncyCastle.Asn1.DerGeneralizedTime GetInstance(System.Object obj)
    // Offset: 0x17006B4
    static Org::BouncyCastle::Asn1::DerGeneralizedTime* GetInstance(::Il2CppObject* obj);
    // System.Void .ctor(System.Byte[] bytes)
    // Offset: 0x16F36F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerGeneralizedTime* New_ctor(::Array<uint8_t>* bytes) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerGeneralizedTime::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerGeneralizedTime*, creationType>(bytes)));
    }
    // public System.String GetTime()
    // Offset: 0x17007C0
    ::Il2CppString* GetTime();
    // private System.String CalculateGmtOffset()
    // Offset: 0x1700AC8
    ::Il2CppString* CalculateGmtOffset();
    // static private System.String Convert(System.Int32 time)
    // Offset: 0x1700FA4
    static ::Il2CppString* Convert(int time);
    // public System.DateTime ToDateTime()
    // Offset: 0x1700D5C
    System::DateTime ToDateTime();
    // private System.String FString(System.Int32 count)
    // Offset: 0x170106C
    ::Il2CppString* FString(int count);
    // private System.DateTime ParseDateString(System.String s, System.String format, System.Boolean makeUniversal)
    // Offset: 0x1701108
    System::DateTime ParseDateString(::Il2CppString* s, ::Il2CppString* format, bool makeUniversal);
    // private System.Boolean get_HasFractionalSeconds()
    // Offset: 0x170103C
    bool get_HasFractionalSeconds();
    // private System.Byte[] GetOctets()
    // Offset: 0x1701328
    ::Array<uint8_t>* GetOctets();
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x1701334
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Void Asn1Object::Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut);
    // protected override System.Boolean Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    // Offset: 0x1701370
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Boolean Asn1Object::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object* asn1Object);
    // protected override System.Int32 Asn1GetHashCode()
    // Offset: 0x1701424
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Int32 Asn1Object::Asn1GetHashCode()
    int Asn1GetHashCode();
  }; // Org.BouncyCastle.Asn1.DerGeneralizedTime
  #pragma pack(pop)
  static check_size<sizeof(DerGeneralizedTime), 16 + sizeof(::Il2CppString*)> __Org_BouncyCastle_Asn1_DerGeneralizedTimeSizeCheck;
  static_assert(sizeof(DerGeneralizedTime) == 0x18);
  // Writing MetadataGetter for method: DerGeneralizedTime::GetInstance
  // Il2CppName: GetInstance
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerGeneralizedTime* (*)(::Il2CppObject*)>(&DerGeneralizedTime::GetInstance)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(DerGeneralizedTime*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
    }
  };
  // Writing MetadataGetter for method: DerGeneralizedTime::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DerGeneralizedTime::*)(::Array<uint8_t>*)>(&DerGeneralizedTime::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(DerGeneralizedTime*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DerGeneralizedTime::*)(::Array<uint8_t>*)>(&DerGeneralizedTime::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(DerGeneralizedTime*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>()});
    }
  };
  // Writing MetadataGetter for method: DerGeneralizedTime::GetTime
  // Il2CppName: GetTime
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (DerGeneralizedTime::*)()>(&DerGeneralizedTime::GetTime)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(DerGeneralizedTime*), "GetTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: DerGeneralizedTime::CalculateGmtOffset
  // Il2CppName: CalculateGmtOffset
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (DerGeneralizedTime::*)()>(&DerGeneralizedTime::CalculateGmtOffset)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(DerGeneralizedTime*), "CalculateGmtOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: DerGeneralizedTime::Convert
  // Il2CppName: Convert
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(int)>(&DerGeneralizedTime::Convert)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(DerGeneralizedTime*), "Convert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: DerGeneralizedTime::ToDateTime
  // Il2CppName: ToDateTime
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (DerGeneralizedTime::*)()>(&DerGeneralizedTime::ToDateTime)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(DerGeneralizedTime*), "ToDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: DerGeneralizedTime::FString
  // Il2CppName: FString
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (DerGeneralizedTime::*)(int)>(&DerGeneralizedTime::FString)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(DerGeneralizedTime*), "FString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: DerGeneralizedTime::ParseDateString
  // Il2CppName: ParseDateString
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (DerGeneralizedTime::*)(::Il2CppString*, ::Il2CppString*, bool)>(&DerGeneralizedTime::ParseDateString)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(DerGeneralizedTime*), "ParseDateString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
    }
  };
  // Writing MetadataGetter for method: DerGeneralizedTime::get_HasFractionalSeconds
  // Il2CppName: get_HasFractionalSeconds
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DerGeneralizedTime::*)()>(&DerGeneralizedTime::get_HasFractionalSeconds)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(DerGeneralizedTime*), "get_HasFractionalSeconds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: DerGeneralizedTime::GetOctets
  // Il2CppName: GetOctets
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (DerGeneralizedTime::*)()>(&DerGeneralizedTime::GetOctets)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(DerGeneralizedTime*), "GetOctets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: DerGeneralizedTime::Encode
  // Il2CppName: Encode
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DerGeneralizedTime::*)(Org::BouncyCastle::Asn1::DerOutputStream*)>(&DerGeneralizedTime::Encode)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(DerGeneralizedTime*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Asn1::DerOutputStream*>()});
    }
  };
  // Writing MetadataGetter for method: DerGeneralizedTime::Asn1Equals
  // Il2CppName: Asn1Equals
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DerGeneralizedTime::*)(Org::BouncyCastle::Asn1::Asn1Object*)>(&DerGeneralizedTime::Asn1Equals)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(DerGeneralizedTime*), "Asn1Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Asn1::Asn1Object*>()});
    }
  };
  // Writing MetadataGetter for method: DerGeneralizedTime::Asn1GetHashCode
  // Il2CppName: Asn1GetHashCode
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (DerGeneralizedTime::*)()>(&DerGeneralizedTime::Asn1GetHashCode)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(DerGeneralizedTime*), "Asn1GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerGeneralizedTime*, "Org.BouncyCastle.Asn1", "DerGeneralizedTime");
