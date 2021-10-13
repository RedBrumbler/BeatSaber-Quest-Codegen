// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_SessionBase
  class HEU_SessionBase;
  // Forward declaring type: HEU_SessionData
  class HEU_SessionData;
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
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_PluginStorage
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_PluginStorage : public ::Il2CppObject {
    public:
    // Nested type: HoudiniEngineUnity::HEU_PluginStorage::DataType
    struct DataType;
    // Nested type: HoudiniEngineUnity::HEU_PluginStorage::StoreData
    class StoreData;
    // Nested type: HoudiniEngineUnity::HEU_PluginStorage::StoreDataArray_1<T>
    template<typename T>
    class StoreDataArray_1;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.Collections.Generic.Dictionary`2<System.String,HoudiniEngineUnity.HEU_PluginStorage/HoudiniEngineUnity.StoreData> _dataMap
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<::Il2CppString*, HoudiniEngineUnity::HEU_PluginStorage::StoreData*>* dataMap;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, HoudiniEngineUnity::HEU_PluginStorage::StoreData*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,System.String> _envPathMap
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* envPathMap;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>*) == 0x8);
    // private System.Boolean _requiresSave
    // Size: 0x1
    // Offset: 0x20
    bool requiresSave;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get static field: static private HoudiniEngineUnity.HEU_PluginStorage _instance
    static HoudiniEngineUnity::HEU_PluginStorage* _get__instance();
    // Set static field: static private HoudiniEngineUnity.HEU_PluginStorage _instance
    static void _set__instance(HoudiniEngineUnity::HEU_PluginStorage* value);
    // static field const value: static public System.String PluginSettingsLine1
    static constexpr const char* PluginSettingsLine1 = "Houdini Engine for Unity Plugin Settings";
    // Get static field: static public System.String PluginSettingsLine1
    static ::Il2CppString* _get_PluginSettingsLine1();
    // Set static field: static public System.String PluginSettingsLine1
    static void _set_PluginSettingsLine1(::Il2CppString* value);
    // static field const value: static public System.String PluginSettingsLine2
    static constexpr const char* PluginSettingsLine2 = "Version=";
    // Get static field: static public System.String PluginSettingsLine2
    static ::Il2CppString* _get_PluginSettingsLine2();
    // Set static field: static public System.String PluginSettingsLine2
    static void _set_PluginSettingsLine2(::Il2CppString* value);
    // static field const value: static public System.String PluginSettingsVersion
    static constexpr const char* PluginSettingsVersion = "1.0";
    // Get static field: static public System.String PluginSettingsVersion
    static ::Il2CppString* _get_PluginSettingsVersion();
    // Set static field: static public System.String PluginSettingsVersion
    static void _set_PluginSettingsVersion(::Il2CppString* value);
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,HoudiniEngineUnity.HEU_PluginStorage/HoudiniEngineUnity.StoreData> _dataMap
    System::Collections::Generic::Dictionary_2<::Il2CppString*, HoudiniEngineUnity::HEU_PluginStorage::StoreData*>*& dyn__dataMap();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,System.String> _envPathMap
    System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>*& dyn__envPathMap();
    // Get instance field reference: private System.Boolean _requiresSave
    bool& dyn__requiresSave();
    // public System.Boolean get_RequiresSave()
    // Offset: 0x17B4DB4
    bool get_RequiresSave();
    // static public HoudiniEngineUnity.HEU_PluginStorage get_Instance()
    // Offset: 0x17B0864
    static HoudiniEngineUnity::HEU_PluginStorage* get_Instance();
    // public System.Collections.Generic.Dictionary`2<System.String,System.String> GetEnvironmentPathMap()
    // Offset: 0x17B4DAC
    System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* GetEnvironmentPathMap();
    // static public System.Void InstantiateAndLoad()
    // Offset: 0x17B4DBC
    static void InstantiateAndLoad();
    // static public System.Void SetCurrentCulture(System.Boolean useInvariant)
    // Offset: 0x17B402C
    static void SetCurrentCulture(bool useInvariant);
    // private T[] GetJSONArray(System.String jsonArray)
    // Offset: 0xFFFFFFFF
    template<class T>
    ::ArrayW<T> GetJSONArray(::Il2CppString* jsonArray) {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_PluginStorage::GetJSONArray");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetJSONArray", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(jsonArray)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::ArrayW<T>, false>(this, ___generic__method, jsonArray);
    }
    // public System.Void Set(System.String key, System.Boolean value)
    // Offset: 0x17B0F6C
    void Set(::Il2CppString* key, bool value);
    // public System.Void Set(System.String key, System.Int32 value)
    // Offset: 0x17B2828
    void Set(::Il2CppString* key, int value);
    // public System.Void Set(System.String key, System.Int64 value)
    // Offset: 0x17B5C2C
    void Set(::Il2CppString* key, int64_t value);
    // public System.Void Set(System.String key, System.Single value)
    // Offset: 0x17B1D70
    void Set(::Il2CppString* key, float value);
    // public System.Void Set(System.String key, System.String value)
    // Offset: 0x17B09F0
    void Set(::Il2CppString* key, ::Il2CppString* value);
    // public System.Void Set(System.String key, System.Collections.Generic.List`1<System.String> values, System.Char delimiter)
    // Offset: 0x17B31B0
    void Set(::Il2CppString* key, System::Collections::Generic::List_1<::Il2CppString*>* values, ::Il2CppChar delimiter);
    // public System.Boolean Get(System.String key, out System.Boolean value, System.Boolean defaultValue)
    // Offset: 0x17B0E1C
    bool Get(::Il2CppString* key, ByRef<bool> value, bool defaultValue);
    // public System.Boolean Get(System.String key, out System.Int32 value, System.Int32 defaultValue)
    // Offset: 0x17B26D8
    bool Get(::Il2CppString* key, ByRef<int> value, int defaultValue);
    // public System.Boolean Get(System.String key, out System.Int64 value, System.Int64 defaultValue)
    // Offset: 0x17B5CF4
    bool Get(::Il2CppString* key, ByRef<int64_t> value, int64_t defaultValue);
    // public System.Boolean Get(System.String key, out System.Single value, System.Single defaultValue)
    // Offset: 0x17B1BE4
    bool Get(::Il2CppString* key, ByRef<float> value, float defaultValue);
    // public System.Boolean Get(System.String key, out System.String value, System.String defaultValue)
    // Offset: 0x17B08C8
    bool Get(::Il2CppString* key, ByRef<::Il2CppString*> value, ::Il2CppString* defaultValue);
    // public System.Boolean Get(System.String key, out System.Collections.Generic.List`1<System.String> values, System.Char delimiter)
    // Offset: 0x17B2FC0
    bool Get(::Il2CppString* key, ByRef<System::Collections::Generic::List_1<::Il2CppString*>*> values, ::Il2CppChar delimiter);
    // private System.Void MarkDirtyForSave()
    // Offset: 0x17B5C28
    void MarkDirtyForSave();
    // static public System.Void SaveIfRequired()
    // Offset: 0x17B5DE8
    static void SaveIfRequired();
    // static public System.String SettingsFilePath()
    // Offset: 0x17B6250
    static ::Il2CppString* SettingsFilePath();
    // public System.Boolean SavePluginData()
    // Offset: 0x17B5E50
    bool SavePluginData();
    // public System.Boolean LoadPluginData()
    // Offset: 0x17B4EFC
    bool LoadPluginData();
    // private System.Boolean ReadFromEditorPrefs()
    // Offset: 0x17B631C
    bool ReadFromEditorPrefs();
    // static public System.Void ClearPluginData()
    // Offset: 0x17B6324
    static void ClearPluginData();
    // static public System.Void LoadFromSavedFile()
    // Offset: 0x17B63CC
    static void LoadFromSavedFile();
    // static public System.String SessionFilePath()
    // Offset: 0x17B642C
    static ::Il2CppString* SessionFilePath();
    // static public System.Void SaveAllSessionData(System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_SessionBase> allSessions)
    // Offset: 0x17B64F8
    static void SaveAllSessionData(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_SessionBase*>* allSessions);
    // static public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_SessionData> LoadAllSessionData()
    // Offset: 0x17B64FC
    static System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_SessionData*>* LoadAllSessionData();
    // static public System.Void DeleteAllSavedSessionData()
    // Offset: 0x17B6560
    static void DeleteAllSavedSessionData();
    // public System.Void LoadAssetEnvironmentPaths()
    // Offset: 0x17B0A8C
    void LoadAssetEnvironmentPaths();
    // public System.String ConvertRealPathToEnvKeyedPath(System.String inPath)
    // Offset: 0x17B6564
    ::Il2CppString* ConvertRealPathToEnvKeyedPath(::Il2CppString* inPath);
    // public System.String ConvertEnvKeyedPathToReal(System.String inPath)
    // Offset: 0x17B66E8
    ::Il2CppString* ConvertEnvKeyedPathToReal(::Il2CppString* inPath);
    // public System.Void .ctor()
    // Offset: 0x17B4E8C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_PluginStorage* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_PluginStorage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_PluginStorage*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_PluginStorage
  #pragma pack(pop)
  static check_size<sizeof(HEU_PluginStorage), 32 + sizeof(bool)> __HoudiniEngineUnity_HEU_PluginStorageSizeCheck;
  static_assert(sizeof(HEU_PluginStorage) == 0x21);
}
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_PluginStorage*, "HoudiniEngineUnity", "HEU_PluginStorage");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PluginStorage::get_RequiresSave
// Il2CppName: get_RequiresSave
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_PluginStorage::*)()>(&HoudiniEngineUnity::HEU_PluginStorage::get_RequiresSave)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PluginStorage*), "get_RequiresSave", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PluginStorage::get_Instance
// Il2CppName: get_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_PluginStorage* (*)()>(&HoudiniEngineUnity::HEU_PluginStorage::get_Instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PluginStorage*), "get_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PluginStorage::GetEnvironmentPathMap
// Il2CppName: GetEnvironmentPathMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* (HoudiniEngineUnity::HEU_PluginStorage::*)()>(&HoudiniEngineUnity::HEU_PluginStorage::GetEnvironmentPathMap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PluginStorage*), "GetEnvironmentPathMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PluginStorage::InstantiateAndLoad
// Il2CppName: InstantiateAndLoad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HoudiniEngineUnity::HEU_PluginStorage::InstantiateAndLoad)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PluginStorage*), "InstantiateAndLoad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PluginStorage::SetCurrentCulture
// Il2CppName: SetCurrentCulture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&HoudiniEngineUnity::HEU_PluginStorage::SetCurrentCulture)> {
  static const MethodInfo* get() {
    static auto* useInvariant = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PluginStorage*), "SetCurrentCulture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{useInvariant});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PluginStorage::GetJSONArray
