// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.JsonReader
#include "Newtonsoft/Json/JsonReader.hpp"
// Including type: Newtonsoft.Json.IJsonLineInfo
#include "Newtonsoft/Json/IJsonLineInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json::Linq
namespace Newtonsoft::Json::Linq {
  // Forward declaring type: JToken
  class JToken;
  // Forward declaring type: JContainer
  class JContainer;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Nullable`1 because it is already included!
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Linq
namespace Newtonsoft::Json::Linq {
  // Forward declaring type: JTokenReader
  class JTokenReader;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Linq::JTokenReader);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JTokenReader*, "Newtonsoft.Json.Linq", "JTokenReader");
// Type namespace: Newtonsoft.Json.Linq
namespace Newtonsoft::Json::Linq {
  // WARNING Size may be invalid!
  // Autogenerated type: Newtonsoft.Json.Linq.JTokenReader
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class JTokenReader : public ::Newtonsoft::Json::JsonReader/*, public ::Newtonsoft::Json::IJsonLineInfo*/ {
    public:
    public:
    // private readonly Newtonsoft.Json.Linq.JToken _root
    // Size: 0x8
    // Offset: 0x78
    ::Newtonsoft::Json::Linq::JToken* root;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Linq::JToken*) == 0x8);
    // private System.String _initialPath
    // Size: 0x8
    // Offset: 0x80
    ::StringW initialPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private Newtonsoft.Json.Linq.JToken _parent
    // Size: 0x8
    // Offset: 0x88
    ::Newtonsoft::Json::Linq::JToken* parent;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Linq::JToken*) == 0x8);
    // private Newtonsoft.Json.Linq.JToken _current
    // Size: 0x8
    // Offset: 0x90
    ::Newtonsoft::Json::Linq::JToken* current;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Linq::JToken*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Newtonsoft::Json::IJsonLineInfo
    operator ::Newtonsoft::Json::IJsonLineInfo() noexcept {
      return *reinterpret_cast<::Newtonsoft::Json::IJsonLineInfo*>(this);
    }
    // Creating interface conversion operator: i_IJsonLineInfo
    inline ::Newtonsoft::Json::IJsonLineInfo* i_IJsonLineInfo() noexcept {
      return reinterpret_cast<::Newtonsoft::Json::IJsonLineInfo*>(this);
    }
    // Get instance field reference: private readonly Newtonsoft.Json.Linq.JToken _root
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Linq::JToken*& dyn__root();
    // Get instance field reference: private System.String _initialPath
    [[deprecated("Use field access instead!")]] ::StringW& dyn__initialPath();
    // Get instance field reference: private Newtonsoft.Json.Linq.JToken _parent
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Linq::JToken*& dyn__parent();
    // Get instance field reference: private Newtonsoft.Json.Linq.JToken _current
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Linq::JToken*& dyn__current();
    // public Newtonsoft.Json.Linq.JToken get_CurrentToken()
    // Offset: 0x17A8A54
    ::Newtonsoft::Json::Linq::JToken* get_CurrentToken();
    // private System.Int32 Newtonsoft.Json.IJsonLineInfo.get_LineNumber()
    // Offset: 0x17A943C
    int Newtonsoft_Json_IJsonLineInfo_get_LineNumber();
    // private System.Int32 Newtonsoft.Json.IJsonLineInfo.get_LinePosition()
    // Offset: 0x17A9504
    int Newtonsoft_Json_IJsonLineInfo_get_LinePosition();
    // public System.Void .ctor(Newtonsoft.Json.Linq.JToken token)
    // Offset: 0x17A6DA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JTokenReader* New_ctor(::Newtonsoft::Json::Linq::JToken* token) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Linq::JTokenReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JTokenReader*, creationType>(token)));
    }
    // private System.Boolean ReadOver(Newtonsoft.Json.Linq.JToken t)
    // Offset: 0x17A8BA0
    bool ReadOver(::Newtonsoft::Json::Linq::JToken* t);
    // private System.Boolean ReadToEnd()
    // Offset: 0x17A9164
    bool ReadToEnd();
    // private System.Nullable`1<Newtonsoft.Json.JsonToken> GetEndToken(Newtonsoft.Json.Linq.JContainer c)
    // Offset: 0x17A9214
    ::System::Nullable_1<::Newtonsoft::Json::JsonToken> GetEndToken(::Newtonsoft::Json::Linq::JContainer* c);
    // private System.Boolean ReadInto(Newtonsoft.Json.Linq.JContainer c)
    // Offset: 0x17A8B28
    bool ReadInto(::Newtonsoft::Json::Linq::JContainer* c);
    // private System.Boolean SetEnd(Newtonsoft.Json.Linq.JContainer c)
    // Offset: 0x17A9188
    bool SetEnd(::Newtonsoft::Json::Linq::JContainer* c);
    // private System.Void SetToken(Newtonsoft.Json.Linq.JToken token)
    // Offset: 0x17A8C64
    void SetToken(::Newtonsoft::Json::Linq::JToken* token);
    // private System.String SafeToString(System.Object value)
    // Offset: 0x17A9358
    ::StringW SafeToString(::Il2CppObject* value);
    // private System.Boolean Newtonsoft.Json.IJsonLineInfo.HasLineInfo()
    // Offset: 0x17A9378
    bool Newtonsoft_Json_IJsonLineInfo_HasLineInfo();
    // public override System.String get_Path()
    // Offset: 0x17A95CC
    // Implemented from: Newtonsoft.Json.JsonReader
    // Base method: System.String JsonReader::get_Path()
    ::StringW get_Path();
    // public override System.Boolean Read()
    // Offset: 0x17A8A5C
    // Implemented from: Newtonsoft.Json.JsonReader
    // Base method: System.Boolean JsonReader::Read()
    bool Read();
  }; // Newtonsoft.Json.Linq.JTokenReader
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenReader::get_CurrentToken
// Il2CppName: get_CurrentToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (Newtonsoft::Json::Linq::JTokenReader::*)()>(&Newtonsoft::Json::Linq::JTokenReader::get_CurrentToken)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenReader*), "get_CurrentToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenReader::Newtonsoft_Json_IJsonLineInfo_get_LineNumber
// Il2CppName: Newtonsoft.Json.IJsonLineInfo.get_LineNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Newtonsoft::Json::Linq::JTokenReader::*)()>(&Newtonsoft::Json::Linq::JTokenReader::Newtonsoft_Json_IJsonLineInfo_get_LineNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenReader*), "Newtonsoft.Json.IJsonLineInfo.get_LineNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenReader::Newtonsoft_Json_IJsonLineInfo_get_LinePosition
// Il2CppName: Newtonsoft.Json.IJsonLineInfo.get_LinePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Newtonsoft::Json::Linq::JTokenReader::*)()>(&Newtonsoft::Json::Linq::JTokenReader::Newtonsoft_Json_IJsonLineInfo_get_LinePosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenReader*), "Newtonsoft.Json.IJsonLineInfo.get_LinePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenReader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenReader::ReadOver
// Il2CppName: ReadOver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Linq::JTokenReader::*)(::Newtonsoft::Json::Linq::JToken*)>(&Newtonsoft::Json::Linq::JTokenReader::ReadOver)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenReader*), "ReadOver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenReader::ReadToEnd
// Il2CppName: ReadToEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Linq::JTokenReader::*)()>(&Newtonsoft::Json::Linq::JTokenReader::ReadToEnd)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenReader*), "ReadToEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenReader::GetEndToken
// Il2CppName: GetEndToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::Newtonsoft::Json::JsonToken> (Newtonsoft::Json::Linq::JTokenReader::*)(::Newtonsoft::Json::Linq::JContainer*)>(&Newtonsoft::Json::Linq::JTokenReader::GetEndToken)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenReader*), "GetEndToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenReader::ReadInto
// Il2CppName: ReadInto
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Linq::JTokenReader::*)(::Newtonsoft::Json::Linq::JContainer*)>(&Newtonsoft::Json::Linq::JTokenReader::ReadInto)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenReader*), "ReadInto", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenReader::SetEnd
// Il2CppName: SetEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Linq::JTokenReader::*)(::Newtonsoft::Json::Linq::JContainer*)>(&Newtonsoft::Json::Linq::JTokenReader::SetEnd)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenReader*), "SetEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenReader::SetToken
// Il2CppName: SetToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JTokenReader::*)(::Newtonsoft::Json::Linq::JToken*)>(&Newtonsoft::Json::Linq::JTokenReader::SetToken)> {
  static const MethodInfo* get() {
    static auto* token = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenReader*), "SetToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{token});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenReader::SafeToString
// Il2CppName: SafeToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Linq::JTokenReader::*)(::Il2CppObject*)>(&Newtonsoft::Json::Linq::JTokenReader::SafeToString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenReader*), "SafeToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenReader::Newtonsoft_Json_IJsonLineInfo_HasLineInfo
// Il2CppName: Newtonsoft.Json.IJsonLineInfo.HasLineInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Linq::JTokenReader::*)()>(&Newtonsoft::Json::Linq::JTokenReader::Newtonsoft_Json_IJsonLineInfo_HasLineInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenReader*), "Newtonsoft.Json.IJsonLineInfo.HasLineInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenReader::get_Path
// Il2CppName: get_Path
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Linq::JTokenReader::*)()>(&Newtonsoft::Json::Linq::JTokenReader::get_Path)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenReader*), "get_Path", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JTokenReader::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Linq::JTokenReader::*)()>(&Newtonsoft::Json::Linq::JTokenReader::Read)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JTokenReader*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
