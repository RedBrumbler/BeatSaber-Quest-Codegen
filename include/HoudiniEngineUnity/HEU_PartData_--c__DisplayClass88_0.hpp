// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_PartData
#include "HoudiniEngineUnity/HEU_PartData.hpp"
// Including type: HoudiniEngineUnity.TransformData
#include "HoudiniEngineUnity/TransformData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_PartData::$$c__DisplayClass88_0);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_PartData::$$c__DisplayClass88_0*, "HoudiniEngineUnity", "HEU_PartData/<>c__DisplayClass88_0");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_PartData/HoudiniEngineUnity.<>c__DisplayClass88_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class HEU_PartData::$$c__DisplayClass88_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Collections.Generic.List`1<HoudiniEngineUnity.TransformData> previousTransformValues
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>* previousTransformValues;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*
    constexpr operator ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*() const noexcept {
      return previousTransformValues;
    }
    // Get instance field reference: public System.Collections.Generic.List`1<HoudiniEngineUnity.TransformData> previousTransformValues
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*& dyn_previousTransformValues();
    // public System.Void .ctor()
    // Offset: 0x1B490A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_PartData::$$c__DisplayClass88_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_PartData::$$c__DisplayClass88_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_PartData::$$c__DisplayClass88_0*, creationType>()));
    }
    // System.Void <BakePartToGameObject>b__0(UnityEngine.Transform trans)
    // Offset: 0x1B4A374
    void $BakePartToGameObject$b__0(::UnityEngine::Transform* trans);
  }; // HoudiniEngineUnity.HEU_PartData/HoudiniEngineUnity.<>c__DisplayClass88_0
  #pragma pack(pop)
  static check_size<sizeof(HEU_PartData::$$c__DisplayClass88_0), 16 + sizeof(::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*)> __HoudiniEngineUnity_HEU_PartData_$$c__DisplayClass88_0SizeCheck;
  static_assert(sizeof(HEU_PartData::$$c__DisplayClass88_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PartData::$$c__DisplayClass88_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PartData::$$c__DisplayClass88_0::$BakePartToGameObject$b__0
// Il2CppName: <BakePartToGameObject>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PartData::$$c__DisplayClass88_0::*)(::UnityEngine::Transform*)>(&HoudiniEngineUnity::HEU_PartData::$$c__DisplayClass88_0::$BakePartToGameObject$b__0)> {
  static const MethodInfo* get() {
    static auto* trans = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PartData::$$c__DisplayClass88_0*), "<BakePartToGameObject>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{trans});
  }
};
