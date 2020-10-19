// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.Multiplier.FixedPointUtilities
#include "Org/BouncyCastle/Math/EC/Multiplier/FixedPointUtilities.hpp"
// Including type: Org.BouncyCastle.Math.EC.Multiplier.IPreCompCallback
#include "Org/BouncyCastle/Math/EC/Multiplier/IPreCompCallback.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECPoint
  class ECPoint;
  // Forward declaring type: ECLookupTable
  class ECLookupTable;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Forward declaring type: FixedPointPreCompInfo
  class FixedPointPreCompInfo;
  // Forward declaring type: PreCompInfo
  class PreCompInfo;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Autogenerated type: Org.BouncyCastle.Math.EC.Multiplier.FixedPointUtilities/FixedPointCallback
  class FixedPointUtilities::FixedPointCallback : public ::Il2CppObject, public Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback {
    public:
    // private readonly Org.BouncyCastle.Math.EC.ECPoint m_p
    // Offset: 0x10
    Org::BouncyCastle::Math::EC::ECPoint* m_p;
    // Creating conversion operator: operator Org::BouncyCastle::Math::EC::ECPoint*
    constexpr operator Org::BouncyCastle::Math::EC::ECPoint*() const noexcept {
      return m_p;
    }
    // System.Void .ctor(Org.BouncyCastle.Math.EC.ECPoint p)
    // Offset: 0x18F4C30
    static FixedPointUtilities::FixedPointCallback* New_ctor(Org::BouncyCastle::Math::EC::ECPoint* p);
    // private System.Boolean CheckExisting(Org.BouncyCastle.Math.EC.Multiplier.FixedPointPreCompInfo existingFP, System.Int32 n)
    // Offset: 0x18F5138
    bool CheckExisting(Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo* existingFP, int n);
    // private System.Boolean CheckTable(Org.BouncyCastle.Math.EC.ECLookupTable table, System.Int32 n)
    // Offset: 0x18F517C
    bool CheckTable(Org::BouncyCastle::Math::EC::ECLookupTable* table, int n);
    // public Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo Precompute(Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo existing)
    // Offset: 0x18F4CC0
    // Implemented from: Org.BouncyCastle.Math.EC.Multiplier.IPreCompCallback
    // Base method: Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo IPreCompCallback::Precompute(Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo existing)
    Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing);
  }; // Org.BouncyCastle.Math.EC.Multiplier.FixedPointUtilities/FixedPointCallback
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities::FixedPointCallback*, "Org.BouncyCastle.Math.EC.Multiplier", "FixedPointUtilities/FixedPointCallback");
#pragma pack(pop)