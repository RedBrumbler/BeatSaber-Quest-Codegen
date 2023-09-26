#pragma once
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithCloudStorageConflictMetadata_def.hpp"
#include "Oculus/Platform/Models/zzzz__CloudStorageConflictMetadata_def.hpp"
//  Writing Method size for method: Oculus::Platform::MessageWithCloudStorageConflictMetadata._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::MessageWithCloudStorageConflictMetadata::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithCloudStorageConflictMetadata::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25ae1c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithCloudStorageConflictMetadata>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithCloudStorageConflictMetadata.GetCloudStorageConflictMetadata
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::CloudStorageConflictMetadata (Oculus::Platform::MessageWithCloudStorageConflictMetadata::*)()>(&Oculus::Platform::MessageWithCloudStorageConflictMetadata::GetCloudStorageConflictMetadata)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x25b0a84;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithCloudStorageConflictMetadata),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithCloudStorageConflictMetadata>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithCloudStorageConflictMetadata.GetDataFromMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::CloudStorageConflictMetadata (Oculus::Platform::MessageWithCloudStorageConflictMetadata::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithCloudStorageConflictMetadata::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x25b0ac0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithCloudStorageConflictMetadata),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithCloudStorageConflictMetadata>::get(),
                                  89
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 Oculus::Platform::MessageWithCloudStorageConflictMetadata::MessageWithCloudStorageConflictMetadata(::cordl_internals::intptr_t c_message)  : Oculus::Platform::Message_1<Oculus::Platform::Models::CloudStorageConflictMetadata>(THROW_UNLESS(::il2cpp_utils::New<MessageWithCloudStorageConflictMetadata>(c_message))) {}
 void Oculus::Platform::MessageWithCloudStorageConflictMetadata::_ctor(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithCloudStorageConflictMetadata>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
 Oculus::Platform::Models::CloudStorageConflictMetadata Oculus::Platform::MessageWithCloudStorageConflictMetadata::GetCloudStorageConflictMetadata()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithCloudStorageConflictMetadata>::get(),
                            "GetCloudStorageConflictMetadata",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::CloudStorageConflictMetadata, false>(const_cast<void*>(instance), ___internal_method);
}
 Oculus::Platform::Models::CloudStorageConflictMetadata Oculus::Platform::MessageWithCloudStorageConflictMetadata::GetDataFromMessage(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithCloudStorageConflictMetadata>::get(),
                            "GetDataFromMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::CloudStorageConflictMetadata, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
