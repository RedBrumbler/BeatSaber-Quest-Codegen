// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Resources.IResourceGroveler
#include "System/Resources/IResourceGroveler.hpp"
// Including type: System.Resources.ResourceSet
#include "System/Resources/ResourceSet.hpp"
// Including type: System.Globalization.CultureInfo
#include "System/Globalization/CultureInfo.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: System.Threading.StackCrawlMark
#include "System/Threading/StackCrawlMark.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Resources.IResourceGroveler.GrovelForResourceSet
System::Resources::ResourceSet* System::Resources::IResourceGroveler::GrovelForResourceSet(System::Globalization::CultureInfo* culture, System::Collections::Generic::Dictionary_2<::CsString*, System::Resources::ResourceSet*>* localResourceSets, bool tryParents, bool createIfNotExists, System::Threading::StackCrawlMark& stackMark) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Resources::ResourceSet*>(this, "GrovelForResourceSet", culture, localResourceSets, tryParents, createIfNotExists, stackMark));
}
