// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Sockets.LingerOption
#include "System/Net/Sockets/LingerOption.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Net.Sockets.LingerOption..ctor
System::Net::Sockets::LingerOption* System::Net::Sockets::LingerOption::New_ctor(bool enable, int seconds) {
  return (LingerOption*)THROW_UNLESS(il2cpp_utils::New("System.Net.Sockets", "LingerOption", enable, seconds));
}
// Autogenerated method: System.Net.Sockets.LingerOption.set_Enabled
void System::Net::Sockets::LingerOption::set_Enabled(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Enabled", value));
}
// Autogenerated method: System.Net.Sockets.LingerOption.set_LingerTime
void System::Net::Sockets::LingerOption::set_LingerTime(int value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_LingerTime", value));
}