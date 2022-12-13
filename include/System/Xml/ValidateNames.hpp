// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlCharType
#include "System/Xml/XmlCharType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: ValidateNames
  class ValidateNames;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::ValidateNames);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::ValidateNames*, "System.Xml", "ValidateNames");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.ValidateNames
  // [TokenAttribute] Offset: FFFFFFFF
  class ValidateNames : public ::Il2CppObject {
    public:
    // Get static field: static private System.Xml.XmlCharType xmlCharType
    static ::System::Xml::XmlCharType _get_xmlCharType();
    // Set static field: static private System.Xml.XmlCharType xmlCharType
    static void _set_xmlCharType(::System::Xml::XmlCharType value);
    // static private System.Void .cctor()
    // Offset: 0x1C552A8
    static void _cctor();
    // static System.Int32 ParseNmtoken(System.String s, System.Int32 offset)
    // Offset: 0x1C54720
    static int ParseNmtoken(::StringW s, int offset);
    // static System.Int32 ParseNmtokenNoNamespaces(System.String s, System.Int32 offset)
    // Offset: 0x1C5480C
    static int ParseNmtokenNoNamespaces(::StringW s, int offset);
    // static System.Int32 ParseNameNoNamespaces(System.String s, System.Int32 offset)
    // Offset: 0x1C54914
    static int ParseNameNoNamespaces(::StringW s, int offset);
    // static System.Int32 ParseNCName(System.String s, System.Int32 offset)
    // Offset: 0x1C54A9C
    static int ParseNCName(::StringW s, int offset);
    // static System.Int32 ParseNCName(System.String s)
    // Offset: 0x1C54BE8
    static int ParseNCName(::StringW s);
    // static System.Int32 ParseQName(System.String s, System.Int32 offset, out System.Int32 colonOffset)
    // Offset: 0x1C54C50
    static int ParseQName(::StringW s, int offset, ByRef<int> colonOffset);
    // static System.Void ParseQNameThrow(System.String s, out System.String prefix, out System.String localName)
    // Offset: 0x1C54D4C
    static void ParseQNameThrow(::StringW s, ByRef<::StringW> prefix, ByRef<::StringW> localName);
    // static System.Void ThrowInvalidName(System.String s, System.Int32 offsetStartChar, System.Int32 offsetBadChar)
    // Offset: 0x1C54E68
    static void ThrowInvalidName(::StringW s, int offsetStartChar, int offsetBadChar);
    // static System.Exception GetInvalidNameException(System.String s, System.Int32 offsetStartChar, System.Int32 offsetBadChar)
    // Offset: 0x1C550FC
    static ::System::Exception* GetInvalidNameException(::StringW s, int offsetStartChar, int offsetBadChar);
  }; // System.Xml.ValidateNames
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::ValidateNames::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Xml::ValidateNames::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::ValidateNames*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::ValidateNames::ParseNmtoken
// Il2CppName: ParseNmtoken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW, int)>(&System::Xml::ValidateNames::ParseNmtoken)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::ValidateNames*), "ParseNmtoken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, offset});
  }
};
// Writing MetadataGetter for method: System::Xml::ValidateNames::ParseNmtokenNoNamespaces
// Il2CppName: ParseNmtokenNoNamespaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW, int)>(&System::Xml::ValidateNames::ParseNmtokenNoNamespaces)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::ValidateNames*), "ParseNmtokenNoNamespaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, offset});
  }
};
// Writing MetadataGetter for method: System::Xml::ValidateNames::ParseNameNoNamespaces
// Il2CppName: ParseNameNoNamespaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW, int)>(&System::Xml::ValidateNames::ParseNameNoNamespaces)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::ValidateNames*), "ParseNameNoNamespaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, offset});
  }
};
// Writing MetadataGetter for method: System::Xml::ValidateNames::ParseNCName
// Il2CppName: ParseNCName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW, int)>(&System::Xml::ValidateNames::ParseNCName)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::ValidateNames*), "ParseNCName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, offset});
  }
};
// Writing MetadataGetter for method: System::Xml::ValidateNames::ParseNCName
// Il2CppName: ParseNCName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW)>(&System::Xml::ValidateNames::ParseNCName)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::ValidateNames*), "ParseNCName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Xml::ValidateNames::ParseQName
// Il2CppName: ParseQName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW, int, ByRef<int>)>(&System::Xml::ValidateNames::ParseQName)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* colonOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::ValidateNames*), "ParseQName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, offset, colonOffset});
  }
};
// Writing MetadataGetter for method: System::Xml::ValidateNames::ParseQNameThrow
// Il2CppName: ParseQNameThrow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ByRef<::StringW>, ByRef<::StringW>)>(&System::Xml::ValidateNames::ParseQNameThrow)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::ValidateNames*), "ParseQNameThrow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, prefix, localName});
  }
};
// Writing MetadataGetter for method: System::Xml::ValidateNames::ThrowInvalidName
// Il2CppName: ThrowInvalidName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, int, int)>(&System::Xml::ValidateNames::ThrowInvalidName)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* offsetStartChar = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* offsetBadChar = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::ValidateNames*), "ThrowInvalidName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, offsetStartChar, offsetBadChar});
  }
};
// Writing MetadataGetter for method: System::Xml::ValidateNames::GetInvalidNameException
// Il2CppName: GetInvalidNameException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)(::StringW, int, int)>(&System::Xml::ValidateNames::GetInvalidNameException)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* offsetStartChar = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* offsetBadChar = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::ValidateNames*), "GetInvalidNameException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, offsetStartChar, offsetBadChar});
  }
};
