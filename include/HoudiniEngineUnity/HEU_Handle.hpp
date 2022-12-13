// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: HoudiniEngineUnity.IEquivable`1
#include "HoudiniEngineUnity/IEquivable_1.hpp"
// Including type: HoudiniEngineUnity.HAPI_RSTOrder
#include "HoudiniEngineUnity/HAPI_RSTOrder.hpp"
// Including type: HoudiniEngineUnity.HAPI_XYZOrder
#include "HoudiniEngineUnity/HAPI_XYZOrder.hpp"
// Including type: HoudiniEngineUnity.HAPI_TransformEuler
#include "HoudiniEngineUnity/HAPI_TransformEuler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_HandleParamBinding
  class HEU_HandleParamBinding;
  // Skipping declaration: HEU_HandleType because it is already included!
  // Forward declaring type: HEU_SessionBase
  class HEU_SessionBase;
  // Forward declaring type: HAPI_HandleInfo
  struct HAPI_HandleInfo;
  // Forward declaring type: HEU_Parameters
  class HEU_Parameters;
  // Forward declaring type: HEU_HoudiniAsset
  class HEU_HoudiniAsset;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_Handle
  class HEU_Handle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_Handle);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_Handle*, "HoudiniEngineUnity", "HEU_Handle");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_Handle
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_Handle : public ::UnityEngine::ScriptableObject/*, public ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_Handle*>*/ {
    public:
    // Nested type: ::HoudiniEngineUnity::HEU_Handle::HEU_HandleType
    struct HEU_HandleType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: HoudiniEngineUnity.HEU_Handle/HoudiniEngineUnity.HEU_HandleType
    // [TokenAttribute] Offset: FFFFFFFF
    struct HEU_HandleType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: HEU_HandleType
      constexpr HEU_HandleType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public HoudiniEngineUnity.HEU_Handle/HoudiniEngineUnity.HEU_HandleType XFORM
      static constexpr const int XFORM = 0;
      // Get static field: static public HoudiniEngineUnity.HEU_Handle/HoudiniEngineUnity.HEU_HandleType XFORM
      static ::HoudiniEngineUnity::HEU_Handle::HEU_HandleType _get_XFORM();
      // Set static field: static public HoudiniEngineUnity.HEU_Handle/HoudiniEngineUnity.HEU_HandleType XFORM
      static void _set_XFORM(::HoudiniEngineUnity::HEU_Handle::HEU_HandleType value);
      // static field const value: static public HoudiniEngineUnity.HEU_Handle/HoudiniEngineUnity.HEU_HandleType UNSUPPORTED
      static constexpr const int UNSUPPORTED = 1;
      // Get static field: static public HoudiniEngineUnity.HEU_Handle/HoudiniEngineUnity.HEU_HandleType UNSUPPORTED
      static ::HoudiniEngineUnity::HEU_Handle::HEU_HandleType _get_UNSUPPORTED();
      // Set static field: static public HoudiniEngineUnity.HEU_Handle/HoudiniEngineUnity.HEU_HandleType UNSUPPORTED
      static void _set_UNSUPPORTED(::HoudiniEngineUnity::HEU_Handle::HEU_HandleType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // HoudiniEngineUnity.HEU_Handle/HoudiniEngineUnity.HEU_HandleType
    #pragma pack(pop)
    static check_size<sizeof(HEU_Handle::HEU_HandleType), 0 + sizeof(int)> __HoudiniEngineUnity_HEU_Handle_HEU_HandleTypeSizeCheck;
    static_assert(sizeof(HEU_Handle::HEU_HandleType) == 0x4);
    public:
    // private System.String _handleName
    // Size: 0x8
    // Offset: 0x18
    ::StringW handleName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private HoudiniEngineUnity.HEU_Handle/HoudiniEngineUnity.HEU_HandleType _handleType
    // Size: 0x4
    // Offset: 0x20
    ::HoudiniEngineUnity::HEU_Handle::HEU_HandleType handleType;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HEU_Handle::HEU_HandleType) == 0x4);
    // private System.Int32 _handleIndex
    // Size: 0x4
    // Offset: 0x24
    int handleIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private HoudiniEngineUnity.HEU_HandleParamBinding _handleParamTranslateBinding
    // Size: 0x8
    // Offset: 0x28
    ::HoudiniEngineUnity::HEU_HandleParamBinding* handleParamTranslateBinding;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HEU_HandleParamBinding*) == 0x8);
    // private HoudiniEngineUnity.HEU_HandleParamBinding _handleParamRotateBinding
    // Size: 0x8
    // Offset: 0x30
    ::HoudiniEngineUnity::HEU_HandleParamBinding* handleParamRotateBinding;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HEU_HandleParamBinding*) == 0x8);
    // private HoudiniEngineUnity.HEU_HandleParamBinding _handleParamScaleBinding
    // Size: 0x8
    // Offset: 0x38
    ::HoudiniEngineUnity::HEU_HandleParamBinding* handleParamScaleBinding;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HEU_HandleParamBinding*) == 0x8);
    // private UnityEngine.Vector3 _handlePosition
    // Size: 0xC
    // Offset: 0x40
    ::UnityEngine::Vector3 handlePosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion _handleRotation
    // Size: 0x10
    // Offset: 0x4C
    ::UnityEngine::Quaternion handleRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 _handleScale
    // Size: 0xC
    // Offset: 0x5C
    ::UnityEngine::Vector3 handleScale;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private HoudiniEngineUnity.HAPI_RSTOrder _rstOrder
    // Size: 0x4
    // Offset: 0x68
    ::HoudiniEngineUnity::HAPI_RSTOrder rstOrder;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HAPI_RSTOrder) == 0x4);
    // private HoudiniEngineUnity.HAPI_XYZOrder _xyzOrder
    // Size: 0x4
    // Offset: 0x6C
    ::HoudiniEngineUnity::HAPI_XYZOrder xyzOrder;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HAPI_XYZOrder) == 0x4);
    // private HoudiniEngineUnity.HAPI_TransformEuler _convertedTransformEuler
    // Size: 0x28
    // Offset: 0x70
    ::HoudiniEngineUnity::HAPI_TransformEuler convertedTransformEuler;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HAPI_TransformEuler) == 0x28);
    public:
    // Creating interface conversion operator: operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_Handle*>
    operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_Handle*>() noexcept {
      return *reinterpret_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_Handle*>*>(this);
    }
    // Creating interface conversion operator: i_HEU_Handle
    inline ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_Handle*>* i_HEU_Handle() noexcept {
      return reinterpret_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_Handle*>*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.String _handleName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__handleName();
    // Get instance field reference: private HoudiniEngineUnity.HEU_Handle/HoudiniEngineUnity.HEU_HandleType _handleType
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HEU_Handle::HEU_HandleType& dyn__handleType();
    // Get instance field reference: private System.Int32 _handleIndex
    [[deprecated("Use field access instead!")]] int& dyn__handleIndex();
    // Get instance field reference: private HoudiniEngineUnity.HEU_HandleParamBinding _handleParamTranslateBinding
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HEU_HandleParamBinding*& dyn__handleParamTranslateBinding();
    // Get instance field reference: private HoudiniEngineUnity.HEU_HandleParamBinding _handleParamRotateBinding
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HEU_HandleParamBinding*& dyn__handleParamRotateBinding();
    // Get instance field reference: private HoudiniEngineUnity.HEU_HandleParamBinding _handleParamScaleBinding
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HEU_HandleParamBinding*& dyn__handleParamScaleBinding();
    // Get instance field reference: private UnityEngine.Vector3 _handlePosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__handlePosition();
    // Get instance field reference: private UnityEngine.Quaternion _handleRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn__handleRotation();
    // Get instance field reference: private UnityEngine.Vector3 _handleScale
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__handleScale();
    // Get instance field reference: private HoudiniEngineUnity.HAPI_RSTOrder _rstOrder
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HAPI_RSTOrder& dyn__rstOrder();
    // Get instance field reference: private HoudiniEngineUnity.HAPI_XYZOrder _xyzOrder
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HAPI_XYZOrder& dyn__xyzOrder();
    // Get instance field reference: private HoudiniEngineUnity.HAPI_TransformEuler _convertedTransformEuler
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HAPI_TransformEuler& dyn__convertedTransformEuler();
    // public System.String get_HandleName()
    // Offset: 0x19615E4
    ::StringW get_HandleName();
    // public HoudiniEngineUnity.HEU_Handle/HoudiniEngineUnity.HEU_HandleType get_HandleType()
    // Offset: 0x19615EC
    ::HoudiniEngineUnity::HEU_Handle::HEU_HandleType get_HandleType();
    // public HoudiniEngineUnity.HAPI_RSTOrder get_RSTOrder()
    // Offset: 0x19615F4
    ::HoudiniEngineUnity::HAPI_RSTOrder get_RSTOrder();
    // public HoudiniEngineUnity.HAPI_XYZOrder get_XYZOrder()
    // Offset: 0x19615FC
    ::HoudiniEngineUnity::HAPI_XYZOrder get_XYZOrder();
    // public HoudiniEngineUnity.HAPI_TransformEuler get_ConvertedTransformEuler()
    // Offset: 0x1961604
    ::HoudiniEngineUnity::HAPI_TransformEuler get_ConvertedTransformEuler();
    // public UnityEngine.Vector3 get_HandlePosition()
    // Offset: 0x19616C0
    ::UnityEngine::Vector3 get_HandlePosition();
    // public UnityEngine.Quaternion get_HandleRotation()
    // Offset: 0x19616CC
    ::UnityEngine::Quaternion get_HandleRotation();
    // public UnityEngine.Vector3 get_HandleScale()
    // Offset: 0x19616D8
    ::UnityEngine::Vector3 get_HandleScale();
    // public System.Void .ctor()
    // Offset: 0x1962EC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_Handle* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_Handle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_Handle*, creationType>()));
    }
    // public System.Boolean HasTranslateHandle()
    // Offset: 0x1961618
    bool HasTranslateHandle();
    // public System.Boolean HasRotateHandle()
    // Offset: 0x1961628
    bool HasRotateHandle();
    // public System.Boolean HasScaleHandle()
    // Offset: 0x1961638
    bool HasScaleHandle();
    // public System.Boolean IsTranslateHandleDisabled()
    // Offset: 0x1961648
    bool IsTranslateHandleDisabled();
    // public System.Boolean IsRotateHandleDisabled()
    // Offset: 0x1961668
    bool IsRotateHandleDisabled();
    // public System.Boolean IsScaleHandleDisabled()
    // Offset: 0x1961688
    bool IsScaleHandleDisabled();
    // public HoudiniEngineUnity.HEU_HandleParamBinding GetTranslateBinding()
    // Offset: 0x19616A8
    ::HoudiniEngineUnity::HEU_HandleParamBinding* GetTranslateBinding();
    // public HoudiniEngineUnity.HEU_HandleParamBinding GetRotateBinding()
    // Offset: 0x19616B0
    ::HoudiniEngineUnity::HEU_HandleParamBinding* GetRotateBinding();
    // public HoudiniEngineUnity.HEU_HandleParamBinding GetScaleBinding()
    // Offset: 0x19616B8
    ::HoudiniEngineUnity::HEU_HandleParamBinding* GetScaleBinding();
    // public System.Boolean SetupHandle(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 assetID, System.Int32 handleIndex, System.String handleName, HoudiniEngineUnity.HEU_Handle/HoudiniEngineUnity.HEU_HandleType handleType, ref HoudiniEngineUnity.HAPI_HandleInfo handleInfo, HoudiniEngineUnity.HEU_Parameters parameters)
    // Offset: 0x19616E4
    bool SetupHandle(::HoudiniEngineUnity::HEU_SessionBase* session, int assetID, int handleIndex, ::StringW handleName, ::HoudiniEngineUnity::HEU_Handle::HEU_HandleType handleType, ByRef<::HoudiniEngineUnity::HAPI_HandleInfo> handleInfo, ::HoudiniEngineUnity::HEU_Parameters* parameters);
    // public System.Void CleanUp()
    // Offset: 0x19624DC
    void CleanUp();
    // public System.Void GenerateTransform(HoudiniEngineUnity.HEU_SessionBase session, HoudiniEngineUnity.HEU_Parameters parameters)
    // Offset: 0x1961EF8
    void GenerateTransform(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_Parameters* parameters);
    // public System.Boolean GetUpdatedPosition(HoudiniEngineUnity.HEU_HoudiniAsset asset, ref UnityEngine.Vector3 inPosition)
    // Offset: 0x1962500
    bool GetUpdatedPosition(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ByRef<::UnityEngine::Vector3> inPosition);
    // public System.Boolean GetUpdatedRotation(HoudiniEngineUnity.HEU_HoudiniAsset asset, ref UnityEngine.Quaternion inRotation)
    // Offset: 0x196286C
    bool GetUpdatedRotation(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ByRef<::UnityEngine::Quaternion> inRotation);
    // static public System.Boolean IsSpecialRSTOrder(HoudiniEngineUnity.HAPI_RSTOrder rstOrder)
    // Offset: 0x19624E8
    static bool IsSpecialRSTOrder(::HoudiniEngineUnity::HAPI_RSTOrder rstOrder);
    // public System.Boolean IsEquivalentTo(HoudiniEngineUnity.HEU_Handle other)
    // Offset: 0x1962AD8
    bool IsEquivalentTo(::HoudiniEngineUnity::HEU_Handle* other);
  }; // HoudiniEngineUnity.HEU_Handle
  #pragma pack(pop)
  static check_size<sizeof(HEU_Handle), 112 + sizeof(::HoudiniEngineUnity::HAPI_TransformEuler)> __HoudiniEngineUnity_HEU_HandleSizeCheck;
  static_assert(sizeof(HEU_Handle) == 0x98);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_Handle::HEU_HandleType, "HoudiniEngineUnity", "HEU_Handle/HEU_HandleType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Handle::get_HandleName
