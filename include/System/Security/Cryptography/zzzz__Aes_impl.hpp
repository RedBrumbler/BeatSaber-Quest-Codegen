#pragma once
#include "System/Security/Cryptography/zzzz__SymmetricAlgorithm_impl.hpp"
#include "System/Security/Cryptography/zzzz__Aes_def.hpp"
#include "System/Security/Cryptography/zzzz__KeySizes_def.hpp"
//  Writing Method size for method: System::Security::Cryptography::Aes._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::Aes::*)()>(&System::Security::Cryptography::Aes::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2328788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::Aes>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Security::Cryptography::Aes::__set_s_legalBlockSizes(::ArrayW<System::Security::Cryptography::KeySizes> value)  {
::cordl_internals::setStaticField<::ArrayW<System::Security::Cryptography::KeySizes>, "s_legalBlockSizes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::Aes>::get>(std::forward<::ArrayW<System::Security::Cryptography::KeySizes>>(value));
}
 ::ArrayW<System::Security::Cryptography::KeySizes> System::Security::Cryptography::Aes::__get_s_legalBlockSizes()  {
return ::cordl_internals::getStaticField<::ArrayW<System::Security::Cryptography::KeySizes>, "s_legalBlockSizes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::Aes>::get>();
}
 void System::Security::Cryptography::Aes::__set_s_legalKeySizes(::ArrayW<System::Security::Cryptography::KeySizes> value)  {
::cordl_internals::setStaticField<::ArrayW<System::Security::Cryptography::KeySizes>, "s_legalKeySizes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::Aes>::get>(std::forward<::ArrayW<System::Security::Cryptography::KeySizes>>(value));
}
 ::ArrayW<System::Security::Cryptography::KeySizes> System::Security::Cryptography::Aes::__get_s_legalKeySizes()  {
return ::cordl_internals::getStaticField<::ArrayW<System::Security::Cryptography::KeySizes>, "s_legalKeySizes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::Aes>::get>();
}
// Ctor Parameters []
 System::Security::Cryptography::Aes::Aes()  : System::Security::Cryptography::SymmetricAlgorithm(THROW_UNLESS(::il2cpp_utils::New<Aes>())) {}
 void System::Security::Cryptography::Aes::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::Aes>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
