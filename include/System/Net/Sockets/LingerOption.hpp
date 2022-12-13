// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Forward declaring type: LingerOption
  class LingerOption;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Sockets::LingerOption);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::LingerOption*, "System.Net.Sockets", "LingerOption");
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Sockets.LingerOption
  // [TokenAttribute] Offset: FFFFFFFF
  class LingerOption : public ::Il2CppObject {
    public:
    public:
    // private System.Boolean enabled
    // Size: 0x1
    // Offset: 0x10
    bool enabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: enabled and: lingerTime
    char __padding0[0x3] = {};
    // private System.Int32 lingerTime
    // Size: 0x4
    // Offset: 0x14
    int lingerTime;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Boolean enabled
    [[deprecated("Use field access instead!")]] bool& dyn_enabled();
    // Get instance field reference: private System.Int32 lingerTime
    [[deprecated("Use field access instead!")]] int& dyn_lingerTime();
    // public System.Void set_Enabled(System.Boolean value)
    // Offset: 0x1BF5178
    void set_Enabled(bool value);
    // public System.Void set_LingerTime(System.Int32 value)
    // Offset: 0x1BF5184
    void set_LingerTime(int value);
    // public System.Void .ctor(System.Boolean enable, System.Int32 seconds)
    // Offset: 0x1BF5138
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LingerOption* New_ctor(bool enable, int seconds) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Sockets::LingerOption::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LingerOption*, creationType>(enable, seconds)));
    }
  }; // System.Net.Sockets.LingerOption
  #pragma pack(pop)
  static check_size<sizeof(LingerOption), 20 + sizeof(int)> __System_Net_Sockets_LingerOptionSizeCheck;
  static_assert(sizeof(LingerOption) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Sockets::LingerOption::set_Enabled
// Il2CppName: set_Enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::LingerOption::*)(bool)>(&System::Net::Sockets::LingerOption::set_Enabled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::LingerOption*), "set_Enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::LingerOption::set_LingerTime
// Il2CppName: set_LingerTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::LingerOption::*)(int)>(&System::Net::Sockets::LingerOption::set_LingerTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::LingerOption*), "set_LingerTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::LingerOption::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
