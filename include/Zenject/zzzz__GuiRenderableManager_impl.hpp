#pragma once
#include "Zenject/zzzz__GuiRenderableManager_def.hpp"
#include "Zenject/zzzz__IGuiRenderable_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "ModestTree/Util/zzzz__ValuePair_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: Zenject::Zenject__GuiRenderableManager__RenderableInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__GuiRenderableManager__RenderableInfo::*)(Zenject::IGuiRenderable, int32_t)>(&Zenject::Zenject__GuiRenderableManager__RenderableInfo::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2dcaaf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__GuiRenderableManager__RenderableInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::IGuiRenderable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__GuiRenderableManager__RenderableInfo.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::Zenject__GuiRenderableManager__RenderableInfo::__zenCreate)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2dcb274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__GuiRenderableManager__RenderableInfo>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__GuiRenderableManager__RenderableInfo.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::Zenject__GuiRenderableManager__RenderableInfo::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x2dcb384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__GuiRenderableManager__RenderableInfo>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Zenject__GuiRenderableManager__RenderableInfo::__set_Renderable(Zenject::IGuiRenderable value)  {
::cordl_internals::setInstanceField<Zenject::IGuiRenderable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::IGuiRenderable>(value));
}
constexpr Zenject::IGuiRenderable Zenject::Zenject__GuiRenderableManager__RenderableInfo::__get_Renderable() const {
return ::cordl_internals::getInstanceField<Zenject::IGuiRenderable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Zenject__GuiRenderableManager__RenderableInfo::__set_Priority(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Zenject::Zenject__GuiRenderableManager__RenderableInfo::__get_Priority() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "renderable", ty: "Zenject::IGuiRenderable", modifiers: "", def_value: None }, CppParam { name: "priority", ty: "int32_t", modifiers: "", def_value: None }]
 Zenject::Zenject__GuiRenderableManager__RenderableInfo::Zenject__GuiRenderableManager__RenderableInfo(Zenject::IGuiRenderable renderable, int32_t priority)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Zenject__GuiRenderableManager__RenderableInfo>(renderable, priority))) {}
 void Zenject::Zenject__GuiRenderableManager__RenderableInfo::_ctor(Zenject::IGuiRenderable renderable, int32_t priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__GuiRenderableManager__RenderableInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::IGuiRenderable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, renderable, priority);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__GuiRenderableManager__RenderableInfo::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__GuiRenderableManager__RenderableInfo>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__GuiRenderableManager__RenderableInfo::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__GuiRenderableManager__RenderableInfo>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: Zenject::Zenject__GuiRenderableManager____c__DisplayClass1_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__GuiRenderableManager____c__DisplayClass1_0::*)()>(&Zenject::Zenject__GuiRenderableManager____c__DisplayClass1_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dcaaf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__GuiRenderableManager____c__DisplayClass1_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__GuiRenderableManager____c__DisplayClass1_0.__ctor_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::Zenject__GuiRenderableManager____c__DisplayClass1_0::*)(ModestTree::Util::ValuePair_2<System::Type,int32_t>)>(&Zenject::Zenject__GuiRenderableManager____c__DisplayClass1_0::__ctor_b__1)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2dcb688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__GuiRenderableManager____c__DisplayClass1_0>::get(),
                            "<.ctor>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ModestTree::Util::ValuePair_2<System::Type,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__GuiRenderableManager____c__DisplayClass1_0.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::Zenject__GuiRenderableManager____c__DisplayClass1_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2dcb708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__GuiRenderableManager____c__DisplayClass1_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__GuiRenderableManager____c__DisplayClass1_0.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::Zenject__GuiRenderableManager____c__DisplayClass1_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2dcb764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__GuiRenderableManager____c__DisplayClass1_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Zenject__GuiRenderableManager____c__DisplayClass1_0::__set_renderable(Zenject::IGuiRenderable value)  {
