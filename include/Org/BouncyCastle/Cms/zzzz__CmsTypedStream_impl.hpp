#pragma once
#include "Org/BouncyCastle/Utilities/IO/zzzz__FilterStream_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsTypedStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsTypedStream__FullReaderStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsTypedStream__FullReaderStream::*)(System::IO::Stream)>(&Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsTypedStream__FullReaderStream::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1181c0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsTypedStream__FullReaderStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsTypedStream__FullReaderStream.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsTypedStream__FullReaderStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsTypedStream__FullReaderStream::Read)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1181c24;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsTypedStream__FullReaderStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsTypedStream__FullReaderStream>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "input", ty: "System::IO::Stream", modifiers: "", def_value: None }]
 Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsTypedStream__FullReaderStream::Org__BouncyCastle__Cms__CmsTypedStream__FullReaderStream(System::IO::Stream input)  : Org::BouncyCastle::Utilities::IO::FilterStream(THROW_UNLESS(::il2cpp_utils::New<Org__BouncyCastle__Cms__CmsTypedStream__FullReaderStream>(input))) {}
 void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsTypedStream__FullReaderStream::_ctor(System::IO::Stream input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsTypedStream__FullReaderStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, input);
}
 int32_t Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsTypedStream__FullReaderStream::Read(::ArrayW<uint8_t> buf, int32_t off, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsTypedStream__FullReaderStream>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buf, off, len);
}
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsTypedStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsTypedStream::*)(System::IO::Stream)>(&Org::BouncyCastle::Cms::CmsTypedStream::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1181ac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsTypedStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsTypedStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsTypedStream::*)(::StringW, System::IO::Stream)>(&Org::BouncyCastle::Cms::CmsTypedStream::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x116fd68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsTypedStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsTypedStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsTypedStream::*)(::StringW, System::IO::Stream, int32_t)>(&Org::BouncyCastle::Cms::CmsTypedStream::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1181b48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsTypedStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsTypedStream.get_ContentType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Cms::CmsTypedStream::*)()>(&Org::BouncyCastle::Cms::CmsTypedStream::get_ContentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1181c14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsTypedStream>::get(),
                            "get_ContentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsTypedStream.get_ContentStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream (Org::BouncyCastle::Cms::CmsTypedStream::*)()>(&Org::BouncyCastle::Cms::CmsTypedStream::get_ContentStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1181c1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsTypedStream>::get(),
                            "get_ContentStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsTypedStream.Drain
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsTypedStream::*)()>(&Org::BouncyCastle::Cms::CmsTypedStream::Drain)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x116fd70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsTypedStream>::get(),
                            "Drain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Cms::CmsTypedStream::__set__oid(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Org::BouncyCastle::Cms::CmsTypedStream::__get__oid() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::CmsTypedStream::__set__in(System::IO::Stream value)  {
::cordl_internals::setInstanceField<System::IO::Stream, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::Stream>(value));
}
constexpr System::IO::Stream Org::BouncyCastle::Cms::CmsTypedStream::__get__in() const {
return ::cordl_internals::getInstanceField<System::IO::Stream, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "inStream", ty: "System::IO::Stream", modifiers: "", def_value: None }]
 Org::BouncyCastle::Cms::CmsTypedStream::CmsTypedStream(System::IO::Stream inStream)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CmsTypedStream>(inStream))) {}
 void Org::BouncyCastle::Cms::CmsTypedStream::_ctor(System::IO::Stream inStream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsTypedStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inStream);
}
// Ctor Parameters [CppParam { name: "oid", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "inStream", ty: "System::IO::Stream", modifiers: "", def_value: None }]
 Org::BouncyCastle::Cms::CmsTypedStream::CmsTypedStream(::StringW oid, System::IO::Stream inStream)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CmsTypedStream>(oid, inStream))) {}
 void Org::BouncyCastle::Cms::CmsTypedStream::_ctor(::StringW oid, System::IO::Stream inStream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsTypedStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, oid, inStream);
}
// Ctor Parameters [CppParam { name: "oid", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "inStream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "bufSize", ty: "int32_t", modifiers: "", def_value: None }]
 Org::BouncyCastle::Cms::CmsTypedStream::CmsTypedStream(::StringW oid, System::IO::Stream inStream, int32_t bufSize)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CmsTypedStream>(oid, inStream, bufSize))) {}
 void Org::BouncyCastle::Cms::CmsTypedStream::_ctor(::StringW oid, System::IO::Stream inStream, int32_t bufSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsTypedStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, oid, inStream, bufSize);
}
 ::StringW Org::BouncyCastle::Cms::CmsTypedStream::get_ContentType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsTypedStream>::get(),
                            "get_ContentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IO::Stream Org::BouncyCastle::Cms::CmsTypedStream::get_ContentStream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsTypedStream>::get(),
                            "get_ContentStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Cms::CmsTypedStream::Drain()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsTypedStream>::get(),
                            "Drain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
