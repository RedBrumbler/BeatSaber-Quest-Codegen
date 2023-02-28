// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Hashtable
#include "System/Collections/Hashtable.hpp"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::Hashtable::ValueCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Hashtable::ValueCollection*, "System.Collections", "Hashtable/ValueCollection");
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Hashtable/System.Collections.ValueCollection
  // [TokenAttribute] Offset: FFFFFFFF
  class Hashtable::ValueCollection : public ::Il2CppObject/*, public ::System::Collections::ICollection*/ {
    public:
    public:
    // private System.Collections.Hashtable _hashtable
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Hashtable* hashtable;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::ICollection
    operator ::System::Collections::ICollection() noexcept {
      return *reinterpret_cast<::System::Collections::ICollection*>(this);
    }
    // Creating interface conversion operator: i_ICollection
    inline ::System::Collections::ICollection* i_ICollection() noexcept {
      return reinterpret_cast<::System::Collections::ICollection*>(this);
    }
    // Creating conversion operator: operator ::System::Collections::Hashtable*
    constexpr operator ::System::Collections::Hashtable*() const noexcept {
      return hashtable;
    }
    // Get instance field reference: private System.Collections.Hashtable _hashtable
    [[deprecated("Use field access instead!")]] ::System::Collections::Hashtable*& dyn__hashtable();
    // public System.Object get_SyncRoot()
    // Offset: 0x1DC9748
    ::Il2CppObject* get_SyncRoot();
    // public System.Int32 get_Count()
    // Offset: 0x1DC976C
    int get_Count();
    // System.Void .ctor(System.Collections.Hashtable hashtable)
    // Offset: 0x1DC72E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Hashtable::ValueCollection* New_ctor(::System::Collections::Hashtable* hashtable) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Hashtable::ValueCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Hashtable::ValueCollection*, creationType>(hashtable)));
    }
    // public System.Void CopyTo(System.Array array, System.Int32 arrayIndex)
    // Offset: 0x1DC955C
    void CopyTo(::System::Array* array, int arrayIndex);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x1DC96E0
    ::System::Collections::IEnumerator* GetEnumerator();
  }; // System.Collections.Hashtable/System.Collections.ValueCollection
  #pragma pack(pop)
  static check_size<sizeof(Hashtable::ValueCollection), 16 + sizeof(::System::Collections::Hashtable*)> __System_Collections_Hashtable_ValueCollectionSizeCheck;
  static_assert(sizeof(Hashtable::ValueCollection) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Hashtable::ValueCollection::get_SyncRoot
// Il2CppName: get_SyncRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Hashtable::ValueCollection::*)()>(&System::Collections::Hashtable::ValueCollection::get_SyncRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Hashtable::ValueCollection*), "get_SyncRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Hashtable::ValueCollection::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::Hashtable::ValueCollection::*)()>(&System::Collections::Hashtable::ValueCollection::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Hashtable::ValueCollection*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Hashtable::ValueCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Hashtable::ValueCollection::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Hashtable::ValueCollection::*)(::System::Array*, int)>(&System::Collections::Hashtable::ValueCollection::CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* arrayIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Hashtable::ValueCollection*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, arrayIndex});
  }
};
// Writing MetadataGetter for method: System::Collections::Hashtable::ValueCollection::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Collections::Hashtable::ValueCollection::*)()>(&System::Collections::Hashtable::ValueCollection::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Hashtable::ValueCollection*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
