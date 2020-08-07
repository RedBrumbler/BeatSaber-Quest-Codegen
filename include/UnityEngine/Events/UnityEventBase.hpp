// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.ISerializationCallbackReceiver
#include "UnityEngine/ISerializationCallbackReceiver.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: InvokableCallList
  class InvokableCallList;
  // Forward declaring type: PersistentCallGroup
  class PersistentCallGroup;
  // Forward declaring type: BaseInvokableCall
  class BaseInvokableCall;
  // Forward declaring type: PersistentCall
  class PersistentCall;
  // Forward declaring type: PersistentListenerMode
  struct PersistentListenerMode;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Autogenerated type: UnityEngine.Events.UnityEventBase
  class UnityEventBase : public ::Il2CppObject, public UnityEngine::ISerializationCallbackReceiver {
    public:
    // private UnityEngine.Events.InvokableCallList m_Calls
    // Offset: 0x10
    UnityEngine::Events::InvokableCallList* m_Calls;
    // private UnityEngine.Events.PersistentCallGroup m_PersistentCalls
    // Offset: 0x18
    UnityEngine::Events::PersistentCallGroup* m_PersistentCalls;
    // private System.Boolean m_CallsDirty
    // Offset: 0x20
    bool m_CallsDirty;
    // protected System.Reflection.MethodInfo FindMethod_Impl(System.String name, System.Object targetObj)
    // Offset: 0xFFFFFFFF
    System::Reflection::MethodInfo* FindMethod_Impl(::Il2CppString* name, ::Il2CppObject* targetObj);
    // UnityEngine.Events.BaseInvokableCall GetDelegate(System.Object target, System.Reflection.MethodInfo theFunction)
    // Offset: 0xFFFFFFFF
    UnityEngine::Events::BaseInvokableCall* GetDelegate(::Il2CppObject* target, System::Reflection::MethodInfo* theFunction);
    // System.Reflection.MethodInfo FindMethod(UnityEngine.Events.PersistentCall call)
    // Offset: 0x12F3CC8
    System::Reflection::MethodInfo* FindMethod(UnityEngine::Events::PersistentCall* call);
    // System.Reflection.MethodInfo FindMethod(System.String name, System.Object listener, UnityEngine.Events.PersistentListenerMode mode, System.Type argumentType)
    // Offset: 0x12F4B78
    System::Reflection::MethodInfo* FindMethod(::Il2CppString* name, ::Il2CppObject* listener, UnityEngine::Events::PersistentListenerMode mode, System::Type* argumentType);
    // private System.Void DirtyPersistentCalls()
    // Offset: 0x12F4B44
    void DirtyPersistentCalls();
    // private System.Void RebuildPersistentCallsIfNeeded()
    // Offset: 0x12F4E30
    void RebuildPersistentCallsIfNeeded();
    // System.Void AddCall(UnityEngine.Events.BaseInvokableCall call)
    // Offset: 0x12F4658
    void AddCall(UnityEngine::Events::BaseInvokableCall* call);
    // protected System.Void RemoveListener(System.Object targetObj, System.Reflection.MethodInfo method)
    // Offset: 0x12F46B8
    void RemoveListener(::Il2CppObject* targetObj, System::Reflection::MethodInfo* method);
    // System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> PrepareInvoke()
    // Offset: 0x12F4B10
    System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall*>* PrepareInvoke();
    // static public System.Reflection.MethodInfo GetValidMethodInfo(System.Object obj, System.String functionName, System.Type[] argumentTypes)
    // Offset: 0x12F473C
    static System::Reflection::MethodInfo* GetValidMethodInfo(::Il2CppObject* obj, ::Il2CppString* functionName, ::Array<System::Type*>* argumentTypes);
    // protected System.Void .ctor()
    // Offset: 0x12F4514
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static UnityEventBase* New_ctor();
    // private System.Void UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
    // Offset: 0x12F4B3C
    // Implemented from: UnityEngine.ISerializationCallbackReceiver
    // Base method: System.Void ISerializationCallbackReceiver::OnBeforeSerialize()
    void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();
    // private System.Void UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
    // Offset: 0x12F4B40
    // Implemented from: UnityEngine.ISerializationCallbackReceiver
    // Base method: System.Void ISerializationCallbackReceiver::OnAfterDeserialize()
    void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();
    // public override System.String ToString()
    // Offset: 0x12F4E70
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.Events.UnityEventBase
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Events::UnityEventBase*, "UnityEngine.Events", "UnityEventBase");
#pragma pack(pop)