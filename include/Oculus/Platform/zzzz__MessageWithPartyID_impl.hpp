#pragma once
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithPartyID_def.hpp"
#include "Oculus/Platform/Models/zzzz__PartyID_def.hpp"
//  Writing Method size for method: Oculus::Platform::MessageWithPartyID._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::MessageWithPartyID::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithPartyID::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25b2cac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithPartyID>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithPartyID.GetPartyID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::PartyID (Oculus::Platform::MessageWithPartyID::*)()>(&Oculus::Platform::MessageWithPartyID::GetPartyID)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x25b2d04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithPartyID),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithPartyID>::get(),
                                  66
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithPartyID.GetDataFromMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::PartyID (Oculus::Platform::MessageWithPartyID::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithPartyID::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x25b2d40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithPartyID),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithPartyID>::get(),
                                  89
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 Oculus::Platform::MessageWithPartyID::MessageWithPartyID(::cordl_internals::intptr_t c_message)  : Oculus::Platform::Message_1<Oculus::Platform::Models::PartyID>(THROW_UNLESS(::il2cpp_utils::New<MessageWithPartyID>(c_message))) {}
 void Oculus::Platform::MessageWithPartyID::_ctor(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithPartyID>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
 Oculus::Platform::Models::PartyID Oculus::Platform::MessageWithPartyID::GetPartyID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithPartyID>::get(),
                            "GetPartyID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::PartyID, false>(const_cast<void*>(instance), ___internal_method);
}
 Oculus::Platform::Models::PartyID Oculus::Platform::MessageWithPartyID::GetDataFromMessage(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithPartyID>::get(),
                            "GetDataFromMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::PartyID, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
