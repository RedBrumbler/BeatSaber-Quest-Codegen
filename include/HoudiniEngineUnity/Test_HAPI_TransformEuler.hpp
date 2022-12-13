// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.IEquivable`1
#include "HoudiniEngineUnity/IEquivable_1.hpp"
// Including type: HoudiniEngineUnity.HAPI_TransformEuler
#include "HoudiniEngineUnity/HAPI_TransformEuler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: Test_HAPI_TransformEuler
  class Test_HAPI_TransformEuler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::Test_HAPI_TransformEuler);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_HAPI_TransformEuler*, "HoudiniEngineUnity", "Test_HAPI_TransformEuler");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.Test_HAPI_TransformEuler
  // [TokenAttribute] Offset: FFFFFFFF
  class Test_HAPI_TransformEuler : public ::Il2CppObject/*, public ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_TransformEuler*>*/ {
    public:
    public:
    // public HoudiniEngineUnity.HAPI_TransformEuler self
    // Size: 0x28
    // Offset: 0x10
    ::HoudiniEngineUnity::HAPI_TransformEuler self;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HAPI_TransformEuler) == 0x28);
    public:
    // Creating interface conversion operator: operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_TransformEuler*>
    operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_TransformEuler*>() noexcept {
      return *reinterpret_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_TransformEuler*>*>(this);
    }
    // Creating interface conversion operator: i_Test_HAPI_TransformEuler
    inline ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_TransformEuler*>* i_Test_HAPI_TransformEuler() noexcept {
      return reinterpret_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_TransformEuler*>*>(this);
    }
    // Creating conversion operator: operator ::HoudiniEngineUnity::HAPI_TransformEuler
    constexpr operator ::HoudiniEngineUnity::HAPI_TransformEuler() const noexcept {
      return self;
    }
    // Get instance field reference: public HoudiniEngineUnity.HAPI_TransformEuler self
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HAPI_TransformEuler& dyn_self();
    // public System.Void .ctor(HoudiniEngineUnity.HAPI_TransformEuler self)
    // Offset: 0x2B31404
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Test_HAPI_TransformEuler* New_ctor(::HoudiniEngineUnity::HAPI_TransformEuler self) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::Test_HAPI_TransformEuler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Test_HAPI_TransformEuler*, creationType>(self)));
    }
    // public System.Boolean IsEquivalentTo(HoudiniEngineUnity.Test_HAPI_TransformEuler other)
    // Offset: 0x2B3143C
    bool IsEquivalentTo(::HoudiniEngineUnity::Test_HAPI_TransformEuler* other);
  }; // HoudiniEngineUnity.Test_HAPI_TransformEuler
  #pragma pack(pop)
  static check_size<sizeof(Test_HAPI_TransformEuler), 16 + sizeof(::HoudiniEngineUnity::HAPI_TransformEuler)> __HoudiniEngineUnity_Test_HAPI_TransformEulerSizeCheck;
  static_assert(sizeof(Test_HAPI_TransformEuler) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_HAPI_TransformEuler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_HAPI_TransformEuler::IsEquivalentTo
// Il2CppName: IsEquivalentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::Test_HAPI_TransformEuler::*)(::HoudiniEngineUnity::Test_HAPI_TransformEuler*)>(&HoudiniEngineUnity::Test_HAPI_TransformEuler::IsEquivalentTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "Test_HAPI_TransformEuler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_HAPI_TransformEuler*), "IsEquivalentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
