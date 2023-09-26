#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__CreditsData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__CreditsData__TextStyle::GlobalNamespace__CreditsData__TextStyle(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__CreditsData__TextStyle::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__CreditsData__TextStyle::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__CreditsData__TextStyle  GlobalNamespace::GlobalNamespace__CreditsData__TextStyle::Normal{0};
constexpr GlobalNamespace::GlobalNamespace__CreditsData__TextStyle  GlobalNamespace::GlobalNamespace__CreditsData__TextStyle::Title{1};
constexpr GlobalNamespace::GlobalNamespace__CreditsData__TextStyle  GlobalNamespace::GlobalNamespace__CreditsData__TextStyle::Header{2};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__CreditsData__Text.IsEmpty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__CreditsData__Text::*)()>(&GlobalNamespace::GlobalNamespace__CreditsData__Text::IsEmpty)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x216716c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__CreditsData__Text>::get(),
                            "IsEmpty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__CreditsData__Text.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GlobalNamespace__CreditsData__Text::*)()>(&GlobalNamespace::GlobalNamespace__CreditsData__Text::ToString)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x216718c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__CreditsData__Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__CreditsData__Text>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__CreditsData__Text._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__CreditsData__Text::*)()>(&GlobalNamespace::GlobalNamespace__CreditsData__Text::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2167250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__CreditsData__Text>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__CreditsData__Text::__set_text(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__CreditsData__Text::__get_text() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__CreditsData__Text::__set_localized(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__CreditsData__Text::__get_localized() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__CreditsData__Text::__set_style(GlobalNamespace::GlobalNamespace__CreditsData__TextStyle value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__CreditsData__TextStyle, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__CreditsData__TextStyle>(value));
}
constexpr GlobalNamespace::GlobalNamespace__CreditsData__TextStyle GlobalNamespace::GlobalNamespace__CreditsData__Text::__get_style() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__CreditsData__TextStyle, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool GlobalNamespace::GlobalNamespace__CreditsData__Text::IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__CreditsData__Text>::get(),
                            "IsEmpty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::GlobalNamespace__CreditsData__Text::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__CreditsData__Text>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__CreditsData__Text::GlobalNamespace__CreditsData__Text()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__CreditsData__Text>())) {}
 void GlobalNamespace::GlobalNamespace__CreditsData__Text::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__CreditsData__Text>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__CreditsData__RootCreditsItem.HasTitle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__CreditsData__RootCreditsItem::*)()>(&GlobalNamespace::GlobalNamespace__CreditsData__RootCreditsItem::HasTitle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2167258;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__CreditsData__RootCreditsItem>::get(),
                            "HasTitle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__CreditsData__RootCreditsItem.HasText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__CreditsData__RootCreditsItem::*)()>(&GlobalNamespace::GlobalNamespace__CreditsData__RootCreditsItem::HasText)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2167268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__CreditsData__RootCreditsItem>::get(),
                            "HasText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__CreditsData__RootCreditsItem.HasRowItems
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__CreditsData__RootCreditsItem::*)()>(&GlobalNamespace::GlobalNamespace__CreditsData__RootCreditsItem::HasRowItems)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2167278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__CreditsData__RootCreditsItem>::get(),
                            "HasRowItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__CreditsData__RootCreditsItem._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__CreditsData__RootCreditsItem::*)()>(&GlobalNamespace::GlobalNamespace__CreditsData__RootCreditsItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2167298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__CreditsData__RootCreditsItem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__CreditsData__RootCreditsItem::__set_title(GlobalNamespace::GlobalNamespace__CreditsData__Text value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__CreditsData__Text, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__CreditsData__Text>(value));
}
constexpr GlobalNamespace::GlobalNamespace__CreditsData__Text GlobalNamespace::GlobalNamespace__CreditsData__RootCreditsItem::__get_title() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__CreditsData__Text, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__CreditsData__RootCreditsItem::__set_text(GlobalNamespace::GlobalNamespace__CreditsData__Text value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__CreditsData__Text, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__CreditsData__Text>(value));
}
constexpr GlobalNamespace::GlobalNamespace__CreditsData__Text GlobalNamespace::GlobalNamespace__CreditsData__RootCreditsItem::__get_text() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__CreditsData__Text, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__CreditsData__RootCreditsItem::__set_rowCountOverride(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__CreditsData__RootCreditsItem::__get_rowCountOverride() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__CreditsData__RootCreditsItem::__set_creditsItems(::ArrayW<GlobalNamespace::GlobalNamespace__CreditsData__ChildCreditsItem> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__CreditsData__ChildCreditsItem>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::GlobalNamespace__CreditsData__ChildCreditsItem>>(value));
}
constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__CreditsData__ChildCreditsItem> GlobalNamespace::GlobalNamespace__CreditsData__RootCreditsItem::__get_creditsItems() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__CreditsData__ChildCreditsItem>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool GlobalNamespace::GlobalNamespace__CreditsData__RootCreditsItem::HasTitle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__CreditsData__RootCreditsItem>::get(),
                            "HasTitle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__CreditsData__RootCreditsItem::HasText()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__CreditsData__RootCreditsItem>::get(),
                            "HasText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__CreditsData__RootCreditsItem::HasRowItems()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__CreditsData__RootCreditsItem>::get(),
                            "HasRowItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__CreditsData__RootCreditsItem::GlobalNamespace__CreditsData__RootCreditsItem()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__CreditsData__RootCreditsItem>())) {}
 void GlobalNamespace::GlobalNamespace__CreditsData__RootCreditsItem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__CreditsData__RootCreditsItem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__CreditsData__ChildCreditsItem.HasTitle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__CreditsData__ChildCreditsItem::*)()>(&GlobalNamespace::GlobalNamespace__CreditsData__ChildCreditsItem::HasTitle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x21672a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__CreditsData__ChildCreditsItem>::get(),
                            "HasTitle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__CreditsData__ChildCreditsItem.HasText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__CreditsData__ChildCreditsItem::*)()>(&GlobalNamespace::GlobalNamespace__CreditsData__ChildCreditsItem::HasText)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x21672b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__CreditsData__ChildCreditsItem>::get(),
                            "HasText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__CreditsData__ChildCreditsItem._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__CreditsData__ChildCreditsItem::*)()>(&GlobalNamespace::GlobalNamespace__CreditsData__ChildCreditsItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21672c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__CreditsData__ChildCreditsItem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__CreditsData__ChildCreditsItem::__set_title(GlobalNamespace::GlobalNamespace__CreditsData__Text value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__CreditsData__Text, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__CreditsData__Text>(value));
}
constexpr GlobalNamespace::GlobalNamespace__CreditsData__Text GlobalNamespace::GlobalNamespace__CreditsData__ChildCreditsItem::__get_title() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__CreditsData__Text, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__CreditsData__ChildCreditsItem::__set_text(GlobalNamespace::GlobalNamespace__CreditsData__Text value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__CreditsData__Text, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__CreditsData__Text>(value));
}
constexpr GlobalNamespace::GlobalNamespace__CreditsData__Text GlobalNamespace::GlobalNamespace__CreditsData__ChildCreditsItem::__get_text() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__CreditsData__Text, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool GlobalNamespace::GlobalNamespace__CreditsData__ChildCreditsItem::HasTitle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__CreditsData__ChildCreditsItem>::get(),
                            "HasTitle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__CreditsData__ChildCreditsItem::HasText()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__CreditsData__ChildCreditsItem>::get(),
                            "HasText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__CreditsData__ChildCreditsItem::GlobalNamespace__CreditsData__ChildCreditsItem()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__CreditsData__ChildCreditsItem>())) {}
 void GlobalNamespace::GlobalNamespace__CreditsData__ChildCreditsItem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__CreditsData__ChildCreditsItem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::CreditsData.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::CreditsData (*)(::StringW)>(&GlobalNamespace::CreditsData::Deserialize)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2167060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CreditsData>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CreditsData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CreditsData::*)()>(&GlobalNamespace::CreditsData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2167164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CreditsData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::CreditsData::__set_creditsItems(::ArrayW<GlobalNamespace::GlobalNamespace__CreditsData__RootCreditsItem> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__CreditsData__RootCreditsItem>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::GlobalNamespace__CreditsData__RootCreditsItem>>(value));
}
constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__CreditsData__RootCreditsItem> GlobalNamespace::CreditsData::__get_creditsItems() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__CreditsData__RootCreditsItem>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::CreditsData GlobalNamespace::CreditsData::Deserialize(::StringW text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CreditsData>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::CreditsData, false>(nullptr, ___internal_method, text);
}
// Ctor Parameters []
 GlobalNamespace::CreditsData::CreditsData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CreditsData>())) {}
 void GlobalNamespace::CreditsData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CreditsData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
