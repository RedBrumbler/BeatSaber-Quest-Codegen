#pragma once
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithCloudStorageMetadataUnderLocal_def.hpp"
#include "Oculus/Platform/Models/zzzz__CloudStorageMetadata_def.hpp"
//  Writing Method size for method: Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25ae274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal.GetCloudStorageMetadata
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::CloudStorageMetadata (Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal::*)()>(&Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal::GetCloudStorageMetadata)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x25b0c34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal.GetDataFromMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::CloudStorageMetadata (Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x25b0c70;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal>::get(),
                                  89
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal::MessageWithCloudStorageMetadataUnderLocal(::cordl_internals::intptr_t c_message)  : Oculus::Platform::Message_1<Oculus::Platform::Models::CloudStorageMetadata>(THROW_UNLESS(::il2cpp_utils::New<MessageWithCloudStorageMetadataUnderLocal>(c_message))) {}
 void Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal::_ctor(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
 Oculus::Platform::Models::CloudStorageMetadata Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal::GetCloudStorageMetadata()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal>::get(),
                            "GetCloudStorageMetadata",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::CloudStorageMetadata, false>(const_cast<void*>(instance), ___internal_method);
}
 Oculus::Platform::Models::CloudStorageMetadata Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal::GetDataFromMessage(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal>::get(),
                            "GetDataFromMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::CloudStorageMetadata, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