// Il2CppName: GetJSONArray
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PluginStorage::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PluginStorage::*)(::Il2CppString*, bool)>(&HoudiniEngineUnity::HEU_PluginStorage::Set)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PluginStorage*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PluginStorage::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PluginStorage::*)(::Il2CppString*, int)>(&HoudiniEngineUnity::HEU_PluginStorage::Set)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PluginStorage*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PluginStorage::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PluginStorage::*)(::Il2CppString*, int64_t)>(&HoudiniEngineUnity::HEU_PluginStorage::Set)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PluginStorage*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PluginStorage::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PluginStorage::*)(::Il2CppString*, float)>(&HoudiniEngineUnity::HEU_PluginStorage::Set)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PluginStorage*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PluginStorage::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PluginStorage::*)(::Il2CppString*, ::Il2CppString*)>(&HoudiniEngineUnity::HEU_PluginStorage::Set)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PluginStorage*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PluginStorage::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PluginStorage::*)(::Il2CppString*, System::Collections::Generic::List_1<::Il2CppString*>*, ::Il2CppChar)>(&HoudiniEngineUnity::HEU_PluginStorage::Set)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* values = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    static auto* delimiter = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PluginStorage*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, values, delimiter});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PluginStorage::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_PluginStorage::*)(::Il2CppString*, ByRef<bool>, bool)>(&HoudiniEngineUnity::HEU_PluginStorage::Get)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    static auto* defaultValue = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PluginStorage*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value, defaultValue});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PluginStorage::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_PluginStorage::*)(::Il2CppString*, ByRef<int>, int)>(&HoudiniEngineUnity::HEU_PluginStorage::Get)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* defaultValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PluginStorage*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value, defaultValue});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PluginStorage::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_PluginStorage::*)(::Il2CppString*, ByRef<int64_t>, int64_t)>(&HoudiniEngineUnity::HEU_PluginStorage::Get)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->this_arg;
    static auto* defaultValue = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PluginStorage*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value, defaultValue});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PluginStorage::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_PluginStorage::*)(::Il2CppString*, ByRef<float>, float)>(&HoudiniEngineUnity::HEU_PluginStorage::Get)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* defaultValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PluginStorage*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value, defaultValue});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PluginStorage::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_PluginStorage::*)(::Il2CppString*, ByRef<::Il2CppString*>, ::Il2CppString*)>(&HoudiniEngineUnity::HEU_PluginStorage::Get)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* defaultValue = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PluginStorage*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value, defaultValue});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PluginStorage::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_PluginStorage::*)(::Il2CppString*, ByRef<System::Collections::Generic::List_1<::Il2CppString*>*>, ::Il2CppChar)>(&HoudiniEngineUnity::HEU_PluginStorage::Get)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* values = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->this_arg;
    static auto* delimiter = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PluginStorage*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, values, delimiter});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PluginStorage::MarkDirtyForSave
