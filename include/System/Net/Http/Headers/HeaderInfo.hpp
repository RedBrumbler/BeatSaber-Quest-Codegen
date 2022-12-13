// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.Http.Headers.HttpHeaderKind
#include "System/Net/Http/Headers/HttpHeaderKind.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: TryParseDelegate`1<T>
  template<typename T>
  class TryParseDelegate_1;
  // Forward declaring type: TryParseListDelegate`1<T>
  template<typename T>
  class TryParseListDelegate_1;
  // Forward declaring type: HttpHeaders
  class HttpHeaders;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: HeaderInfo
  class HeaderInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Http::Headers::HeaderInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::HeaderInfo*, "System.Net.Http.Headers", "HeaderInfo");
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.Headers.HeaderInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class HeaderInfo : public ::Il2CppObject {
    public:
    // Nested type: ::System::Net::Http::Headers::HeaderInfo::HeaderTypeInfo_2<T, U>
    template<typename T, typename U>
    class HeaderTypeInfo_2;
    // Nested type: ::System::Net::Http::Headers::HeaderInfo::CollectionHeaderTypeInfo_2<T, U>
    template<typename T, typename U>
    class CollectionHeaderTypeInfo_2;
    public:
    // public System.Boolean AllowsMany
    // Size: 0x1
    // Offset: 0x10
    bool AllowsMany;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: AllowsMany and: HeaderKind
    char __padding0[0x3] = {};
    // public readonly System.Net.Http.Headers.HttpHeaderKind HeaderKind
    // Size: 0x4
    // Offset: 0x14
    ::System::Net::Http::Headers::HttpHeaderKind HeaderKind;
    // Field size check
    static_assert(sizeof(::System::Net::Http::Headers::HttpHeaderKind) == 0x4);
    // public readonly System.String Name
    // Size: 0x8
    // Offset: 0x18
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Func`2<System.Object,System.String> <CustomToString>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::System::Func_2<::Il2CppObject*, ::StringW>* CustomToString;
    // Field size check
    static_assert(sizeof(::System::Func_2<::Il2CppObject*, ::StringW>*) == 0x8);
    public:
    // Get instance field reference: public System.Boolean AllowsMany
    [[deprecated("Use field access instead!")]] bool& dyn_AllowsMany();
    // Get instance field reference: public readonly System.Net.Http.Headers.HttpHeaderKind HeaderKind
    [[deprecated("Use field access instead!")]] ::System::Net::Http::Headers::HttpHeaderKind& dyn_HeaderKind();
    // Get instance field reference: public readonly System.String Name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Name();
    // Get instance field reference: private System.Func`2<System.Object,System.String> <CustomToString>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Func_2<::Il2CppObject*, ::StringW>*& dyn_$CustomToString$k__BackingField();
    // public System.Func`2<System.Object,System.String> get_CustomToString()
    // Offset: 0x19F1800
    ::System::Func_2<::Il2CppObject*, ::StringW>* get_CustomToString();
    // private System.Void set_CustomToString(System.Func`2<System.Object,System.String> value)
    // Offset: 0x19F1808
    void set_CustomToString(::System::Func_2<::Il2CppObject*, ::StringW>* value);
    // public System.String get_Separator()
    // Offset: 0x19F1810
    ::StringW get_Separator();
    // protected System.Void .ctor(System.String name, System.Net.Http.Headers.HttpHeaderKind headerKind)
    // Offset: 0x19F17B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HeaderInfo* New_ctor(::StringW name, ::System::Net::Http::Headers::HttpHeaderKind headerKind) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Http::Headers::HeaderInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HeaderInfo*, creationType>(name, headerKind)));
    }
    // static public System.Net.Http.Headers.HeaderInfo CreateSingle(System.String name, System.Net.Http.Headers.TryParseDelegate`1<T> parser, System.Net.Http.Headers.HttpHeaderKind headerKind, System.Func`2<System.Object,System.String> toString)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::System::Net::Http::Headers::HeaderInfo* CreateSingle(::StringW name, ::System::Net::Http::Headers::TryParseDelegate_1<T>* parser, ::System::Net::Http::Headers::HttpHeaderKind headerKind, ::System::Func_2<::Il2CppObject*, ::StringW>* toString) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Http::Headers::HeaderInfo::CreateSingle");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Net.Http.Headers", "HeaderInfo", "CreateSingle", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(name), ::il2cpp_utils::ExtractType(parser), ::il2cpp_utils::ExtractType(headerKind), ::il2cpp_utils::ExtractType(toString)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Net::Http::Headers::HeaderInfo*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, name, parser, headerKind, toString);
    }
    // static public System.Net.Http.Headers.HeaderInfo CreateMulti(System.String name, System.Net.Http.Headers.TryParseListDelegate`1<T> elementParser, System.Net.Http.Headers.HttpHeaderKind headerKind, System.Int32 minimalCount, System.String separator)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::System::Net::Http::Headers::HeaderInfo* CreateMulti(::StringW name, ::System::Net::Http::Headers::TryParseListDelegate_1<T>* elementParser, ::System::Net::Http::Headers::HttpHeaderKind headerKind, int minimalCount, ::StringW separator) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Http::Headers::HeaderInfo::CreateMulti");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Net.Http.Headers", "HeaderInfo", "CreateMulti", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(name), ::il2cpp_utils::ExtractType(elementParser), ::il2cpp_utils::ExtractType(headerKind), ::il2cpp_utils::ExtractType(minimalCount), ::il2cpp_utils::ExtractType(separator)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Net::Http::Headers::HeaderInfo*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, name, elementParser, headerKind, minimalCount, separator);
    }
    // public System.Object CreateCollection(System.Net.Http.Headers.HttpHeaders headers)
    // Offset: 0x19F17F0
    ::Il2CppObject* CreateCollection(::System::Net::Http::Headers::HttpHeaders* headers);
    // public System.Void AddToCollection(System.Object collection, System.Object value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void AddToCollection(::Il2CppObject* collection, ::Il2CppObject* value);
    // protected System.Object CreateCollection(System.Net.Http.Headers.HttpHeaders headers, System.Net.Http.Headers.HeaderInfo headerInfo)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* CreateCollection(::System::Net::Http::Headers::HttpHeaders* headers, ::System::Net::Http::Headers::HeaderInfo* headerInfo);
    // public System.Collections.Generic.List`1<System.String> ToStringCollection(System.Object collection)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::List_1<::StringW>* ToStringCollection(::Il2CppObject* collection);
    // public System.Boolean TryParse(System.String value, out System.Object result)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool TryParse(::StringW value, ByRef<::Il2CppObject*> result);
  }; // System.Net.Http.Headers.HeaderInfo
  #pragma pack(pop)
  static check_size<sizeof(HeaderInfo), 32 + sizeof(::System::Func_2<::Il2CppObject*, ::StringW>*)> __System_Net_Http_Headers_HeaderInfoSizeCheck;
  static_assert(sizeof(HeaderInfo) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::HeaderInfo::get_CustomToString
// Il2CppName: get_CustomToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_2<::Il2CppObject*, ::StringW>* (System::Net::Http::Headers::HeaderInfo::*)()>(&System::Net::Http::Headers::HeaderInfo::get_CustomToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HeaderInfo*), "get_CustomToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::HeaderInfo::set_CustomToString
// Il2CppName: set_CustomToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::HeaderInfo::*)(::System::Func_2<::Il2CppObject*, ::StringW>*)>(&System::Net::Http::Headers::HeaderInfo::set_CustomToString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HeaderInfo*), "set_CustomToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::HeaderInfo::get_Separator
// Il2CppName: get_Separator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Http::Headers::HeaderInfo::*)()>(&System::Net::Http::Headers::HeaderInfo::get_Separator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HeaderInfo*), "get_Separator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::HeaderInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::Headers::HeaderInfo::CreateSingle
// Il2CppName: CreateSingle
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Net::Http::Headers::HeaderInfo::CreateMulti
// Il2CppName: CreateMulti
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Net::Http::Headers::HeaderInfo::CreateCollection
// Il2CppName: CreateCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::Http::Headers::HeaderInfo::*)(::System::Net::Http::Headers::HttpHeaders*)>(&System::Net::Http::Headers::HeaderInfo::CreateCollection)> {
  static const MethodInfo* get() {
    static auto* headers = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "HttpHeaders")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HeaderInfo*), "CreateCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{headers});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::HeaderInfo::AddToCollection
