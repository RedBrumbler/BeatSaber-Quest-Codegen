// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
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
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: Object
  class Object;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Object);
DEFINE_IL2CPP_ARG_TYPE(::System::Object*, "System", "Object");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Object
  // [TokenAttribute] Offset: FFFFFFFF
  // [ClassInterfaceAttribute] Offset: 107AF80
  // [ComVisibleAttribute] Offset: 107AF80
  class Object {
    public:
    // public System.Void .ctor()
    // Offset: 0x22D1718
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ::Il2CppObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Object::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<::Il2CppObject*, creationType>()));
    }
    // public System.Boolean Equals(System.Object obj)
    // Offset: 0x22D62AC
    bool Equals(::Il2CppObject* obj);
    // static public System.Boolean Equals(System.Object objA, System.Object objB)
    // Offset: 0x22D62B8
    static bool Equals(::Il2CppObject* objA, ::Il2CppObject* objB);
    // protected System.Void Finalize()
    // Offset: 0x22D62E4
    void Finalize();
    // public System.Int32 GetHashCode()
    // Offset: 0x22D62E8
    int GetHashCode();
    // public System.Type GetType()
    // Offset: 0x22D62F0
    ::System::Type* GetType();
    // protected System.Object MemberwiseClone()
    // Offset: 0x22D61C0
    ::Il2CppObject* MemberwiseClone();
    // public System.String ToString()
    // Offset: 0x22D62F4
    ::StringW ToString();
    // static System.Int32 InternalGetHashCode(System.Object o)
    // Offset: 0x22D62EC
    static int InternalGetHashCode(::Il2CppObject* o);
    // private System.Void FieldGetter(System.String typeName, System.String fieldName, ref System.Object val)
    // Offset: 0x22D6318
    void FieldGetter(::StringW typeName, ::StringW fieldName, ByRef<::Il2CppObject*> val);
    // private System.Void FieldSetter(System.String typeName, System.String fieldName, System.Object val)
    // Offset: 0x22D631C
    void FieldSetter(::StringW typeName, ::StringW fieldName, ::Il2CppObject* val);
  }; // System.Object
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Object::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Object::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Object::*)(::Il2CppObject*)>(&System::Object::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Object*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Object::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Object::Equals)> {
  static const MethodInfo* get() {
    static auto* objA = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* objB = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Object*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objA, objB});
  }
};
// Writing MetadataGetter for method: System::Object::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Object::*)()>(&System::Object::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Object*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Object::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Object::*)()>(&System::Object::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Object*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Object::GetType
// Il2CppName: GetType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Object::*)()>(&System::Object::GetType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Object*), "GetType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Object::MemberwiseClone
// Il2CppName: MemberwiseClone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Object::*)()>(&System::Object::MemberwiseClone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Object*), "MemberwiseClone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Object::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Object::*)()>(&System::Object::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Object*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Object::InternalGetHashCode
// Il2CppName: InternalGetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppObject*)>(&System::Object::InternalGetHashCode)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Object*), "InternalGetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: System::Object::FieldGetter
// Il2CppName: FieldGetter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Object::*)(::StringW, ::StringW, ByRef<::Il2CppObject*>)>(&System::Object::FieldGetter)> {
  static const MethodInfo* get() {
    static auto* typeName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* fieldName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Object")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Object*), "FieldGetter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{typeName, fieldName, val});
  }
};
// Writing MetadataGetter for method: System::Object::FieldSetter
// Il2CppName: FieldSetter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Object::*)(::StringW, ::StringW, ::Il2CppObject*)>(&System::Object::FieldSetter)> {
  static const MethodInfo* get() {
    static auto* typeName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* fieldName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Object*), "FieldSetter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{typeName, fieldName, val});
  }
};
