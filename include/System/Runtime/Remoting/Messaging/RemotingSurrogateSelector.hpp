// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Runtime.Serialization.ISurrogateSelector
#include "System/Runtime/Serialization/ISurrogateSelector.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: ObjRefSurrogate
  class ObjRefSurrogate;
  // Forward declaring type: RemotingSurrogate
  class RemotingSurrogate;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: ISerializationSurrogate
  class ISerializationSurrogate;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Autogenerated type: System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
  class RemotingSurrogateSelector : public ::Il2CppObject, public System::Runtime::Serialization::ISurrogateSelector {
    public:
    // Get static field: static private System.Type s_cachedTypeObjRef
    static System::Type* _get_s_cachedTypeObjRef();
    // Set static field: static private System.Type s_cachedTypeObjRef
    static void _set_s_cachedTypeObjRef(System::Type* value);
    // Get static field: static private System.Runtime.Remoting.Messaging.ObjRefSurrogate _objRefSurrogate
    static System::Runtime::Remoting::Messaging::ObjRefSurrogate* _get__objRefSurrogate();
    // Set static field: static private System.Runtime.Remoting.Messaging.ObjRefSurrogate _objRefSurrogate
    static void _set__objRefSurrogate(System::Runtime::Remoting::Messaging::ObjRefSurrogate* value);
    // Get static field: static private System.Runtime.Remoting.Messaging.RemotingSurrogate _objRemotingSurrogate
    static System::Runtime::Remoting::Messaging::RemotingSurrogate* _get__objRemotingSurrogate();
    // Set static field: static private System.Runtime.Remoting.Messaging.RemotingSurrogate _objRemotingSurrogate
    static void _set__objRemotingSurrogate(System::Runtime::Remoting::Messaging::RemotingSurrogate* value);
    // private System.Runtime.Serialization.ISurrogateSelector _next
    // Offset: 0x10
    System::Runtime::Serialization::ISurrogateSelector* next;
    // static private System.Void .cctor()
    // Offset: 0xDFAAD4
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0xDFA8F0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static RemotingSurrogateSelector* New_ctor();
    // public System.Runtime.Serialization.ISerializationSurrogate GetSurrogate(System.Type type, System.Runtime.Serialization.StreamingContext context, System.Runtime.Serialization.ISurrogateSelector ssout)
    // Offset: 0xDFA8F8
    // Implemented from: System.Runtime.Serialization.ISurrogateSelector
    // Base method: System.Runtime.Serialization.ISerializationSurrogate ISurrogateSelector::GetSurrogate(System.Type type, System.Runtime.Serialization.StreamingContext context, System.Runtime.Serialization.ISurrogateSelector ssout)
    System::Runtime::Serialization::ISerializationSurrogate* GetSurrogate(System::Type* type, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::ISurrogateSelector*& ssout);
  }; // System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::RemotingSurrogateSelector*, "System.Runtime.Remoting.Messaging", "RemotingSurrogateSelector");
#pragma pack(pop)