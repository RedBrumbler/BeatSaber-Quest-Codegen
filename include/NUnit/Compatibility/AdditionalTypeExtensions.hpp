// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Compatibility
namespace NUnit::Compatibility {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
}
// Completed forward declares
// Type namespace: NUnit.Compatibility
namespace NUnit::Compatibility {
  // Autogenerated type: NUnit.Compatibility.AdditionalTypeExtensions
  class AdditionalTypeExtensions : public ::Il2CppObject {
    public:
    // Nested type: NUnit::Compatibility::AdditionalTypeExtensions::$$c__DisplayClass1
    class $$c__DisplayClass1;
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Type>> convertibleValueTypes
    static System::Collections::Generic::Dictionary_2<System::Type*, System::Collections::Generic::List_1<System::Type*>*>* _get_convertibleValueTypes();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Type>> convertibleValueTypes
    static void _set_convertibleValueTypes(System::Collections::Generic::Dictionary_2<System::Type*, System::Collections::Generic::List_1<System::Type*>*>* value);
    // static public System.Boolean ParametersMatch(System.Reflection.ParameterInfo[] pinfos, System.Type[] ptypes)
    // Offset: 0x105B214
    static bool ParametersMatch(::Array<System::Reflection::ParameterInfo*>* pinfos, ::Array<System::Type*>* ptypes);
    // static public System.Boolean IsCastableFrom(System.Type to, System.Type from)
    // Offset: 0x105B328
    static bool IsCastableFrom(System::Type* to, System::Type* from);
    // static private System.Void .cctor()
    // Offset: 0x105B584
    static void _cctor();
  }; // NUnit.Compatibility.AdditionalTypeExtensions
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Compatibility::AdditionalTypeExtensions*, "NUnit.Compatibility", "AdditionalTypeExtensions");
#pragma pack(pop)