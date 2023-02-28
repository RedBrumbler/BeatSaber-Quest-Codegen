// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Linq.JsonPath.QueryExpression
#include "Newtonsoft/Json/Linq/JsonPath/QueryExpression.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Linq.JsonPath
namespace Newtonsoft::Json::Linq::JsonPath {
  // Forward declaring type: CompositeExpression
  class CompositeExpression;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::CompositeExpression);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::CompositeExpression*, "Newtonsoft.Json.Linq.JsonPath", "CompositeExpression");
// Type namespace: Newtonsoft.Json.Linq.JsonPath
namespace Newtonsoft::Json::Linq::JsonPath {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Linq.JsonPath.CompositeExpression
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class CompositeExpression : public ::Newtonsoft::Json::Linq::JsonPath::QueryExpression {
    public:
    public:
    // private System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JsonPath.QueryExpression> <Expressions>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>* Expressions;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>*
    constexpr operator ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>*() const noexcept {
      return Expressions;
    }
    // Get instance field reference: private System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JsonPath.QueryExpression> <Expressions>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>*& dyn_$Expressions$k__BackingField();
    // public System.Void set_Expressions(System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JsonPath.QueryExpression> value)
    // Offset: 0x17BCA28
    void set_Expressions(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>* value);
    // public System.Void .ctor()
    // Offset: 0x17BCA30
    // Implemented from: Newtonsoft.Json.Linq.JsonPath.QueryExpression
    // Base method: System.Void QueryExpression::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CompositeExpression* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Linq::JsonPath::CompositeExpression::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CompositeExpression*, creationType>()));
    }
  }; // Newtonsoft.Json.Linq.JsonPath.CompositeExpression
  #pragma pack(pop)
  static check_size<sizeof(CompositeExpression), 16 + sizeof(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>*)> __Newtonsoft_Json_Linq_JsonPath_CompositeExpressionSizeCheck;
  static_assert(sizeof(CompositeExpression) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JsonPath::CompositeExpression::set_Expressions
// Il2CppName: set_Expressions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JsonPath::CompositeExpression::*)(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>*)>(&Newtonsoft::Json::Linq::JsonPath::CompositeExpression::set_Expressions)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq.JsonPath", "QueryExpression")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JsonPath::CompositeExpression*), "set_Expressions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JsonPath::CompositeExpression::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
