// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.SubContainerCreatorByMethodBase
#include "Zenject/SubContainerCreatorByMethodBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`7<T1, T2, T3, T4, T5, T6, T7>
  template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
  class Action_7;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: SubContainerCreatorBindInfo
  class SubContainerCreatorBindInfo;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.SubContainerCreatorByMethod`6
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6>
  class SubContainerCreatorByMethod_6 : public Zenject::SubContainerCreatorByMethodBase {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private readonly System.Action`7<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> _installMethod
    // Size: 0x8
    // Offset: 0x0
    System::Action_7<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>* installMethod;
    // Field size check
    static_assert(sizeof(System::Action_7<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>*) == 0x8);
    public:
    // Creating conversion operator: operator System::Action_7<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>*
    constexpr operator System::Action_7<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>*() const noexcept {
      return installMethod;
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Action`7<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> _installMethod
    System::Action_7<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>*& dyn__installMethod() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerCreatorByMethod_6::dyn__installMethod");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_installMethod"))->offset;
      return *reinterpret_cast<System::Action_7<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(Zenject.DiContainer container, Zenject.SubContainerCreatorBindInfo containerBindInfo, System.Action`7<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> installMethod)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerCreatorByMethod_6<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>* New_ctor(Zenject::DiContainer* container, Zenject::SubContainerCreatorBindInfo* containerBindInfo, System::Action_7<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>* installMethod) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerCreatorByMethod_6::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerCreatorByMethod_6<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>*, creationType>(container, containerBindInfo, installMethod)));
    }
    // public override Zenject.DiContainer CreateSubContainer(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.InjectContext context)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.SubContainerCreatorByMethodBase
    // Base method: Zenject.DiContainer SubContainerCreatorByMethodBase::CreateSubContainer(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.InjectContext context)
    Zenject::DiContainer* CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, Zenject::InjectContext* context) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerCreatorByMethod_6::CreateSubContainer");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateSubContainer", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(args), ::il2cpp_utils::ExtractType(context)})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::DiContainer*, false>(this, ___internal__method, args, context);
    }
  }; // Zenject.SubContainerCreatorByMethod`6
  // Could not write size check! Type: Zenject.SubContainerCreatorByMethod`6 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::SubContainerCreatorByMethod_6, "Zenject", "SubContainerCreatorByMethod`6");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
