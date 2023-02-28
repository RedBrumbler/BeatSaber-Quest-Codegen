// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.TypeConverter
#include "System/ComponentModel/TypeConverter.hpp"
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
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: NumberFormatInfo
  class NumberFormatInfo;
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ITypeDescriptorContext
  class ITypeDescriptorContext;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: BaseNumberConverter
  class BaseNumberConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::BaseNumberConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::BaseNumberConverter*, "System.ComponentModel", "BaseNumberConverter");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.BaseNumberConverter
  // [TokenAttribute] Offset: FFFFFFFF
  class BaseNumberConverter : public ::System::ComponentModel::TypeConverter {
    public:
    // System.Boolean get_AllowHex()
    // Offset: 0x1E5DD98
    bool get_AllowHex();
    // System.Type get_TargetType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Type* get_TargetType();
    // System.Object FromString(System.String value, System.Int32 radix)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* FromString(::StringW value, int radix);
    // System.Object FromString(System.String value, System.Globalization.NumberFormatInfo formatInfo)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* FromString(::StringW value, ::System::Globalization::NumberFormatInfo* formatInfo);
    // System.Exception FromStringError(System.String failedText, System.Exception innerException)
    // Offset: 0x1E5DDA0
    ::System::Exception* FromStringError(::StringW failedText, ::System::Exception* innerException);
    // System.String ToString(System.Object value, System.Globalization.NumberFormatInfo formatInfo)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW ToString(::Il2CppObject* value, ::System::Globalization::NumberFormatInfo* formatInfo);
    // protected System.Void .ctor()
    // Offset: 0x1E5E958
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.Void TypeConverter::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseNumberConverter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::BaseNumberConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseNumberConverter*, creationType>()));
    }
    // public override System.Boolean CanConvertFrom(System.ComponentModel.ITypeDescriptorContext context, System.Type sourceType)
    // Offset: 0x1E5DEE0
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.Boolean TypeConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext context, System.Type sourceType)
    bool CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType);
    // public override System.Object ConvertFrom(System.ComponentModel.ITypeDescriptorContext context, System.Globalization.CultureInfo culture, System.Object value)
    // Offset: 0x1E5E004
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.Object TypeConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext context, System.Globalization.CultureInfo culture, System.Object value)
    ::Il2CppObject* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::Il2CppObject* value);
    // public override System.Object ConvertTo(System.ComponentModel.ITypeDescriptorContext context, System.Globalization.CultureInfo culture, System.Object value, System.Type destinationType)
    // Offset: 0x1E5E3F4
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.Object TypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext context, System.Globalization.CultureInfo culture, System.Object value, System.Type destinationType)
    ::Il2CppObject* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::Il2CppObject* value, ::System::Type* destinationType);
    // public override System.Boolean CanConvertTo(System.ComponentModel.ITypeDescriptorContext context, System.Type t)
    // Offset: 0x1E5E890
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.Boolean TypeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext context, System.Type t)
    bool CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* t);
  }; // System.ComponentModel.BaseNumberConverter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::BaseNumberConverter::get_AllowHex
// Il2CppName: get_AllowHex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::BaseNumberConverter::*)()>(&System::ComponentModel::BaseNumberConverter::get_AllowHex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::BaseNumberConverter*), "get_AllowHex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::BaseNumberConverter::get_TargetType
// Il2CppName: get_TargetType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::ComponentModel::BaseNumberConverter::*)()>(&System::ComponentModel::BaseNumberConverter::get_TargetType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::BaseNumberConverter*), "get_TargetType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::BaseNumberConverter::FromString
// Il2CppName: FromString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::BaseNumberConverter::*)(::StringW, int)>(&System::ComponentModel::BaseNumberConverter::FromString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* radix = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::BaseNumberConverter*), "FromString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, radix});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::BaseNumberConverter::FromString
// Il2CppName: FromString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::BaseNumberConverter::*)(::StringW, ::System::Globalization::NumberFormatInfo*)>(&System::ComponentModel::BaseNumberConverter::FromString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* formatInfo = &::il2cpp_utils::GetClassFromName("System.Globalization", "NumberFormatInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::BaseNumberConverter*), "FromString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, formatInfo});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::BaseNumberConverter::FromStringError
// Il2CppName: FromStringError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (System::ComponentModel::BaseNumberConverter::*)(::StringW, ::System::Exception*)>(&System::ComponentModel::BaseNumberConverter::FromStringError)> {
  static const MethodInfo* get() {
    static auto* failedText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* innerException = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::BaseNumberConverter*), "FromStringError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{failedText, innerException});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::BaseNumberConverter::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::BaseNumberConverter::*)(::Il2CppObject*, ::System::Globalization::NumberFormatInfo*)>(&System::ComponentModel::BaseNumberConverter::ToString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* formatInfo = &::il2cpp_utils::GetClassFromName("System.Globalization", "NumberFormatInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::BaseNumberConverter*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, formatInfo});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::BaseNumberConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::BaseNumberConverter::CanConvertFrom
// Il2CppName: CanConvertFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::BaseNumberConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(&System::ComponentModel::BaseNumberConverter::CanConvertFrom)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    static auto* sourceType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::BaseNumberConverter*), "CanConvertFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, sourceType});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::BaseNumberConverter::ConvertFrom
// Il2CppName: ConvertFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::BaseNumberConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::Il2CppObject*)>(&System::ComponentModel::BaseNumberConverter::ConvertFrom)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::BaseNumberConverter*), "ConvertFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, culture, value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::BaseNumberConverter::ConvertTo
// Il2CppName: ConvertTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::BaseNumberConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::Il2CppObject*, ::System::Type*)>(&System::ComponentModel::BaseNumberConverter::ConvertTo)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::BaseNumberConverter*), "ConvertTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, culture, value, destinationType});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::BaseNumberConverter::CanConvertTo
// Il2CppName: CanConvertTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::BaseNumberConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(&System::ComponentModel::BaseNumberConverter::CanConvertTo)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::BaseNumberConverter*), "CanConvertTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, t});
  }
};
