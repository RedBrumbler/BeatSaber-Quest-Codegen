// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: Binder
  class Binder;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.Activator
  class Activator : public ::CsObject {
    public:
    // static public System.Object CreateInstance(System.Type type, System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Object[] args, System.Globalization.CultureInfo culture)
    // Offset: 0x10B689C
    static ::CsObject* CreateInstance(System::Type* type, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder* binder, ::Array<::CsObject*>* args, System::Globalization::CultureInfo* culture);
    // static public System.Object CreateInstance(System.Type type, System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Object[] args, System.Globalization.CultureInfo culture, System.Object[] activationAttributes)
    // Offset: 0x10B68A4
    static ::CsObject* CreateInstance(System::Type* type, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder* binder, ::Array<::CsObject*>* args, System::Globalization::CultureInfo* culture, ::Array<::CsObject*>* activationAttributes);
    // static public System.Object CreateInstance(System.Type type, System.Object[] args)
    // Offset: 0x10B6B08
    static ::CsObject* CreateInstance(System::Type* type, ::Array<::CsObject*>* args);
    // static public System.Object CreateInstance(System.Type type)
    // Offset: 0x10B6B20
    static ::CsObject* CreateInstance(System::Type* type);
    // static public System.Object CreateInstance(System.Type type, System.Boolean nonPublic)
    // Offset: 0x10B6B28
    static ::CsObject* CreateInstance(System::Type* type, bool nonPublic);
    // static public T CreateInstance()
    // Offset: 0xFFFFFFFF
    template<class T>
    static T CreateInstance() {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>("System", "Activator", "CreateInstance", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()})));
    }
  }; // System.Activator
}
DEFINE_IL2CPP_ARG_TYPE(System::Activator*, "System", "Activator");
#pragma pack(pop)
