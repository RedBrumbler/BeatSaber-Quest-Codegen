// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: HashSetExtensions
  class HashSetExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::HashSetExtensions);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HashSetExtensions*, "", "HashSetExtensions");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HashSetExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class HashSetExtensions : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::HashSetExtensions::HashSetDelegateHolder_1<T>
    template<typename T>
    class HashSetDelegateHolder_1;
    // static public System.Void SetCapacity(System.Collections.Generic.HashSet`1<T> hs, System.Int32 capacity)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void SetCapacity(System::Collections::Generic::HashSet_1<T>* hs, int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HashSetExtensions::SetCapacity");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "HashSetExtensions", "SetCapacity", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(hs), ::il2cpp_utils::ExtractType(capacity)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, hs, capacity);
    }
    // static public System.Collections.Generic.HashSet`1<T> GetHashSet(System.Int32 capacity)
    // Offset: 0xFFFFFFFF
    template<class T>
    static System::Collections::Generic::HashSet_1<T>* GetHashSet(int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HashSetExtensions::GetHashSet");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "HashSetExtensions", "GetHashSet", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(capacity)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<System::Collections::Generic::HashSet_1<T>*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, capacity);
    }
  }; // HashSetExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HashSetExtensions::SetCapacity
// Il2CppName: SetCapacity
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::HashSetExtensions::GetHashSet
// Il2CppName: GetHashSet
// Cannot write MetadataGetter for generic methods!
