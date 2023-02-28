// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Linq.JProperty
#include "Newtonsoft/Json/Linq/JProperty.hpp"
// Including type: System.Collections.Generic.IList`1
#include "System/Collections/Generic/IList_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json::Linq
namespace Newtonsoft::Json::Linq {
  // Forward declaring type: JToken
  class JToken;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Linq::JProperty::JPropertyList);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JProperty::JPropertyList*, "Newtonsoft.Json.Linq", "JProperty/JPropertyList");
// Type namespace: Newtonsoft.Json.Linq
namespace Newtonsoft::Json::Linq {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Linq.JProperty/Newtonsoft.Json.Linq.JPropertyList
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 10FE620
  class JProperty::JPropertyList : public ::Il2CppObject/*, public ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*/ {
    public:
    // Nested type: ::Newtonsoft::Json::Linq::JProperty::JPropertyList::$GetEnumerator$d__1
    class $GetEnumerator$d__1;
    public:
    // Newtonsoft.Json.Linq.JToken _token
    // Size: 0x8
    // Offset: 0x10
    ::Newtonsoft::Json::Linq::JToken* token;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Linq::JToken*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>
    operator ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*>(this);
    }
    // Creating interface conversion operator: i_JToken
    inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* i_JToken() noexcept {
      return reinterpret_cast<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*>(this);
    }
    // Creating conversion operator: operator ::Newtonsoft::Json::Linq::JToken*
    constexpr operator ::Newtonsoft::Json::Linq::JToken*() const noexcept {
      return token;
    }
    // Get instance field reference: Newtonsoft.Json.Linq.JToken _token
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Linq::JToken*& dyn__token();
    // public System.Int32 get_Count()
    // Offset: 0x17B0EFC
    int get_Count();
    // public System.Boolean get_IsReadOnly()
    // Offset: 0x17B0F0C
    bool get_IsReadOnly();
    // public Newtonsoft.Json.Linq.JToken get_Item(System.Int32 index)
    // Offset: 0x17B0F34
    ::Newtonsoft::Json::Linq::JToken* get_Item(int index);
    // public System.Void set_Item(System.Int32 index, Newtonsoft.Json.Linq.JToken value)
    // Offset: 0x17B0F48
    void set_Item(int index, ::Newtonsoft::Json::Linq::JToken* value);
    // public System.Void .ctor()
    // Offset: 0x17B0324
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JProperty::JPropertyList* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Linq::JProperty::JPropertyList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JProperty::JPropertyList*, creationType>()));
    }
    // public System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> GetEnumerator()
    // Offset: 0x17B0DA4
    ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x17B0E40
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Void Add(Newtonsoft.Json.Linq.JToken item)
    // Offset: 0x17B0E44
    void Add(::Newtonsoft::Json::Linq::JToken* item);
    // public System.Void Clear()
    // Offset: 0x17B0E4C
    void Clear();
    // public System.Boolean Contains(Newtonsoft.Json.Linq.JToken item)
    // Offset: 0x17B0E54
    bool Contains(::Newtonsoft::Json::Linq::JToken* item);
    // public System.Void CopyTo(Newtonsoft.Json.Linq.JToken[] array, System.Int32 arrayIndex)
    // Offset: 0x17B0E64
    void CopyTo(::ArrayW<::Newtonsoft::Json::Linq::JToken*> array, int arrayIndex);
    // public System.Boolean Remove(Newtonsoft.Json.Linq.JToken item)
    // Offset: 0x17B0EDC
    bool Remove(::Newtonsoft::Json::Linq::JToken* item);
    // public System.Int32 IndexOf(Newtonsoft.Json.Linq.JToken item)
    // Offset: 0x17B0718
    int IndexOf(::Newtonsoft::Json::Linq::JToken* item);
    // public System.Void Insert(System.Int32 index, Newtonsoft.Json.Linq.JToken item)
    // Offset: 0x17B0F14
    void Insert(int index, ::Newtonsoft::Json::Linq::JToken* item);
    // public System.Void RemoveAt(System.Int32 index)
    // Offset: 0x17B0F24
    void RemoveAt(int index);
  }; // Newtonsoft.Json.Linq.JProperty/Newtonsoft.Json.Linq.JPropertyList
  #pragma pack(pop)
  static check_size<sizeof(JProperty::JPropertyList), 16 + sizeof(::Newtonsoft::Json::Linq::JToken*)> __Newtonsoft_Json_Linq_JProperty_JPropertyListSizeCheck;
  static_assert(sizeof(JProperty::JPropertyList) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JProperty::JPropertyList::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Newtonsoft::Json::Linq::JProperty::JPropertyList::*)()>(&Newtonsoft::Json::Linq::JProperty::JPropertyList::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JProperty::JPropertyList*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JProperty::JPropertyList::get_IsReadOnly
// Il2CppName: get_IsReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Linq::JProperty::JPropertyList::*)()>(&Newtonsoft::Json::Linq::JProperty::JPropertyList::get_IsReadOnly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JProperty::JPropertyList*), "get_IsReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JProperty::JPropertyList::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (Newtonsoft::Json::Linq::JProperty::JPropertyList::*)(int)>(&Newtonsoft::Json::Linq::JProperty::JPropertyList::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JProperty::JPropertyList*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JProperty::JPropertyList::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JProperty::JPropertyList::*)(int, ::Newtonsoft::Json::Linq::JToken*)>(&Newtonsoft::Json::Linq::JProperty::JPropertyList::set_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JProperty::JPropertyList*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JProperty::JPropertyList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JProperty::JPropertyList::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* (Newtonsoft::Json::Linq::JProperty::JPropertyList::*)()>(&Newtonsoft::Json::Linq::JProperty::JPropertyList::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JProperty::JPropertyList*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JProperty::JPropertyList::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Newtonsoft::Json::Linq::JProperty::JPropertyList::*)()>(&Newtonsoft::Json::Linq::JProperty::JPropertyList::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JProperty::JPropertyList*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JProperty::JPropertyList::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JProperty::JPropertyList::*)(::Newtonsoft::Json::Linq::JToken*)>(&Newtonsoft::Json::Linq::JProperty::JPropertyList::Add)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JProperty::JPropertyList*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JProperty::JPropertyList::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JProperty::JPropertyList::*)()>(&Newtonsoft::Json::Linq::JProperty::JPropertyList::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JProperty::JPropertyList*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JProperty::JPropertyList::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Linq::JProperty::JPropertyList::*)(::Newtonsoft::Json::Linq::JToken*)>(&Newtonsoft::Json::Linq::JProperty::JPropertyList::Contains)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JProperty::JPropertyList*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JProperty::JPropertyList::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JProperty::JPropertyList::*)(::ArrayW<::Newtonsoft::Json::Linq::JToken*>, int)>(&Newtonsoft::Json::Linq::JProperty::JPropertyList::CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JToken"), 1)->byval_arg;
    static auto* arrayIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JProperty::JPropertyList*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, arrayIndex});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JProperty::JPropertyList::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Linq::JProperty::JPropertyList::*)(::Newtonsoft::Json::Linq::JToken*)>(&Newtonsoft::Json::Linq::JProperty::JPropertyList::Remove)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JProperty::JPropertyList*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JProperty::JPropertyList::IndexOf
// Il2CppName: IndexOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Newtonsoft::Json::Linq::JProperty::JPropertyList::*)(::Newtonsoft::Json::Linq::JToken*)>(&Newtonsoft::Json::Linq::JProperty::JPropertyList::IndexOf)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JProperty::JPropertyList*), "IndexOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JProperty::JPropertyList::Insert
// Il2CppName: Insert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JProperty::JPropertyList::*)(int, ::Newtonsoft::Json::Linq::JToken*)>(&Newtonsoft::Json::Linq::JProperty::JPropertyList::Insert)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* item = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JProperty::JPropertyList*), "Insert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, item});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JProperty::JPropertyList::RemoveAt
// Il2CppName: RemoveAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JProperty::JPropertyList::*)(int)>(&Newtonsoft::Json::Linq::JProperty::JPropertyList::RemoveAt)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JProperty::JPropertyList*), "RemoveAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
