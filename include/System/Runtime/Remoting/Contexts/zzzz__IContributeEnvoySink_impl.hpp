#pragma once
#include "System/Runtime/Remoting/Contexts/zzzz__IContributeEnvoySink_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::Contexts::IContributeEnvoySink.GetEnvoySink
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessageSink (System::Runtime::Remoting::Contexts::IContributeEnvoySink::*)(System::MarshalByRefObject, System::Runtime::Remoting::Messaging::IMessageSink)>(&System::Runtime::Remoting::Contexts::IContributeEnvoySink::GetEnvoySink)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::Contexts::IContributeEnvoySink),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::IContributeEnvoySink>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 System::Runtime::Remoting::Messaging::IMessageSink System::Runtime::Remoting::Contexts::IContributeEnvoySink::GetEnvoySink(System::MarshalByRefObject obj, System::Runtime::Remoting::Messaging::IMessageSink nextSink)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::IContributeEnvoySink>::get(),
                            "GetEnvoySink",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::MarshalByRefObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessageSink>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Messaging::IMessageSink, false>(const_cast<void*>(instance), ___internal_method, obj, nextSink);
}
