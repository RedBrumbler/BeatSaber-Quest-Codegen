// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TestRichPresencePlatformHandler
#include "GlobalNamespace/TestRichPresencePlatformHandler.hpp"
// Including type: IRichPresenceData
#include "GlobalNamespace/IRichPresenceData.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: TestRichPresencePlatformHandler.SetPresence
void GlobalNamespace::TestRichPresencePlatformHandler::SetPresence(GlobalNamespace::IRichPresenceData* richPresenceData) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetPresence", richPresenceData));
}
// Autogenerated method: TestRichPresencePlatformHandler.Clear
void GlobalNamespace::TestRichPresencePlatformHandler::Clear() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Clear"));
}
// Autogenerated method: TestRichPresencePlatformHandler..ctor
GlobalNamespace::TestRichPresencePlatformHandler* GlobalNamespace::TestRichPresencePlatformHandler::New_ctor() {
  return (TestRichPresencePlatformHandler*)THROW_UNLESS(il2cpp_utils::New("", "TestRichPresencePlatformHandler"));
}