#pragma once
#include "System/Diagnostics/Tracing/zzzz__EventSource_impl.hpp"
#include "System/Collections/Concurrent/zzzz__CDSCollectionETWBCLProvider_def.hpp"
//  Writing Method size for method: System::Collections::Concurrent::CDSCollectionETWBCLProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::CDSCollectionETWBCLProvider::*)()>(&System::Collections::Concurrent::CDSCollectionETWBCLProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27df278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::CDSCollectionETWBCLProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::CDSCollectionETWBCLProvider.ConcurrentBag_TryTakeSteals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::CDSCollectionETWBCLProvider::*)()>(&System::Collections::Concurrent::CDSCollectionETWBCLProvider::ConcurrentBag_TryTakeSteals)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x27df280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::CDSCollectionETWBCLProvider>::get(),
                            "ConcurrentBag_TryTakeSteals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::CDSCollectionETWBCLProvider.ConcurrentBag_TryPeekSteals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::CDSCollectionETWBCLProvider::*)()>(&System::Collections::Concurrent::CDSCollectionETWBCLProvider::ConcurrentBag_TryPeekSteals)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x27df2b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::CDSCollectionETWBCLProvider>::get(),
                            "ConcurrentBag_TryPeekSteals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Collections::Concurrent::CDSCollectionETWBCLProvider::__set_Log(System::Collections::Concurrent::CDSCollectionETWBCLProvider value)  {
::cordl_internals::setStaticField<System::Collections::Concurrent::CDSCollectionETWBCLProvider, "Log", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::CDSCollectionETWBCLProvider>::get>(std::forward<System::Collections::Concurrent::CDSCollectionETWBCLProvider>(value));
}
 System::Collections::Concurrent::CDSCollectionETWBCLProvider System::Collections::Concurrent::CDSCollectionETWBCLProvider::__get_Log()  {
return ::cordl_internals::getStaticField<System::Collections::Concurrent::CDSCollectionETWBCLProvider, "Log", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::CDSCollectionETWBCLProvider>::get>();
}
// Ctor Parameters []
 System::Collections::Concurrent::CDSCollectionETWBCLProvider::CDSCollectionETWBCLProvider()  : System::Diagnostics::Tracing::EventSource(THROW_UNLESS(::il2cpp_utils::New<CDSCollectionETWBCLProvider>())) {}
 void System::Collections::Concurrent::CDSCollectionETWBCLProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::CDSCollectionETWBCLProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Concurrent::CDSCollectionETWBCLProvider::ConcurrentBag_TryTakeSteals()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::CDSCollectionETWBCLProvider>::get(),
                            "ConcurrentBag_TryTakeSteals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Concurrent::CDSCollectionETWBCLProvider::ConcurrentBag_TryPeekSteals()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::CDSCollectionETWBCLProvider>::get(),
                            "ConcurrentBag_TryPeekSteals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
