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
// Completed includes
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: RosterOptions
  class RosterOptions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::RosterOptions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::RosterOptions*, "Oculus.Platform", "RosterOptions");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.RosterOptions
  // [TokenAttribute] Offset: FFFFFFFF
  class RosterOptions : public ::Il2CppObject {
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
    // Offset: 0x2B1CA88
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RosterOptions* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::RosterOptions::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RosterOptions*, creationType>()));
    }
    // public System.Void AddSuggestedUser(System.UInt64 userID)
    // Offset: 0x2B1CB00
    void AddSuggestedUser(uint64_t userID);
    // public System.Void ClearSuggestedUsers()
    // Offset: 0x2B1CB7C
    void ClearSuggestedUsers();
    // static public System.IntPtr op_Explicit(Oculus.Platform.RosterOptions options)
    // Offset: 0x2B1CBE8
    // ABORTED: conflicts with another method.  explicit operator ::System::IntPtr();
    // protected override System.Void Finalize()
    // Offset: 0x2B1CC38
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Oculus.Platform.RosterOptions
  #pragma pack(pop)
  static check_size<sizeof(RosterOptions), 16 + sizeof(::System::IntPtr)> __Oculus_Platform_RosterOptionsSizeCheck;
  static_assert(sizeof(RosterOptions) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::RosterOptions::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::RosterOptions::AddSuggestedUser
// Il2CppName: AddSuggestedUser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::RosterOptions::*)(uint64_t)>(&Oculus::Platform::RosterOptions::AddSuggestedUser)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::RosterOptions*), "AddSuggestedUser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::RosterOptions::ClearSuggestedUsers
// Il2CppName: ClearSuggestedUsers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::RosterOptions::*)()>(&Oculus::Platform::RosterOptions::ClearSuggestedUsers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::RosterOptions*), "ClearSuggestedUsers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::RosterOptions::operator ::System::IntPtr
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Oculus::Platform::RosterOptions::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::RosterOptions::*)()>(&Oculus::Platform::RosterOptions::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::RosterOptions*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
