// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestRunner.NUnitExtensions.Runner.CoroutineTestWorkItem
#include "UnityEngine/TestRunner/NUnitExtensions/Runner/CoroutineTestWorkItem.hpp"
// Including type: UnityEngine.TestRunner.NUnitExtensions.Runner.CoroutineTestWorkItem/<PerformWork>d__6
#include "UnityEngine/TestRunner/NUnitExtensions/Runner/CoroutineTestWorkItem_-PerformWork-d__6.hpp"
// Including type: NUnit.Framework.Internal.Commands.TestCommand
#include "NUnit/Framework/Internal/Commands/TestCommand.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: NUnit.Framework.Internal.TestMethod
#include "NUnit/Framework/Internal/TestMethod.hpp"
// Including type: NUnit.Framework.Interfaces.ITestFilter
#include "NUnit/Framework/Interfaces/ITestFilter.hpp"
// Including type: System.Collections.IEnumerable
#include "System/Collections/IEnumerable.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private UnityEngine.MonoBehaviour m_MonoBehaviourCoroutineRunner
UnityEngine::MonoBehaviour* UnityEngine::TestRunner::NUnitExtensions::Runner::CoroutineTestWorkItem::_get_m_MonoBehaviourCoroutineRunner() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<UnityEngine::MonoBehaviour*>("UnityEngine.TestRunner.NUnitExtensions.Runner", "CoroutineTestWorkItem", "m_MonoBehaviourCoroutineRunner"));
}
// Autogenerated static field setter
// Set static field: static private UnityEngine.MonoBehaviour m_MonoBehaviourCoroutineRunner
void UnityEngine::TestRunner::NUnitExtensions::Runner::CoroutineTestWorkItem::_set_m_MonoBehaviourCoroutineRunner(UnityEngine::MonoBehaviour* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.TestRunner.NUnitExtensions.Runner", "CoroutineTestWorkItem", "m_MonoBehaviourCoroutineRunner", value));
}
// Autogenerated method: UnityEngine.TestRunner.NUnitExtensions.Runner.CoroutineTestWorkItem.get_monoBehaviourCoroutineRunner
UnityEngine::MonoBehaviour* UnityEngine::TestRunner::NUnitExtensions::Runner::CoroutineTestWorkItem::get_monoBehaviourCoroutineRunner() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::MonoBehaviour*>("UnityEngine.TestRunner.NUnitExtensions.Runner", "CoroutineTestWorkItem", "get_monoBehaviourCoroutineRunner"));
}
// Autogenerated method: UnityEngine.TestRunner.NUnitExtensions.Runner.CoroutineTestWorkItem.set_monoBehaviourCoroutineRunner
void UnityEngine::TestRunner::NUnitExtensions::Runner::CoroutineTestWorkItem::set_monoBehaviourCoroutineRunner(UnityEngine::MonoBehaviour* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.TestRunner.NUnitExtensions.Runner", "CoroutineTestWorkItem", "set_monoBehaviourCoroutineRunner", value));
}
// Autogenerated method: UnityEngine.TestRunner.NUnitExtensions.Runner.CoroutineTestWorkItem..ctor
UnityEngine::TestRunner::NUnitExtensions::Runner::CoroutineTestWorkItem* UnityEngine::TestRunner::NUnitExtensions::Runner::CoroutineTestWorkItem::New_ctor(NUnit::Framework::Internal::TestMethod* test, NUnit::Framework::Interfaces::ITestFilter* filter) {
  return (CoroutineTestWorkItem*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.TestRunner.NUnitExtensions.Runner", "CoroutineTestWorkItem", test, filter));
}
// Autogenerated method: UnityEngine.TestRunner.NUnitExtensions.Runner.CoroutineTestWorkItem.PerformWork
System::Collections::IEnumerable* UnityEngine::TestRunner::NUnitExtensions::Runner::CoroutineTestWorkItem::PerformWork() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerable*>(this, "PerformWork"));
}