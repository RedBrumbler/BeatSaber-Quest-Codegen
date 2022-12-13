// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.GameLift.GameLiftPlayerSessionProvider
#include "BGNet/Core/GameLift/GameLiftPlayerSessionProvider.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: RollingAverage
  class RollingAverage;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$$c);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$$c*, "BGNet.Core.GameLift", "GameLiftPlayerSessionProvider/<>c");
// Type namespace: BGNet.Core.GameLift
namespace BGNet::Core::GameLift {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BGNet.Core.GameLift.GameLiftPlayerSessionProvider/BGNet.Core.GameLift.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class GameLiftPlayerSessionProvider::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly BGNet.Core.GameLift.GameLiftPlayerSessionProvider/BGNet.Core.GameLift.<>c <>9
    static ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$$c* _get_$$9();
    // Set static field: static public readonly BGNet.Core.GameLift.GameLiftPlayerSessionProvider/BGNet.Core.GameLift.<>c <>9
    static void _set_$$9(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$$c* value);
    // Get static field: static public System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,RollingAverage>,System.Boolean> <>9__17_0
    static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, bool>* _get_$$9__17_0();
    // Set static field: static public System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,RollingAverage>,System.Boolean> <>9__17_0
    static void _set_$$9__17_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, bool>* value);
    // Get static field: static public System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,RollingAverage>,System.String> <>9__17_1
    static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, ::StringW>* _get_$$9__17_1();
    // Set static field: static public System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,RollingAverage>,System.String> <>9__17_1
    static void _set_$$9__17_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, ::StringW>* value);
    // Get static field: static public System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,RollingAverage>,System.Int64> <>9__17_2
    static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, int64_t>* _get_$$9__17_2();
    // Set static field: static public System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,RollingAverage>,System.Int64> <>9__17_2
    static void _set_$$9__17_2(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, int64_t>* value);
    // static private System.Void .cctor()
    // Offset: 0x15E58EC
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x15E5950
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameLiftPlayerSessionProvider::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameLiftPlayerSessionProvider::$$c*, creationType>()));
    }
    // System.Boolean <GetAverageLatencies>b__17_0(System.Collections.Generic.KeyValuePair`2<System.String,RollingAverage> kvp)
    // Offset: 0x15E5958
    bool $GetAverageLatencies$b__17_0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*> kvp);
    // System.String <GetAverageLatencies>b__17_1(System.Collections.Generic.KeyValuePair`2<System.String,RollingAverage> kvp)
    // Offset: 0x15E59A8
    ::StringW $GetAverageLatencies$b__17_1(::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*> kvp);
    // System.Int64 <GetAverageLatencies>b__17_2(System.Collections.Generic.KeyValuePair`2<System.String,RollingAverage> kvp)
    // Offset: 0x15E59EC
    int64_t $GetAverageLatencies$b__17_2(::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*> kvp);
  }; // BGNet.Core.GameLift.GameLiftPlayerSessionProvider/BGNet.Core.GameLift.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$$c::$GetAverageLatencies$b__17_0
// Il2CppName: <GetAverageLatencies>b__17_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$$c::*)(::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>)>(&BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$$c::$GetAverageLatencies$b__17_0)> {
  static const MethodInfo* get() {
    static auto* kvp = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "KeyValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("", "RollingAverage")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$$c*), "<GetAverageLatencies>b__17_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{kvp});
  }
};
// Writing MetadataGetter for method: BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$$c::$GetAverageLatencies$b__17_1
// Il2CppName: <GetAverageLatencies>b__17_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$$c::*)(::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>)>(&BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$$c::$GetAverageLatencies$b__17_1)> {
  static const MethodInfo* get() {
    static auto* kvp = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "KeyValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("", "RollingAverage")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$$c*), "<GetAverageLatencies>b__17_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{kvp});
  }
};
// Writing MetadataGetter for method: BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$$c::$GetAverageLatencies$b__17_2
// Il2CppName: <GetAverageLatencies>b__17_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$$c::*)(::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>)>(&BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$$c::$GetAverageLatencies$b__17_2)> {
  static const MethodInfo* get() {
    static auto* kvp = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "KeyValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("", "RollingAverage")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$$c*), "<GetAverageLatencies>b__17_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{kvp});
  }
};
