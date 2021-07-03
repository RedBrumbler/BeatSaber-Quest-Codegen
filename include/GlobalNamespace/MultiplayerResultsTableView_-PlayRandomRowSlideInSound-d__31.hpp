// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerResultsTableView
#include "GlobalNamespace/MultiplayerResultsTableView.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerResultsTableView/<PlayRandomRowSlideInSound>d__31
  // [CompilerGeneratedAttribute] Offset: E12988
  class MultiplayerResultsTableView::$PlayRandomRowSlideInSound$d__31 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Single delay
    // Size: 0x4
    // Offset: 0x20
    float delay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: delay and: $$4__this
    char __padding2[0x4] = {};
    // public MultiplayerResultsTableView <>4__this
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MultiplayerResultsTableView* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerResultsTableView*) == 0x8);
    // Creating value type constructor for type: $PlayRandomRowSlideInSound$d__31
    $PlayRandomRowSlideInSound$d__31(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, float delay_ = {}, GlobalNamespace::MultiplayerResultsTableView* $$4__this_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, delay{delay_}, $$4__this{$$4__this_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x100F054
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerResultsTableView::$PlayRandomRowSlideInSound$d__31* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerResultsTableView::$PlayRandomRowSlideInSound$d__31::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerResultsTableView::$PlayRandomRowSlideInSound$d__31*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x100F354
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x100F358
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x100F458
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x100F460
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x100F4C0
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // MultiplayerResultsTableView/<PlayRandomRowSlideInSound>d__31
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerResultsTableView::$PlayRandomRowSlideInSound$d__31), 40 + sizeof(GlobalNamespace::MultiplayerResultsTableView*)> __GlobalNamespace_MultiplayerResultsTableView_$PlayRandomRowSlideInSound$d__31SizeCheck;
  static_assert(sizeof(MultiplayerResultsTableView::$PlayRandomRowSlideInSound$d__31) == 0x30);
  // Writing MetadataGetter for method: MultiplayerResultsTableView::$PlayRandomRowSlideInSound$d__31::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MultiplayerResultsTableView::$PlayRandomRowSlideInSound$d__31::*)(int)>(&MultiplayerResultsTableView::$PlayRandomRowSlideInSound$d__31::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MultiplayerResultsTableView::$PlayRandomRowSlideInSound$d__31*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MultiplayerResultsTableView::$PlayRandomRowSlideInSound$d__31::*)(int)>(&MultiplayerResultsTableView::$PlayRandomRowSlideInSound$d__31::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MultiplayerResultsTableView::$PlayRandomRowSlideInSound$d__31*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: MultiplayerResultsTableView::$PlayRandomRowSlideInSound$d__31::System_IDisposable_Dispose
  // Il2CppName: System.IDisposable.Dispose
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MultiplayerResultsTableView::$PlayRandomRowSlideInSound$d__31::*)()>(&MultiplayerResultsTableView::$PlayRandomRowSlideInSound$d__31::System_IDisposable_Dispose)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MultiplayerResultsTableView::$PlayRandomRowSlideInSound$d__31*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: MultiplayerResultsTableView::$PlayRandomRowSlideInSound$d__31::MoveNext
  // Il2CppName: MoveNext
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MultiplayerResultsTableView::$PlayRandomRowSlideInSound$d__31::*)()>(&MultiplayerResultsTableView::$PlayRandomRowSlideInSound$d__31::MoveNext)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MultiplayerResultsTableView::$PlayRandomRowSlideInSound$d__31*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: MultiplayerResultsTableView::$PlayRandomRowSlideInSound$d__31::System_Collections_Generic_IEnumerator$System_Object$_get_Current
  // Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (MultiplayerResultsTableView::$PlayRandomRowSlideInSound$d__31::*)()>(&MultiplayerResultsTableView::$PlayRandomRowSlideInSound$d__31::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MultiplayerResultsTableView::$PlayRandomRowSlideInSound$d__31*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: MultiplayerResultsTableView::$PlayRandomRowSlideInSound$d__31::System_Collections_IEnumerator_Reset
  // Il2CppName: System.Collections.IEnumerator.Reset
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MultiplayerResultsTableView::$PlayRandomRowSlideInSound$d__31::*)()>(&MultiplayerResultsTableView::$PlayRandomRowSlideInSound$d__31::System_Collections_IEnumerator_Reset)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MultiplayerResultsTableView::$PlayRandomRowSlideInSound$d__31*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: MultiplayerResultsTableView::$PlayRandomRowSlideInSound$d__31::System_Collections_IEnumerator_get_Current
  // Il2CppName: System.Collections.IEnumerator.get_Current
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (MultiplayerResultsTableView::$PlayRandomRowSlideInSound$d__31::*)()>(&MultiplayerResultsTableView::$PlayRandomRowSlideInSound$d__31::System_Collections_IEnumerator_get_Current)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MultiplayerResultsTableView::$PlayRandomRowSlideInSound$d__31*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerResultsTableView::$PlayRandomRowSlideInSound$d__31*, "", "MultiplayerResultsTableView/<PlayRandomRowSlideInSound>d__31");
