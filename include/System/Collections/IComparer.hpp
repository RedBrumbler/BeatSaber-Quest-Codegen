// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.IComparer
  // [ComVisibleAttribute] Offset: D7FD70
  class IComparer {
    public:
    // Creating value type constructor for type: IComparer
    IComparer() noexcept {}
    // public System.Int32 Compare(System.Object x, System.Object y)
    // Offset: 0xFFFFFFFF
    int Compare(::Il2CppObject* x, ::Il2CppObject* y);
  }; // System.Collections.IComparer
  #pragma pack(pop)
  // Writing MetadataGetter for method: IComparer::Compare
  // Il2CppName: Compare
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (IComparer::*)(::Il2CppObject*, ::Il2CppObject*)>(&IComparer::Compare)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IComparer*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
    }
  };
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::IComparer*, "System.Collections", "IComparer");
