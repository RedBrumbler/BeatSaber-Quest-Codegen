// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Serialization.JsonContainerContract
#include "Newtonsoft/Json/Serialization/JsonContainerContract.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Forward declaring namespace: Newtonsoft::Json::Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: ObjectConstructor`1<T>
  template<typename T>
  class ObjectConstructor_1;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ConstructorInfo
  class ConstructorInfo;
}
// Forward declaring namespace: Newtonsoft::Json::Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: IWrappedCollection
  class IWrappedCollection;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IList
  class IList;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: JsonArrayContract
  class JsonArrayContract;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonArrayContract);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonArrayContract*, "Newtonsoft.Json.Serialization", "JsonArrayContract");
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // WARNING Size may be invalid!
  // Autogenerated type: Newtonsoft.Json.Serialization.JsonArrayContract
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class JsonArrayContract : public ::Newtonsoft::Json::Serialization::JsonContainerContract {
    public:
    public:
    // private System.Type <CollectionItemType>k__BackingField
    // Size: 0x8
    // Offset: 0xC0
    ::System::Type* CollectionItemType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private System.Boolean <IsMultidimensionalArray>k__BackingField
    // Size: 0x1
    // Offset: 0xC8
    bool IsMultidimensionalArray;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private readonly System.Type _genericCollectionDefinitionType
    // Size: 0x8
    // Offset: 0xD0
    ::System::Type* genericCollectionDefinitionType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private System.Type _genericWrapperType
    // Size: 0x8
    // Offset: 0xD8
    ::System::Type* genericWrapperType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> _genericWrapperCreator
    // Size: 0x8
    // Offset: 0xE0
    ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>* genericWrapperCreator;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>*) == 0x8);
    // private System.Func`1<System.Object> _genericTemporaryCollectionCreator
    // Size: 0x8
    // Offset: 0xE8
    ::System::Func_1<::Il2CppObject*>* genericTemporaryCollectionCreator;
    // Field size check
    static_assert(sizeof(::System::Func_1<::Il2CppObject*>*) == 0x8);
    // private System.Boolean <IsArray>k__BackingField
    // Size: 0x1
    // Offset: 0xF0
    bool IsArray;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <ShouldCreateWrapper>k__BackingField
    // Size: 0x1
    // Offset: 0xF1
    bool ShouldCreateWrapper;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <CanDeserialize>k__BackingField
    // Size: 0x1
    // Offset: 0xF2
    bool CanDeserialize;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private readonly System.Reflection.ConstructorInfo _parameterizedConstructor
    // Size: 0x8
    // Offset: 0xF8
    ::System::Reflection::ConstructorInfo* parameterizedConstructor;
    // Field size check
    static_assert(sizeof(::System::Reflection::ConstructorInfo*) == 0x8);
    // private Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> _parameterizedCreator
    // Size: 0x8
    // Offset: 0x100
    ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>* parameterizedCreator;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>*) == 0x8);
    // private Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> _overrideCreator
    // Size: 0x8
    // Offset: 0x108
    ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>* overrideCreator;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>*) == 0x8);
    // private System.Boolean <HasParameterizedCreator>k__BackingField
    // Size: 0x1
    // Offset: 0x110
    bool HasParameterizedCreator;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Type <CollectionItemType>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_$CollectionItemType$k__BackingField();
    // Get instance field reference: private System.Boolean <IsMultidimensionalArray>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsMultidimensionalArray$k__BackingField();
    // Get instance field reference: private readonly System.Type _genericCollectionDefinitionType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn__genericCollectionDefinitionType();
    // Get instance field reference: private System.Type _genericWrapperType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn__genericWrapperType();
    // Get instance field reference: private Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> _genericWrapperCreator
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>*& dyn__genericWrapperCreator();
    // Get instance field reference: private System.Func`1<System.Object> _genericTemporaryCollectionCreator
    [[deprecated("Use field access instead!")]] ::System::Func_1<::Il2CppObject*>*& dyn__genericTemporaryCollectionCreator();
    // Get instance field reference: private System.Boolean <IsArray>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsArray$k__BackingField();
    // Get instance field reference: private System.Boolean <ShouldCreateWrapper>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$ShouldCreateWrapper$k__BackingField();
    // Get instance field reference: private System.Boolean <CanDeserialize>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$CanDeserialize$k__BackingField();
    // Get instance field reference: private readonly System.Reflection.ConstructorInfo _parameterizedConstructor
    [[deprecated("Use field access instead!")]] ::System::Reflection::ConstructorInfo*& dyn__parameterizedConstructor();
    // Get instance field reference: private Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> _parameterizedCreator
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>*& dyn__parameterizedCreator();
    // Get instance field reference: private Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> _overrideCreator
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>*& dyn__overrideCreator();
    // Get instance field reference: private System.Boolean <HasParameterizedCreator>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$HasParameterizedCreator$k__BackingField();
    // public System.Type get_CollectionItemType()
    // Offset: 0x1E12EB4
    ::System::Type* get_CollectionItemType();
    // private System.Void set_CollectionItemType(System.Type value)
    // Offset: 0x1E12EBC
    void set_CollectionItemType(::System::Type* value);
    // public System.Boolean get_IsMultidimensionalArray()
    // Offset: 0x1E12EC4
    bool get_IsMultidimensionalArray();
    // private System.Void set_IsMultidimensionalArray(System.Boolean value)
    // Offset: 0x1E12ECC
    void set_IsMultidimensionalArray(bool value);
    // System.Boolean get_IsArray()
    // Offset: 0x1E12ED8
    bool get_IsArray();
    // private System.Void set_IsArray(System.Boolean value)
    // Offset: 0x1E12EE0
    void set_IsArray(bool value);
    // System.Boolean get_ShouldCreateWrapper()
    // Offset: 0x1E12EEC
    bool get_ShouldCreateWrapper();
    // private System.Void set_ShouldCreateWrapper(System.Boolean value)
    // Offset: 0x1E12EF4
    void set_ShouldCreateWrapper(bool value);
    // System.Boolean get_CanDeserialize()
    // Offset: 0x1E12F00
    bool get_CanDeserialize();
    // private System.Void set_CanDeserialize(System.Boolean value)
    // Offset: 0x1E12F08
    void set_CanDeserialize(bool value);
    // Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> get_ParameterizedCreator()
    // Offset: 0x1E12F14
    ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>* get_ParameterizedCreator();
    // public Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> get_OverrideCreator()
    // Offset: 0x1E12FA0
    ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>* get_OverrideCreator();
    // public System.Void set_OverrideCreator(Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> value)
    // Offset: 0x1E12FA8
    void set_OverrideCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>* value);
    // public System.Boolean get_HasParameterizedCreator()
    // Offset: 0x1E12FB8
    bool get_HasParameterizedCreator();
    // public System.Void set_HasParameterizedCreator(System.Boolean value)
    // Offset: 0x1E12FC0
    void set_HasParameterizedCreator(bool value);
    // System.Boolean get_HasParameterizedCreatorInternal()
    // Offset: 0x1E12FCC
    bool get_HasParameterizedCreatorInternal();
    // Newtonsoft.Json.Utilities.IWrappedCollection CreateWrapper(System.Object list)
    // Offset: 0x1E13AE8
    ::Newtonsoft::Json::Utilities::IWrappedCollection* CreateWrapper(::Il2CppObject* list);
    // System.Collections.IList CreateTemporaryCollection()
    // Offset: 0x1E13E78
    ::System::Collections::IList* CreateTemporaryCollection();
    // public System.Void .ctor(System.Type underlyingType)
    // Offset: 0x1E12FF4
    // Implemented from: Newtonsoft.Json.Serialization.JsonContainerContract
    // Base method: System.Void JsonContainerContract::.ctor(System.Type underlyingType)
    // Base method: System.Void JsonContract::.ctor(System.Type underlyingType)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonArrayContract* New_ctor(::System::Type* underlyingType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::JsonArrayContract::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonArrayContract*, creationType>(underlyingType)));
    }
  }; // Newtonsoft.Json.Serialization.JsonArrayContract
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonArrayContract::get_CollectionItemType
// Il2CppName: get_CollectionItemType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Newtonsoft::Json::Serialization::JsonArrayContract::*)()>(&Newtonsoft::Json::Serialization::JsonArrayContract::get_CollectionItemType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonArrayContract*), "get_CollectionItemType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonArrayContract::set_CollectionItemType
// Il2CppName: set_CollectionItemType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonArrayContract::*)(::System::Type*)>(&Newtonsoft::Json::Serialization::JsonArrayContract::set_CollectionItemType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonArrayContract*), "set_CollectionItemType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonArrayContract::get_IsMultidimensionalArray
// Il2CppName: get_IsMultidimensionalArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Serialization::JsonArrayContract::*)()>(&Newtonsoft::Json::Serialization::JsonArrayContract::get_IsMultidimensionalArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonArrayContract*), "get_IsMultidimensionalArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonArrayContract::set_IsMultidimensionalArray
// Il2CppName: set_IsMultidimensionalArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonArrayContract::*)(bool)>(&Newtonsoft::Json::Serialization::JsonArrayContract::set_IsMultidimensionalArray)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonArrayContract*), "set_IsMultidimensionalArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonArrayContract::get_IsArray
// Il2CppName: get_IsArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Serialization::JsonArrayContract::*)()>(&Newtonsoft::Json::Serialization::JsonArrayContract::get_IsArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonArrayContract*), "get_IsArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonArrayContract::set_IsArray
// Il2CppName: set_IsArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonArrayContract::*)(bool)>(&Newtonsoft::Json::Serialization::JsonArrayContract::set_IsArray)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonArrayContract*), "set_IsArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonArrayContract::get_ShouldCreateWrapper
// Il2CppName: get_ShouldCreateWrapper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Serialization::JsonArrayContract::*)()>(&Newtonsoft::Json::Serialization::JsonArrayContract::get_ShouldCreateWrapper)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonArrayContract*), "get_ShouldCreateWrapper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonArrayContract::set_ShouldCreateWrapper
// Il2CppName: set_ShouldCreateWrapper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonArrayContract::*)(bool)>(&Newtonsoft::Json::Serialization::JsonArrayContract::set_ShouldCreateWrapper)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonArrayContract*), "set_ShouldCreateWrapper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonArrayContract::get_CanDeserialize
// Il2CppName: get_CanDeserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Serialization::JsonArrayContract::*)()>(&Newtonsoft::Json::Serialization::JsonArrayContract::get_CanDeserialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonArrayContract*), "get_CanDeserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonArrayContract::set_CanDeserialize
// Il2CppName: set_CanDeserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonArrayContract::*)(bool)>(&Newtonsoft::Json::Serialization::JsonArrayContract::set_CanDeserialize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonArrayContract*), "set_CanDeserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonArrayContract::get_ParameterizedCreator
// Il2CppName: get_ParameterizedCreator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>* (Newtonsoft::Json::Serialization::JsonArrayContract::*)()>(&Newtonsoft::Json::Serialization::JsonArrayContract::get_ParameterizedCreator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonArrayContract*), "get_ParameterizedCreator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonArrayContract::get_OverrideCreator
// Il2CppName: get_OverrideCreator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>* (Newtonsoft::Json::Serialization::JsonArrayContract::*)()>(&Newtonsoft::Json::Serialization::JsonArrayContract::get_OverrideCreator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonArrayContract*), "get_OverrideCreator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonArrayContract::set_OverrideCreator
// Il2CppName: set_OverrideCreator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonArrayContract::*)(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>*)>(&Newtonsoft::Json::Serialization::JsonArrayContract::set_OverrideCreator)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Serialization", "ObjectConstructor`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonArrayContract*), "set_OverrideCreator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonArrayContract::get_HasParameterizedCreator
// Il2CppName: get_HasParameterizedCreator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Serialization::JsonArrayContract::*)()>(&Newtonsoft::Json::Serialization::JsonArrayContract::get_HasParameterizedCreator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonArrayContract*), "get_HasParameterizedCreator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonArrayContract::set_HasParameterizedCreator
// Il2CppName: set_HasParameterizedCreator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonArrayContract::*)(bool)>(&Newtonsoft::Json::Serialization::JsonArrayContract::set_HasParameterizedCreator)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonArrayContract*), "set_HasParameterizedCreator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonArrayContract::get_HasParameterizedCreatorInternal
// Il2CppName: get_HasParameterizedCreatorInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Serialization::JsonArrayContract::*)()>(&Newtonsoft::Json::Serialization::JsonArrayContract::get_HasParameterizedCreatorInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonArrayContract*), "get_HasParameterizedCreatorInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonArrayContract::CreateWrapper
// Il2CppName: CreateWrapper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Utilities::IWrappedCollection* (Newtonsoft::Json::Serialization::JsonArrayContract::*)(::Il2CppObject*)>(&Newtonsoft::Json::Serialization::JsonArrayContract::CreateWrapper)> {
  static const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonArrayContract*), "CreateWrapper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonArrayContract::CreateTemporaryCollection
// Il2CppName: CreateTemporaryCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList* (Newtonsoft::Json::Serialization::JsonArrayContract::*)()>(&Newtonsoft::Json::Serialization::JsonArrayContract::CreateTemporaryCollection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonArrayContract*), "CreateTemporaryCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonArrayContract::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
