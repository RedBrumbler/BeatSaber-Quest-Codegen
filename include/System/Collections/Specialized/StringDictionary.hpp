// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.IEnumerable
#include "System/Collections/IEnumerable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: System.Collections.Specialized
namespace System::Collections::Specialized {
  // Forward declaring type: StringDictionary
  class StringDictionary;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::Specialized::StringDictionary);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::StringDictionary*, "System.Collections.Specialized", "StringDictionary");
// Type namespace: System.Collections.Specialized
namespace System::Collections::Specialized {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Specialized.StringDictionary
  // [TokenAttribute] Offset: FFFFFFFF
  // [DesignerSerializerAttribute] Offset: 1089D7C
  // [DefaultMemberAttribute] Offset: 1089D7C
  class StringDictionary : public ::Il2CppObject/*, public ::System::Collections::IEnumerable*/ {
    public:
    public:
    // System.Collections.Hashtable contents
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Hashtable* contents;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::IEnumerable
    operator ::System::Collections::IEnumerable() noexcept {
      return *reinterpret_cast<::System::Collections::IEnumerable*>(this);
    }
    // Creating interface conversion operator: i_IEnumerable
    inline ::System::Collections::IEnumerable* i_IEnumerable() noexcept {
      return reinterpret_cast<::System::Collections::IEnumerable*>(this);
    }
    // Creating conversion operator: operator ::System::Collections::Hashtable*
    constexpr operator ::System::Collections::Hashtable*() const noexcept {
      return contents;
    }
    // Get instance field reference: System.Collections.Hashtable contents
    [[deprecated("Use field access instead!")]] ::System::Collections::Hashtable*& dyn_contents();
    // public System.Void .ctor()
    // Offset: 0x1E557C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringDictionary* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Specialized::StringDictionary::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringDictionary*, creationType>()));
    }
    // public System.Void Add(System.String key, System.String value)
    // Offset: 0x1E5C744
    void Add(::StringW key, ::StringW value);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x1E5C830
    ::System::Collections::IEnumerator* GetEnumerator();
  }; // System.Collections.Specialized.StringDictionary
  #pragma pack(pop)
  static check_size<sizeof(StringDictionary), 16 + sizeof(::System::Collections::Hashtable*)> __System_Collections_Specialized_StringDictionarySizeCheck;
  static_assert(sizeof(StringDictionary) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Specialized::StringDictionary::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Specialized::StringDictionary::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::StringDictionary::*)(::StringW, ::StringW)>(&System::Collections::Specialized::StringDictionary::Add)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::StringDictionary*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::StringDictionary::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Collections::Specialized::StringDictionary::*)()>(&System::Collections::Specialized::StringDictionary::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::StringDictionary*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
