#pragma once
#include "System/Runtime/InteropServices/zzzz__SafeHandle_impl.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_def.hpp"
//  Writing Method size for method: Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid::*)(bool)>(&Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x22f8910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid.get_IsInvalid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid::*)()>(&Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid::get_IsInvalid)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x22f8a34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "ownsHandle", ty: "bool", modifiers: "", def_value: None }]
 Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid::SafeHandleZeroOrMinusOneIsInvalid(bool ownsHandle)  : System::Runtime::InteropServices::SafeHandle(THROW_UNLESS(::il2cpp_utils::New<SafeHandleZeroOrMinusOneIsInvalid>(ownsHandle))) {}
 void Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid::_ctor(bool ownsHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ownsHandle);
}
 bool Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid::get_IsInvalid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid>::get(),
                            "get_IsInvalid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
