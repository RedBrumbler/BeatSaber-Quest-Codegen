// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.Assertions
namespace UnityEngine::Assertions {
  // Forward declaring type: AssertionException
  class AssertionException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Assertions::AssertionException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Assertions::AssertionException*, "UnityEngine.Assertions", "AssertionException");
// Type namespace: UnityEngine.Assertions
namespace UnityEngine::Assertions {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Assertions.AssertionException
  // [TokenAttribute] Offset: FFFFFFFF
  class AssertionException : public ::System::Exception {
    public:
    public:
    // private System.String m_UserMessage
    // Size: 0x8
    // Offset: 0x88
    ::StringW m_UserMessage;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return m_UserMessage;
    }
    // Get instance field reference: private System.String m_UserMessage
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_UserMessage();
    // public System.Void .ctor(System.String message, System.String userMessage)
    // Offset: 0x200E6CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssertionException* New_ctor(::StringW message, ::StringW userMessage) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Assertions::AssertionException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssertionException*, creationType>(message, userMessage)));
    }
    // public override System.String get_Message()
    // Offset: 0x200EAD8
    // Implemented from: System.Exception
    // Base method: System.String Exception::get_Message()
    ::StringW get_Message();
  }; // UnityEngine.Assertions.AssertionException
  #pragma pack(pop)
  static check_size<sizeof(AssertionException), 136 + sizeof(::StringW)> __UnityEngine_Assertions_AssertionExceptionSizeCheck;
  static_assert(sizeof(AssertionException) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Assertions::AssertionException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Assertions::AssertionException::get_Message
// Il2CppName: get_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Assertions::AssertionException::*)()>(&UnityEngine::Assertions::AssertionException::get_Message)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Assertions::AssertionException*), "get_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
