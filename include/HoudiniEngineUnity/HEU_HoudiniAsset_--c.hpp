// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_HoudiniAsset
#include "HoudiniEngineUnity/HEU_HoudiniAsset.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_Curve
  class HEU_Curve;
  // Forward declaring type: HEU_ObjectNode
  class HEU_ObjectNode;
  // Forward declaring type: HEU_MaterialData
  class HEU_MaterialData;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_HoudiniAsset/HoudiniEngineUnity.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class HEU_HoudiniAsset::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly HoudiniEngineUnity.HEU_HoudiniAsset/HoudiniEngineUnity.<>c <>9
    static HoudiniEngineUnity::HEU_HoudiniAsset::$$c* _get_$$9();
    // Set static field: static public readonly HoudiniEngineUnity.HEU_HoudiniAsset/HoudiniEngineUnity.<>c <>9
    static void _set_$$9(HoudiniEngineUnity::HEU_HoudiniAsset::$$c* value);
    // Get static field: static public System.Func`2<HoudiniEngineUnity.HEU_Curve,System.Boolean> <>9__309_0
    static System::Func_2<HoudiniEngineUnity::HEU_Curve*, bool>* _get_$$9__309_0();
    // Set static field: static public System.Func`2<HoudiniEngineUnity.HEU_Curve,System.Boolean> <>9__309_0
    static void _set_$$9__309_0(System::Func_2<HoudiniEngineUnity::HEU_Curve*, bool>* value);
    // Get static field: static public System.Func`2<HoudiniEngineUnity.HEU_ObjectNode,System.Boolean> <>9__364_0
    static System::Func_2<HoudiniEngineUnity::HEU_ObjectNode*, bool>* _get_$$9__364_0();
    // Set static field: static public System.Func`2<HoudiniEngineUnity.HEU_ObjectNode,System.Boolean> <>9__364_0
    static void _set_$$9__364_0(System::Func_2<HoudiniEngineUnity::HEU_ObjectNode*, bool>* value);
    // Get static field: static public System.Func`2<HoudiniEngineUnity.HEU_Curve,System.Boolean> <>9__364_1
    static System::Func_2<HoudiniEngineUnity::HEU_Curve*, bool>* _get_$$9__364_1();
    // Set static field: static public System.Func`2<HoudiniEngineUnity.HEU_Curve,System.Boolean> <>9__364_1
    static void _set_$$9__364_1(System::Func_2<HoudiniEngineUnity::HEU_Curve*, bool>* value);
    // Get static field: static public System.Func`2<HoudiniEngineUnity.HEU_MaterialData,System.Boolean> <>9__364_2
    static System::Func_2<HoudiniEngineUnity::HEU_MaterialData*, bool>* _get_$$9__364_2();
    // Set static field: static public System.Func`2<HoudiniEngineUnity.HEU_MaterialData,System.Boolean> <>9__364_2
    static void _set_$$9__364_2(System::Func_2<HoudiniEngineUnity::HEU_MaterialData*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x151C830
    static void _cctor();
    // System.Boolean <ClearInvalidCurves>b__309_0(HoudiniEngineUnity.HEU_Curve curve)
    // Offset: 0x151C89C
    bool $ClearInvalidCurves$b__309_0(HoudiniEngineUnity::HEU_Curve* curve);
    // System.Boolean <ClearInvalidLists>b__364_0(HoudiniEngineUnity.HEU_ObjectNode node)
    // Offset: 0x151C908
    bool $ClearInvalidLists$b__364_0(HoudiniEngineUnity::HEU_ObjectNode* node);
    // System.Boolean <ClearInvalidLists>b__364_1(HoudiniEngineUnity.HEU_Curve curve)
    // Offset: 0x151C974
    bool $ClearInvalidLists$b__364_1(HoudiniEngineUnity::HEU_Curve* curve);
    // System.Boolean <ClearInvalidLists>b__364_2(HoudiniEngineUnity.HEU_MaterialData data)
    // Offset: 0x151C9E0
    bool $ClearInvalidLists$b__364_2(HoudiniEngineUnity::HEU_MaterialData* data);
    // public System.Void .ctor()
    // Offset: 0x151C894
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_HoudiniAsset::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_HoudiniAsset::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_HoudiniAsset::$$c*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_HoudiniAsset/HoudiniEngineUnity.<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_HoudiniAsset::$$c*, "HoudiniEngineUnity", "HEU_HoudiniAsset/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_HoudiniAsset::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HoudiniEngineUnity::HEU_HoudiniAsset::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_HoudiniAsset::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_HoudiniAsset::$$c::$ClearInvalidCurves$b__309_0
// Il2CppName: <ClearInvalidCurves>b__309_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_HoudiniAsset::$$c::*)(HoudiniEngineUnity::HEU_Curve*)>(&HoudiniEngineUnity::HEU_HoudiniAsset::$$c::$ClearInvalidCurves$b__309_0)> {
  static const MethodInfo* get() {
    static auto* curve = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_Curve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_HoudiniAsset::$$c*), "<ClearInvalidCurves>b__309_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{curve});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_HoudiniAsset::$$c::$ClearInvalidLists$b__364_0
// Il2CppName: <ClearInvalidLists>b__364_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_HoudiniAsset::$$c::*)(HoudiniEngineUnity::HEU_ObjectNode*)>(&HoudiniEngineUnity::HEU_HoudiniAsset::$$c::$ClearInvalidLists$b__364_0)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_ObjectNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_HoudiniAsset::$$c*), "<ClearInvalidLists>b__364_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_HoudiniAsset::$$c::$ClearInvalidLists$b__364_1
// Il2CppName: <ClearInvalidLists>b__364_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_HoudiniAsset::$$c::*)(HoudiniEngineUnity::HEU_Curve*)>(&HoudiniEngineUnity::HEU_HoudiniAsset::$$c::$ClearInvalidLists$b__364_1)> {
  static const MethodInfo* get() {
    static auto* curve = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_Curve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_HoudiniAsset::$$c*), "<ClearInvalidLists>b__364_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{curve});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_HoudiniAsset::$$c::$ClearInvalidLists$b__364_2
// Il2CppName: <ClearInvalidLists>b__364_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_HoudiniAsset::$$c::*)(HoudiniEngineUnity::HEU_MaterialData*)>(&HoudiniEngineUnity::HEU_HoudiniAsset::$$c::$ClearInvalidLists$b__364_2)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_MaterialData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_HoudiniAsset::$$c*), "<ClearInvalidLists>b__364_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_HoudiniAsset::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!