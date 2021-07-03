// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.KerningTable
#include "TMPro/KerningTable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: KerningPair
  class KerningPair;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.KerningTable/<>c
  // [CompilerGeneratedAttribute] Offset: DD5974
  class KerningTable::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly TMPro.KerningTable/<>c <>9
    static TMPro::KerningTable::$$c* _get_$$9();
    // Set static field: static public readonly TMPro.KerningTable/<>c <>9
    static void _set_$$9(TMPro::KerningTable::$$c* value);
    // Get static field: static public System.Func`2<TMPro.KerningPair,System.UInt32> <>9__7_0
    static System::Func_2<TMPro::KerningPair*, uint>* _get_$$9__7_0();
    // Set static field: static public System.Func`2<TMPro.KerningPair,System.UInt32> <>9__7_0
    static void _set_$$9__7_0(System::Func_2<TMPro::KerningPair*, uint>* value);
    // Get static field: static public System.Func`2<TMPro.KerningPair,System.UInt32> <>9__7_1
    static System::Func_2<TMPro::KerningPair*, uint>* _get_$$9__7_1();
    // Set static field: static public System.Func`2<TMPro.KerningPair,System.UInt32> <>9__7_1
    static void _set_$$9__7_1(System::Func_2<TMPro::KerningPair*, uint>* value);
    // static private System.Void .cctor()
    // Offset: 0x10E4270
    static void _cctor();
    // System.UInt32 <SortKerningPairs>b__7_0(TMPro.KerningPair s)
    // Offset: 0x10E42DC
    uint $SortKerningPairs$b__7_0(TMPro::KerningPair* s);
    // System.UInt32 <SortKerningPairs>b__7_1(TMPro.KerningPair s)
    // Offset: 0x10E42F4
    uint $SortKerningPairs$b__7_1(TMPro::KerningPair* s);
    // public System.Void .ctor()
    // Offset: 0x10E42D4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KerningTable::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::KerningTable::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KerningTable::$$c*, creationType>()));
    }
  }; // TMPro.KerningTable/<>c
  #pragma pack(pop)
  // Writing MetadataGetter for method: KerningTable::$$c::_cctor
  // Il2CppName: .cctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&KerningTable::$$c::_cctor)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(KerningTable::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: KerningTable::$$c::$SortKerningPairs$b__7_0
  // Il2CppName: <SortKerningPairs>b__7_0
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (KerningTable::$$c::*)(TMPro::KerningPair*)>(&KerningTable::$$c::$SortKerningPairs$b__7_0)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(KerningTable::$$c*), "<SortKerningPairs>b__7_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<TMPro::KerningPair*>()});
    }
  };
  // Writing MetadataGetter for method: KerningTable::$$c::$SortKerningPairs$b__7_1
  // Il2CppName: <SortKerningPairs>b__7_1
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (KerningTable::$$c::*)(TMPro::KerningPair*)>(&KerningTable::$$c::$SortKerningPairs$b__7_1)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(KerningTable::$$c*), "<SortKerningPairs>b__7_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<TMPro::KerningPair*>()});
    }
  };
  // Writing MetadataGetter for method: KerningTable::$$c::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KerningTable::$$c::*)()>(&KerningTable::$$c::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(KerningTable::$$c*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KerningTable::$$c::*)()>(&KerningTable::$$c::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(KerningTable::$$c*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::KerningTable::$$c*, "TMPro", "KerningTable/<>c");
