// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: HashAlgorithmName
  struct HashAlgorithmName;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::HashAlgorithmName, "System.Security.Cryptography", "HashAlgorithmName");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Security.Cryptography.HashAlgorithmName
  // [TokenAttribute] Offset: FFFFFFFF
  struct HashAlgorithmName/*, public ::System::ValueType, public ::System::IEquatable_1<::System::Security::Cryptography::HashAlgorithmName>*/ {
    public:
    public:
    // private readonly System.String _name
    // Size: 0x8
    // Offset: 0x0
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating value type constructor for type: HashAlgorithmName
    constexpr HashAlgorithmName(::StringW name_ = {}) noexcept : name{name_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::System::Security::Cryptography::HashAlgorithmName>
    operator ::System::IEquatable_1<::System::Security::Cryptography::HashAlgorithmName>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::System::Security::Cryptography::HashAlgorithmName>*>(this);
    }
    // Creating interface conversion operator: i_HashAlgorithmName
    inline ::System::IEquatable_1<::System::Security::Cryptography::HashAlgorithmName>* i_HashAlgorithmName() noexcept {
      return reinterpret_cast<::System::IEquatable_1<::System::Security::Cryptography::HashAlgorithmName>*>(this);
    }
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return name;
    }
    // Get instance field reference: private readonly System.String _name
    [[deprecated("Use field access instead!")]] ::StringW& dyn__name();
    // static public System.Security.Cryptography.HashAlgorithmName get_SHA256()
    // Offset: 0x24F2C38
    static ::System::Security::Cryptography::HashAlgorithmName get_SHA256();
    // public System.String get_Name()
    // Offset: 0x24F2C88
    ::StringW get_Name();
    // public System.Void .ctor(System.String name)
    // Offset: 0x24F2C80
    // ABORTED: conflicts with another method.  HashAlgorithmName(::StringW name);
    // public System.Boolean Equals(System.Security.Cryptography.HashAlgorithmName other)
    // Offset: 0x24F2D7C
    bool Equals(::System::Security::Cryptography::HashAlgorithmName other);
    // public override System.String ToString()
    // Offset: 0x24F2C90
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x24F2CEC
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x24F2D88
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.Security.Cryptography.HashAlgorithmName
  #pragma pack(pop)
  static check_size<sizeof(HashAlgorithmName), 0 + sizeof(::StringW)> __System_Security_Cryptography_HashAlgorithmNameSizeCheck;
  static_assert(sizeof(HashAlgorithmName) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithmName::get_SHA256
// Il2CppName: get_SHA256
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::HashAlgorithmName (*)()>(&System::Security::Cryptography::HashAlgorithmName::get_SHA256)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithmName), "get_SHA256", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithmName::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::HashAlgorithmName::*)()>(&System::Security::Cryptography::HashAlgorithmName::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithmName), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithmName::HashAlgorithmName
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithmName::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::HashAlgorithmName::*)(::System::Security::Cryptography::HashAlgorithmName)>(&System::Security::Cryptography::HashAlgorithmName::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "HashAlgorithmName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithmName), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithmName::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::HashAlgorithmName::*)()>(&System::Security::Cryptography::HashAlgorithmName::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithmName), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithmName::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::HashAlgorithmName::*)(::Il2CppObject*)>(&System::Security::Cryptography::HashAlgorithmName::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithmName), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithmName::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::HashAlgorithmName::*)()>(&System::Security::Cryptography::HashAlgorithmName::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithmName), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
