// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.Poser
#include "RootMotion/FinalIK/Poser.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.GenericPoser
  class GenericPoser : public RootMotion::FinalIK::Poser {
    public:
    // Writing base type padding for base size: 0x4D to desired offset: 0x50
    char ___base_padding[0x3] = {};
    // Nested type: RootMotion::FinalIK::GenericPoser::Map
    class Map;
    // public RootMotion.FinalIK.GenericPoser/Map[] maps
    // Size: 0x8
    // Offset: 0x50
    ::Array<RootMotion::FinalIK::GenericPoser::Map*>* maps;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::GenericPoser::Map*>*) == 0x8);
    // Creating value type constructor for type: GenericPoser
    GenericPoser(::Array<RootMotion::FinalIK::GenericPoser::Map*>* maps_ = {}) noexcept : maps{maps_} {}
    // private System.Void StoreDefaultState()
    // Offset: 0x1C58580
    void StoreDefaultState();
    // private UnityEngine.Transform GetTargetNamed(System.String tName, UnityEngine.Transform[] array)
    // Offset: 0x1C584A4
    UnityEngine::Transform* GetTargetNamed(::Il2CppString* tName, ::Array<UnityEngine::Transform*>* array);
    // public override System.Void AutoMapping()
    // Offset: 0x1C5825C
    // Implemented from: RootMotion.FinalIK.Poser
    // Base method: System.Void Poser::AutoMapping()
    void AutoMapping();
    // protected override System.Void InitiatePoser()
    // Offset: 0x1C585E8
    // Implemented from: RootMotion.FinalIK.Poser
    // Base method: System.Void Poser::InitiatePoser()
    void InitiatePoser();
    // protected override System.Void UpdatePoser()
    // Offset: 0x1C585EC
    // Implemented from: RootMotion.FinalIK.Poser
    // Base method: System.Void Poser::UpdatePoser()
    void UpdatePoser();
    // protected override System.Void FixPoserTransforms()
    // Offset: 0x1C58894
    // Implemented from: RootMotion.FinalIK.Poser
    // Base method: System.Void Poser::FixPoserTransforms()
    void FixPoserTransforms();
    // public System.Void .ctor()
    // Offset: 0x1C58998
    // Implemented from: RootMotion.FinalIK.Poser
    // Base method: System.Void Poser::.ctor()
    // Base method: System.Void SolverManager::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GenericPoser* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::GenericPoser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GenericPoser*, creationType>()));
    }
  }; // RootMotion.FinalIK.GenericPoser
  #pragma pack(pop)
  static check_size<sizeof(GenericPoser), 80 + sizeof(::Array<RootMotion::FinalIK::GenericPoser::Map*>*)> __RootMotion_FinalIK_GenericPoserSizeCheck;
  static_assert(sizeof(GenericPoser) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::GenericPoser*, "RootMotion.FinalIK", "GenericPoser");
// Writing MetadataGetter for method: RootMotion::FinalIK::GenericPoser::StoreDefaultState
// Il2CppName: StoreDefaultState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GenericPoser::*)()>(&RootMotion::FinalIK::GenericPoser::StoreDefaultState)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GenericPoser*), "StoreDefaultState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GenericPoser::GetTargetNamed
// Il2CppName: GetTargetNamed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (RootMotion::FinalIK::GenericPoser::*)(::Il2CppString*, ::Array<UnityEngine::Transform*>*)>(&RootMotion::FinalIK::GenericPoser::GetTargetNamed)> {
  const MethodInfo* get() {
    static auto* tName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Transform"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GenericPoser*), "GetTargetNamed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tName, array});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GenericPoser::AutoMapping
// Il2CppName: AutoMapping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GenericPoser::*)()>(&RootMotion::FinalIK::GenericPoser::AutoMapping)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GenericPoser*), "AutoMapping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GenericPoser::InitiatePoser
// Il2CppName: InitiatePoser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GenericPoser::*)()>(&RootMotion::FinalIK::GenericPoser::InitiatePoser)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GenericPoser*), "InitiatePoser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GenericPoser::UpdatePoser
// Il2CppName: UpdatePoser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GenericPoser::*)()>(&RootMotion::FinalIK::GenericPoser::UpdatePoser)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GenericPoser*), "UpdatePoser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GenericPoser::FixPoserTransforms
// Il2CppName: FixPoserTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GenericPoser::*)()>(&RootMotion::FinalIK::GenericPoser::FixPoserTransforms)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GenericPoser*), "FixPoserTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GenericPoser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
