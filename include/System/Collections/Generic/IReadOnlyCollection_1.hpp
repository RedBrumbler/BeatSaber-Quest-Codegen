// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyCollection`1<T>
  template<typename T>
  class IReadOnlyCollection_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::IReadOnlyCollection_1, "System.Collections.Generic", "IReadOnlyCollection`1");
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Collections.Generic.IReadOnlyCollection`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [TypeDependencyAttribute] Offset: 1079F3C
  template<typename T>
  class IReadOnlyCollection_1/*, public ::System::Collections::Generic::IEnumerable_1<T>*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<T>
    operator ::System::Collections::Generic::IEnumerable_1<T>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<T>*>(this);
    }
    // Creating interface conversion operator: i_IEnumerable_1_T
    inline ::System::Collections::Generic::IEnumerable_1<T>* i_IEnumerable_1_T() noexcept {
      return reinterpret_cast<::System::Collections::Generic::IEnumerable_1<T>*>(this);
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Count() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::IReadOnlyCollection_1::get_Count");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Count", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
  }; // System.Collections.Generic.IReadOnlyCollection`1
  // Could not write size check! Type: System.Collections.Generic.IReadOnlyCollection`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
