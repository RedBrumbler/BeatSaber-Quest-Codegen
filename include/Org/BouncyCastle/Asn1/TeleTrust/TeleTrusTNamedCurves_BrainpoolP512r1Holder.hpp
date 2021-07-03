// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.TeleTrust.TeleTrusTNamedCurves
#include "Org/BouncyCastle/Asn1/TeleTrust/TeleTrusTNamedCurves.hpp"
// Including type: Org.BouncyCastle.Asn1.X9.X9ECParametersHolder
#include "Org/BouncyCastle/Asn1/X9/X9ECParametersHolder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1::X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Forward declaring type: X9ECParameters
  class X9ECParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.TeleTrust
namespace Org::BouncyCastle::Asn1::TeleTrust {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.TeleTrust.TeleTrusTNamedCurves/BrainpoolP512r1Holder
  class TeleTrusTNamedCurves::BrainpoolP512r1Holder : public Org::BouncyCastle::Asn1::X9::X9ECParametersHolder {
    public:
    // Creating value type constructor for type: BrainpoolP512r1Holder
    BrainpoolP512r1Holder() noexcept {}
    // Get static field: static readonly Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Instance
    static Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* _get_Instance();
    // Set static field: static readonly Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Instance
    static void _set_Instance(Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value);
    // static private System.Void .cctor()
    // Offset: 0x174F5D8
    static void _cctor();
    // private System.Void .ctor()
    // Offset: 0x174F45C
    // Implemented from: Org.BouncyCastle.Asn1.X9.X9ECParametersHolder
    // Base method: System.Void X9ECParametersHolder::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TeleTrusTNamedCurves::BrainpoolP512r1Holder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves::BrainpoolP512r1Holder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TeleTrusTNamedCurves::BrainpoolP512r1Holder*, creationType>()));
    }
    // protected override Org.BouncyCastle.Asn1.X9.X9ECParameters CreateParameters()
    // Offset: 0x174F464
    // Implemented from: Org.BouncyCastle.Asn1.X9.X9ECParametersHolder
    // Base method: Org.BouncyCastle.Asn1.X9.X9ECParameters X9ECParametersHolder::CreateParameters()
    Org::BouncyCastle::Asn1::X9::X9ECParameters* CreateParameters();
  }; // Org.BouncyCastle.Asn1.TeleTrust.TeleTrusTNamedCurves/BrainpoolP512r1Holder
  #pragma pack(pop)
  // Writing MetadataGetter for method: TeleTrusTNamedCurves::BrainpoolP512r1Holder::_cctor
  // Il2CppName: .cctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&TeleTrusTNamedCurves::BrainpoolP512r1Holder::_cctor)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(TeleTrusTNamedCurves::BrainpoolP512r1Holder*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: TeleTrusTNamedCurves::BrainpoolP512r1Holder::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TeleTrusTNamedCurves::BrainpoolP512r1Holder::*)()>(&TeleTrusTNamedCurves::BrainpoolP512r1Holder::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(TeleTrusTNamedCurves::BrainpoolP512r1Holder*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TeleTrusTNamedCurves::BrainpoolP512r1Holder::*)()>(&TeleTrusTNamedCurves::BrainpoolP512r1Holder::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(TeleTrusTNamedCurves::BrainpoolP512r1Holder*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: TeleTrusTNamedCurves::BrainpoolP512r1Holder::CreateParameters
  // Il2CppName: CreateParameters
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X9::X9ECParameters* (TeleTrusTNamedCurves::BrainpoolP512r1Holder::*)()>(&TeleTrusTNamedCurves::BrainpoolP512r1Holder::CreateParameters)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(TeleTrusTNamedCurves::BrainpoolP512r1Holder*), "CreateParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTNamedCurves::BrainpoolP512r1Holder*, "Org.BouncyCastle.Asn1.TeleTrust", "TeleTrusTNamedCurves/BrainpoolP512r1Holder");
