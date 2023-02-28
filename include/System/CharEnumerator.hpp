// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Forward declaring type: CharEnumerator
  class CharEnumerator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::CharEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::CharEnumerator*, "System", "CharEnumerator");
// Type namespace: System
namespace System {
  // Size: 0x1E
  #pragma pack(push, 1)
  // Autogenerated type: System.CharEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 107A104
  class CharEnumerator : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppChar>, public ::System::ICloneable*/ {
    public:
    public:
    // private System.String str
    // Size: 0x8
    // Offset: 0x10
    ::StringW str;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 index
    // Size: 0x4
    // Offset: 0x18
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Char currentElement
    // Size: 0x2
    // Offset: 0x1C
    ::Il2CppChar currentElement;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppChar>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppChar>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppChar>*>(this);
    }
    // Creating interface conversion operator: i_Il2CppChar
    inline ::System::Collections::Generic::IEnumerator_1<::Il2CppChar>* i_Il2CppChar() noexcept {
      return reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppChar>*>(this);
    }
    // Creating interface conversion operator: operator ::System::ICloneable
    operator ::System::ICloneable() noexcept {
      return *reinterpret_cast<::System::ICloneable*>(this);
    }
    // Creating interface conversion operator: i_ICloneable
    inline ::System::ICloneable* i_ICloneable() noexcept {
      return reinterpret_cast<::System::ICloneable*>(this);
    }
    // Get instance field reference: private System.String str
    [[deprecated("Use field access instead!")]] ::StringW& dyn_str();
    // Get instance field reference: private System.Int32 index
    [[deprecated("Use field access instead!")]] int& dyn_index();
    // Get instance field reference: private System.Char currentElement
    [[deprecated("Use field access instead!")]] ::Il2CppChar& dyn_currentElement();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1F351A4
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Char get_Current()
    // Offset: 0x1F35288
    ::Il2CppChar get_Current();
    // System.Void .ctor(System.String str)
    // Offset: 0x1F350F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CharEnumerator* New_ctor(::StringW str) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::CharEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CharEnumerator*, creationType>(str)));
    }
    // public System.Object Clone()
    // Offset: 0x1F35124
    ::Il2CppObject* Clone();
    // public System.Boolean MoveNext()
    // Offset: 0x1F3512C
    bool MoveNext();
    // public System.Void Dispose()
    // Offset: 0x1F3518C
    void Dispose();
    // public System.Void Reset()
    // Offset: 0x1F3534C
    void Reset();
    // System.Void .ctor()
    // Offset: 0x1F3535C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CharEnumerator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::CharEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CharEnumerator*, creationType>()));
    }
  }; // System.CharEnumerator
  #pragma pack(pop)
  static check_size<sizeof(CharEnumerator), 28 + sizeof(::Il2CppChar)> __System_CharEnumeratorSizeCheck;
  static_assert(sizeof(CharEnumerator) == 0x1E);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::CharEnumerator::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::CharEnumerator::*)()>(&System::CharEnumerator::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::CharEnumerator*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::CharEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::CharEnumerator::*)()>(&System::CharEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::CharEnumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::CharEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::CharEnumerator::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::CharEnumerator::*)()>(&System::CharEnumerator::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::CharEnumerator*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::CharEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::CharEnumerator::*)()>(&System::CharEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::CharEnumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::CharEnumerator::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::CharEnumerator::*)()>(&System::CharEnumerator::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::CharEnumerator*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::CharEnumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::CharEnumerator::*)()>(&System::CharEnumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::CharEnumerator*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::CharEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
