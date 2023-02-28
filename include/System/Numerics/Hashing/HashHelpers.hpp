// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: System.Numerics.Hashing
namespace System::Numerics::Hashing {
  // Forward declaring type: HashHelpers
  class HashHelpers;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Numerics::Hashing::HashHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::Numerics::Hashing::HashHelpers*, "System.Numerics.Hashing", "HashHelpers");
// Type namespace: System.Numerics.Hashing
namespace System::Numerics::Hashing {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Numerics.Hashing.HashHelpers
  // [TokenAttribute] Offset: FFFFFFFF
  class HashHelpers : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Int32 RandomSeed
    static int _get_RandomSeed();
    // Set static field: static public readonly System.Int32 RandomSeed
    static void _set_RandomSeed(int value);
    // static private System.Void .cctor()
    // Offset: 0x22D61E8
    static void _cctor();
    // static public System.Int32 Combine(System.Int32 h1, System.Int32 h2)
    // Offset: 0x22D61D8
    static int Combine(int h1, int h2);
  }; // System.Numerics.Hashing.HashHelpers
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Numerics::Hashing::HashHelpers::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Numerics::Hashing::HashHelpers::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::Hashing::HashHelpers*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Numerics::Hashing::HashHelpers::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&System::Numerics::Hashing::HashHelpers::Combine)> {
  static const MethodInfo* get() {
    static auto* h1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::Hashing::HashHelpers*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{h1, h2});
  }
};
