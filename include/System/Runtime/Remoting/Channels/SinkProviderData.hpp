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
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: Hashtable
  class Hashtable;
  // Forward declaring type: IList
  class IList;
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Channels
namespace System::Runtime::Remoting::Channels {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Channels.SinkProviderData
  // [ComVisibleAttribute] Offset: D7E428
  class SinkProviderData : public ::Il2CppObject {
    public:
    // private System.String sinkName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* sinkName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Collections.ArrayList children
    // Size: 0x8
    // Offset: 0x18
    System::Collections::ArrayList* children;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // private System.Collections.Hashtable properties
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Hashtable* properties;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // Creating value type constructor for type: SinkProviderData
    SinkProviderData(::Il2CppString* sinkName_ = {}, System::Collections::ArrayList* children_ = {}, System::Collections::Hashtable* properties_ = {}) noexcept : sinkName{sinkName_}, children{children_}, properties{properties_} {}
    // public System.Void .ctor(System.String name)
    // Offset: 0x1426F60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SinkProviderData* New_ctor(::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Channels::SinkProviderData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SinkProviderData*, creationType>(name)));
    }
    // public System.Collections.IList get_Children()
    // Offset: 0x1426FFC
    System::Collections::IList* get_Children();
    // public System.Collections.IDictionary get_Properties()
    // Offset: 0x1427004
    System::Collections::IDictionary* get_Properties();
  }; // System.Runtime.Remoting.Channels.SinkProviderData
  #pragma pack(pop)
  static check_size<sizeof(SinkProviderData), 32 + sizeof(System::Collections::Hashtable*)> __System_Runtime_Remoting_Channels_SinkProviderDataSizeCheck;
  static_assert(sizeof(SinkProviderData) == 0x28);
  // Writing MetadataGetter for method: SinkProviderData::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SinkProviderData::*)(::Il2CppString*)>(&SinkProviderData::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SinkProviderData*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SinkProviderData::*)(::Il2CppString*)>(&SinkProviderData::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SinkProviderData*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
    }
  };
  // Writing MetadataGetter for method: SinkProviderData::get_Children
  // Il2CppName: get_Children
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IList* (SinkProviderData::*)()>(&SinkProviderData::get_Children)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SinkProviderData*), "get_Children", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: SinkProviderData::get_Properties
  // Il2CppName: get_Properties
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IDictionary* (SinkProviderData::*)()>(&SinkProviderData::get_Properties)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SinkProviderData*), "get_Properties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Channels::SinkProviderData*, "System.Runtime.Remoting.Channels", "SinkProviderData");
