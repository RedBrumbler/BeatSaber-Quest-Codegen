#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__CompilationRelaxationsAttribute_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__CompilationRelaxations_def.hpp"
//  Writing Method size for method: System::Runtime::CompilerServices::CompilationRelaxationsAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::CompilationRelaxationsAttribute::*)(int32_t)>(&System::Runtime::CompilerServices::CompilationRelaxationsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23a87f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::CompilationRelaxationsAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::CompilationRelaxationsAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::CompilationRelaxationsAttribute::*)(System::Runtime::CompilerServices::CompilationRelaxations)>(&System::Runtime::CompilerServices::CompilationRelaxationsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23a8820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::CompilationRelaxationsAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::CompilationRelaxations>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::CompilationRelaxationsAttribute.get_CompilationRelaxations
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Runtime::CompilerServices::CompilationRelaxationsAttribute::*)()>(&System::Runtime::CompilerServices::CompilationRelaxationsAttribute::get_CompilationRelaxations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23a8848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::CompilationRelaxationsAttribute>::get(),
                            "get_CompilationRelaxations",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::CompilerServices::CompilationRelaxationsAttribute::__set_m_relaxations(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Runtime::CompilerServices::CompilationRelaxationsAttribute::__get_m_relaxations() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "relaxations", ty: "int32_t", modifiers: "", def_value: None }]
 System::Runtime::CompilerServices::CompilationRelaxationsAttribute::CompilationRelaxationsAttribute(int32_t relaxations)  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<CompilationRelaxationsAttribute>(relaxations))) {}
 void System::Runtime::CompilerServices::CompilationRelaxationsAttribute::_ctor(int32_t relaxations)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::CompilationRelaxationsAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, relaxations);
}
// Ctor Parameters [CppParam { name: "relaxations", ty: "System::Runtime::CompilerServices::CompilationRelaxations", modifiers: "", def_value: None }]
 System::Runtime::CompilerServices::CompilationRelaxationsAttribute::CompilationRelaxationsAttribute(System::Runtime::CompilerServices::CompilationRelaxations relaxations)  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<CompilationRelaxationsAttribute>(relaxations))) {}
 void System::Runtime::CompilerServices::CompilationRelaxationsAttribute::_ctor(System::Runtime::CompilerServices::CompilationRelaxations relaxations)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::CompilationRelaxationsAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::CompilationRelaxations>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, relaxations);
}
 int32_t System::Runtime::CompilerServices::CompilationRelaxationsAttribute::get_CompilationRelaxations()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::CompilationRelaxationsAttribute>::get(),
                            "get_CompilationRelaxations",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
