// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.TestNameGenerator/NameFragment
#include "NUnit/Framework/Internal/TestNameGenerator_NameFragment.hpp"
// Including type: NUnit.Framework.Internal.TestNameGenerator
#include "NUnit/Framework/Internal/TestNameGenerator.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Autogenerated type: NUnit.Framework.Internal.TestNameGenerator/FixedTextFragment
  class TestNameGenerator::FixedTextFragment : public NUnit::Framework::Internal::TestNameGenerator::NameFragment {
    public:
    // private System.String _text
    // Offset: 0x10
    ::Il2CppString* text;
    // public System.Void .ctor(System.String text)
    // Offset: 0x18DAEFC
    static TestNameGenerator::FixedTextFragment* New_ctor(::Il2CppString* text);
    // public override System.String GetText(System.Reflection.MethodInfo method, System.Object[] args)
    // Offset: 0x18DBC10
    // Implemented from: NUnit.Framework.Internal.TestNameGenerator/NameFragment
    // Base method: System.String NameFragment::GetText(System.Reflection.MethodInfo method, System.Object[] args)
    ::Il2CppString* GetText(System::Reflection::MethodInfo* method, ::Array<::Il2CppObject*>* args);
  }; // NUnit.Framework.Internal.TestNameGenerator/FixedTextFragment
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestNameGenerator::FixedTextFragment*, "NUnit.Framework.Internal", "TestNameGenerator/FixedTextFragment");
#pragma pack(pop)