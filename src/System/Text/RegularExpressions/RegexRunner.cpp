// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.RegularExpressions.RegexRunner
#include "System/Text/RegularExpressions/RegexRunner.hpp"
// Including type: System.Text.RegularExpressions.Match
#include "System/Text/RegularExpressions/Match.hpp"
// Including type: System.Text.RegularExpressions.Regex
#include "System/Text/RegularExpressions/Regex.hpp"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Text.RegularExpressions.RegexRunner.Scan
System::Text::RegularExpressions::Match* System::Text::RegularExpressions::RegexRunner::Scan(System::Text::RegularExpressions::Regex* regex, ::CsString* text, int textbeg, int textend, int textstart, int prevlen, bool quick, System::TimeSpan timeout) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Text::RegularExpressions::Match*>(this, "Scan", regex, text, textbeg, textend, textstart, prevlen, quick, timeout));
}
// Autogenerated method: System.Text.RegularExpressions.RegexRunner.StartTimeoutWatch
void System::Text::RegularExpressions::RegexRunner::StartTimeoutWatch() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "StartTimeoutWatch"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexRunner.CheckTimeout
void System::Text::RegularExpressions::RegexRunner::CheckTimeout() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CheckTimeout"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexRunner.DoCheckTimeout
void System::Text::RegularExpressions::RegexRunner::DoCheckTimeout() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DoCheckTimeout"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexRunner.Go
void System::Text::RegularExpressions::RegexRunner::Go() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Go"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexRunner.FindFirstChar
bool System::Text::RegularExpressions::RegexRunner::FindFirstChar() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "FindFirstChar"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexRunner.InitTrackCount
void System::Text::RegularExpressions::RegexRunner::InitTrackCount() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InitTrackCount"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexRunner.InitMatch
void System::Text::RegularExpressions::RegexRunner::InitMatch() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InitMatch"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexRunner.TidyMatch
System::Text::RegularExpressions::Match* System::Text::RegularExpressions::RegexRunner::TidyMatch(bool quick) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Text::RegularExpressions::Match*>(this, "TidyMatch", quick));
}
// Autogenerated method: System.Text.RegularExpressions.RegexRunner.EnsureStorage
void System::Text::RegularExpressions::RegexRunner::EnsureStorage() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EnsureStorage"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexRunner.IsBoundary
bool System::Text::RegularExpressions::RegexRunner::IsBoundary(int index, int startpos, int endpos) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsBoundary", index, startpos, endpos));
}
// Autogenerated method: System.Text.RegularExpressions.RegexRunner.IsECMABoundary
bool System::Text::RegularExpressions::RegexRunner::IsECMABoundary(int index, int startpos, int endpos) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsECMABoundary", index, startpos, endpos));
}
// Autogenerated method: System.Text.RegularExpressions.RegexRunner.DoubleTrack
void System::Text::RegularExpressions::RegexRunner::DoubleTrack() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DoubleTrack"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexRunner.DoubleStack
void System::Text::RegularExpressions::RegexRunner::DoubleStack() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DoubleStack"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexRunner.DoubleCrawl
void System::Text::RegularExpressions::RegexRunner::DoubleCrawl() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DoubleCrawl"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexRunner.Crawl
void System::Text::RegularExpressions::RegexRunner::Crawl(int i) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Crawl", i));
}
// Autogenerated method: System.Text.RegularExpressions.RegexRunner.Popcrawl
int System::Text::RegularExpressions::RegexRunner::Popcrawl() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Popcrawl"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexRunner.Crawlpos
int System::Text::RegularExpressions::RegexRunner::Crawlpos() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Crawlpos"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexRunner.Capture
void System::Text::RegularExpressions::RegexRunner::Capture(int capnum, int start, int end) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Capture", capnum, start, end));
}
// Autogenerated method: System.Text.RegularExpressions.RegexRunner.TransferCapture
void System::Text::RegularExpressions::RegexRunner::TransferCapture(int capnum, int uncapnum, int start, int end) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "TransferCapture", capnum, uncapnum, start, end));
}
// Autogenerated method: System.Text.RegularExpressions.RegexRunner.Uncapture
void System::Text::RegularExpressions::RegexRunner::Uncapture() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Uncapture"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexRunner.IsMatched
bool System::Text::RegularExpressions::RegexRunner::IsMatched(int cap) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsMatched", cap));
}
// Autogenerated method: System.Text.RegularExpressions.RegexRunner.MatchIndex
int System::Text::RegularExpressions::RegexRunner::MatchIndex(int cap) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "MatchIndex", cap));
}
// Autogenerated method: System.Text.RegularExpressions.RegexRunner.MatchLength
int System::Text::RegularExpressions::RegexRunner::MatchLength(int cap) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "MatchLength", cap));
}
// Autogenerated method: System.Text.RegularExpressions.RegexRunner..ctor
System::Text::RegularExpressions::RegexRunner* System::Text::RegularExpressions::RegexRunner::New_ctor() {
  return (RegexRunner*)THROW_UNLESS(il2cpp_utils::New("System.Text.RegularExpressions", "RegexRunner"));
}
