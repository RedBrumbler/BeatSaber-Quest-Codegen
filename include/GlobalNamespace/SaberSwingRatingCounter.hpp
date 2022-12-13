// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ISaberMovementDataProcessor
#include "GlobalNamespace/ISaberMovementDataProcessor.hpp"
// Including type: ISaberSwingRatingCounter
#include "GlobalNamespace/ISaberSwingRatingCounter.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Plane
#include "UnityEngine/Plane.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ISaberMovementData
  class ISaberMovementData;
  // Forward declaring type: LazyCopyHashSet`1<T>
  template<typename T>
  class LazyCopyHashSet_1;
  // Forward declaring type: ISaberSwingRatingCounterDidChangeReceiver
  class ISaberSwingRatingCounterDidChangeReceiver;
  // Forward declaring type: ISaberSwingRatingCounterDidFinishReceiver
  class ISaberSwingRatingCounterDidFinishReceiver;
  // Forward declaring type: BladeMovementDataElement
  struct BladeMovementDataElement;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SaberSwingRatingCounter
  class SaberSwingRatingCounter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SaberSwingRatingCounter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberSwingRatingCounter*, "", "SaberSwingRatingCounter");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC9
  #pragma pack(push, 1)
  // Autogenerated type: SaberSwingRatingCounter
  // [TokenAttribute] Offset: FFFFFFFF
  class SaberSwingRatingCounter : public ::Il2CppObject/*, public ::GlobalNamespace::ISaberMovementDataProcessor, public ::GlobalNamespace::ISaberSwingRatingCounter*/ {
    public:
    public:
    // private ISaberMovementData _saberMovementData
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::ISaberMovementData* saberMovementData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ISaberMovementData*) == 0x8);
    // private UnityEngine.Vector3 _cutPlaneNormal
    // Size: 0xC
    // Offset: 0x18
    ::UnityEngine::Vector3 cutPlaneNormal;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single _cutTime
    // Size: 0x4
    // Offset: 0x24
    float cutTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _afterCutRating
    // Size: 0x4
    // Offset: 0x28
    float afterCutRating;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _beforeCutRating
    // Size: 0x4
    // Offset: 0x2C
    float beforeCutRating;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Plane _notePlane
    // Size: 0x10
    // Offset: 0x30
    ::UnityEngine::Plane notePlane;
    // Field size check
    static_assert(sizeof(::UnityEngine::Plane) == 0x10);
    // private System.Boolean _notePlaneWasCut
    // Size: 0x1
    // Offset: 0x40
    bool notePlaneWasCut;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: notePlaneWasCut and: noteForward
    char __padding6[0x3] = {};
    // private UnityEngine.Vector3 _noteForward
    // Size: 0xC
    // Offset: 0x44
    ::UnityEngine::Vector3 noteForward;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Boolean _rateBeforeCut
    // Size: 0x1
    // Offset: 0x50
    bool rateBeforeCut;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _rateAfterCut
    // Size: 0x1
    // Offset: 0x51
    bool rateAfterCut;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: rateAfterCut and: didChangeReceivers
    char __padding9[0x6] = {};
    // private readonly LazyCopyHashSet`1<ISaberSwingRatingCounterDidChangeReceiver> _didChangeReceivers
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*>* didChangeReceivers;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*>*) == 0x8);
    // private readonly LazyCopyHashSet`1<ISaberSwingRatingCounterDidFinishReceiver> _didFinishReceivers
    // Size: 0x8
    // Offset: 0x60
    ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*>* didFinishReceivers;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*>*) == 0x8);
    // private UnityEngine.Vector3 _notePlaneCenter
    // Size: 0xC
    // Offset: 0x68
    ::UnityEngine::Vector3 notePlaneCenter;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _beforeCutTopPos
    // Size: 0xC
    // Offset: 0x74
    ::UnityEngine::Vector3 beforeCutTopPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _beforeCutBottomPos
    // Size: 0xC
    // Offset: 0x80
    ::UnityEngine::Vector3 beforeCutBottomPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _afterCutTopPos
    // Size: 0xC
    // Offset: 0x8C
    ::UnityEngine::Vector3 afterCutTopPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _afterCutBottomPos
    // Size: 0xC
    // Offset: 0x98
    ::UnityEngine::Vector3 afterCutBottomPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _newPlaneNormal
    // Size: 0xC
    // Offset: 0xA4
    ::UnityEngine::Vector3 newPlaneNormal;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _cutTopPos
    // Size: 0xC
    // Offset: 0xB0
    ::UnityEngine::Vector3 cutTopPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _cutBottomPos
    // Size: 0xC
    // Offset: 0xBC
    ::UnityEngine::Vector3 cutBottomPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Boolean _finished
    // Size: 0x1
    // Offset: 0xC8
    bool finished;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::ISaberMovementDataProcessor
    operator ::GlobalNamespace::ISaberMovementDataProcessor() noexcept {
      return *reinterpret_cast<::GlobalNamespace::ISaberMovementDataProcessor*>(this);
    }
    // Creating interface conversion operator: i_ISaberMovementDataProcessor
    inline ::GlobalNamespace::ISaberMovementDataProcessor* i_ISaberMovementDataProcessor() noexcept {
      return reinterpret_cast<::GlobalNamespace::ISaberMovementDataProcessor*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::ISaberSwingRatingCounter
    operator ::GlobalNamespace::ISaberSwingRatingCounter() noexcept {
      return *reinterpret_cast<::GlobalNamespace::ISaberSwingRatingCounter*>(this);
    }
    // Creating interface conversion operator: i_ISaberSwingRatingCounter
    inline ::GlobalNamespace::ISaberSwingRatingCounter* i_ISaberSwingRatingCounter() noexcept {
      return reinterpret_cast<::GlobalNamespace::ISaberSwingRatingCounter*>(this);
    }
    // Get instance field reference: private ISaberMovementData _saberMovementData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ISaberMovementData*& dyn__saberMovementData();
    // Get instance field reference: private UnityEngine.Vector3 _cutPlaneNormal
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__cutPlaneNormal();
    // Get instance field reference: private System.Single _cutTime
    [[deprecated("Use field access instead!")]] float& dyn__cutTime();
    // Get instance field reference: private System.Single _afterCutRating
    [[deprecated("Use field access instead!")]] float& dyn__afterCutRating();
    // Get instance field reference: private System.Single _beforeCutRating
    [[deprecated("Use field access instead!")]] float& dyn__beforeCutRating();
    // Get instance field reference: private UnityEngine.Plane _notePlane
    [[deprecated("Use field access instead!")]] ::UnityEngine::Plane& dyn__notePlane();
    // Get instance field reference: private System.Boolean _notePlaneWasCut
    [[deprecated("Use field access instead!")]] bool& dyn__notePlaneWasCut();
    // Get instance field reference: private UnityEngine.Vector3 _noteForward
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__noteForward();
    // Get instance field reference: private System.Boolean _rateBeforeCut
    [[deprecated("Use field access instead!")]] bool& dyn__rateBeforeCut();
    // Get instance field reference: private System.Boolean _rateAfterCut
    [[deprecated("Use field access instead!")]] bool& dyn__rateAfterCut();
    // Get instance field reference: private readonly LazyCopyHashSet`1<ISaberSwingRatingCounterDidChangeReceiver> _didChangeReceivers
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*>*& dyn__didChangeReceivers();
    // Get instance field reference: private readonly LazyCopyHashSet`1<ISaberSwingRatingCounterDidFinishReceiver> _didFinishReceivers
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*>*& dyn__didFinishReceivers();
    // Get instance field reference: private UnityEngine.Vector3 _notePlaneCenter
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__notePlaneCenter();
    // Get instance field reference: private UnityEngine.Vector3 _beforeCutTopPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__beforeCutTopPos();
    // Get instance field reference: private UnityEngine.Vector3 _beforeCutBottomPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__beforeCutBottomPos();
    // Get instance field reference: private UnityEngine.Vector3 _afterCutTopPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__afterCutTopPos();
    // Get instance field reference: private UnityEngine.Vector3 _afterCutBottomPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__afterCutBottomPos();
    // Get instance field reference: private UnityEngine.Vector3 _newPlaneNormal
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__newPlaneNormal();
    // Get instance field reference: private UnityEngine.Vector3 _cutTopPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__cutTopPos();
    // Get instance field reference: private UnityEngine.Vector3 _cutBottomPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__cutBottomPos();
    // Get instance field reference: private System.Boolean _finished
    [[deprecated("Use field access instead!")]] bool& dyn__finished();
    // public System.Single get_beforeCutRating()
    // Offset: 0x140F700
    float get_beforeCutRating();
    // public System.Single get_afterCutRating()
    // Offset: 0x140F708
    float get_afterCutRating();
    // public System.Void .ctor()
    // Offset: 0x1410638
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaberSwingRatingCounter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SaberSwingRatingCounter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaberSwingRatingCounter*, creationType>()));
    }
    // public System.Void RegisterDidChangeReceiver(ISaberSwingRatingCounterDidChangeReceiver receiver)
    // Offset: 0x140F710
    void RegisterDidChangeReceiver(::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver* receiver);
    // public System.Void RegisterDidFinishReceiver(ISaberSwingRatingCounterDidFinishReceiver receiver)
    // Offset: 0x140F778
    void RegisterDidFinishReceiver(::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver* receiver);
    // public System.Void UnregisterDidChangeReceiver(ISaberSwingRatingCounterDidChangeReceiver receiver)
    // Offset: 0x140F7E0
    void UnregisterDidChangeReceiver(::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver* receiver);
    // public System.Void UnregisterDidFinishReceiver(ISaberSwingRatingCounterDidFinishReceiver receiver)
    // Offset: 0x140F848
    void UnregisterDidFinishReceiver(::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver* receiver);
    // public System.Void Init(ISaberMovementData saberMovementData, UnityEngine.Vector3 notePosition, UnityEngine.Quaternion noteRotation, System.Boolean rateBeforeCut, System.Boolean rateAfterCut)
    // Offset: 0x140F8B0
    void Init(::GlobalNamespace::ISaberMovementData* saberMovementData, ::UnityEngine::Vector3 notePosition, ::UnityEngine::Quaternion noteRotation, bool rateBeforeCut, bool rateAfterCut);
    // public System.Void ProcessNewData(BladeMovementDataElement newData, BladeMovementDataElement prevData, System.Boolean prevDataAreValid)
    // Offset: 0x140FC20
    void ProcessNewData(::GlobalNamespace::BladeMovementDataElement newData, ::GlobalNamespace::BladeMovementDataElement prevData, bool prevDataAreValid);
    // public System.Void Finish()
    // Offset: 0x14101B8
    void Finish();
    // public System.Void DrawGizmos()
    // Offset: 0x1410354
    void DrawGizmos();
  }; // SaberSwingRatingCounter
  #pragma pack(pop)
  static check_size<sizeof(SaberSwingRatingCounter), 200 + sizeof(bool)> __GlobalNamespace_SaberSwingRatingCounterSizeCheck;
  static_assert(sizeof(SaberSwingRatingCounter) == 0xC9);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SaberSwingRatingCounter::get_beforeCutRating
