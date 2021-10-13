// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: ILazyCopyHashSet`1
#include "GlobalNamespace/ILazyCopyHashSet_1.hpp"
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
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: LazyCopyHashSet`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class LazyCopyHashSet_1 : public ::Il2CppObject/*, public GlobalNamespace::ILazyCopyHashSet_1<T>*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private readonly System.Collections.Generic.List`1<T> _itemsCopy
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::List_1<T>* itemsCopy;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<T>*) == 0x8);
    // private readonly System.Collections.Generic.HashSet`1<T> _items
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::HashSet_1<T>* items;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<T>*) == 0x8);
    // private System.Boolean _dirty
    // Size: 0x1
    // Offset: 0x0
    bool dirty;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator GlobalNamespace::ILazyCopyHashSet_1<T>
    operator GlobalNamespace::ILazyCopyHashSet_1<T>() noexcept {
      return *reinterpret_cast<GlobalNamespace::ILazyCopyHashSet_1<T>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Collections.Generic.List`1<T> _itemsCopy
    System::Collections::Generic::List_1<T>*& dyn__itemsCopy() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LazyCopyHashSet_1::dyn__itemsCopy");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_itemsCopy"))->offset;
      return *reinterpret_cast<System::Collections::Generic::List_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Collections.Generic.HashSet`1<T> _items
    System::Collections::Generic::HashSet_1<T>*& dyn__items() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LazyCopyHashSet_1::dyn__items");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_items"))->offset;
      return *reinterpret_cast<System::Collections::Generic::HashSet_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Boolean _dirty
    bool& dyn__dirty() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LazyCopyHashSet_1::dyn__dirty");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_dirty"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Collections.Generic.List`1<T> get_items()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::List_1<T>* get_items() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LazyCopyHashSet_1::get_items");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_items", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::List_1<T>*, false>(this, ___internal__method);
    }
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LazyCopyHashSet_1<T>* New_ctor(int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LazyCopyHashSet_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LazyCopyHashSet_1<T>*, creationType>(capacity)));
    }
    // public System.Void Add(T Listener)
    // Offset: 0xFFFFFFFF
    void Add(T Listener) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LazyCopyHashSet_1::Add");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Add", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(Listener)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, Listener);
    }
    // public System.Void Remove(T listener)
    // Offset: 0xFFFFFFFF
    void Remove(T listener) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LazyCopyHashSet_1::Remove");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Remove", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(listener)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, listener);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LazyCopyHashSet_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LazyCopyHashSet_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LazyCopyHashSet_1<T>*, creationType>()));
    }
  }; // LazyCopyHashSet`1
  // Could not write size check! Type: LazyCopyHashSet`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::LazyCopyHashSet_1, "", "LazyCopyHashSet`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
