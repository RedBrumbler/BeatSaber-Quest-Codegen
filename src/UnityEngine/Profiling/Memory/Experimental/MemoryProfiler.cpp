// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Profiling.Memory.Experimental.MemoryProfiler
#include "UnityEngine/Profiling/Memory/Experimental/MemoryProfiler.hpp"
// Including type: System.Action`2
#include "System/Action_2.hpp"
// Including type: System.Action`3
#include "System/Action_3.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: UnityEngine.Profiling.Memory.Experimental.MetaData
#include "UnityEngine/Profiling/Memory/Experimental/MetaData.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Action`2<System.String,System.Boolean> m_SnapshotFinished
System::Action_2<::CsString*, bool>* UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::_get_m_SnapshotFinished() {
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Action_2<::CsString*, bool>*>("UnityEngine.Profiling.Memory.Experimental", "MemoryProfiler", "m_SnapshotFinished")));
}
// Autogenerated static field setter
// Set static field: static private System.Action`2<System.String,System.Boolean> m_SnapshotFinished
void UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::_set_m_SnapshotFinished(System::Action_2<::CsString*, bool>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.Profiling.Memory.Experimental", "MemoryProfiler", "m_SnapshotFinished", value));
}
// Autogenerated static field getter
// Get static field: static private System.Action`3<System.String,System.Boolean,UnityEngine.Profiling.Experimental.DebugScreenCapture> m_SaveScreenshotToDisk
System::Action_3<::CsString*, bool, UnityEngine::Profiling::Experimental::DebugScreenCapture>* UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::_get_m_SaveScreenshotToDisk() {
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Action_3<::CsString*, bool, UnityEngine::Profiling::Experimental::DebugScreenCapture>*>("UnityEngine.Profiling.Memory.Experimental", "MemoryProfiler", "m_SaveScreenshotToDisk")));
}
// Autogenerated static field setter
// Set static field: static private System.Action`3<System.String,System.Boolean,UnityEngine.Profiling.Experimental.DebugScreenCapture> m_SaveScreenshotToDisk
void UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::_set_m_SaveScreenshotToDisk(System::Action_3<::CsString*, bool, UnityEngine::Profiling::Experimental::DebugScreenCapture>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.Profiling.Memory.Experimental", "MemoryProfiler", "m_SaveScreenshotToDisk", value));
}
// Autogenerated static field getter
// Get static field: static private System.Action`1<UnityEngine.Profiling.Memory.Experimental.MetaData> createMetaData
System::Action_1<UnityEngine::Profiling::Memory::Experimental::MetaData*>* UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::_get_createMetaData() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Action_1<UnityEngine::Profiling::Memory::Experimental::MetaData*>*>("UnityEngine.Profiling.Memory.Experimental", "MemoryProfiler", "createMetaData"));
}
// Autogenerated static field setter
// Set static field: static private System.Action`1<UnityEngine.Profiling.Memory.Experimental.MetaData> createMetaData
void UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::_set_createMetaData(System::Action_1<UnityEngine::Profiling::Memory::Experimental::MetaData*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.Profiling.Memory.Experimental", "MemoryProfiler", "createMetaData", value));
}
// Autogenerated method: UnityEngine.Profiling.Memory.Experimental.MemoryProfiler.PrepareMetadata
::Array<uint8_t>* UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::PrepareMetadata() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>("UnityEngine.Profiling.Memory.Experimental", "MemoryProfiler", "PrepareMetadata"));
}
// Autogenerated method: UnityEngine.Profiling.Memory.Experimental.MemoryProfiler.WriteIntToByteArray
int UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::WriteIntToByteArray(::Array<uint8_t>* array, int offset, int value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("UnityEngine.Profiling.Memory.Experimental", "MemoryProfiler", "WriteIntToByteArray", array, offset, value));
}
// Autogenerated method: UnityEngine.Profiling.Memory.Experimental.MemoryProfiler.WriteStringToByteArray
int UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::WriteStringToByteArray(::Array<uint8_t>* array, int offset, ::CsString* value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("UnityEngine.Profiling.Memory.Experimental", "MemoryProfiler", "WriteStringToByteArray", array, offset, value));
}
// Autogenerated method: UnityEngine.Profiling.Memory.Experimental.MemoryProfiler.FinalizeSnapshot
void UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::FinalizeSnapshot(::CsString* path, bool result) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.Profiling.Memory.Experimental", "MemoryProfiler", "FinalizeSnapshot", path, result));
}
// Autogenerated method: UnityEngine.Profiling.Memory.Experimental.MemoryProfiler.SaveScreenshotToDisk
void UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::SaveScreenshotToDisk(::CsString* path, bool result, System::IntPtr pixelsPtr, int pixelsCount, UnityEngine::TextureFormat format, int width, int height) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.Profiling.Memory.Experimental", "MemoryProfiler", "SaveScreenshotToDisk", path, result, pixelsPtr, pixelsCount, format, width, height));
}
