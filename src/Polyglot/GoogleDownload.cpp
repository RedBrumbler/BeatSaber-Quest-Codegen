// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Polyglot.GoogleDownload
#include "Polyglot/GoogleDownload.hpp"
// Including type: Polyglot.GoogleDownload/<DownloadSheet>d__0
#include "Polyglot/GoogleDownload_-DownloadSheet-d__0.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: Polyglot.GoogleDriveDownloadFormat
#include "Polyglot/GoogleDriveDownloadFormat.hpp"
// Including type: System.Func`2
#include "System/Func_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Polyglot.GoogleDownload.DownloadSheet
System::Collections::IEnumerator* Polyglot::GoogleDownload::DownloadSheet(::CsString* docsId, ::CsString* sheetId, System::Action_1<::CsString*>* done, Polyglot::GoogleDriveDownloadFormat format, System::Func_2<float, bool>* progressbar) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>("Polyglot", "GoogleDownload", "DownloadSheet", docsId, sheetId, done, format, progressbar));
}
