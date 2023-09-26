#pragma once
#include "System/Security/Util/zzzz__Parser_def.hpp"
#include "System/Security/zzzz__SecurityElement_def.hpp"
#include "System/Security/Util/zzzz__TokenizerStream_def.hpp"
#include "System/Security/zzzz__SecurityDocument_def.hpp"
#include "System/Security/Util/zzzz__Tokenizer_def.hpp"
//  Writing Method size for method: System::Security::Util::Parser.GetTopElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::SecurityElement (System::Security::Util::Parser::*)()>(&System::Security::Util::Parser::GetTopElement)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2321464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::Parser>::get(),
                            "GetTopElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Util::Parser.GetRequiredSizes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Util::Parser::*)(System::Security::Util::TokenizerStream, ByRef<int32_t>)>(&System::Security::Util::Parser::GetRequiredSizes)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x232148c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::Parser>::get(),
                            "GetRequiredSizes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Util::TokenizerStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Util::Parser.DetermineFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Security::Util::Parser::*)(System::Security::Util::TokenizerStream)>(&System::Security::Util::Parser::DetermineFormat)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x23219e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::Parser>::get(),
                            "DetermineFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Util::TokenizerStream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Util::Parser.ParseContents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Util::Parser::*)()>(&System::Security::Util::Parser::ParseContents)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x23225f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::Parser>::get(),
                            "ParseContents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Util::Parser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Util::Parser::*)(System::Security::Util::Tokenizer)>(&System::Security::Util::Parser::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2322a34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::Parser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Util::Tokenizer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Util::Parser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Util::Parser::*)(::StringW)>(&System::Security::Util::Parser::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2322ad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::Parser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Security::Util::Parser::__set__doc(System::Security::SecurityDocument value)  {
::cordl_internals::setInstanceField<System::Security::SecurityDocument, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::SecurityDocument>(value));
}
constexpr System::Security::SecurityDocument System::Security::Util::Parser::__get__doc() const {
return ::cordl_internals::getInstanceField<System::Security::SecurityDocument, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Util::Parser::__set__t(System::Security::Util::Tokenizer value)  {
::cordl_internals::setInstanceField<System::Security::Util::Tokenizer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Util::Tokenizer>(value));
}
constexpr System::Security::Util::Tokenizer System::Security::Util::Parser::__get__t() const {
return ::cordl_internals::getInstanceField<System::Security::Util::Tokenizer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Security::SecurityElement System::Security::Util::Parser::GetTopElement()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::Parser>::get(),
                            "GetTopElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::SecurityElement, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Security::Util::Parser::GetRequiredSizes(System::Security::Util::TokenizerStream stream, ByRef<int32_t> index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::Parser>::get(),
                            "GetRequiredSizes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Util::TokenizerStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, stream, index);
}
 int32_t System::Security::Util::Parser::DetermineFormat(System::Security::Util::TokenizerStream stream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::Parser>::get(),
                            "DetermineFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Util::TokenizerStream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, stream);
}
 void System::Security::Util::Parser::ParseContents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::Parser>::get(),
                            "ParseContents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "t", ty: "System::Security::Util::Tokenizer", modifiers: "", def_value: None }]
 System::Security::Util::Parser::Parser(System::Security::Util::Tokenizer t)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Parser>(t))) {}
 void System::Security::Util::Parser::_ctor(System::Security::Util::Tokenizer t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::Parser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Util::Tokenizer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, t);
}
// Ctor Parameters [CppParam { name: "input", ty: "::StringW", modifiers: "", def_value: None }]
 System::Security::Util::Parser::Parser(::StringW input)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Parser>(input))) {}
 void System::Security::Util::Parser::_ctor(::StringW input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::Parser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, input);
}
