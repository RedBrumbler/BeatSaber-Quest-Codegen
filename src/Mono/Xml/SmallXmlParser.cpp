// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Xml.SmallXmlParser
#include "Mono/Xml/SmallXmlParser.hpp"
// Including type: Mono.Xml.SmallXmlParser/IContentHandler
#include "Mono/Xml/SmallXmlParser_IContentHandler.hpp"
// Including type: Mono.Xml.SmallXmlParser/IAttrList
#include "Mono/Xml/SmallXmlParser_IAttrList.hpp"
// Including type: Mono.Xml.SmallXmlParser/AttrListImpl
#include "Mono/Xml/SmallXmlParser_AttrListImpl.hpp"
// Including type: System.IO.TextReader
#include "System/IO/TextReader.hpp"
// Including type: System.Collections.Stack
#include "System/Collections/Stack.hpp"
// Including type: System.Text.StringBuilder
#include "System/Text/StringBuilder.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Mono.Xml.SmallXmlParser.Error
System::Exception* Mono::Xml::SmallXmlParser::Error(::CsString* msg) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Exception*>(this, "Error", msg));
}
// Autogenerated method: Mono.Xml.SmallXmlParser.UnexpectedEndError
System::Exception* Mono::Xml::SmallXmlParser::UnexpectedEndError() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Exception*>(this, "UnexpectedEndError"));
}
// Autogenerated method: Mono.Xml.SmallXmlParser.IsNameChar
bool Mono::Xml::SmallXmlParser::IsNameChar(::Il2CppChar c, bool start) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsNameChar", c, start));
}
// Autogenerated method: Mono.Xml.SmallXmlParser.IsWhitespace
bool Mono::Xml::SmallXmlParser::IsWhitespace(int c) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsWhitespace", c));
}
// Autogenerated method: Mono.Xml.SmallXmlParser.SkipWhitespaces
void Mono::Xml::SmallXmlParser::SkipWhitespaces() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SkipWhitespaces"));
}
// Autogenerated method: Mono.Xml.SmallXmlParser.HandleWhitespaces
void Mono::Xml::SmallXmlParser::HandleWhitespaces() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleWhitespaces"));
}
// Autogenerated method: Mono.Xml.SmallXmlParser.SkipWhitespaces
void Mono::Xml::SmallXmlParser::SkipWhitespaces(bool expected) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SkipWhitespaces", expected));
}
// Autogenerated method: Mono.Xml.SmallXmlParser.Peek
int Mono::Xml::SmallXmlParser::Peek() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Peek"));
}
// Autogenerated method: Mono.Xml.SmallXmlParser.Read
int Mono::Xml::SmallXmlParser::Read() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Read"));
}
// Autogenerated method: Mono.Xml.SmallXmlParser.Expect
void Mono::Xml::SmallXmlParser::Expect(int c) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Expect", c));
}
// Autogenerated method: Mono.Xml.SmallXmlParser.ReadUntil
::CsString* Mono::Xml::SmallXmlParser::ReadUntil(::Il2CppChar until, bool handleReferences) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "ReadUntil", until, handleReferences));
}
// Autogenerated method: Mono.Xml.SmallXmlParser.ReadName
::CsString* Mono::Xml::SmallXmlParser::ReadName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "ReadName"));
}
// Autogenerated method: Mono.Xml.SmallXmlParser.Parse
void Mono::Xml::SmallXmlParser::Parse(System::IO::TextReader* input, Mono::Xml::SmallXmlParser::IContentHandler* handler) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Parse", input, handler));
}
// Autogenerated method: Mono.Xml.SmallXmlParser.Cleanup
void Mono::Xml::SmallXmlParser::Cleanup() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Cleanup"));
}
// Autogenerated method: Mono.Xml.SmallXmlParser.ReadContent
void Mono::Xml::SmallXmlParser::ReadContent() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ReadContent"));
}
// Autogenerated method: Mono.Xml.SmallXmlParser.HandleBufferedContent
void Mono::Xml::SmallXmlParser::HandleBufferedContent() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleBufferedContent"));
}
// Autogenerated method: Mono.Xml.SmallXmlParser.ReadCharacters
void Mono::Xml::SmallXmlParser::ReadCharacters() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ReadCharacters"));
}
// Autogenerated method: Mono.Xml.SmallXmlParser.ReadReference
void Mono::Xml::SmallXmlParser::ReadReference() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ReadReference"));
}
// Autogenerated method: Mono.Xml.SmallXmlParser.ReadCharacterReference
int Mono::Xml::SmallXmlParser::ReadCharacterReference() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "ReadCharacterReference"));
}
// Autogenerated method: Mono.Xml.SmallXmlParser.ReadAttribute
void Mono::Xml::SmallXmlParser::ReadAttribute(Mono::Xml::SmallXmlParser::AttrListImpl* a) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ReadAttribute", a));
}
// Autogenerated method: Mono.Xml.SmallXmlParser.ReadCDATASection
void Mono::Xml::SmallXmlParser::ReadCDATASection() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ReadCDATASection"));
}
// Autogenerated method: Mono.Xml.SmallXmlParser.ReadComment
void Mono::Xml::SmallXmlParser::ReadComment() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ReadComment"));
}
// Autogenerated method: Mono.Xml.SmallXmlParser..ctor
Mono::Xml::SmallXmlParser* Mono::Xml::SmallXmlParser::New_ctor() {
  return (SmallXmlParser*)THROW_UNLESS(il2cpp_utils::New("Mono.Xml", "SmallXmlParser"));
}
