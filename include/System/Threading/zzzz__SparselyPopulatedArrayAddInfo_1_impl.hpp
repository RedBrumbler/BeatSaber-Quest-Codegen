#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Threading/zzzz__SparselyPopulatedArrayAddInfo_1_def.hpp"
#include "System/Threading/zzzz__SparselyPopulatedArrayFragment_1_def.hpp"
//  Writing Method size for method: System::Threading::SparselyPopulatedArrayAddInfo_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::SparselyPopulatedArrayAddInfo_1::*)(System::Threading::SparselyPopulatedArrayFragment_1<T>, int32_t)>(&System::Threading::SparselyPopulatedArrayAddInfo_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::SparselyPopulatedArrayAddInfo_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::SparselyPopulatedArrayFragment_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::SparselyPopulatedArrayAddInfo_1.get_Source
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::SparselyPopulatedArrayFragment_1<T> (System::Threading::SparselyPopulatedArrayAddInfo_1::*)()>(&System::Threading::SparselyPopulatedArrayAddInfo_1::get_Source)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::SparselyPopulatedArrayAddInfo_1>::get(),
                            "get_Source",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::SparselyPopulatedArrayAddInfo_1.get_Index
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Threading::SparselyPopulatedArrayAddInfo_1::*)()>(&System::Threading::SparselyPopulatedArrayAddInfo_1::get_Index)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::SparselyPopulatedArrayAddInfo_1>::get(),
                            "get_Index",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "_source", ty: "System::Threading::SparselyPopulatedArrayFragment_1<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Threading::SparselyPopulatedArrayAddInfo_1::SparselyPopulatedArrayAddInfo_1(System::Threading::SparselyPopulatedArrayFragment_1<T> _source, int32_t _index) noexcept : ::bs_hook::ValueTypeWrapper() {this->_source = _source;
this->_index = _index;
}
constexpr void System::Threading::SparselyPopulatedArrayAddInfo_1::__set__source(System::Threading::SparselyPopulatedArrayFragment_1<T> value)  {
::cordl_internals::setInstanceField<System::Threading::SparselyPopulatedArrayFragment_1<T>, 0x0>(this->__instance, std::forward<System::Threading::SparselyPopulatedArrayFragment_1<T>>(value));
}
constexpr System::Threading::SparselyPopulatedArrayFragment_1<T> System::Threading::SparselyPopulatedArrayAddInfo_1::__get__source() const {
return ::cordl_internals::getInstanceField<System::Threading::SparselyPopulatedArrayFragment_1<T>, 0x0>(this->__instance);
}
constexpr void System::Threading::SparselyPopulatedArrayAddInfo_1::__set__index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Threading::SparselyPopulatedArrayAddInfo_1::__get__index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
 void System::Threading::SparselyPopulatedArrayAddInfo_1::_ctor(System::Threading::SparselyPopulatedArrayFragment_1<T> source, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::SparselyPopulatedArrayAddInfo_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::SparselyPopulatedArrayFragment_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, source, index);
}
 System::Threading::SparselyPopulatedArrayFragment_1<T> System::Threading::SparselyPopulatedArrayAddInfo_1::get_Source()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::SparselyPopulatedArrayAddInfo_1>::get(),
                            "get_Source",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::SparselyPopulatedArrayFragment_1<T>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::Threading::SparselyPopulatedArrayAddInfo_1::get_Index()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::SparselyPopulatedArrayAddInfo_1>::get(),
                            "get_Index",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
