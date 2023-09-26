#pragma once
#include "System/Resources/zzzz__ResourceReader_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Resources/zzzz__ResourceLocator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/Resources/zzzz__IResourceReader_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryFormatter_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
#include "System/IO/zzzz__UnmanagedMemoryStream_def.hpp"
#include "System/Resources/zzzz__ResourceTypeCode_def.hpp"
#include "System/Collections/zzzz__DictionaryEntry_def.hpp"
//  Writing Method size for method: System::Resources::System__Resources__ResourceReader__ResourceEnumerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::System__Resources__ResourceReader__ResourceEnumerator::*)(System::Resources::ResourceReader)>(&System::Resources::System__Resources__ResourceReader__ResourceEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x23ab754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::System__Resources__ResourceReader__ResourceEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Resources::ResourceReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::System__Resources__ResourceReader__ResourceEnumerator.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Resources::System__Resources__ResourceReader__ResourceEnumerator::*)()>(&System::Resources::System__Resources__ResourceReader__ResourceEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x23aeac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::System__Resources__ResourceReader__ResourceEnumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::System__Resources__ResourceReader__ResourceEnumerator.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Resources::System__Resources__ResourceReader__ResourceEnumerator::*)()>(&System::Resources::System__Resources__ResourceReader__ResourceEnumerator::get_Key)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x23aeb20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::System__Resources__ResourceReader__ResourceEnumerator>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::System__Resources__ResourceReader__ResourceEnumerator.get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Resources::System__Resources__ResourceReader__ResourceEnumerator::*)()>(&System::Resources::System__Resources__ResourceReader__ResourceEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x23aebd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::System__Resources__ResourceReader__ResourceEnumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::System__Resources__ResourceReader__ResourceEnumerator.get_DataPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Resources::System__Resources__ResourceReader__ResourceEnumerator::*)()>(&System::Resources::System__Resources__ResourceReader__ResourceEnumerator::get_DataPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23aef80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::System__Resources__ResourceReader__ResourceEnumerator>::get(),
                            "get_DataPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::System__Resources__ResourceReader__ResourceEnumerator.get_Entry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::DictionaryEntry (System::Resources::System__Resources__ResourceReader__ResourceEnumerator::*)()>(&System::Resources::System__Resources__ResourceReader__ResourceEnumerator::get_Entry)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x23aec3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::System__Resources__ResourceReader__ResourceEnumerator>::get(),
                            "get_Entry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::System__Resources__ResourceReader__ResourceEnumerator.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Resources::System__Resources__ResourceReader__ResourceEnumerator::*)()>(&System::Resources::System__Resources__ResourceReader__ResourceEnumerator::get_Value)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23aef88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::System__Resources__ResourceReader__ResourceEnumerator>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::System__Resources__ResourceReader__ResourceEnumerator.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::System__Resources__ResourceReader__ResourceEnumerator::*)()>(&System::Resources::System__Resources__ResourceReader__ResourceEnumerator::Reset)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x23af038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::System__Resources__ResourceReader__ResourceEnumerator>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::IDictionaryEnumerator
