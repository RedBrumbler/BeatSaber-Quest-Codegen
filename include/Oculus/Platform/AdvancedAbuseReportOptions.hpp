// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: AbuseReportType
  struct AbuseReportType;
  // Forward declaring type: AbuseReportVideoMode
  struct AbuseReportVideoMode;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: AdvancedAbuseReportOptions
  class AdvancedAbuseReportOptions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::AdvancedAbuseReportOptions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::AdvancedAbuseReportOptions*, "Oculus.Platform", "AdvancedAbuseReportOptions");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.AdvancedAbuseReportOptions
  // [TokenAttribute] Offset: FFFFFFFF
  class AdvancedAbuseReportOptions : public ::Il2CppObject {
    public:
    public:
    // private System.IntPtr Handle
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr Handle;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept {
      return Handle;
    }
    // Get instance field reference: private System.IntPtr Handle
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_Handle();
    // public System.Void .ctor()
    // Offset: 0x2137EC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AdvancedAbuseReportOptions* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::AdvancedAbuseReportOptions::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AdvancedAbuseReportOptions*, creationType>()));
    }
    // public System.Void SetObjectType(System.String value)
    // Offset: 0x2137FB0
    void SetObjectType(::StringW value);
    // public System.Void SetReportType(Oculus.Platform.AbuseReportType value)
    // Offset: 0x21380D4
    void SetReportType(::Oculus::Platform::AbuseReportType value);
    // public System.Void SetVideoMode(Oculus.Platform.AbuseReportVideoMode value)
    // Offset: 0x21381DC
    void SetVideoMode(::Oculus::Platform::AbuseReportVideoMode value);
    // static public System.IntPtr op_Explicit(Oculus.Platform.AdvancedAbuseReportOptions options)
    // Offset: 0x21382E4
    // ABORTED: conflicts with another method.  explicit operator ::System::IntPtr();
    // protected override System.Void Finalize()
    // Offset: 0x2138334
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Oculus.Platform.AdvancedAbuseReportOptions
  #pragma pack(pop)
  static check_size<sizeof(AdvancedAbuseReportOptions), 16 + sizeof(::System::IntPtr)> __Oculus_Platform_AdvancedAbuseReportOptionsSizeCheck;
  static_assert(sizeof(AdvancedAbuseReportOptions) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::AdvancedAbuseReportOptions::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::AdvancedAbuseReportOptions::SetObjectType
// Il2CppName: SetObjectType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::AdvancedAbuseReportOptions::*)(::StringW)>(&Oculus::Platform::AdvancedAbuseReportOptions::SetObjectType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::AdvancedAbuseReportOptions*), "SetObjectType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::AdvancedAbuseReportOptions::SetReportType
// Il2CppName: SetReportType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::AdvancedAbuseReportOptions::*)(::Oculus::Platform::AbuseReportType)>(&Oculus::Platform::AdvancedAbuseReportOptions::SetReportType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "AbuseReportType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::AdvancedAbuseReportOptions*), "SetReportType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::AdvancedAbuseReportOptions::SetVideoMode
// Il2CppName: SetVideoMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::AdvancedAbuseReportOptions::*)(::Oculus::Platform::AbuseReportVideoMode)>(&Oculus::Platform::AdvancedAbuseReportOptions::SetVideoMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "AbuseReportVideoMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::AdvancedAbuseReportOptions*), "SetVideoMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::AdvancedAbuseReportOptions::operator ::System::IntPtr
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Oculus::Platform::AdvancedAbuseReportOptions::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::AdvancedAbuseReportOptions::*)()>(&Oculus::Platform::AdvancedAbuseReportOptions::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::AdvancedAbuseReportOptions*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
