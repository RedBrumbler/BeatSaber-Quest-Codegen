// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ListLogger
#include "GlobalNamespace/ListLogger.hpp"
// Including type: ListLogger/LogType
#include "GlobalNamespace/ListLogger_LogType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ListLogger::LogMessage);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ListLogger::LogMessage*, "", "ListLogger/LogMessage");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: ListLogger/LogMessage
  // [TokenAttribute] Offset: FFFFFFFF
  class ListLogger::LogMessage : public ::Il2CppObject {
    public:
    public:
    // public readonly ListLogger/LogType type
    // Size: 0x4
    // Offset: 0x10
    ::GlobalNamespace::ListLogger::LogType type;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ListLogger::LogType) == 0x4);
    // Padding between fields: type and: message
    char __padding0[0x4] = {};
    // public readonly System.String message
    // Size: 0x8
    // Offset: 0x18
    ::StringW message;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.Object context
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* context;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Get instance field reference: public readonly ListLogger/LogType type
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ListLogger::LogType& dyn_type();
    // Get instance field reference: public readonly System.String message
    [[deprecated("Use field access instead!")]] ::StringW& dyn_message();
    // Get instance field reference: public readonly System.Object context
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_context();
    // public System.Void .ctor(ListLogger/LogType type, System.String message, System.Object context)
    // Offset: 0x1587584
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ListLogger::LogMessage* New_ctor(::GlobalNamespace::ListLogger::LogType type, ::StringW message, ::Il2CppObject* context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ListLogger::LogMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ListLogger::LogMessage*, creationType>(type, message, context)));
    }
    // public override System.String ToString()
    // Offset: 0x15877C0
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // ListLogger/LogMessage
  #pragma pack(pop)
  static check_size<sizeof(ListLogger::LogMessage), 32 + sizeof(::Il2CppObject*)> __GlobalNamespace_ListLogger_LogMessageSizeCheck;
  static_assert(sizeof(ListLogger::LogMessage) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ListLogger::LogMessage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ListLogger::LogMessage::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::ListLogger::LogMessage::*)()>(&GlobalNamespace::ListLogger::LogMessage::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ListLogger::LogMessage*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
