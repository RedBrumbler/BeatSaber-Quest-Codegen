// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.CollectionBase
#include "System/Collections/CollectionBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security
namespace Mono::Security {
  // Forward declaring type: ASN1
  class ASN1_;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509ExtensionCollection
  class X509ExtensionCollection_;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::X509::X509ExtensionCollection_);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::X509ExtensionCollection_*, "Mono.Security.X509", "X509ExtensionCollection");
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.X509.X509ExtensionCollection
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 1072EF4
  class X509ExtensionCollection_ : public ::System::Collections::CollectionBase {
    public:
    public:
    // private System.Boolean readOnly
    // Size: 0x1
    // Offset: 0x18
    bool readOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::Collections::ArrayList*
    constexpr operator ::System::Collections::ArrayList*() const noexcept = delete;
    // Get instance field reference: private System.Boolean readOnly
    [[deprecated("Use field access instead!")]] bool& dyn_readOnly();
    // public System.Void .ctor(Mono.Security.ASN1 asn1)
    // Offset: 0x1FF4214
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509ExtensionCollection_* New_ctor(::Mono::Security::ASN1_* asn1) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::X509::X509ExtensionCollection_::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509ExtensionCollection_*, creationType>(asn1)));
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1FF5484
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Void .ctor()
    // Offset: 0x1FF547C
    // Implemented from: System.Collections.CollectionBase
    // Base method: System.Void CollectionBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509ExtensionCollection_* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::X509::X509ExtensionCollection_::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509ExtensionCollection_*, creationType>()));
    }
  }; // Mono.Security.X509.X509ExtensionCollection
  #pragma pack(pop)
  static check_size<sizeof(X509ExtensionCollection_), 24 + sizeof(bool)> __Mono_Security_X509_X509ExtensionCollection_SizeCheck;
  static_assert(sizeof(X509ExtensionCollection_) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::X509::X509ExtensionCollection_::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::X509::X509ExtensionCollection_::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Mono::Security::X509::X509ExtensionCollection_::*)()>(&Mono::Security::X509::X509ExtensionCollection_::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509ExtensionCollection_*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509ExtensionCollection_::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
