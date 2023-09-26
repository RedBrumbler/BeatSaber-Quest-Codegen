#pragma once
#include "System/zzzz__Convert_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__IConvertible_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Base64FormattingOptions_def.hpp"
//  Writing Method size for method: System::Convert.TryDecodeFromUtf16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::ReadOnlySpan_1<char16_t>, System::Span_1<uint8_t>, ByRef<int32_t>, ByRef<int32_t>)>(&System::Convert::TryDecodeFromUtf16)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x23f1744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "TryDecodeFromUtf16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.Decode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(ByRef<char16_t>, ByRef<int8_t>)>(&System::Convert::Decode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x23f1ab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "Decode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.WriteThreeLowOrderBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<uint8_t>, int32_t)>(&System::Convert::WriteThreeLowOrderBytes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x23f1b08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "WriteThreeLowOrderBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.GetTypeCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TypeCode (*)(::bs_hook::Il2CppWrapperType)>(&System::Convert::GetTypeCode)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x23f1b20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "GetTypeCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ChangeType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::bs_hook::Il2CppWrapperType, System::TypeCode, System::IFormatProvider)>(&System::Convert::ChangeType)> {
  constexpr static std::size_t size = 0x848;
  constexpr static std::size_t addrs = 0x23f1be4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ChangeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TypeCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.DefaultToType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(System::IConvertible, System::Type, System::IFormatProvider)>(&System::Convert::DefaultToType)> {
  constexpr static std::size_t size = 0xd14;
  constexpr static std::size_t addrs = 0x23ed918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "DefaultToType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IConvertible>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ChangeType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::bs_hook::Il2CppWrapperType, System::Type)>(&System::Convert::ChangeType)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23f242c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ChangeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ChangeType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::bs_hook::Il2CppWrapperType, System::Type, System::IFormatProvider)>(&System::Convert::ChangeType)> {
  constexpr static std::size_t size = 0xbfc;
  constexpr static std::size_t addrs = 0x23f24c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ChangeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ThrowCharOverflowException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Convert::ThrowCharOverflowException)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x23f30c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ThrowCharOverflowException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ThrowByteOverflowException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Convert::ThrowByteOverflowException)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x23f3114;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ThrowByteOverflowException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ThrowSByteOverflowException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Convert::ThrowSByteOverflowException)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x23f3164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ThrowSByteOverflowException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ThrowInt16OverflowException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Convert::ThrowInt16OverflowException)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x23f31b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ThrowInt16OverflowException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ThrowUInt16OverflowException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Convert::ThrowUInt16OverflowException)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x23f3204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ThrowUInt16OverflowException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ThrowInt32OverflowException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Convert::ThrowInt32OverflowException)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x23f3254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ThrowInt32OverflowException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ThrowUInt32OverflowException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Convert::ThrowUInt32OverflowException)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x23f32a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ThrowUInt32OverflowException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ThrowInt64OverflowException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Convert::ThrowInt64OverflowException)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x23f32f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ThrowInt64OverflowException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ThrowUInt64OverflowException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Convert::ThrowUInt64OverflowException)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x23f3344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ThrowUInt64OverflowException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToBoolean
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::bs_hook::Il2CppWrapperType)>(&System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x23f3394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToBoolean
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::bs_hook::Il2CppWrapperType, System::IFormatProvider)>(&System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x23f3488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToBoolean
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int8_t)>(&System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23f358c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToBoolean
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint8_t)>(&System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23eefe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToBoolean
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int16_t)>(&System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23f3598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToBoolean
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint16_t)>(&System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23f35a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToBoolean
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23f35b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToBoolean
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint32_t)>(&System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23f35bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToBoolean
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int64_t)>(&System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23f35c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToBoolean
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint64_t)>(&System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23f35d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToBoolean
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x23f35e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToBoolean
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, System::IFormatProvider)>(&System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x23f3648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToBoolean
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float_t)>(&System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23f36b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToBoolean
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(double_t)>(&System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23f36bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToBoolean
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Decimal)>(&System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23f36c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(::bs_hook::Il2CppWrapperType)>(&System::Convert::ToChar)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x23f373c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(::bs_hook::Il2CppWrapperType, System::IFormatProvider)>(&System::Convert::ToChar)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x23f3830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(int8_t)>(&System::Convert::ToChar)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x23f3934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(uint8_t)>(&System::Convert::ToChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ef04c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(int16_t)>(&System::Convert::ToChar)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f3988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(uint16_t)>(&System::Convert::ToChar)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23f39e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(int32_t)>(&System::Convert::ToChar)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f39e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(uint32_t)>(&System::Convert::ToChar)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f3a3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(int64_t)>(&System::Convert::ToChar)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f3a94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(uint64_t)>(&System::Convert::ToChar)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f3aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(::StringW)>(&System::Convert::ToChar)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x23f3b44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(::StringW, System::IFormatProvider)>(&System::Convert::ToChar)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x23f3b98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToSByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (*)(::bs_hook::Il2CppWrapperType)>(&System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x23f3c3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToSByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (*)(::bs_hook::Il2CppWrapperType, System::IFormatProvider)>(&System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x23f3d30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToSByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (*)(bool)>(&System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ed370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToSByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (*)(char16_t)>(&System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x23f00f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToSByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (*)(uint8_t)>(&System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23ef0ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToSByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (*)(int16_t)>(&System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x23f3e34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToSByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (*)(uint16_t)>(&System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x23f3e94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToSByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (*)(int32_t)>(&System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f3ef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToSByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (*)(uint32_t)>(&System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f3f48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToSByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (*)(int64_t)>(&System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f3fa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToSByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (*)(uint64_t)>(&System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f3ff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToSByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (*)(float_t)>(&System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x23f4050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToSByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (*)(double_t)>(&System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x23f40ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToSByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (*)(System::Decimal)>(&System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23f4208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToSByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (*)(::StringW, System::IFormatProvider)>(&System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23f427c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(::bs_hook::Il2CppWrapperType)>(&System::Convert::ToByte)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x23f428c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(::bs_hook::Il2CppWrapperType, System::IFormatProvider)>(&System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x23f4380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(bool)>(&System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ed3d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(char16_t)>(&System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x23f01a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(int8_t)>(&System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f4484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(int16_t)>(&System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x23f44dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(uint16_t)>(&System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x23f4538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(int32_t)>(&System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f4594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(uint32_t)>(&System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f45ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(int64_t)>(&System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f4644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(uint64_t)>(&System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f469c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(float_t)>(&System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x23f46f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(double_t)>(&System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x23f4750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(System::Decimal)>(&System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23f47b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(::StringW)>(&System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23f4824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(::StringW, System::IFormatProvider)>(&System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x23f4898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(::bs_hook::Il2CppWrapperType)>(&System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x23f48ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(::bs_hook::Il2CppWrapperType, System::IFormatProvider)>(&System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x23f49a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(bool)>(&System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ed438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(char16_t)>(&System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f025c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(int8_t)>(&System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f4aa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(uint8_t)>(&System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ef164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(uint16_t)>(&System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f4aac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(int32_t)>(&System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f4b04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(uint32_t)>(&System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f4b5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(int64_t)>(&System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f4bb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(uint64_t)>(&System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f4c0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(float_t)>(&System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x23f4c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(double_t)>(&System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x23f4cc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(System::Decimal)>(&System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23f4d20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(::StringW, System::IFormatProvider)>(&System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x23f4d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(::bs_hook::Il2CppWrapperType)>(&System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x23f4dac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(::bs_hook::Il2CppWrapperType, System::IFormatProvider)>(&System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x23f4ea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(bool)>(&System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ed49c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(char16_t)>(&System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23f030c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(int8_t)>(&System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x23f4fa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(uint8_t)>(&System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ef1c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(int16_t)>(&System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f4ff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(int32_t)>(&System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f5050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(uint32_t)>(&System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f50a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(int64_t)>(&System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f5100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(uint64_t)>(&System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f5158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(float_t)>(&System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x23f51b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(double_t)>(&System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x23f520c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(System::Decimal)>(&System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23f526c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(::StringW, System::IFormatProvider)>(&System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x23f52e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::bs_hook::Il2CppWrapperType)>(&System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x23f52f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::bs_hook::Il2CppWrapperType, System::IFormatProvider)>(&System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x23f53ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(bool)>(&System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ed500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(char16_t)>(&System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f0368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(uint8_t)>(&System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ef224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int16_t)>(&System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f54f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(uint16_t)>(&System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f54f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(uint32_t)>(&System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x23f5500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int64_t)>(&System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f5554;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(uint64_t)>(&System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f55ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(float_t)>(&System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x23f5604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(double_t)>(&System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x23f410c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(System::Decimal)>(&System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23f5660;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW)>(&System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x23f56d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, System::IFormatProvider)>(&System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x23f574c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::bs_hook::Il2CppWrapperType)>(&System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x23f5764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::bs_hook::Il2CppWrapperType, System::IFormatProvider)>(&System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x23f5858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(bool)>(&System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ed564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(char16_t)>(&System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f03c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(int8_t)>(&System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x23f595c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(uint8_t)>(&System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ef284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(int16_t)>(&System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x23f59b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(uint16_t)>(&System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f5a04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(int32_t)>(&System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x23f5a0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(int64_t)>(&System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f5a60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(uint64_t)>(&System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f5ab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(float_t)>(&System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x23f5b10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(double_t)>(&System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x23f5b6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(System::Decimal)>(&System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23f5c14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::StringW, System::IFormatProvider)>(&System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x23f5c88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::bs_hook::Il2CppWrapperType)>(&System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x23f5ca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::bs_hook::Il2CppWrapperType, System::IFormatProvider)>(&System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x23f5d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(bool)>(&System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ed5c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(char16_t)>(&System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f0428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int8_t)>(&System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f5e98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(uint8_t)>(&System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ef2e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int16_t)>(&System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f5ea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(uint16_t)>(&System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f5ea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int32_t)>(&System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f5eb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(uint32_t)>(&System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f5eb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(uint64_t)>(&System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x23f5ec0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(float_t)>(&System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x23f5f14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(double_t)>(&System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x23f5f70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(System::Decimal)>(&System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23f6080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::StringW)>(&System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x23f60f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::StringW, System::IFormatProvider)>(&System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x23f616c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::bs_hook::Il2CppWrapperType)>(&System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x23f6184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::bs_hook::Il2CppWrapperType, System::IFormatProvider)>(&System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x23f6278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(bool)>(&System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ed62c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(char16_t)>(&System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f0488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(int8_t)>(&System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f637c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint8_t)>(&System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ef344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(int16_t)>(&System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f63d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint16_t)>(&System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f642c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(int32_t)>(&System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x23f6434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint32_t)>(&System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f6488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(int64_t)>(&System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x23f6490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(float_t)>(&System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x23f64e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(double_t)>(&System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x23f6540;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(System::Decimal)>(&System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23f663c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::StringW, System::IFormatProvider)>(&System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x23f66b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToSingle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::bs_hook::Il2CppWrapperType)>(&System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x23f66c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToSingle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::bs_hook::Il2CppWrapperType, System::IFormatProvider)>(&System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x23f67bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToSingle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(int8_t)>(&System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23f68c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToSingle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(uint8_t)>(&System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23ef3a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToSingle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(int16_t)>(&System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23f68cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToSingle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(uint16_t)>(&System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23f68d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToSingle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(int32_t)>(&System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f68e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToSingle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(uint32_t)>(&System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23f68ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToSingle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(int64_t)>(&System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f68f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToSingle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(uint64_t)>(&System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23f6900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToSingle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(double_t)>(&System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f690c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToSingle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(System::Decimal)>(&System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x23f6914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToSingle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::StringW)>(&System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x23f697c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToSingle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::StringW, System::IFormatProvider)>(&System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23f69f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToSingle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(bool)>(&System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x23ed698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToDouble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(::bs_hook::Il2CppWrapperType)>(&System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x23f6a10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToDouble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(::bs_hook::Il2CppWrapperType, System::IFormatProvider)>(&System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x23f6b04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToDouble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(int8_t)>(&System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23f6c08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToDouble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(uint8_t)>(&System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23ef408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToDouble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(int16_t)>(&System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23f6c14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToDouble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(uint16_t)>(&System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23f6c20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToDouble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(int32_t)>(&System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f6c2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToDouble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(uint32_t)>(&System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f6c34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToDouble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(int64_t)>(&System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f6c3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToDouble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(uint64_t)>(&System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f6c44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToDouble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(float_t)>(&System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f6c4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToDouble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(System::Decimal)>(&System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x23f6c54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToDouble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(::StringW, System::IFormatProvider)>(&System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23f6cbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToDouble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(bool)>(&System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x23ed710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToDecimal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Decimal (*)(::bs_hook::Il2CppWrapperType, System::IFormatProvider)>(&System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x23f6cd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToDecimal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Decimal (*)(int8_t)>(&System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f6e00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToDecimal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Decimal (*)(uint8_t)>(&System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23ef46c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToDecimal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Decimal (*)(int16_t)>(&System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f6e58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToDecimal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Decimal (*)(uint16_t)>(&System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f6eb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToDecimal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Decimal (*)(int32_t)>(&System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f6f08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToDecimal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Decimal (*)(uint32_t)>(&System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f6f60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToDecimal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Decimal (*)(int64_t)>(&System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f6fb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToDecimal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Decimal (*)(uint64_t)>(&System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f7010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToDecimal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Decimal (*)(float_t)>(&System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x23f7068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToDecimal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Decimal (*)(double_t)>(&System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x23f70c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToDecimal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Decimal (*)(::StringW, System::IFormatProvider)>(&System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x23f7128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToDecimal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Decimal (*)(bool)>(&System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x23ed780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToDateTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (*)(::bs_hook::Il2CppWrapperType, System::IFormatProvider)>(&System::Convert::ToDateTime)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x23f71b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToDateTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (*)(::StringW, System::IFormatProvider)>(&System::Convert::ToDateTime)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x23f72e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::bs_hook::Il2CppWrapperType, System::IFormatProvider)>(&System::Convert::ToString)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x23f7370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(bool)>(&System::Convert::ToString)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23f7510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(char16_t, System::IFormatProvider)>(&System::Convert::ToString)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x23f752c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int32_t)>(&System::Convert::ToString)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x23f7544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int32_t, System::IFormatProvider)>(&System::Convert::ToString)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23f75ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int64_t)>(&System::Convert::ToString)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x23f75c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(float_t)>(&System::Convert::ToString)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x23f7630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(::StringW, int32_t)>(&System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x23f7698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToSByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (*)(::StringW, int32_t)>(&System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x23f77a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(::StringW, int32_t)>(&System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x23f78c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(::StringW, int32_t)>(&System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x23f79dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, int32_t)>(&System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x23f7ae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::StringW, int32_t)>(&System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x23f7bc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::StringW, int32_t)>(&System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x23f7c98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToUInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::StringW, int32_t)>(&System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x23f7d70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int32_t, int32_t)>(&System::Convert::ToString)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x23f7e48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int64_t, int32_t)>(&System::Convert::ToString)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x23f7ecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToBase64String
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&System::Convert::ToBase64String)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x23f7f50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBase64String",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToBase64String
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::Convert::ToBase64String)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x23f81c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBase64String",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToBase64String
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<uint8_t>, int32_t, int32_t, System::Base64FormattingOptions)>(&System::Convert::ToBase64String)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x23f8230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBase64String",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Base64FormattingOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToBase64String
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::ReadOnlySpan_1<uint8_t>, System::Base64FormattingOptions)>(&System::Convert::ToBase64String)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x23f800c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBase64String",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Base64FormattingOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToBase64CharArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<char16_t>, int32_t)>(&System::Convert::ToBase64CharArray)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x23f86e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBase64CharArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToBase64CharArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<char16_t>, int32_t, System::Base64FormattingOptions)>(&System::Convert::ToBase64CharArray)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x23f8768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBase64CharArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Base64FormattingOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ConvertToBase64Array
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(void*, void*, int32_t, int32_t, bool)>(&System::Convert::ConvertToBase64Array)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x23f849c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ConvertToBase64Array",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.ToBase64_CalculateAndValidateOutputLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, bool)>(&System::Convert::ToBase64_CalculateAndValidateOutputLength)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x23f83e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBase64_CalculateAndValidateOutputLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.FromBase64String
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&System::Convert::FromBase64String)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x23f8a94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "FromBase64String",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.TryFromBase64Chars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::ReadOnlySpan_1<char16_t>, System::Span_1<uint8_t>, ByRef<int32_t>)>(&System::Convert::TryFromBase64Chars)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x23f8cf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "TryFromBase64Chars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.CopyToTempBufferWithoutWhiteSpace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::ReadOnlySpan_1<char16_t>, System::Span_1<char16_t>, ByRef<int32_t>, ByRef<int32_t>)>(&System::Convert::CopyToTempBufferWithoutWhiteSpace)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x23f91ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "CopyToTempBufferWithoutWhiteSpace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.IsSpace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&System::Convert::IsSpace)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x23f930c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "IsSpace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.FromBase64CharArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<char16_t>, int32_t, int32_t)>(&System::Convert::FromBase64CharArray)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x23f9344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "FromBase64CharArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.FromBase64CharPtr
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(void*, int32_t)>(&System::Convert::FromBase64CharPtr)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x23f8b4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "FromBase64CharPtr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Convert.FromBase64_ComputeResultLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(void*, int32_t)>(&System::Convert::FromBase64_ComputeResultLength)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x23f9534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "FromBase64_ComputeResultLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::Convert::__set_s_decodingMap(::ArrayW<int8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<int8_t>, "s_decodingMap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get>(std::forward<::ArrayW<int8_t>>(value));
}
 ::ArrayW<int8_t> System::Convert::__get_s_decodingMap()  {
return ::cordl_internals::getStaticField<::ArrayW<int8_t>, "s_decodingMap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get>();
}
 void System::Convert::__set_ConvertTypes(::ArrayW<System::Type> value)  {
::cordl_internals::setStaticField<::ArrayW<System::Type>, "ConvertTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get>(std::forward<::ArrayW<System::Type>>(value));
}
 ::ArrayW<System::Type> System::Convert::__get_ConvertTypes()  {
return ::cordl_internals::getStaticField<::ArrayW<System::Type>, "ConvertTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get>();
}
 void System::Convert::__set_EnumType(System::Type value)  {
::cordl_internals::setStaticField<System::Type, "EnumType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get>(std::forward<System::Type>(value));
}
 System::Type System::Convert::__get_EnumType()  {
return ::cordl_internals::getStaticField<System::Type, "EnumType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get>();
}
 void System::Convert::__set_base64Table(::ArrayW<char16_t> value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "base64Table", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get>(std::forward<::ArrayW<char16_t>>(value));
}
 ::ArrayW<char16_t> System::Convert::__get_base64Table()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "base64Table", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get>();
}
 void System::Convert::__set_DBNull(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setStaticField<::bs_hook::Il2CppWrapperType, "DBNull", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get>(std::forward<::bs_hook::Il2CppWrapperType>(value));
}
 ::bs_hook::Il2CppWrapperType System::Convert::__get_DBNull()  {
return ::cordl_internals::getStaticField<::bs_hook::Il2CppWrapperType, "DBNull", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get>();
}
 bool System::Convert::TryDecodeFromUtf16(System::ReadOnlySpan_1<char16_t> utf16, System::Span_1<uint8_t> bytes, ByRef<int32_t> consumed, ByRef<int32_t> written)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "TryDecodeFromUtf16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, utf16, bytes, consumed, written);
}
 int32_t System::Convert::Decode(ByRef<char16_t> encodedChars, ByRef<int8_t> decodingMap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "Decode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, encodedChars, decodingMap);
}
 void System::Convert::WriteThreeLowOrderBytes(ByRef<uint8_t> destination, int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "WriteThreeLowOrderBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, destination, value);
}
 System::TypeCode System::Convert::GetTypeCode(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "GetTypeCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::TypeCode, false>(nullptr, ___internal_method, value);
}
 ::bs_hook::Il2CppWrapperType System::Convert::ChangeType(::bs_hook::Il2CppWrapperType value, System::TypeCode typeCode, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ChangeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TypeCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, value, typeCode, provider);
}
 ::bs_hook::Il2CppWrapperType System::Convert::DefaultToType(System::IConvertible value, System::Type targetType, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "DefaultToType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IConvertible>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, value, targetType, provider);
}
 ::bs_hook::Il2CppWrapperType System::Convert::ChangeType(::bs_hook::Il2CppWrapperType value, System::Type conversionType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ChangeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, value, conversionType);
}
 ::bs_hook::Il2CppWrapperType System::Convert::ChangeType(::bs_hook::Il2CppWrapperType value, System::Type conversionType, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ChangeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, value, conversionType, provider);
}
 void System::Convert::ThrowCharOverflowException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ThrowCharOverflowException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void System::Convert::ThrowByteOverflowException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ThrowByteOverflowException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void System::Convert::ThrowSByteOverflowException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ThrowSByteOverflowException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void System::Convert::ThrowInt16OverflowException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ThrowInt16OverflowException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void System::Convert::ThrowUInt16OverflowException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ThrowUInt16OverflowException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void System::Convert::ThrowInt32OverflowException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ThrowInt32OverflowException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void System::Convert::ThrowUInt32OverflowException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ThrowUInt32OverflowException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void System::Convert::ThrowInt64OverflowException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ThrowInt64OverflowException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void System::Convert::ThrowUInt64OverflowException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ThrowUInt64OverflowException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 bool System::Convert::ToBoolean(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value);
}
 bool System::Convert::ToBoolean(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value, provider);
}
 bool System::Convert::ToBoolean(int8_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value);
}
 bool System::Convert::ToBoolean(uint8_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value);
}
 bool System::Convert::ToBoolean(int16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value);
}
 bool System::Convert::ToBoolean(uint16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value);
}
 bool System::Convert::ToBoolean(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value);
}
 bool System::Convert::ToBoolean(uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value);
}
 bool System::Convert::ToBoolean(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value);
}
 bool System::Convert::ToBoolean(uint64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value);
}
 bool System::Convert::ToBoolean(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value);
}
 bool System::Convert::ToBoolean(::StringW value, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value, provider);
}
 bool System::Convert::ToBoolean(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value);
}
 bool System::Convert::ToBoolean(double_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value);
}
 bool System::Convert::ToBoolean(System::Decimal value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value);
}
 char16_t System::Convert::ToChar(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, value);
}
 char16_t System::Convert::ToChar(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, value, provider);
}
 char16_t System::Convert::ToChar(int8_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, value);
}
 char16_t System::Convert::ToChar(uint8_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, value);
}
 char16_t System::Convert::ToChar(int16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, value);
}
 char16_t System::Convert::ToChar(uint16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, value);
}
 char16_t System::Convert::ToChar(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, value);
}
 char16_t System::Convert::ToChar(uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, value);
}
 char16_t System::Convert::ToChar(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, value);
}
 char16_t System::Convert::ToChar(uint64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, value);
}
 char16_t System::Convert::ToChar(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, value);
}
 char16_t System::Convert::ToChar(::StringW value, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, value, provider);
}
 int8_t System::Convert::ToSByte(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int8_t, false>(nullptr, ___internal_method, value);
}
 int8_t System::Convert::ToSByte(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int8_t, false>(nullptr, ___internal_method, value, provider);
}
 int8_t System::Convert::ToSByte(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int8_t, false>(nullptr, ___internal_method, value);
}
 int8_t System::Convert::ToSByte(char16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int8_t, false>(nullptr, ___internal_method, value);
}
 int8_t System::Convert::ToSByte(uint8_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int8_t, false>(nullptr, ___internal_method, value);
}
 int8_t System::Convert::ToSByte(int16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int8_t, false>(nullptr, ___internal_method, value);
}
 int8_t System::Convert::ToSByte(uint16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int8_t, false>(nullptr, ___internal_method, value);
}
 int8_t System::Convert::ToSByte(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int8_t, false>(nullptr, ___internal_method, value);
}
 int8_t System::Convert::ToSByte(uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int8_t, false>(nullptr, ___internal_method, value);
}
 int8_t System::Convert::ToSByte(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int8_t, false>(nullptr, ___internal_method, value);
}
 int8_t System::Convert::ToSByte(uint64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int8_t, false>(nullptr, ___internal_method, value);
}
 int8_t System::Convert::ToSByte(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int8_t, false>(nullptr, ___internal_method, value);
}
 int8_t System::Convert::ToSByte(double_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int8_t, false>(nullptr, ___internal_method, value);
}
 int8_t System::Convert::ToSByte(System::Decimal value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int8_t, false>(nullptr, ___internal_method, value);
}
 int8_t System::Convert::ToSByte(::StringW value, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int8_t, false>(nullptr, ___internal_method, value, provider);
}
 uint8_t System::Convert::ToByte(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, value);
}
 uint8_t System::Convert::ToByte(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, value, provider);
}
 uint8_t System::Convert::ToByte(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, value);
}
 uint8_t System::Convert::ToByte(char16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, value);
}
 uint8_t System::Convert::ToByte(int8_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, value);
}
 uint8_t System::Convert::ToByte(int16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, value);
}
 uint8_t System::Convert::ToByte(uint16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, value);
}
 uint8_t System::Convert::ToByte(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, value);
}
 uint8_t System::Convert::ToByte(uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, value);
}
 uint8_t System::Convert::ToByte(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, value);
}
 uint8_t System::Convert::ToByte(uint64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, value);
}
 uint8_t System::Convert::ToByte(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, value);
}
 uint8_t System::Convert::ToByte(double_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, value);
}
 uint8_t System::Convert::ToByte(System::Decimal value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, value);
}
 uint8_t System::Convert::ToByte(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, value);
}
 uint8_t System::Convert::ToByte(::StringW value, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, value, provider);
}
 int16_t System::Convert::ToInt16(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int16_t, false>(nullptr, ___internal_method, value);
}
 int16_t System::Convert::ToInt16(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int16_t, false>(nullptr, ___internal_method, value, provider);
}
 int16_t System::Convert::ToInt16(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int16_t, false>(nullptr, ___internal_method, value);
}
 int16_t System::Convert::ToInt16(char16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int16_t, false>(nullptr, ___internal_method, value);
}
 int16_t System::Convert::ToInt16(int8_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int16_t, false>(nullptr, ___internal_method, value);
}
 int16_t System::Convert::ToInt16(uint8_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int16_t, false>(nullptr, ___internal_method, value);
}
 int16_t System::Convert::ToInt16(uint16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int16_t, false>(nullptr, ___internal_method, value);
}
 int16_t System::Convert::ToInt16(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int16_t, false>(nullptr, ___internal_method, value);
}
 int16_t System::Convert::ToInt16(uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int16_t, false>(nullptr, ___internal_method, value);
}
 int16_t System::Convert::ToInt16(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int16_t, false>(nullptr, ___internal_method, value);
}
 int16_t System::Convert::ToInt16(uint64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int16_t, false>(nullptr, ___internal_method, value);
}
 int16_t System::Convert::ToInt16(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int16_t, false>(nullptr, ___internal_method, value);
}
 int16_t System::Convert::ToInt16(double_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int16_t, false>(nullptr, ___internal_method, value);
}
 int16_t System::Convert::ToInt16(System::Decimal value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int16_t, false>(nullptr, ___internal_method, value);
}
 int16_t System::Convert::ToInt16(::StringW value, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int16_t, false>(nullptr, ___internal_method, value, provider);
}
 uint16_t System::Convert::ToUInt16(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(nullptr, ___internal_method, value);
}
 uint16_t System::Convert::ToUInt16(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(nullptr, ___internal_method, value, provider);
}
 uint16_t System::Convert::ToUInt16(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(nullptr, ___internal_method, value);
}
 uint16_t System::Convert::ToUInt16(char16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(nullptr, ___internal_method, value);
}
 uint16_t System::Convert::ToUInt16(int8_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(nullptr, ___internal_method, value);
}
 uint16_t System::Convert::ToUInt16(uint8_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(nullptr, ___internal_method, value);
}
 uint16_t System::Convert::ToUInt16(int16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(nullptr, ___internal_method, value);
}
 uint16_t System::Convert::ToUInt16(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(nullptr, ___internal_method, value);
}
 uint16_t System::Convert::ToUInt16(uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(nullptr, ___internal_method, value);
}
 uint16_t System::Convert::ToUInt16(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(nullptr, ___internal_method, value);
}
 uint16_t System::Convert::ToUInt16(uint64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(nullptr, ___internal_method, value);
}
 uint16_t System::Convert::ToUInt16(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(nullptr, ___internal_method, value);
}
 uint16_t System::Convert::ToUInt16(double_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(nullptr, ___internal_method, value);
}
 uint16_t System::Convert::ToUInt16(System::Decimal value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(nullptr, ___internal_method, value);
}
 uint16_t System::Convert::ToUInt16(::StringW value, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(nullptr, ___internal_method, value, provider);
}
 int32_t System::Convert::ToInt32(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value);
}
 int32_t System::Convert::ToInt32(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value, provider);
}
 int32_t System::Convert::ToInt32(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value);
}
 int32_t System::Convert::ToInt32(char16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value);
}
 int32_t System::Convert::ToInt32(uint8_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value);
}
 int32_t System::Convert::ToInt32(int16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value);
}
 int32_t System::Convert::ToInt32(uint16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value);
}
 int32_t System::Convert::ToInt32(uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value);
}
 int32_t System::Convert::ToInt32(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value);
}
 int32_t System::Convert::ToInt32(uint64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value);
}
 int32_t System::Convert::ToInt32(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value);
}
 int32_t System::Convert::ToInt32(double_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value);
}
 int32_t System::Convert::ToInt32(System::Decimal value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value);
}
 int32_t System::Convert::ToInt32(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value);
}
 int32_t System::Convert::ToInt32(::StringW value, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value, provider);
}
 uint32_t System::Convert::ToUInt32(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, value);
}
 uint32_t System::Convert::ToUInt32(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, value, provider);
}
 uint32_t System::Convert::ToUInt32(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, value);
}
 uint32_t System::Convert::ToUInt32(char16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, value);
}
 uint32_t System::Convert::ToUInt32(int8_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, value);
}
 uint32_t System::Convert::ToUInt32(uint8_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, value);
}
 uint32_t System::Convert::ToUInt32(int16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, value);
}
 uint32_t System::Convert::ToUInt32(uint16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, value);
}
 uint32_t System::Convert::ToUInt32(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, value);
}
 uint32_t System::Convert::ToUInt32(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, value);
}
 uint32_t System::Convert::ToUInt32(uint64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, value);
}
 uint32_t System::Convert::ToUInt32(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, value);
}
 uint32_t System::Convert::ToUInt32(double_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, value);
}
 uint32_t System::Convert::ToUInt32(System::Decimal value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, value);
}
 uint32_t System::Convert::ToUInt32(::StringW value, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, value, provider);
}
 int64_t System::Convert::ToInt64(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, value);
}
 int64_t System::Convert::ToInt64(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, value, provider);
}
 int64_t System::Convert::ToInt64(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, value);
}
 int64_t System::Convert::ToInt64(char16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, value);
}
 int64_t System::Convert::ToInt64(int8_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, value);
}
 int64_t System::Convert::ToInt64(uint8_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, value);
}
 int64_t System::Convert::ToInt64(int16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, value);
}
 int64_t System::Convert::ToInt64(uint16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, value);
}
 int64_t System::Convert::ToInt64(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, value);
}
 int64_t System::Convert::ToInt64(uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, value);
}
 int64_t System::Convert::ToInt64(uint64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, value);
}
 int64_t System::Convert::ToInt64(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, value);
}
 int64_t System::Convert::ToInt64(double_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, value);
}
 int64_t System::Convert::ToInt64(System::Decimal value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, value);
}
 int64_t System::Convert::ToInt64(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, value);
}
 int64_t System::Convert::ToInt64(::StringW value, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, value, provider);
}
 uint64_t System::Convert::ToUInt64(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, value);
}
 uint64_t System::Convert::ToUInt64(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, value, provider);
}
 uint64_t System::Convert::ToUInt64(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, value);
}
 uint64_t System::Convert::ToUInt64(char16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, value);
}
 uint64_t System::Convert::ToUInt64(int8_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, value);
}
 uint64_t System::Convert::ToUInt64(uint8_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, value);
}
 uint64_t System::Convert::ToUInt64(int16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, value);
}
 uint64_t System::Convert::ToUInt64(uint16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, value);
}
 uint64_t System::Convert::ToUInt64(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, value);
}
 uint64_t System::Convert::ToUInt64(uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, value);
}
 uint64_t System::Convert::ToUInt64(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, value);
}
 uint64_t System::Convert::ToUInt64(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, value);
}
 uint64_t System::Convert::ToUInt64(double_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, value);
}
 uint64_t System::Convert::ToUInt64(System::Decimal value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, value);
}
 uint64_t System::Convert::ToUInt64(::StringW value, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, value, provider);
}
 float_t System::Convert::ToSingle(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, value);
}
 float_t System::Convert::ToSingle(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, value, provider);
}
 float_t System::Convert::ToSingle(int8_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, value);
}
 float_t System::Convert::ToSingle(uint8_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, value);
}
 float_t System::Convert::ToSingle(int16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, value);
}
 float_t System::Convert::ToSingle(uint16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, value);
}
 float_t System::Convert::ToSingle(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, value);
}
 float_t System::Convert::ToSingle(uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, value);
}
 float_t System::Convert::ToSingle(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, value);
}
 float_t System::Convert::ToSingle(uint64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, value);
}
 float_t System::Convert::ToSingle(double_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, value);
}
 float_t System::Convert::ToSingle(System::Decimal value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, value);
}
 float_t System::Convert::ToSingle(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, value);
}
 float_t System::Convert::ToSingle(::StringW value, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, value, provider);
}
 float_t System::Convert::ToSingle(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, value);
}
 double_t System::Convert::ToDouble(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, value);
}
 double_t System::Convert::ToDouble(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, value, provider);
}
 double_t System::Convert::ToDouble(int8_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, value);
}
 double_t System::Convert::ToDouble(uint8_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, value);
}
 double_t System::Convert::ToDouble(int16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, value);
}
 double_t System::Convert::ToDouble(uint16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, value);
}
 double_t System::Convert::ToDouble(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, value);
}
 double_t System::Convert::ToDouble(uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, value);
}
 double_t System::Convert::ToDouble(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, value);
}
 double_t System::Convert::ToDouble(uint64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, value);
}
 double_t System::Convert::ToDouble(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, value);
}
 double_t System::Convert::ToDouble(System::Decimal value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, value);
}
 double_t System::Convert::ToDouble(::StringW value, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, value, provider);
}
 double_t System::Convert::ToDouble(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, value);
}
 System::Decimal System::Convert::ToDecimal(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Decimal, false>(nullptr, ___internal_method, value, provider);
}
 System::Decimal System::Convert::ToDecimal(int8_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Decimal, false>(nullptr, ___internal_method, value);
}
 System::Decimal System::Convert::ToDecimal(uint8_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Decimal, false>(nullptr, ___internal_method, value);
}
 System::Decimal System::Convert::ToDecimal(int16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Decimal, false>(nullptr, ___internal_method, value);
}
 System::Decimal System::Convert::ToDecimal(uint16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Decimal, false>(nullptr, ___internal_method, value);
}
 System::Decimal System::Convert::ToDecimal(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Decimal, false>(nullptr, ___internal_method, value);
}
 System::Decimal System::Convert::ToDecimal(uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Decimal, false>(nullptr, ___internal_method, value);
}
 System::Decimal System::Convert::ToDecimal(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Decimal, false>(nullptr, ___internal_method, value);
}
 System::Decimal System::Convert::ToDecimal(uint64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Decimal, false>(nullptr, ___internal_method, value);
}
 System::Decimal System::Convert::ToDecimal(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Decimal, false>(nullptr, ___internal_method, value);
}
 System::Decimal System::Convert::ToDecimal(double_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Decimal, false>(nullptr, ___internal_method, value);
}
 System::Decimal System::Convert::ToDecimal(::StringW value, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Decimal, false>(nullptr, ___internal_method, value, provider);
}
 System::Decimal System::Convert::ToDecimal(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Decimal, false>(nullptr, ___internal_method, value);
}
 System::DateTime System::Convert::ToDateTime(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::DateTime, false>(nullptr, ___internal_method, value, provider);
}
 System::DateTime System::Convert::ToDateTime(::StringW value, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToDateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::DateTime, false>(nullptr, ___internal_method, value, provider);
}
 ::StringW System::Convert::ToString(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value, provider);
}
 ::StringW System::Convert::ToString(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value);
}
 ::StringW System::Convert::ToString(char16_t value, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value, provider);
}
 ::StringW System::Convert::ToString(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value);
}
 ::StringW System::Convert::ToString(int32_t value, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value, provider);
}
 ::StringW System::Convert::ToString(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value);
}
 ::StringW System::Convert::ToString(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value);
}
 uint8_t System::Convert::ToByte(::StringW value, int32_t fromBase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, value, fromBase);
}
 int8_t System::Convert::ToSByte(::StringW value, int32_t fromBase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToSByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int8_t, false>(nullptr, ___internal_method, value, fromBase);
}
 int16_t System::Convert::ToInt16(::StringW value, int32_t fromBase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int16_t, false>(nullptr, ___internal_method, value, fromBase);
}
 uint16_t System::Convert::ToUInt16(::StringW value, int32_t fromBase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(nullptr, ___internal_method, value, fromBase);
}
 int32_t System::Convert::ToInt32(::StringW value, int32_t fromBase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value, fromBase);
}
 uint32_t System::Convert::ToUInt32(::StringW value, int32_t fromBase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, value, fromBase);
}
 int64_t System::Convert::ToInt64(::StringW value, int32_t fromBase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, value, fromBase);
}
 uint64_t System::Convert::ToUInt64(::StringW value, int32_t fromBase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, value, fromBase);
}
 ::StringW System::Convert::ToString(int32_t value, int32_t toBase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value, toBase);
}
 ::StringW System::Convert::ToString(int64_t value, int32_t toBase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value, toBase);
}
 ::StringW System::Convert::ToBase64String(::ArrayW<uint8_t> inArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBase64String",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, inArray);
}
 ::StringW System::Convert::ToBase64String(::ArrayW<uint8_t> inArray, int32_t offset, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBase64String",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, inArray, offset, length);
}
 ::StringW System::Convert::ToBase64String(::ArrayW<uint8_t> inArray, int32_t offset, int32_t length, System::Base64FormattingOptions options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBase64String",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Base64FormattingOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, inArray, offset, length, options);
}
/// @param options: System::Base64FormattingOptions (default: 0)
 ::StringW System::Convert::ToBase64String(System::ReadOnlySpan_1<uint8_t> bytes, System::Base64FormattingOptions options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBase64String",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Base64FormattingOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, bytes, options);
}
 int32_t System::Convert::ToBase64CharArray(::ArrayW<uint8_t> inArray, int32_t offsetIn, int32_t length, ::ArrayW<char16_t> outArray, int32_t offsetOut)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBase64CharArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, inArray, offsetIn, length, outArray, offsetOut);
}
 int32_t System::Convert::ToBase64CharArray(::ArrayW<uint8_t> inArray, int32_t offsetIn, int32_t length, ::ArrayW<char16_t> outArray, int32_t offsetOut, System::Base64FormattingOptions options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBase64CharArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Base64FormattingOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, inArray, offsetIn, length, outArray, offsetOut, options);
}
 int32_t System::Convert::ConvertToBase64Array(void* outChars, void* inData, int32_t offset, int32_t length, bool insertLineBreaks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ConvertToBase64Array",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, outChars, inData, offset, length, insertLineBreaks);
}
 int32_t System::Convert::ToBase64_CalculateAndValidateOutputLength(int32_t inputLength, bool insertLineBreaks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "ToBase64_CalculateAndValidateOutputLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, inputLength, insertLineBreaks);
}
 ::ArrayW<uint8_t> System::Convert::FromBase64String(::StringW s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "FromBase64String",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, s);
}
 bool System::Convert::TryFromBase64Chars(System::ReadOnlySpan_1<char16_t> chars, System::Span_1<uint8_t> bytes, ByRef<int32_t> bytesWritten)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "TryFromBase64Chars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, chars, bytes, bytesWritten);
}
 void System::Convert::CopyToTempBufferWithoutWhiteSpace(System::ReadOnlySpan_1<char16_t> chars, System::Span_1<char16_t> tempBuffer, ByRef<int32_t> consumed, ByRef<int32_t> charsWritten)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "CopyToTempBufferWithoutWhiteSpace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, chars, tempBuffer, consumed, charsWritten);
}
 bool System::Convert::IsSpace(char16_t c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "IsSpace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, c);
}
 ::ArrayW<uint8_t> System::Convert::FromBase64CharArray(::ArrayW<char16_t> inArray, int32_t offset, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "FromBase64CharArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, inArray, offset, length);
}
 ::ArrayW<uint8_t> System::Convert::FromBase64CharPtr(void* inputPtr, int32_t inputLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "FromBase64CharPtr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, inputPtr, inputLength);
}
 int32_t System::Convert::FromBase64_ComputeResultLength(void* inputPtr, int32_t inputLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Convert>::get(),
                            "FromBase64_ComputeResultLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, inputPtr, inputLength);
}
