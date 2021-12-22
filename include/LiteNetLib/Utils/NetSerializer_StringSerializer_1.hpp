// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.Utils.NetSerializer
#include "LiteNetLib/Utils/NetSerializer.hpp"
// Including type: LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.FastCallSpecific`2
#include "LiteNetLib/Utils/NetSerializer_FastCallSpecific_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::NetSerializer::StringSerializer_1, "LiteNetLib.Utils", "NetSerializer/StringSerializer`1");
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // WARNING Size may be invalid!
  // Autogenerated type: LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.StringSerializer`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class NetSerializer::StringSerializer_1 : public LiteNetLib::Utils::NetSerializer::FastCallSpecific_2<T, ::Il2CppString*> {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly System.Int32 _maxLength
    // Size: 0x4
    // Offset: 0x0
    int maxLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Int32 _maxLength
    int& dyn__maxLength() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::StringSerializer_1::dyn__maxLength");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_maxLength"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.Int32 maxLength)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetSerializer::StringSerializer_1<T>* New_ctor(int maxLength) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::StringSerializer_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetSerializer::StringSerializer_1<T>*, creationType>(maxLength)));
    }
    // public override System.Void Read(T inf, LiteNetLib.Utils.NetDataReader r)
    // Offset: 0xFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.FastCall`1
    // Base method: System.Void FastCall_1::Read(T inf, LiteNetLib.Utils.NetDataReader r)
    void Read(T inf, LiteNetLib::Utils::NetDataReader* r) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::StringSerializer_1::Read");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Read", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(inf), ::il2cpp_utils::ExtractType(r)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, inf, r);
    }
    // public override System.Void Write(T inf, LiteNetLib.Utils.NetDataWriter w)
    // Offset: 0xFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.FastCall`1
    // Base method: System.Void FastCall_1::Write(T inf, LiteNetLib.Utils.NetDataWriter w)
    void Write(T inf, LiteNetLib::Utils::NetDataWriter* w) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::StringSerializer_1::Write");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Write", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(inf), ::il2cpp_utils::ExtractType(w)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, inf, w);
    }
    // public override System.Void ReadArray(T inf, LiteNetLib.Utils.NetDataReader r)
    // Offset: 0xFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.FastCall`1
    // Base method: System.Void FastCall_1::ReadArray(T inf, LiteNetLib.Utils.NetDataReader r)
    void ReadArray(T inf, LiteNetLib::Utils::NetDataReader* r) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::StringSerializer_1::ReadArray");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ReadArray", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(inf), ::il2cpp_utils::ExtractType(r)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, inf, r);
    }
    // public override System.Void WriteArray(T inf, LiteNetLib.Utils.NetDataWriter w)
    // Offset: 0xFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.FastCall`1
    // Base method: System.Void FastCall_1::WriteArray(T inf, LiteNetLib.Utils.NetDataWriter w)
    void WriteArray(T inf, LiteNetLib::Utils::NetDataWriter* w) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::StringSerializer_1::WriteArray");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "WriteArray", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(inf), ::il2cpp_utils::ExtractType(w)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, inf, w);
    }
  }; // LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.StringSerializer`1
  // Could not write size check! Type: LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.StringSerializer`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
