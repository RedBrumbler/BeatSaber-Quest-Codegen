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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: NoAllocHelpers
  class NoAllocHelpers;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::NoAllocHelpers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::NoAllocHelpers*, "UnityEngine", "NoAllocHelpers");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.NoAllocHelpers
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 1093A9C
  class NoAllocHelpers : public ::Il2CppObject {
    public:
    // static public System.Void ResizeList(System.Collections.Generic.List`1<T> list, System.Int32 size)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void ResizeList(::System::Collections::Generic::List_1<T>* list, int size) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::NoAllocHelpers::ResizeList");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine", "NoAllocHelpers", "ResizeList", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(list), ::il2cpp_utils::ExtractType(size)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, list, size);
    }
    // static public System.Void EnsureListElemCount(System.Collections.Generic.List`1<T> list, System.Int32 count)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void EnsureListElemCount(::System::Collections::Generic::List_1<T>* list, int count) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::NoAllocHelpers::EnsureListElemCount");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine", "NoAllocHelpers", "EnsureListElemCount", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(list), ::il2cpp_utils::ExtractType(count)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, list, count);
    }
    // static public System.Int32 SafeLength(System.Array values)
    // Offset: 0x20F7E60
    static int SafeLength(::System::Array* values);
    // static public System.Int32 SafeLength(System.Collections.Generic.List`1<T> values)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static int SafeLength(::System::Collections::Generic::List_1<T>* values) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::NoAllocHelpers::SafeLength");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine", "NoAllocHelpers", "SafeLength", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(values)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, values);
    }
    // static public T[] ExtractArrayFromListT(System.Collections.Generic.List`1<T> list)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::ArrayW<T> ExtractArrayFromListT(::System::Collections::Generic::List_1<T>* list) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::NoAllocHelpers::ExtractArrayFromListT");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine", "NoAllocHelpers", "ExtractArrayFromListT", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(list)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, list);
    }
    // static System.Void Internal_ResizeList(System.Object list, System.Int32 size)
    // Offset: 0x20FE7EC
    static void Internal_ResizeList(::Il2CppObject* list, int size);
    // static public System.Array ExtractArrayFromList(System.Object list)
    // Offset: 0x20EF5EC
    static ::System::Array* ExtractArrayFromList(::Il2CppObject* list);
  }; // UnityEngine.NoAllocHelpers
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::NoAllocHelpers::ResizeList
// Il2CppName: ResizeList
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::NoAllocHelpers::EnsureListElemCount
// Il2CppName: EnsureListElemCount
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::NoAllocHelpers::SafeLength
// Il2CppName: SafeLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::Array*)>(&UnityEngine::NoAllocHelpers::SafeLength)> {
  static const MethodInfo* get() {
    static auto* values = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::NoAllocHelpers*), "SafeLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values});
  }
};
// Writing MetadataGetter for method: UnityEngine::NoAllocHelpers::SafeLength
// Il2CppName: SafeLength
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::NoAllocHelpers::ExtractArrayFromListT
// Il2CppName: ExtractArrayFromListT
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::NoAllocHelpers::Internal_ResizeList
// Il2CppName: Internal_ResizeList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, int)>(&UnityEngine::NoAllocHelpers::Internal_ResizeList)> {
  static const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::NoAllocHelpers*), "Internal_ResizeList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list, size});
  }
};
// Writing MetadataGetter for method: UnityEngine::NoAllocHelpers::ExtractArrayFromList
// Il2CppName: ExtractArrayFromList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Array* (*)(::Il2CppObject*)>(&UnityEngine::NoAllocHelpers::ExtractArrayFromList)> {
  static const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::NoAllocHelpers*), "ExtractArrayFromList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list});
  }
};
