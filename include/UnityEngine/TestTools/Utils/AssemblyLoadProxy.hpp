// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.Utils.IAssemblyLoadProxy
#include "UnityEngine/TestTools/Utils/IAssemblyLoadProxy.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools::Utils
namespace UnityEngine::TestTools::Utils {
  // Forward declaring type: IAssemblyWrapper
  class IAssemblyWrapper;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.Utils
namespace UnityEngine::TestTools::Utils {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.Utils.AssemblyLoadProxy
  class AssemblyLoadProxy : public ::Il2CppObject/*, public UnityEngine::TestTools::Utils::IAssemblyLoadProxy*/ {
    public:
    // Creating value type constructor for type: AssemblyLoadProxy
    AssemblyLoadProxy() noexcept {}
    // Creating interface conversion operator: operator UnityEngine::TestTools::Utils::IAssemblyLoadProxy
    operator UnityEngine::TestTools::Utils::IAssemblyLoadProxy() noexcept {
      return *reinterpret_cast<UnityEngine::TestTools::Utils::IAssemblyLoadProxy*>(this);
    }
    // public UnityEngine.TestTools.Utils.IAssemblyWrapper Load(System.String assemblyString)
    // Offset: 0x23DE6A4
    UnityEngine::TestTools::Utils::IAssemblyWrapper* Load(::Il2CppString* assemblyString);
    // public System.Void .ctor()
    // Offset: 0x23DE764
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssemblyLoadProxy* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::Utils::AssemblyLoadProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssemblyLoadProxy*, creationType>()));
    }
  }; // UnityEngine.TestTools.Utils.AssemblyLoadProxy
  #pragma pack(pop)
  // Writing MetadataGetter for method: AssemblyLoadProxy::Load
  // Il2CppName: Load
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TestTools::Utils::IAssemblyWrapper* (AssemblyLoadProxy::*)(::Il2CppString*)>(&AssemblyLoadProxy::Load)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(AssemblyLoadProxy*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
    }
  };
  // Writing MetadataGetter for method: AssemblyLoadProxy::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AssemblyLoadProxy::*)()>(&AssemblyLoadProxy::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(AssemblyLoadProxy*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AssemblyLoadProxy::*)()>(&AssemblyLoadProxy::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(AssemblyLoadProxy*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::Utils::AssemblyLoadProxy*, "UnityEngine.TestTools.Utils", "AssemblyLoadProxy");
