// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BurstSliderGameNoteController
#include "GlobalNamespace/BurstSliderGameNoteController.hpp"
// Including type: Zenject.MonoMemoryPool`1
#include "Zenject/MonoMemoryPool_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BurstSliderGameNoteController::Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BurstSliderGameNoteController::Pool*, "", "BurstSliderGameNoteController/Pool");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BurstSliderGameNoteController/Pool
  // [TokenAttribute] Offset: FFFFFFFF
  class BurstSliderGameNoteController::Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::BurstSliderGameNoteController*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x1404B24
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BurstSliderGameNoteController::Pool* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BurstSliderGameNoteController::Pool::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BurstSliderGameNoteController::Pool*, creationType>()));
    }
  }; // BurstSliderGameNoteController/Pool
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BurstSliderGameNoteController::Pool::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
