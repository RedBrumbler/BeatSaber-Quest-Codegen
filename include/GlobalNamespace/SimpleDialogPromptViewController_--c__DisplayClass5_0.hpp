// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SimpleDialogPromptViewController
#include "GlobalNamespace/SimpleDialogPromptViewController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SimpleDialogPromptViewController::$$c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleDialogPromptViewController::$$c__DisplayClass5_0*, "", "SimpleDialogPromptViewController/<>c__DisplayClass5_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: SimpleDialogPromptViewController/<>c__DisplayClass5_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SimpleDialogPromptViewController::$$c__DisplayClass5_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 buttonNum
    // Size: 0x4
    // Offset: 0x10
    int buttonNum;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: buttonNum and: $$4__this
    char __padding0[0x4] = {};
    // public SimpleDialogPromptViewController <>4__this
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::SimpleDialogPromptViewController* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SimpleDialogPromptViewController*) == 0x8);
    public:
    // Get instance field reference: public System.Int32 buttonNum
    [[deprecated("Use field access instead!")]] int& dyn_buttonNum();
    // Get instance field reference: public SimpleDialogPromptViewController <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SimpleDialogPromptViewController*& dyn_$$4__this();
    // public System.Void .ctor()
    // Offset: 0x141DBA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleDialogPromptViewController::$$c__DisplayClass5_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SimpleDialogPromptViewController::$$c__DisplayClass5_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleDialogPromptViewController::$$c__DisplayClass5_0*, creationType>()));
    }
    // System.Void <DidActivate>b__0()
    // Offset: 0x141DD9C
    void $DidActivate$b__0();
  }; // SimpleDialogPromptViewController/<>c__DisplayClass5_0
  #pragma pack(pop)
  static check_size<sizeof(SimpleDialogPromptViewController::$$c__DisplayClass5_0), 24 + sizeof(::GlobalNamespace::SimpleDialogPromptViewController*)> __GlobalNamespace_SimpleDialogPromptViewController_$$c__DisplayClass5_0SizeCheck;
  static_assert(sizeof(SimpleDialogPromptViewController::$$c__DisplayClass5_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SimpleDialogPromptViewController::$$c__DisplayClass5_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SimpleDialogPromptViewController::$$c__DisplayClass5_0::$DidActivate$b__0
// Il2CppName: <DidActivate>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleDialogPromptViewController::$$c__DisplayClass5_0::*)()>(&GlobalNamespace::SimpleDialogPromptViewController::$$c__DisplayClass5_0::$DidActivate$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleDialogPromptViewController::$$c__DisplayClass5_0*), "<DidActivate>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
