// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FPSCounter
  class FPSCounter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FPSCounter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FPSCounter*, "", "FPSCounter");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: FPSCounter
  // [TokenAttribute] Offset: FFFFFFFF
  class FPSCounter : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Int32 <currentFPS>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    int currentFPS;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <lowestFPS>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    int lowestFPS;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <highestFPS>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    int highestFPS;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <droppedFrames>k__BackingField
    // Size: 0x4
    // Offset: 0x24
    int droppedFrames;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _timeBuffer
    // Size: 0x4
    // Offset: 0x28
    float timeBuffer;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _frameCounter
    // Size: 0x4
    // Offset: 0x2C
    int frameCounter;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _minDeltaTime
    // Size: 0x4
    // Offset: 0x30
    float minDeltaTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Int32 <currentFPS>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$currentFPS$k__BackingField();
    // Get instance field reference: private System.Int32 <lowestFPS>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$lowestFPS$k__BackingField();
    // Get instance field reference: private System.Int32 <highestFPS>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$highestFPS$k__BackingField();
    // Get instance field reference: private System.Int32 <droppedFrames>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$droppedFrames$k__BackingField();
    // Get instance field reference: private System.Single _timeBuffer
    [[deprecated("Use field access instead!")]] float& dyn__timeBuffer();
    // Get instance field reference: private System.Int32 _frameCounter
    [[deprecated("Use field access instead!")]] int& dyn__frameCounter();
    // Get instance field reference: private System.Single _minDeltaTime
    [[deprecated("Use field access instead!")]] float& dyn__minDeltaTime();
    // public System.Int32 get_currentFPS()
    // Offset: 0x13C6A5C
    int get_currentFPS();
    // private System.Void set_currentFPS(System.Int32 value)
    // Offset: 0x13C6A64
    void set_currentFPS(int value);
    // public System.Int32 get_lowestFPS()
    // Offset: 0x13C6A6C
    int get_lowestFPS();
    // private System.Void set_lowestFPS(System.Int32 value)
    // Offset: 0x13C6A74
    void set_lowestFPS(int value);
    // public System.Int32 get_highestFPS()
    // Offset: 0x13C6A7C
    int get_highestFPS();
    // private System.Void set_highestFPS(System.Int32 value)
    // Offset: 0x13C6A84
    void set_highestFPS(int value);
    // public System.Int32 get_droppedFrames()
    // Offset: 0x13C6A8C
    int get_droppedFrames();
    // private System.Void set_droppedFrames(System.Int32 value)
    // Offset: 0x13C6A94
    void set_droppedFrames(int value);
    // public System.Void .ctor()
    // Offset: 0x13C6C0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FPSCounter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FPSCounter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FPSCounter*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x13C6A9C
    void Awake();
    // protected System.Void Update()
    // Offset: 0x13C6AAC
    void Update();
  }; // FPSCounter
  #pragma pack(pop)
  static check_size<sizeof(FPSCounter), 48 + sizeof(float)> __GlobalNamespace_FPSCounterSizeCheck;
  static_assert(sizeof(FPSCounter) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FPSCounter::get_currentFPS
// Il2CppName: get_currentFPS
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::FPSCounter::*)()>(&GlobalNamespace::FPSCounter::get_currentFPS)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FPSCounter*), "get_currentFPS", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FPSCounter::set_currentFPS
// Il2CppName: set_currentFPS
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FPSCounter::*)(int)>(&GlobalNamespace::FPSCounter::set_currentFPS)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FPSCounter*), "set_currentFPS", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FPSCounter::get_lowestFPS
// Il2CppName: get_lowestFPS
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::FPSCounter::*)()>(&GlobalNamespace::FPSCounter::get_lowestFPS)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FPSCounter*), "get_lowestFPS", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FPSCounter::set_lowestFPS
// Il2CppName: set_lowestFPS
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FPSCounter::*)(int)>(&GlobalNamespace::FPSCounter::set_lowestFPS)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FPSCounter*), "set_lowestFPS", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FPSCounter::get_highestFPS
// Il2CppName: get_highestFPS
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::FPSCounter::*)()>(&GlobalNamespace::FPSCounter::get_highestFPS)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FPSCounter*), "get_highestFPS", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FPSCounter::set_highestFPS
// Il2CppName: set_highestFPS
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FPSCounter::*)(int)>(&GlobalNamespace::FPSCounter::set_highestFPS)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FPSCounter*), "set_highestFPS", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FPSCounter::get_droppedFrames
// Il2CppName: get_droppedFrames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::FPSCounter::*)()>(&GlobalNamespace::FPSCounter::get_droppedFrames)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FPSCounter*), "get_droppedFrames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FPSCounter::set_droppedFrames
// Il2CppName: set_droppedFrames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FPSCounter::*)(int)>(&GlobalNamespace::FPSCounter::set_droppedFrames)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FPSCounter*), "set_droppedFrames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FPSCounter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::FPSCounter::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FPSCounter::*)()>(&GlobalNamespace::FPSCounter::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FPSCounter*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FPSCounter::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FPSCounter::*)()>(&GlobalNamespace::FPSCounter::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FPSCounter*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