// Il2CppName: get_beforeCutRating
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::SaberSwingRatingCounter::*)()>(&GlobalNamespace::SaberSwingRatingCounter::get_beforeCutRating)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberSwingRatingCounter*), "get_beforeCutRating", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberSwingRatingCounter::get_afterCutRating
// Il2CppName: get_afterCutRating
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::SaberSwingRatingCounter::*)()>(&GlobalNamespace::SaberSwingRatingCounter::get_afterCutRating)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberSwingRatingCounter*), "get_afterCutRating", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberSwingRatingCounter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SaberSwingRatingCounter::RegisterDidChangeReceiver
// Il2CppName: RegisterDidChangeReceiver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberSwingRatingCounter::*)(::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*)>(&GlobalNamespace::SaberSwingRatingCounter::RegisterDidChangeReceiver)> {
  static const MethodInfo* get() {
    static auto* receiver = &::il2cpp_utils::GetClassFromName("", "ISaberSwingRatingCounterDidChangeReceiver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberSwingRatingCounter*), "RegisterDidChangeReceiver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{receiver});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberSwingRatingCounter::RegisterDidFinishReceiver
// Il2CppName: RegisterDidFinishReceiver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberSwingRatingCounter::*)(::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*)>(&GlobalNamespace::SaberSwingRatingCounter::RegisterDidFinishReceiver)> {
  static const MethodInfo* get() {
    static auto* receiver = &::il2cpp_utils::GetClassFromName("", "ISaberSwingRatingCounterDidFinishReceiver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberSwingRatingCounter*), "RegisterDidFinishReceiver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{receiver});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberSwingRatingCounter::UnregisterDidChangeReceiver
// Il2CppName: UnregisterDidChangeReceiver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberSwingRatingCounter::*)(::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*)>(&GlobalNamespace::SaberSwingRatingCounter::UnregisterDidChangeReceiver)> {
  static const MethodInfo* get() {
    static auto* receiver = &::il2cpp_utils::GetClassFromName("", "ISaberSwingRatingCounterDidChangeReceiver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberSwingRatingCounter*), "UnregisterDidChangeReceiver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{receiver});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberSwingRatingCounter::UnregisterDidFinishReceiver
// Il2CppName: UnregisterDidFinishReceiver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberSwingRatingCounter::*)(::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*)>(&GlobalNamespace::SaberSwingRatingCounter::UnregisterDidFinishReceiver)> {
  static const MethodInfo* get() {
    static auto* receiver = &::il2cpp_utils::GetClassFromName("", "ISaberSwingRatingCounterDidFinishReceiver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberSwingRatingCounter*), "UnregisterDidFinishReceiver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{receiver});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberSwingRatingCounter::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberSwingRatingCounter::*)(::GlobalNamespace::ISaberMovementData*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, bool, bool)>(&GlobalNamespace::SaberSwingRatingCounter::Init)> {
  static const MethodInfo* get() {
    static auto* saberMovementData = &::il2cpp_utils::GetClassFromName("", "ISaberMovementData")->byval_arg;
    static auto* notePosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* noteRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* rateBeforeCut = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* rateAfterCut = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberSwingRatingCounter*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{saberMovementData, notePosition, noteRotation, rateBeforeCut, rateAfterCut});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberSwingRatingCounter::ProcessNewData
// Il2CppName: ProcessNewData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberSwingRatingCounter::*)(::GlobalNamespace::BladeMovementDataElement, ::GlobalNamespace::BladeMovementDataElement, bool)>(&GlobalNamespace::SaberSwingRatingCounter::ProcessNewData)> {
  static const MethodInfo* get() {
    static auto* newData = &::il2cpp_utils::GetClassFromName("", "BladeMovementDataElement")->byval_arg;
    static auto* prevData = &::il2cpp_utils::GetClassFromName("", "BladeMovementDataElement")->byval_arg;
    static auto* prevDataAreValid = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberSwingRatingCounter*), "ProcessNewData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newData, prevData, prevDataAreValid});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberSwingRatingCounter::Finish
// Il2CppName: Finish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberSwingRatingCounter::*)()>(&GlobalNamespace::SaberSwingRatingCounter::Finish)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberSwingRatingCounter*), "Finish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberSwingRatingCounter::DrawGizmos
// Il2CppName: DrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberSwingRatingCounter::*)()>(&GlobalNamespace::SaberSwingRatingCounter::DrawGizmos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberSwingRatingCounter*), "DrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
