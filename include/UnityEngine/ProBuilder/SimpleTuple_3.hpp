// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin il2cpp-utils forward declares
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.SimpleTuple`3
  template<typename T1, typename T2, typename T3>
  struct SimpleTuple_3 : public System::ValueType {
    public:
    // private T1 m_Item1
    // Offset: 0x0
    T1 m_Item1;
    // private T2 m_Item2
    // Offset: 0x0
    T2 m_Item2;
    // private T3 m_Item3
    // Offset: 0x0
    T3 m_Item3;
    // Creating value type constructor for type: SimpleTuple_3
    SimpleTuple_3(T1 m_Item1_ = {}, T2 m_Item2_ = {}, T3 m_Item3_ = {}) : m_Item1{m_Item1_}, m_Item2{m_Item2_}, m_Item3{m_Item3_} {}
    // public T1 get_item1()
    // Offset: 0xFFFFFFFF
    T1 get_item1() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T1>(*this, "get_item1"));
    }
    // public System.Void set_item1(T1 value)
    // Offset: 0xFFFFFFFF
    void set_item1(T1 value) {
      THROW_UNLESS(il2cpp_utils::RunMethod(*this, "set_item1", value));
    }
    // public T2 get_item2()
    // Offset: 0xFFFFFFFF
    T2 get_item2() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T2>(*this, "get_item2"));
    }
    // public System.Void set_item2(T2 value)
    // Offset: 0xFFFFFFFF
    void set_item2(T2 value) {
      THROW_UNLESS(il2cpp_utils::RunMethod(*this, "set_item2", value));
    }
    // public T3 get_item3()
    // Offset: 0xFFFFFFFF
    T3 get_item3() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T3>(*this, "get_item3"));
    }
    // public System.Void set_item3(T3 value)
    // Offset: 0xFFFFFFFF
    void set_item3(T3 value) {
      THROW_UNLESS(il2cpp_utils::RunMethod(*this, "set_item3", value));
    }
    // public System.Void .ctor(T1 item1, T2 item2, T3 item3)
    // Offset: 0xFFFFFFFF
    static SimpleTuple_3<T1, T2, T3>* New_ctor(T1 item1, T2 item2, T3 item3) {
      return (SimpleTuple_3<T1, T2, T3>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SimpleTuple_3<T1, T2, T3>>::get(), item1, item2, item3)));
    }
    // public override System.String ToString()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::CsString* ToString() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(*this, "ToString"));
    }
  }; // UnityEngine.ProBuilder.SimpleTuple`3
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(UnityEngine::ProBuilder::SimpleTuple_3, "UnityEngine.ProBuilder", "SimpleTuple`3");
#pragma pack(pop)
