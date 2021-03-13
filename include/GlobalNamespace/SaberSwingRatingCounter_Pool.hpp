// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SaberSwingRatingCounter
#include "GlobalNamespace/SaberSwingRatingCounter.hpp"
// Including type: Zenject.MemoryPool`1
#include "Zenject/MemoryPool_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: SaberSwingRatingCounter/Pool
  // [] Offset: FFFFFFFF
  class SaberSwingRatingCounter::Pool : public Zenject::MemoryPool_1<GlobalNamespace::SaberSwingRatingCounter*> {
    public:
    // Creating value type constructor for type: Pool
    Pool() noexcept {}
    // public System.Void .ctor()
    // Offset: 0xF68A3C
    // Implemented from: Zenject.MemoryPool`1
    // Base method: System.Void MemoryPool_1::.ctor()
    // Base method: System.Void MemoryPoolBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaberSwingRatingCounter::Pool* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SaberSwingRatingCounter::Pool::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaberSwingRatingCounter::Pool*, creationType>()));
    }
  }; // SaberSwingRatingCounter/Pool
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberSwingRatingCounter::Pool*, "", "SaberSwingRatingCounter/Pool");