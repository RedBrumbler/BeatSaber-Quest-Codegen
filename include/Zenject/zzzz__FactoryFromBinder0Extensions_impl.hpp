#pragma once
#include "Zenject/zzzz__FactoryFromBinder0Extensions_def.hpp"
#include "Zenject/zzzz__FactoryFromBinder_1_def.hpp"
#include "Zenject/zzzz__IFactory_1_def.hpp"
#include "Zenject/zzzz__ConcreteBinderGeneric_1_def.hpp"
#include "Zenject/zzzz__MemoryPoolInitialSizeMaxSizeBinder_1_def.hpp"
#include "Zenject/zzzz__ArgConditionCopyNonLazyBinder_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
template<typename TContract,typename TMemoryPool>
 Zenject::ArgConditionCopyNonLazyBinder Zenject::FactoryFromBinder0Extensions::FromPoolableMemoryPool(Zenject::FactoryFromBinder_1<TContract> fromBinder, System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> poolBindGenerator)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryFromBinder0Extensions>::get(),
                        "FromPoolableMemoryPool",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMemoryPool>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::FactoryFromBinder_1<TContract>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMemoryPool>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::ArgConditionCopyNonLazyBinder, false>(nullptr, ___internal_method, fromBinder, poolBindGenerator);
}
template<typename TContract>
 Zenject::ArgConditionCopyNonLazyBinder Zenject::FactoryFromBinder0Extensions::FromPoolableMemoryPool(Zenject::FactoryFromBinder_1<TContract> fromBinder)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryFromBinder0Extensions>::get(),
                        "FromPoolableMemoryPool",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::FactoryFromBinder_1<TContract>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::ArgConditionCopyNonLazyBinder, false>(nullptr, ___internal_method, fromBinder);
}
template<typename TContract>
 Zenject::ArgConditionCopyNonLazyBinder Zenject::FactoryFromBinder0Extensions::FromPoolableMemoryPool(Zenject::FactoryFromBinder_1<TContract> fromBinder, System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> poolBindGenerator)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryFromBinder0Extensions>::get(),
                        "FromPoolableMemoryPool",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::FactoryFromBinder_1<TContract>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::ArgConditionCopyNonLazyBinder, false>(nullptr, ___internal_method, fromBinder, poolBindGenerator);
}
template<typename TContract>
 Zenject::ArgConditionCopyNonLazyBinder Zenject::FactoryFromBinder0Extensions::FromMonoPoolableMemoryPool(Zenject::FactoryFromBinder_1<TContract> fromBinder)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryFromBinder0Extensions>::get(),
                        "FromMonoPoolableMemoryPool",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::FactoryFromBinder_1<TContract>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::ArgConditionCopyNonLazyBinder, false>(nullptr, ___internal_method, fromBinder);
}
template<typename TContract>
 Zenject::ArgConditionCopyNonLazyBinder Zenject::FactoryFromBinder0Extensions::FromMonoPoolableMemoryPool(Zenject::FactoryFromBinder_1<TContract> fromBinder, System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> poolBindGenerator)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryFromBinder0Extensions>::get(),
                        "FromMonoPoolableMemoryPool",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::FactoryFromBinder_1<TContract>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::ArgConditionCopyNonLazyBinder, false>(nullptr, ___internal_method, fromBinder, poolBindGenerator);
}
template<typename TContract,typename TMemoryPool>
 Zenject::ArgConditionCopyNonLazyBinder Zenject::FactoryFromBinder0Extensions::FromPoolableMemoryPool(Zenject::FactoryFromBinder_1<TContract> fromBinder)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryFromBinder0Extensions>::get(),
                        "FromPoolableMemoryPool",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMemoryPool>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::FactoryFromBinder_1<TContract>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMemoryPool>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::ArgConditionCopyNonLazyBinder, false>(nullptr, ___internal_method, fromBinder);
}
template<typename TContract>
 Zenject::ArgConditionCopyNonLazyBinder Zenject::FactoryFromBinder0Extensions::FromIFactory(Zenject::FactoryFromBinder_1<TContract> fromBinder, System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<TContract>>> factoryBindGenerator)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryFromBinder0Extensions>::get(),
                        "FromIFactory",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::FactoryFromBinder_1<TContract>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<TContract>>>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::ArgConditionCopyNonLazyBinder, false>(nullptr, ___internal_method, fromBinder, factoryBindGenerator);
}
//  Writing Method size for method: Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2::*)()>(&Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2._FromPoolableMemoryPool_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::IProvider (Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2::*)(Zenject::DiContainer)>(&Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2::_FromPoolableMemoryPool_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2>::get(),
                            "<FromPoolableMemoryPool>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2::__zenCreate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2::__set_poolId(System::Guid value)  {