// Il2CppName: AddToCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::HeaderInfo::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Net::Http::Headers::HeaderInfo::AddToCollection)> {
  static const MethodInfo* get() {
    static auto* collection = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HeaderInfo*), "AddToCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collection, value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::HeaderInfo::CreateCollection
// Il2CppName: CreateCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::Http::Headers::HeaderInfo::*)(::System::Net::Http::Headers::HttpHeaders*, ::System::Net::Http::Headers::HeaderInfo*)>(&System::Net::Http::Headers::HeaderInfo::CreateCollection)> {
  static const MethodInfo* get() {
    static auto* headers = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "HttpHeaders")->byval_arg;
    static auto* headerInfo = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "HeaderInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HeaderInfo*), "CreateCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{headers, headerInfo});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::HeaderInfo::ToStringCollection
// Il2CppName: ToStringCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (System::Net::Http::Headers::HeaderInfo::*)(::Il2CppObject*)>(&System::Net::Http::Headers::HeaderInfo::ToStringCollection)> {
  static const MethodInfo* get() {
    static auto* collection = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HeaderInfo*), "ToStringCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collection});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::HeaderInfo::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::HeaderInfo::*)(::StringW, ByRef<::Il2CppObject*>)>(&System::Net::Http::Headers::HeaderInfo::TryParse)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Object")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HeaderInfo*), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, result});
  }
};
