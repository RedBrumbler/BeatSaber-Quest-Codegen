// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolver/UpdateDelegate
#include "RootMotion/FinalIK/IKSolver_UpdateDelegate.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: RootMotion.FinalIK.IKSolver/UpdateDelegate..ctor
RootMotion::FinalIK::IKSolver::UpdateDelegate* RootMotion::FinalIK::IKSolver::UpdateDelegate::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IKSolver::UpdateDelegate*)THROW_UNLESS(il2cpp_utils::New("RootMotion.FinalIK", "IKSolver/UpdateDelegate", object, method));
}
// Autogenerated method: RootMotion.FinalIK.IKSolver/UpdateDelegate.Invoke
void RootMotion::FinalIK::IKSolver::UpdateDelegate::Invoke() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolver/UpdateDelegate.BeginInvoke
System::IAsyncResult* RootMotion::FinalIK::IKSolver::UpdateDelegate::BeginInvoke(System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", callback, object));
}
// Autogenerated method: RootMotion.FinalIK.IKSolver/UpdateDelegate.EndInvoke
void RootMotion::FinalIK::IKSolver::UpdateDelegate::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}
