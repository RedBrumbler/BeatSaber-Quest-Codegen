// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: Group because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AbTestExperimentDefinitionSO
  class AbTestExperimentDefinitionSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AbTestExperimentDefinitionSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AbTestExperimentDefinitionSO*, "", "AbTestExperimentDefinitionSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: AbTestExperimentDefinitionSO
  // [TokenAttribute] Offset: FFFFFFFF
  class AbTestExperimentDefinitionSO : public ::GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: ::GlobalNamespace::AbTestExperimentDefinitionSO::Group
    struct Group;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: AbTestExperimentDefinitionSO/Group
    // [TokenAttribute] Offset: FFFFFFFF
    struct Group/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Group
      constexpr Group(int value_ = {}) noexcept : value{value_} {}
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
      // static field const value: static public AbTestExperimentDefinitionSO/Group Control
      static constexpr const int Control = 0;
      // Get static field: static public AbTestExperimentDefinitionSO/Group Control
      static ::GlobalNamespace::AbTestExperimentDefinitionSO::Group _get_Control();
      // Set static field: static public AbTestExperimentDefinitionSO/Group Control
      static void _set_Control(::GlobalNamespace::AbTestExperimentDefinitionSO::Group value);
      // static field const value: static public AbTestExperimentDefinitionSO/Group Test1
      static constexpr const int Test1 = 1;
      // Get static field: static public AbTestExperimentDefinitionSO/Group Test1
      static ::GlobalNamespace::AbTestExperimentDefinitionSO::Group _get_Test1();
      // Set static field: static public AbTestExperimentDefinitionSO/Group Test1
      static void _set_Test1(::GlobalNamespace::AbTestExperimentDefinitionSO::Group value);
      // static field const value: static public AbTestExperimentDefinitionSO/Group Test2
      static constexpr const int Test2 = 2;
      // Get static field: static public AbTestExperimentDefinitionSO/Group Test2
      static ::GlobalNamespace::AbTestExperimentDefinitionSO::Group _get_Test2();
      // Set static field: static public AbTestExperimentDefinitionSO/Group Test2
      static void _set_Test2(::GlobalNamespace::AbTestExperimentDefinitionSO::Group value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // AbTestExperimentDefinitionSO/Group
    #pragma pack(pop)
    static check_size<sizeof(AbTestExperimentDefinitionSO::Group), 0 + sizeof(int)> __GlobalNamespace_AbTestExperimentDefinitionSO_GroupSizeCheck;
    static_assert(sizeof(AbTestExperimentDefinitionSO::Group) == 0x4);
    public:
    // private System.String _experimentName
    // Size: 0x8
    // Offset: 0x18
    ::StringW experimentName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Single _test1GroupSize
    // Size: 0x4
    // Offset: 0x20
    float test1GroupSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _test2GroupSize
    // Size: 0x4
    // Offset: 0x24
    float test2GroupSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _controlGroupSize
    // Size: 0x4
    // Offset: 0x28
    float controlGroupSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: controlGroupSize and: salt
    char __padding3[0x4] = {};
    // private System.String _salt
    // Size: 0x8
    // Offset: 0x30
    ::StringW salt;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private AbTestExperimentDefinitionSO/Group _currentUserTreatmentGroup
    // Size: 0x4
    // Offset: 0x38
    ::GlobalNamespace::AbTestExperimentDefinitionSO::Group currentUserTreatmentGroup;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AbTestExperimentDefinitionSO::Group) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.String _experimentName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__experimentName();
    // Get instance field reference: private System.Single _test1GroupSize
    [[deprecated("Use field access instead!")]] float& dyn__test1GroupSize();
    // Get instance field reference: private System.Single _test2GroupSize
    [[deprecated("Use field access instead!")]] float& dyn__test2GroupSize();
    // Get instance field reference: private System.Single _controlGroupSize
    [[deprecated("Use field access instead!")]] float& dyn__controlGroupSize();
    // Get instance field reference: private System.String _salt
    [[deprecated("Use field access instead!")]] ::StringW& dyn__salt();
    // Get instance field reference: private AbTestExperimentDefinitionSO/Group _currentUserTreatmentGroup
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AbTestExperimentDefinitionSO::Group& dyn__currentUserTreatmentGroup();
    // public System.Single get_test1GroupSize()
    // Offset: 0x153C640
    float get_test1GroupSize();
    // public System.Single get_test2GroupSize()
    // Offset: 0x153C648
    float get_test2GroupSize();
    // public System.String get_experimentName()
    // Offset: 0x153C650
    ::StringW get_experimentName();
    // public AbTestExperimentDefinitionSO/Group get_currentUserTreatmentGroup()
    // Offset: 0x153C658
    ::GlobalNamespace::AbTestExperimentDefinitionSO::Group get_currentUserTreatmentGroup();
    // public System.Void .ctor()
    // Offset: 0x153C954
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AbTestExperimentDefinitionSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AbTestExperimentDefinitionSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AbTestExperimentDefinitionSO*, creationType>()));
    }
    // private System.Void OnValidate()
    // Offset: 0x153C660
    void OnValidate();
    // public System.Void ComputeCurrentUserTreatment(System.String userId)
    // Offset: 0x153C71C
    void ComputeCurrentUserTreatment(::StringW userId);
    // public System.Void ForceSetTreatmentGroup(AbTestExperimentDefinitionSO/Group group)
    // Offset: 0x153C94C
    void ForceSetTreatmentGroup(::GlobalNamespace::AbTestExperimentDefinitionSO::Group group);
    // private AbTestExperimentDefinitionSO/Group AbSplit(System.String userId)
    // Offset: 0x153C740
    ::GlobalNamespace::AbTestExperimentDefinitionSO::Group AbSplit(::StringW userId);
  }; // AbTestExperimentDefinitionSO
  #pragma pack(pop)
  static check_size<sizeof(AbTestExperimentDefinitionSO), 56 + sizeof(::GlobalNamespace::AbTestExperimentDefinitionSO::Group)> __GlobalNamespace_AbTestExperimentDefinitionSOSizeCheck;
  static_assert(sizeof(AbTestExperimentDefinitionSO) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AbTestExperimentDefinitionSO::Group, "", "AbTestExperimentDefinitionSO/Group");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AbTestExperimentDefinitionSO::get_test1GroupSize
