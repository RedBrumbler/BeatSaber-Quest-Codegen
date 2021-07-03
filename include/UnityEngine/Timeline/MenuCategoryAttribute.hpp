// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.MenuCategoryAttribute
  // [AttributeUsageAttribute] Offset: DD78A4
  class MenuCategoryAttribute : public System::Attribute {
    public:
    // public readonly System.String category
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* category;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: MenuCategoryAttribute
    MenuCategoryAttribute(::Il2CppString* category_ = {}) noexcept : category{category_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return category;
    }
    // public System.Void .ctor(System.String category)
    // Offset: 0x17E3B9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MenuCategoryAttribute* New_ctor(::Il2CppString* category) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::MenuCategoryAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MenuCategoryAttribute*, creationType>(category)));
    }
  }; // UnityEngine.Timeline.MenuCategoryAttribute
  #pragma pack(pop)
  static check_size<sizeof(MenuCategoryAttribute), 16 + sizeof(::Il2CppString*)> __UnityEngine_Timeline_MenuCategoryAttributeSizeCheck;
  static_assert(sizeof(MenuCategoryAttribute) == 0x18);
  // Writing MetadataGetter for method: MenuCategoryAttribute::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MenuCategoryAttribute::*)(::Il2CppString*)>(&MenuCategoryAttribute::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MenuCategoryAttribute*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MenuCategoryAttribute::*)(::Il2CppString*)>(&MenuCategoryAttribute::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MenuCategoryAttribute*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::MenuCategoryAttribute*, "UnityEngine.Timeline", "MenuCategoryAttribute");
