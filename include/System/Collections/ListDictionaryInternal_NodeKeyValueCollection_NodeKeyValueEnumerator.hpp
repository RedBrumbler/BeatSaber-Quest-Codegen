// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.ListDictionaryInternal/System.Collections.NodeKeyValueCollection
#include "System/Collections/ListDictionaryInternal_NodeKeyValueCollection.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
// Including type: System.Collections.ListDictionaryInternal
#include "System/Collections/ListDictionaryInternal.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::ListDictionaryInternal::NodeKeyValueCollection::NodeKeyValueEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::ListDictionaryInternal::NodeKeyValueCollection::NodeKeyValueEnumerator*, "System.Collections", "ListDictionaryInternal/NodeKeyValueCollection/NodeKeyValueEnumerator");
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x26
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.ListDictionaryInternal/System.Collections.NodeKeyValueCollection/System.Collections.NodeKeyValueEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class ListDictionaryInternal::NodeKeyValueCollection::NodeKeyValueEnumerator : public ::Il2CppObject/*, public ::System::Collections::IEnumerator*/ {
    public:
    public:
    // private System.Collections.ListDictionaryInternal list
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::ListDictionaryInternal* list;
    // Field size check
    static_assert(sizeof(::System::Collections::ListDictionaryInternal*) == 0x8);
    // private System.Collections.ListDictionaryInternal/System.Collections.DictionaryNode current
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::ListDictionaryInternal::DictionaryNode* current;
    // Field size check
    static_assert(sizeof(::System::Collections::ListDictionaryInternal::DictionaryNode*) == 0x8);
    // private System.Int32 version
    // Size: 0x4
    // Offset: 0x20
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean isKeys
    // Size: 0x1
    // Offset: 0x24
    bool isKeys;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean start
    // Size: 0x1
    // Offset: 0x25
    bool start;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::Collections::IEnumerator
    operator ::System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<::System::Collections::IEnumerator*>(this);
    }
    // Creating interface conversion operator: i_IEnumerator
    inline ::System::Collections::IEnumerator* i_IEnumerator() noexcept {
      return reinterpret_cast<::System::Collections::IEnumerator*>(this);
    }
    // Get instance field reference: private System.Collections.ListDictionaryInternal list
    [[deprecated("Use field access instead!")]] ::System::Collections::ListDictionaryInternal*& dyn_list();
    // Get instance field reference: private System.Collections.ListDictionaryInternal/System.Collections.DictionaryNode current
    [[deprecated("Use field access instead!")]] ::System::Collections::ListDictionaryInternal::DictionaryNode*& dyn_current();
    // Get instance field reference: private System.Int32 version
    [[deprecated("Use field access instead!")]] int& dyn_version();
    // Get instance field reference: private System.Boolean isKeys
    [[deprecated("Use field access instead!")]] bool& dyn_isKeys();
    // Get instance field reference: private System.Boolean start
    [[deprecated("Use field access instead!")]] bool& dyn_start();
    // public System.Object get_Current()
    // Offset: 0x1DCAAD8
    ::Il2CppObject* get_Current();
    // public System.Void .ctor(System.Collections.ListDictionaryInternal list, System.Boolean isKeys)
    // Offset: 0x1DCAA7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ListDictionaryInternal::NodeKeyValueCollection::NodeKeyValueEnumerator* New_ctor(::System::Collections::ListDictionaryInternal* list, bool isKeys) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ListDictionaryInternal::NodeKeyValueCollection::NodeKeyValueEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ListDictionaryInternal::NodeKeyValueCollection::NodeKeyValueEnumerator*, creationType>(list, isKeys)));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x1DCAB88
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x1DCAC60
    void Reset();
  }; // System.Collections.ListDictionaryInternal/System.Collections.NodeKeyValueCollection/System.Collections.NodeKeyValueEnumerator
  #pragma pack(pop)
  static check_size<sizeof(ListDictionaryInternal::NodeKeyValueCollection::NodeKeyValueEnumerator), 37 + sizeof(bool)> __System_Collections_ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumeratorSizeCheck;
  static_assert(sizeof(ListDictionaryInternal::NodeKeyValueCollection::NodeKeyValueEnumerator) == 0x26);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::ListDictionaryInternal::NodeKeyValueCollection::NodeKeyValueEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::ListDictionaryInternal::NodeKeyValueCollection::NodeKeyValueEnumerator::*)()>(&System::Collections::ListDictionaryInternal::NodeKeyValueCollection::NodeKeyValueEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ListDictionaryInternal::NodeKeyValueCollection::NodeKeyValueEnumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ListDictionaryInternal::NodeKeyValueCollection::NodeKeyValueEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::ListDictionaryInternal::NodeKeyValueCollection::NodeKeyValueEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::ListDictionaryInternal::NodeKeyValueCollection::NodeKeyValueEnumerator::*)()>(&System::Collections::ListDictionaryInternal::NodeKeyValueCollection::NodeKeyValueEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ListDictionaryInternal::NodeKeyValueCollection::NodeKeyValueEnumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ListDictionaryInternal::NodeKeyValueCollection::NodeKeyValueEnumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ListDictionaryInternal::NodeKeyValueCollection::NodeKeyValueEnumerator::*)()>(&System::Collections::ListDictionaryInternal::NodeKeyValueCollection::NodeKeyValueEnumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ListDictionaryInternal::NodeKeyValueCollection::NodeKeyValueEnumerator*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
