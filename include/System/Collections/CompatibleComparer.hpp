// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Collections.IEqualityComparer
#include "System/Collections/IEqualityComparer.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IComparer
  class IComparer;
  // Forward declaring type: IHashCodeProvider
  class IHashCodeProvider;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Autogenerated type: System.Collections.CompatibleComparer
  class CompatibleComparer : public ::Il2CppObject, public System::Collections::IEqualityComparer {
    public:
    // private System.Collections.IComparer _comparer
    // Offset: 0x10
    System::Collections::IComparer* comparer;
    // private System.Collections.IHashCodeProvider _hcp
    // Offset: 0x18
    System::Collections::IHashCodeProvider* hcp;
    // System.Void .ctor(System.Collections.IComparer comparer, System.Collections.IHashCodeProvider hashCodeProvider)
    // Offset: 0x131F000
    static CompatibleComparer* New_ctor(System::Collections::IComparer* comparer, System::Collections::IHashCodeProvider* hashCodeProvider);
    // public System.Int32 Compare(System.Object a, System.Object b)
    // Offset: 0x131F050
    int Compare(::Il2CppObject* a, ::Il2CppObject* b);
    // System.Collections.IComparer get_Comparer()
    // Offset: 0x131F358
    System::Collections::IComparer* get_Comparer();
    // System.Collections.IHashCodeProvider get_HashCodeProvider()
    // Offset: 0x131F360
    System::Collections::IHashCodeProvider* get_HashCodeProvider();
    // public System.Boolean Equals(System.Object a, System.Object b)
    // Offset: 0x131F224
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object a, System.Object b)
    // Base method: System.Boolean IEqualityComparer::Equals(System.Object a, System.Object b)
    bool Equals(::Il2CppObject* a, ::Il2CppObject* b);
    // Creating proxy method: System_Collections_IEqualityComparer_Equals
    // Maps to method: Equals
    bool System_Collections_IEqualityComparer_Equals(::Il2CppObject* a, ::Il2CppObject* b);
    // public System.Int32 GetHashCode(System.Object obj)
    // Offset: 0x131F240
    // Implemented from: System.Collections.IEqualityComparer
    // Base method: System.Int32 IEqualityComparer::GetHashCode(System.Object obj)
    int GetHashCode(::Il2CppObject* obj);
    // Creating proxy method: System_Collections_IEqualityComparer_GetHashCode
    // Maps to method: GetHashCode
    int System_Collections_IEqualityComparer_GetHashCode(::Il2CppObject* obj);
  }; // System.Collections.CompatibleComparer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::CompatibleComparer*, "System.Collections", "CompatibleComparer");
#pragma pack(pop)