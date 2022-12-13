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
  // Forward declaring type: MeshFilter
  class MeshFilter;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: Test_MeshFilter
  class Test_MeshFilter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::Test_MeshFilter);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_MeshFilter*, "HoudiniEngineUnity", "Test_MeshFilter");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.Test_MeshFilter
  // [TokenAttribute] Offset: FFFFFFFF
  class Test_MeshFilter : public ::Il2CppObject/*, public ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_MeshFilter*>*/ {
    public:
    public:
    // public UnityEngine.MeshFilter self
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::MeshFilter* self;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshFilter*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_MeshFilter*>
    operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_MeshFilter*>() noexcept {
      return *reinterpret_cast<::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_MeshFilter*>*>(this);
    }
    // Creating interface conversion operator: i_Test_MeshFilter
    inline ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_MeshFilter*>* i_Test_MeshFilter() noexcept {
      return reinterpret_cast<::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_MeshFilter*>*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::MeshFilter*
    constexpr operator ::UnityEngine::MeshFilter*() const noexcept {
      return self;
    }
    // Get instance field reference: public UnityEngine.MeshFilter self
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshFilter*& dyn_self();
    // public System.Void .ctor(UnityEngine.MeshFilter self)
    // Offset: 0x2B3282C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Test_MeshFilter* New_ctor(::UnityEngine::MeshFilter* self) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::Test_MeshFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Test_MeshFilter*, creationType>(self)));
    }
    // public System.Boolean IsNull()
    // Offset: 0x2B32858
    bool IsNull();
    // public System.Boolean IsEquivalentTo(HoudiniEngineUnity.Test_MeshFilter other)
    // Offset: 0x2B328C8
    bool IsEquivalentTo(::HoudiniEngineUnity::Test_MeshFilter* other);
  }; // HoudiniEngineUnity.Test_MeshFilter
  #pragma pack(pop)
  static check_size<sizeof(Test_MeshFilter), 16 + sizeof(::UnityEngine::MeshFilter*)> __HoudiniEngineUnity_Test_MeshFilterSizeCheck;
  static_assert(sizeof(Test_MeshFilter) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_MeshFilter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_MeshFilter::IsNull
// Il2CppName: IsNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::Test_MeshFilter::*)()>(&HoudiniEngineUnity::Test_MeshFilter::IsNull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_MeshFilter*), "IsNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_MeshFilter::IsEquivalentTo
// Il2CppName: IsEquivalentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::Test_MeshFilter::*)(::HoudiniEngineUnity::Test_MeshFilter*)>(&HoudiniEngineUnity::Test_MeshFilter::IsEquivalentTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "Test_MeshFilter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_MeshFilter*), "IsEquivalentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