::cordl_internals::setInstanceField<Zenject::IGuiRenderable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::IGuiRenderable>(value));
}
constexpr Zenject::IGuiRenderable Zenject::Zenject__GuiRenderableManager____c__DisplayClass1_0::__get_renderable() const {
return ::cordl_internals::getInstanceField<Zenject::IGuiRenderable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 Zenject::Zenject__GuiRenderableManager____c__DisplayClass1_0::Zenject__GuiRenderableManager____c__DisplayClass1_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Zenject__GuiRenderableManager____c__DisplayClass1_0>())) {}
 void Zenject::Zenject__GuiRenderableManager____c__DisplayClass1_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__GuiRenderableManager____c__DisplayClass1_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Zenject::Zenject__GuiRenderableManager____c__DisplayClass1_0::__ctor_b__1(ModestTree::Util::ValuePair_2<System::Type,int32_t> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__GuiRenderableManager____c__DisplayClass1_0>::get(),
                            "<.ctor>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ModestTree::Util::ValuePair_2<System::Type,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__GuiRenderableManager____c__DisplayClass1_0::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__GuiRenderableManager____c__DisplayClass1_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__GuiRenderableManager____c__DisplayClass1_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__GuiRenderableManager____c__DisplayClass1_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: Zenject::Zenject__GuiRenderableManager____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__GuiRenderableManager____c::*)()>(&Zenject::Zenject__GuiRenderableManager____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dcb988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__GuiRenderableManager____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__GuiRenderableManager____c.__ctor_b__1_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Zenject::Zenject__GuiRenderableManager____c::*)(ModestTree::Util::ValuePair_2<System::Type,int32_t>)>(&Zenject::Zenject__GuiRenderableManager____c::__ctor_b__1_2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2dcb990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__GuiRenderableManager____c>::get(),
                            "<.ctor>b__1_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ModestTree::Util::ValuePair_2<System::Type,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__GuiRenderableManager____c.__ctor_b__1_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Zenject::Zenject__GuiRenderableManager____c::*)(Zenject::Zenject__GuiRenderableManager__RenderableInfo)>(&Zenject::Zenject__GuiRenderableManager____c::__ctor_b__1_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2dcb9a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__GuiRenderableManager____c>::get(),
                            "<.ctor>b__1_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::Zenject__GuiRenderableManager__RenderableInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__GuiRenderableManager____c.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::Zenject__GuiRenderableManager____c::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2dcb9c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__GuiRenderableManager____c>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__GuiRenderableManager____c.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::Zenject__GuiRenderableManager____c::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2dcba1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__GuiRenderableManager____c>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Zenject::Zenject__GuiRenderableManager____c::__set___9(Zenject::Zenject__GuiRenderableManager____c value)  {
::cordl_internals::setStaticField<Zenject::Zenject__GuiRenderableManager____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__GuiRenderableManager____c>::get>(std::forward<Zenject::Zenject__GuiRenderableManager____c>(value));
}
 Zenject::Zenject__GuiRenderableManager____c Zenject::Zenject__GuiRenderableManager____c::__get___9()  {
return ::cordl_internals::getStaticField<Zenject::Zenject__GuiRenderableManager____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__GuiRenderableManager____c>::get>();
}
 void Zenject::Zenject__GuiRenderableManager____c::__set___9__1_2(System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,int32_t> value)  {
::cordl_internals::setStaticField<System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,int32_t>, "<>9__1_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__GuiRenderableManager____c>::get>(std::forward<System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,int32_t>>(value));
}
 System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,int32_t> Zenject::Zenject__GuiRenderableManager____c::__get___9__1_2()  {
return ::cordl_internals::getStaticField<System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,int32_t>, "<>9__1_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__GuiRenderableManager____c>::get>();
}
 void Zenject::Zenject__GuiRenderableManager____c::__set___9__1_0(System::Func_2<Zenject::Zenject__GuiRenderableManager__RenderableInfo,int32_t> value)  {
::cordl_internals::setStaticField<System::Func_2<Zenject::Zenject__GuiRenderableManager__RenderableInfo,int32_t>, "<>9__1_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__GuiRenderableManager____c>::get>(std::forward<System::Func_2<Zenject::Zenject__GuiRenderableManager__RenderableInfo,int32_t>>(value));
}
 System::Func_2<Zenject::Zenject__GuiRenderableManager__RenderableInfo,int32_t> Zenject::Zenject__GuiRenderableManager____c::__get___9__1_0()  {
return ::cordl_internals::getStaticField<System::Func_2<Zenject::Zenject__GuiRenderableManager__RenderableInfo,int32_t>, "<>9__1_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__GuiRenderableManager____c>::get>();
}
// Ctor Parameters []
 Zenject::Zenject__GuiRenderableManager____c::Zenject__GuiRenderableManager____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Zenject__GuiRenderableManager____c>())) {}
 void Zenject::Zenject__GuiRenderableManager____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__GuiRenderableManager____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Zenject::Zenject__GuiRenderableManager____c::__ctor_b__1_2(ModestTree::Util::ValuePair_2<System::Type,int32_t> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__GuiRenderableManager____c>::get(),
                            "<.ctor>b__1_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ModestTree::Util::ValuePair_2<System::Type,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, x);
}
 int32_t Zenject::Zenject__GuiRenderableManager____c::__ctor_b__1_0(Zenject::Zenject__GuiRenderableManager__RenderableInfo x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__GuiRenderableManager____c>::get(),
                            "<.ctor>b__1_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::Zenject__GuiRenderableManager__RenderableInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__GuiRenderableManager____c::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__GuiRenderableManager____c>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__GuiRenderableManager____c::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__GuiRenderableManager____c>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: Zenject::GuiRenderableManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::GuiRenderableManager::*)(System::Collections::Generic::List_1<Zenject::IGuiRenderable>, System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>>)>(&Zenject::GuiRenderableManager::_ctor)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x2dca550;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::GuiRenderableManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::IGuiRenderable>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::GuiRenderableManager.OnGui
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::GuiRenderableManager::*)()>(&Zenject::GuiRenderableManager::OnGui)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x2dcab28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::GuiRenderableManager>::get(),
                            "OnGui",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::GuiRenderableManager.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::GuiRenderableManager::__zenCreate)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2dcae54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::GuiRenderableManager>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::GuiRenderableManager.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::GuiRenderableManager::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x2dcaf70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::GuiRenderableManager>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::GuiRenderableManager::__set__renderables(System::Collections::Generic::List_1<Zenject::Zenject__GuiRenderableManager__RenderableInfo> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<Zenject::Zenject__GuiRenderableManager__RenderableInfo>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<Zenject::Zenject__GuiRenderableManager__RenderableInfo>>(value));
}
constexpr System::Collections::Generic::List_1<Zenject::Zenject__GuiRenderableManager__RenderableInfo> Zenject::GuiRenderableManager::__get__renderables() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<Zenject::Zenject__GuiRenderableManager__RenderableInfo>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "renderables", ty: "System::Collections::Generic::List_1<Zenject::IGuiRenderable>", modifiers: "", def_value: None }, CppParam { name: "priorities", ty: "System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>>", modifiers: "", def_value: None }]
 Zenject::GuiRenderableManager::GuiRenderableManager(System::Collections::Generic::List_1<Zenject::IGuiRenderable> renderables, System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>> priorities)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GuiRenderableManager>(renderables, priorities))) {}
 void Zenject::GuiRenderableManager::_ctor(System::Collections::Generic::List_1<Zenject::IGuiRenderable> renderables, System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>> priorities)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::GuiRenderableManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::IGuiRenderable>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, renderables, priorities);
}
 void Zenject::GuiRenderableManager::OnGui()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::GuiRenderableManager>::get(),
                            "OnGui",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType Zenject::GuiRenderableManager::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::GuiRenderableManager>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::GuiRenderableManager::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::GuiRenderableManager>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
