// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Xml.XmlWellFormedWriter/NamespaceResolverProxy
#include "System/Xml/XmlWellFormedWriter_NamespaceResolverProxy.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Xml.XmlWellFormedWriter/NamespaceResolverProxy..ctor
System::Xml::XmlWellFormedWriter::NamespaceResolverProxy* System::Xml::XmlWellFormedWriter::NamespaceResolverProxy::New_ctor(System::Xml::XmlWellFormedWriter* wfWriter) {
  return (XmlWellFormedWriter::NamespaceResolverProxy*)THROW_UNLESS(il2cpp_utils::New("System.Xml", "XmlWellFormedWriter/NamespaceResolverProxy", wfWriter));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter/NamespaceResolverProxy.System.Xml.IXmlNamespaceResolver.LookupNamespace
::Il2CppString* System::Xml::XmlWellFormedWriter::NamespaceResolverProxy::System_Xml_IXmlNamespaceResolver_LookupNamespace(::Il2CppString* prefix) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "System.Xml.IXmlNamespaceResolver.LookupNamespace", prefix));
}
// Autogenerated method: System.Xml.XmlWellFormedWriter/NamespaceResolverProxy.System.Xml.IXmlNamespaceResolver.LookupPrefix
::Il2CppString* System::Xml::XmlWellFormedWriter::NamespaceResolverProxy::System_Xml_IXmlNamespaceResolver_LookupPrefix(::Il2CppString* namespaceName) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "System.Xml.IXmlNamespaceResolver.LookupPrefix", namespaceName));
}