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
  // Forward declaring type: Collider
  class Collider;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: Test_Collider
  class Test_Collider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::Test_Collider);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_Collider*, "HoudiniEngineUnity", "Test_Collider");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.Test_Collider
  // [TokenAttribute] Offset: FFFFFFFF
  class Test_Collider : public ::Il2CppObject/*, public ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Collider*>*/ {
    public:
    public:
    // public UnityEngine.Collider self
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Collider* self;
    // Field size check
    static_assert(sizeof(::UnityEngine::Collider*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Collider*>
    operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Collider*>() noexcept {
      return *reinterpret_cast<::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Collider*>*>(this);
    }
    // Creating interface conversion operator: i_Test_Collider
    inline ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Collider*>* i_Test_Collider() noexcept {
      return reinterpret_cast<::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Collider*>*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::Collider*
    constexpr operator ::UnityEngine::Collider*() const noexcept {
      return self;
    }
    // Get instance field reference: public UnityEngine.Collider self
    [[deprecated("Use field access instead!")]] ::UnityEngine::Collider*& dyn_self();
    // public System.Void .ctor(UnityEngine.Collider self)
    // Offset: 0x1A7426C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Test_Collider* New_ctor(::UnityEngine::Collider* self) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::Test_Collider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Test_Collider*, creationType>(self)));
    }
    // public System.Boolean IsNull()
    // Offset: 0x1A74298
    bool IsNull();
    // public System.Boolean IsEquivalentTo(HoudiniEngineUnity.Test_Collider other)
    // Offset: 0x1A74308
    bool IsEquivalentTo(::HoudiniEngineUnity::Test_Collider* other);
  }; // HoudiniEngineUnity.Test_Collider
  #pragma pack(pop)
  static check_size<sizeof(Test_Collider), 16 + sizeof(::UnityEngine::Collider*)> __HoudiniEngineUnity_Test_ColliderSizeCheck;
  static_assert(sizeof(Test_Collider) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_Collider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_Collider::IsNull
// Il2CppName: IsNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::Test_Collider::*)()>(&HoudiniEngineUnity::Test_Collider::IsNull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_Collider*), "IsNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_Collider::IsEquivalentTo
// Il2CppName: IsEquivalentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::Test_Collider::*)(::HoudiniEngineUnity::Test_Collider*)>(&HoudiniEngineUnity::Test_Collider::IsEquivalentTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "Test_Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_Collider*), "IsEquivalentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
