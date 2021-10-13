// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IConvertible
  class IConvertible;
  // Forward declaring type: ValueType
  class ValueType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: IStateTable`3
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TStateTable, typename TType, typename TState>
  class IStateTable_3 {
    public:
    // public TState GetState(TType type)
    // Offset: 0xFFFFFFFF
    TState GetState(TType type) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::IStateTable_3::GetState");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetState", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(type)})));
      return ::il2cpp_utils::RunMethodThrow<TState, false>(this, ___internal__method, type);
    }
    // public System.Void SetState(TType type, TState state)
    // Offset: 0xFFFFFFFF
    void SetState(TType type, TState state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::IStateTable_3::SetState");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SetState", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(type), ::il2cpp_utils::ExtractType(state)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, type, state);
    }
    // public TStateTable GetDelta(in TStateTable stateTable)
    // Offset: 0xFFFFFFFF
    TStateTable GetDelta(ByRef<TStateTable> stateTable) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::IStateTable_3::GetDelta");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetDelta", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(stateTable)})));
      return ::il2cpp_utils::RunMethodThrow<TStateTable, false>(this, ___internal__method, byref(stateTable));
    }
    // public TStateTable ApplyDelta(in TStateTable delta)
    // Offset: 0xFFFFFFFF
    TStateTable ApplyDelta(ByRef<TStateTable> delta) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::IStateTable_3::ApplyDelta");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ApplyDelta", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(delta)})));
      return ::il2cpp_utils::RunMethodThrow<TStateTable, false>(this, ___internal__method, byref(delta));
    }
    // public System.Int32 GetSize()
    // Offset: 0xFFFFFFFF
    int GetSize() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::IStateTable_3::GetSize");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetSize", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
  }; // IStateTable`3
  // Could not write size check! Type: IStateTable`3 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::IStateTable_3, "", "IStateTable`3");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
