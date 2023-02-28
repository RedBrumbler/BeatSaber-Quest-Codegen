// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Internal.Filters.CategoryFilter
#include "NUnit/Framework/Internal/Filters/CategoryFilter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Filters
namespace UnityEngine::TestRunner::NUnitExtensions::Filters {
  // Forward declaring type: CategoryFilterExtended
  class CategoryFilterExtended;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TestRunner::NUnitExtensions::Filters::CategoryFilterExtended);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TestRunner::NUnitExtensions::Filters::CategoryFilterExtended*, "UnityEngine.TestRunner.NUnitExtensions.Filters", "CategoryFilterExtended");
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Filters
namespace UnityEngine::TestRunner::NUnitExtensions::Filters {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Filters.CategoryFilterExtended
  // [TokenAttribute] Offset: FFFFFFFF
  class CategoryFilterExtended : public ::NUnit::Framework::Internal::Filters::CategoryFilter {
    public:
    // Get static field: static public System.String k_DefaultCategory
    static ::StringW _get_k_DefaultCategory();
    // Set static field: static public System.String k_DefaultCategory
    static void _set_k_DefaultCategory(::StringW value);
    // public System.Void .ctor(System.String name)
    // Offset: 0x19B6B44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CategoryFilterExtended* New_ctor(::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TestRunner::NUnitExtensions::Filters::CategoryFilterExtended::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CategoryFilterExtended*, creationType>(name)));
    }
    // static private System.Void .cctor()
    // Offset: 0x19B6FE0
    static void _cctor();
    // public override System.Boolean Match(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x19B6B4C
    // Implemented from: NUnit.Framework.Internal.Filters.CategoryFilter
    // Base method: System.Boolean CategoryFilter::Match(NUnit.Framework.Interfaces.ITest test)
    bool Match(::NUnit::Framework::Interfaces::ITest* test);
  }; // UnityEngine.TestRunner.NUnitExtensions.Filters.CategoryFilterExtended
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Filters::CategoryFilterExtended::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Filters::CategoryFilterExtended::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::TestRunner::NUnitExtensions::Filters::CategoryFilterExtended::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Filters::CategoryFilterExtended*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Filters::CategoryFilterExtended::Match
// Il2CppName: Match
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TestRunner::NUnitExtensions::Filters::CategoryFilterExtended::*)(::NUnit::Framework::Interfaces::ITest*)>(&UnityEngine::TestRunner::NUnitExtensions::Filters::CategoryFilterExtended::Match)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Filters::CategoryFilterExtended*), "Match", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
