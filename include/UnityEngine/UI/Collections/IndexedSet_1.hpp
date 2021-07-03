// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Generic.IList`1
#include "System/Collections/Generic/IList_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Predicate`1<T>
  template<typename T>
  class Predicate_1;
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Completed forward declares
// Type namespace: UnityEngine.UI.Collections
namespace UnityEngine::UI::Collections {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UI.Collections.IndexedSet`1
  // [DefaultMemberAttribute] Offset: DC5B38
  template<typename T>
  class IndexedSet_1 : public ::Il2CppObject/*, public System::Collections::Generic::IList_1<T>*/ {
    public:
    // private readonly System.Collections.Generic.List`1<T> m_List
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::List_1<T>* m_List;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<T>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<T,System.Int32> m_Dictionary
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::Dictionary_2<T, int>* m_Dictionary;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<T, int>*) == 0x8);
    // Creating value type constructor for type: IndexedSet_1
    IndexedSet_1(System::Collections::Generic::List_1<T>* m_List_ = {}, System::Collections::Generic::Dictionary_2<T, int>* m_Dictionary_ = {}) noexcept : m_List{m_List_}, m_Dictionary{m_Dictionary_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IList_1<T>
    operator System::Collections::Generic::IList_1<T>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IList_1<T>*>(this);
    }
    // public System.Void Add(T item)
    // Offset: 0xFFFFFFFF
    void Add(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Collections::IndexedSet_1::Add");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Add", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, item);
    }
    // public System.Boolean AddUnique(T item)
    // Offset: 0xFFFFFFFF
    bool AddUnique(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Collections::IndexedSet_1::AddUnique");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AddUnique", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, item);
    }
    // public System.Boolean Remove(T item)
    // Offset: 0xFFFFFFFF
    bool Remove(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Collections::IndexedSet_1::Remove");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Remove", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, item);
    }
    // public System.Collections.Generic.IEnumerator`1<T> GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerator_1<T>* GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Collections::IndexedSet_1::GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal__method);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Collections::IndexedSet_1::System.Collections.IEnumerable.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::IEnumerator*, false>(this, ___internal__method);
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFF
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Collections::IndexedSet_1::Clear");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Clear", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // public System.Boolean Contains(T item)
    // Offset: 0xFFFFFFFF
    bool Contains(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Collections::IndexedSet_1::Contains");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Contains", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, item);
    }
    // public System.Void CopyTo(T[] array, System.Int32 arrayIndex)
    // Offset: 0xFFFFFFFF
    void CopyTo(::Array<T>* array, int arrayIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Collections::IndexedSet_1::CopyTo");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CopyTo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array), ::il2cpp_utils::ExtractType(arrayIndex)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, array, arrayIndex);
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFF
    int get_Count() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Collections::IndexedSet_1::get_Count");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Count", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
    // public System.Boolean get_IsReadOnly()
    // Offset: 0xFFFFFFFF
    bool get_IsReadOnly() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Collections::IndexedSet_1::get_IsReadOnly");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_IsReadOnly", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
    }
    // public System.Int32 IndexOf(T item)
    // Offset: 0xFFFFFFFF
    int IndexOf(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Collections::IndexedSet_1::IndexOf");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "IndexOf", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, item);
    }
    // public System.Void Insert(System.Int32 index, T item)
    // Offset: 0xFFFFFFFF
    void Insert(int index, T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Collections::IndexedSet_1::Insert");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Insert", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, index, item);
    }
    // public System.Void RemoveAt(System.Int32 index)
    // Offset: 0xFFFFFFFF
    void RemoveAt(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Collections::IndexedSet_1::RemoveAt");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RemoveAt", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, index);
    }
    // public T get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFF
    T get_Item(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Collections::IndexedSet_1::get_Item");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method, index);
    }
    // public System.Void set_Item(System.Int32 index, T value)
    // Offset: 0xFFFFFFFF
    void set_Item(int index, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Collections::IndexedSet_1::set_Item");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, index, value);
    }
    // public System.Void RemoveAll(System.Predicate`1<T> match)
    // Offset: 0xFFFFFFFF
    void RemoveAll(System::Predicate_1<T>* match) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Collections::IndexedSet_1::RemoveAll");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RemoveAll", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(match)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, match);
    }
    // public System.Void Sort(System.Comparison`1<T> sortLayoutFunction)
    // Offset: 0xFFFFFFFF
    void Sort(System::Comparison_1<T>* sortLayoutFunction) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Collections::IndexedSet_1::Sort");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Sort", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(sortLayoutFunction)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, sortLayoutFunction);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IndexedSet_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Collections::IndexedSet_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IndexedSet_1<T>*, creationType>()));
    }
  }; // UnityEngine.UI.Collections.IndexedSet`1
  // Could not write size check! Type: UnityEngine.UI.Collections.IndexedSet`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UI::Collections::IndexedSet_1, "UnityEngine.UI.Collections", "IndexedSet`1");
