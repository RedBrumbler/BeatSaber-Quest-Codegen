// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Internal.TestExecutionContext
#include "NUnit/Framework/Internal/TestExecutionContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: ValueFormatter
  class ValueFormatter;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Internal::TestExecutionContext::$$c);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Internal::TestExecutionContext::$$c*, "NUnit.Framework.Internal", "TestExecutionContext/<>c");
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.TestExecutionContext/NUnit.Framework.Internal.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TestExecutionContext::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly NUnit.Framework.Internal.TestExecutionContext/NUnit.Framework.Internal.<>c <>9
    static ::NUnit::Framework::Internal::TestExecutionContext::$$c* _get_$$9();
    // Set static field: static public readonly NUnit.Framework.Internal.TestExecutionContext/NUnit.Framework.Internal.<>c <>9
    static void _set_$$9(::NUnit::Framework::Internal::TestExecutionContext::$$c* value);
    // Get static field: static public NUnit.Framework.Constraints.ValueFormatter <>9__9_0
    static ::NUnit::Framework::Constraints::ValueFormatter* _get_$$9__9_0();
    // Set static field: static public NUnit.Framework.Constraints.ValueFormatter <>9__9_0
    static void _set_$$9__9_0(::NUnit::Framework::Constraints::ValueFormatter* value);
    // static private System.Void .cctor()
    // Offset: 0x2ABD72C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x2ABD790
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestExecutionContext::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::Internal::TestExecutionContext::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestExecutionContext::$$c*, creationType>()));
    }
    // System.String <.ctor>b__9_0(System.Object val)
    // Offset: 0x2ABD798
    ::StringW $_ctor$b__9_0(::Il2CppObject* val);
  }; // NUnit.Framework.Internal.TestExecutionContext/NUnit.Framework.Internal.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestExecutionContext::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&NUnit::Framework::Internal::TestExecutionContext::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestExecutionContext::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestExecutionContext::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestExecutionContext::$$c::$_ctor$b__9_0
// Il2CppName: <.ctor>b__9_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (NUnit::Framework::Internal::TestExecutionContext::$$c::*)(::Il2CppObject*)>(&NUnit::Framework::Internal::TestExecutionContext::$$c::$_ctor$b__9_0)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestExecutionContext::$$c*), "<.ctor>b__9_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
