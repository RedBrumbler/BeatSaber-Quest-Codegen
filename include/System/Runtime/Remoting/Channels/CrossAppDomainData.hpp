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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Runtime.Remoting.Channels
namespace System::Runtime::Remoting::Channels {
  // Forward declaring type: CrossAppDomainData
  class CrossAppDomainData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Channels::CrossAppDomainData);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Channels::CrossAppDomainData*, "System.Runtime.Remoting.Channels", "CrossAppDomainData");
// Type namespace: System.Runtime.Remoting.Channels
namespace System::Runtime::Remoting::Channels {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Channels.CrossAppDomainData
  // [TokenAttribute] Offset: FFFFFFFF
  class CrossAppDomainData : public ::Il2CppObject {
    public:
    public:
    // private System.Object _ContextID
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* ContextID;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Int32 _DomainID
    // Size: 0x4
    // Offset: 0x18
    int DomainID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: DomainID and: processGuid
    char __padding1[0x4] = {};
    // private System.String _processGuid
    // Size: 0x8
    // Offset: 0x20
    ::StringW processGuid;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.Object _ContextID
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__ContextID();
    // Get instance field reference: private System.Int32 _DomainID
    [[deprecated("Use field access instead!")]] int& dyn__DomainID();
    // Get instance field reference: private System.String _processGuid
    [[deprecated("Use field access instead!")]] ::StringW& dyn__processGuid();
    // System.Int32 get_DomainID()
    // Offset: 0x1D44F18
    int get_DomainID();
    // System.String get_ProcessID()
    // Offset: 0x1D44F20
    ::StringW get_ProcessID();
    // System.Void .ctor(System.Int32 domainId)
    // Offset: 0x1D44A1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CrossAppDomainData* New_ctor(int domainId) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Channels::CrossAppDomainData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CrossAppDomainData*, creationType>(domainId)));
    }
  }; // System.Runtime.Remoting.Channels.CrossAppDomainData
  #pragma pack(pop)
  static check_size<sizeof(CrossAppDomainData), 32 + sizeof(::StringW)> __System_Runtime_Remoting_Channels_CrossAppDomainDataSizeCheck;
  static_assert(sizeof(CrossAppDomainData) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::CrossAppDomainData::get_DomainID
// Il2CppName: get_DomainID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Runtime::Remoting::Channels::CrossAppDomainData::*)()>(&System::Runtime::Remoting::Channels::CrossAppDomainData::get_DomainID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Channels::CrossAppDomainData*), "get_DomainID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::CrossAppDomainData::get_ProcessID
// Il2CppName: get_ProcessID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::Channels::CrossAppDomainData::*)()>(&System::Runtime::Remoting::Channels::CrossAppDomainData::get_ProcessID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Channels::CrossAppDomainData*), "get_ProcessID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::CrossAppDomainData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
