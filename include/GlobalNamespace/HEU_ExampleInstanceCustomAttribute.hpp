// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_OutputAttribute
  class HEU_OutputAttribute;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: HEU_ExampleInstanceCustomAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class HEU_ExampleInstanceCustomAttribute : public UnityEngine::MonoBehaviour {
    public:
    // private System.Void InstancerCallback()
    // Offset: 0x141CA0C
    void InstancerCallback();
    // static private System.Void LogArray(System.String name, T[] arr, System.Int32 tupleSize)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void LogArray(::Il2CppString* name, ::ArrayW<T> arr, int tupleSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HEU_ExampleInstanceCustomAttribute::LogArray");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "HEU_ExampleInstanceCustomAttribute", "LogArray", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(name), ::il2cpp_utils::ExtractType(arr), ::il2cpp_utils::ExtractType(tupleSize)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, name, arr, tupleSize);
    }
    // static private System.Void LogAttr(HoudiniEngineUnity.HEU_OutputAttribute outAttr)
    // Offset: 0x141CD50
    static void LogAttr(HoudiniEngineUnity::HEU_OutputAttribute* outAttr);
    // public System.Void .ctor()
    // Offset: 0x141CE98
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_ExampleInstanceCustomAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HEU_ExampleInstanceCustomAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_ExampleInstanceCustomAttribute*, creationType>()));
    }
  }; // HEU_ExampleInstanceCustomAttribute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HEU_ExampleInstanceCustomAttribute*, "", "HEU_ExampleInstanceCustomAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HEU_ExampleInstanceCustomAttribute::InstancerCallback
// Il2CppName: InstancerCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HEU_ExampleInstanceCustomAttribute::*)()>(&GlobalNamespace::HEU_ExampleInstanceCustomAttribute::InstancerCallback)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HEU_ExampleInstanceCustomAttribute*), "InstancerCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HEU_ExampleInstanceCustomAttribute::LogArray
// Il2CppName: LogArray
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::HEU_ExampleInstanceCustomAttribute::LogAttr
// Il2CppName: LogAttr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(HoudiniEngineUnity::HEU_OutputAttribute*)>(&GlobalNamespace::HEU_ExampleInstanceCustomAttribute::LogAttr)> {
  static const MethodInfo* get() {
    static auto* outAttr = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_OutputAttribute")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HEU_ExampleInstanceCustomAttribute*), "LogAttr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{outAttr});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HEU_ExampleInstanceCustomAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
