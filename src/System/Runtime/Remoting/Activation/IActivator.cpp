// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: System.Runtime.Remoting.Activation.IActivator
#include "System/Runtime/Remoting/Activation/IActivator.hpp"
// Including type: System.Runtime.Remoting.Activation.IConstructionReturnMessage
#include "System/Runtime/Remoting/Activation/IConstructionReturnMessage.hpp"
// Including type: System.Runtime.Remoting.Activation.IConstructionCallMessage
#include "System/Runtime/Remoting/Activation/IConstructionCallMessage.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.Remoting.Activation.IActivator.get_NextActivator
System::Runtime::Remoting::Activation::IActivator* System::Runtime::Remoting::Activation::IActivator::get_NextActivator() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Activation::IActivator*>(this, "get_NextActivator"));
}
// Autogenerated method: System.Runtime.Remoting.Activation.IActivator.Activate
System::Runtime::Remoting::Activation::IConstructionReturnMessage* System::Runtime::Remoting::Activation::IActivator::Activate(System::Runtime::Remoting::Activation::IConstructionCallMessage* msg) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Activation::IConstructionReturnMessage*>(this, "Activate", msg));
}