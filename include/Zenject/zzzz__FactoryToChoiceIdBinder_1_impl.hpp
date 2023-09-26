#pragma once
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_1_impl.hpp"
#include "Zenject/zzzz__FactoryToChoiceIdBinder_1_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_1_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: Zenject::FactoryToChoiceIdBinder_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::FactoryToChoiceIdBinder_1::*)(Zenject::DiContainer, Zenject::BindInfo, Zenject::FactoryBindInfo)>(&Zenject::FactoryToChoiceIdBinder_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryToChoiceIdBinder_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::FactoryBindInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::FactoryToChoiceIdBinder_1.WithId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::FactoryArgumentsToChoiceBinder_1<TContract> (Zenject::FactoryToChoiceIdBinder_1::*)(::bs_hook::Il2CppWrapperType)>(&Zenject::FactoryToChoiceIdBinder_1::WithId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryToChoiceIdBinder_1>::get(),
                            "WithId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "factoryBindInfo", ty: "Zenject::FactoryBindInfo", modifiers: "", def_value: None }]
 Zenject::FactoryToChoiceIdBinder_1::FactoryToChoiceIdBinder_1(Zenject::DiContainer container, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo)  : Zenject::FactoryArgumentsToChoiceBinder_1<TContract>(THROW_UNLESS(::il2cpp_utils::New<FactoryToChoiceIdBinder_1>(container, bindInfo, factoryBindInfo))) {}
 void Zenject::FactoryToChoiceIdBinder_1::_ctor(Zenject::DiContainer container, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryToChoiceIdBinder_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::FactoryBindInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container, bindInfo, factoryBindInfo);
}
 Zenject::FactoryArgumentsToChoiceBinder_1<TContract> Zenject::FactoryToChoiceIdBinder_1::WithId(::bs_hook::Il2CppWrapperType identifier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryToChoiceIdBinder_1>::get(),
                            "WithId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::FactoryArgumentsToChoiceBinder_1<TContract>, false>(const_cast<void*>(instance), ___internal_method, identifier);
}
