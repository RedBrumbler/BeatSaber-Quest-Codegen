#pragma once
#include "Oculus/Platform/Models/zzzz__MatchmakingEnqueuedUser_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
//  Writing Method size for method: Oculus::Platform::Models::MatchmakingEnqueuedUser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Models::MatchmakingEnqueuedUser::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::Models::MatchmakingEnqueuedUser::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x25d0838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::MatchmakingEnqueuedUser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::MatchmakingEnqueuedUser::__set_CustomData(System::Collections::Generic::Dictionary_2<::StringW,::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<::StringW,::StringW>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<::StringW,::StringW>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<::StringW,::StringW> Oculus::Platform::Models::MatchmakingEnqueuedUser::__get_CustomData() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<::StringW,::StringW>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::MatchmakingEnqueuedUser::__set_UserOptional(Oculus::Platform::Models::User value)  {
::cordl_internals::setInstanceField<Oculus::Platform::Models::User, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Oculus::Platform::Models::User>(value));
}
constexpr Oculus::Platform::Models::User Oculus::Platform::Models::MatchmakingEnqueuedUser::__get_UserOptional() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::Models::User, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::MatchmakingEnqueuedUser::__set_User(Oculus::Platform::Models::User value)  {
::cordl_internals::setInstanceField<Oculus::Platform::Models::User, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Oculus::Platform::Models::User>(value));
}
constexpr Oculus::Platform::Models::User Oculus::Platform::Models::MatchmakingEnqueuedUser::__get_User() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::Models::User, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 Oculus::Platform::Models::MatchmakingEnqueuedUser::MatchmakingEnqueuedUser(::cordl_internals::intptr_t o)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<MatchmakingEnqueuedUser>(o))) {}
 void Oculus::Platform::Models::MatchmakingEnqueuedUser::_ctor(::cordl_internals::intptr_t o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::MatchmakingEnqueuedUser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, o);
}
