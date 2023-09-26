#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections {
class ArrayList;
}
namespace System {
struct TimeSpan;
}
namespace Mono::Xml {
class SmallXmlParser;
}
namespace Mono::Xml {
class Mono__Xml__SmallXmlParser__IAttrList;
}
namespace Mono::Xml {
class Mono__Xml__SmallXmlParser__IContentHandler;
}
namespace System::Runtime::Remoting {
class ChannelData;
}
namespace System::Collections {
class Stack;
}
namespace System::Runtime::Remoting {
class ProviderData;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class ConfigHandler;
}
// Type: System.Runtime.Remoting::ConfigHandler
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3061))
// CS Name: System.Runtime.Remoting.ConfigHandler
class CORDL_TYPE ConfigHandler : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Mono::Xml::Mono__Xml__SmallXmlParser__IContentHandler
constexpr operator  Mono::Xml::Mono__Xml__SmallXmlParser__IContentHandler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~ConfigHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConfigHandler", modifiers: " const&", def_value: None }]
constexpr ConfigHandler(ConfigHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConfigHandler", modifiers: "&&", def_value: None }]
constexpr ConfigHandler(ConfigHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConfigHandler(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ConfigHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConfigHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConfigHandler& operator=(ConfigHandler&& o) noexcept = default;
  constexpr ConfigHandler& operator=(ConfigHandler const& o) noexcept = default;
                


// Fields

 System::Collections::ArrayList __declspec(property(get=__get_typeEntries, put=__set_typeEntries))  typeEntries;

constexpr void __set_typeEntries(System::Collections::ArrayList value) ;

constexpr System::Collections::ArrayList __get_typeEntries() const;

 System::Collections::ArrayList __declspec(property(get=__get_channelInstances, put=__set_channelInstances))  channelInstances;

constexpr void __set_channelInstances(System::Collections::ArrayList value) ;

constexpr System::Collections::ArrayList __get_channelInstances() const;

 System::Runtime::Remoting::ChannelData __declspec(property(get=__get_currentChannel, put=__set_currentChannel))  currentChannel;

constexpr void __set_currentChannel(System::Runtime::Remoting::ChannelData value) ;

constexpr System::Runtime::Remoting::ChannelData __get_currentChannel() const;

 System::Collections::Stack __declspec(property(get=__get_currentProviderData, put=__set_currentProviderData))  currentProviderData;

constexpr void __set_currentProviderData(System::Collections::Stack value) ;

constexpr System::Collections::Stack __get_currentProviderData() const;

 ::StringW __declspec(property(get=__get_currentClientUrl, put=__set_currentClientUrl))  currentClientUrl;

constexpr void __set_currentClientUrl(::StringW value) ;

constexpr ::StringW __get_currentClientUrl() const;

 ::StringW __declspec(property(get=__get_appName, put=__set_appName))  appName;

constexpr void __set_appName(::StringW value) ;

constexpr ::StringW __get_appName() const;

 ::StringW __declspec(property(get=__get_currentXmlPath, put=__set_currentXmlPath))  currentXmlPath;

constexpr void __set_currentXmlPath(::StringW value) ;

constexpr ::StringW __get_currentXmlPath() const;

 bool __declspec(property(get=__get_onlyDelayedChannels, put=__set_onlyDelayedChannels))  onlyDelayedChannels;

constexpr void __set_onlyDelayedChannels(bool value) ;

constexpr bool __get_onlyDelayedChannels() const;


// Methods

// Ctor Parameters [CppParam { name: "onlyDelayedChannels", ty: "bool", modifiers: "", def_value: None }]
explicit ConfigHandler(bool onlyDelayedChannels) ;

/// @brief Method .ctor addr 0x235483c size 0xb8 virtual false final false
 void _ctor(bool onlyDelayedChannels) ;

/// @brief Method ValidatePath addr 0x2357ef8 size 0xe4 virtual false final false
 void ValidatePath(::StringW element, ::ArrayW<::StringW> paths) ;

/// @brief Method CheckPath addr 0x2357fdc size 0xe0 virtual false final false
 bool CheckPath(::StringW path) ;

/// @brief Method OnStartParsing addr 0x23580bc size 0x4 virtual true final true
 void OnStartParsing(Mono::Xml::SmallXmlParser parser) ;

/// @brief Method OnProcessingInstruction addr 0x23580c0 size 0x4 virtual true final true
 void OnProcessingInstruction(::StringW name, ::StringW text) ;

/// @brief Method OnIgnorableWhitespace addr 0x23580c4 size 0x4 virtual true final true
 void OnIgnorableWhitespace(::StringW s) ;

/// @brief Method OnStartElement addr 0x23580c8 size 0x1b8 virtual true final true
 void OnStartElement(::StringW name, Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList attrs) ;

/// @brief Method ParseElement addr 0x2358280 size 0x1050 virtual false final false
 void ParseElement(::StringW name, Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList attrs) ;

/// @brief Method OnEndElement addr 0x235ac2c size 0x80 virtual true final true
 void OnEndElement(::StringW name) ;

/// @brief Method ReadCustomProviderData addr 0x23592d8 size 0x360 virtual false final false
 void ReadCustomProviderData(::StringW name, Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList attrs) ;

/// @brief Method ReadLifetine addr 0x2359638 size 0x554 virtual false final false
 void ReadLifetine(Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList attrs) ;

/// @brief Method ParseTime addr 0x235acac size 0x3d0 virtual false final false
 System::TimeSpan ParseTime(::StringW s) ;

/// @brief Method ReadChannel addr 0x2359b8c size 0x3a4 virtual false final false
 void ReadChannel(Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList attrs, bool isTemplate) ;

/// @brief Method ReadProvider addr 0x2359f30 size 0x3e8 virtual false final false
 System::Runtime::Remoting::ProviderData ReadProvider(::StringW name, Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList attrs, bool isTemplate) ;

/// @brief Method ReadClientActivated addr 0x235a5f8 size 0x144 virtual false final false
 void ReadClientActivated(Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList attrs) ;

/// @brief Method ReadServiceActivated addr 0x235a73c size 0xc8 virtual false final false
 void ReadServiceActivated(Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList attrs) ;

/// @brief Method ReadClientWellKnown addr 0x235a318 size 0xf4 virtual false final false
 void ReadClientWellKnown(Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList attrs) ;

/// @brief Method ReadServiceWellKnown addr 0x235a40c size 0x1ec virtual false final false
 void ReadServiceWellKnown(Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList attrs) ;

/// @brief Method ReadInteropXml addr 0x235a804 size 0x1a0 virtual false final false
 void ReadInteropXml(Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList attrs, bool isElement) ;

/// @brief Method ReadPreload addr 0x235a9a4 size 0x288 virtual false final false
 void ReadPreload(Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList attrs) ;

/// @brief Method GetNotNull addr 0x235b208 size 0x138 virtual false final false
 ::StringW GetNotNull(Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList attrs, ::StringW name) ;

/// @brief Method ExtractAssembly addr 0x235b340 size 0xc0 virtual false final false
 ::StringW ExtractAssembly(ByRef<::StringW> type) ;

/// @brief Method OnChars addr 0x235b400 size 0x4 virtual true final true
 void OnChars(::StringW ch) ;

/// @brief Method OnEndParsing addr 0x235b404 size 0xf4 virtual true final true
 void OnEndParsing(Mono::Xml::SmallXmlParser parser) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting
NEED_NO_BOX(System::Runtime::Remoting::ConfigHandler);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::ConfigHandler, "System.Runtime.Remoting", "ConfigHandler");
