#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__TermInfoStrings_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::TermInfoStrings::TermInfoStrings(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::TermInfoStrings::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::TermInfoStrings::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::TermInfoStrings  System::TermInfoStrings::BackTab{0};
constexpr System::TermInfoStrings  System::TermInfoStrings::Bell{1};
constexpr System::TermInfoStrings  System::TermInfoStrings::CarriageReturn{2};
constexpr System::TermInfoStrings  System::TermInfoStrings::ChangeScrollRegion{3};
constexpr System::TermInfoStrings  System::TermInfoStrings::ClearAllTabs{4};
constexpr System::TermInfoStrings  System::TermInfoStrings::ClearScreen{5};
constexpr System::TermInfoStrings  System::TermInfoStrings::ClrEol{6};
constexpr System::TermInfoStrings  System::TermInfoStrings::ClrEos{7};
constexpr System::TermInfoStrings  System::TermInfoStrings::ColumnAddress{8};
constexpr System::TermInfoStrings  System::TermInfoStrings::CommandCharacter{9};
constexpr System::TermInfoStrings  System::TermInfoStrings::CursorAddress{10};
constexpr System::TermInfoStrings  System::TermInfoStrings::CursorDown{11};
constexpr System::TermInfoStrings  System::TermInfoStrings::CursorHome{12};
constexpr System::TermInfoStrings  System::TermInfoStrings::CursorInvisible{13};
constexpr System::TermInfoStrings  System::TermInfoStrings::CursorLeft{14};
constexpr System::TermInfoStrings  System::TermInfoStrings::CursorMemAddress{15};
constexpr System::TermInfoStrings  System::TermInfoStrings::CursorNormal{16};
constexpr System::TermInfoStrings  System::TermInfoStrings::CursorRight{17};
constexpr System::TermInfoStrings  System::TermInfoStrings::CursorToLl{18};
constexpr System::TermInfoStrings  System::TermInfoStrings::CursorUp{19};
constexpr System::TermInfoStrings  System::TermInfoStrings::CursorVisible{20};
constexpr System::TermInfoStrings  System::TermInfoStrings::DeleteCharacter{21};
constexpr System::TermInfoStrings  System::TermInfoStrings::DeleteLine{22};
constexpr System::TermInfoStrings  System::TermInfoStrings::DisStatusLine{23};
constexpr System::TermInfoStrings  System::TermInfoStrings::DownHalfLine{24};
constexpr System::TermInfoStrings  System::TermInfoStrings::EnterAltCharsetMode{25};
constexpr System::TermInfoStrings  System::TermInfoStrings::EnterBlinkMode{26};
constexpr System::TermInfoStrings  System::TermInfoStrings::EnterBoldMode{27};
constexpr System::TermInfoStrings  System::TermInfoStrings::EnterCaMode{28};
constexpr System::TermInfoStrings  System::TermInfoStrings::EnterDeleteMode{29};
constexpr System::TermInfoStrings  System::TermInfoStrings::EnterDimMode{30};
constexpr System::TermInfoStrings  System::TermInfoStrings::EnterInsertMode{31};
constexpr System::TermInfoStrings  System::TermInfoStrings::EnterSecureMode{32};
constexpr System::TermInfoStrings  System::TermInfoStrings::EnterProtectedMode{33};
constexpr System::TermInfoStrings  System::TermInfoStrings::EnterReverseMode{34};
constexpr System::TermInfoStrings  System::TermInfoStrings::EnterStandoutMode{35};
constexpr System::TermInfoStrings  System::TermInfoStrings::EnterUnderlineMode{36};
constexpr System::TermInfoStrings  System::TermInfoStrings::EraseChars{37};
constexpr System::TermInfoStrings  System::TermInfoStrings::ExitAltCharsetMode{38};
constexpr System::TermInfoStrings  System::TermInfoStrings::ExitAttributeMode{39};
constexpr System::TermInfoStrings  System::TermInfoStrings::ExitCaMode{40};
constexpr System::TermInfoStrings  System::TermInfoStrings::ExitDeleteMode{41};
constexpr System::TermInfoStrings  System::TermInfoStrings::ExitInsertMode{42};
constexpr System::TermInfoStrings  System::TermInfoStrings::ExitStandoutMode{43};
constexpr System::TermInfoStrings  System::TermInfoStrings::ExitUnderlineMode{44};
constexpr System::TermInfoStrings  System::TermInfoStrings::FlashScreen{45};
constexpr System::TermInfoStrings  System::TermInfoStrings::FormFeed{46};
constexpr System::TermInfoStrings  System::TermInfoStrings::FromStatusLine{47};
constexpr System::TermInfoStrings  System::TermInfoStrings::Init1string{48};
constexpr System::TermInfoStrings  System::TermInfoStrings::Init2string{49};
constexpr System::TermInfoStrings  System::TermInfoStrings::Init3string{50};
constexpr System::TermInfoStrings  System::TermInfoStrings::InitFile{51};
constexpr System::TermInfoStrings  System::TermInfoStrings::InsertCharacter{52};
constexpr System::TermInfoStrings  System::TermInfoStrings::InsertLine{53};
constexpr System::TermInfoStrings  System::TermInfoStrings::InsertPadding{54};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyBackspace{55};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyCatab{56};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyClear{57};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyCtab{58};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyDc{59};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyDl{60};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyDown{61};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyEic{62};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyEol{63};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyEos{64};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF0{65};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF1{66};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF10{67};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF2{68};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF3{69};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF4{70};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF5{71};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF6{72};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF7{73};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF8{74};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF9{75};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyHome{76};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyIc{77};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyIl{78};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyLeft{79};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyLl{80};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyNpage{81};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyPpage{82};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyRight{83};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeySf{84};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeySr{85};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyStab{86};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyUp{87};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeypadLocal{88};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeypadXmit{89};
constexpr System::TermInfoStrings  System::TermInfoStrings::LabF0{90};
constexpr System::TermInfoStrings  System::TermInfoStrings::LabF1{91};
constexpr System::TermInfoStrings  System::TermInfoStrings::LabF10{92};
constexpr System::TermInfoStrings  System::TermInfoStrings::LabF2{93};
constexpr System::TermInfoStrings  System::TermInfoStrings::LabF3{94};
constexpr System::TermInfoStrings  System::TermInfoStrings::LabF4{95};
constexpr System::TermInfoStrings  System::TermInfoStrings::LabF5{96};
constexpr System::TermInfoStrings  System::TermInfoStrings::LabF6{97};
constexpr System::TermInfoStrings  System::TermInfoStrings::LabF7{98};
constexpr System::TermInfoStrings  System::TermInfoStrings::LabF8{99};
constexpr System::TermInfoStrings  System::TermInfoStrings::LabF9{100};
constexpr System::TermInfoStrings  System::TermInfoStrings::MetaOff{101};
constexpr System::TermInfoStrings  System::TermInfoStrings::MetaOn{102};
constexpr System::TermInfoStrings  System::TermInfoStrings::Newline{103};
constexpr System::TermInfoStrings  System::TermInfoStrings::PadChar{104};
constexpr System::TermInfoStrings  System::TermInfoStrings::ParmDch{105};
constexpr System::TermInfoStrings  System::TermInfoStrings::ParmDeleteLine{106};
constexpr System::TermInfoStrings  System::TermInfoStrings::ParmDownCursor{107};
constexpr System::TermInfoStrings  System::TermInfoStrings::ParmIch{108};
constexpr System::TermInfoStrings  System::TermInfoStrings::ParmIndex{109};
constexpr System::TermInfoStrings  System::TermInfoStrings::ParmInsertLine{110};
constexpr System::TermInfoStrings  System::TermInfoStrings::ParmLeftCursor{111};
constexpr System::TermInfoStrings  System::TermInfoStrings::ParmRightCursor{112};
constexpr System::TermInfoStrings  System::TermInfoStrings::ParmRindex{113};
constexpr System::TermInfoStrings  System::TermInfoStrings::ParmUpCursor{114};
constexpr System::TermInfoStrings  System::TermInfoStrings::PkeyKey{115};
constexpr System::TermInfoStrings  System::TermInfoStrings::PkeyLocal{116};
constexpr System::TermInfoStrings  System::TermInfoStrings::PkeyXmit{117};
constexpr System::TermInfoStrings  System::TermInfoStrings::PrintScreen{118};
constexpr System::TermInfoStrings  System::TermInfoStrings::PrtrOff{119};
constexpr System::TermInfoStrings  System::TermInfoStrings::PrtrOn{120};
constexpr System::TermInfoStrings  System::TermInfoStrings::RepeatChar{121};
constexpr System::TermInfoStrings  System::TermInfoStrings::Reset1string{122};
constexpr System::TermInfoStrings  System::TermInfoStrings::Reset2string{123};
constexpr System::TermInfoStrings  System::TermInfoStrings::Reset3string{124};
constexpr System::TermInfoStrings  System::TermInfoStrings::ResetFile{125};
constexpr System::TermInfoStrings  System::TermInfoStrings::RestoreCursor{126};
constexpr System::TermInfoStrings  System::TermInfoStrings::RowAddress{127};
constexpr System::TermInfoStrings  System::TermInfoStrings::SaveCursor{128};
constexpr System::TermInfoStrings  System::TermInfoStrings::ScrollForward{129};
constexpr System::TermInfoStrings  System::TermInfoStrings::ScrollReverse{130};
constexpr System::TermInfoStrings  System::TermInfoStrings::SetAttributes{131};
constexpr System::TermInfoStrings  System::TermInfoStrings::SetTab{132};
constexpr System::TermInfoStrings  System::TermInfoStrings::SetWindow{133};
constexpr System::TermInfoStrings  System::TermInfoStrings::Tab{134};
constexpr System::TermInfoStrings  System::TermInfoStrings::ToStatusLine{135};
constexpr System::TermInfoStrings  System::TermInfoStrings::UnderlineChar{136};
constexpr System::TermInfoStrings  System::TermInfoStrings::UpHalfLine{137};
constexpr System::TermInfoStrings  System::TermInfoStrings::InitProg{138};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyA1{139};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyA3{140};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyB2{141};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyC1{142};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyC3{143};
constexpr System::TermInfoStrings  System::TermInfoStrings::PrtrNon{144};
constexpr System::TermInfoStrings  System::TermInfoStrings::CharPadding{145};
constexpr System::TermInfoStrings  System::TermInfoStrings::AcsChars{146};
constexpr System::TermInfoStrings  System::TermInfoStrings::PlabNorm{147};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyBtab{148};
constexpr System::TermInfoStrings  System::TermInfoStrings::EnterXonMode{149};
constexpr System::TermInfoStrings  System::TermInfoStrings::ExitXonMode{150};
constexpr System::TermInfoStrings  System::TermInfoStrings::EnterAmMode{151};
constexpr System::TermInfoStrings  System::TermInfoStrings::ExitAmMode{152};
constexpr System::TermInfoStrings  System::TermInfoStrings::XonCharacter{153};
constexpr System::TermInfoStrings  System::TermInfoStrings::XoffCharacter{154};
constexpr System::TermInfoStrings  System::TermInfoStrings::EnaAcs{155};
constexpr System::TermInfoStrings  System::TermInfoStrings::LabelOn{156};
constexpr System::TermInfoStrings  System::TermInfoStrings::LabelOff{157};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyBeg{158};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyCancel{159};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyClose{160};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyCommand{161};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyCopy{162};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyCreate{163};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyEnd{164};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyEnter{165};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyExit{166};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyFind{167};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyHelp{168};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyMark{169};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyMessage{170};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyMove{171};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyNext{172};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyOpen{173};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyOptions{174};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyPrevious{175};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyPrint{176};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyRedo{177};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyReference{178};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyRefresh{179};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyReplace{180};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyRestart{181};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyResume{182};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeySave{183};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeySuspend{184};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyUndo{185};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeySbeg{186};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyScancel{187};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyScommand{188};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyScopy{189};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyScreate{190};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeySdc{191};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeySdl{192};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeySelect{193};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeySend{194};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeySeol{195};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeySexit{196};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeySfind{197};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyShelp{198};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyShome{199};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeySic{200};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeySleft{201};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeySmessage{202};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeySmove{203};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeySnext{204};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeySoptions{205};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeySprevious{206};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeySprint{207};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeySredo{208};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeySreplace{209};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeySright{210};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeySrsume{211};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeySsave{212};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeySsuspend{213};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeySundo{214};
constexpr System::TermInfoStrings  System::TermInfoStrings::ReqForInput{215};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF11{216};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF12{217};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF13{218};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF14{219};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF15{220};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF16{221};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF17{222};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF18{223};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF19{224};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF20{225};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF21{226};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF22{227};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF23{228};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF24{229};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF25{230};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF26{231};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF27{232};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF28{233};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF29{234};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF30{235};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF31{236};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF32{237};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF33{238};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF34{239};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF35{240};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF36{241};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF37{242};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF38{243};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF39{244};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF40{245};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF41{246};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF42{247};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF43{248};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF44{249};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF45{250};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF46{251};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF47{252};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF48{253};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF49{254};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF50{255};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF51{256};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF52{257};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF53{258};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF54{259};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF55{260};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF56{261};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF57{262};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF58{263};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF59{264};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF60{265};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF61{266};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF62{267};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyF63{268};
constexpr System::TermInfoStrings  System::TermInfoStrings::ClrBol{269};
constexpr System::TermInfoStrings  System::TermInfoStrings::ClearMargins{270};
constexpr System::TermInfoStrings  System::TermInfoStrings::SetLeftMargin{271};
constexpr System::TermInfoStrings  System::TermInfoStrings::SetRightMargin{272};
constexpr System::TermInfoStrings  System::TermInfoStrings::LabelFormat{273};
constexpr System::TermInfoStrings  System::TermInfoStrings::SetClock{274};
constexpr System::TermInfoStrings  System::TermInfoStrings::DisplayClock{275};
constexpr System::TermInfoStrings  System::TermInfoStrings::RemoveClock{276};
constexpr System::TermInfoStrings  System::TermInfoStrings::CreateWindow{277};
constexpr System::TermInfoStrings  System::TermInfoStrings::GotoWindow{278};
constexpr System::TermInfoStrings  System::TermInfoStrings::Hangup{279};
constexpr System::TermInfoStrings  System::TermInfoStrings::DialPhone{280};
constexpr System::TermInfoStrings  System::TermInfoStrings::QuickDial{281};
constexpr System::TermInfoStrings  System::TermInfoStrings::Tone{282};
constexpr System::TermInfoStrings  System::TermInfoStrings::Pulse{283};
constexpr System::TermInfoStrings  System::TermInfoStrings::FlashHook{284};
constexpr System::TermInfoStrings  System::TermInfoStrings::FixedPause{285};
constexpr System::TermInfoStrings  System::TermInfoStrings::WaitTone{286};
constexpr System::TermInfoStrings  System::TermInfoStrings::User0{287};
constexpr System::TermInfoStrings  System::TermInfoStrings::User1{288};
constexpr System::TermInfoStrings  System::TermInfoStrings::User2{289};
constexpr System::TermInfoStrings  System::TermInfoStrings::User3{290};
constexpr System::TermInfoStrings  System::TermInfoStrings::User4{291};
constexpr System::TermInfoStrings  System::TermInfoStrings::User5{292};
constexpr System::TermInfoStrings  System::TermInfoStrings::User6{293};
constexpr System::TermInfoStrings  System::TermInfoStrings::User7{294};
constexpr System::TermInfoStrings  System::TermInfoStrings::User8{295};
constexpr System::TermInfoStrings  System::TermInfoStrings::User9{296};
constexpr System::TermInfoStrings  System::TermInfoStrings::OrigPair{297};
constexpr System::TermInfoStrings  System::TermInfoStrings::OrigColors{298};
constexpr System::TermInfoStrings  System::TermInfoStrings::InitializeColor{299};
constexpr System::TermInfoStrings  System::TermInfoStrings::InitializePair{300};
constexpr System::TermInfoStrings  System::TermInfoStrings::SetColorPair{301};
constexpr System::TermInfoStrings  System::TermInfoStrings::SetForeground{302};
constexpr System::TermInfoStrings  System::TermInfoStrings::SetBackground{303};
constexpr System::TermInfoStrings  System::TermInfoStrings::ChangeCharPitch{304};
constexpr System::TermInfoStrings  System::TermInfoStrings::ChangeLinePitch{305};
constexpr System::TermInfoStrings  System::TermInfoStrings::ChangeResHorz{306};
constexpr System::TermInfoStrings  System::TermInfoStrings::ChangeResVert{307};
constexpr System::TermInfoStrings  System::TermInfoStrings::DefineChar{308};
constexpr System::TermInfoStrings  System::TermInfoStrings::EnterDoublewideMode{309};
constexpr System::TermInfoStrings  System::TermInfoStrings::EnterDraftQuality{310};
constexpr System::TermInfoStrings  System::TermInfoStrings::EnterItalicsMode{311};
constexpr System::TermInfoStrings  System::TermInfoStrings::EnterLeftwardMode{312};
constexpr System::TermInfoStrings  System::TermInfoStrings::EnterMicroMode{313};
constexpr System::TermInfoStrings  System::TermInfoStrings::EnterNearLetterQuality{314};
constexpr System::TermInfoStrings  System::TermInfoStrings::EnterNormalQuality{315};
constexpr System::TermInfoStrings  System::TermInfoStrings::EnterShadowMode{316};
constexpr System::TermInfoStrings  System::TermInfoStrings::EnterSubscriptMode{317};
constexpr System::TermInfoStrings  System::TermInfoStrings::EnterSuperscriptMode{318};
constexpr System::TermInfoStrings  System::TermInfoStrings::EnterUpwardMode{319};
constexpr System::TermInfoStrings  System::TermInfoStrings::ExitDoublewideMode{320};
constexpr System::TermInfoStrings  System::TermInfoStrings::ExitItalicsMode{321};
constexpr System::TermInfoStrings  System::TermInfoStrings::ExitLeftwardMode{322};
constexpr System::TermInfoStrings  System::TermInfoStrings::ExitMicroMode{323};
constexpr System::TermInfoStrings  System::TermInfoStrings::ExitShadowMode{324};
constexpr System::TermInfoStrings  System::TermInfoStrings::ExitSubscriptMode{325};
constexpr System::TermInfoStrings  System::TermInfoStrings::ExitSuperscriptMode{326};
constexpr System::TermInfoStrings  System::TermInfoStrings::ExitUpwardMode{327};
constexpr System::TermInfoStrings  System::TermInfoStrings::MicroColumnAddress{328};
constexpr System::TermInfoStrings  System::TermInfoStrings::MicroDown{329};
constexpr System::TermInfoStrings  System::TermInfoStrings::MicroLeft{330};
constexpr System::TermInfoStrings  System::TermInfoStrings::MicroRight{331};
constexpr System::TermInfoStrings  System::TermInfoStrings::MicroRowAddress{332};
constexpr System::TermInfoStrings  System::TermInfoStrings::MicroUp{333};
constexpr System::TermInfoStrings  System::TermInfoStrings::OrderOfPins{334};
constexpr System::TermInfoStrings  System::TermInfoStrings::ParmDownMicro{335};
constexpr System::TermInfoStrings  System::TermInfoStrings::ParmLeftMicro{336};
constexpr System::TermInfoStrings  System::TermInfoStrings::ParmRightMicro{337};
constexpr System::TermInfoStrings  System::TermInfoStrings::ParmUpMicro{338};
constexpr System::TermInfoStrings  System::TermInfoStrings::SelectCharSet{339};
constexpr System::TermInfoStrings  System::TermInfoStrings::SetBottomMargin{340};
constexpr System::TermInfoStrings  System::TermInfoStrings::SetBottomMarginParm{341};
constexpr System::TermInfoStrings  System::TermInfoStrings::SetLeftMarginParm{342};
constexpr System::TermInfoStrings  System::TermInfoStrings::SetRightMarginParm{343};
constexpr System::TermInfoStrings  System::TermInfoStrings::SetTopMargin{344};
constexpr System::TermInfoStrings  System::TermInfoStrings::SetTopMarginParm{345};
constexpr System::TermInfoStrings  System::TermInfoStrings::StartBitImage{346};
constexpr System::TermInfoStrings  System::TermInfoStrings::StartCharSetDef{347};
constexpr System::TermInfoStrings  System::TermInfoStrings::StopBitImage{348};
constexpr System::TermInfoStrings  System::TermInfoStrings::StopCharSetDef{349};
constexpr System::TermInfoStrings  System::TermInfoStrings::SubscriptCharacters{350};
constexpr System::TermInfoStrings  System::TermInfoStrings::SuperscriptCharacters{351};
constexpr System::TermInfoStrings  System::TermInfoStrings::TheseCauseCr{352};
constexpr System::TermInfoStrings  System::TermInfoStrings::ZeroMotion{353};
constexpr System::TermInfoStrings  System::TermInfoStrings::CharSetNames{354};
constexpr System::TermInfoStrings  System::TermInfoStrings::KeyMouse{355};
constexpr System::TermInfoStrings  System::TermInfoStrings::MouseInfo{356};
constexpr System::TermInfoStrings  System::TermInfoStrings::ReqMousePos{357};
constexpr System::TermInfoStrings  System::TermInfoStrings::GetMouse{358};
constexpr System::TermInfoStrings  System::TermInfoStrings::SetAForeground{359};
constexpr System::TermInfoStrings  System::TermInfoStrings::SetABackground{360};
constexpr System::TermInfoStrings  System::TermInfoStrings::PkeyPlab{361};
constexpr System::TermInfoStrings  System::TermInfoStrings::DeviceType{362};
constexpr System::TermInfoStrings  System::TermInfoStrings::CodeSetInit{363};
constexpr System::TermInfoStrings  System::TermInfoStrings::Set0DesSeq{364};
constexpr System::TermInfoStrings  System::TermInfoStrings::Set1DesSeq{365};
constexpr System::TermInfoStrings  System::TermInfoStrings::Set2DesSeq{366};
constexpr System::TermInfoStrings  System::TermInfoStrings::Set3DesSeq{367};
constexpr System::TermInfoStrings  System::TermInfoStrings::SetLrMargin{368};
constexpr System::TermInfoStrings  System::TermInfoStrings::SetTbMargin{369};
constexpr System::TermInfoStrings  System::TermInfoStrings::BitImageRepeat{370};
constexpr System::TermInfoStrings  System::TermInfoStrings::BitImageNewline{371};
constexpr System::TermInfoStrings  System::TermInfoStrings::BitImageCarriageReturn{372};
constexpr System::TermInfoStrings  System::TermInfoStrings::ColorNames{373};
constexpr System::TermInfoStrings  System::TermInfoStrings::DefineBitImageRegion{374};
constexpr System::TermInfoStrings  System::TermInfoStrings::EndBitImageRegion{375};
constexpr System::TermInfoStrings  System::TermInfoStrings::SetColorBand{376};
constexpr System::TermInfoStrings  System::TermInfoStrings::SetPageLength{377};
constexpr System::TermInfoStrings  System::TermInfoStrings::DisplayPcChar{378};
constexpr System::TermInfoStrings  System::TermInfoStrings::EnterPcCharsetMode{379};
constexpr System::TermInfoStrings  System::TermInfoStrings::ExitPcCharsetMode{380};
constexpr System::TermInfoStrings  System::TermInfoStrings::EnterScancodeMode{381};
constexpr System::TermInfoStrings  System::TermInfoStrings::ExitScancodeMode{382};
constexpr System::TermInfoStrings  System::TermInfoStrings::PcTermOptions{383};
constexpr System::TermInfoStrings  System::TermInfoStrings::ScancodeEscape{384};
constexpr System::TermInfoStrings  System::TermInfoStrings::AltScancodeEsc{385};
constexpr System::TermInfoStrings  System::TermInfoStrings::EnterHorizontalHlMode{386};
constexpr System::TermInfoStrings  System::TermInfoStrings::EnterLeftHlMode{387};
constexpr System::TermInfoStrings  System::TermInfoStrings::EnterLowHlMode{388};
constexpr System::TermInfoStrings  System::TermInfoStrings::EnterRightHlMode{389};
constexpr System::TermInfoStrings  System::TermInfoStrings::EnterTopHlMode{390};
constexpr System::TermInfoStrings  System::TermInfoStrings::EnterVerticalHlMode{391};
constexpr System::TermInfoStrings  System::TermInfoStrings::SetAAttributes{392};
constexpr System::TermInfoStrings  System::TermInfoStrings::SetPglenInch{393};
constexpr System::TermInfoStrings  System::TermInfoStrings::Last{394};