// Il2CppName: get_test1GroupSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::AbTestExperimentDefinitionSO::*)()>(&GlobalNamespace::AbTestExperimentDefinitionSO::get_test1GroupSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AbTestExperimentDefinitionSO*), "get_test1GroupSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AbTestExperimentDefinitionSO::get_test2GroupSize
// Il2CppName: get_test2GroupSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::AbTestExperimentDefinitionSO::*)()>(&GlobalNamespace::AbTestExperimentDefinitionSO::get_test2GroupSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AbTestExperimentDefinitionSO*), "get_test2GroupSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AbTestExperimentDefinitionSO::get_experimentName
// Il2CppName: get_experimentName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::AbTestExperimentDefinitionSO::*)()>(&GlobalNamespace::AbTestExperimentDefinitionSO::get_experimentName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AbTestExperimentDefinitionSO*), "get_experimentName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AbTestExperimentDefinitionSO::get_currentUserTreatmentGroup
// Il2CppName: get_currentUserTreatmentGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::AbTestExperimentDefinitionSO::Group (GlobalNamespace::AbTestExperimentDefinitionSO::*)()>(&GlobalNamespace::AbTestExperimentDefinitionSO::get_currentUserTreatmentGroup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AbTestExperimentDefinitionSO*), "get_currentUserTreatmentGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AbTestExperimentDefinitionSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AbTestExperimentDefinitionSO::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AbTestExperimentDefinitionSO::*)()>(&GlobalNamespace::AbTestExperimentDefinitionSO::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AbTestExperimentDefinitionSO*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AbTestExperimentDefinitionSO::ComputeCurrentUserTreatment
// Il2CppName: ComputeCurrentUserTreatment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AbTestExperimentDefinitionSO::*)(::StringW)>(&GlobalNamespace::AbTestExperimentDefinitionSO::ComputeCurrentUserTreatment)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AbTestExperimentDefinitionSO*), "ComputeCurrentUserTreatment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AbTestExperimentDefinitionSO::ForceSetTreatmentGroup
// Il2CppName: ForceSetTreatmentGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AbTestExperimentDefinitionSO::*)(::GlobalNamespace::AbTestExperimentDefinitionSO::Group)>(&GlobalNamespace::AbTestExperimentDefinitionSO::ForceSetTreatmentGroup)> {
  static const MethodInfo* get() {
    static auto* group = &::il2cpp_utils::GetClassFromName("", "AbTestExperimentDefinitionSO/Group")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AbTestExperimentDefinitionSO*), "ForceSetTreatmentGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{group});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AbTestExperimentDefinitionSO::AbSplit
// Il2CppName: AbSplit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::AbTestExperimentDefinitionSO::Group (GlobalNamespace::AbTestExperimentDefinitionSO::*)(::StringW)>(&GlobalNamespace::AbTestExperimentDefinitionSO::AbSplit)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AbTestExperimentDefinitionSO*), "AbSplit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId});
  }
};
