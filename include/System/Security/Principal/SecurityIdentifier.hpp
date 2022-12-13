// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Principal.IdentityReference
#include "System/Security/Principal/IdentityReference.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Security.Principal
namespace System::Security::Principal {
  // Forward declaring type: SecurityIdentifier
  class SecurityIdentifier;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Principal::SecurityIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Principal::SecurityIdentifier*, "System.Security.Principal", "SecurityIdentifier");
// Type namespace: System.Security.Principal
namespace System::Security::Principal {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Principal.SecurityIdentifier
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 1076B54
  class SecurityIdentifier : public ::System::Security::Principal::IdentityReference/*, public ::System::IComparable_1<::System::Security::Principal::SecurityIdentifier*>*/ {
    public:
    public:
    // private System.Byte[] buffer
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> buffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IComparable_1<::System::Security::Principal::SecurityIdentifier*>
    operator ::System::IComparable_1<::System::Security::Principal::SecurityIdentifier*>() noexcept {
      return *reinterpret_cast<::System::IComparable_1<::System::Security::Principal::SecurityIdentifier*>*>(this);
    }
    // Creating interface conversion operator: i_SecurityIdentifier
    inline ::System::IComparable_1<::System::Security::Principal::SecurityIdentifier*>* i_SecurityIdentifier() noexcept {
      return reinterpret_cast<::System::IComparable_1<::System::Security::Principal::SecurityIdentifier*>*>(this);
    }
    // Creating conversion operator: operator ::ArrayW<uint8_t>
    constexpr operator ::ArrayW<uint8_t>() const noexcept {
      return buffer;
    }
    // Get static field: static public readonly System.Int32 MaxBinaryLength
    static int _get_MaxBinaryLength();
    // Set static field: static public readonly System.Int32 MaxBinaryLength
    static void _set_MaxBinaryLength(int value);
    // Get static field: static public readonly System.Int32 MinBinaryLength
    static int _get_MinBinaryLength();
    // Set static field: static public readonly System.Int32 MinBinaryLength
    static void _set_MinBinaryLength(int value);
    // Get instance field reference: private System.Byte[] buffer
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_buffer();
    // public System.Int32 get_BinaryLength()
    // Offset: 0x1C28E74
    int get_BinaryLength();
    // public System.Void .ctor(System.String sddlForm)
    // Offset: 0x1C28704
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecurityIdentifier* New_ctor(::StringW sddlForm) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Principal::SecurityIdentifier::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecurityIdentifier*, creationType>(sddlForm)));
    }
    // public System.Void .ctor(System.Byte[] binaryForm, System.Int32 offset)
    // Offset: 0x1C28C0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecurityIdentifier* New_ctor(::ArrayW<uint8_t> binaryForm, int offset) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Principal::SecurityIdentifier::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecurityIdentifier*, creationType>(binaryForm, offset)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1C29C60
    static void _cctor();
    // private System.Void CreateFromBinaryForm(System.IntPtr binaryForm, System.Int32 length)
    // Offset: 0x1C28D10
    void CreateFromBinaryForm(::System::IntPtr binaryForm, int length);
    // private System.UInt64 GetSidAuthority()
    // Offset: 0x1C29030
    uint64_t GetSidAuthority();
    // private System.Byte GetSidSubAuthorityCount()
    // Offset: 0x1C29144
    uint8_t GetSidSubAuthorityCount();
    // private System.UInt32 GetSidSubAuthority(System.Byte index)
    // Offset: 0x1C290BC
    uint GetSidSubAuthority(uint8_t index);
    // public System.Int32 CompareTo(System.Security.Principal.SecurityIdentifier sid)
    // Offset: 0x1C2917C
    int CompareTo(::System::Security::Principal::SecurityIdentifier* sid);
    // public System.Boolean Equals(System.Security.Principal.SecurityIdentifier sid)
    // Offset: 0x1C293C8
    bool Equals(::System::Security::Principal::SecurityIdentifier* sid);
    // public System.Void GetBinaryForm(System.Byte[] binaryForm, System.Int32 offset)
    // Offset: 0x1C2947C
    void GetBinaryForm(::ArrayW<uint8_t> binaryForm, int offset);
    // static private System.Byte[] ParseSddlForm(System.String sddlForm)
    // Offset: 0x1C287C8
    static ::ArrayW<uint8_t> ParseSddlForm(::StringW sddlForm);
    // static private System.Boolean TryParseAuthority(System.String s, out System.UInt64 result)
    // Offset: 0x1C299D4
    static bool TryParseAuthority(::StringW s, ByRef<uint64_t> result);
    // static private System.Boolean TryParseSubAuthority(System.String s, out System.UInt32 result)
    // Offset: 0x1C29AC8
    static bool TryParseSubAuthority(::StringW s, ByRef<uint> result);
    // public override System.String get_Value()
    // Offset: 0x1C28E90
    // Implemented from: System.Security.Principal.IdentityReference
    // Base method: System.String IdentityReference::get_Value()
    ::StringW get_Value();
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0x1C29354
    // Implemented from: System.Security.Principal.IdentityReference
    // Base method: System.Boolean IdentityReference::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1C2956C
    // Implemented from: System.Security.Principal.IdentityReference
    // Base method: System.Int32 IdentityReference::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1C29598
    // Implemented from: System.Security.Principal.IdentityReference
    // Base method: System.String IdentityReference::ToString()
    ::StringW ToString();
    // public override System.Security.Principal.IdentityReference Translate(System.Type targetType)
    // Offset: 0x1C295A4
    // Implemented from: System.Security.Principal.IdentityReference
    // Base method: System.Security.Principal.IdentityReference IdentityReference::Translate(System.Type targetType)
    ::System::Security::Principal::IdentityReference* Translate(::System::Type* targetType);
  }; // System.Security.Principal.SecurityIdentifier
  #pragma pack(pop)
  static check_size<sizeof(SecurityIdentifier), 16 + sizeof(::ArrayW<uint8_t>)> __System_Security_Principal_SecurityIdentifierSizeCheck;
  static_assert(sizeof(SecurityIdentifier) == 0x18);
  // static public System.Boolean op_Equality(System.Security.Principal.SecurityIdentifier left, System.Security.Principal.SecurityIdentifier right)
  // Offset: 0x1C292EC
  bool operator ==(::System::Security::Principal::SecurityIdentifier* left, ::System::Security::Principal::SecurityIdentifier& right);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Principal::SecurityIdentifier::get_BinaryLength
