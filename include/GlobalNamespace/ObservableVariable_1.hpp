// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: IValue`1
#include "GlobalNamespace/IValue_1.hpp"
// Including type: IObservableChange
#include "GlobalNamespace/IObservableChange.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ObservableVariable`1<T>
  template<typename T>
  class ObservableVariable_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::ObservableVariable_1, "", "ObservableVariable`1");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: ObservableVariable`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class ObservableVariable_1 : public ::Il2CppObject/*, public GlobalNamespace::IValue_1<T>, public GlobalNamespace::IObservableChange*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Action didChangeEvent
    // Size: 0x8
    // Offset: 0x0
    System::Action* didChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private T _value
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T value;
    public:
    // Creating interface conversion operator: operator GlobalNamespace::IValue_1<T>
    operator GlobalNamespace::IValue_1<T>() noexcept {
      return *reinterpret_cast<GlobalNamespace::IValue_1<T>*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::IObservableChange
    operator GlobalNamespace::IObservableChange() noexcept {
      return *reinterpret_cast<GlobalNamespace::IObservableChange*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Action didChangeEvent
    System::Action*& dyn_didChangeEvent() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ObservableVariable_1::dyn_didChangeEvent");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "didChangeEvent"))->offset;
      return *reinterpret_cast<System::Action**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private T _value
    T& dyn__value() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ObservableVariable_1::dyn__value");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_value"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public T get_value()
    // Offset: 0xFFFFFFFF
    T get_value() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ObservableVariable_1::get_value");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_value", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // public System.Void set_value(T value)
    // Offset: 0xFFFFFFFF
    void set_value(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ObservableVariable_1::set_value");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_value", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void add_didChangeEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void add_didChangeEvent(System::Action* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ObservableVariable_1::add_didChangeEvent");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "add_didChangeEvent", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void remove_didChangeEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void remove_didChangeEvent(System::Action* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ObservableVariable_1::remove_didChangeEvent");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "remove_didChangeEvent", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObservableVariable_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ObservableVariable_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObservableVariable_1<T>*, creationType>()));
    }
  }; // ObservableVariable`1
  // Could not write size check! Type: ObservableVariable`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
