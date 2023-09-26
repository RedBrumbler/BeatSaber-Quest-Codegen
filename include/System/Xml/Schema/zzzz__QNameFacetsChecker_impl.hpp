#pragma once
#include "System/Xml/Schema/zzzz__FacetsChecker_impl.hpp"
#include "System/Xml/Schema/zzzz__QNameFacetsChecker_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDatatype_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
//  Writing Method size for method: System::Xml::Schema::QNameFacetsChecker.CheckValueFacets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception (System::Xml::Schema::QNameFacetsChecker::*)(::bs_hook::Il2CppWrapperType, System::Xml::Schema::XmlSchemaDatatype)>(&System::Xml::Schema::QNameFacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2762554;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::Schema::QNameFacetsChecker),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::QNameFacetsChecker>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::QNameFacetsChecker.CheckValueFacets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception (System::Xml::Schema::QNameFacetsChecker::*)(System::Xml::XmlQualifiedName, System::Xml::Schema::XmlSchemaDatatype)>(&System::Xml::Schema::QNameFacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x2762680;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::Schema::QNameFacetsChecker),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::QNameFacetsChecker>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::QNameFacetsChecker.MatchEnumeration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::QNameFacetsChecker::*)(::bs_hook::Il2CppWrapperType, System::Collections::ArrayList, System::Xml::Schema::XmlSchemaDatatype)>(&System::Xml::Schema::QNameFacetsChecker::MatchEnumeration)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2762954;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::Schema::QNameFacetsChecker),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::QNameFacetsChecker>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::QNameFacetsChecker.MatchEnumeration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::QNameFacetsChecker::*)(System::Xml::XmlQualifiedName, System::Collections::ArrayList)>(&System::Xml::Schema::QNameFacetsChecker::MatchEnumeration)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2762844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::QNameFacetsChecker>::get(),
                            "MatchEnumeration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlQualifiedName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ArrayList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::QNameFacetsChecker._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::QNameFacetsChecker::*)()>(&System::Xml::Schema::QNameFacetsChecker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2762a68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::QNameFacetsChecker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 System::Exception System::Xml::Schema::QNameFacetsChecker::CheckValueFacets(::bs_hook::Il2CppWrapperType value, System::Xml::Schema::XmlSchemaDatatype datatype)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::QNameFacetsChecker>::get(),
                            "CheckValueFacets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSchemaDatatype>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Exception, false>(const_cast<void*>(instance), ___internal_method, value, datatype);
}
 System::Exception System::Xml::Schema::QNameFacetsChecker::CheckValueFacets(System::Xml::XmlQualifiedName value, System::Xml::Schema::XmlSchemaDatatype datatype)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::QNameFacetsChecker>::get(),
                            "CheckValueFacets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlQualifiedName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSchemaDatatype>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Exception, false>(const_cast<void*>(instance), ___internal_method, value, datatype);
}
 bool System::Xml::Schema::QNameFacetsChecker::MatchEnumeration(::bs_hook::Il2CppWrapperType value, System::Collections::ArrayList enumeration, System::Xml::Schema::XmlSchemaDatatype datatype)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::QNameFacetsChecker>::get(),
                            "MatchEnumeration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ArrayList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSchemaDatatype>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value, enumeration, datatype);
}
 bool System::Xml::Schema::QNameFacetsChecker::MatchEnumeration(System::Xml::XmlQualifiedName value, System::Collections::ArrayList enumeration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::QNameFacetsChecker>::get(),
                            "MatchEnumeration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlQualifiedName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ArrayList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value, enumeration);
}
// Ctor Parameters []
 System::Xml::Schema::QNameFacetsChecker::QNameFacetsChecker()  : System::Xml::Schema::FacetsChecker(THROW_UNLESS(::il2cpp_utils::New<QNameFacetsChecker>())) {}
 void System::Xml::Schema::QNameFacetsChecker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::QNameFacetsChecker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
