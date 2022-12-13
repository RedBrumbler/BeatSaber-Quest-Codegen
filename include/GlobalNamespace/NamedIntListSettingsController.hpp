// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ListSettingsController
#include "GlobalNamespace/ListSettingsController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IntSO
  class IntSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: NamedIntListSettingsController
  class NamedIntListSettingsController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NamedIntListSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NamedIntListSettingsController*, "", "NamedIntListSettingsController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: NamedIntListSettingsController
  // [TokenAttribute] Offset: FFFFFFFF
  class NamedIntListSettingsController : public ::GlobalNamespace::ListSettingsController {
    public:
    // Nested type: ::GlobalNamespace::NamedIntListSettingsController::TextValuePair
    class TextValuePair;
    public:
    // private IntSO _settingsValue
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::IntSO* settingsValue;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IntSO*) == 0x8);
    // private NamedIntListSettingsController/TextValuePair[] _textValuePairs
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::GlobalNamespace::NamedIntListSettingsController::TextValuePair*> textValuePairs;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::NamedIntListSettingsController::TextValuePair*>) == 0x8);
    public:
    // Get instance field reference: private IntSO _settingsValue
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IntSO*& dyn__settingsValue();
    // Get instance field reference: private NamedIntListSettingsController/TextValuePair[] _textValuePairs
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::NamedIntListSettingsController::TextValuePair*>& dyn__textValuePairs();
    // public System.Void .ctor()
    // Offset: 0x1504EA4
    // Implemented from: ListSettingsController
    // Base method: System.Void ListSettingsController::.ctor()
    // Base method: System.Void IncDecSettingsController::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NamedIntListSettingsController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NamedIntListSettingsController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NamedIntListSettingsController*, creationType>()));
    }
    // protected override System.Boolean GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    // Offset: 0x1504CD4
    // Implemented from: ListSettingsController
    // Base method: System.Boolean ListSettingsController::GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    bool GetInitValues(ByRef<int> idx, ByRef<int> numberOfElements);
    // protected override System.Void ApplyValue(System.Int32 idx)
    // Offset: 0x1504DBC
    // Implemented from: ListSettingsController
    // Base method: System.Void ListSettingsController::ApplyValue(System.Int32 idx)
    void ApplyValue(int idx);
    // protected override System.String TextForValue(System.Int32 idx)
    // Offset: 0x1504E50
    // Implemented from: ListSettingsController
    // Base method: System.String ListSettingsController::TextForValue(System.Int32 idx)
    ::StringW TextForValue(int idx);
  }; // NamedIntListSettingsController
  #pragma pack(pop)
  static check_size<sizeof(NamedIntListSettingsController), 48 + sizeof(::ArrayW<::GlobalNamespace::NamedIntListSettingsController::TextValuePair*>)> __GlobalNamespace_NamedIntListSettingsControllerSizeCheck;
  static_assert(sizeof(NamedIntListSettingsController) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NamedIntListSettingsController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NamedIntListSettingsController::GetInitValues
// Il2CppName: GetInitValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::NamedIntListSettingsController::*)(ByRef<int>, ByRef<int>)>(&GlobalNamespace::NamedIntListSettingsController::GetInitValues)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* numberOfElements = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NamedIntListSettingsController*), "GetInitValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx, numberOfElements});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NamedIntListSettingsController::ApplyValue
// Il2CppName: ApplyValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NamedIntListSettingsController::*)(int)>(&GlobalNamespace::NamedIntListSettingsController::ApplyValue)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NamedIntListSettingsController*), "ApplyValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NamedIntListSettingsController::TextForValue
// Il2CppName: TextForValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::NamedIntListSettingsController::*)(int)>(&GlobalNamespace::NamedIntListSettingsController::TextForValue)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NamedIntListSettingsController*), "TextForValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