// Il2CppName: MarkDirtyForSave
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PluginStorage::*)()>(&HoudiniEngineUnity::HEU_PluginStorage::MarkDirtyForSave)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PluginStorage*), "MarkDirtyForSave", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PluginStorage::SaveIfRequired
// Il2CppName: SaveIfRequired
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HoudiniEngineUnity::HEU_PluginStorage::SaveIfRequired)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PluginStorage*), "SaveIfRequired", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PluginStorage::SettingsFilePath
// Il2CppName: SettingsFilePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)()>(&HoudiniEngineUnity::HEU_PluginStorage::SettingsFilePath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PluginStorage*), "SettingsFilePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PluginStorage::SavePluginData
// Il2CppName: SavePluginData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_PluginStorage::*)()>(&HoudiniEngineUnity::HEU_PluginStorage::SavePluginData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PluginStorage*), "SavePluginData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PluginStorage::LoadPluginData
// Il2CppName: LoadPluginData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_PluginStorage::*)()>(&HoudiniEngineUnity::HEU_PluginStorage::LoadPluginData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PluginStorage*), "LoadPluginData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PluginStorage::ReadFromEditorPrefs
// Il2CppName: ReadFromEditorPrefs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_PluginStorage::*)()>(&HoudiniEngineUnity::HEU_PluginStorage::ReadFromEditorPrefs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PluginStorage*), "ReadFromEditorPrefs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PluginStorage::ClearPluginData
// Il2CppName: ClearPluginData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HoudiniEngineUnity::HEU_PluginStorage::ClearPluginData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PluginStorage*), "ClearPluginData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PluginStorage::LoadFromSavedFile
// Il2CppName: LoadFromSavedFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HoudiniEngineUnity::HEU_PluginStorage::LoadFromSavedFile)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PluginStorage*), "LoadFromSavedFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PluginStorage::SessionFilePath
// Il2CppName: SessionFilePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)()>(&HoudiniEngineUnity::HEU_PluginStorage::SessionFilePath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PluginStorage*), "SessionFilePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PluginStorage::SaveAllSessionData
// Il2CppName: SaveAllSessionData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_SessionBase*>*)>(&HoudiniEngineUnity::HEU_PluginStorage::SaveAllSessionData)> {
  static const MethodInfo* get() {
    static auto* allSessions = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PluginStorage*), "SaveAllSessionData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{allSessions});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PluginStorage::LoadAllSessionData
