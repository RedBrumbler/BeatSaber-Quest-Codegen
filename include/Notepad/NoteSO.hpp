// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: Notepad.NoteURL
#include "Notepad/NoteURL.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Notepad
namespace Notepad {
  // Forward declaring type: NoteSO
  class NoteSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Notepad::NoteSO);
DEFINE_IL2CPP_ARG_TYPE(::Notepad::NoteSO*, "Notepad", "NoteSO");
// Type namespace: Notepad
namespace Notepad {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Notepad.NoteSO
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteSO : public ::UnityEngine::ScriptableObject {
    public:
    public:
    // public System.String title
    // Size: 0x8
    // Offset: 0x18
    ::StringW title;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String content
    // Size: 0x8
    // Offset: 0x20
    ::StringW content;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public Notepad.NoteURL[] urls
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::Notepad::NoteURL> urls;
    // Field size check
    static_assert(sizeof(::ArrayW<::Notepad::NoteURL>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.String title
    [[deprecated("Use field access instead!")]] ::StringW& dyn_title();
    // Get instance field reference: public System.String content
    [[deprecated("Use field access instead!")]] ::StringW& dyn_content();
    // Get instance field reference: public Notepad.NoteURL[] urls
    [[deprecated("Use field access instead!")]] ::ArrayW<::Notepad::NoteURL>& dyn_urls();
    // public System.Void .ctor()
    // Offset: 0x2BA3990
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Notepad::NoteSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteSO*, creationType>()));
    }
  }; // Notepad.NoteSO
  #pragma pack(pop)
  static check_size<sizeof(NoteSO), 40 + sizeof(::ArrayW<::Notepad::NoteURL>)> __Notepad_NoteSOSizeCheck;
  static_assert(sizeof(NoteSO) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Notepad::NoteSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