// Il2CppName: get_BinaryLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Principal::SecurityIdentifier::*)()>(&System::Security::Principal::SecurityIdentifier::get_BinaryLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::SecurityIdentifier*), "get_BinaryLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::SecurityIdentifier::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Principal::SecurityIdentifier::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Principal::SecurityIdentifier::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Security::Principal::SecurityIdentifier::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::SecurityIdentifier*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::SecurityIdentifier::CreateFromBinaryForm
// Il2CppName: CreateFromBinaryForm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Principal::SecurityIdentifier::*)(::System::IntPtr, int)>(&System::Security::Principal::SecurityIdentifier::CreateFromBinaryForm)> {
  static const MethodInfo* get() {
    static auto* binaryForm = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::SecurityIdentifier*), "CreateFromBinaryForm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{binaryForm, length});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::SecurityIdentifier::GetSidAuthority
// Il2CppName: GetSidAuthority
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (System::Security::Principal::SecurityIdentifier::*)()>(&System::Security::Principal::SecurityIdentifier::GetSidAuthority)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::SecurityIdentifier*), "GetSidAuthority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::SecurityIdentifier::GetSidSubAuthorityCount
// Il2CppName: GetSidSubAuthorityCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (System::Security::Principal::SecurityIdentifier::*)()>(&System::Security::Principal::SecurityIdentifier::GetSidSubAuthorityCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::SecurityIdentifier*), "GetSidSubAuthorityCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::SecurityIdentifier::GetSidSubAuthority
// Il2CppName: GetSidSubAuthority
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (System::Security::Principal::SecurityIdentifier::*)(uint8_t)>(&System::Security::Principal::SecurityIdentifier::GetSidSubAuthority)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::SecurityIdentifier*), "GetSidSubAuthority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::SecurityIdentifier::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Principal::SecurityIdentifier::*)(::System::Security::Principal::SecurityIdentifier*)>(&System::Security::Principal::SecurityIdentifier::CompareTo)> {
  static const MethodInfo* get() {
    static auto* sid = &::il2cpp_utils::GetClassFromName("System.Security.Principal", "SecurityIdentifier")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::SecurityIdentifier*), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sid});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::SecurityIdentifier::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Principal::SecurityIdentifier::*)(::System::Security::Principal::SecurityIdentifier*)>(&System::Security::Principal::SecurityIdentifier::Equals)> {
  static const MethodInfo* get() {
    static auto* sid = &::il2cpp_utils::GetClassFromName("System.Security.Principal", "SecurityIdentifier")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::SecurityIdentifier*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sid});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::SecurityIdentifier::GetBinaryForm
// Il2CppName: GetBinaryForm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Principal::SecurityIdentifier::*)(::ArrayW<uint8_t>, int)>(&System::Security::Principal::SecurityIdentifier::GetBinaryForm)> {
  static const MethodInfo* get() {
    static auto* binaryForm = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::SecurityIdentifier*), "GetBinaryForm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{binaryForm, offset});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::SecurityIdentifier::ParseSddlForm
// Il2CppName: ParseSddlForm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&System::Security::Principal::SecurityIdentifier::ParseSddlForm)> {
  static const MethodInfo* get() {
    static auto* sddlForm = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::SecurityIdentifier*), "ParseSddlForm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sddlForm});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::SecurityIdentifier::TryParseAuthority
// Il2CppName: TryParseAuthority
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<uint64_t>)>(&System::Security::Principal::SecurityIdentifier::TryParseAuthority)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::SecurityIdentifier*), "TryParseAuthority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, result});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::SecurityIdentifier::TryParseSubAuthority
// Il2CppName: TryParseSubAuthority
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<uint>)>(&System::Security::Principal::SecurityIdentifier::TryParseSubAuthority)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::SecurityIdentifier*), "TryParseSubAuthority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, result});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::SecurityIdentifier::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Principal::SecurityIdentifier::*)()>(&System::Security::Principal::SecurityIdentifier::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::SecurityIdentifier*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::SecurityIdentifier::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Principal::SecurityIdentifier::*)(::Il2CppObject*)>(&System::Security::Principal::SecurityIdentifier::Equals)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::SecurityIdentifier*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::SecurityIdentifier::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Principal::SecurityIdentifier::*)()>(&System::Security::Principal::SecurityIdentifier::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::SecurityIdentifier*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::SecurityIdentifier::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Principal::SecurityIdentifier::*)()>(&System::Security::Principal::SecurityIdentifier::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::SecurityIdentifier*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::SecurityIdentifier::Translate
// Il2CppName: Translate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Principal::IdentityReference* (System::Security::Principal::SecurityIdentifier::*)(::System::Type*)>(&System::Security::Principal::SecurityIdentifier::Translate)> {
  static const MethodInfo* get() {
    static auto* targetType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::SecurityIdentifier*), "Translate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetType});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::SecurityIdentifier::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
