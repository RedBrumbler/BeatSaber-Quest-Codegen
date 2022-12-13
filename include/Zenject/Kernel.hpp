// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: Zenject.ITickable
#include "Zenject/ITickable.hpp"
// Including type: Zenject.ILateDisposable
#include "Zenject/ILateDisposable.hpp"
// Including type: Zenject.IInitializable
#include "Zenject/IInitializable.hpp"
// Including type: Zenject.ILateTickable
#include "Zenject/ILateTickable.hpp"
// Including type: Zenject.IFixedTickable
#include "Zenject/IFixedTickable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: TickableManager
  class TickableManager;
  // Forward declaring type: InitializableManager
  class InitializableManager;
  // Forward declaring type: DisposableManager
  class DisposableManager;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: Kernel
  class Kernel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::Kernel);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Kernel*, "Zenject", "Kernel");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Kernel
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerStepThroughAttribute] Offset: FFFFFFFF
  class Kernel : public ::Il2CppObject/*, public ::System::IDisposable, public ::Zenject::ITickable, public ::Zenject::ILateDisposable, public ::Zenject::IInitializable, public ::Zenject::ILateTickable, public ::Zenject::IFixedTickable*/ {
    public:
    public:
    // [InjectLocalAttribute] Offset: 0x10ED6C8
    // private Zenject.TickableManager _tickableManager
    // Size: 0x8
    // Offset: 0x10
    ::Zenject::TickableManager* tickableManager;
    // Field size check
    static_assert(sizeof(::Zenject::TickableManager*) == 0x8);
    // [InjectLocalAttribute] Offset: 0x10ED6D8
    // private Zenject.InitializableManager _initializableManager
    // Size: 0x8
    // Offset: 0x18
    ::Zenject::InitializableManager* initializableManager;
    // Field size check
    static_assert(sizeof(::Zenject::InitializableManager*) == 0x8);
    // [InjectLocalAttribute] Offset: 0x10ED6E8
    // private Zenject.DisposableManager _disposablesManager
    // Size: 0x8
    // Offset: 0x20
    ::Zenject::DisposableManager* disposablesManager;
    // Field size check
    static_assert(sizeof(::Zenject::DisposableManager*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: i_IDisposable
    inline ::System::IDisposable* i_IDisposable() noexcept {
      return reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: operator ::Zenject::ITickable
    operator ::Zenject::ITickable() noexcept {
      return *reinterpret_cast<::Zenject::ITickable*>(this);
    }
    // Creating interface conversion operator: i_ITickable
    inline ::Zenject::ITickable* i_ITickable() noexcept {
      return reinterpret_cast<::Zenject::ITickable*>(this);
    }
    // Creating interface conversion operator: operator ::Zenject::ILateDisposable
    operator ::Zenject::ILateDisposable() noexcept {
      return *reinterpret_cast<::Zenject::ILateDisposable*>(this);
    }
    // Creating interface conversion operator: i_ILateDisposable
    inline ::Zenject::ILateDisposable* i_ILateDisposable() noexcept {
      return reinterpret_cast<::Zenject::ILateDisposable*>(this);
    }
    // Creating interface conversion operator: operator ::Zenject::IInitializable
    operator ::Zenject::IInitializable() noexcept {
      return *reinterpret_cast<::Zenject::IInitializable*>(this);
    }
    // Creating interface conversion operator: i_IInitializable
    inline ::Zenject::IInitializable* i_IInitializable() noexcept {
      return reinterpret_cast<::Zenject::IInitializable*>(this);
    }
    // Creating interface conversion operator: operator ::Zenject::ILateTickable
    operator ::Zenject::ILateTickable() noexcept {
      return *reinterpret_cast<::Zenject::ILateTickable*>(this);
    }
    // Creating interface conversion operator: i_ILateTickable
    inline ::Zenject::ILateTickable* i_ILateTickable() noexcept {
      return reinterpret_cast<::Zenject::ILateTickable*>(this);
    }
    // Creating interface conversion operator: operator ::Zenject::IFixedTickable
    operator ::Zenject::IFixedTickable() noexcept {
      return *reinterpret_cast<::Zenject::IFixedTickable*>(this);
    }
    // Creating interface conversion operator: i_IFixedTickable
    inline ::Zenject::IFixedTickable* i_IFixedTickable() noexcept {
      return reinterpret_cast<::Zenject::IFixedTickable*>(this);
    }
    // Get instance field reference: private Zenject.TickableManager _tickableManager
    [[deprecated("Use field access instead!")]] ::Zenject::TickableManager*& dyn__tickableManager();
    // Get instance field reference: private Zenject.InitializableManager _initializableManager
    [[deprecated("Use field access instead!")]] ::Zenject::InitializableManager*& dyn__initializableManager();
    // Get instance field reference: private Zenject.DisposableManager _disposablesManager
    [[deprecated("Use field access instead!")]] ::Zenject::DisposableManager*& dyn__disposablesManager();
    // public System.Void .ctor()
    // Offset: 0x1CBE430
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Kernel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::Kernel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Kernel*, creationType>()));
    }
    // public System.Void Initialize()
    // Offset: 0x1CBE388
    void Initialize();
    // public System.Void Dispose()
    // Offset: 0x1CBE3A4
    void Dispose();
    // public System.Void LateDispose()
    // Offset: 0x1CBE3C0
    void LateDispose();
    // public System.Void Tick()
    // Offset: 0x1CBE3DC
    void Tick();
    // public System.Void LateTick()
    // Offset: 0x1CBE3F8
    void LateTick();
    // public System.Void FixedTick()
    // Offset: 0x1CBE414
    void FixedTick();
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1CBE438
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private System.Void __zenFieldSetter0(System.Object P_0, System.Object P_1)
    // Offset: 0x1CBE494
    static void __zenFieldSetter0(::Il2CppObject* P_0, ::Il2CppObject* P_1);
    // static private System.Void __zenFieldSetter1(System.Object P_0, System.Object P_1)
    // Offset: 0x1CBE568
    static void __zenFieldSetter1(::Il2CppObject* P_0, ::Il2CppObject* P_1);
    // static private System.Void __zenFieldSetter2(System.Object P_0, System.Object P_1)
    // Offset: 0x1CBE63C
    static void __zenFieldSetter2(::Il2CppObject* P_0, ::Il2CppObject* P_1);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1CBE710
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.Kernel
  #pragma pack(pop)
  static check_size<sizeof(Kernel), 32 + sizeof(::Zenject::DisposableManager*)> __Zenject_KernelSizeCheck;
  static_assert(sizeof(Kernel) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::Kernel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::Kernel::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Kernel::*)()>(&Zenject::Kernel::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Kernel*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::Kernel::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Kernel::*)()>(&Zenject::Kernel::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Kernel*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::Kernel::LateDispose
// Il2CppName: LateDispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Kernel::*)()>(&Zenject::Kernel::LateDispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Kernel*), "LateDispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::Kernel::Tick
// Il2CppName: Tick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Kernel::*)()>(&Zenject::Kernel::Tick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Kernel*), "Tick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::Kernel::LateTick
// Il2CppName: LateTick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Kernel::*)()>(&Zenject::Kernel::LateTick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Kernel*), "LateTick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::Kernel::FixedTick
// Il2CppName: FixedTick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Kernel::*)()>(&Zenject::Kernel::FixedTick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Kernel*), "FixedTick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::Kernel::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::Kernel::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Kernel*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::Kernel::__zenFieldSetter0
// Il2CppName: __zenFieldSetter0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::Il2CppObject*)>(&Zenject::Kernel::__zenFieldSetter0)> {
  static const MethodInfo* get() {
    static auto* P_0 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* P_1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Kernel*), "__zenFieldSetter0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0, P_1});
  }
};
// Writing MetadataGetter for method: Zenject::Kernel::__zenFieldSetter1
// Il2CppName: __zenFieldSetter1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::Il2CppObject*)>(&Zenject::Kernel::__zenFieldSetter1)> {
  static const MethodInfo* get() {
    static auto* P_0 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* P_1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Kernel*), "__zenFieldSetter1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0, P_1});
  }
};
// Writing MetadataGetter for method: Zenject::Kernel::__zenFieldSetter2
// Il2CppName: __zenFieldSetter2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::Il2CppObject*)>(&Zenject::Kernel::__zenFieldSetter2)> {
  static const MethodInfo* get() {
    static auto* P_0 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* P_1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Kernel*), "__zenFieldSetter2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0, P_1});
  }
};
// Writing MetadataGetter for method: Zenject::Kernel::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::Kernel::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Kernel*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
