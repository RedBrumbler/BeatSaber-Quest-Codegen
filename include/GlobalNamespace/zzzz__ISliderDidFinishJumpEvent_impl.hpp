#pragma once
#include "GlobalNamespace/zzzz__ISliderDidFinishJumpEvent_def.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
//  Writing Method size for method: GlobalNamespace::ISliderDidFinishJumpEvent.HandleSliderDidFinishJump
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ISliderDidFinishJumpEvent::*)(GlobalNamespace::SliderController)>(&GlobalNamespace::ISliderDidFinishJumpEvent::HandleSliderDidFinishJump)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::ISliderDidFinishJumpEvent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ISliderDidFinishJumpEvent>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void GlobalNamespace::ISliderDidFinishJumpEvent::HandleSliderDidFinishJump(GlobalNamespace::SliderController sliderController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ISliderDidFinishJumpEvent>::get(),
                            "HandleSliderDidFinishJump",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SliderController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sliderController);
}
