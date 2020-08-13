// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Xml.HtmlEncodedRawTextWriter
#include "System/Xml/HtmlEncodedRawTextWriter.hpp"
// Including type: System.Xml.ByteStack
#include "System/Xml/ByteStack.hpp"
// Including type: System.Xml.TernaryTreeReadOnly
#include "System/Xml/TernaryTreeReadOnly.hpp"
// Including type: System.Xml.XmlWriterSettings
#include "System/Xml/XmlWriterSettings.hpp"
// Including type: System.IO.TextWriter
#include "System/IO/TextWriter.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static protected System.Xml.TernaryTreeReadOnly elementPropertySearch
System::Xml::TernaryTreeReadOnly* System::Xml::HtmlEncodedRawTextWriter::_get_elementPropertySearch() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Xml::TernaryTreeReadOnly*>("System.Xml", "HtmlEncodedRawTextWriter", "elementPropertySearch"));
}
// Autogenerated static field setter
// Set static field: static protected System.Xml.TernaryTreeReadOnly elementPropertySearch
void System::Xml::HtmlEncodedRawTextWriter::_set_elementPropertySearch(System::Xml::TernaryTreeReadOnly* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Xml", "HtmlEncodedRawTextWriter", "elementPropertySearch", value));
}
// Autogenerated static field getter
// Get static field: static protected System.Xml.TernaryTreeReadOnly attributePropertySearch
System::Xml::TernaryTreeReadOnly* System::Xml::HtmlEncodedRawTextWriter::_get_attributePropertySearch() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Xml::TernaryTreeReadOnly*>("System.Xml", "HtmlEncodedRawTextWriter", "attributePropertySearch"));
}
// Autogenerated static field setter
// Set static field: static protected System.Xml.TernaryTreeReadOnly attributePropertySearch
void System::Xml::HtmlEncodedRawTextWriter::_set_attributePropertySearch(System::Xml::TernaryTreeReadOnly* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Xml", "HtmlEncodedRawTextWriter", "attributePropertySearch", value));
}
// Autogenerated method: System.Xml.HtmlEncodedRawTextWriter.Init
void System::Xml::HtmlEncodedRawTextWriter::Init(System::Xml::XmlWriterSettings* settings) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init", settings));
}
// Autogenerated method: System.Xml.HtmlEncodedRawTextWriter.WriteMetaElement
void System::Xml::HtmlEncodedRawTextWriter::WriteMetaElement() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteMetaElement"));
}
// Autogenerated method: System.Xml.HtmlEncodedRawTextWriter.WriteHtmlElementTextBlock
void System::Xml::HtmlEncodedRawTextWriter::WriteHtmlElementTextBlock(::Il2CppChar* pSrc, ::Il2CppChar* pSrcEnd) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteHtmlElementTextBlock", pSrc, pSrcEnd));
}
// Autogenerated method: System.Xml.HtmlEncodedRawTextWriter.WriteHtmlAttributeTextBlock
void System::Xml::HtmlEncodedRawTextWriter::WriteHtmlAttributeTextBlock(::Il2CppChar* pSrc, ::Il2CppChar* pSrcEnd) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteHtmlAttributeTextBlock", pSrc, pSrcEnd));
}
// Autogenerated method: System.Xml.HtmlEncodedRawTextWriter.WriteHtmlAttributeText
void System::Xml::HtmlEncodedRawTextWriter::WriteHtmlAttributeText(::Il2CppChar* pSrc, ::Il2CppChar* pSrcEnd) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteHtmlAttributeText", pSrc, pSrcEnd));
}
// Autogenerated method: System.Xml.HtmlEncodedRawTextWriter.WriteUriAttributeText
void System::Xml::HtmlEncodedRawTextWriter::WriteUriAttributeText(::Il2CppChar* pSrc, ::Il2CppChar* pSrcEnd) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteUriAttributeText", pSrc, pSrcEnd));
}
// Autogenerated method: System.Xml.HtmlEncodedRawTextWriter.OutputRestAmps
void System::Xml::HtmlEncodedRawTextWriter::OutputRestAmps() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OutputRestAmps"));
}
// Autogenerated method: System.Xml.HtmlEncodedRawTextWriter..ctor
System::Xml::HtmlEncodedRawTextWriter* System::Xml::HtmlEncodedRawTextWriter::New_ctor(System::IO::TextWriter* writer, System::Xml::XmlWriterSettings* settings) {
  return (HtmlEncodedRawTextWriter*)THROW_UNLESS(il2cpp_utils::New("System.Xml", "HtmlEncodedRawTextWriter", writer, settings));
}
// Autogenerated method: System.Xml.HtmlEncodedRawTextWriter..ctor
System::Xml::HtmlEncodedRawTextWriter* System::Xml::HtmlEncodedRawTextWriter::New_ctor(System::IO::Stream* stream, System::Xml::XmlWriterSettings* settings) {
  return (HtmlEncodedRawTextWriter*)THROW_UNLESS(il2cpp_utils::New("System.Xml", "HtmlEncodedRawTextWriter", stream, settings));
}
// Autogenerated method: System.Xml.HtmlEncodedRawTextWriter.WriteXmlDeclaration
void System::Xml::HtmlEncodedRawTextWriter::WriteXmlDeclaration(System::Xml::XmlStandalone standalone) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteXmlDeclaration", standalone));
}
// Autogenerated method: System.Xml.HtmlEncodedRawTextWriter.WriteXmlDeclaration
void System::Xml::HtmlEncodedRawTextWriter::WriteXmlDeclaration(::CsString* xmldecl) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteXmlDeclaration", xmldecl));
}
// Autogenerated method: System.Xml.HtmlEncodedRawTextWriter.WriteDocType
void System::Xml::HtmlEncodedRawTextWriter::WriteDocType(::CsString* name, ::CsString* pubid, ::CsString* sysid, ::CsString* subset) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteDocType", name, pubid, sysid, subset));
}
// Autogenerated method: System.Xml.HtmlEncodedRawTextWriter.WriteStartElement
void System::Xml::HtmlEncodedRawTextWriter::WriteStartElement(::CsString* prefix, ::CsString* localName, ::CsString* ns) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteStartElement", prefix, localName, ns));
}
// Autogenerated method: System.Xml.HtmlEncodedRawTextWriter.StartElementContent
void System::Xml::HtmlEncodedRawTextWriter::StartElementContent() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "StartElementContent"));
}
// Autogenerated method: System.Xml.HtmlEncodedRawTextWriter.WriteEndElement
void System::Xml::HtmlEncodedRawTextWriter::WriteEndElement(::CsString* prefix, ::CsString* localName, ::CsString* ns) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteEndElement", prefix, localName, ns));
}
// Autogenerated method: System.Xml.HtmlEncodedRawTextWriter.WriteFullEndElement
void System::Xml::HtmlEncodedRawTextWriter::WriteFullEndElement(::CsString* prefix, ::CsString* localName, ::CsString* ns) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteFullEndElement", prefix, localName, ns));
}
// Autogenerated method: System.Xml.HtmlEncodedRawTextWriter.WriteStartAttribute
void System::Xml::HtmlEncodedRawTextWriter::WriteStartAttribute(::CsString* prefix, ::CsString* localName, ::CsString* ns) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteStartAttribute", prefix, localName, ns));
}
// Autogenerated method: System.Xml.HtmlEncodedRawTextWriter.WriteEndAttribute
void System::Xml::HtmlEncodedRawTextWriter::WriteEndAttribute() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteEndAttribute"));
}
// Autogenerated method: System.Xml.HtmlEncodedRawTextWriter.WriteProcessingInstruction
void System::Xml::HtmlEncodedRawTextWriter::WriteProcessingInstruction(::CsString* target, ::CsString* text) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteProcessingInstruction", target, text));
}
// Autogenerated method: System.Xml.HtmlEncodedRawTextWriter.WriteString
void System::Xml::HtmlEncodedRawTextWriter::WriteString(::CsString* text) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteString", text));
}
// Autogenerated method: System.Xml.HtmlEncodedRawTextWriter.WriteEntityRef
void System::Xml::HtmlEncodedRawTextWriter::WriteEntityRef(::CsString* name) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteEntityRef", name));
}
// Autogenerated method: System.Xml.HtmlEncodedRawTextWriter.WriteCharEntity
void System::Xml::HtmlEncodedRawTextWriter::WriteCharEntity(::Il2CppChar ch) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteCharEntity", ch));
}
// Autogenerated method: System.Xml.HtmlEncodedRawTextWriter.WriteSurrogateCharEntity
void System::Xml::HtmlEncodedRawTextWriter::WriteSurrogateCharEntity(::Il2CppChar lowChar, ::Il2CppChar highChar) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteSurrogateCharEntity", lowChar, highChar));
}
// Autogenerated method: System.Xml.HtmlEncodedRawTextWriter.WriteChars
void System::Xml::HtmlEncodedRawTextWriter::WriteChars(::Array<::Il2CppChar>* buffer, int index, int count) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteChars", buffer, index, count));
}
