#pragma once
#include "UnityEngine/InputSystem/LowLevel/zzzz__SelectObservable_2_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IObservable_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select::*)(UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult>, System::IObserver_1<TResult>)>(&UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IObserver_1<TResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select.OnCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select::*)()>(&UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select::OnCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select>::get(),
                            "OnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select.OnError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select::*)(System::Exception)>(&UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select::OnError)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select>::get(),
                            "OnError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select.OnNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select::*)(TSource)>(&UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select::OnNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select>::get(),
                            "OnNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSource>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IObserver_1<TSource>
constexpr  UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select::operator System::IObserver_1<TSource>() const noexcept {
return System::IObserver_1<TSource>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select::__set_m_Observable(UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult> value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult>>(value));
}
constexpr UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult> UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select::__get_m_Observable() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select::__set_m_Observer(System::IObserver_1<TResult> value)  {
::cordl_internals::setInstanceField<System::IObserver_1<TResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IObserver_1<TResult>>(value));
}
constexpr System::IObserver_1<TResult> UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select::__get_m_Observer() const {
return ::cordl_internals::getInstanceField<System::IObserver_1<TResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "observable", ty: "UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult>", modifiers: "", def_value: None }, CppParam { name: "observer", ty: "System::IObserver_1<TResult>", modifiers: "", def_value: None }]
 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select(UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult> observable, System::IObserver_1<TResult> observer)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select>(observable, observer))) {}
 void UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select::_ctor(UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult> observable, System::IObserver_1<TResult> observer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IObserver_1<TResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, observable, observer);
}
 void UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select::OnCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select>::get(),
                            "OnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select::OnError(System::Exception error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select>::get(),
                            "OnError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, error);
}
 void UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select::OnNext(TSource evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select>::get(),
                            "OnNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSource>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select::*)(UnityEngine::InputSystem::LowLevel::SelectObservable_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>, System::IObserver_1<TResult>)>(&UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::SelectObservable_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IObserver_1<TResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select.OnCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select::*)()>(&UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select::OnCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select>::get(),
                            "OnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select.OnError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select::*)(System::Exception)>(&UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select::OnError)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select>::get(),
                            "OnError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select.OnNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select::*)(UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select::OnNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select>::get(),
                            "OnNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IObserver_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>
constexpr  UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select::operator System::IObserver_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>() const noexcept {
return System::IObserver_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select::__set_m_Observable(UnityEngine::InputSystem::LowLevel::SelectObservable_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult> value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::LowLevel::SelectObservable_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::LowLevel::SelectObservable_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>>(value));
}
constexpr UnityEngine::InputSystem::LowLevel::SelectObservable_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult> UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select::__get_m_Observable() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::LowLevel::SelectObservable_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select::__set_m_Observer(System::IObserver_1<TResult> value)  {
::cordl_internals::setInstanceField<System::IObserver_1<TResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IObserver_1<TResult>>(value));
}
constexpr System::IObserver_1<TResult> UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select::__get_m_Observer() const {
return ::cordl_internals::getInstanceField<System::IObserver_1<TResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "observable", ty: "UnityEngine::InputSystem::LowLevel::SelectObservable_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>", modifiers: "", def_value: None }, CppParam { name: "observer", ty: "System::IObserver_1<TResult>", modifiers: "", def_value: None }]
 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select(UnityEngine::InputSystem::LowLevel::SelectObservable_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult> observable, System::IObserver_1<TResult> observer)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select>(observable, observer))) {}
 void UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select::_ctor(UnityEngine::InputSystem::LowLevel::SelectObservable_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult> observable, System::IObserver_1<TResult> observer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::SelectObservable_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IObserver_1<TResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, observable, observer);
}
 void UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select::OnCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select>::get(),
                            "OnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select::OnError(System::Exception error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select>::get(),
                            "OnError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, error);
}
 void UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select::OnNext(UnityEngine::InputSystem::LowLevel::InputEventPtr evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__SelectObservable_2__Select>::get(),
                            "OnNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::SelectObservable_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::SelectObservable_2::*)(System::IObservable_1<TSource>, System::Func_2<TSource,TResult>)>(&UnityEngine::InputSystem::LowLevel::SelectObservable_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::SelectObservable_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IObservable_1<TSource>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<TSource,TResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::SelectObservable_2.Subscribe
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IDisposable (UnityEngine::InputSystem::LowLevel::SelectObservable_2::*)(System::IObserver_1<TResult>)>(&UnityEngine::InputSystem::LowLevel::SelectObservable_2::Subscribe)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::SelectObservable_2>::get(),
                            "Subscribe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IObserver_1<TResult>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IObservable_1<TResult>
constexpr  UnityEngine::InputSystem::LowLevel::SelectObservable_2::operator System::IObservable_1<TResult>() const noexcept {
return System::IObservable_1<TResult>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::SelectObservable_2::__set_m_Source(System::IObservable_1<TSource> value)  {
::cordl_internals::setInstanceField<System::IObservable_1<TSource>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IObservable_1<TSource>>(value));
}
constexpr System::IObservable_1<TSource> UnityEngine::InputSystem::LowLevel::SelectObservable_2::__get_m_Source() const {
return ::cordl_internals::getInstanceField<System::IObservable_1<TSource>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::SelectObservable_2::__set_m_Filter(System::Func_2<TSource,TResult> value)  {
::cordl_internals::setInstanceField<System::Func_2<TSource,TResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<TSource,TResult>>(value));
}
constexpr System::Func_2<TSource,TResult> UnityEngine::InputSystem::LowLevel::SelectObservable_2::__get_m_Filter() const {
return ::cordl_internals::getInstanceField<System::Func_2<TSource,TResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "source", ty: "System::IObservable_1<TSource>", modifiers: "", def_value: None }, CppParam { name: "filter", ty: "System::Func_2<TSource,TResult>", modifiers: "", def_value: None }]
 UnityEngine::InputSystem::LowLevel::SelectObservable_2::SelectObservable_2(System::IObservable_1<TSource> source, System::Func_2<TSource,TResult> filter)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SelectObservable_2>(source, filter))) {}
 void UnityEngine::InputSystem::LowLevel::SelectObservable_2::_ctor(System::IObservable_1<TSource> source, System::Func_2<TSource,TResult> filter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::SelectObservable_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IObservable_1<TSource>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<TSource,TResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, source, filter);
}
 System::IDisposable UnityEngine::InputSystem::LowLevel::SelectObservable_2::Subscribe(System::IObserver_1<TResult> observer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::SelectObservable_2>::get(),
                            "Subscribe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IObserver_1<TResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IDisposable, false>(const_cast<void*>(instance), ___internal_method, observer);
}
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::SelectObservable_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::SelectObservable_2::*)(System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>, System::Func_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>)>(&UnityEngine::InputSystem::LowLevel::SelectObservable_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::SelectObservable_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::SelectObservable_2.Subscribe
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IDisposable (UnityEngine::InputSystem::LowLevel::SelectObservable_2::*)(System::IObserver_1<TResult>)>(&UnityEngine::InputSystem::LowLevel::SelectObservable_2::Subscribe)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::SelectObservable_2>::get(),
                            "Subscribe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IObserver_1<TResult>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IObservable_1<TResult>
constexpr  UnityEngine::InputSystem::LowLevel::SelectObservable_2::operator System::IObservable_1<TResult>() const noexcept {
return System::IObservable_1<TResult>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::SelectObservable_2::__set_m_Source(System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> value)  {
::cordl_internals::setInstanceField<System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>>(value));
}
constexpr System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> UnityEngine::InputSystem::LowLevel::SelectObservable_2::__get_m_Source() const {
return ::cordl_internals::getInstanceField<System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::SelectObservable_2::__set_m_Filter(System::Func_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult> value)  {
::cordl_internals::setInstanceField<System::Func_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>>(value));
}
constexpr System::Func_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult> UnityEngine::InputSystem::LowLevel::SelectObservable_2::__get_m_Filter() const {
return ::cordl_internals::getInstanceField<System::Func_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "source", ty: "System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>", modifiers: "", def_value: None }, CppParam { name: "filter", ty: "System::Func_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>", modifiers: "", def_value: None }]
 UnityEngine::InputSystem::LowLevel::SelectObservable_2::SelectObservable_2(System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> source, System::Func_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult> filter)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SelectObservable_2>(source, filter))) {}
 void UnityEngine::InputSystem::LowLevel::SelectObservable_2::_ctor(System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> source, System::Func_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult> filter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::SelectObservable_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, source, filter);
}
 System::IDisposable UnityEngine::InputSystem::LowLevel::SelectObservable_2::Subscribe(System::IObserver_1<TResult> observer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::SelectObservable_2>::get(),
                            "Subscribe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IObserver_1<TResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IDisposable, false>(const_cast<void*>(instance), ___internal_method, observer);
}
