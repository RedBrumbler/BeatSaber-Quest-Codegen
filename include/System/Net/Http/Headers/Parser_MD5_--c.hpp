// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.Http.Headers.Parser/System.Net.Http.Headers.MD5
#include "System/Net/Http/Headers/Parser_MD5.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Http::Headers::Parser::MD5::$$c);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::Parser::MD5::$$c*, "System.Net.Http.Headers", "Parser/MD5/<>c");
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.Headers.Parser/System.Net.Http.Headers.MD5/System.Net.Http.Headers.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Parser::MD5::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Net.Http.Headers.Parser/System.Net.Http.Headers.MD5/System.Net.Http.Headers.<>c <>9
    static ::System::Net::Http::Headers::Parser::MD5::$$c* _get_$$9();
    // Set static field: static public readonly System.Net.Http.Headers.Parser/System.Net.Http.Headers.MD5/System.Net.Http.Headers.<>c <>9
    static void _set_$$9(::System::Net::Http::Headers::Parser::MD5::$$c* value);
    // static private System.Void .cctor()
    // Offset: 0x19F816C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x19F81D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Parser::MD5::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Http::Headers::Parser::MD5::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Parser::MD5::$$c*, creationType>()));
    }
    // System.String <.cctor>b__2_0(System.Object l)
    // Offset: 0x19F81D8
    ::StringW $_cctor$b__2_0(::Il2CppObject* l);
  }; // System.Net.Http.Headers.Parser/System.Net.Http.Headers.MD5/System.Net.Http.Headers.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::Parser::MD5::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::Http::Headers::Parser::MD5::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Parser::MD5::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::Parser::MD5::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::Headers::Parser::MD5::$$c::$_cctor$b__2_0
// Il2CppName: <.cctor>b__2_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Http::Headers::Parser::MD5::$$c::*)(::Il2CppObject*)>(&System::Net::Http::Headers::Parser::MD5::$$c::$_cctor$b__2_0)> {
  static const MethodInfo* get() {
    static auto* l = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Parser::MD5::$$c*), "<.cctor>b__2_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{l});
  }
};
