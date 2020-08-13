// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Xml.TextEncodedRawTextWriter
#include "System/Xml/TextEncodedRawTextWriter.hpp"
// Including type: System.IO.TextWriter
#include "System/IO/TextWriter.hpp"
// Including type: System.Xml.XmlWriterSettings
#include "System/Xml/XmlWriterSettings.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Xml.TextEncodedRawTextWriter..ctor
System::Xml::TextEncodedRawTextWriter* System::Xml::TextEncodedRawTextWriter::New_ctor(System::IO::TextWriter* writer, System::Xml::XmlWriterSettings* settings) {
  return (TextEncodedRawTextWriter*)THROW_UNLESS(il2cpp_utils::New("System.Xml", "TextEncodedRawTextWriter", writer, settings));
}
// Autogenerated method: System.Xml.TextEncodedRawTextWriter..ctor
System::Xml::TextEncodedRawTextWriter* System::Xml::TextEncodedRawTextWriter::New_ctor(System::IO::Stream* stream, System::Xml::XmlWriterSettings* settings) {
  return (TextEncodedRawTextWriter*)THROW_UNLESS(il2cpp_utils::New("System.Xml", "TextEncodedRawTextWriter", stream, settings));
}
// Autogenerated method: System.Xml.TextEncodedRawTextWriter.WriteXmlDeclaration
void System::Xml::TextEncodedRawTextWriter::WriteXmlDeclaration(System::Xml::XmlStandalone standalone) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteXmlDeclaration", standalone));
}
// Autogenerated method: System.Xml.TextEncodedRawTextWriter.WriteXmlDeclaration
void System::Xml::TextEncodedRawTextWriter::WriteXmlDeclaration(::CsString* xmldecl) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteXmlDeclaration", xmldecl));
}
// Autogenerated method: System.Xml.TextEncodedRawTextWriter.WriteDocType
void System::Xml::TextEncodedRawTextWriter::WriteDocType(::CsString* name, ::CsString* pubid, ::CsString* sysid, ::CsString* subset) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteDocType", name, pubid, sysid, subset));
}
// Autogenerated method: System.Xml.TextEncodedRawTextWriter.WriteStartElement
void System::Xml::TextEncodedRawTextWriter::WriteStartElement(::CsString* prefix, ::CsString* localName, ::CsString* ns) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteStartElement", prefix, localName, ns));
}
// Autogenerated method: System.Xml.TextEncodedRawTextWriter.WriteEndElement
void System::Xml::TextEncodedRawTextWriter::WriteEndElement(::CsString* prefix, ::CsString* localName, ::CsString* ns) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteEndElement", prefix, localName, ns));
}
// Autogenerated method: System.Xml.TextEncodedRawTextWriter.WriteFullEndElement
void System::Xml::TextEncodedRawTextWriter::WriteFullEndElement(::CsString* prefix, ::CsString* localName, ::CsString* ns) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteFullEndElement", prefix, localName, ns));
}
// Autogenerated method: System.Xml.TextEncodedRawTextWriter.StartElementContent
void System::Xml::TextEncodedRawTextWriter::StartElementContent() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "StartElementContent"));
}
// Autogenerated method: System.Xml.TextEncodedRawTextWriter.WriteStartAttribute
void System::Xml::TextEncodedRawTextWriter::WriteStartAttribute(::CsString* prefix, ::CsString* localName, ::CsString* ns) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteStartAttribute", prefix, localName, ns));
}
// Autogenerated method: System.Xml.TextEncodedRawTextWriter.WriteEndAttribute
void System::Xml::TextEncodedRawTextWriter::WriteEndAttribute() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteEndAttribute"));
}
// Autogenerated method: System.Xml.TextEncodedRawTextWriter.WriteNamespaceDeclaration
void System::Xml::TextEncodedRawTextWriter::WriteNamespaceDeclaration(::CsString* prefix, ::CsString* ns) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteNamespaceDeclaration", prefix, ns));
}
// Autogenerated method: System.Xml.TextEncodedRawTextWriter.get_SupportsNamespaceDeclarationInChunks
bool System::Xml::TextEncodedRawTextWriter::get_SupportsNamespaceDeclarationInChunks() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_SupportsNamespaceDeclarationInChunks"));
}
// Autogenerated method: System.Xml.TextEncodedRawTextWriter.WriteCData
void System::Xml::TextEncodedRawTextWriter::WriteCData(::CsString* text) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteCData", text));
}
// Autogenerated method: System.Xml.TextEncodedRawTextWriter.WriteComment
void System::Xml::TextEncodedRawTextWriter::WriteComment(::CsString* text) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteComment", text));
}
// Autogenerated method: System.Xml.TextEncodedRawTextWriter.WriteProcessingInstruction
void System::Xml::TextEncodedRawTextWriter::WriteProcessingInstruction(::CsString* name, ::CsString* text) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteProcessingInstruction", name, text));
}
// Autogenerated method: System.Xml.TextEncodedRawTextWriter.WriteEntityRef
void System::Xml::TextEncodedRawTextWriter::WriteEntityRef(::CsString* name) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteEntityRef", name));
}
// Autogenerated method: System.Xml.TextEncodedRawTextWriter.WriteCharEntity
void System::Xml::TextEncodedRawTextWriter::WriteCharEntity(::Il2CppChar ch) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteCharEntity", ch));
}
// Autogenerated method: System.Xml.TextEncodedRawTextWriter.WriteSurrogateCharEntity
void System::Xml::TextEncodedRawTextWriter::WriteSurrogateCharEntity(::Il2CppChar lowChar, ::Il2CppChar highChar) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteSurrogateCharEntity", lowChar, highChar));
}
// Autogenerated method: System.Xml.TextEncodedRawTextWriter.WriteWhitespace
void System::Xml::TextEncodedRawTextWriter::WriteWhitespace(::CsString* ws) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteWhitespace", ws));
}
// Autogenerated method: System.Xml.TextEncodedRawTextWriter.WriteString
void System::Xml::TextEncodedRawTextWriter::WriteString(::CsString* textBlock) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteString", textBlock));
}
// Autogenerated method: System.Xml.TextEncodedRawTextWriter.WriteChars
void System::Xml::TextEncodedRawTextWriter::WriteChars(::Array<::Il2CppChar>* buffer, int index, int count) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteChars", buffer, index, count));
}
// Autogenerated method: System.Xml.TextEncodedRawTextWriter.WriteRaw
void System::Xml::TextEncodedRawTextWriter::WriteRaw(::Array<::Il2CppChar>* buffer, int index, int count) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteRaw", buffer, index, count));
}
// Autogenerated method: System.Xml.TextEncodedRawTextWriter.WriteRaw
void System::Xml::TextEncodedRawTextWriter::WriteRaw(::CsString* data) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteRaw", data));
}
