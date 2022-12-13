// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: System.DateTimeOffset
#include "System/DateTimeOffset.hpp"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: RetryConditionHeaderValue
  class RetryConditionHeaderValue;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Http::Headers::RetryConditionHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::RetryConditionHeaderValue*, "System.Net.Http.Headers", "RetryConditionHeaderValue");
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.Http.Headers.RetryConditionHeaderValue
  // [TokenAttribute] Offset: FFFFFFFF
  class RetryConditionHeaderValue : public ::Il2CppObject/*, public ::System::ICloneable*/ {
    public:
    public:
    // private System.Nullable`1<System.DateTimeOffset> <Date>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x10
    ::System::Nullable_1<::System::DateTimeOffset> Date;
    // private System.Nullable`1<System.TimeSpan> <Delta>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    ::System::Nullable_1<::System::TimeSpan> Delta;
    public:
    // Creating interface conversion operator: operator ::System::ICloneable
    operator ::System::ICloneable() noexcept {
      return *reinterpret_cast<::System::ICloneable*>(this);
    }
    // Creating interface conversion operator: i_ICloneable
    inline ::System::ICloneable* i_ICloneable() noexcept {
      return reinterpret_cast<::System::ICloneable*>(this);
    }
    // Get instance field reference: private System.Nullable`1<System.DateTimeOffset> <Date>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::System::DateTimeOffset>& dyn_$Date$k__BackingField();
    // Get instance field reference: private System.Nullable`1<System.TimeSpan> <Delta>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::System::TimeSpan>& dyn_$Delta$k__BackingField();
    // public System.Nullable`1<System.DateTimeOffset> get_Date()
    // Offset: 0x19FA36C
    ::System::Nullable_1<::System::DateTimeOffset> get_Date();
    // private System.Void set_Date(System.Nullable`1<System.DateTimeOffset> value)
    // Offset: 0x19FA380
    void set_Date(::System::Nullable_1<::System::DateTimeOffset> value);
    // public System.Nullable`1<System.TimeSpan> get_Delta()
    // Offset: 0x19FA394
    ::System::Nullable_1<::System::TimeSpan> get_Delta();
    // private System.Void set_Delta(System.Nullable`1<System.TimeSpan> value)
    // Offset: 0x19FA3A0
    void set_Delta(::System::Nullable_1<::System::TimeSpan> value);
    // public System.Void .ctor(System.DateTimeOffset date)
    // Offset: 0x19FA200
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RetryConditionHeaderValue* New_ctor(::System::DateTimeOffset date) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Http::Headers::RetryConditionHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RetryConditionHeaderValue*, creationType>(date)));
    }
    // public System.Void .ctor(System.TimeSpan delta)
    // Offset: 0x19FA298
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RetryConditionHeaderValue* New_ctor(::System::TimeSpan delta) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Http::Headers::RetryConditionHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RetryConditionHeaderValue*, creationType>(delta)));
    }
    // private System.Object System.ICloneable.Clone()
    // Offset: 0x19FA3A8
    ::Il2CppObject* System_ICloneable_Clone();
    // static public System.Boolean TryParse(System.String input, out System.Net.Http.Headers.RetryConditionHeaderValue parsedValue)
    // Offset: 0x19FA5B4
    static bool TryParse(::StringW input, ByRef<::System::Net::Http::Headers::RetryConditionHeaderValue*> parsedValue);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x19FA3B0
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x19FA524
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x19FA774
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Net.Http.Headers.RetryConditionHeaderValue
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::RetryConditionHeaderValue::get_Date
// Il2CppName: get_Date
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::DateTimeOffset> (System::Net::Http::Headers::RetryConditionHeaderValue::*)()>(&System::Net::Http::Headers::RetryConditionHeaderValue::get_Date)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::RetryConditionHeaderValue*), "get_Date", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::RetryConditionHeaderValue::set_Date
// Il2CppName: set_Date
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::RetryConditionHeaderValue::*)(::System::Nullable_1<::System::DateTimeOffset>)>(&System::Net::Http::Headers::RetryConditionHeaderValue::set_Date)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "DateTimeOffset")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::RetryConditionHeaderValue*), "set_Date", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::RetryConditionHeaderValue::get_Delta
// Il2CppName: get_Delta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::TimeSpan> (System::Net::Http::Headers::RetryConditionHeaderValue::*)()>(&System::Net::Http::Headers::RetryConditionHeaderValue::get_Delta)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::RetryConditionHeaderValue*), "get_Delta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::RetryConditionHeaderValue::set_Delta
// Il2CppName: set_Delta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::RetryConditionHeaderValue::*)(::System::Nullable_1<::System::TimeSpan>)>(&System::Net::Http::Headers::RetryConditionHeaderValue::set_Delta)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "TimeSpan")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::RetryConditionHeaderValue*), "set_Delta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::RetryConditionHeaderValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::Headers::RetryConditionHeaderValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::Headers::RetryConditionHeaderValue::System_ICloneable_Clone
// Il2CppName: System.ICloneable.Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::Http::Headers::RetryConditionHeaderValue::*)()>(&System::Net::Http::Headers::RetryConditionHeaderValue::System_ICloneable_Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::RetryConditionHeaderValue*), "System.ICloneable.Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::RetryConditionHeaderValue::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::System::Net::Http::Headers::RetryConditionHeaderValue*>)>(&System::Net::Http::Headers::RetryConditionHeaderValue::TryParse)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* parsedValue = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "RetryConditionHeaderValue")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::RetryConditionHeaderValue*), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, parsedValue});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::RetryConditionHeaderValue::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::RetryConditionHeaderValue::*)(::Il2CppObject*)>(&System::Net::Http::Headers::RetryConditionHeaderValue::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::RetryConditionHeaderValue*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::RetryConditionHeaderValue::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Http::Headers::RetryConditionHeaderValue::*)()>(&System::Net::Http::Headers::RetryConditionHeaderValue::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::RetryConditionHeaderValue*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::RetryConditionHeaderValue::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Http::Headers::RetryConditionHeaderValue::*)()>(&System::Net::Http::Headers::RetryConditionHeaderValue::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::RetryConditionHeaderValue*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
