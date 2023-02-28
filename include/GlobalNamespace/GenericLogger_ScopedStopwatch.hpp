// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GenericLogger
#include "GlobalNamespace/GenericLogger.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: Stopwatch
  class Stopwatch;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GenericLogger::ScopedStopwatch);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GenericLogger::ScopedStopwatch*, "", "GenericLogger/ScopedStopwatch");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: GenericLogger/ScopedStopwatch
  // [TokenAttribute] Offset: FFFFFFFF
  class GenericLogger::ScopedStopwatch : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // private readonly System.String _processName
    // Size: 0x8
    // Offset: 0x10
    ::StringW processName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.Diagnostics.Stopwatch _stopwatch
    // Size: 0x8
    // Offset: 0x18
    ::System::Diagnostics::Stopwatch* stopwatch;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::Stopwatch*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: i_IDisposable
    inline ::System::IDisposable* i_IDisposable() noexcept {
      return reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private readonly System.String _processName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__processName();
    // Get instance field reference: private readonly System.Diagnostics.Stopwatch _stopwatch
    [[deprecated("Use field access instead!")]] ::System::Diagnostics::Stopwatch*& dyn__stopwatch();
    // public System.Void .ctor(System.String processName)
    // Offset: 0x162AC80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GenericLogger::ScopedStopwatch* New_ctor(::StringW processName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GenericLogger::ScopedStopwatch::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GenericLogger::ScopedStopwatch*, creationType>(processName)));
    }
    // public System.Void Dispose()
    // Offset: 0x162AD3C
    void Dispose();
  }; // GenericLogger/ScopedStopwatch
  #pragma pack(pop)
  static check_size<sizeof(GenericLogger::ScopedStopwatch), 24 + sizeof(::System::Diagnostics::Stopwatch*)> __GlobalNamespace_GenericLogger_ScopedStopwatchSizeCheck;
  static_assert(sizeof(GenericLogger::ScopedStopwatch) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GenericLogger::ScopedStopwatch::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GenericLogger::ScopedStopwatch::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GenericLogger::ScopedStopwatch::*)()>(&GlobalNamespace::GenericLogger::ScopedStopwatch::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GenericLogger::ScopedStopwatch*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
