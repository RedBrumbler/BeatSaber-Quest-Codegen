// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: UnityEngine.GradientColorKey
#include "UnityEngine/GradientColorKey.hpp"
// Including type: UnityEngine.GradientAlphaKey
#include "UnityEngine/GradientAlphaKey.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GradientMode
  struct GradientMode;
  // Skipping declaration: Color because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Gradient
  class Gradient;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Gradient);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Gradient*, "UnityEngine", "Gradient");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Gradient
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: 108C004
  // [NativeHeaderAttribute] Offset: 108C004
  class Gradient : public ::Il2CppObject/*, public ::System::IEquatable_1<::UnityEngine::Gradient*>*/ {
    public:
    public:
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::Gradient*>
    operator ::System::IEquatable_1<::UnityEngine::Gradient*>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::Gradient*>*>(this);
    }
    // Creating interface conversion operator: i_Gradient
    inline ::System::IEquatable_1<::UnityEngine::Gradient*>* i_Gradient() noexcept {
      return reinterpret_cast<::System::IEquatable_1<::UnityEngine::Gradient*>*>(this);
    }
    // Creating conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // Get instance field reference: System.IntPtr m_Ptr
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_m_Ptr();
    // public UnityEngine.GradientColorKey[] get_colorKeys()
    // Offset: 0x200E270
    ::ArrayW<::UnityEngine::GradientColorKey> get_colorKeys();
    // public System.Void set_colorKeys(UnityEngine.GradientColorKey[] value)
    // Offset: 0x200E2B0
    void set_colorKeys(::ArrayW<::UnityEngine::GradientColorKey> value);
    // public UnityEngine.GradientAlphaKey[] get_alphaKeys()
    // Offset: 0x200E300
    ::ArrayW<::UnityEngine::GradientAlphaKey> get_alphaKeys();
    // public System.Void set_mode(UnityEngine.GradientMode value)
    // Offset: 0x200E340
    void set_mode(::UnityEngine::GradientMode value);
    // public System.Void .ctor()
    // Offset: 0x200E0CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Gradient* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Gradient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Gradient*, creationType>()));
    }
    // static private System.IntPtr Init()
    // Offset: 0x200E008
    static ::System::IntPtr Init();
    // private System.Void Cleanup()
    // Offset: 0x200E03C
    void Cleanup();
    // private System.Boolean Internal_Equals(System.IntPtr other)
    // Offset: 0x200E07C
    bool Internal_Equals(::System::IntPtr other);
    // public UnityEngine.Color Evaluate(System.Single time)
    // Offset: 0x200E1A4
    ::UnityEngine::Color Evaluate(float time);
    // public System.Void SetKeys(UnityEngine.GradientColorKey[] colorKeys, UnityEngine.GradientAlphaKey[] alphaKeys)
    // Offset: 0x200E390
    void SetKeys(::ArrayW<::UnityEngine::GradientColorKey> colorKeys, ::ArrayW<::UnityEngine::GradientAlphaKey> alphaKeys);
    // public System.Boolean Equals(UnityEngine.Gradient other)
    // Offset: 0x200E4C4
    bool Equals(::UnityEngine::Gradient* other);
    // private System.Void Evaluate_Injected(System.Single time, out UnityEngine.Color ret)
    // Offset: 0x200E210
    void Evaluate_Injected(float time, ByRef<::UnityEngine::Color> ret);
    // protected override System.Void Finalize()
    // Offset: 0x200E118
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0x200E3E8
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public override System.Int32 GetHashCode()
    // Offset: 0x200E594
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.Gradient
  #pragma pack(pop)
  static check_size<sizeof(Gradient), 16 + sizeof(::System::IntPtr)> __UnityEngine_GradientSizeCheck;
  static_assert(sizeof(Gradient) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Gradient::get_colorKeys
// Il2CppName: get_colorKeys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::GradientColorKey> (UnityEngine::Gradient::*)()>(&UnityEngine::Gradient::get_colorKeys)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gradient*), "get_colorKeys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Gradient::set_colorKeys
// Il2CppName: set_colorKeys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Gradient::*)(::ArrayW<::UnityEngine::GradientColorKey>)>(&UnityEngine::Gradient::set_colorKeys)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GradientColorKey"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gradient*), "set_colorKeys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Gradient::get_alphaKeys
// Il2CppName: get_alphaKeys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::GradientAlphaKey> (UnityEngine::Gradient::*)()>(&UnityEngine::Gradient::get_alphaKeys)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gradient*), "get_alphaKeys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Gradient::set_mode
// Il2CppName: set_mode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Gradient::*)(::UnityEngine::GradientMode)>(&UnityEngine::Gradient::set_mode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "GradientMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gradient*), "set_mode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Gradient::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Gradient::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&UnityEngine::Gradient::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gradient*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Gradient::Cleanup
// Il2CppName: Cleanup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Gradient::*)()>(&UnityEngine::Gradient::Cleanup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gradient*), "Cleanup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Gradient::Internal_Equals
// Il2CppName: Internal_Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Gradient::*)(::System::IntPtr)>(&UnityEngine::Gradient::Internal_Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gradient*), "Internal_Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Gradient::Evaluate
// Il2CppName: Evaluate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (UnityEngine::Gradient::*)(float)>(&UnityEngine::Gradient::Evaluate)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gradient*), "Evaluate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: UnityEngine::Gradient::SetKeys
// Il2CppName: SetKeys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Gradient::*)(::ArrayW<::UnityEngine::GradientColorKey>, ::ArrayW<::UnityEngine::GradientAlphaKey>)>(&UnityEngine::Gradient::SetKeys)> {
  static const MethodInfo* get() {
    static auto* colorKeys = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GradientColorKey"), 1)->byval_arg;
    static auto* alphaKeys = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GradientAlphaKey"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gradient*), "SetKeys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colorKeys, alphaKeys});
  }
};
// Writing MetadataGetter for method: UnityEngine::Gradient::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Gradient::*)(::UnityEngine::Gradient*)>(&UnityEngine::Gradient::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Gradient")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gradient*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Gradient::Evaluate_Injected
// Il2CppName: Evaluate_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Gradient::*)(float, ByRef<::UnityEngine::Color>)>(&UnityEngine::Gradient::Evaluate_Injected)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gradient*), "Evaluate_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Gradient::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Gradient::*)()>(&UnityEngine::Gradient::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gradient*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Gradient::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Gradient::*)(::Il2CppObject*)>(&UnityEngine::Gradient::Equals)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gradient*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: UnityEngine::Gradient::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Gradient::*)()>(&UnityEngine::Gradient::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gradient*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