constexpr  System::Resources::System__Resources__ResourceReader__ResourceEnumerator::operator System::Collections::IDictionaryEnumerator() const noexcept {
return System::Collections::IDictionaryEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  System::Resources::System__Resources__ResourceReader__ResourceEnumerator::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Resources::System__Resources__ResourceReader__ResourceEnumerator::__set__reader(System::Resources::ResourceReader value)  {
::cordl_internals::setInstanceField<System::Resources::ResourceReader, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Resources::ResourceReader>(value));
}
constexpr System::Resources::ResourceReader System::Resources::System__Resources__ResourceReader__ResourceEnumerator::__get__reader() const {
return ::cordl_internals::getInstanceField<System::Resources::ResourceReader, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Resources::System__Resources__ResourceReader__ResourceEnumerator::__set__currentIsValid(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Resources::System__Resources__ResourceReader__ResourceEnumerator::__get__currentIsValid() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Resources::System__Resources__ResourceReader__ResourceEnumerator::__set__currentName(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Resources::System__Resources__ResourceReader__ResourceEnumerator::__get__currentName() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Resources::System__Resources__ResourceReader__ResourceEnumerator::__set__dataPosition(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Resources::System__Resources__ResourceReader__ResourceEnumerator::__get__dataPosition() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "reader", ty: "System::Resources::ResourceReader", modifiers: "", def_value: None }]
 System::Resources::System__Resources__ResourceReader__ResourceEnumerator::System__Resources__ResourceReader__ResourceEnumerator(System::Resources::ResourceReader reader)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Resources__ResourceReader__ResourceEnumerator>(reader))) {}
 void System::Resources::System__Resources__ResourceReader__ResourceEnumerator::_ctor(System::Resources::ResourceReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::System__Resources__ResourceReader__ResourceEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Resources::ResourceReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 bool System::Resources::System__Resources__ResourceReader__ResourceEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::System__Resources__ResourceReader__ResourceEnumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Resources::System__Resources__ResourceReader__ResourceEnumerator::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::System__Resources__ResourceReader__ResourceEnumerator>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Resources::System__Resources__ResourceReader__ResourceEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::System__Resources__ResourceReader__ResourceEnumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Resources::System__Resources__ResourceReader__ResourceEnumerator::get_DataPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::System__Resources__ResourceReader__ResourceEnumerator>::get(),
                            "get_DataPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::DictionaryEntry System::Resources::System__Resources__ResourceReader__ResourceEnumerator::get_Entry()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::System__Resources__ResourceReader__ResourceEnumerator>::get(),
                            "get_Entry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::DictionaryEntry, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Resources::System__Resources__ResourceReader__ResourceEnumerator::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::System__Resources__ResourceReader__ResourceEnumerator>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Resources::System__Resources__ResourceReader__ResourceEnumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::System__Resources__ResourceReader__ResourceEnumerator>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Resources::ResourceReader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::ResourceReader::*)(System::IO::Stream, System::Collections::Generic::Dictionary_2<::StringW,System::Resources::ResourceLocator>)>(&System::Resources::ResourceReader::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x23ab144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<::StringW,System::Resources::ResourceLocator>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::ResourceReader.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::ResourceReader::*)()>(&System::Resources::ResourceReader::Close)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x23ab3a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::ResourceReader.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::ResourceReader::*)()>(&System::Resources::ResourceReader::Dispose)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x23ab420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::ResourceReader.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::ResourceReader::*)(bool)>(&System::Resources::ResourceReader::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x23ab3e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::ResourceReader.ReadUnalignedI4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(void*)>(&System::Resources::ResourceReader::ReadUnalignedI4)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ab45c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "ReadUnalignedI4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::ResourceReader.SkipString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::ResourceReader::*)()>(&System::Resources::ResourceReader::SkipString)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x23ab464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "SkipString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::ResourceReader.GetNameHash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Resources::ResourceReader::*)(int32_t)>(&System::Resources::ResourceReader::GetNameHash)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x23ab51c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "GetNameHash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::ResourceReader.GetNamePosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Resources::ResourceReader::*)(int32_t)>(&System::Resources::ResourceReader::GetNamePosition)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x23ab560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "GetNamePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::ResourceReader.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (System::Resources::ResourceReader::*)()>(&System::Resources::ResourceReader::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23ab680;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::ResourceReader.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IDictionaryEnumerator (System::Resources::ResourceReader::*)()>(&System::Resources::ResourceReader::GetEnumerator)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x23ab684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::ResourceReader.GetEnumeratorInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Resources::System__Resources__ResourceReader__ResourceEnumerator (System::Resources::ResourceReader::*)()>(&System::Resources::ResourceReader::GetEnumeratorInternal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x23ab788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "GetEnumeratorInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::ResourceReader.FindPosForResource
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Resources::ResourceReader::*)(::StringW)>(&System::Resources::ResourceReader::FindPosForResource)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x23ab7f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "FindPosForResource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::ResourceReader.CompareStringEqualsName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Resources::ResourceReader::*)(::StringW)>(&System::Resources::ResourceReader::CompareStringEqualsName)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x23abbcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "CompareStringEqualsName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::ResourceReader.AllocateStringForNameIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Resources::ResourceReader::*)(int32_t, ByRef<int32_t>)>(&System::Resources::ResourceReader::AllocateStringForNameIndex)> {
  constexpr static std::size_t size = 0x8ec;
  constexpr static std::size_t addrs = 0x23abdd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "AllocateStringForNameIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::ResourceReader.GetValueForNameIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Resources::ResourceReader::*)(int32_t)>(&System::Resources::ResourceReader::GetValueForNameIndex)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x23ac6c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "GetValueForNameIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::ResourceReader.LoadString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Resources::ResourceReader::*)(int32_t)>(&System::Resources::ResourceReader::LoadString)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x23acb6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "LoadString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::ResourceReader.LoadObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Resources::ResourceReader::*)(int32_t)>(&System::Resources::ResourceReader::LoadObject)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23ad1e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "LoadObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::ResourceReader.LoadObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Resources::ResourceReader::*)(int32_t, ByRef<System::Resources::ResourceTypeCode>)>(&System::Resources::ResourceReader::LoadObject)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x23ad20c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "LoadObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Resources::ResourceTypeCode>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::ResourceReader.LoadObjectV1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Resources::ResourceReader::*)(int32_t)>(&System::Resources::ResourceReader::LoadObjectV1)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x23ac96c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "LoadObjectV1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::ResourceReader._LoadObjectV1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Resources::ResourceReader::*)(int32_t)>(&System::Resources::ResourceReader::_LoadObjectV1)> {
  constexpr static std::size_t size = 0x838;
  constexpr static std::size_t addrs = 0x23ad2a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "_LoadObjectV1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::ResourceReader.LoadObjectV2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Resources::ResourceReader::*)(int32_t, ByRef<System::Resources::ResourceTypeCode>)>(&System::Resources::ResourceReader::LoadObjectV2)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x23aca6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "LoadObjectV2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Resources::ResourceTypeCode>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::ResourceReader._LoadObjectV2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Resources::ResourceReader::*)(int32_t, ByRef<System::Resources::ResourceTypeCode>)>(&System::Resources::ResourceReader::_LoadObjectV2)> {
  constexpr static std::size_t size = 0x738;
  constexpr static std::size_t addrs = 0x23adcb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "_LoadObjectV2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Resources::ResourceTypeCode>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::ResourceReader.DeserializeObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Resources::ResourceReader::*)(int32_t)>(&System::Resources::ResourceReader::DeserializeObject)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x23adadc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "DeserializeObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::ResourceReader.ReadResources
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::ResourceReader::*)()>(&System::Resources::ResourceReader::ReadResources)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x23ab230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "ReadResources",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::ResourceReader._ReadResources
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::ResourceReader::*)()>(&System::Resources::ResourceReader::_ReadResources)> {
  constexpr static std::size_t size = 0x6d8;
  constexpr static std::size_t addrs = 0x23ae3ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "_ReadResources",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::ResourceReader.FindType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::RuntimeType (System::Resources::ResourceReader::*)(int32_t)>(&System::Resources::ResourceReader::FindType)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x23ace1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "FindType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Resources::IResourceReader
constexpr  System::Resources::ResourceReader::operator System::Resources::IResourceReader() const noexcept {
return System::Resources::IResourceReader(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  System::Resources::ResourceReader::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  System::Resources::ResourceReader::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Resources::ResourceReader::__set__store(System::IO::BinaryReader value)  {
::cordl_internals::setInstanceField<System::IO::BinaryReader, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::BinaryReader>(value));
}
constexpr System::IO::BinaryReader System::Resources::ResourceReader::__get__store() const {
return ::cordl_internals::getInstanceField<System::IO::BinaryReader, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Resources::ResourceReader::__set__resCache(System::Collections::Generic::Dictionary_2<::StringW,System::Resources::ResourceLocator> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<::StringW,System::Resources::ResourceLocator>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<::StringW,System::Resources::ResourceLocator>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<::StringW,System::Resources::ResourceLocator> System::Resources::ResourceReader::__get__resCache() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<::StringW,System::Resources::ResourceLocator>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Resources::ResourceReader::__set__nameSectionOffset(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t System::Resources::ResourceReader::__get__nameSectionOffset() const {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Resources::ResourceReader::__set__dataSectionOffset(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t System::Resources::ResourceReader::__get__dataSectionOffset() const {
return ::cordl_internals::getInstanceField<int64_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Resources::ResourceReader::__set__nameHashes(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> System::Resources::ResourceReader::__get__nameHashes() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Resources::ResourceReader::__set__nameHashesPtr(void* value)  {
::cordl_internals::setInstanceField<void*, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<void*>(value));
}
constexpr void* System::Resources::ResourceReader::__get__nameHashesPtr() const {
return ::cordl_internals::getInstanceField<void*, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Resources::ResourceReader::__set__namePositions(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> System::Resources::ResourceReader::__get__namePositions() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Resources::ResourceReader::__set__namePositionsPtr(void* value)  {
::cordl_internals::setInstanceField<void*, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<void*>(value));
}
constexpr void* System::Resources::ResourceReader::__get__namePositionsPtr() const {
return ::cordl_internals::getInstanceField<void*, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Resources::ResourceReader::__set__typeTable(::ArrayW<System::RuntimeType> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::RuntimeType>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::RuntimeType>>(value));
}
constexpr ::ArrayW<System::RuntimeType> System::Resources::ResourceReader::__get__typeTable() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::RuntimeType>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Resources::ResourceReader::__set__typeNamePositions(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> System::Resources::ResourceReader::__get__typeNamePositions() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Resources::ResourceReader::__set__objFormatter(System::Runtime::Serialization::Formatters::Binary::BinaryFormatter value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::Formatters::Binary::BinaryFormatter, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::Formatters::Binary::BinaryFormatter>(value));
}
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryFormatter System::Resources::ResourceReader::__get__objFormatter() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::Formatters::Binary::BinaryFormatter, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Resources::ResourceReader::__set__numResources(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Resources::ResourceReader::__get__numResources() const {
return ::cordl_internals::getInstanceField<int32_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Resources::ResourceReader::__set__ums(System::IO::UnmanagedMemoryStream value)  {
::cordl_internals::setInstanceField<System::IO::UnmanagedMemoryStream, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::UnmanagedMemoryStream>(value));
}
constexpr System::IO::UnmanagedMemoryStream System::Resources::ResourceReader::__get__ums() const {
return ::cordl_internals::getInstanceField<System::IO::UnmanagedMemoryStream, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Resources::ResourceReader::__set__version(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Resources::ResourceReader::__get__version() const {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "stream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "resCache", ty: "System::Collections::Generic::Dictionary_2<::StringW,System::Resources::ResourceLocator>", modifiers: "", def_value: None }]
 System::Resources::ResourceReader::ResourceReader(System::IO::Stream stream, System::Collections::Generic::Dictionary_2<::StringW,System::Resources::ResourceLocator> resCache)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ResourceReader>(stream, resCache))) {}
 void System::Resources::ResourceReader::_ctor(System::IO::Stream stream, System::Collections::Generic::Dictionary_2<::StringW,System::Resources::ResourceLocator> resCache)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<::StringW,System::Resources::ResourceLocator>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, stream, resCache);
}
 void System::Resources::ResourceReader::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Resources::ResourceReader::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Resources::ResourceReader::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 int32_t System::Resources::ResourceReader::ReadUnalignedI4(void* p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "ReadUnalignedI4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, p);
}
 void System::Resources::ResourceReader::SkipString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "SkipString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Resources::ResourceReader::GetNameHash(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "GetNameHash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, index);
}
 int32_t System::Resources::ResourceReader::GetNamePosition(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "GetNamePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, index);
}
 System::Collections::IEnumerator System::Resources::ResourceReader::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IDictionaryEnumerator System::Resources::ResourceReader::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IDictionaryEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Resources::System__Resources__ResourceReader__ResourceEnumerator System::Resources::ResourceReader::GetEnumeratorInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "GetEnumeratorInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Resources::System__Resources__ResourceReader__ResourceEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Resources::ResourceReader::FindPosForResource(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "FindPosForResource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, name);
}
 bool System::Resources::ResourceReader::CompareStringEqualsName(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "CompareStringEqualsName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, name);
}
 ::StringW System::Resources::ResourceReader::AllocateStringForNameIndex(int32_t index, ByRef<int32_t> dataOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "AllocateStringForNameIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, index, dataOffset);
}
 ::bs_hook::Il2CppWrapperType System::Resources::ResourceReader::GetValueForNameIndex(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "GetValueForNameIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, index);
}
 ::StringW System::Resources::ResourceReader::LoadString(int32_t pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "LoadString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, pos);
}
 ::bs_hook::Il2CppWrapperType System::Resources::ResourceReader::LoadObject(int32_t pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "LoadObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, pos);
}
 ::bs_hook::Il2CppWrapperType System::Resources::ResourceReader::LoadObject(int32_t pos, ByRef<System::Resources::ResourceTypeCode> typeCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "LoadObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Resources::ResourceTypeCode>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, pos, typeCode);
}
 ::bs_hook::Il2CppWrapperType System::Resources::ResourceReader::LoadObjectV1(int32_t pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "LoadObjectV1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, pos);
}
 ::bs_hook::Il2CppWrapperType System::Resources::ResourceReader::_LoadObjectV1(int32_t pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "_LoadObjectV1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, pos);
}
 ::bs_hook::Il2CppWrapperType System::Resources::ResourceReader::LoadObjectV2(int32_t pos, ByRef<System::Resources::ResourceTypeCode> typeCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "LoadObjectV2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Resources::ResourceTypeCode>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, pos, typeCode);
}
 ::bs_hook::Il2CppWrapperType System::Resources::ResourceReader::_LoadObjectV2(int32_t pos, ByRef<System::Resources::ResourceTypeCode> typeCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "_LoadObjectV2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Resources::ResourceTypeCode>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, pos, typeCode);
}
 ::bs_hook::Il2CppWrapperType System::Resources::ResourceReader::DeserializeObject(int32_t typeIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "DeserializeObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, typeIndex);
}
 void System::Resources::ResourceReader::ReadResources()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "ReadResources",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Resources::ResourceReader::_ReadResources()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "_ReadResources",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::RuntimeType System::Resources::ResourceReader::FindType(int32_t typeIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceReader>::get(),
                            "FindType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::RuntimeType, false>(const_cast<void*>(instance), ___internal_method, typeIndex);
}
