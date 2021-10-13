// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: LinkedList`1<T>
  template<typename T>
  class LinkedList_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: LinkedListNode`1<T>
  template<typename T>
  class LinkedListNode_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // WARNING Size may be invalid!
  // Autogenerated type: TMPro.FastAction`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename A, typename B>
  class FastAction_2 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.Collections.Generic.LinkedList`1<System.Action`2<A,B>> delegates
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::LinkedList_1<System::Action_2<A, B>*>* delegates;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::LinkedList_1<System::Action_2<A, B>*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Action`2<A,B>,System.Collections.Generic.LinkedListNode`1<System.Action`2<A,B>>> lookup
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::Dictionary_2<System::Action_2<A, B>*, System::Collections::Generic::LinkedListNode_1<System::Action_2<A, B>*>*>* lookup;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<System::Action_2<A, B>*, System::Collections::Generic::LinkedListNode_1<System::Action_2<A, B>*>*>*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.LinkedList`1<System.Action`2<A,B>> delegates
    System::Collections::Generic::LinkedList_1<System::Action_2<A, B>*>*& dyn_delegates() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::FastAction_2::dyn_delegates");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "delegates"))->offset;
      return *reinterpret_cast<System::Collections::Generic::LinkedList_1<System::Action_2<A, B>*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.Dictionary`2<System.Action`2<A,B>,System.Collections.Generic.LinkedListNode`1<System.Action`2<A,B>>> lookup
    System::Collections::Generic::Dictionary_2<System::Action_2<A, B>*, System::Collections::Generic::LinkedListNode_1<System::Action_2<A, B>*>*>*& dyn_lookup() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::FastAction_2::dyn_lookup");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "lookup"))->offset;
      return *reinterpret_cast<System::Collections::Generic::Dictionary_2<System::Action_2<A, B>*, System::Collections::Generic::LinkedListNode_1<System::Action_2<A, B>*>*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void Add(System.Action`2<A,B> rhs)
    // Offset: 0xFFFFFFFF
    void Add(System::Action_2<A, B>* rhs) {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::FastAction_2::Add");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Add", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(rhs)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, rhs);
    }
    // public System.Void Remove(System.Action`2<A,B> rhs)
    // Offset: 0xFFFFFFFF
    void Remove(System::Action_2<A, B>* rhs) {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::FastAction_2::Remove");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Remove", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(rhs)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, rhs);
    }
    // public System.Void Call(A a, B b)
    // Offset: 0xFFFFFFFF
    void Call(A a, B b) {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::FastAction_2::Call");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Call", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(a), ::il2cpp_utils::ExtractType(b)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, a, b);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FastAction_2<A, B>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::FastAction_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FastAction_2<A, B>*, creationType>()));
    }
  }; // TMPro.FastAction`2
  // Could not write size check! Type: TMPro.FastAction`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(TMPro::FastAction_2, "TMPro", "FastAction`2");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
