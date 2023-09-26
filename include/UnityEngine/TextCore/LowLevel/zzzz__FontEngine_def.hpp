#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine::TextCore::LowLevel {
struct FontEngineError;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphLoadFlags;
}
namespace UnityEngine::TextCore {
struct GlyphRect;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::TextCore::LowLevel {
struct FontReference;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::TextCore {
struct FaceInfo;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphRenderMode;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphMarshallingStruct;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphPackingMode;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphPairAdjustmentRecord;
}
namespace UnityEngine::TextCore {
class Glyph;
}
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
class FontEngine;
}
// Type: UnityEngine.TextCore.LowLevel::FontEngine
namespace UnityEngine::TextCore::LowLevel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15534))
// CS Name: UnityEngine.TextCore.LowLevel.FontEngine
class CORDL_TYPE FontEngine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~FontEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "FontEngine", modifiers: " const&", def_value: None }]
constexpr FontEngine(FontEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FontEngine", modifiers: "&&", def_value: None }]
constexpr FontEngine(FontEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FontEngine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FontEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FontEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FontEngine& operator=(FontEngine&& o) noexcept = default;
  constexpr FontEngine& operator=(FontEngine const& o) noexcept = default;
                


// Fields

static ::ArrayW<UnityEngine::TextCore::Glyph> __declspec(property(get=__get_s_Glyphs, put=__set_s_Glyphs))  s_Glyphs;

static void __set_s_Glyphs(::ArrayW<UnityEngine::TextCore::Glyph> value) ;

static ::ArrayW<UnityEngine::TextCore::Glyph> __get_s_Glyphs() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_s_GlyphIndexes_MarshallingArray_A, put=__set_s_GlyphIndexes_MarshallingArray_A))  s_GlyphIndexes_MarshallingArray_A;

