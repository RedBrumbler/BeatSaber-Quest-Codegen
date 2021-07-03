// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.CustomAttributeData
#include "System/Reflection/CustomAttributeData.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.CustomAttributeData/LazyCAttrData
  class CustomAttributeData::LazyCAttrData : public ::Il2CppObject {
    public:
    // System.Reflection.Assembly assembly
    // Size: 0x8
    // Offset: 0x10
    System::Reflection::Assembly* assembly;
    // Field size check
    static_assert(sizeof(System::Reflection::Assembly*) == 0x8);
    // System.IntPtr data
    // Size: 0x8
    // Offset: 0x18
    System::IntPtr data;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // System.UInt32 data_length
    // Size: 0x4
    // Offset: 0x20
    uint data_length;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: LazyCAttrData
    LazyCAttrData(System::Reflection::Assembly* assembly_ = {}, System::IntPtr data_ = {}, uint data_length_ = {}) noexcept : assembly{assembly_}, data{data_}, data_length{data_length_} {}
    // public System.Void .ctor()
    // Offset: 0x1C75A58
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomAttributeData::LazyCAttrData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::CustomAttributeData::LazyCAttrData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomAttributeData::LazyCAttrData*, creationType>()));
    }
  }; // System.Reflection.CustomAttributeData/LazyCAttrData
  #pragma pack(pop)
  static check_size<sizeof(CustomAttributeData::LazyCAttrData), 32 + sizeof(uint)> __System_Reflection_CustomAttributeData_LazyCAttrDataSizeCheck;
  static_assert(sizeof(CustomAttributeData::LazyCAttrData) == 0x24);
  // Writing MetadataGetter for method: CustomAttributeData::LazyCAttrData::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CustomAttributeData::LazyCAttrData::*)()>(&CustomAttributeData::LazyCAttrData::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(CustomAttributeData::LazyCAttrData*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CustomAttributeData::LazyCAttrData::*)()>(&CustomAttributeData::LazyCAttrData::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(CustomAttributeData::LazyCAttrData*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::CustomAttributeData::LazyCAttrData*, "System.Reflection", "CustomAttributeData/LazyCAttrData");
