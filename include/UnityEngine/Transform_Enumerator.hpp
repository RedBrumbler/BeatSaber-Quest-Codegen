// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Transform::Enumerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Transform::Enumerator*, "UnityEngine", "Transform/Enumerator");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Transform/UnityEngine.Enumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class Transform::Enumerator : public ::Il2CppObject/*, public ::System::Collections::IEnumerator*/ {
    public:
    public:
    // private UnityEngine.Transform outer
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Transform* outer;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Int32 currentIndex
    // Size: 0x4
    // Offset: 0x18
    int currentIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::IEnumerator
    operator ::System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<::System::Collections::IEnumerator*>(this);
    }
    // Creating interface conversion operator: i_IEnumerator
    inline ::System::Collections::IEnumerator* i_IEnumerator() noexcept {
      return reinterpret_cast<::System::Collections::IEnumerator*>(this);
    }
    // Get instance field reference: private UnityEngine.Transform outer
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_outer();
    // Get instance field reference: private System.Int32 currentIndex
    [[deprecated("Use field access instead!")]] int& dyn_currentIndex();
    // public System.Object get_Current()
    // Offset: 0x28A4AC4
    ::Il2CppObject* get_Current();
    // System.Void .ctor(UnityEngine.Transform outer)
    // Offset: 0x28A4690
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Transform::Enumerator* New_ctor(::UnityEngine::Transform* outer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Transform::Enumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Transform::Enumerator*, creationType>(outer)));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x28A4B1C
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x28A4B88
    void Reset();
  }; // UnityEngine.Transform/UnityEngine.Enumerator
  #pragma pack(pop)
  static check_size<sizeof(Transform::Enumerator), 24 + sizeof(int)> __UnityEngine_Transform_EnumeratorSizeCheck;
  static_assert(sizeof(Transform::Enumerator) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Transform::Enumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::Transform::Enumerator::*)()>(&UnityEngine::Transform::Enumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Transform::Enumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Transform::Enumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Transform::Enumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Transform::Enumerator::*)()>(&UnityEngine::Transform::Enumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Transform::Enumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Transform::Enumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Transform::Enumerator::*)()>(&UnityEngine::Transform::Enumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Transform::Enumerator*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
