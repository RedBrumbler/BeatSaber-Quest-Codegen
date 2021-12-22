// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.SceneManagement.Scene
#include "UnityEngine/SceneManagement/Scene.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: UnityScenesHelper
  class UnityScenesHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::UnityScenesHelper);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityScenesHelper*, "", "UnityScenesHelper");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityScenesHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class UnityScenesHelper : public ::Il2CppObject {
    public:
    // static public System.Void SetActiveRootObjectsInScene(UnityEngine.SceneManagement.Scene scene, System.Boolean active)
    // Offset: 0x2642C04
    static void SetActiveRootObjectsInScene(UnityEngine::SceneManagement::Scene scene, bool active);
    // static public System.Collections.Generic.IEnumerable`1<T> FindComponentsOfTypeInScene(UnityEngine.SceneManagement.Scene activeScene, System.Boolean includeInactive)
    // Offset: 0xFFFFFFFF
    template<class T>
    static System::Collections::Generic::IEnumerable_1<T>* FindComponentsOfTypeInScene(UnityEngine::SceneManagement::Scene activeScene, bool includeInactive) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::UnityScenesHelper::FindComponentsOfTypeInScene");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "UnityScenesHelper", "FindComponentsOfTypeInScene", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(activeScene), ::il2cpp_utils::ExtractType(includeInactive)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<T>*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, activeScene, includeInactive);
    }
  }; // UnityScenesHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::UnityScenesHelper::SetActiveRootObjectsInScene
// Il2CppName: SetActiveRootObjectsInScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::SceneManagement::Scene, bool)>(&GlobalNamespace::UnityScenesHelper::SetActiveRootObjectsInScene)> {
  static const MethodInfo* get() {
    static auto* scene = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    static auto* active = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnityScenesHelper*), "SetActiveRootObjectsInScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scene, active});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnityScenesHelper::FindComponentsOfTypeInScene
// Il2CppName: FindComponentsOfTypeInScene
// Cannot write MetadataGetter for generic methods!
