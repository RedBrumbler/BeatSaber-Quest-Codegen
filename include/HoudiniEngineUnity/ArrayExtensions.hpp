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
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.ArrayExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class ArrayExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ArrayExtensions
    ArrayExtensions() noexcept {}
    // static public System.Void Init(T[] array, T defaultValue)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void Init(::ArrayWrapper<T> array, T defaultValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::ArrayExtensions::Init");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("HoudiniEngineUnity", "ArrayExtensions", "Init", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array), ::il2cpp_utils::ExtractType(defaultValue)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, array, defaultValue);
    }
    // static public System.Void Init(System.Collections.Generic.List`1<T> array, T defaultValue)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void Init(System::Collections::Generic::List_1<T>* array, T defaultValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::ArrayExtensions::Init");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("HoudiniEngineUnity", "ArrayExtensions", "Init", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array), ::il2cpp_utils::ExtractType(defaultValue)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, array, defaultValue);
    }
    // static public System.Void CopyToWithResize(T[] srcArray, ref T[] destArray)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void CopyToWithResize(::ArrayWrapper<T> srcArray, ByRef<::ArrayWrapper<T>> destArray) {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::ArrayExtensions::CopyToWithResize");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("HoudiniEngineUnity", "ArrayExtensions", "CopyToWithResize", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(srcArray), ::il2cpp_utils::ExtractType(destArray)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, srcArray, byref(destArray));
    }
    // static public System.Boolean IsEquivalentArray(T[] arr, T[] other)
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool IsEquivalentArray(::ArrayWrapper<T> arr, ::ArrayWrapper<T> other) {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::ArrayExtensions::IsEquivalentArray");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("HoudiniEngineUnity", "ArrayExtensions", "IsEquivalentArray", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(arr), ::il2cpp_utils::ExtractType(other)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, arr, other);
    }
    // static public System.Boolean IsNull(T[] arr)
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool IsNull(::ArrayWrapper<T> arr) {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::ArrayExtensions::IsNull");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("HoudiniEngineUnity", "ArrayExtensions", "IsNull", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(arr)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, arr);
    }
  }; // HoudiniEngineUnity.ArrayExtensions
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::ArrayExtensions*, "HoudiniEngineUnity", "ArrayExtensions");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::ArrayExtensions::Init
// Il2CppName: Init
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: HoudiniEngineUnity::ArrayExtensions::Init
// Il2CppName: Init
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: HoudiniEngineUnity::ArrayExtensions::CopyToWithResize
// Il2CppName: CopyToWithResize
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: HoudiniEngineUnity::ArrayExtensions::IsEquivalentArray
// Il2CppName: IsEquivalentArray
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: HoudiniEngineUnity::ArrayExtensions::IsNull
// Il2CppName: IsNull
// Cannot write MetadataGetter for generic methods!