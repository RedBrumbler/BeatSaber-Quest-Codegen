// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: DnsEndPoint
  class DnsEndPoint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DnsEndPoint);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DnsEndPoint*, "", "DnsEndPoint");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: DnsEndPoint
  // [TokenAttribute] Offset: FFFFFFFF
  class DnsEndPoint : public ::Il2CppObject/*, public ::System::IEquatable_1<::GlobalNamespace::DnsEndPoint*>*/ {
    public:
    public:
    // public readonly System.String hostName
    // Size: 0x8
    // Offset: 0x10
    ::StringW hostName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.Int32 port
    // Size: 0x4
    // Offset: 0x18
    int port;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: port and: getEndPointTask
    char __padding1[0x4] = {};
    // private System.Threading.Tasks.Task`1<System.Net.IPEndPoint> _getEndPointTask
    // Size: 0x8
    // Offset: 0x20
    ::System::Threading::Tasks::Task_1<::System::Net::IPEndPoint*>* getEndPointTask;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::Task_1<::System::Net::IPEndPoint*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IEquatable_1<::GlobalNamespace::DnsEndPoint*>
    operator ::System::IEquatable_1<::GlobalNamespace::DnsEndPoint*>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::GlobalNamespace::DnsEndPoint*>*>(this);
    }
    // Creating interface conversion operator: i_DnsEndPoint
    inline ::System::IEquatable_1<::GlobalNamespace::DnsEndPoint*>* i_DnsEndPoint() noexcept {
      return reinterpret_cast<::System::IEquatable_1<::GlobalNamespace::DnsEndPoint*>*>(this);
    }
    // Get instance field reference: public readonly System.String hostName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_hostName();
    // Get instance field reference: public readonly System.Int32 port
    [[deprecated("Use field access instead!")]] int& dyn_port();
    // Get instance field reference: private System.Threading.Tasks.Task`1<System.Net.IPEndPoint> _getEndPointTask
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::Task_1<::System::Net::IPEndPoint*>*& dyn__getEndPointTask();
    // public System.Net.IPEndPoint get_endPoint()
    // Offset: 0x16CCB90
    ::System::Net::IPEndPoint* get_endPoint();
    // public System.Void .ctor(System.String hostName, System.Int32 port)
    // Offset: 0x16CBC28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DnsEndPoint* New_ctor(::StringW hostName, int port) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DnsEndPoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DnsEndPoint*, creationType>(hostName, port)));
    }
    // public System.Void .ctor(System.Net.IPEndPoint endPoint)
    // Offset: 0x16CCC08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DnsEndPoint* New_ctor(::System::Net::IPEndPoint* endPoint) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DnsEndPoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DnsEndPoint*, creationType>(endPoint)));
    }
    // public System.Threading.Tasks.Task`1<System.Net.IPEndPoint> GetEndPointAsync()
    // Offset: 0x16CCCC0
    ::System::Threading::Tasks::Task_1<::System::Net::IPEndPoint*>* GetEndPointAsync();
    // public System.Net.IPEndPoint GetEndPoint()
    // Offset: 0x16CCD6C
    ::System::Net::IPEndPoint* GetEndPoint();
    // private System.Net.IPEndPoint GetEndPointInternal()
    // Offset: 0x16CCE04
    ::System::Net::IPEndPoint* GetEndPointInternal();
    // public System.Boolean Equals(DnsEndPoint other)
    // Offset: 0x16CD000
    bool Equals(::GlobalNamespace::DnsEndPoint* other);
    // public override System.String ToString()
    // Offset: 0x16CCEC8
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x16CCF50
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x16CD050
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // DnsEndPoint
  #pragma pack(pop)
  static check_size<sizeof(DnsEndPoint), 32 + sizeof(::System::Threading::Tasks::Task_1<::System::Net::IPEndPoint*>*)> __GlobalNamespace_DnsEndPointSizeCheck;
  static_assert(sizeof(DnsEndPoint) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DnsEndPoint::get_endPoint
// Il2CppName: get_endPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPEndPoint* (GlobalNamespace::DnsEndPoint::*)()>(&GlobalNamespace::DnsEndPoint::get_endPoint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DnsEndPoint*), "get_endPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DnsEndPoint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::DnsEndPoint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::DnsEndPoint::GetEndPointAsync
// Il2CppName: GetEndPointAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::IPEndPoint*>* (GlobalNamespace::DnsEndPoint::*)()>(&GlobalNamespace::DnsEndPoint::GetEndPointAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DnsEndPoint*), "GetEndPointAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DnsEndPoint::GetEndPoint
// Il2CppName: GetEndPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPEndPoint* (GlobalNamespace::DnsEndPoint::*)()>(&GlobalNamespace::DnsEndPoint::GetEndPoint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DnsEndPoint*), "GetEndPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DnsEndPoint::GetEndPointInternal
// Il2CppName: GetEndPointInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPEndPoint* (GlobalNamespace::DnsEndPoint::*)()>(&GlobalNamespace::DnsEndPoint::GetEndPointInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DnsEndPoint*), "GetEndPointInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DnsEndPoint::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::DnsEndPoint::*)(::GlobalNamespace::DnsEndPoint*)>(&GlobalNamespace::DnsEndPoint::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "DnsEndPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DnsEndPoint*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DnsEndPoint::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::DnsEndPoint::*)()>(&GlobalNamespace::DnsEndPoint::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DnsEndPoint*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DnsEndPoint::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::DnsEndPoint::*)(::Il2CppObject*)>(&GlobalNamespace::DnsEndPoint::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DnsEndPoint*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DnsEndPoint::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::DnsEndPoint::*)()>(&GlobalNamespace::DnsEndPoint::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DnsEndPoint*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};