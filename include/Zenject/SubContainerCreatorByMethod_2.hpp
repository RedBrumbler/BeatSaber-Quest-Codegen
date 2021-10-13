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
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
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
  // Autogenerated type: Zenject.SubContainerCreatorByMethod`2
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TParam2>
  class SubContainerCreatorByMethod_2 : public Zenject::SubContainerCreatorByMethodBase {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private readonly System.Action`3<Zenject.DiContainer,TParam1,TParam2> _installMethod
    // Size: 0x8
    // Offset: 0x0
    System::Action_3<Zenject::DiContainer*, TParam1, TParam2>* installMethod;
    // Field size check
    static_assert(sizeof(System::Action_3<Zenject::DiContainer*, TParam1, TParam2>*) == 0x8);
    public:
    // Creating conversion operator: operator System::Action_3<Zenject::DiContainer*, TParam1, TParam2>*
    constexpr operator System::Action_3<Zenject::DiContainer*, TParam1, TParam2>*() const noexcept {
      return installMethod;
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Action`3<Zenject.DiContainer,TParam1,TParam2> _installMethod
    System::Action_3<Zenject::DiContainer*, TParam1, TParam2>*& dyn__installMethod() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerCreatorByMethod_2::dyn__installMethod");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_installMethod"))->offset;
      return *reinterpret_cast<System::Action_3<Zenject::DiContainer*, TParam1, TParam2>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(Zenject.DiContainer container, Zenject.SubContainerCreatorBindInfo containerBindInfo, System.Action`3<Zenject.DiContainer,TParam1,TParam2> installMethod)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerCreatorByMethod_2<TParam1, TParam2>* New_ctor(Zenject::DiContainer* container, Zenject::SubContainerCreatorBindInfo* containerBindInfo, System::Action_3<Zenject::DiContainer*, TParam1, TParam2>* installMethod) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerCreatorByMethod_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerCreatorByMethod_2<TParam1, TParam2>*, creationType>(container, containerBindInfo, installMethod)));
    }
    // public override Zenject.DiContainer CreateSubContainer(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.InjectContext context)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.SubContainerCreatorByMethodBase
    // Base method: Zenject.DiContainer SubContainerCreatorByMethodBase::CreateSubContainer(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.InjectContext context)
    Zenject::DiContainer* CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, Zenject::InjectContext* context) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerCreatorByMethod_2::CreateSubContainer");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateSubContainer", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(args), ::il2cpp_utils::ExtractType(context)})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::DiContainer*, false>(this, ___internal__method, args, context);
    }
  }; // Zenject.SubContainerCreatorByMethod`2
  // Could not write size check! Type: Zenject.SubContainerCreatorByMethod`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::SubContainerCreatorByMethod_2, "Zenject", "SubContainerCreatorByMethod`2");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
