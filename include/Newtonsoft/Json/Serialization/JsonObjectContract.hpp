// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Serialization.JsonContainerContract
#include "Newtonsoft/Json/Serialization/JsonContainerContract.hpp"
// Including type: Newtonsoft.Json.MemberSerialization
#include "Newtonsoft/Json/MemberSerialization.hpp"
// Including type: Newtonsoft.Json.Required
#include "Newtonsoft/Json/Required.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json::Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: JsonPropertyCollection
  class JsonPropertyCollection;
  // Forward declaring type: ExtensionDataSetter
  class ExtensionDataSetter;
  // Forward declaring type: ExtensionDataGetter
  class ExtensionDataGetter;
  // Forward declaring type: ObjectConstructor`1<T>
  template<typename T>
  class ObjectConstructor_1;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ConstructorInfo
  class ConstructorInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: JsonObjectContract
  class JsonObjectContract;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonObjectContract);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonObjectContract*, "Newtonsoft.Json.Serialization", "JsonObjectContract");
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // WARNING Size may be invalid!
  // Autogenerated type: Newtonsoft.Json.Serialization.JsonObjectContract
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class JsonObjectContract : public ::Newtonsoft::Json::Serialization::JsonContainerContract {
    public:
    public:
    // private Newtonsoft.Json.MemberSerialization <MemberSerialization>k__BackingField
    // Size: 0x4
    // Offset: 0xBC
    ::Newtonsoft::Json::MemberSerialization MemberSerialization;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::MemberSerialization) == 0x4);
    // private System.Nullable`1<Newtonsoft.Json.Required> <ItemRequired>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0xC0
    ::System::Nullable_1<::Newtonsoft::Json::Required> ItemRequired;
    // private Newtonsoft.Json.Serialization.JsonPropertyCollection <Properties>k__BackingField
    // Size: 0x8
    // Offset: 0xC8
    ::Newtonsoft::Json::Serialization::JsonPropertyCollection* Properties;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Serialization::JsonPropertyCollection*) == 0x8);
    // private Newtonsoft.Json.Serialization.ExtensionDataSetter <ExtensionDataSetter>k__BackingField
    // Size: 0x8
    // Offset: 0xD0
    ::Newtonsoft::Json::Serialization::ExtensionDataSetter* ExtensionDataSetter;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Serialization::ExtensionDataSetter*) == 0x8);
    // private Newtonsoft.Json.Serialization.ExtensionDataGetter <ExtensionDataGetter>k__BackingField
    // Size: 0x8
    // Offset: 0xD8
    ::Newtonsoft::Json::Serialization::ExtensionDataGetter* ExtensionDataGetter;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Serialization::ExtensionDataGetter*) == 0x8);
    // System.Boolean ExtensionDataIsJToken
    // Size: 0x1
    // Offset: 0xE0
    bool ExtensionDataIsJToken;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Nullable`1<System.Boolean> _hasRequiredOrDefaultValueProperties
    // Size: 0xFFFFFFFF
    // Offset: 0xE1
    ::System::Nullable_1<bool> hasRequiredOrDefaultValueProperties;
    // private System.Reflection.ConstructorInfo _parametrizedConstructor
    // Size: 0x8
    // Offset: 0xE8
    ::System::Reflection::ConstructorInfo* parametrizedConstructor;
    // Field size check
    static_assert(sizeof(::System::Reflection::ConstructorInfo*) == 0x8);
    // private System.Reflection.ConstructorInfo _overrideConstructor
    // Size: 0x8
    // Offset: 0xF0
    ::System::Reflection::ConstructorInfo* overrideConstructor;
    // Field size check
    static_assert(sizeof(::System::Reflection::ConstructorInfo*) == 0x8);
    // private Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> _overrideCreator
    // Size: 0x8
    // Offset: 0xF8
    ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>* overrideCreator;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>*) == 0x8);
    // private Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> _parameterizedCreator
    // Size: 0x8
    // Offset: 0x100
    ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>* parameterizedCreator;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>*) == 0x8);
    // private Newtonsoft.Json.Serialization.JsonPropertyCollection _creatorParameters
    // Size: 0x8
    // Offset: 0x108
    ::Newtonsoft::Json::Serialization::JsonPropertyCollection* creatorParameters;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Serialization::JsonPropertyCollection*) == 0x8);
    // private System.Type _extensionDataValueType
    // Size: 0x8
    // Offset: 0x110
    ::System::Type* extensionDataValueType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Get instance field reference: private Newtonsoft.Json.MemberSerialization <MemberSerialization>k__BackingField
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::MemberSerialization& dyn_$MemberSerialization$k__BackingField();
    // Get instance field reference: private System.Nullable`1<Newtonsoft.Json.Required> <ItemRequired>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::Newtonsoft::Json::Required>& dyn_$ItemRequired$k__BackingField();
    // Get instance field reference: private Newtonsoft.Json.Serialization.JsonPropertyCollection <Properties>k__BackingField
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Serialization::JsonPropertyCollection*& dyn_$Properties$k__BackingField();
    // Get instance field reference: private Newtonsoft.Json.Serialization.ExtensionDataSetter <ExtensionDataSetter>k__BackingField
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Serialization::ExtensionDataSetter*& dyn_$ExtensionDataSetter$k__BackingField();
    // Get instance field reference: private Newtonsoft.Json.Serialization.ExtensionDataGetter <ExtensionDataGetter>k__BackingField
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Serialization::ExtensionDataGetter*& dyn_$ExtensionDataGetter$k__BackingField();
    // Get instance field reference: System.Boolean ExtensionDataIsJToken
    [[deprecated("Use field access instead!")]] bool& dyn_ExtensionDataIsJToken();
    // Get instance field reference: private System.Nullable`1<System.Boolean> _hasRequiredOrDefaultValueProperties
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<bool>& dyn__hasRequiredOrDefaultValueProperties();
    // Get instance field reference: private System.Reflection.ConstructorInfo _parametrizedConstructor
    [[deprecated("Use field access instead!")]] ::System::Reflection::ConstructorInfo*& dyn__parametrizedConstructor();
    // Get instance field reference: private System.Reflection.ConstructorInfo _overrideConstructor
    [[deprecated("Use field access instead!")]] ::System::Reflection::ConstructorInfo*& dyn__overrideConstructor();
    // Get instance field reference: private Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> _overrideCreator
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>*& dyn__overrideCreator();
    // Get instance field reference: private Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> _parameterizedCreator
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>*& dyn__parameterizedCreator();
    // Get instance field reference: private Newtonsoft.Json.Serialization.JsonPropertyCollection _creatorParameters
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Serialization::JsonPropertyCollection*& dyn__creatorParameters();
    // Get instance field reference: private System.Type _extensionDataValueType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn__extensionDataValueType();
    // public Newtonsoft.Json.MemberSerialization get_MemberSerialization()
    // Offset: 0x1E04C94
    ::Newtonsoft::Json::MemberSerialization get_MemberSerialization();
    // public System.Void set_MemberSerialization(Newtonsoft.Json.MemberSerialization value)
    // Offset: 0x1E04C9C
    void set_MemberSerialization(::Newtonsoft::Json::MemberSerialization value);
    // public System.Nullable`1<Newtonsoft.Json.Required> get_ItemRequired()
    // Offset: 0x1E04CA4
    ::System::Nullable_1<::Newtonsoft::Json::Required> get_ItemRequired();
    // public System.Void set_ItemRequired(System.Nullable`1<Newtonsoft.Json.Required> value)
    // Offset: 0x1E04CAC
    void set_ItemRequired(::System::Nullable_1<::Newtonsoft::Json::Required> value);
    // public Newtonsoft.Json.Serialization.JsonPropertyCollection get_Properties()
    // Offset: 0x1E04CB4
    ::Newtonsoft::Json::Serialization::JsonPropertyCollection* get_Properties();
    // private System.Void set_Properties(Newtonsoft.Json.Serialization.JsonPropertyCollection value)
    // Offset: 0x1E04CBC
    void set_Properties(::Newtonsoft::Json::Serialization::JsonPropertyCollection* value);
    // public Newtonsoft.Json.Serialization.JsonPropertyCollection get_CreatorParameters()
    // Offset: 0x1E04CC4
    ::Newtonsoft::Json::Serialization::JsonPropertyCollection* get_CreatorParameters();
    // public System.Void set_OverrideConstructor(System.Reflection.ConstructorInfo value)
    // Offset: 0x1E04E64
    void set_OverrideConstructor(::System::Reflection::ConstructorInfo* value);
    // public System.Void set_ParametrizedConstructor(System.Reflection.ConstructorInfo value)
    // Offset: 0x1E04F04
    void set_ParametrizedConstructor(::System::Reflection::ConstructorInfo* value);
    // public Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> get_OverrideCreator()
    // Offset: 0x1E04FA4
    ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>* get_OverrideCreator();
    // Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> get_ParameterizedCreator()
    // Offset: 0x1E04FAC
    ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>* get_ParameterizedCreator();
    // public Newtonsoft.Json.Serialization.ExtensionDataSetter get_ExtensionDataSetter()
    // Offset: 0x1E04FB4
    ::Newtonsoft::Json::Serialization::ExtensionDataSetter* get_ExtensionDataSetter();
    // public System.Void set_ExtensionDataSetter(Newtonsoft.Json.Serialization.ExtensionDataSetter value)
    // Offset: 0x1E04FBC
    void set_ExtensionDataSetter(::Newtonsoft::Json::Serialization::ExtensionDataSetter* value);
    // public Newtonsoft.Json.Serialization.ExtensionDataGetter get_ExtensionDataGetter()
    // Offset: 0x1E04FC4
    ::Newtonsoft::Json::Serialization::ExtensionDataGetter* get_ExtensionDataGetter();
    // public System.Void set_ExtensionDataGetter(Newtonsoft.Json.Serialization.ExtensionDataGetter value)
    // Offset: 0x1E04FCC
    void set_ExtensionDataGetter(::Newtonsoft::Json::Serialization::ExtensionDataGetter* value);
    // public System.Void set_ExtensionDataValueType(System.Type value)
    // Offset: 0x1E04FD4
    void set_ExtensionDataValueType(::System::Type* value);
    // System.Boolean get_HasRequiredOrDefaultValueProperties()
    // Offset: 0x1E0508C
    bool get_HasRequiredOrDefaultValueProperties();
    // System.Object GetUninitializedObject()
    // Offset: 0x1E054B8
    ::Il2CppObject* GetUninitializedObject();
    // public System.Void .ctor(System.Type underlyingType)
    // Offset: 0x1E05434
    // Implemented from: Newtonsoft.Json.Serialization.JsonContainerContract
    // Base method: System.Void JsonContainerContract::.ctor(System.Type underlyingType)
    // Base method: System.Void JsonContract::.ctor(System.Type underlyingType)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonObjectContract* New_ctor(::System::Type* underlyingType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::JsonObjectContract::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonObjectContract*, creationType>(underlyingType)));
    }
  }; // Newtonsoft.Json.Serialization.JsonObjectContract
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonObjectContract::get_MemberSerialization
// Il2CppName: get_MemberSerialization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::MemberSerialization (Newtonsoft::Json::Serialization::JsonObjectContract::*)()>(&Newtonsoft::Json::Serialization::JsonObjectContract::get_MemberSerialization)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonObjectContract*), "get_MemberSerialization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonObjectContract::set_MemberSerialization
// Il2CppName: set_MemberSerialization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonObjectContract::*)(::Newtonsoft::Json::MemberSerialization)>(&Newtonsoft::Json::Serialization::JsonObjectContract::set_MemberSerialization)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "MemberSerialization")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonObjectContract*), "set_MemberSerialization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonObjectContract::get_ItemRequired
// Il2CppName: get_ItemRequired
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::Newtonsoft::Json::Required> (Newtonsoft::Json::Serialization::JsonObjectContract::*)()>(&Newtonsoft::Json::Serialization::JsonObjectContract::get_ItemRequired)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonObjectContract*), "get_ItemRequired", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonObjectContract::set_ItemRequired
// Il2CppName: set_ItemRequired
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonObjectContract::*)(::System::Nullable_1<::Newtonsoft::Json::Required>)>(&Newtonsoft::Json::Serialization::JsonObjectContract::set_ItemRequired)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "Required")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonObjectContract*), "set_ItemRequired", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonObjectContract::get_Properties
// Il2CppName: get_Properties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::JsonPropertyCollection* (Newtonsoft::Json::Serialization::JsonObjectContract::*)()>(&Newtonsoft::Json::Serialization::JsonObjectContract::get_Properties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonObjectContract*), "get_Properties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonObjectContract::set_Properties
// Il2CppName: set_Properties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonObjectContract::*)(::Newtonsoft::Json::Serialization::JsonPropertyCollection*)>(&Newtonsoft::Json::Serialization::JsonObjectContract::set_Properties)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Serialization", "JsonPropertyCollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonObjectContract*), "set_Properties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonObjectContract::get_CreatorParameters
// Il2CppName: get_CreatorParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::JsonPropertyCollection* (Newtonsoft::Json::Serialization::JsonObjectContract::*)()>(&Newtonsoft::Json::Serialization::JsonObjectContract::get_CreatorParameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonObjectContract*), "get_CreatorParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonObjectContract::set_OverrideConstructor
// Il2CppName: set_OverrideConstructor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonObjectContract::*)(::System::Reflection::ConstructorInfo*)>(&Newtonsoft::Json::Serialization::JsonObjectContract::set_OverrideConstructor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Reflection", "ConstructorInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonObjectContract*), "set_OverrideConstructor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonObjectContract::set_ParametrizedConstructor
// Il2CppName: set_ParametrizedConstructor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonObjectContract::*)(::System::Reflection::ConstructorInfo*)>(&Newtonsoft::Json::Serialization::JsonObjectContract::set_ParametrizedConstructor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Reflection", "ConstructorInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonObjectContract*), "set_ParametrizedConstructor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonObjectContract::get_OverrideCreator
// Il2CppName: get_OverrideCreator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>* (Newtonsoft::Json::Serialization::JsonObjectContract::*)()>(&Newtonsoft::Json::Serialization::JsonObjectContract::get_OverrideCreator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonObjectContract*), "get_OverrideCreator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonObjectContract::get_ParameterizedCreator
// Il2CppName: get_ParameterizedCreator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>* (Newtonsoft::Json::Serialization::JsonObjectContract::*)()>(&Newtonsoft::Json::Serialization::JsonObjectContract::get_ParameterizedCreator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonObjectContract*), "get_ParameterizedCreator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonObjectContract::get_ExtensionDataSetter
// Il2CppName: get_ExtensionDataSetter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::ExtensionDataSetter* (Newtonsoft::Json::Serialization::JsonObjectContract::*)()>(&Newtonsoft::Json::Serialization::JsonObjectContract::get_ExtensionDataSetter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonObjectContract*), "get_ExtensionDataSetter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonObjectContract::set_ExtensionDataSetter
// Il2CppName: set_ExtensionDataSetter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonObjectContract::*)(::Newtonsoft::Json::Serialization::ExtensionDataSetter*)>(&Newtonsoft::Json::Serialization::JsonObjectContract::set_ExtensionDataSetter)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Serialization", "ExtensionDataSetter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonObjectContract*), "set_ExtensionDataSetter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonObjectContract::get_ExtensionDataGetter
// Il2CppName: get_ExtensionDataGetter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::ExtensionDataGetter* (Newtonsoft::Json::Serialization::JsonObjectContract::*)()>(&Newtonsoft::Json::Serialization::JsonObjectContract::get_ExtensionDataGetter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonObjectContract*), "get_ExtensionDataGetter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonObjectContract::set_ExtensionDataGetter
// Il2CppName: set_ExtensionDataGetter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonObjectContract::*)(::Newtonsoft::Json::Serialization::ExtensionDataGetter*)>(&Newtonsoft::Json::Serialization::JsonObjectContract::set_ExtensionDataGetter)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Serialization", "ExtensionDataGetter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonObjectContract*), "set_ExtensionDataGetter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonObjectContract::set_ExtensionDataValueType
// Il2CppName: set_ExtensionDataValueType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonObjectContract::*)(::System::Type*)>(&Newtonsoft::Json::Serialization::JsonObjectContract::set_ExtensionDataValueType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonObjectContract*), "set_ExtensionDataValueType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonObjectContract::get_HasRequiredOrDefaultValueProperties
// Il2CppName: get_HasRequiredOrDefaultValueProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Serialization::JsonObjectContract::*)()>(&Newtonsoft::Json::Serialization::JsonObjectContract::get_HasRequiredOrDefaultValueProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonObjectContract*), "get_HasRequiredOrDefaultValueProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonObjectContract::GetUninitializedObject
// Il2CppName: GetUninitializedObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Newtonsoft::Json::Serialization::JsonObjectContract::*)()>(&Newtonsoft::Json::Serialization::JsonObjectContract::GetUninitializedObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonObjectContract*), "GetUninitializedObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonObjectContract::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
