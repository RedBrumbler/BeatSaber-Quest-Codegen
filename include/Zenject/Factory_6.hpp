// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.PlaceholderFactory`6
#include "Zenject/PlaceholderFactory_6.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.Factory`6
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TValue>
  class Factory_6 : public Zenject::PlaceholderFactory_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue> {
    public:
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.PlaceholderFactory`6
    // Base method: System.Void PlaceholderFactory`6::.ctor()
    // Base method: System.Void PlaceholderFactoryBase`1::.ctor()
    // Base method: System.Void Object::.ctor()
    static Factory_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>* New_ctor() {
      return (Factory_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Factory_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>*>::get())));
    }
  }; // Zenject.Factory`6
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Factory_6, "Zenject", "Factory`6");
#pragma pack(pop)
