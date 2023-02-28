// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ModifierSpec
#include "System/ModifierSpec.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: ArraySpec
  class ArraySpec;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ArraySpec);
DEFINE_IL2CPP_ARG_TYPE(::System::ArraySpec*, "System", "ArraySpec");
// Type namespace: System
namespace System {
  // Size: 0x15
  #pragma pack(push, 1)
  // Autogenerated type: System.ArraySpec
  // [TokenAttribute] Offset: FFFFFFFF
  class ArraySpec : public ::Il2CppObject/*, public ::System::ModifierSpec*/ {
    public:
    public:
    // private System.Int32 dimensions
    // Size: 0x4
    // Offset: 0x10
    int dimensions;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean bound
    // Size: 0x1
    // Offset: 0x14
    bool bound;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::ModifierSpec
    operator ::System::ModifierSpec() noexcept {
      return *reinterpret_cast<::System::ModifierSpec*>(this);
    }
    // Creating interface conversion operator: i_ModifierSpec
    inline ::System::ModifierSpec* i_ModifierSpec() noexcept {
      return reinterpret_cast<::System::ModifierSpec*>(this);
    }
    // Get instance field reference: private System.Int32 dimensions
    [[deprecated("Use field access instead!")]] int& dyn_dimensions();
    // Get instance field reference: private System.Boolean bound
    [[deprecated("Use field access instead!")]] bool& dyn_bound();
    // System.Void .ctor(System.Int32 dimensions, System.Boolean bound)
    // Offset: 0x1F2C4AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArraySpec* New_ctor(int dimensions, bool bound) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArraySpec::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArraySpec*, creationType>(dimensions, bound)));
    }
    // public System.Type Resolve(System.Type type)
    // Offset: 0x1F2C4EC
    ::System::Type* Resolve(::System::Type* type);
    // public System.Text.StringBuilder Append(System.Text.StringBuilder sb)
    // Offset: 0x1F2C560
    ::System::Text::StringBuilder* Append(::System::Text::StringBuilder* sb);
    // public override System.String ToString()
    // Offset: 0x1F2C614
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.ArraySpec
  #pragma pack(pop)
  static check_size<sizeof(ArraySpec), 20 + sizeof(bool)> __System_ArraySpecSizeCheck;
  static_assert(sizeof(ArraySpec) == 0x15);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ArraySpec::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ArraySpec::Resolve
// Il2CppName: Resolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::ArraySpec::*)(::System::Type*)>(&System::ArraySpec::Resolve)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ArraySpec*), "Resolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::ArraySpec::Append
// Il2CppName: Append
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::StringBuilder* (System::ArraySpec::*)(::System::Text::StringBuilder*)>(&System::ArraySpec::Append)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ArraySpec*), "Append", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb});
  }
};
// Writing MetadataGetter for method: System::ArraySpec::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ArraySpec::*)()>(&System::ArraySpec::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ArraySpec*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
