// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.IPlayerEditorConnectionNative
#include "UnityEngine/IPlayerEditorConnectionNative.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.IPlayerEditorConnectionNative.Initialize
void UnityEngine::IPlayerEditorConnectionNative::UnityEngine_IPlayerEditorConnectionNative_Initialize() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Initialize"));
}
// Autogenerated method: UnityEngine.IPlayerEditorConnectionNative.DisconnectAll
void UnityEngine::IPlayerEditorConnectionNative::UnityEngine_IPlayerEditorConnectionNative_DisconnectAll() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DisconnectAll"));
}
// Autogenerated method: UnityEngine.IPlayerEditorConnectionNative.SendMessage
void UnityEngine::IPlayerEditorConnectionNative::UnityEngine_IPlayerEditorConnectionNative_SendMessage(System::Guid messageId, ::Array<uint8_t>* data, int playerId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SendMessage", messageId, data, playerId));
}
// Autogenerated method: UnityEngine.IPlayerEditorConnectionNative.TrySendMessage
bool UnityEngine::IPlayerEditorConnectionNative::UnityEngine_IPlayerEditorConnectionNative_TrySendMessage(System::Guid messageId, ::Array<uint8_t>* data, int playerId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "TrySendMessage", messageId, data, playerId));
}
// Autogenerated method: UnityEngine.IPlayerEditorConnectionNative.Poll
void UnityEngine::IPlayerEditorConnectionNative::UnityEngine_IPlayerEditorConnectionNative_Poll() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Poll"));
}
// Autogenerated method: UnityEngine.IPlayerEditorConnectionNative.RegisterInternal
void UnityEngine::IPlayerEditorConnectionNative::UnityEngine_IPlayerEditorConnectionNative_RegisterInternal(System::Guid messageId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RegisterInternal", messageId));
}
// Autogenerated method: UnityEngine.IPlayerEditorConnectionNative.UnregisterInternal
void UnityEngine::IPlayerEditorConnectionNative::UnityEngine_IPlayerEditorConnectionNative_UnregisterInternal(System::Guid messageId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UnregisterInternal", messageId));
}
// Autogenerated method: UnityEngine.IPlayerEditorConnectionNative.IsConnected
bool UnityEngine::IPlayerEditorConnectionNative::UnityEngine_IPlayerEditorConnectionNative_IsConnected() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsConnected"));
}
