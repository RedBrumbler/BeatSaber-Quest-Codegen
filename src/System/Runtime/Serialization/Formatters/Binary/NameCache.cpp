// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.Formatters.Binary.NameCache
#include "System/Runtime/Serialization/Formatters/Binary/NameCache.hpp"
// Including type: System.Collections.Concurrent.ConcurrentDictionary`2
#include "System/Collections/Concurrent/ConcurrentDictionary_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Object> ht
System::Collections::Concurrent::ConcurrentDictionary_2<::CsString*, ::CsObject*>* System::Runtime::Serialization::Formatters::Binary::NameCache::_get_ht() {
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Collections::Concurrent::ConcurrentDictionary_2<::CsString*, ::CsObject*>*>("System.Runtime.Serialization.Formatters.Binary", "NameCache", "ht")));
}
// Autogenerated static field setter
// Set static field: static private System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Object> ht
void System::Runtime::Serialization::Formatters::Binary::NameCache::_set_ht(System::Collections::Concurrent::ConcurrentDictionary_2<::CsString*, ::CsObject*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Runtime.Serialization.Formatters.Binary", "NameCache", "ht", value));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.NameCache.GetCachedValue
::CsObject* System::Runtime::Serialization::Formatters::Binary::NameCache::GetCachedValue(::CsString* name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "GetCachedValue", name));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.NameCache.SetCachedValue
void System::Runtime::Serialization::Formatters::Binary::NameCache::SetCachedValue(::CsObject* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetCachedValue", value));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.NameCache..cctor
void System::Runtime::Serialization::Formatters::Binary::NameCache::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.Serialization.Formatters.Binary", "NameCache", ".cctor"));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.NameCache..ctor
System::Runtime::Serialization::Formatters::Binary::NameCache* System::Runtime::Serialization::Formatters::Binary::NameCache::New_ctor() {
  return (NameCache*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Serialization.Formatters.Binary", "NameCache"));
}
