// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Timeline.ControlPlayableAsset
#include "UnityEngine/Timeline/ControlPlayableAsset.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MonoBehaviour
  class MonoBehaviour;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::ControlPlayableAsset::$GetControlableScripts$d__39);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ControlPlayableAsset::$GetControlableScripts$d__39*, "UnityEngine.Timeline", "ControlPlayableAsset/<GetControlableScripts>d__39");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.ControlPlayableAsset/UnityEngine.Timeline.<GetControlableScripts>d__39
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ControlPlayableAsset::$GetControlableScripts$d__39 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>, public ::System::Collections::Generic::IEnumerator_1<::UnityEngine::MonoBehaviour*>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private UnityEngine.MonoBehaviour <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::MonoBehaviour* $$2__current;
    // Field size check
    static_assert(sizeof(::UnityEngine::MonoBehaviour*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: root
    char __padding2[0x4] = {};
    // private UnityEngine.GameObject root
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* root;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject <>3__root
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::GameObject* $$3__root;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.MonoBehaviour[] <>7__wrap1
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::UnityEngine::MonoBehaviour*> $$7__wrap1;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::MonoBehaviour*>) == 0x8);
    // private System.Int32 <>7__wrap2
    // Size: 0x4
    // Offset: 0x40
    int $$7__wrap2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>
    operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>*>(this);
    }
    // Creating interface conversion operator: i_MonoBehaviour
    inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>* i_MonoBehaviour() noexcept {
      return reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::MonoBehaviour*>
    operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::MonoBehaviour*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::MonoBehaviour*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private UnityEngine.MonoBehaviour <>2__current
    [[deprecated("Use field access instead!")]] ::UnityEngine::MonoBehaviour*& dyn_$$2__current();
    // Get instance field reference: private System.Int32 <>l__initialThreadId
    [[deprecated("Use field access instead!")]] int& dyn_$$l__initialThreadId();
    // Get instance field reference: private UnityEngine.GameObject root
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_root();
    // Get instance field reference: public UnityEngine.GameObject <>3__root
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_$$3__root();
    // Get instance field reference: private UnityEngine.MonoBehaviour[] <>7__wrap1
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::MonoBehaviour*>& dyn_$$7__wrap1();
    // Get instance field reference: private System.Int32 <>7__wrap2
    [[deprecated("Use field access instead!")]] int& dyn_$$7__wrap2();
    // private UnityEngine.MonoBehaviour System.Collections.Generic.IEnumerator<UnityEngine.MonoBehaviour>.get_Current()
    // Offset: 0x1E808EC
    ::UnityEngine::MonoBehaviour* System_Collections_Generic_IEnumerator$UnityEngine_MonoBehaviour$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1E80954
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1E7EEA8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ControlPlayableAsset::$GetControlableScripts$d__39* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Timeline::ControlPlayableAsset::$GetControlableScripts$d__39::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ControlPlayableAsset::$GetControlableScripts$d__39*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1E80794
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1E80798
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1E808F4
    void System_Collections_IEnumerator_Reset();
    // private System.Collections.Generic.IEnumerator`1<UnityEngine.MonoBehaviour> System.Collections.Generic.IEnumerable<UnityEngine.MonoBehaviour>.GetEnumerator()
    // Offset: 0x1E8095C
    ::System::Collections::Generic::IEnumerator_1<::UnityEngine::MonoBehaviour*>* System_Collections_Generic_IEnumerable$UnityEngine_MonoBehaviour$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1E80A08
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // UnityEngine.Timeline.ControlPlayableAsset/UnityEngine.Timeline.<GetControlableScripts>d__39
  #pragma pack(pop)
  static check_size<sizeof(ControlPlayableAsset::$GetControlableScripts$d__39), 64 + sizeof(int)> __UnityEngine_Timeline_ControlPlayableAsset_$GetControlableScripts$d__39SizeCheck;
  static_assert(sizeof(ControlPlayableAsset::$GetControlableScripts$d__39) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::ControlPlayableAsset::$GetControlableScripts$d__39::System_Collections_Generic_IEnumerator$UnityEngine_MonoBehaviour$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<UnityEngine.MonoBehaviour>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::MonoBehaviour* (UnityEngine::Timeline::ControlPlayableAsset::$GetControlableScripts$d__39::*)()>(&UnityEngine::Timeline::ControlPlayableAsset::$GetControlableScripts$d__39::System_Collections_Generic_IEnumerator$UnityEngine_MonoBehaviour$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ControlPlayableAsset::$GetControlableScripts$d__39*), "System.Collections.Generic.IEnumerator<UnityEngine.MonoBehaviour>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ControlPlayableAsset::$GetControlableScripts$d__39::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::Timeline::ControlPlayableAsset::$GetControlableScripts$d__39::*)()>(&UnityEngine::Timeline::ControlPlayableAsset::$GetControlableScripts$d__39::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ControlPlayableAsset::$GetControlableScripts$d__39*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ControlPlayableAsset::$GetControlableScripts$d__39::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::ControlPlayableAsset::$GetControlableScripts$d__39::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ControlPlayableAsset::$GetControlableScripts$d__39::*)()>(&UnityEngine::Timeline::ControlPlayableAsset::$GetControlableScripts$d__39::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ControlPlayableAsset::$GetControlableScripts$d__39*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ControlPlayableAsset::$GetControlableScripts$d__39::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::ControlPlayableAsset::$GetControlableScripts$d__39::*)()>(&UnityEngine::Timeline::ControlPlayableAsset::$GetControlableScripts$d__39::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ControlPlayableAsset::$GetControlableScripts$d__39*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ControlPlayableAsset::$GetControlableScripts$d__39::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ControlPlayableAsset::$GetControlableScripts$d__39::*)()>(&UnityEngine::Timeline::ControlPlayableAsset::$GetControlableScripts$d__39::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ControlPlayableAsset::$GetControlableScripts$d__39*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ControlPlayableAsset::$GetControlableScripts$d__39::System_Collections_Generic_IEnumerable$UnityEngine_MonoBehaviour$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<UnityEngine.MonoBehaviour>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::MonoBehaviour*>* (UnityEngine::Timeline::ControlPlayableAsset::$GetControlableScripts$d__39::*)()>(&UnityEngine::Timeline::ControlPlayableAsset::$GetControlableScripts$d__39::System_Collections_Generic_IEnumerable$UnityEngine_MonoBehaviour$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ControlPlayableAsset::$GetControlableScripts$d__39*), "System.Collections.Generic.IEnumerable<UnityEngine.MonoBehaviour>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ControlPlayableAsset::$GetControlableScripts$d__39::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (UnityEngine::Timeline::ControlPlayableAsset::$GetControlableScripts$d__39::*)()>(&UnityEngine::Timeline::ControlPlayableAsset::$GetControlableScripts$d__39::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ControlPlayableAsset::$GetControlableScripts$d__39*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
