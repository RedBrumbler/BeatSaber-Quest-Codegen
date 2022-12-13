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
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: Test_Texture2D
  class Test_Texture2D;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::Test_Texture2D);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_Texture2D*, "HoudiniEngineUnity", "Test_Texture2D");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.Test_Texture2D
  // [TokenAttribute] Offset: FFFFFFFF
  class Test_Texture2D : public ::Il2CppObject/*, public ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Texture2D*>*/ {
    public:
    public:
    // public UnityEngine.Texture2D self
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Texture2D* self;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture2D*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Texture2D*>
    operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Texture2D*>() noexcept {
      return *reinterpret_cast<::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Texture2D*>*>(this);
    }
    // Creating interface conversion operator: i_Test_Texture2D
    inline ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Texture2D*>* i_Test_Texture2D() noexcept {
      return reinterpret_cast<::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Texture2D*>*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::Texture2D*
    constexpr operator ::UnityEngine::Texture2D*() const noexcept {
      return self;
    }
    // Get instance field reference: public UnityEngine.Texture2D self
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture2D*& dyn_self();
    // public System.Void .ctor(UnityEngine.Texture2D self)
    // Offset: 0x2B34E04
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Test_Texture2D* New_ctor(::UnityEngine::Texture2D* self) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::Test_Texture2D::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Test_Texture2D*, creationType>(self)));
    }
    // public System.Boolean IsNull()
    // Offset: 0x2B34E30
    bool IsNull();
    // public System.Boolean IsEquivalentTo(HoudiniEngineUnity.Test_Texture2D other)
    // Offset: 0x2B34EA0
    bool IsEquivalentTo(::HoudiniEngineUnity::Test_Texture2D* other);
  }; // HoudiniEngineUnity.Test_Texture2D
  #pragma pack(pop)
  static check_size<sizeof(Test_Texture2D), 16 + sizeof(::UnityEngine::Texture2D*)> __HoudiniEngineUnity_Test_Texture2DSizeCheck;
  static_assert(sizeof(Test_Texture2D) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_Texture2D::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_Texture2D::IsNull
// Il2CppName: IsNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::Test_Texture2D::*)()>(&HoudiniEngineUnity::Test_Texture2D::IsNull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_Texture2D*), "IsNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_Texture2D::IsEquivalentTo
// Il2CppName: IsEquivalentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::Test_Texture2D::*)(::HoudiniEngineUnity::Test_Texture2D*)>(&HoudiniEngineUnity::Test_Texture2D::IsEquivalentTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "Test_Texture2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_Texture2D*), "IsEquivalentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
