// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Specialized.OrderedDictionary
#include "System/Collections/Specialized/OrderedDictionary.hpp"
// Including type: System.Collections.IDictionaryEnumerator
#include "System/Collections/IDictionaryEnumerator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
  // Forward declaring type: DictionaryEntry
  struct DictionaryEntry;
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::Specialized::OrderedDictionary::OrderedDictionaryEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::OrderedDictionary::OrderedDictionaryEnumerator*, "System.Collections.Specialized", "OrderedDictionary/OrderedDictionaryEnumerator");
// Type namespace: System.Collections.Specialized
namespace System::Collections::Specialized {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Specialized.OrderedDictionary/System.Collections.Specialized.OrderedDictionaryEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class OrderedDictionary::OrderedDictionaryEnumerator : public ::Il2CppObject/*, public ::System::Collections::IDictionaryEnumerator*/ {
    public:
    public:
    // private System.Int32 _objectReturnType
    // Size: 0x4
    // Offset: 0x10
    int objectReturnType;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: objectReturnType and: arrayEnumerator
    char __padding0[0x4] = {};
    // private System.Collections.IEnumerator arrayEnumerator
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::IEnumerator* arrayEnumerator;
    // Field size check
    static_assert(sizeof(::System::Collections::IEnumerator*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::IDictionaryEnumerator
    operator ::System::Collections::IDictionaryEnumerator() noexcept {
      return *reinterpret_cast<::System::Collections::IDictionaryEnumerator*>(this);
    }
    // Creating interface conversion operator: i_IDictionaryEnumerator
    inline ::System::Collections::IDictionaryEnumerator* i_IDictionaryEnumerator() noexcept {
      return reinterpret_cast<::System::Collections::IDictionaryEnumerator*>(this);
    }
    // Get instance field reference: private System.Int32 _objectReturnType
    [[deprecated("Use field access instead!")]] int& dyn__objectReturnType();
    // Get instance field reference: private System.Collections.IEnumerator arrayEnumerator
    [[deprecated("Use field access instead!")]] ::System::Collections::IEnumerator*& dyn_arrayEnumerator();
    // public System.Object get_Current()
    // Offset: 0x1E5B69C
    ::Il2CppObject* get_Current();
    // public System.Collections.DictionaryEntry get_Entry()
    // Offset: 0x1E5B86C
    ::System::Collections::DictionaryEntry get_Entry();
    // public System.Object get_Key()
    // Offset: 0x1E5BA0C
    ::Il2CppObject* get_Key();
    // public System.Object get_Value()
    // Offset: 0x1E5BAF4
    ::Il2CppObject* get_Value();
    // System.Void .ctor(System.Collections.ArrayList array, System.Int32 objectReturnType)
    // Offset: 0x1E5B440
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OrderedDictionary::OrderedDictionaryEnumerator* New_ctor(::System::Collections::ArrayList* array, int objectReturnType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Specialized::OrderedDictionary::OrderedDictionaryEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OrderedDictionary::OrderedDictionaryEnumerator*, creationType>(array, objectReturnType)));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x1E5BBDC
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x1E5BC8C
    void Reset();
  }; // System.Collections.Specialized.OrderedDictionary/System.Collections.Specialized.OrderedDictionaryEnumerator
  #pragma pack(pop)
  static check_size<sizeof(OrderedDictionary::OrderedDictionaryEnumerator), 24 + sizeof(::System::Collections::IEnumerator*)> __System_Collections_Specialized_OrderedDictionary_OrderedDictionaryEnumeratorSizeCheck;
  static_assert(sizeof(OrderedDictionary::OrderedDictionaryEnumerator) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Specialized::OrderedDictionary::OrderedDictionaryEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Specialized::OrderedDictionary::OrderedDictionaryEnumerator::*)()>(&System::Collections::Specialized::OrderedDictionary::OrderedDictionaryEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::OrderedDictionary::OrderedDictionaryEnumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::OrderedDictionary::OrderedDictionaryEnumerator::get_Entry
// Il2CppName: get_Entry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::DictionaryEntry (System::Collections::Specialized::OrderedDictionary::OrderedDictionaryEnumerator::*)()>(&System::Collections::Specialized::OrderedDictionary::OrderedDictionaryEnumerator::get_Entry)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::OrderedDictionary::OrderedDictionaryEnumerator*), "get_Entry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::OrderedDictionary::OrderedDictionaryEnumerator::get_Key
// Il2CppName: get_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Specialized::OrderedDictionary::OrderedDictionaryEnumerator::*)()>(&System::Collections::Specialized::OrderedDictionary::OrderedDictionaryEnumerator::get_Key)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::OrderedDictionary::OrderedDictionaryEnumerator*), "get_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::OrderedDictionary::OrderedDictionaryEnumerator::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Specialized::OrderedDictionary::OrderedDictionaryEnumerator::*)()>(&System::Collections::Specialized::OrderedDictionary::OrderedDictionaryEnumerator::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::OrderedDictionary::OrderedDictionaryEnumerator*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::OrderedDictionary::OrderedDictionaryEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Specialized::OrderedDictionary::OrderedDictionaryEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Specialized::OrderedDictionary::OrderedDictionaryEnumerator::*)()>(&System::Collections::Specialized::OrderedDictionary::OrderedDictionaryEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::OrderedDictionary::OrderedDictionaryEnumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::OrderedDictionary::OrderedDictionaryEnumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::OrderedDictionary::OrderedDictionaryEnumerator::*)()>(&System::Collections::Specialized::OrderedDictionary::OrderedDictionaryEnumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::OrderedDictionary::OrderedDictionaryEnumerator*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
