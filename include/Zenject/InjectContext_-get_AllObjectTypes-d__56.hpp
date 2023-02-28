// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.InjectContext
#include "Zenject/InjectContext.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::InjectContext::$get_AllObjectTypes$d__56);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InjectContext::$get_AllObjectTypes$d__56*, "Zenject", "InjectContext/<get_AllObjectTypes>d__56");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.InjectContext/Zenject.<get_AllObjectTypes>d__56
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class InjectContext::$get_AllObjectTypes$d__56 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<::System::Type*>, public ::System::Collections::Generic::IEnumerator_1<::System::Type*>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Type <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::System::Type* $$2__current;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: $$4__this
    char __padding2[0x4] = {};
    // public Zenject.InjectContext <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::Zenject::InjectContext* $$4__this;
    // Field size check
    static_assert(sizeof(::Zenject::InjectContext*) == 0x8);
    // private System.Collections.Generic.IEnumerator`1<Zenject.InjectContext> <>7__wrap1
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>* $$7__wrap1;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::System::Type*>
    operator ::System::Collections::Generic::IEnumerable_1<::System::Type*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(this);
    }
    // Creating interface conversion operator: i_Type
    inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* i_Type() noexcept {
      return reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::System::Type*>
    operator ::System::Collections::Generic::IEnumerator_1<::System::Type*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::System::Type*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Type <>2__current
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_$$2__current();
    // Get instance field reference: private System.Int32 <>l__initialThreadId
    [[deprecated("Use field access instead!")]] int& dyn_$$l__initialThreadId();
    // Get instance field reference: public Zenject.InjectContext <>4__this
    [[deprecated("Use field access instead!")]] ::Zenject::InjectContext*& dyn_$$4__this();
    // Get instance field reference: private System.Collections.Generic.IEnumerator`1<Zenject.InjectContext> <>7__wrap1
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>*& dyn_$$7__wrap1();
    // private System.Type System.Collections.Generic.IEnumerator<System.Type>.get_Current()
    // Offset: 0x1CC70E8
    ::System::Type* System_Collections_Generic_IEnumerator$System_Type$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1CC7150
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1CC6CFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InjectContext::$get_AllObjectTypes$d__56* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::InjectContext::$get_AllObjectTypes$d__56::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InjectContext::$get_AllObjectTypes$d__56*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1CC6D34
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1CC6E10
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x1CC6D50
    void $$m__Finally1();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1CC70F0
    void System_Collections_IEnumerator_Reset();
    // private System.Collections.Generic.IEnumerator`1<System.Type> System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator()
    // Offset: 0x1CC7158
    ::System::Collections::Generic::IEnumerator_1<::System::Type*>* System_Collections_Generic_IEnumerable$System_Type$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1CC7204
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1CC7208
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1CC72D4
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.InjectContext/Zenject.<get_AllObjectTypes>d__56
  #pragma pack(pop)
  static check_size<sizeof(InjectContext::$get_AllObjectTypes$d__56), 48 + sizeof(::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>*)> __Zenject_InjectContext_$get_AllObjectTypes$d__56SizeCheck;
  static_assert(sizeof(InjectContext::$get_AllObjectTypes$d__56) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::InjectContext::$get_AllObjectTypes$d__56::System_Collections_Generic_IEnumerator$System_Type$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Type>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Zenject::InjectContext::$get_AllObjectTypes$d__56::*)()>(&Zenject::InjectContext::$get_AllObjectTypes$d__56::System_Collections_Generic_IEnumerator$System_Type$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext::$get_AllObjectTypes$d__56*), "System.Collections.Generic.IEnumerator<System.Type>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::$get_AllObjectTypes$d__56::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Zenject::InjectContext::$get_AllObjectTypes$d__56::*)()>(&Zenject::InjectContext::$get_AllObjectTypes$d__56::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext::$get_AllObjectTypes$d__56*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::$get_AllObjectTypes$d__56::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::InjectContext::$get_AllObjectTypes$d__56::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::InjectContext::$get_AllObjectTypes$d__56::*)()>(&Zenject::InjectContext::$get_AllObjectTypes$d__56::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext::$get_AllObjectTypes$d__56*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::$get_AllObjectTypes$d__56::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::InjectContext::$get_AllObjectTypes$d__56::*)()>(&Zenject::InjectContext::$get_AllObjectTypes$d__56::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext::$get_AllObjectTypes$d__56*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::$get_AllObjectTypes$d__56::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::InjectContext::$get_AllObjectTypes$d__56::*)()>(&Zenject::InjectContext::$get_AllObjectTypes$d__56::$$m__Finally1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext::$get_AllObjectTypes$d__56*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::$get_AllObjectTypes$d__56::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::InjectContext::$get_AllObjectTypes$d__56::*)()>(&Zenject::InjectContext::$get_AllObjectTypes$d__56::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext::$get_AllObjectTypes$d__56*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::$get_AllObjectTypes$d__56::System_Collections_Generic_IEnumerable$System_Type$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Type*>* (Zenject::InjectContext::$get_AllObjectTypes$d__56::*)()>(&Zenject::InjectContext::$get_AllObjectTypes$d__56::System_Collections_Generic_IEnumerable$System_Type$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext::$get_AllObjectTypes$d__56*), "System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::$get_AllObjectTypes$d__56::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Zenject::InjectContext::$get_AllObjectTypes$d__56::*)()>(&Zenject::InjectContext::$get_AllObjectTypes$d__56::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext::$get_AllObjectTypes$d__56*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::$get_AllObjectTypes$d__56::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::InjectContext::$get_AllObjectTypes$d__56::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext::$get_AllObjectTypes$d__56*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::$get_AllObjectTypes$d__56::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::InjectContext::$get_AllObjectTypes$d__56::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext::$get_AllObjectTypes$d__56*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
