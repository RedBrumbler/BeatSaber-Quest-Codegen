// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Completed includes
// Type namespace: Org.BouncyCastle.Utilities
namespace Org::BouncyCastle::Utilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Utilities.Strings
  class Strings : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Strings
    Strings() noexcept {}
    // static System.Boolean IsOneOf(System.String s, params System.String[] candidates)
    // Offset: 0x1F8CE48
    static bool IsOneOf(::Il2CppString* s, ::Array<::Il2CppString*>* candidates);
    // Creating initializer_list -> params proxy for: System.Boolean IsOneOf(System.String s, params System.String[] candidates)
    static bool IsOneOf(::Il2CppString* s, std::initializer_list<::Il2CppString*> candidates);
    // Creating TArgs -> initializer_list proxy for: System.Boolean IsOneOf(System.String s, params System.String[] candidates)
    template<class ...TParams>
    static bool IsOneOf(::Il2CppString* s, TParams&&... candidates) {
      return IsOneOf(s, {candidates...});
    }
    // static public System.String FromByteArray(System.Byte[] bs)
    // Offset: 0x1F8CED4
    static ::Il2CppString* FromByteArray(::Array<uint8_t>* bs);
    // static public System.Byte[] ToByteArray(System.Char[] cs)
    // Offset: 0x1F8CFD8
    static ::Array<uint8_t>* ToByteArray(::Array<::Il2CppChar>* cs);
    // static public System.Byte[] ToByteArray(System.String s)
    // Offset: 0x1F8D0D4
    static ::Array<uint8_t>* ToByteArray(::Il2CppString* s);
    // static public System.String FromAsciiByteArray(System.Byte[] bytes)
    // Offset: 0x1F8A4C4
    static ::Il2CppString* FromAsciiByteArray(::Array<uint8_t>* bytes);
    // static public System.Byte[] ToAsciiByteArray(System.String s)
    // Offset: 0x1F8D1CC
    static ::Array<uint8_t>* ToAsciiByteArray(::Il2CppString* s);
  }; // Org.BouncyCastle.Utilities.Strings
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Strings*, "Org.BouncyCastle.Utilities", "Strings");
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Strings::IsOneOf
// Il2CppName: IsOneOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, ::Array<::Il2CppString*>*)>(&Org::BouncyCastle::Utilities::Strings::IsOneOf)> {
  const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* candidates = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Strings*), "IsOneOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, candidates});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Strings::FromByteArray
// Il2CppName: FromByteArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Utilities::Strings::FromByteArray)> {
  const MethodInfo* get() {
    static auto* bs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Strings*), "FromByteArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bs});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Strings::ToByteArray
// Il2CppName: ToByteArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(::Array<::Il2CppChar>*)>(&Org::BouncyCastle::Utilities::Strings::ToByteArray)> {
  const MethodInfo* get() {
    static auto* cs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Strings*), "ToByteArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cs});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Strings::ToByteArray
// Il2CppName: ToByteArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(::Il2CppString*)>(&Org::BouncyCastle::Utilities::Strings::ToByteArray)> {
  const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Strings*), "ToByteArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Strings::FromAsciiByteArray
// Il2CppName: FromAsciiByteArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Utilities::Strings::FromAsciiByteArray)> {
  const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Strings*), "FromAsciiByteArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Strings::ToAsciiByteArray
// Il2CppName: ToAsciiByteArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(::Il2CppString*)>(&Org::BouncyCastle::Utilities::Strings::ToAsciiByteArray)> {
  const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Strings*), "ToAsciiByteArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