::cordl_internals::setInstanceField<System::Guid, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Guid>(value));
}
constexpr System::Guid Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2::__get_poolId() const {
return ::cordl_internals::getInstanceField<System::Guid, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2>())) {}
 void Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::IProvider Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2::_FromPoolableMemoryPool_b__0(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2>::get(),
                            "<FromPoolableMemoryPool>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::IProvider, false>(const_cast<void*>(instance), ___internal_method, container);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1::*)()>(&Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1._FromPoolableMemoryPool_b__1_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1::*)(Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>)>(&Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1::_FromPoolableMemoryPool_b__1_0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1>::get(),
                            "<FromPoolableMemoryPool>b__1_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1::__zenCreate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1::__set___9(Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1<TContract> value)  {
::cordl_internals::setStaticField<Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1<TContract>, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1>::get>(std::forward<Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1<TContract>>(value));
}
 Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1<TContract> Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1::__get___9()  {
return ::cordl_internals::getStaticField<Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1<TContract>, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1>::get>();
}
 void Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1::__set___9__1_0(System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> value)  {
::cordl_internals::setStaticField<System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>>, "<>9__1_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1>::get>(std::forward<System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>>>(value));
}
 System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1::__get___9__1_0()  {
return ::cordl_internals::getStaticField<System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>>, "<>9__1_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1>::get>();
}
// Ctor Parameters []
 Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1::Zenject__FactoryFromBinder0Extensions____c__1_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Zenject__FactoryFromBinder0Extensions____c__1_1>())) {}
 void Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1::_FromPoolableMemoryPool_b__1_0(Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1>::get(),
                            "<FromPoolableMemoryPool>b__1_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1::*)()>(&Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1._FromMonoPoolableMemoryPool_b__3_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1::*)(Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>)>(&Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1::_FromMonoPoolableMemoryPool_b__3_0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1>::get(),
                            "<FromMonoPoolableMemoryPool>b__3_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1::__zenCreate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1::__set___9(Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1<TContract> value)  {
::cordl_internals::setStaticField<Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1<TContract>, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1>::get>(std::forward<Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1<TContract>>(value));
}
 Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1<TContract> Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1::__get___9()  {
return ::cordl_internals::getStaticField<Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1<TContract>, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1>::get>();
}
 void Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1::__set___9__3_0(System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> value)  {
::cordl_internals::setStaticField<System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>>, "<>9__3_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1>::get>(std::forward<System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>>>(value));
}
 System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1::__get___9__3_0()  {
return ::cordl_internals::getStaticField<System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>>, "<>9__3_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1>::get>();
}
// Ctor Parameters []
 Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1::Zenject__FactoryFromBinder0Extensions____c__3_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Zenject__FactoryFromBinder0Extensions____c__3_1>())) {}
 void Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1::_FromMonoPoolableMemoryPool_b__3_0(Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1>::get(),
                            "<FromMonoPoolableMemoryPool>b__3_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2::*)()>(&Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2._FromPoolableMemoryPool_b__5_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2::*)(Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>)>(&Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2::_FromPoolableMemoryPool_b__5_0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2>::get(),
                            "<FromPoolableMemoryPool>b__5_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2::__zenCreate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2::__set___9(Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool> value)  {
::cordl_internals::setStaticField<Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool>, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2>::get>(std::forward<Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool>>(value));
}
 Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool> Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2::__get___9()  {
return ::cordl_internals::getStaticField<Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool>, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2>::get>();
}
 void Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2::__set___9__5_0(System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> value)  {
::cordl_internals::setStaticField<System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>>, "<>9__5_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2>::get>(std::forward<System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>>>(value));
}
 System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2::__get___9__5_0()  {
return ::cordl_internals::getStaticField<System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>>, "<>9__5_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2>::get>();
}
// Ctor Parameters []
 Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2::Zenject__FactoryFromBinder0Extensions____c__5_2()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Zenject__FactoryFromBinder0Extensions____c__5_2>())) {}
 void Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2::_FromPoolableMemoryPool_b__5_0(Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2>::get(),
                            "<FromPoolableMemoryPool>b__5_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1::*)()>(&Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1._FromIFactory_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::IProvider (Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1::*)(Zenject::DiContainer)>(&Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1::_FromIFactory_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1>::get(),
                            "<FromIFactory>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1::__zenCreate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1::__set_factoryId(System::Guid value)  {
::cordl_internals::setInstanceField<System::Guid, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Guid>(value));
}
constexpr System::Guid Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1::__get_factoryId() const {
return ::cordl_internals::getInstanceField<System::Guid, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1>())) {}
 void Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::IProvider Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1::_FromIFactory_b__0(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1>::get(),
                            "<FromIFactory>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::IProvider, false>(const_cast<void*>(instance), ___internal_method, container);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
