// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.EqualityComparer`1
#include "System/Collections/Generic/EqualityComparer_1.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IEquatable`1<T>
  template<typename T>
  class IEquatable_1;
  // Skipping declaration: ValueType because it is already included!
}
// Completed forward declares
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Collections.Generic.NullableEqualityComparer`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class NullableEqualityComparer_1 : public System::Collections::Generic::EqualityComparer_1<System::Nullable_1<T>> {
    public:
    // public System.Boolean Equals(System.Nullable`1<T> x, System.Nullable`1<T> y)
    // Offset: 0xFFFFFFFF
    bool Equals(System::Nullable_1<T> x, System::Nullable_1<T> y) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::NullableEqualityComparer_1::Equals");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Equals", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(x), ::il2cpp_utils::ExtractType(y)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, x, y);
    }
    // public System.Int32 GetHashCode(System.Nullable`1<T> obj)
    // Offset: 0xFFFFFFFF
    int GetHashCode(System::Nullable_1<T> obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::NullableEqualityComparer_1::GetHashCode");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetHashCode", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(obj)})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, obj);
    }
    // System.Int32 IndexOf(System.Nullable`1<T>[] array, System.Nullable`1<T> value, System.Int32 startIndex, System.Int32 count)
    // Offset: 0xFFFFFFFF
    int IndexOf(::ArrayW<System::Nullable_1<T>> array, System::Nullable_1<T> value, int startIndex, int count) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::NullableEqualityComparer_1::IndexOf");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "IndexOf", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array), ::il2cpp_utils::ExtractType(value), ::il2cpp_utils::ExtractType(startIndex), ::il2cpp_utils::ExtractType(count)})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, array, value, startIndex, count);
    }
    // System.Int32 LastIndexOf(System.Nullable`1<T>[] array, System.Nullable`1<T> value, System.Int32 startIndex, System.Int32 count)
    // Offset: 0xFFFFFFFF
    int LastIndexOf(::ArrayW<System::Nullable_1<T>> array, System::Nullable_1<T> value, int startIndex, int count) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::NullableEqualityComparer_1::LastIndexOf");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "LastIndexOf", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array), ::il2cpp_utils::ExtractType(value), ::il2cpp_utils::ExtractType(startIndex), ::il2cpp_utils::ExtractType(count)})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, array, value, startIndex, count);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.EqualityComparer`1
    // Base method: System.Void EqualityComparer_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NullableEqualityComparer_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::NullableEqualityComparer_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NullableEqualityComparer_1<T>*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::NullableEqualityComparer_1::Equals");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Equals", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(obj)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, obj);
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::NullableEqualityComparer_1::GetHashCode");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetHashCode", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
  }; // System.Collections.Generic.NullableEqualityComparer`1
  // Could not write size check! Type: System.Collections.Generic.NullableEqualityComparer`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::NullableEqualityComparer_1, "System.Collections.Generic", "NullableEqualityComparer`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
