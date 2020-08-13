// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ArrayHelpers
  class ArrayHelpers : public ::CsObject {
    public:
    // static public T[] CreateOrEnlargeArray(T[] array, System.Int32 minimumCapacity)
    // Offset: 0xFFFFFFFF
    template<class T>
    static ::Array<T>* CreateOrEnlargeArray(::Array<T>* array, int minimumCapacity) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<::Array<T>*>("", "ArrayHelpers", "CreateOrEnlargeArray", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, array, minimumCapacity)));
    }
  }; // ArrayHelpers
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ArrayHelpers*, "", "ArrayHelpers");
#pragma pack(pop)
