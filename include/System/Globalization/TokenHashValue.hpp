// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.TokenType
#include "System/TokenType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Globalization
namespace System::Globalization {
  // Forward declaring type: TokenHashValue
  class TokenHashValue;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Globalization::TokenHashValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TokenHashValue*, "System.Globalization", "TokenHashValue");
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.TokenHashValue
  // [TokenAttribute] Offset: FFFFFFFF
  class TokenHashValue : public ::Il2CppObject {
    public:
    public:
    // System.String tokenString
    // Size: 0x8
    // Offset: 0x10
    ::StringW tokenString;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.TokenType tokenType
    // Size: 0x4
    // Offset: 0x18
    ::System::TokenType tokenType;
    // Field size check
    static_assert(sizeof(::System::TokenType) == 0x4);
    // System.Int32 tokenValue
    // Size: 0x4
    // Offset: 0x1C
    int tokenValue;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: System.String tokenString
    [[deprecated("Use field access instead!")]] ::StringW& dyn_tokenString();
    // Get instance field reference: System.TokenType tokenType
    [[deprecated("Use field access instead!")]] ::System::TokenType& dyn_tokenType();
    // Get instance field reference: System.Int32 tokenValue
    [[deprecated("Use field access instead!")]] int& dyn_tokenValue();
    // System.Void .ctor(System.String tokenString, System.TokenType tokenType, System.Int32 tokenValue)
    // Offset: 0x20730B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TokenHashValue* New_ctor(::StringW tokenString, ::System::TokenType tokenType, int tokenValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Globalization::TokenHashValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TokenHashValue*, creationType>(tokenString, tokenType, tokenValue)));
    }
  }; // System.Globalization.TokenHashValue
  #pragma pack(pop)
  static check_size<sizeof(TokenHashValue), 28 + sizeof(int)> __System_Globalization_TokenHashValueSizeCheck;
  static_assert(sizeof(TokenHashValue) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Globalization::TokenHashValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
