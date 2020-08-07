// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: AttributeDictionary
  class AttributeDictionary;
  // Forward declaring type: NodeList
  class NodeList;
}
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: Regex
  class Regex;
  // Forward declaring type: MatchEvaluator
  class MatchEvaluator;
  // Forward declaring type: Match
  class Match;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlWriter
  class XmlWriter;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Autogenerated type: NUnit.Framework.Interfaces.TNode
  class TNode : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.Text.RegularExpressions.Regex InvalidXmlCharactersRegex
    static System::Text::RegularExpressions::Regex* _get_InvalidXmlCharactersRegex();
    // Set static field: static private readonly System.Text.RegularExpressions.Regex InvalidXmlCharactersRegex
    static void _set_InvalidXmlCharactersRegex(System::Text::RegularExpressions::Regex* value);
    // private System.String <Name>k__BackingField
    // Offset: 0x10
    ::Il2CppString* Name;
    // private System.String <Value>k__BackingField
    // Offset: 0x18
    ::Il2CppString* Value;
    // private System.Boolean <ValueIsCDATA>k__BackingField
    // Offset: 0x20
    bool ValueIsCDATA;
    // private NUnit.Framework.Interfaces.AttributeDictionary <Attributes>k__BackingField
    // Offset: 0x28
    NUnit::Framework::Interfaces::AttributeDictionary* Attributes;
    // private NUnit.Framework.Interfaces.NodeList <ChildNodes>k__BackingField
    // Offset: 0x30
    NUnit::Framework::Interfaces::NodeList* ChildNodes;
    // Get static field: static private System.Text.RegularExpressions.MatchEvaluator CS$<>9__CachedAnonymousMethodDelegate1
    static System::Text::RegularExpressions::MatchEvaluator* _get_CS$$$9__CachedAnonymousMethodDelegate1();
    // Set static field: static private System.Text.RegularExpressions.MatchEvaluator CS$<>9__CachedAnonymousMethodDelegate1
    static void _set_CS$$$9__CachedAnonymousMethodDelegate1(System::Text::RegularExpressions::MatchEvaluator* value);
    // public System.Void .ctor(System.String name)
    // Offset: 0x106B2B8
    static TNode* New_ctor(::Il2CppString* name);
    // public System.Void .ctor(System.String name, System.String value)
    // Offset: 0x106B36C
    static TNode* New_ctor(::Il2CppString* name, ::Il2CppString* value);
    // public System.Void .ctor(System.String name, System.String value, System.Boolean valueIsCDATA)
    // Offset: 0x106B3A4
    static TNode* New_ctor(::Il2CppString* name, ::Il2CppString* value, bool valueIsCDATA);
    // public System.String get_Name()
    // Offset: 0x106B3EC
    ::Il2CppString* get_Name();
    // private System.Void set_Name(System.String value)
    // Offset: 0x106B3F4
    void set_Name(::Il2CppString* value);
    // public System.String get_Value()
    // Offset: 0x106B3FC
    ::Il2CppString* get_Value();
    // public System.Void set_Value(System.String value)
    // Offset: 0x106B404
    void set_Value(::Il2CppString* value);
    // public System.Boolean get_ValueIsCDATA()
    // Offset: 0x106B40C
    bool get_ValueIsCDATA();
    // private System.Void set_ValueIsCDATA(System.Boolean value)
    // Offset: 0x106B414
    void set_ValueIsCDATA(bool value);
    // public NUnit.Framework.Interfaces.AttributeDictionary get_Attributes()
    // Offset: 0x106B420
    NUnit::Framework::Interfaces::AttributeDictionary* get_Attributes();
    // private System.Void set_Attributes(NUnit.Framework.Interfaces.AttributeDictionary value)
    // Offset: 0x106B428
    void set_Attributes(NUnit::Framework::Interfaces::AttributeDictionary* value);
    // public NUnit.Framework.Interfaces.NodeList get_ChildNodes()
    // Offset: 0x106B430
    NUnit::Framework::Interfaces::NodeList* get_ChildNodes();
    // private System.Void set_ChildNodes(NUnit.Framework.Interfaces.NodeList value)
    // Offset: 0x106B438
    void set_ChildNodes(NUnit::Framework::Interfaces::NodeList* value);
    // public System.String get_OuterXml()
    // Offset: 0x106B440
    ::Il2CppString* get_OuterXml();
    // public NUnit.Framework.Interfaces.TNode AddElement(System.String name)
    // Offset: 0x106B7F8
    NUnit::Framework::Interfaces::TNode* AddElement(::Il2CppString* name);
    // public NUnit.Framework.Interfaces.TNode AddElement(System.String name, System.String value)
    // Offset: 0x106B884
    NUnit::Framework::Interfaces::TNode* AddElement(::Il2CppString* name, ::Il2CppString* value);
    // public NUnit.Framework.Interfaces.TNode AddElementWithCDATA(System.String name, System.String value)
    // Offset: 0x106BA70
    NUnit::Framework::Interfaces::TNode* AddElementWithCDATA(::Il2CppString* name, ::Il2CppString* value);
    // public System.Void AddAttribute(System.String name, System.String value)
    // Offset: 0x106BB40
    void AddAttribute(::Il2CppString* name, ::Il2CppString* value);
    // public System.Void WriteTo(System.Xml.XmlWriter writer)
    // Offset: 0x106B5B8
    void WriteTo(System::Xml::XmlWriter* writer);
    // static private System.String EscapeInvalidXmlCharacters(System.String str)
    // Offset: 0x106B950
    static ::Il2CppString* EscapeInvalidXmlCharacters(::Il2CppString* str);
    // static private System.String CharToUnicodeSequence(System.Char symbol)
    // Offset: 0x106BCFC
    static ::Il2CppString* CharToUnicodeSequence(::Il2CppChar symbol);
    // private System.Void WriteCDataTo(System.Xml.XmlWriter writer)
    // Offset: 0x106BBDC
    void WriteCDataTo(System::Xml::XmlWriter* writer);
    // static private System.String <EscapeInvalidXmlCharacters>b__0(System.Text.RegularExpressions.Match match)
    // Offset: 0x106BD80
    static ::Il2CppString* $EscapeInvalidXmlCharacters$b__0(System::Text::RegularExpressions::Match* match);
    // static private System.Void .cctor()
    // Offset: 0x106BE10
    static void _cctor();
  }; // NUnit.Framework.Interfaces.TNode
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::TNode*, "NUnit.Framework.Interfaces", "TNode");
#pragma pack(pop)