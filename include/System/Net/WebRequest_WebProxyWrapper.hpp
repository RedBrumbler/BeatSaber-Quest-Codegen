// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.WebRequest
#include "System/Net/WebRequest.hpp"
// Including type: System.Net.WebRequest/System.Net.WebProxyWrapperOpaque
#include "System/Net/WebRequest_WebProxyWrapperOpaque.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebProxy
  class WebProxy;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::WebRequest::WebProxyWrapper);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebRequest::WebProxyWrapper*, "System.Net", "WebRequest/WebProxyWrapper");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebRequest/System.Net.WebProxyWrapper
  // [TokenAttribute] Offset: FFFFFFFF
  class WebRequest::WebProxyWrapper : public ::System::Net::WebRequest::WebProxyWrapperOpaque {
    public:
    // System.Net.WebProxy get_WebProxy()
    // Offset: 0x1BDE55C
    ::System::Net::WebProxy* get_WebProxy();
  }; // System.Net.WebRequest/System.Net.WebProxyWrapper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WebRequest::WebProxyWrapper::get_WebProxy
// Il2CppName: get_WebProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebProxy* (System::Net::WebRequest::WebProxyWrapper::*)()>(&System::Net::WebRequest::WebProxyWrapper::get_WebProxy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest::WebProxyWrapper*), "get_WebProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
