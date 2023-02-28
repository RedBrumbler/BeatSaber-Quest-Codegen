// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.IComparer
#include "System/Collections/IComparer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Collections
namespace System::Collections {
  // Forward declaring type: LowLevelComparer
  class LowLevelComparer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::LowLevelComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::LowLevelComparer*, "System.Collections", "LowLevelComparer");
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.LowLevelComparer
  // [TokenAttribute] Offset: FFFFFFFF
  class LowLevelComparer : public ::Il2CppObject/*, public ::System::Collections::IComparer*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::IComparer
    operator ::System::Collections::IComparer() noexcept {
      return *reinterpret_cast<::System::Collections::IComparer*>(this);
    }
    // Creating interface conversion operator: i_IComparer
    inline ::System::Collections::IComparer* i_IComparer() noexcept {
      return reinterpret_cast<::System::Collections::IComparer*>(this);
    }
    // Get static field: static readonly System.Collections.LowLevelComparer Default
    static ::System::Collections::LowLevelComparer* _get_Default();
    // Set static field: static readonly System.Collections.LowLevelComparer Default
    static void _set_Default(::System::Collections::LowLevelComparer* value);
    // static private System.Void .cctor()
    // Offset: 0x1DCAED8
    static void _cctor();
    // public System.Int32 Compare(System.Object a, System.Object b)
    // Offset: 0x1DCAD20
    int Compare(::Il2CppObject* a, ::Il2CppObject* b);
    // private System.Void .ctor()
    // Offset: 0x1DCAD18
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LowLevelComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::LowLevelComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LowLevelComparer*, creationType>()));
    }
  }; // System.Collections.LowLevelComparer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::LowLevelComparer::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Collections::LowLevelComparer::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::LowLevelComparer*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::LowLevelComparer::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::LowLevelComparer::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Collections::LowLevelComparer::Compare)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::LowLevelComparer*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: System::Collections::LowLevelComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
