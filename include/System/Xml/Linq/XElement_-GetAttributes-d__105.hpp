// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Linq.XElement
#include "System/Xml/Linq/XElement.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Linq
namespace System::Xml::Linq {
  // Forward declaring type: XAttribute
  class XAttribute;
  // Forward declaring type: XName
  class XName;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Linq::XElement::$GetAttributes$d__105);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XElement::$GetAttributes$d__105*, "System.Xml.Linq", "XElement/<GetAttributes>d__105");
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Linq.XElement/System.Xml.Linq.<GetAttributes>d__105
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class XElement::$GetAttributes$d__105 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XAttribute*>, public ::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XAttribute*>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Xml.Linq.XAttribute <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::System::Xml::Linq::XAttribute* $$2__current;
    // Field size check
    static_assert(sizeof(::System::Xml::Linq::XAttribute*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: $$4__this
    char __padding2[0x4] = {};
    // public System.Xml.Linq.XElement <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::System::Xml::Linq::XElement* $$4__this;
    // Field size check
    static_assert(sizeof(::System::Xml::Linq::XElement*) == 0x8);
    // private System.Xml.Linq.XAttribute <a>5__1
    // Size: 0x8
    // Offset: 0x30
    ::System::Xml::Linq::XAttribute* $a$5__1;
    // Field size check
    static_assert(sizeof(::System::Xml::Linq::XAttribute*) == 0x8);
    // private System.Xml.Linq.XName name
    // Size: 0x8
    // Offset: 0x38
    ::System::Xml::Linq::XName* name;
    // Field size check
    static_assert(sizeof(::System::Xml::Linq::XName*) == 0x8);
    // public System.Xml.Linq.XName <>3__name
    // Size: 0x8
    // Offset: 0x40
    ::System::Xml::Linq::XName* $$3__name;
    // Field size check
    static_assert(sizeof(::System::Xml::Linq::XName*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XAttribute*>
    operator ::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XAttribute*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XAttribute*>*>(this);
    }
    // Creating interface conversion operator: i_XAttribute
    inline ::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XAttribute*>* i_XAttribute() noexcept {
      return reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XAttribute*>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XAttribute*>
    operator ::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XAttribute*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XAttribute*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Xml.Linq.XAttribute <>2__current
    [[deprecated("Use field access instead!")]] ::System::Xml::Linq::XAttribute*& dyn_$$2__current();
    // Get instance field reference: private System.Int32 <>l__initialThreadId
    [[deprecated("Use field access instead!")]] int& dyn_$$l__initialThreadId();
    // Get instance field reference: public System.Xml.Linq.XElement <>4__this
    [[deprecated("Use field access instead!")]] ::System::Xml::Linq::XElement*& dyn_$$4__this();
    // Get instance field reference: private System.Xml.Linq.XAttribute <a>5__1
    [[deprecated("Use field access instead!")]] ::System::Xml::Linq::XAttribute*& dyn_$a$5__1();
    // Get instance field reference: private System.Xml.Linq.XName name
    [[deprecated("Use field access instead!")]] ::System::Xml::Linq::XName*& dyn_name();
    // Get instance field reference: public System.Xml.Linq.XName <>3__name
    [[deprecated("Use field access instead!")]] ::System::Xml::Linq::XName*& dyn_$$3__name();
    // private System.Xml.Linq.XAttribute System.Collections.Generic.IEnumerator<System.Xml.Linq.XAttribute>.get_Current()
    // Offset: 0x2B41920
    ::System::Xml::Linq::XAttribute* System_Collections_Generic_IEnumerator$System_Xml_Linq_XAttribute$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x2B41988
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x2B416A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XElement::$GetAttributes$d__105* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XElement::$GetAttributes$d__105::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XElement::$GetAttributes$d__105*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x2B41868
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x2B4186C
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x2B41928
    void System_Collections_IEnumerator_Reset();
    // private System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XAttribute> System.Collections.Generic.IEnumerable<System.Xml.Linq.XAttribute>.GetEnumerator()
    // Offset: 0x2B41990
    ::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XAttribute*>* System_Collections_Generic_IEnumerable$System_Xml_Linq_XAttribute$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x2B41A44
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // System.Xml.Linq.XElement/System.Xml.Linq.<GetAttributes>d__105
  #pragma pack(pop)
  static check_size<sizeof(XElement::$GetAttributes$d__105), 64 + sizeof(::System::Xml::Linq::XName*)> __System_Xml_Linq_XElement_$GetAttributes$d__105SizeCheck;
  static_assert(sizeof(XElement::$GetAttributes$d__105) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Linq::XElement::$GetAttributes$d__105::System_Collections_Generic_IEnumerator$System_Xml_Linq_XAttribute$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Xml.Linq.XAttribute>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Linq::XAttribute* (System::Xml::Linq::XElement::$GetAttributes$d__105::*)()>(&System::Xml::Linq::XElement::$GetAttributes$d__105::System_Collections_Generic_IEnumerator$System_Xml_Linq_XAttribute$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XElement::$GetAttributes$d__105*), "System.Collections.Generic.IEnumerator<System.Xml.Linq.XAttribute>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XElement::$GetAttributes$d__105::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Linq::XElement::$GetAttributes$d__105::*)()>(&System::Xml::Linq::XElement::$GetAttributes$d__105::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XElement::$GetAttributes$d__105*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XElement::$GetAttributes$d__105::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Linq::XElement::$GetAttributes$d__105::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XElement::$GetAttributes$d__105::*)()>(&System::Xml::Linq::XElement::$GetAttributes$d__105::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XElement::$GetAttributes$d__105*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XElement::$GetAttributes$d__105::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Linq::XElement::$GetAttributes$d__105::*)()>(&System::Xml::Linq::XElement::$GetAttributes$d__105::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XElement::$GetAttributes$d__105*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XElement::$GetAttributes$d__105::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XElement::$GetAttributes$d__105::*)()>(&System::Xml::Linq::XElement::$GetAttributes$d__105::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XElement::$GetAttributes$d__105*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XElement::$GetAttributes$d__105::System_Collections_Generic_IEnumerable$System_Xml_Linq_XAttribute$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<System.Xml.Linq.XAttribute>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XAttribute*>* (System::Xml::Linq::XElement::$GetAttributes$d__105::*)()>(&System::Xml::Linq::XElement::$GetAttributes$d__105::System_Collections_Generic_IEnumerable$System_Xml_Linq_XAttribute$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XElement::$GetAttributes$d__105*), "System.Collections.Generic.IEnumerable<System.Xml.Linq.XAttribute>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XElement::$GetAttributes$d__105::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Xml::Linq::XElement::$GetAttributes$d__105::*)()>(&System::Xml::Linq::XElement::$GetAttributes$d__105::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XElement::$GetAttributes$d__105*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