// Il2CppName: get_HandleName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (HoudiniEngineUnity::HEU_Handle::*)()>(&HoudiniEngineUnity::HEU_Handle::get_HandleName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Handle*), "get_HandleName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Handle::get_HandleType
// Il2CppName: get_HandleType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_Handle::HEU_HandleType (HoudiniEngineUnity::HEU_Handle::*)()>(&HoudiniEngineUnity::HEU_Handle::get_HandleType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Handle*), "get_HandleType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Handle::get_RSTOrder
// Il2CppName: get_RSTOrder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HAPI_RSTOrder (HoudiniEngineUnity::HEU_Handle::*)()>(&HoudiniEngineUnity::HEU_Handle::get_RSTOrder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Handle*), "get_RSTOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Handle::get_XYZOrder
// Il2CppName: get_XYZOrder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HAPI_XYZOrder (HoudiniEngineUnity::HEU_Handle::*)()>(&HoudiniEngineUnity::HEU_Handle::get_XYZOrder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Handle*), "get_XYZOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Handle::get_ConvertedTransformEuler
// Il2CppName: get_ConvertedTransformEuler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HAPI_TransformEuler (HoudiniEngineUnity::HEU_Handle::*)()>(&HoudiniEngineUnity::HEU_Handle::get_ConvertedTransformEuler)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Handle*), "get_ConvertedTransformEuler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Handle::get_HandlePosition
// Il2CppName: get_HandlePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (HoudiniEngineUnity::HEU_Handle::*)()>(&HoudiniEngineUnity::HEU_Handle::get_HandlePosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Handle*), "get_HandlePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Handle::get_HandleRotation
// Il2CppName: get_HandleRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (HoudiniEngineUnity::HEU_Handle::*)()>(&HoudiniEngineUnity::HEU_Handle::get_HandleRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Handle*), "get_HandleRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Handle::get_HandleScale
// Il2CppName: get_HandleScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (HoudiniEngineUnity::HEU_Handle::*)()>(&HoudiniEngineUnity::HEU_Handle::get_HandleScale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Handle*), "get_HandleScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Handle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Handle::HasTranslateHandle
// Il2CppName: HasTranslateHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_Handle::*)()>(&HoudiniEngineUnity::HEU_Handle::HasTranslateHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Handle*), "HasTranslateHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Handle::HasRotateHandle
// Il2CppName: HasRotateHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_Handle::*)()>(&HoudiniEngineUnity::HEU_Handle::HasRotateHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Handle*), "HasRotateHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Handle::HasScaleHandle
// Il2CppName: HasScaleHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_Handle::*)()>(&HoudiniEngineUnity::HEU_Handle::HasScaleHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Handle*), "HasScaleHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Handle::IsTranslateHandleDisabled
// Il2CppName: IsTranslateHandleDisabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_Handle::*)()>(&HoudiniEngineUnity::HEU_Handle::IsTranslateHandleDisabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Handle*), "IsTranslateHandleDisabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Handle::IsRotateHandleDisabled
// Il2CppName: IsRotateHandleDisabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_Handle::*)()>(&HoudiniEngineUnity::HEU_Handle::IsRotateHandleDisabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Handle*), "IsRotateHandleDisabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Handle::IsScaleHandleDisabled
// Il2CppName: IsScaleHandleDisabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_Handle::*)()>(&HoudiniEngineUnity::HEU_Handle::IsScaleHandleDisabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Handle*), "IsScaleHandleDisabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Handle::GetTranslateBinding
// Il2CppName: GetTranslateBinding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_HandleParamBinding* (HoudiniEngineUnity::HEU_Handle::*)()>(&HoudiniEngineUnity::HEU_Handle::GetTranslateBinding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Handle*), "GetTranslateBinding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Handle::GetRotateBinding
// Il2CppName: GetRotateBinding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_HandleParamBinding* (HoudiniEngineUnity::HEU_Handle::*)()>(&HoudiniEngineUnity::HEU_Handle::GetRotateBinding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Handle*), "GetRotateBinding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Handle::GetScaleBinding
// Il2CppName: GetScaleBinding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_HandleParamBinding* (HoudiniEngineUnity::HEU_Handle::*)()>(&HoudiniEngineUnity::HEU_Handle::GetScaleBinding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Handle*), "GetScaleBinding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Handle::SetupHandle
// Il2CppName: SetupHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_Handle::*)(::HoudiniEngineUnity::HEU_SessionBase*, int, int, ::StringW, ::HoudiniEngineUnity::HEU_Handle::HEU_HandleType, ByRef<::HoudiniEngineUnity::HAPI_HandleInfo>, ::HoudiniEngineUnity::HEU_Parameters*)>(&HoudiniEngineUnity::HEU_Handle::SetupHandle)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* assetID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* handleIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* handleName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* handleType = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_Handle/HEU_HandleType")->byval_arg;
    static auto* handleInfo = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_HandleInfo")->this_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_Parameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Handle*), "SetupHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, assetID, handleIndex, handleName, handleType, handleInfo, parameters});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Handle::CleanUp
