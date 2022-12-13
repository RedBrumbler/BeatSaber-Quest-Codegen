// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Policy
namespace System::Security::Policy {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Security.Policy
namespace System::Security::Policy {
  // Forward declaring type: Evidence
  class Evidence;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Policy::Evidence);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Policy::Evidence*, "System.Security.Policy", "Evidence");
// Type namespace: System.Security.Policy
namespace System::Security::Policy {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Policy.Evidence
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 107680C
  // [MonoTODOAttribute] Offset: 107680C
  class Evidence : public ::Il2CppObject/*, public ::System::Collections::ICollection*/ {
    public:
    // Nested type: ::System::Security::Policy::Evidence::EvidenceEnumerator
    class EvidenceEnumerator;
    public:
    // private System.Boolean _locked
    // Size: 0x1
    // Offset: 0x10
    bool locked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: locked and: hostEvidenceList
    char __padding0[0x7] = {};
    // private System.Collections.ArrayList hostEvidenceList
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::ArrayList* hostEvidenceList;
    // Field size check
    static_assert(sizeof(::System::Collections::ArrayList*) == 0x8);
    // private System.Collections.ArrayList assemblyEvidenceList
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::ArrayList* assemblyEvidenceList;
    // Field size check
    static_assert(sizeof(::System::Collections::ArrayList*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::ICollection
    operator ::System::Collections::ICollection() noexcept {
      return *reinterpret_cast<::System::Collections::ICollection*>(this);
    }
    // Creating interface conversion operator: i_ICollection
    inline ::System::Collections::ICollection* i_ICollection() noexcept {
      return reinterpret_cast<::System::Collections::ICollection*>(this);
    }
    // Get instance field reference: private System.Boolean _locked
    [[deprecated("Use field access instead!")]] bool& dyn__locked();
    // Get instance field reference: private System.Collections.ArrayList hostEvidenceList
    [[deprecated("Use field access instead!")]] ::System::Collections::ArrayList*& dyn_hostEvidenceList();
    // Get instance field reference: private System.Collections.ArrayList assemblyEvidenceList
    [[deprecated("Use field access instead!")]] ::System::Collections::ArrayList*& dyn_assemblyEvidenceList();
    // public System.Int32 get_Count()
    // Offset: 0x1C274A8
    int get_Count();
    // public System.Object get_SyncRoot()
    // Offset: 0x1C27508
    ::Il2CppObject* get_SyncRoot();
    // public System.Void CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x1C2750C
    void CopyTo(::System::Array* array, int index);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x1C275D4
    ::System::Collections::IEnumerator* GetEnumerator();
    // public System.Void .ctor()
    // Offset: 0x1C274A0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Evidence* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Policy::Evidence::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Evidence*, creationType>()));
    }
  }; // System.Security.Policy.Evidence
  #pragma pack(pop)
  static check_size<sizeof(Evidence), 32 + sizeof(::System::Collections::ArrayList*)> __System_Security_Policy_EvidenceSizeCheck;
  static_assert(sizeof(Evidence) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Policy::Evidence::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Policy::Evidence::*)()>(&System::Security::Policy::Evidence::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Policy::Evidence*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Policy::Evidence::get_SyncRoot
// Il2CppName: get_SyncRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Security::Policy::Evidence::*)()>(&System::Security::Policy::Evidence::get_SyncRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Policy::Evidence*), "get_SyncRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Policy::Evidence::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Policy::Evidence::*)(::System::Array*, int)>(&System::Security::Policy::Evidence::CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Policy::Evidence*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index});
  }
};
// Writing MetadataGetter for method: System::Security::Policy::Evidence::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Security::Policy::Evidence::*)()>(&System::Security::Policy::Evidence::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Policy::Evidence*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Policy::Evidence::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
