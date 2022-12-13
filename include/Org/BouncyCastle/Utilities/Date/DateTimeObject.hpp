// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Utilities.Date
namespace Org::BouncyCastle::Utilities::Date {
  // Forward declaring type: DateTimeObject
  class DateTimeObject;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Date::DateTimeObject);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Date::DateTimeObject*, "Org.BouncyCastle.Utilities.Date", "DateTimeObject");
// Type namespace: Org.BouncyCastle.Utilities.Date
namespace Org::BouncyCastle::Utilities::Date {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Utilities.Date.DateTimeObject
  // [TokenAttribute] Offset: FFFFFFFF
  class DateTimeObject : public ::Il2CppObject {
    public:
    public:
    // private readonly System.DateTime dt
    // Size: 0x8
    // Offset: 0x10
    ::System::DateTime dt;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    public:
    // Creating conversion operator: operator ::System::DateTime
    constexpr operator ::System::DateTime() const noexcept {
      return dt;
    }
    // Get instance field reference: private readonly System.DateTime dt
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_dt();
    // public System.Void .ctor(System.DateTime dt)
    // Offset: 0x2676488
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DateTimeObject* New_ctor(::System::DateTime dt) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Utilities::Date::DateTimeObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DateTimeObject*, creationType>(dt)));
    }
    // public override System.String ToString()
    // Offset: 0x26764B4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // Org.BouncyCastle.Utilities.Date.DateTimeObject
  #pragma pack(pop)
  static check_size<sizeof(DateTimeObject), 16 + sizeof(::System::DateTime)> __Org_BouncyCastle_Utilities_Date_DateTimeObjectSizeCheck;
  static_assert(sizeof(DateTimeObject) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Date::DateTimeObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Date::DateTimeObject::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Utilities::Date::DateTimeObject::*)()>(&Org::BouncyCastle::Utilities::Date::DateTimeObject::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Date::DateTimeObject*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
