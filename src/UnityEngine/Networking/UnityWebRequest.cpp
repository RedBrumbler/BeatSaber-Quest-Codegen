// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Networking.UnityWebRequest
#include "UnityEngine/Networking/UnityWebRequest.hpp"
// Including type: UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod
#include "UnityEngine/Networking/UnityWebRequest_UnityWebRequestMethod.hpp"
// Including type: UnityEngine.Networking.UnityWebRequest/UnityWebRequestError
#include "UnityEngine/Networking/UnityWebRequest_UnityWebRequestError.hpp"
// Including type: UnityEngine.Networking.DownloadHandler
#include "UnityEngine/Networking/DownloadHandler.hpp"
// Including type: UnityEngine.Networking.UploadHandler
#include "UnityEngine/Networking/UploadHandler.hpp"
// Including type: UnityEngine.Networking.CertificateHandler
#include "UnityEngine/Networking/CertificateHandler.hpp"
// Including type: System.Uri
#include "System/Uri.hpp"
// Including type: UnityEngine.Networking.UnityWebRequestAsyncOperation
#include "UnityEngine/Networking/UnityWebRequestAsyncOperation.hpp"
// Including type: System.Text.Encoding
#include "System/Text/Encoding.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.GetWebErrorString
::Il2CppString* UnityEngine::Networking::UnityWebRequest::GetWebErrorString(UnityEngine::Networking::UnityWebRequest::UnityWebRequestError err) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("UnityEngine.Networking", "UnityWebRequest", "GetWebErrorString", err));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.GetHTTPStatusString
::Il2CppString* UnityEngine::Networking::UnityWebRequest::GetHTTPStatusString(int64_t responseCode) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("UnityEngine.Networking", "UnityWebRequest", "GetHTTPStatusString", responseCode));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.get_disposeCertificateHandlerOnDispose
bool UnityEngine::Networking::UnityWebRequest::get_disposeCertificateHandlerOnDispose() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_disposeCertificateHandlerOnDispose"));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.set_disposeCertificateHandlerOnDispose
void UnityEngine::Networking::UnityWebRequest::set_disposeCertificateHandlerOnDispose(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_disposeCertificateHandlerOnDispose", value));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.get_disposeDownloadHandlerOnDispose
bool UnityEngine::Networking::UnityWebRequest::get_disposeDownloadHandlerOnDispose() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_disposeDownloadHandlerOnDispose"));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.set_disposeDownloadHandlerOnDispose
void UnityEngine::Networking::UnityWebRequest::set_disposeDownloadHandlerOnDispose(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_disposeDownloadHandlerOnDispose", value));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.get_disposeUploadHandlerOnDispose
bool UnityEngine::Networking::UnityWebRequest::get_disposeUploadHandlerOnDispose() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_disposeUploadHandlerOnDispose"));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.set_disposeUploadHandlerOnDispose
void UnityEngine::Networking::UnityWebRequest::set_disposeUploadHandlerOnDispose(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_disposeUploadHandlerOnDispose", value));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.Create
System::IntPtr UnityEngine::Networking::UnityWebRequest::Create() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>("UnityEngine.Networking", "UnityWebRequest", "Create"));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.Release
void UnityEngine::Networking::UnityWebRequest::Release() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Release"));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.InternalDestroy
void UnityEngine::Networking::UnityWebRequest::InternalDestroy() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InternalDestroy"));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.InternalSetDefaults
void UnityEngine::Networking::UnityWebRequest::InternalSetDefaults() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InternalSetDefaults"));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest..ctor
UnityEngine::Networking::UnityWebRequest* UnityEngine::Networking::UnityWebRequest::New_ctor(::Il2CppString* url, ::Il2CppString* method) {
  return (UnityWebRequest*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.Networking", "UnityWebRequest", url, method));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest..ctor
UnityEngine::Networking::UnityWebRequest* UnityEngine::Networking::UnityWebRequest::New_ctor(::Il2CppString* url, ::Il2CppString* method, UnityEngine::Networking::DownloadHandler* downloadHandler, UnityEngine::Networking::UploadHandler* uploadHandler) {
  return (UnityWebRequest*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.Networking", "UnityWebRequest", url, method, downloadHandler, uploadHandler));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.DisposeHandlers
void UnityEngine::Networking::UnityWebRequest::DisposeHandlers() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DisposeHandlers"));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.BeginWebRequest
UnityEngine::Networking::UnityWebRequestAsyncOperation* UnityEngine::Networking::UnityWebRequest::BeginWebRequest() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Networking::UnityWebRequestAsyncOperation*>(this, "BeginWebRequest"));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.SendWebRequest
UnityEngine::Networking::UnityWebRequestAsyncOperation* UnityEngine::Networking::UnityWebRequest::SendWebRequest() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Networking::UnityWebRequestAsyncOperation*>(this, "SendWebRequest"));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.Abort
void UnityEngine::Networking::UnityWebRequest::Abort() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Abort"));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.SetMethod
UnityEngine::Networking::UnityWebRequest::UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetMethod(UnityEngine::Networking::UnityWebRequest::UnityWebRequestMethod methodType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Networking::UnityWebRequest::UnityWebRequestError>(this, "SetMethod", methodType));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.InternalSetMethod
void UnityEngine::Networking::UnityWebRequest::InternalSetMethod(UnityEngine::Networking::UnityWebRequest::UnityWebRequestMethod methodType) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InternalSetMethod", methodType));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.SetCustomMethod
UnityEngine::Networking::UnityWebRequest::UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetCustomMethod(::Il2CppString* customMethodName) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Networking::UnityWebRequest::UnityWebRequestError>(this, "SetCustomMethod", customMethodName));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.InternalSetCustomMethod
void UnityEngine::Networking::UnityWebRequest::InternalSetCustomMethod(::Il2CppString* customMethodName) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InternalSetCustomMethod", customMethodName));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.set_method
void UnityEngine::Networking::UnityWebRequest::set_method(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_method", value));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.GetError
UnityEngine::Networking::UnityWebRequest::UnityWebRequestError UnityEngine::Networking::UnityWebRequest::GetError() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Networking::UnityWebRequest::UnityWebRequestError>(this, "GetError"));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.get_error
::Il2CppString* UnityEngine::Networking::UnityWebRequest::get_error() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_error"));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.set_url
void UnityEngine::Networking::UnityWebRequest::set_url(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_url", value));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.SetUrl
UnityEngine::Networking::UnityWebRequest::UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetUrl(::Il2CppString* url) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Networking::UnityWebRequest::UnityWebRequestError>(this, "SetUrl", url));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.InternalSetUrl
void UnityEngine::Networking::UnityWebRequest::InternalSetUrl(::Il2CppString* url) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InternalSetUrl", url));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.get_responseCode
int64_t UnityEngine::Networking::UnityWebRequest::get_responseCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int64_t>(this, "get_responseCode"));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.IsExecuting
bool UnityEngine::Networking::UnityWebRequest::IsExecuting() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsExecuting"));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.get_isModifiable
bool UnityEngine::Networking::UnityWebRequest::get_isModifiable() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isModifiable"));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.get_isDone
bool UnityEngine::Networking::UnityWebRequest::get_isDone() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isDone"));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.get_isNetworkError
bool UnityEngine::Networking::UnityWebRequest::get_isNetworkError() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isNetworkError"));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.get_isHttpError
bool UnityEngine::Networking::UnityWebRequest::get_isHttpError() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isHttpError"));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.GetDownloadProgress
float UnityEngine::Networking::UnityWebRequest::GetDownloadProgress() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "GetDownloadProgress"));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.get_downloadProgress
float UnityEngine::Networking::UnityWebRequest::get_downloadProgress() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_downloadProgress"));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.InternalSetRequestHeader
UnityEngine::Networking::UnityWebRequest::UnityWebRequestError UnityEngine::Networking::UnityWebRequest::InternalSetRequestHeader(::Il2CppString* name, ::Il2CppString* value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Networking::UnityWebRequest::UnityWebRequestError>(this, "InternalSetRequestHeader", name, value));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.SetRequestHeader
void UnityEngine::Networking::UnityWebRequest::SetRequestHeader(::Il2CppString* name, ::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetRequestHeader", name, value));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.SetUploadHandler
UnityEngine::Networking::UnityWebRequest::UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetUploadHandler(UnityEngine::Networking::UploadHandler* uh) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Networking::UnityWebRequest::UnityWebRequestError>(this, "SetUploadHandler", uh));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.get_uploadHandler
UnityEngine::Networking::UploadHandler* UnityEngine::Networking::UnityWebRequest::get_uploadHandler() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Networking::UploadHandler*>(this, "get_uploadHandler"));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.set_uploadHandler
void UnityEngine::Networking::UnityWebRequest::set_uploadHandler(UnityEngine::Networking::UploadHandler* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_uploadHandler", value));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.SetDownloadHandler
UnityEngine::Networking::UnityWebRequest::UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetDownloadHandler(UnityEngine::Networking::DownloadHandler* dh) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Networking::UnityWebRequest::UnityWebRequestError>(this, "SetDownloadHandler", dh));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.get_downloadHandler
UnityEngine::Networking::DownloadHandler* UnityEngine::Networking::UnityWebRequest::get_downloadHandler() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Networking::DownloadHandler*>(this, "get_downloadHandler"));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.set_downloadHandler
void UnityEngine::Networking::UnityWebRequest::set_downloadHandler(UnityEngine::Networking::DownloadHandler* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_downloadHandler", value));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.get_certificateHandler
UnityEngine::Networking::CertificateHandler* UnityEngine::Networking::UnityWebRequest::get_certificateHandler() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Networking::CertificateHandler*>(this, "get_certificateHandler"));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.Get
UnityEngine::Networking::UnityWebRequest* UnityEngine::Networking::UnityWebRequest::Get(::Il2CppString* uri) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Networking::UnityWebRequest*>("UnityEngine.Networking", "UnityWebRequest", "Get", uri));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.Post
UnityEngine::Networking::UnityWebRequest* UnityEngine::Networking::UnityWebRequest::Post(::Il2CppString* uri, ::Il2CppString* postData) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Networking::UnityWebRequest*>("UnityEngine.Networking", "UnityWebRequest", "Post", uri, postData));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.SetupPost
void UnityEngine::Networking::UnityWebRequest::SetupPost(UnityEngine::Networking::UnityWebRequest* request, ::Il2CppString* postData) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.Networking", "UnityWebRequest", "SetupPost", request, postData));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.EscapeURL
::Il2CppString* UnityEngine::Networking::UnityWebRequest::EscapeURL(::Il2CppString* s) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("UnityEngine.Networking", "UnityWebRequest", "EscapeURL", s));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.EscapeURL
::Il2CppString* UnityEngine::Networking::UnityWebRequest::EscapeURL(::Il2CppString* s, System::Text::Encoding* e) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("UnityEngine.Networking", "UnityWebRequest", "EscapeURL", s, e));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.Finalize
void UnityEngine::Networking::UnityWebRequest::Finalize() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Finalize"));
}
// Autogenerated method: UnityEngine.Networking.UnityWebRequest.Dispose
void UnityEngine::Networking::UnityWebRequest::Dispose() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose"));
}
void UnityEngine::Networking::UnityWebRequest::System_IDisposable_Dispose() {
  Dispose();
}