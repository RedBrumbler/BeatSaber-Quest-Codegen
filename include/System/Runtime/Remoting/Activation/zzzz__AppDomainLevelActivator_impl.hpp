#pragma once
#include "System/Runtime/Remoting/Activation/zzzz__AppDomainLevelActivator_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionCallMessage_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionReturnMessage_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IActivator_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::Activation::AppDomainLevelActivator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Activation::AppDomainLevelActivator::*)(::StringW, System::Runtime::Remoting::Activation::IActivator)>(&System::Runtime::Remoting::Activation::AppDomainLevelActivator::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23710b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Activation::AppDomainLevelActivator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Activation::IActivator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Activation::AppDomainLevelActivator.get_NextActivator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Activation::IActivator (System::Runtime::Remoting::Activation::AppDomainLevelActivator::*)()>(&System::Runtime::Remoting::Activation::AppDomainLevelActivator::get_NextActivator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2371654;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Activation::AppDomainLevelActivator>::get(),
                            "get_NextActivator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Activation::AppDomainLevelActivator.Activate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Activation::IConstructionReturnMessage (System::Runtime::Remoting::Activation::AppDomainLevelActivator::*)(System::Runtime::Remoting::Activation::IConstructionCallMessage)>(&System::Runtime::Remoting::Activation::AppDomainLevelActivator::Activate)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x237165c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Activation::AppDomainLevelActivator>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Activation::IConstructionCallMessage>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::Remoting::Activation::IActivator
constexpr  System::Runtime::Remoting::Activation::AppDomainLevelActivator::operator System::Runtime::Remoting::Activation::IActivator() const noexcept {
return System::Runtime::Remoting::Activation::IActivator(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::Activation::AppDomainLevelActivator::__set__activationUrl(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Runtime::Remoting::Activation::AppDomainLevelActivator::__get__activationUrl() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::Activation::AppDomainLevelActivator::__set__next(System::Runtime::Remoting::Activation::IActivator value)  {
::cordl_internals::setInstanceField<System::Runtime::Remoting::Activation::IActivator, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Remoting::Activation::IActivator>(value));
}
constexpr System::Runtime::Remoting::Activation::IActivator System::Runtime::Remoting::Activation::AppDomainLevelActivator::__get__next() const {
return ::cordl_internals::getInstanceField<System::Runtime::Remoting::Activation::IActivator, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "activationUrl", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "next", ty: "System::Runtime::Remoting::Activation::IActivator", modifiers: "", def_value: None }]
 System::Runtime::Remoting::Activation::AppDomainLevelActivator::AppDomainLevelActivator(::StringW activationUrl, System::Runtime::Remoting::Activation::IActivator next)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<AppDomainLevelActivator>(activationUrl, next))) {}
 void System::Runtime::Remoting::Activation::AppDomainLevelActivator::_ctor(::StringW activationUrl, System::Runtime::Remoting::Activation::IActivator next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Activation::AppDomainLevelActivator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Activation::IActivator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, activationUrl, next);
}
 System::Runtime::Remoting::Activation::IActivator System::Runtime::Remoting::Activation::AppDomainLevelActivator::get_NextActivator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Activation::AppDomainLevelActivator>::get(),
                            "get_NextActivator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Activation::IActivator, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Runtime::Remoting::Activation::IConstructionReturnMessage System::Runtime::Remoting::Activation::AppDomainLevelActivator::Activate(System::Runtime::Remoting::Activation::IConstructionCallMessage ctorCall)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Activation::AppDomainLevelActivator>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Activation::IConstructionCallMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Activation::IConstructionReturnMessage, false>(const_cast<void*>(instance), ___internal_method, ctorCall);
}
