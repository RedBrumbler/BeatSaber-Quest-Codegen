// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ConventionFilterTypesBinder
#include "Zenject/ConventionFilterTypesBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Attribute
  class Attribute;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ConventionFilterTypesBinder/<>c__DisplayClass9_0`1
  template<typename T>
  class ConventionFilterTypesBinder::$$c__DisplayClass9_0_1 : public ::CsObject {
    static_assert((!std::is_complete_v<std::remove_pointer_t<T>> || std::is_convertible_v<T, System::Attribute*>));
    public:
    // public System.Func`2<T,System.Boolean> predicate
    // Offset: 0x0
    System::Func_2<T, bool>* predicate;
    // System.Boolean <WithAttributeWhere>b__0(System.Type t)
    // Offset: 0xFFFFFFFF
    bool $WithAttributeWhere$b__0(System::Type* t) {
      return THROW_UNLESS((il2cpp_utils::RunMethod<bool>(this, "<WithAttributeWhere>b__0", t)));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ConventionFilterTypesBinder::$$c__DisplayClass9_0_1<T>* New_ctor() {
      return (ConventionFilterTypesBinder::$$c__DisplayClass9_0_1<T>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConventionFilterTypesBinder::$$c__DisplayClass9_0_1<T>*>::get()));
    }
  }; // Zenject.ConventionFilterTypesBinder/<>c__DisplayClass9_0`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::ConventionFilterTypesBinder::$$c__DisplayClass9_0_1, "Zenject", "ConventionFilterTypesBinder/<>c__DisplayClass9_0`1");
#pragma pack(pop)
