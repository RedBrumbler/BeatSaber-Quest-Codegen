// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: Regex
  class Regex;
  // Forward declaring type: Match
  class Match;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: MatchCollection
  class MatchCollection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::RegularExpressions::MatchCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::MatchCollection*, "System.Text.RegularExpressions", "MatchCollection");
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.MatchCollection
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 1082124
  class MatchCollection : public ::Il2CppObject/*, public ::System::Collections::ICollection*/ {
    public:
    public:
    // System.Text.RegularExpressions.Regex _regex
    // Size: 0x8
    // Offset: 0x10
    ::System::Text::RegularExpressions::Regex* regex;
    // Field size check
    static_assert(sizeof(::System::Text::RegularExpressions::Regex*) == 0x8);
    // System.Collections.ArrayList _matches
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::ArrayList* matches;
    // Field size check
    static_assert(sizeof(::System::Collections::ArrayList*) == 0x8);
    // System.Boolean _done
    // Size: 0x1
    // Offset: 0x20
    bool done;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: done and: input
    char __padding2[0x7] = {};
    // System.String _input
    // Size: 0x8
    // Offset: 0x28
    ::StringW input;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Int32 _beginning
    // Size: 0x4
    // Offset: 0x30
    int beginning;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 _length
    // Size: 0x4
    // Offset: 0x34
    int length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 _startat
    // Size: 0x4
    // Offset: 0x38
    int startat;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 _prevlen
    // Size: 0x4
    // Offset: 0x3C
    int prevlen;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::ICollection
    operator ::System::Collections::ICollection() noexcept {
      return *reinterpret_cast<::System::Collections::ICollection*>(this);
    }
    // Creating interface conversion operator: i_ICollection
    inline ::System::Collections::ICollection* i_ICollection() noexcept {
      return reinterpret_cast<::System::Collections::ICollection*>(this);
    }
    // Get static field: static private System.Int32 infinite
    static int _get_infinite();
    // Set static field: static private System.Int32 infinite
    static void _set_infinite(int value);
    // Get instance field reference: System.Text.RegularExpressions.Regex _regex
    [[deprecated("Use field access instead!")]] ::System::Text::RegularExpressions::Regex*& dyn__regex();
    // Get instance field reference: System.Collections.ArrayList _matches
    [[deprecated("Use field access instead!")]] ::System::Collections::ArrayList*& dyn__matches();
    // Get instance field reference: System.Boolean _done
    [[deprecated("Use field access instead!")]] bool& dyn__done();
    // Get instance field reference: System.String _input
    [[deprecated("Use field access instead!")]] ::StringW& dyn__input();
    // Get instance field reference: System.Int32 _beginning
    [[deprecated("Use field access instead!")]] int& dyn__beginning();
    // Get instance field reference: System.Int32 _length
    [[deprecated("Use field access instead!")]] int& dyn__length();
    // Get instance field reference: System.Int32 _startat
    [[deprecated("Use field access instead!")]] int& dyn__startat();
    // Get instance field reference: System.Int32 _prevlen
    [[deprecated("Use field access instead!")]] int& dyn__prevlen();
    // public System.Int32 get_Count()
    // Offset: 0x1C93B2C
    int get_Count();
    // public System.Object get_SyncRoot()
    // Offset: 0x1C93BC0
    ::Il2CppObject* get_SyncRoot();
    // System.Void .ctor(System.Text.RegularExpressions.Regex regex, System.String input, System.Int32 beginning, System.Int32 length, System.Int32 startat)
    // Offset: 0x1C93898
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MatchCollection* New_ctor(::System::Text::RegularExpressions::Regex* regex, ::StringW input, int beginning, int length, int startat) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::RegularExpressions::MatchCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MatchCollection*, creationType>(regex, input, beginning, length, startat)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1C93DF8
    static void _cctor();
    // System.Void .ctor()
    // Offset: 0x1C93E4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MatchCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::RegularExpressions::MatchCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MatchCollection*, creationType>()));
    }
    // System.Text.RegularExpressions.Match GetMatch(System.Int32 i)
    // Offset: 0x1C939BC
    ::System::Text::RegularExpressions::Match* GetMatch(int i);
    // public System.Void CopyTo(System.Array array, System.Int32 arrayIndex)
    // Offset: 0x1C93BC4
    void CopyTo(::System::Array* array, int arrayIndex);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x1C93D68
    ::System::Collections::IEnumerator* GetEnumerator();
  }; // System.Text.RegularExpressions.MatchCollection
  #pragma pack(pop)
  static check_size<sizeof(MatchCollection), 60 + sizeof(int)> __System_Text_RegularExpressions_MatchCollectionSizeCheck;
  static_assert(sizeof(MatchCollection) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::RegularExpressions::MatchCollection::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::RegularExpressions::MatchCollection::*)()>(&System::Text::RegularExpressions::MatchCollection::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::MatchCollection*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::MatchCollection::get_SyncRoot
// Il2CppName: get_SyncRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Text::RegularExpressions::MatchCollection::*)()>(&System::Text::RegularExpressions::MatchCollection::get_SyncRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::MatchCollection*), "get_SyncRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::MatchCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::MatchCollection::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Text::RegularExpressions::MatchCollection::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::MatchCollection*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::MatchCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::MatchCollection::GetMatch
// Il2CppName: GetMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::Match* (System::Text::RegularExpressions::MatchCollection::*)(int)>(&System::Text::RegularExpressions::MatchCollection::GetMatch)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::MatchCollection*), "GetMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::MatchCollection::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::MatchCollection::*)(::System::Array*, int)>(&System::Text::RegularExpressions::MatchCollection::CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* arrayIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::MatchCollection*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, arrayIndex});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::MatchCollection::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Text::RegularExpressions::MatchCollection::*)()>(&System::Text::RegularExpressions::MatchCollection::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::MatchCollection*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
