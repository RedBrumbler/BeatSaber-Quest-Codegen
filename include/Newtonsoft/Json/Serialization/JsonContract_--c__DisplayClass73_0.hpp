// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Serialization.JsonContract
#include "Newtonsoft/Json/Serialization/JsonContract.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonContract::$$c__DisplayClass73_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonContract::$$c__DisplayClass73_0*, "Newtonsoft.Json.Serialization", "JsonContract/<>c__DisplayClass73_0");
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Serialization.JsonContract/Newtonsoft.Json.Serialization.<>c__DisplayClass73_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class JsonContract::$$c__DisplayClass73_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Reflection.MethodInfo callbackMethodInfo
    // Size: 0x8
    // Offset: 0x10
    ::System::Reflection::MethodInfo* callbackMethodInfo;
    // Field size check
    static_assert(sizeof(::System::Reflection::MethodInfo*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Reflection::MethodInfo*
    constexpr operator ::System::Reflection::MethodInfo*() const noexcept {
      return callbackMethodInfo;
    }
    // Get instance field reference: public System.Reflection.MethodInfo callbackMethodInfo
    [[deprecated("Use field access instead!")]] ::System::Reflection::MethodInfo*& dyn_callbackMethodInfo();
    // public System.Void .ctor()
    // Offset: 0x1E03924
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonContract::$$c__DisplayClass73_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::JsonContract::$$c__DisplayClass73_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonContract::$$c__DisplayClass73_0*, creationType>()));
    }
    // System.Void <CreateSerializationCallback>b__0(System.Object o, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1E039CC
    void $CreateSerializationCallback$b__0(::Il2CppObject* o, ::System::Runtime::Serialization::StreamingContext context);
  }; // Newtonsoft.Json.Serialization.JsonContract/Newtonsoft.Json.Serialization.<>c__DisplayClass73_0
  #pragma pack(pop)
  static check_size<sizeof(JsonContract::$$c__DisplayClass73_0), 16 + sizeof(::System::Reflection::MethodInfo*)> __Newtonsoft_Json_Serialization_JsonContract_$$c__DisplayClass73_0SizeCheck;
  static_assert(sizeof(JsonContract::$$c__DisplayClass73_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContract::$$c__DisplayClass73_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonContract::$$c__DisplayClass73_0::$CreateSerializationCallback$b__0
// Il2CppName: <CreateSerializationCallback>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonContract::$$c__DisplayClass73_0::*)(::Il2CppObject*, ::System::Runtime::Serialization::StreamingContext)>(&Newtonsoft::Json::Serialization::JsonContract::$$c__DisplayClass73_0::$CreateSerializationCallback$b__0)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonContract::$$c__DisplayClass73_0*), "<CreateSerializationCallback>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o, context});
  }
};
