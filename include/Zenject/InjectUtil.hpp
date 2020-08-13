// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.TypeValuePair
#include "Zenject/TypeValuePair.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.InjectUtil
  class InjectUtil : public ::CsObject {
    public:
    // Nested type: Zenject::InjectUtil::$$c
    class $$c;
    // static public System.Collections.Generic.List`1<Zenject.TypeValuePair> CreateArgList(System.Collections.Generic.IEnumerable`1<System.Object> args)
    // Offset: 0xF37CE8
    static System::Collections::Generic::List_1<Zenject::TypeValuePair>* CreateArgList(System::Collections::Generic::IEnumerable_1<::CsObject*>* args);
    // static public Zenject.TypeValuePair CreateTypePair(T param)
    // Offset: 0xFFFFFFFF
    template<class T>
    static Zenject::TypeValuePair CreateTypePair(T param) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::TypeValuePair>("Zenject", "InjectUtil", "CreateTypePair", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, param)));
    }
    // static public System.Collections.Generic.List`1<Zenject.TypeValuePair> CreateArgListExplicit(T param)
    // Offset: 0xFFFFFFFF
    template<class T>
    static System::Collections::Generic::List_1<Zenject::TypeValuePair>* CreateArgListExplicit(T param) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<System::Collections::Generic::List_1<Zenject::TypeValuePair>*>("Zenject", "InjectUtil", "CreateArgListExplicit", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, param)));
    }
    // static public System.Collections.Generic.List`1<Zenject.TypeValuePair> CreateArgListExplicit(TParam1 param1, TParam2 param2)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2>
    static System::Collections::Generic::List_1<Zenject::TypeValuePair>* CreateArgListExplicit(TParam1 param1, TParam2 param2) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<System::Collections::Generic::List_1<Zenject::TypeValuePair>*>("Zenject", "InjectUtil", "CreateArgListExplicit", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get()}, param1, param2)));
    }
    // static public System.Collections.Generic.List`1<Zenject.TypeValuePair> CreateArgListExplicit(TParam1 param1, TParam2 param2, TParam3 param3)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2, class TParam3>
    static System::Collections::Generic::List_1<Zenject::TypeValuePair>* CreateArgListExplicit(TParam1 param1, TParam2 param2, TParam3 param3) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<System::Collections::Generic::List_1<Zenject::TypeValuePair>*>("Zenject", "InjectUtil", "CreateArgListExplicit", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get()}, param1, param2, param3)));
    }
    // static public System.Collections.Generic.List`1<Zenject.TypeValuePair> CreateArgListExplicit(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2, class TParam3, class TParam4>
    static System::Collections::Generic::List_1<Zenject::TypeValuePair>* CreateArgListExplicit(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<System::Collections::Generic::List_1<Zenject::TypeValuePair>*>("Zenject", "InjectUtil", "CreateArgListExplicit", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get()}, param1, param2, param3, param4)));
    }
    // static public System.Collections.Generic.List`1<Zenject.TypeValuePair> CreateArgListExplicit(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2, class TParam3, class TParam4, class TParam5>
    static System::Collections::Generic::List_1<Zenject::TypeValuePair>* CreateArgListExplicit(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<System::Collections::Generic::List_1<Zenject::TypeValuePair>*>("Zenject", "InjectUtil", "CreateArgListExplicit", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get()}, param1, param2, param3, param4, param5)));
    }
    // static public System.Collections.Generic.List`1<Zenject.TypeValuePair> CreateArgListExplicit(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5, TParam6 param6)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2, class TParam3, class TParam4, class TParam5, class TParam6>
    static System::Collections::Generic::List_1<Zenject::TypeValuePair>* CreateArgListExplicit(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5, TParam6 param6) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<System::Collections::Generic::List_1<Zenject::TypeValuePair>*>("Zenject", "InjectUtil", "CreateArgListExplicit", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get()}, param1, param2, param3, param4, param5, param6)));
    }
    // static public System.Boolean PopValueWithType(System.Collections.Generic.List`1<Zenject.TypeValuePair> extraArgMap, System.Type injectedFieldType, System.Object value)
    // Offset: 0xF37E20
    static bool PopValueWithType(System::Collections::Generic::List_1<Zenject::TypeValuePair>* extraArgMap, System::Type* injectedFieldType, ::CsObject*& value);
  }; // Zenject.InjectUtil
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::InjectUtil*, "Zenject", "InjectUtil");
#pragma pack(pop)
