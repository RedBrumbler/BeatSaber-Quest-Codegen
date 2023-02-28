// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: OidCollection
  class OidCollection;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: OidEnumerator
  class OidEnumerator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::OidEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::OidEnumerator*, "System.Security.Cryptography", "OidEnumerator");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.OidEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class OidEnumerator : public ::Il2CppObject/*, public ::System::Collections::IEnumerator*/ {
    public:
    public:
    // private System.Security.Cryptography.OidCollection m_oids
    // Size: 0x8
    // Offset: 0x10
    ::System::Security::Cryptography::OidCollection* m_oids;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::OidCollection*) == 0x8);
    // private System.Int32 m_current
    // Size: 0x4
    // Offset: 0x18
    int m_current;
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
    // Get instance field reference: private System.Security.Cryptography.OidCollection m_oids
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::OidCollection*& dyn_m_oids();
    // Get instance field reference: private System.Int32 m_current
    [[deprecated("Use field access instead!")]] int& dyn_m_current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1C91EEC
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // System.Void .ctor(System.Security.Cryptography.OidCollection oids)
    // Offset: 0x1C91CBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OidEnumerator* New_ctor(::System::Security::Cryptography::OidCollection* oids) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::OidEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OidEnumerator*, creationType>(oids)));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x1C91F0C
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x1C91F74
    void Reset();
  }; // System.Security.Cryptography.OidEnumerator
  #pragma pack(pop)
  static check_size<sizeof(OidEnumerator), 24 + sizeof(int)> __System_Security_Cryptography_OidEnumeratorSizeCheck;
  static_assert(sizeof(OidEnumerator) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::OidEnumerator::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Security::Cryptography::OidEnumerator::*)()>(&System::Security::Cryptography::OidEnumerator::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::OidEnumerator*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::OidEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::OidEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::OidEnumerator::*)()>(&System::Security::Cryptography::OidEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::OidEnumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::OidEnumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::OidEnumerator::*)()>(&System::Security::Cryptography::OidEnumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::OidEnumerator*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
