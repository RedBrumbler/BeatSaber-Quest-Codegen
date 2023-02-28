// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.IEquivableWrapperClass`1
#include "HoudiniEngineUnity/IEquivableWrapperClass_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TerrainLayer
  class TerrainLayer;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: Test_TerrainLayer
  class Test_TerrainLayer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::Test_TerrainLayer);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_TerrainLayer*, "HoudiniEngineUnity", "Test_TerrainLayer");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.Test_TerrainLayer
  // [TokenAttribute] Offset: FFFFFFFF
  class Test_TerrainLayer : public ::Il2CppObject/*, public ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_TerrainLayer*>*/ {
    public:
    public:
    // public UnityEngine.TerrainLayer self
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::TerrainLayer* self;
    // Field size check
    static_assert(sizeof(::UnityEngine::TerrainLayer*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_TerrainLayer*>
    operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_TerrainLayer*>() noexcept {
      return *reinterpret_cast<::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_TerrainLayer*>*>(this);
    }
    // Creating interface conversion operator: i_Test_TerrainLayer
    inline ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_TerrainLayer*>* i_Test_TerrainLayer() noexcept {
      return reinterpret_cast<::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_TerrainLayer*>*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::TerrainLayer*
    constexpr operator ::UnityEngine::TerrainLayer*() const noexcept {
      return self;
    }
    // Get instance field reference: public UnityEngine.TerrainLayer self
    [[deprecated("Use field access instead!")]] ::UnityEngine::TerrainLayer*& dyn_self();
    // public System.Void .ctor(UnityEngine.TerrainLayer self)
    // Offset: 0x2B44E0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Test_TerrainLayer* New_ctor(::UnityEngine::TerrainLayer* self) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::Test_TerrainLayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Test_TerrainLayer*, creationType>(self)));
    }
    // public System.Boolean IsNull()
    // Offset: 0x2B44E38
    bool IsNull();
    // public System.Boolean IsEquivalentTo(HoudiniEngineUnity.Test_TerrainLayer other)
    // Offset: 0x2B44EA8
    bool IsEquivalentTo(::HoudiniEngineUnity::Test_TerrainLayer* other);
  }; // HoudiniEngineUnity.Test_TerrainLayer
  #pragma pack(pop)
  static check_size<sizeof(Test_TerrainLayer), 16 + sizeof(::UnityEngine::TerrainLayer*)> __HoudiniEngineUnity_Test_TerrainLayerSizeCheck;
  static_assert(sizeof(Test_TerrainLayer) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_TerrainLayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_TerrainLayer::IsNull
// Il2CppName: IsNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::Test_TerrainLayer::*)()>(&HoudiniEngineUnity::Test_TerrainLayer::IsNull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_TerrainLayer*), "IsNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_TerrainLayer::IsEquivalentTo
// Il2CppName: IsEquivalentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::Test_TerrainLayer::*)(::HoudiniEngineUnity::Test_TerrainLayer*)>(&HoudiniEngineUnity::Test_TerrainLayer::IsEquivalentTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "Test_TerrainLayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_TerrainLayer*), "IsEquivalentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