// Il2CppName: LoadAllSessionData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_SessionData*>* (*)()>(&HoudiniEngineUnity::HEU_PluginStorage::LoadAllSessionData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PluginStorage*), "LoadAllSessionData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PluginStorage::DeleteAllSavedSessionData
// Il2CppName: DeleteAllSavedSessionData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HoudiniEngineUnity::HEU_PluginStorage::DeleteAllSavedSessionData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PluginStorage*), "DeleteAllSavedSessionData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PluginStorage::LoadAssetEnvironmentPaths
// Il2CppName: LoadAssetEnvironmentPaths
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PluginStorage::*)()>(&HoudiniEngineUnity::HEU_PluginStorage::LoadAssetEnvironmentPaths)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PluginStorage*), "LoadAssetEnvironmentPaths", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PluginStorage::ConvertRealPathToEnvKeyedPath
// Il2CppName: ConvertRealPathToEnvKeyedPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (HoudiniEngineUnity::HEU_PluginStorage::*)(::Il2CppString*)>(&HoudiniEngineUnity::HEU_PluginStorage::ConvertRealPathToEnvKeyedPath)> {
  static const MethodInfo* get() {
    static auto* inPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PluginStorage*), "ConvertRealPathToEnvKeyedPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inPath});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PluginStorage::ConvertEnvKeyedPathToReal
// Il2CppName: ConvertEnvKeyedPathToReal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (HoudiniEngineUnity::HEU_PluginStorage::*)(::Il2CppString*)>(&HoudiniEngineUnity::HEU_PluginStorage::ConvertEnvKeyedPathToReal)> {
  static const MethodInfo* get() {
    static auto* inPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PluginStorage*), "ConvertEnvKeyedPathToReal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inPath});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PluginStorage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
