// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.TMP_Asset
#include "TMPro/TMP_Asset.hpp"
// Including type: TMPro.AtlasPopulationMode
#include "TMPro/AtlasPopulationMode.hpp"
// Including type: UnityEngine.TextCore.FaceInfo
#include "UnityEngine/TextCore/FaceInfo.hpp"
// Including type: UnityEngine.TextCore.GlyphRect
#include "UnityEngine/TextCore/GlyphRect.hpp"
// Including type: UnityEngine.TextCore.LowLevel.GlyphRenderMode
#include "UnityEngine/TextCore/LowLevel/GlyphRenderMode.hpp"
// Including type: TMPro.FontAssetCreationSettings
#include "TMPro/FontAssetCreationSettings.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Character
  class TMP_Character;
  // Forward declaring type: FaceInfo_Legacy
  class FaceInfo_Legacy;
  // Forward declaring type: TMP_Glyph
  class TMP_Glyph;
  // Forward declaring type: KerningTable
  class KerningTable;
  // Forward declaring type: TMP_FontFeatureTable
  class TMP_FontFeatureTable;
  // Forward declaring type: TMP_FontWeightPair
  struct TMP_FontWeightPair;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Font
  class Font;
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::TextCore
namespace UnityEngine::TextCore {
  // Forward declaring type: Glyph
  class Glyph;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_FontAsset
  class TMP_FontAsset : public TMPro::TMP_Asset {
    public:
    // Nested type: TMPro::TMP_FontAsset::$$c
    class $$c;
    // private System.String m_Version
    // Offset: 0x30
    ::Il2CppString* m_Version;
    // System.String m_SourceFontFileGUID
    // Offset: 0x38
    ::Il2CppString* m_SourceFontFileGUID;
    // private UnityEngine.Font m_SourceFontFile
    // Offset: 0x40
    UnityEngine::Font* m_SourceFontFile;
    // private TMPro.AtlasPopulationMode m_AtlasPopulationMode
    // Offset: 0x48
    TMPro::AtlasPopulationMode m_AtlasPopulationMode;
    // private UnityEngine.TextCore.FaceInfo m_FaceInfo
    // Offset: 0x50
    UnityEngine::TextCore::FaceInfo m_FaceInfo;
    // private System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph> m_GlyphTable
    // Offset: 0xA8
    System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph*>* m_GlyphTable;
    // private System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.Glyph> m_GlyphLookupDictionary
    // Offset: 0xB0
    System::Collections::Generic::Dictionary_2<uint, UnityEngine::TextCore::Glyph*>* m_GlyphLookupDictionary;
    // private System.Collections.Generic.List`1<TMPro.TMP_Character> m_CharacterTable
    // Offset: 0xB8
    System::Collections::Generic::List_1<TMPro::TMP_Character*>* m_CharacterTable;
    // private System.Collections.Generic.Dictionary`2<System.UInt32,TMPro.TMP_Character> m_CharacterLookupDictionary
    // Offset: 0xC0
    System::Collections::Generic::Dictionary_2<uint, TMPro::TMP_Character*>* m_CharacterLookupDictionary;
    // private UnityEngine.Texture2D m_AtlasTexture
    // Offset: 0xC8
    UnityEngine::Texture2D* m_AtlasTexture;
    // private UnityEngine.Texture2D[] m_AtlasTextures
    // Offset: 0xD0
    ::Array<UnityEngine::Texture2D*>* m_AtlasTextures;
    // System.Int32 m_AtlasTextureIndex
    // Offset: 0xD8
    int m_AtlasTextureIndex;
    // private System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect> m_UsedGlyphRects
    // Offset: 0xE0
    System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect>* m_UsedGlyphRects;
    // private System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect> m_FreeGlyphRects
    // Offset: 0xE8
    System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect>* m_FreeGlyphRects;
    // private TMPro.FaceInfo_Legacy m_fontInfo
    // Offset: 0xF0
    TMPro::FaceInfo_Legacy* m_fontInfo;
    // public UnityEngine.Texture2D atlas
    // Offset: 0xF8
    UnityEngine::Texture2D* atlas;
    // private System.Int32 m_AtlasWidth
    // Offset: 0x100
    int m_AtlasWidth;
    // private System.Int32 m_AtlasHeight
    // Offset: 0x104
    int m_AtlasHeight;
    // private System.Int32 m_AtlasPadding
    // Offset: 0x108
    int m_AtlasPadding;
    // private UnityEngine.TextCore.LowLevel.GlyphRenderMode m_AtlasRenderMode
    // Offset: 0x10C
    UnityEngine::TextCore::LowLevel::GlyphRenderMode m_AtlasRenderMode;
    // System.Collections.Generic.List`1<TMPro.TMP_Glyph> m_glyphInfoList
    // Offset: 0x110
    System::Collections::Generic::List_1<TMPro::TMP_Glyph*>* m_glyphInfoList;
    // TMPro.KerningTable m_KerningTable
    // Offset: 0x118
    TMPro::KerningTable* m_KerningTable;
    // private TMPro.TMP_FontFeatureTable m_FontFeatureTable
    // Offset: 0x120
    TMPro::TMP_FontFeatureTable* m_FontFeatureTable;
    // private System.Collections.Generic.List`1<TMPro.TMP_FontAsset> fallbackFontAssets
    // Offset: 0x128
    System::Collections::Generic::List_1<TMPro::TMP_FontAsset*>* fallbackFontAssets;
    // public System.Collections.Generic.List`1<TMPro.TMP_FontAsset> m_FallbackFontAssetTable
    // Offset: 0x130
    System::Collections::Generic::List_1<TMPro::TMP_FontAsset*>* m_FallbackFontAssetTable;
    // TMPro.FontAssetCreationSettings m_CreationSettings
    // Offset: 0x138
    TMPro::FontAssetCreationSettings m_CreationSettings;
    // private TMPro.TMP_FontWeightPair[] m_FontWeightTable
    // Offset: 0x190
    ::Array<TMPro::TMP_FontWeightPair>* m_FontWeightTable;
    // private TMPro.TMP_FontWeightPair[] fontWeights
    // Offset: 0x198
    ::Array<TMPro::TMP_FontWeightPair>* fontWeights;
    // public System.Single normalStyle
    // Offset: 0x1A0
    float normalStyle;
    // public System.Single normalSpacingOffset
    // Offset: 0x1A4
    float normalSpacingOffset;
    // public System.Single boldStyle
    // Offset: 0x1A8
    float boldStyle;
    // public System.Single boldSpacing
    // Offset: 0x1AC
    float boldSpacing;
    // public System.Byte italicStyle
    // Offset: 0x1B0
    uint8_t italicStyle;
    // public System.Byte tabSize
    // Offset: 0x1B1
    uint8_t tabSize;
    // private System.Byte m_oldTabSize
    // Offset: 0x1B2
    uint8_t m_oldTabSize;
    // System.Boolean m_IsFontAssetLookupTablesDirty
    // Offset: 0x1B3
    bool m_IsFontAssetLookupTablesDirty;
    // private System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph> m_GlyphsToPack
    // Offset: 0x1B8
    System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph*>* m_GlyphsToPack;
    // private System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph> m_GlyphsPacked
    // Offset: 0x1C0
    System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph*>* m_GlyphsPacked;
    // private System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph> m_GlyphsToRender
    // Offset: 0x1C8
    System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph*>* m_GlyphsToRender;
    // private System.Collections.Generic.List`1<System.UInt32> m_GlyphIndexList
    // Offset: 0x1D0
    System::Collections::Generic::List_1<uint>* m_GlyphIndexList;
    // private System.Collections.Generic.List`1<TMPro.TMP_Character> m_CharactersToAdd
    // Offset: 0x1D8
    System::Collections::Generic::List_1<TMPro::TMP_Character*>* m_CharactersToAdd;
    // Get static field: static System.UInt32[] s_GlyphIndexArray
    static ::Array<uint>* _get_s_GlyphIndexArray();
    // Set static field: static System.UInt32[] s_GlyphIndexArray
    static void _set_s_GlyphIndexArray(::Array<uint>* value);
    // Get static field: static System.Collections.Generic.List`1<System.UInt32> s_MissingCharacterList
    static System::Collections::Generic::List_1<uint>* _get_s_MissingCharacterList();
    // Set static field: static System.Collections.Generic.List`1<System.UInt32> s_MissingCharacterList
    static void _set_s_MissingCharacterList(System::Collections::Generic::List_1<uint>* value);
    // public System.String get_version()
    // Offset: 0xB6E91C
    ::Il2CppString* get_version();
    // System.Void set_version(System.String value)
    // Offset: 0xB6E924
    void set_version(::Il2CppString* value);
    // public UnityEngine.Font get_sourceFontFile()
    // Offset: 0xB6E92C
    UnityEngine::Font* get_sourceFontFile();
    // System.Void set_sourceFontFile(UnityEngine.Font value)
    // Offset: 0xB6E934
    void set_sourceFontFile(UnityEngine::Font* value);
    // public TMPro.AtlasPopulationMode get_atlasPopulationMode()
    // Offset: 0xB6E93C
    TMPro::AtlasPopulationMode get_atlasPopulationMode();
    // public System.Void set_atlasPopulationMode(TMPro.AtlasPopulationMode value)
    // Offset: 0xB6E944
    void set_atlasPopulationMode(TMPro::AtlasPopulationMode value);
    // public UnityEngine.TextCore.FaceInfo get_faceInfo()
    // Offset: 0xB6E94C
    UnityEngine::TextCore::FaceInfo get_faceInfo();
    // System.Void set_faceInfo(UnityEngine.TextCore.FaceInfo value)
    // Offset: 0xB6E95C
    void set_faceInfo(UnityEngine::TextCore::FaceInfo value);
    // public System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph> get_glyphTable()
    // Offset: 0xB6E98C
    System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph*>* get_glyphTable();
    // System.Void set_glyphTable(System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph> value)
    // Offset: 0xB6E994
    void set_glyphTable(System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph*>* value);
    // public System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.Glyph> get_glyphLookupTable()
    // Offset: 0xB6E99C
    System::Collections::Generic::Dictionary_2<uint, UnityEngine::TextCore::Glyph*>* get_glyphLookupTable();
    // public System.Collections.Generic.List`1<TMPro.TMP_Character> get_characterTable()
    // Offset: 0xB6F160
    System::Collections::Generic::List_1<TMPro::TMP_Character*>* get_characterTable();
    // System.Void set_characterTable(System.Collections.Generic.List`1<TMPro.TMP_Character> value)
    // Offset: 0xB6F168
    void set_characterTable(System::Collections::Generic::List_1<TMPro::TMP_Character*>* value);
    // public System.Collections.Generic.Dictionary`2<System.UInt32,TMPro.TMP_Character> get_characterLookupTable()
    // Offset: 0xB6F170
    System::Collections::Generic::Dictionary_2<uint, TMPro::TMP_Character*>* get_characterLookupTable();
    // public UnityEngine.Texture2D get_atlasTexture()
    // Offset: 0xB6F1A0
    UnityEngine::Texture2D* get_atlasTexture();
    // public UnityEngine.Texture2D[] get_atlasTextures()
    // Offset: 0xB6F258
    ::Array<UnityEngine::Texture2D*>* get_atlasTextures();
    // public System.Void set_atlasTextures(UnityEngine.Texture2D[] value)
    // Offset: 0xB6F260
    void set_atlasTextures(::Array<UnityEngine::Texture2D*>* value);
    // System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect> get_usedGlyphRects()
    // Offset: 0xB6F268
    System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect>* get_usedGlyphRects();
    // System.Void set_usedGlyphRects(System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect> value)
    // Offset: 0xB6F270
    void set_usedGlyphRects(System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect>* value);
    // System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect> get_freeGlyphRects()
    // Offset: 0xB6F278
    System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect>* get_freeGlyphRects();
    // System.Void set_freeGlyphRects(System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect> value)
    // Offset: 0xB6F280
    void set_freeGlyphRects(System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect>* value);
    // public TMPro.FaceInfo_Legacy get_fontInfo()
    // Offset: 0xB6F288
    TMPro::FaceInfo_Legacy* get_fontInfo();
    // public System.Int32 get_atlasWidth()
    // Offset: 0xB6F290
    int get_atlasWidth();
    // System.Void set_atlasWidth(System.Int32 value)
    // Offset: 0xB6F298
    void set_atlasWidth(int value);
    // public System.Int32 get_atlasHeight()
    // Offset: 0xB6F2A0
    int get_atlasHeight();
    // System.Void set_atlasHeight(System.Int32 value)
    // Offset: 0xB6F2A8
    void set_atlasHeight(int value);
    // public System.Int32 get_atlasPadding()
    // Offset: 0xB6F2B0
    int get_atlasPadding();
    // System.Void set_atlasPadding(System.Int32 value)
    // Offset: 0xB6F2B8
    void set_atlasPadding(int value);
    // public UnityEngine.TextCore.LowLevel.GlyphRenderMode get_atlasRenderMode()
    // Offset: 0xB6F2C0
    UnityEngine::TextCore::LowLevel::GlyphRenderMode get_atlasRenderMode();
    // System.Void set_atlasRenderMode(UnityEngine.TextCore.LowLevel.GlyphRenderMode value)
    // Offset: 0xB6F2C8
    void set_atlasRenderMode(UnityEngine::TextCore::LowLevel::GlyphRenderMode value);
    // public TMPro.TMP_FontFeatureTable get_fontFeatureTable()
    // Offset: 0xB6F2D0
    TMPro::TMP_FontFeatureTable* get_fontFeatureTable();
    // System.Void set_fontFeatureTable(TMPro.TMP_FontFeatureTable value)
    // Offset: 0xB6F2D8
    void set_fontFeatureTable(TMPro::TMP_FontFeatureTable* value);
    // public System.Collections.Generic.List`1<TMPro.TMP_FontAsset> get_fallbackFontAssetTable()
    // Offset: 0xB6F2E8
    System::Collections::Generic::List_1<TMPro::TMP_FontAsset*>* get_fallbackFontAssetTable();
    // public System.Void set_fallbackFontAssetTable(System.Collections.Generic.List`1<TMPro.TMP_FontAsset> value)
    // Offset: 0xB6F2F0
    void set_fallbackFontAssetTable(System::Collections::Generic::List_1<TMPro::TMP_FontAsset*>* value);
    // public TMPro.FontAssetCreationSettings get_creationSettings()
    // Offset: 0xB6F300
    TMPro::FontAssetCreationSettings get_creationSettings();
    // public System.Void set_creationSettings(TMPro.FontAssetCreationSettings value)
    // Offset: 0xB6F310
    void set_creationSettings(TMPro::FontAssetCreationSettings value);
    // public TMPro.TMP_FontWeightPair[] get_fontWeightTable()
    // Offset: 0xB6F340
    ::Array<TMPro::TMP_FontWeightPair>* get_fontWeightTable();
    // System.Void set_fontWeightTable(TMPro.TMP_FontWeightPair[] value)
    // Offset: 0xB6F348
    void set_fontWeightTable(::Array<TMPro::TMP_FontWeightPair>* value);
    // static public TMPro.TMP_FontAsset CreateFontAsset(UnityEngine.Font font)
    // Offset: 0xB6F358
    static TMPro::TMP_FontAsset* CreateFontAsset(UnityEngine::Font* font);
    // static public TMPro.TMP_FontAsset CreateFontAsset(UnityEngine.Font font, System.Int32 samplingPointSize, System.Int32 atlasPadding, UnityEngine.TextCore.LowLevel.GlyphRenderMode renderMode, System.Int32 atlasWidth, System.Int32 atlasHeight, TMPro.AtlasPopulationMode atlasPopulationMode)
    // Offset: 0xB6F3D4
    static TMPro::TMP_FontAsset* CreateFontAsset(UnityEngine::Font* font, int samplingPointSize, int atlasPadding, UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int atlasWidth, int atlasHeight, TMPro::AtlasPopulationMode atlasPopulationMode);
    // private System.Void Awake()
    // Offset: 0xB6F810
    void Awake();
    // System.Void InitializeDictionaryLookupTables()
    // Offset: 0xB7028C
    void InitializeDictionaryLookupTables();
    // public System.Void ReadFontAssetDefinition()
    // Offset: 0xB6E9CC
    void ReadFontAssetDefinition();
    // System.Void SortCharacterTable()
    // Offset: 0xB70924
    void SortCharacterTable();
    // System.Void SortGlyphTable()
    // Offset: 0xB70A68
    void SortGlyphTable();
    // System.Void SortGlyphAndCharacterTables()
    // Offset: 0xB70BAC
    void SortGlyphAndCharacterTables();
    // public System.Boolean HasCharacter(System.Int32 character)
    // Offset: 0xB70BD0
    bool HasCharacter(int character);
    // public System.Boolean HasCharacter(System.Char character)
    // Offset: 0xB70C44
    bool HasCharacter(::Il2CppChar character);
    // public System.Boolean HasCharacter(System.Char character, System.Boolean searchFallbacks)
    // Offset: 0xB70CB8
    bool HasCharacter(::Il2CppChar character, bool searchFallbacks);
    // private System.Boolean HasCharacter_Internal(System.Char character, System.Boolean searchFallbacks)
    // Offset: 0xB716B8
    bool HasCharacter_Internal(::Il2CppChar character, bool searchFallbacks);
    // public System.Boolean HasCharacters(System.String text, System.Collections.Generic.List`1<System.Char> missingCharacters)
    // Offset: 0xB71820
    bool HasCharacters(::Il2CppString* text, System::Collections::Generic::List_1<::Il2CppChar>*& missingCharacters);
    // public System.Boolean HasCharacters(System.String text)
    // Offset: 0xB71974
    bool HasCharacters(::Il2CppString* text);
    // static public System.String GetCharacters(TMPro.TMP_FontAsset fontAsset)
    // Offset: 0xB71A38
    static ::Il2CppString* GetCharacters(TMPro::TMP_FontAsset* fontAsset);
    // static public System.Int32[] GetCharactersArray(TMPro.TMP_FontAsset fontAsset)
    // Offset: 0xB71B18
    static ::Array<int>* GetCharactersArray(TMPro::TMP_FontAsset* fontAsset);
    // public System.Boolean TryAddCharacters(System.UInt32[] unicodes)
    // Offset: 0xB71C00
    bool TryAddCharacters(::Array<uint>* unicodes);
    // public System.Boolean TryAddCharacters(System.UInt32[] unicodes, System.UInt32[] missingUnicodes)
    // Offset: 0xB71C28
    bool TryAddCharacters(::Array<uint>* unicodes, ::Array<uint>*& missingUnicodes);
    // public System.Boolean TryAddCharacters(System.String characters)
    // Offset: 0xB7239C
    bool TryAddCharacters(::Il2CppString* characters);
    // public System.Boolean TryAddCharacters(System.String characters, System.String missingCharacters)
    // Offset: 0xB723C4
    bool TryAddCharacters(::Il2CppString* characters, ::Il2CppString*& missingCharacters);
    // System.Boolean TryAddCharacter_Internal(System.UInt32 unicode)
    // Offset: 0xB72A50
    bool TryAddCharacter_Internal(uint unicode);
    // TMPro.TMP_Character AddCharacter_Internal(System.UInt32 unicode, UnityEngine.TextCore.Glyph glyph)
    // Offset: 0xB72D68
    TMPro::TMP_Character* AddCharacter_Internal(uint unicode, UnityEngine::TextCore::Glyph* glyph);
    // System.Boolean TryAddCharacterInternal(System.UInt32 unicode, TMPro.TMP_Character character)
    // Offset: 0xB71088
    bool TryAddCharacterInternal(uint unicode, TMPro::TMP_Character*& character);
    // System.UInt32 GetGlyphIndex(System.UInt32 unicode)
    // Offset: 0xB73758
    uint GetGlyphIndex(uint unicode);
    // System.Void UpdateAtlasTexture()
    // Offset: 0xB73080
    void UpdateAtlasTexture();
    // System.Void UpdateGlyphAdjustmentRecords(System.UInt32 unicode, System.UInt32 glyphIndex)
    // Offset: 0xB73340
    void UpdateGlyphAdjustmentRecords(uint unicode, uint glyphIndex);
    // public System.Void ClearFontAssetData(System.Boolean setAtlasSizeToZero)
    // Offset: 0xB7398C
    void ClearFontAssetData(bool setAtlasSizeToZero);
    // private System.Void UpgradeFontAsset()
    // Offset: 0xB6F8A8
    void UpgradeFontAsset();
    // private System.Void UpgradeGlyphAdjustmentTableToFontFeatureTable()
    // Offset: 0xB70680
    void UpgradeGlyphAdjustmentTableToFontFeatureTable();
    // public System.Void .ctor()
    // Offset: 0xB73F60
    // Implemented from: TMPro.TMP_Asset
    // Base method: System.Void TMP_Asset::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TMP_FontAsset* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0xB7416C
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // TMPro.TMP_FontAsset
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_FontAsset*, "TMPro", "TMP_FontAsset");
#pragma pack(pop)