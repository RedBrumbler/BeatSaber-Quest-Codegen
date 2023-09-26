#pragma once
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_impl.hpp"
#include "UnityEngine/InputSystem/Processors/zzzz__NormalizeVector3Processor_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::Processors::NormalizeVector3Processor.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (UnityEngine::InputSystem::Processors::NormalizeVector3Processor::*)(UnityEngine::Vector3, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::Processors::NormalizeVector3Processor::Process)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x29961d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Processors::NormalizeVector3Processor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Processors::NormalizeVector3Processor>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Processors::NormalizeVector3Processor.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Processors::NormalizeVector3Processor::*)()>(&UnityEngine::InputSystem::Processors::NormalizeVector3Processor::ToString)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x29962a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Processors::NormalizeVector3Processor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Processors::NormalizeVector3Processor>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Processors::NormalizeVector3Processor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Processors::NormalizeVector3Processor::*)()>(&UnityEngine::InputSystem::Processors::NormalizeVector3Processor::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x29962e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Processors::NormalizeVector3Processor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::Vector3 UnityEngine::InputSystem::Processors::NormalizeVector3Processor::Process(UnityEngine::Vector3 value, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Processors::NormalizeVector3Processor>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method, value, control);
}
 ::StringW UnityEngine::InputSystem::Processors::NormalizeVector3Processor::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Processors::NormalizeVector3Processor>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 UnityEngine::InputSystem::Processors::NormalizeVector3Processor::NormalizeVector3Processor()  : UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3>(THROW_UNLESS(::il2cpp_utils::New<NormalizeVector3Processor>())) {}
 void UnityEngine::InputSystem::Processors::NormalizeVector3Processor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Processors::NormalizeVector3Processor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
