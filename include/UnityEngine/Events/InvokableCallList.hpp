// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: BaseInvokableCall
  class BaseInvokableCall;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Events.InvokableCallList
  class InvokableCallList : public ::Il2CppObject {
    public:
    // private readonly System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> m_PersistentCalls
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall*>* m_PersistentCalls;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> m_RuntimeCalls
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall*>* m_RuntimeCalls;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> m_ExecutingCalls
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall*>* m_ExecutingCalls;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall*>*) == 0x8);
    // private System.Boolean m_NeedsUpdate
    // Size: 0x1
    // Offset: 0x28
    bool m_NeedsUpdate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: InvokableCallList
    InvokableCallList(System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall*>* m_PersistentCalls_ = {}, System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall*>* m_RuntimeCalls_ = {}, System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall*>* m_ExecutingCalls_ = {}, bool m_NeedsUpdate_ = {}) noexcept : m_PersistentCalls{m_PersistentCalls_}, m_RuntimeCalls{m_RuntimeCalls_}, m_ExecutingCalls{m_ExecutingCalls_}, m_NeedsUpdate{m_NeedsUpdate_} {}
    // public System.Void AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall call)
    // Offset: 0x1B9585C
    void AddPersistentInvokableCall(UnityEngine::Events::BaseInvokableCall* call);
    // public System.Void AddListener(UnityEngine.Events.BaseInvokableCall call)
    // Offset: 0x1B958D0
    void AddListener(UnityEngine::Events::BaseInvokableCall* call);
    // public System.Void RemoveListener(System.Object targetObj, System.Reflection.MethodInfo method)
    // Offset: 0x1B95944
    void RemoveListener(::Il2CppObject* targetObj, System::Reflection::MethodInfo* method);
    // public System.Void ClearPersistent()
    // Offset: 0x1B95ABC
    void ClearPersistent();
    // public System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> PrepareInvoke()
    // Offset: 0x1B95B20
    System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall*>* PrepareInvoke();
    // public System.Void .ctor()
    // Offset: 0x1B95BBC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvokableCallList* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Events::InvokableCallList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvokableCallList*, creationType>()));
    }
  }; // UnityEngine.Events.InvokableCallList
  #pragma pack(pop)
  static check_size<sizeof(InvokableCallList), 40 + sizeof(bool)> __UnityEngine_Events_InvokableCallListSizeCheck;
  static_assert(sizeof(InvokableCallList) == 0x29);
  // Writing MetadataGetter for method: InvokableCallList::AddPersistentInvokableCall
  // Il2CppName: AddPersistentInvokableCall
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (InvokableCallList::*)(UnityEngine::Events::BaseInvokableCall*)>(&InvokableCallList::AddPersistentInvokableCall)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(InvokableCallList*), "AddPersistentInvokableCall", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Events::BaseInvokableCall*>()});
    }
  };
  // Writing MetadataGetter for method: InvokableCallList::AddListener
  // Il2CppName: AddListener
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (InvokableCallList::*)(UnityEngine::Events::BaseInvokableCall*)>(&InvokableCallList::AddListener)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(InvokableCallList*), "AddListener", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Events::BaseInvokableCall*>()});
    }
  };
  // Writing MetadataGetter for method: InvokableCallList::RemoveListener
  // Il2CppName: RemoveListener
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (InvokableCallList::*)(::Il2CppObject*, System::Reflection::MethodInfo*)>(&InvokableCallList::RemoveListener)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(InvokableCallList*), "RemoveListener", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::Reflection::MethodInfo*>()});
    }
  };
  // Writing MetadataGetter for method: InvokableCallList::ClearPersistent
  // Il2CppName: ClearPersistent
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (InvokableCallList::*)()>(&InvokableCallList::ClearPersistent)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(InvokableCallList*), "ClearPersistent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: InvokableCallList::PrepareInvoke
  // Il2CppName: PrepareInvoke
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall*>* (InvokableCallList::*)()>(&InvokableCallList::PrepareInvoke)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(InvokableCallList*), "PrepareInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: InvokableCallList::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (InvokableCallList::*)()>(&InvokableCallList::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(InvokableCallList*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (InvokableCallList::*)()>(&InvokableCallList::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(InvokableCallList*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Events::InvokableCallList*, "UnityEngine.Events", "InvokableCallList");
