// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Xml.SecureStringHasher/HashCodeOfStringDelegate
#include "System/Xml/SecureStringHasher_HashCodeOfStringDelegate.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Xml.SecureStringHasher/HashCodeOfStringDelegate..ctor
System::Xml::SecureStringHasher::HashCodeOfStringDelegate* System::Xml::SecureStringHasher::HashCodeOfStringDelegate::New_ctor(::CsObject* object, System::IntPtr method) {
  return (SecureStringHasher::HashCodeOfStringDelegate*)THROW_UNLESS(il2cpp_utils::New("System.Xml", "SecureStringHasher/HashCodeOfStringDelegate", object, method));
}
// Autogenerated method: System.Xml.SecureStringHasher/HashCodeOfStringDelegate.Invoke
int System::Xml::SecureStringHasher::HashCodeOfStringDelegate::Invoke(::CsString* s, int sLen, int64_t additionalEntropy) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Invoke", s, sLen, additionalEntropy));
}
// Autogenerated method: System.Xml.SecureStringHasher/HashCodeOfStringDelegate.BeginInvoke
System::IAsyncResult* System::Xml::SecureStringHasher::HashCodeOfStringDelegate::BeginInvoke(::CsString* s, int sLen, int64_t additionalEntropy, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", s, sLen, additionalEntropy, callback, object));
}
// Autogenerated method: System.Xml.SecureStringHasher/HashCodeOfStringDelegate.EndInvoke
int System::Xml::SecureStringHasher::HashCodeOfStringDelegate::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "EndInvoke", result));
}