// Il2CppName: CleanUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Handle::*)()>(&HoudiniEngineUnity::HEU_Handle::CleanUp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Handle*), "CleanUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Handle::GenerateTransform
// Il2CppName: GenerateTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Handle::*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_Parameters*)>(&HoudiniEngineUnity::HEU_Handle::GenerateTransform)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_Parameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Handle*), "GenerateTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, parameters});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Handle::GetUpdatedPosition
// Il2CppName: GetUpdatedPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_Handle::*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ByRef<::UnityEngine::Vector3>)>(&HoudiniEngineUnity::HEU_Handle::GetUpdatedPosition)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_HoudiniAsset")->byval_arg;
    static auto* inPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Handle*), "GetUpdatedPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset, inPosition});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Handle::GetUpdatedRotation
// Il2CppName: GetUpdatedRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_Handle::*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ByRef<::UnityEngine::Quaternion>)>(&HoudiniEngineUnity::HEU_Handle::GetUpdatedRotation)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_HoudiniAsset")->byval_arg;
    static auto* inRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Handle*), "GetUpdatedRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset, inRotation});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Handle::IsSpecialRSTOrder
// Il2CppName: IsSpecialRSTOrder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HAPI_RSTOrder)>(&HoudiniEngineUnity::HEU_Handle::IsSpecialRSTOrder)> {
  static const MethodInfo* get() {
    static auto* rstOrder = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_RSTOrder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Handle*), "IsSpecialRSTOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rstOrder});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Handle::IsEquivalentTo
// Il2CppName: IsEquivalentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_Handle::*)(::HoudiniEngineUnity::HEU_Handle*)>(&HoudiniEngineUnity::HEU_Handle::IsEquivalentTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_Handle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Handle*), "IsEquivalentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
