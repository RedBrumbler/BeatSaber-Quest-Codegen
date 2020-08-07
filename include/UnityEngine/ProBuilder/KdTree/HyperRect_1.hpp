// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::KdTree
namespace UnityEngine::ProBuilder::KdTree {
  // Forward declaring type: ITypeMath`1<T>
  template<typename T>
  class ITypeMath_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.ProBuilder.KdTree
namespace UnityEngine::ProBuilder::KdTree {
  // Autogenerated type: UnityEngine.ProBuilder.KdTree.HyperRect`1
  template<typename T>
  struct HyperRect_1 : public System::ValueType {
    public:
    // private T[] minPoint
    // Offset: 0x0
    ::Array<T>* minPoint;
    // private T[] maxPoint
    // Offset: 0x0
    ::Array<T>* maxPoint;
    // Creating value type constructor for type: HyperRect_1
    HyperRect_1(::Array<T>* minPoint_ = {}, ::Array<T>* maxPoint_ = {}) : minPoint{minPoint_}, maxPoint{maxPoint_} {}
    // public T[] get_MinPoint()
    // Offset: 0xFFFFFFFF
    ::Array<T>* get_MinPoint() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<T>*>(*this, "get_MinPoint"));
    }
    // public System.Void set_MinPoint(T[] value)
    // Offset: 0xFFFFFFFF
    void set_MinPoint(::Array<T>* value) {
      THROW_UNLESS(il2cpp_utils::RunMethod(*this, "set_MinPoint", value));
    }
    // public T[] get_MaxPoint()
    // Offset: 0xFFFFFFFF
    ::Array<T>* get_MaxPoint() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<T>*>(*this, "get_MaxPoint"));
    }
    // public System.Void set_MaxPoint(T[] value)
    // Offset: 0xFFFFFFFF
    void set_MaxPoint(::Array<T>* value) {
      THROW_UNLESS(il2cpp_utils::RunMethod(*this, "set_MaxPoint", value));
    }
    // static public UnityEngine.ProBuilder.KdTree.HyperRect`1<T> Infinite(System.Int32 dimensions, UnityEngine.ProBuilder.KdTree.ITypeMath`1<T> math)
    // Offset: 0xFFFFFFFF
    static UnityEngine::ProBuilder::KdTree::HyperRect_1<T> Infinite(int dimensions, UnityEngine::ProBuilder::KdTree::ITypeMath_1<T>* math) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::ProBuilder::KdTree::HyperRect_1<T>>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HyperRect_1<T>>::get(), "Infinite", dimensions, math));
    }
    // public T[] GetClosestPoint(T[] toPoint, UnityEngine.ProBuilder.KdTree.ITypeMath`1<T> math)
    // Offset: 0xFFFFFFFF
    ::Array<T>* GetClosestPoint(::Array<T>* toPoint, UnityEngine::ProBuilder::KdTree::ITypeMath_1<T>* math) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<T>*>(*this, "GetClosestPoint", toPoint, math));
    }
    // public UnityEngine.ProBuilder.KdTree.HyperRect`1<T> Clone()
    // Offset: 0xFFFFFFFF
    UnityEngine::ProBuilder::KdTree::HyperRect_1<T> Clone() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::ProBuilder::KdTree::HyperRect_1<T>>(*this, "Clone"));
    }
  }; // UnityEngine.ProBuilder.KdTree.HyperRect`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(UnityEngine::ProBuilder::KdTree::HyperRect_1, "UnityEngine.ProBuilder.KdTree", "HyperRect`1");
#pragma pack(pop)