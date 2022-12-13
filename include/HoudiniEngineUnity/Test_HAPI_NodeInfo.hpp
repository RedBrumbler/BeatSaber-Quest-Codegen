// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.IEquivable`1
#include "HoudiniEngineUnity/IEquivable_1.hpp"
// Including type: HoudiniEngineUnity.HAPI_NodeInfo
#include "HoudiniEngineUnity/HAPI_NodeInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: Test_HAPI_NodeInfo
  class Test_HAPI_NodeInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::Test_HAPI_NodeInfo);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_HAPI_NodeInfo*, "HoudiniEngineUnity", "Test_HAPI_NodeInfo");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x52
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.Test_HAPI_NodeInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class Test_HAPI_NodeInfo : public ::Il2CppObject/*, public ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_NodeInfo*>*/ {
    public:
    public:
    // public HoudiniEngineUnity.HAPI_NodeInfo self
    // Size: 0x42
    // Offset: 0x10
    ::HoudiniEngineUnity::HAPI_NodeInfo self;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HAPI_NodeInfo) == 0x42);
    public:
    // Creating interface conversion operator: operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_NodeInfo*>
    operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_NodeInfo*>() noexcept {
      return *reinterpret_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_NodeInfo*>*>(this);
    }
    // Creating interface conversion operator: i_Test_HAPI_NodeInfo
    inline ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_NodeInfo*>* i_Test_HAPI_NodeInfo() noexcept {
      return reinterpret_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_NodeInfo*>*>(this);
    }
    // Creating conversion operator: operator ::HoudiniEngineUnity::HAPI_NodeInfo
    constexpr operator ::HoudiniEngineUnity::HAPI_NodeInfo() const noexcept {
      return self;
    }
    // Get instance field reference: public HoudiniEngineUnity.HAPI_NodeInfo self
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HAPI_NodeInfo& dyn_self();
    // public System.Void .ctor(HoudiniEngineUnity.HAPI_NodeInfo self)
    // Offset: 0x1A68390
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Test_HAPI_NodeInfo* New_ctor(::HoudiniEngineUnity::HAPI_NodeInfo self) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::Test_HAPI_NodeInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Test_HAPI_NodeInfo*, creationType>(self)));
    }
    // public System.Boolean IsEquivalentTo(HoudiniEngineUnity.Test_HAPI_NodeInfo other)
    // Offset: 0x1A683C8
    bool IsEquivalentTo(::HoudiniEngineUnity::Test_HAPI_NodeInfo* other);
  }; // HoudiniEngineUnity.Test_HAPI_NodeInfo
  #pragma pack(pop)
  static check_size<sizeof(Test_HAPI_NodeInfo), 16 + sizeof(::HoudiniEngineUnity::HAPI_NodeInfo)> __HoudiniEngineUnity_Test_HAPI_NodeInfoSizeCheck;
  static_assert(sizeof(Test_HAPI_NodeInfo) == 0x52);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_HAPI_NodeInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_HAPI_NodeInfo::IsEquivalentTo
// Il2CppName: IsEquivalentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::Test_HAPI_NodeInfo::*)(::HoudiniEngineUnity::Test_HAPI_NodeInfo*)>(&HoudiniEngineUnity::Test_HAPI_NodeInfo::IsEquivalentTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "Test_HAPI_NodeInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_HAPI_NodeInfo*), "IsEquivalentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
