// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.Dropdown
#include "UnityEngine/UI/Dropdown.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.Dropdown/OptionData
  class Dropdown::OptionData : public ::Il2CppObject {
    public:
    // private System.String m_Text
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_Text;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private UnityEngine.Sprite m_Image
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Sprite* m_Image;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // Creating value type constructor for type: OptionData
    OptionData(::Il2CppString* m_Text_ = {}, UnityEngine::Sprite* m_Image_ = {}) noexcept : m_Text{m_Text_}, m_Image{m_Image_} {}
    // public System.String get_text()
    // Offset: 0x1912BC0
    ::Il2CppString* get_text();
    // public System.Void set_text(System.String value)
    // Offset: 0x1912BC8
    void set_text(::Il2CppString* value);
    // public UnityEngine.Sprite get_image()
    // Offset: 0x1912BD0
    UnityEngine::Sprite* get_image();
    // public System.Void set_image(UnityEngine.Sprite value)
    // Offset: 0x1912BD8
    void set_image(UnityEngine::Sprite* value);
    // public System.Void .ctor(System.String text)
    // Offset: 0x1912BE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Dropdown::OptionData* New_ctor(::Il2CppString* text) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Dropdown::OptionData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Dropdown::OptionData*, creationType>(text)));
    }
    // public System.Void .ctor(UnityEngine.Sprite image)
    // Offset: 0x1912C14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Dropdown::OptionData* New_ctor(UnityEngine::Sprite* image) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Dropdown::OptionData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Dropdown::OptionData*, creationType>(image)));
    }
    // public System.Void .ctor(System.String text, UnityEngine.Sprite image)
    // Offset: 0x1912C40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Dropdown::OptionData* New_ctor(::Il2CppString* text, UnityEngine::Sprite* image) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Dropdown::OptionData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Dropdown::OptionData*, creationType>(text, image)));
    }
    // public System.Void .ctor()
    // Offset: 0x1912BE0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Dropdown::OptionData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Dropdown::OptionData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Dropdown::OptionData*, creationType>()));
    }
  }; // UnityEngine.UI.Dropdown/OptionData
  #pragma pack(pop)
  static check_size<sizeof(Dropdown::OptionData), 24 + sizeof(UnityEngine::Sprite*)> __UnityEngine_UI_Dropdown_OptionDataSizeCheck;
  static_assert(sizeof(Dropdown::OptionData) == 0x20);
  // Writing MetadataGetter for method: Dropdown::OptionData::get_text
  // Il2CppName: get_text
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Dropdown::OptionData::*)()>(&Dropdown::OptionData::get_text)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Dropdown::OptionData*), "get_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Dropdown::OptionData::set_text
  // Il2CppName: set_text
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Dropdown::OptionData::*)(::Il2CppString*)>(&Dropdown::OptionData::set_text)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Dropdown::OptionData*), "set_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
    }
  };
  // Writing MetadataGetter for method: Dropdown::OptionData::get_image
  // Il2CppName: get_image
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Sprite* (Dropdown::OptionData::*)()>(&Dropdown::OptionData::get_image)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Dropdown::OptionData*), "get_image", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Dropdown::OptionData::set_image
  // Il2CppName: set_image
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Dropdown::OptionData::*)(UnityEngine::Sprite*)>(&Dropdown::OptionData::set_image)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Dropdown::OptionData*), "set_image", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Sprite*>()});
    }
  };
  // Writing MetadataGetter for method: Dropdown::OptionData::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Dropdown::OptionData::*)(::Il2CppString*)>(&Dropdown::OptionData::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Dropdown::OptionData*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Dropdown::OptionData::*)(::Il2CppString*)>(&Dropdown::OptionData::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Dropdown::OptionData*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
    }
  };
  // Writing MetadataGetter for method: Dropdown::OptionData::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Dropdown::OptionData::*)(UnityEngine::Sprite*)>(&Dropdown::OptionData::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Dropdown::OptionData*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Sprite*>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Dropdown::OptionData::*)(UnityEngine::Sprite*)>(&Dropdown::OptionData::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Dropdown::OptionData*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Sprite*>()});
    }
  };
  // Writing MetadataGetter for method: Dropdown::OptionData::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Dropdown::OptionData::*)(::Il2CppString*, UnityEngine::Sprite*)>(&Dropdown::OptionData::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Dropdown::OptionData*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Sprite*>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Dropdown::OptionData::*)(::Il2CppString*, UnityEngine::Sprite*)>(&Dropdown::OptionData::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Dropdown::OptionData*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Sprite*>()});
    }
  };
  // Writing MetadataGetter for method: Dropdown::OptionData::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Dropdown::OptionData::*)()>(&Dropdown::OptionData::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Dropdown::OptionData*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Dropdown::OptionData::*)()>(&Dropdown::OptionData::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Dropdown::OptionData*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Dropdown::OptionData*, "UnityEngine.UI", "Dropdown/OptionData");
