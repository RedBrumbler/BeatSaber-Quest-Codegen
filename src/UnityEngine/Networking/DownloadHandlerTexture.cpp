// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Networking.DownloadHandlerTexture
#include "UnityEngine/Networking/DownloadHandlerTexture.hpp"
// Including type: UnityEngine.Texture2D
#include "UnityEngine/Texture2D.hpp"
// Including type: UnityEngine.Networking.UnityWebRequest
#include "UnityEngine/Networking/UnityWebRequest.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.Networking.DownloadHandlerTexture.Create
System::IntPtr UnityEngine::Networking::DownloadHandlerTexture::Create(UnityEngine::Networking::DownloadHandlerTexture* obj, bool readable) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>("UnityEngine.Networking", "DownloadHandlerTexture", "Create", obj, readable));
}
// Autogenerated method: UnityEngine.Networking.DownloadHandlerTexture.InternalCreateTexture
void UnityEngine::Networking::DownloadHandlerTexture::InternalCreateTexture(bool readable) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InternalCreateTexture", readable));
}
// Autogenerated method: UnityEngine.Networking.DownloadHandlerTexture..ctor
UnityEngine::Networking::DownloadHandlerTexture* UnityEngine::Networking::DownloadHandlerTexture::New_ctor(bool readable) {
  return (DownloadHandlerTexture*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.Networking", "DownloadHandlerTexture", readable));
}
// Autogenerated method: UnityEngine.Networking.DownloadHandlerTexture.get_texture
UnityEngine::Texture2D* UnityEngine::Networking::DownloadHandlerTexture::get_texture() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Texture2D*>(this, "get_texture"));
}
// Autogenerated method: UnityEngine.Networking.DownloadHandlerTexture.InternalGetTexture
UnityEngine::Texture2D* UnityEngine::Networking::DownloadHandlerTexture::InternalGetTexture() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Texture2D*>(this, "InternalGetTexture"));
}
// Autogenerated method: UnityEngine.Networking.DownloadHandlerTexture.InternalGetTextureNative
UnityEngine::Texture2D* UnityEngine::Networking::DownloadHandlerTexture::InternalGetTextureNative() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Texture2D*>(this, "InternalGetTextureNative"));
}
// Autogenerated method: UnityEngine.Networking.DownloadHandlerTexture.GetContent
UnityEngine::Texture2D* UnityEngine::Networking::DownloadHandlerTexture::GetContent(UnityEngine::Networking::UnityWebRequest* www) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Texture2D*>("UnityEngine.Networking", "DownloadHandlerTexture", "GetContent", www));
}
// Autogenerated method: UnityEngine.Networking.DownloadHandlerTexture.GetData
::Array<uint8_t>* UnityEngine::Networking::DownloadHandlerTexture::GetData() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "GetData"));
}