// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: PoolExceededFixedSizeException
  class PoolExceededFixedSizeException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::PoolExceededFixedSizeException);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PoolExceededFixedSizeException*, "Zenject", "PoolExceededFixedSizeException");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.PoolExceededFixedSizeException
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class PoolExceededFixedSizeException : public ::System::Exception {
    public:
    // public System.Void .ctor(System.String errorMessage)
    // Offset: 0x1CC16A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PoolExceededFixedSizeException* New_ctor(::StringW errorMessage) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PoolExceededFixedSizeException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PoolExceededFixedSizeException*, creationType>(errorMessage)));
    }
  }; // Zenject.PoolExceededFixedSizeException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::PoolExceededFixedSizeException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
