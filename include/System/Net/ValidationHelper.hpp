// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: ValidationHelper
  class ValidationHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::ValidationHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ValidationHelper*, "System.Net", "ValidationHelper");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.ValidationHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class ValidationHelper : public ::Il2CppObject {
    public:
    // Get static field: static public System.String[] EmptyArray
    static ::ArrayW<::StringW> _get_EmptyArray();
    // Set static field: static public System.String[] EmptyArray
    static void _set_EmptyArray(::ArrayW<::StringW> value);
    // Get static field: static readonly System.Char[] InvalidMethodChars
    static ::ArrayW<::Il2CppChar> _get_InvalidMethodChars();
    // Set static field: static readonly System.Char[] InvalidMethodChars
    static void _set_InvalidMethodChars(::ArrayW<::Il2CppChar> value);
    // Get static field: static readonly System.Char[] InvalidParamChars
    static ::ArrayW<::Il2CppChar> _get_InvalidParamChars();
    // Set static field: static readonly System.Char[] InvalidParamChars
    static void _set_InvalidParamChars(::ArrayW<::Il2CppChar> value);
    // static private System.Void .cctor()
    // Offset: 0x1BCDD20
    static void _cctor();
    // static public System.String MakeStringNull(System.String stringValue)
    // Offset: 0x1BCDCF0
    static ::StringW MakeStringNull(::StringW stringValue);
    // static public System.Boolean IsBlankString(System.String stringValue)
    // Offset: 0x1BCDD04
    static bool IsBlankString(::StringW stringValue);
    // static public System.Boolean ValidateTcpPort(System.Int32 port)
    // Offset: 0x1BCB884
    static bool ValidateTcpPort(int port);
  }; // System.Net.ValidationHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::ValidationHelper::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::ValidationHelper::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ValidationHelper*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ValidationHelper::MakeStringNull
// Il2CppName: MakeStringNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::Net::ValidationHelper::MakeStringNull)> {
  static const MethodInfo* get() {
    static auto* stringValue = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ValidationHelper*), "MakeStringNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stringValue});
  }
};
// Writing MetadataGetter for method: System::Net::ValidationHelper::IsBlankString
// Il2CppName: IsBlankString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&System::Net::ValidationHelper::IsBlankString)> {
  static const MethodInfo* get() {
    static auto* stringValue = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ValidationHelper*), "IsBlankString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stringValue});
  }
};
// Writing MetadataGetter for method: System::Net::ValidationHelper::ValidateTcpPort
// Il2CppName: ValidateTcpPort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&System::Net::ValidationHelper::ValidateTcpPort)> {
  static const MethodInfo* get() {
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ValidationHelper*), "ValidateTcpPort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{port});
  }
};