static void __set_s_GlyphIndexes_MarshallingArray_A(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_s_GlyphIndexes_MarshallingArray_A() ;

static ::ArrayW<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> __declspec(property(get=__get_s_GlyphMarshallingStruct_IN, put=__set_s_GlyphMarshallingStruct_IN))  s_GlyphMarshallingStruct_IN;

static void __set_s_GlyphMarshallingStruct_IN(::ArrayW<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> value) ;

static ::ArrayW<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> __get_s_GlyphMarshallingStruct_IN() ;

static ::ArrayW<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> __declspec(property(get=__get_s_GlyphMarshallingStruct_OUT, put=__set_s_GlyphMarshallingStruct_OUT))  s_GlyphMarshallingStruct_OUT;

static void __set_s_GlyphMarshallingStruct_OUT(::ArrayW<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> value) ;

static ::ArrayW<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> __get_s_GlyphMarshallingStruct_OUT() ;

static ::ArrayW<UnityEngine::TextCore::GlyphRect> __declspec(property(get=__get_s_FreeGlyphRects, put=__set_s_FreeGlyphRects))  s_FreeGlyphRects;

static void __set_s_FreeGlyphRects(::ArrayW<UnityEngine::TextCore::GlyphRect> value) ;

static ::ArrayW<UnityEngine::TextCore::GlyphRect> __get_s_FreeGlyphRects() ;

static ::ArrayW<UnityEngine::TextCore::GlyphRect> __declspec(property(get=__get_s_UsedGlyphRects, put=__set_s_UsedGlyphRects))  s_UsedGlyphRects;

static void __set_s_UsedGlyphRects(::ArrayW<UnityEngine::TextCore::GlyphRect> value) ;

static ::ArrayW<UnityEngine::TextCore::GlyphRect> __get_s_UsedGlyphRects() ;

static ::ArrayW<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> __declspec(property(get=__get_s_PairAdjustmentRecords_MarshallingArray, put=__set_s_PairAdjustmentRecords_MarshallingArray))  s_PairAdjustmentRecords_MarshallingArray;

static void __set_s_PairAdjustmentRecords_MarshallingArray(::ArrayW<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> value) ;

static ::ArrayW<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> __get_s_PairAdjustmentRecords_MarshallingArray() ;

static System::Collections::Generic::Dictionary_2<uint32_t,UnityEngine::TextCore::Glyph> __declspec(property(get=__get_s_GlyphLookupDictionary, put=__set_s_GlyphLookupDictionary))  s_GlyphLookupDictionary;

static void __set_s_GlyphLookupDictionary(System::Collections::Generic::Dictionary_2<uint32_t,UnityEngine::TextCore::Glyph> value) ;

static System::Collections::Generic::Dictionary_2<uint32_t,UnityEngine::TextCore::Glyph> __get_s_GlyphLookupDictionary() ;


// Methods

/// @brief Method InitializeFontEngine addr 0x2bdbb28 size 0x68 virtual false final false
static UnityEngine::TextCore::LowLevel::FontEngineError InitializeFontEngine() ;

/// @brief Method InitializeFontEngine_Internal addr 0x2bdbb90 size 0x28 virtual false final false
static int32_t InitializeFontEngine_Internal() ;

/// @brief Method LoadFontFace addr 0x2bdbbb8 size 0x8c virtual false final false
static UnityEngine::TextCore::LowLevel::FontEngineError LoadFontFace(::StringW filePath, int32_t pointSize, int32_t faceIndex) ;

/// @brief Method LoadFontFace_With_Size_And_FaceIndex_Internal addr 0x2bdbc44 size 0x54 virtual false final false
static int32_t LoadFontFace_With_Size_And_FaceIndex_Internal(::StringW filePath, int32_t pointSize, int32_t faceIndex) ;

/// @brief Method LoadFontFace addr 0x2bdbc98 size 0x84 virtual false final false
static UnityEngine::TextCore::LowLevel::FontEngineError LoadFontFace(UnityEngine::Font font, int32_t pointSize) ;

/// @brief Method LoadFontFace_With_Size_FromFont_Internal addr 0x2bdbd1c size 0x44 virtual false final false
static int32_t LoadFontFace_With_Size_FromFont_Internal(UnityEngine::Font font, int32_t pointSize) ;

/// @brief Method LoadFontFace addr 0x2bdbd60 size 0x8c virtual false final false
static UnityEngine::TextCore::LowLevel::FontEngineError LoadFontFace(UnityEngine::Font font, int32_t pointSize, int32_t faceIndex) ;

/// @brief Method LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal addr 0x2bdbdec size 0x54 virtual false final false
static int32_t LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal(UnityEngine::Font font, int32_t pointSize, int32_t faceIndex) ;

/// @brief Method LoadFontFace addr 0x2bdbe40 size 0x8c virtual false final false
static UnityEngine::TextCore::LowLevel::FontEngineError LoadFontFace(::StringW familyName, ::StringW styleName, int32_t pointSize) ;

/// @brief Method LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal addr 0x2bdbecc size 0x54 virtual false final false
static int32_t LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal(::StringW familyName, ::StringW styleName, int32_t pointSize) ;

/// @brief Method TryGetSystemFontReference addr 0x2bdbf20 size 0x8c virtual false final false
static bool TryGetSystemFontReference(::StringW familyName, ::StringW styleName, ByRef<UnityEngine::TextCore::LowLevel::FontReference> fontRef) ;

/// @brief Method TryGetSystemFontReference_Internal addr 0x2bdbfac size 0x54 virtual false final false
static bool TryGetSystemFontReference_Internal(::StringW familyName, ::StringW styleName, ByRef<UnityEngine::TextCore::LowLevel::FontReference> fontRef) ;

/// @brief Method GetFaceInfo addr 0x2bdc000 size 0xa0 virtual false final false
static UnityEngine::TextCore::FaceInfo GetFaceInfo() ;

/// @brief Method GetFaceInfo_Internal addr 0x2bdc0a0 size 0x3c virtual false final false
static int32_t GetFaceInfo_Internal(ByRef<UnityEngine::TextCore::FaceInfo> faceInfo) ;

/// @brief Method GetGlyphIndex addr 0x2bdc0dc size 0x3c virtual false final false
static uint32_t GetGlyphIndex(uint32_t unicode) ;

/// @brief Method TryGetGlyphWithUnicodeValue addr 0x2bdc118 size 0x154 virtual false final false
static bool TryGetGlyphWithUnicodeValue(uint32_t unicode, UnityEngine::TextCore::LowLevel::GlyphLoadFlags flags, ByRef<UnityEngine::TextCore::Glyph> glyph) ;

/// @brief Method TryGetGlyphWithUnicodeValue_Internal addr 0x2bdc26c size 0x54 virtual false final false
static bool TryGetGlyphWithUnicodeValue_Internal(uint32_t unicode, UnityEngine::TextCore::LowLevel::GlyphLoadFlags loadFlags, ByRef<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> glyphStruct) ;

/// @brief Method TryGetGlyphWithIndexValue addr 0x2bdc2c0 size 0x154 virtual false final false
static bool TryGetGlyphWithIndexValue(uint32_t glyphIndex, UnityEngine::TextCore::LowLevel::GlyphLoadFlags flags, ByRef<UnityEngine::TextCore::Glyph> glyph) ;

/// @brief Method TryGetGlyphWithIndexValue_Internal addr 0x2bdc414 size 0x54 virtual false final false
static bool TryGetGlyphWithIndexValue_Internal(uint32_t glyphIndex, UnityEngine::TextCore::LowLevel::GlyphLoadFlags loadFlags, ByRef<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> glyphStruct) ;

/// @brief Method SetTextureUploadMode addr 0x2bdc468 size 0x3c virtual false final false
static void SetTextureUploadMode(bool shouldUploadImmediately) ;

/// @brief Method TryAddGlyphToTexture addr 0x2bdc4a4 size 0x530 virtual false final false
static bool TryAddGlyphToTexture(uint32_t glyphIndex, int32_t padding, UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode, System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect> freeGlyphRects, System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect> usedGlyphRects, UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, UnityEngine::Texture2D texture, ByRef<UnityEngine::TextCore::Glyph> glyph) ;

/// @brief Method TryAddGlyphToTexture_Internal addr 0x2bdc9d4 size 0x9c virtual false final false
static bool TryAddGlyphToTexture_Internal(uint32_t glyphIndex, int32_t padding, UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode, ByRef<::ArrayW<UnityEngine::TextCore::GlyphRect>> freeGlyphRects, ByRef<int32_t> freeGlyphRectCount, ByRef<::ArrayW<UnityEngine::TextCore::GlyphRect>> usedGlyphRects, ByRef<int32_t> usedGlyphRectCount, UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, UnityEngine::Texture2D texture, ByRef<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> glyph) ;

/// @brief Method TryAddGlyphsToTexture addr 0x2bdca70 size 0x888 virtual false final false
static bool TryAddGlyphsToTexture(System::Collections::Generic::List_1<uint32_t> glyphIndexes, int32_t padding, UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode, System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect> freeGlyphRects, System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect> usedGlyphRects, UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, UnityEngine::Texture2D texture, ByRef<::ArrayW<UnityEngine::TextCore::Glyph>> glyphs) ;

/// @brief Method TryAddGlyphsToTexture_Internal addr 0x2bdd318 size 0xa8 virtual false final false
static bool TryAddGlyphsToTexture_Internal(::ArrayW<uint32_t> glyphIndex, int32_t padding, UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode, ByRef<::ArrayW<UnityEngine::TextCore::GlyphRect>> freeGlyphRects, ByRef<int32_t> freeGlyphRectCount, ByRef<::ArrayW<UnityEngine::TextCore::GlyphRect>> usedGlyphRects, ByRef<int32_t> usedGlyphRectCount, UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, UnityEngine::Texture2D texture, ByRef<::ArrayW<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>> glyphs, ByRef<int32_t> glyphCount) ;

/// @brief Method GetGlyphPairAdjustmentTable addr 0x2bdd3c0 size 0x150 virtual false final false
static ::ArrayW<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> GetGlyphPairAdjustmentTable(::ArrayW<uint32_t> glyphIndexes) ;

/// @brief Method GetGlyphPairAdjustmentRecords addr 0x2bdd590 size 0x188 virtual false final false
static ::ArrayW<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> GetGlyphPairAdjustmentRecords(System::Collections::Generic::List_1<uint32_t> glyphIndexes, ByRef<int32_t> recordCount) ;

/// @brief Method PopulatePairAdjustmentRecordMarshallingArray_from_KernTable addr 0x2bdd510 size 0x44 virtual false final false
static int32_t PopulatePairAdjustmentRecordMarshallingArray_from_KernTable(::ArrayW<uint32_t> glyphIndexes, ByRef<int32_t> recordCount) ;

/// @brief Method GetPairAdjustmentRecordsFromMarshallingArray addr 0x2bdd554 size 0x3c virtual false final false
static int32_t GetPairAdjustmentRecordsFromMarshallingArray(ByRef<::ArrayW<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>> glyphPairAdjustmentRecords) ;

/// @brief Method GenericListToMarshallingArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void GenericListToMarshallingArray(ByRef<System::Collections::Generic::List_1<T>> srcList, ByRef<::ArrayW<T>> dstArray) ;

/// @brief Method SetMarshallingArraySize addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void SetMarshallingArraySize(ByRef<::ArrayW<T>> marshallingArray, int32_t recordCount) ;

/// @brief Method ResetAtlasTexture addr 0x2bdd718 size 0x3c virtual false final false
static void ResetAtlasTexture(UnityEngine::Texture2D texture) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::LowLevel
NEED_NO_BOX(UnityEngine::TextCore::LowLevel::FontEngine);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::LowLevel::FontEngine, "UnityEngine.TextCore.LowLevel", "FontEngine");
