// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine.TextCore.LowLevel
namespace UnityEngine::TextCore::LowLevel {
  // Autogenerated type: UnityEngine.TextCore.LowLevel.GlyphValueRecord
  struct GlyphValueRecord : public System::ValueType {
    public:
    // private System.Single m_XPlacement
    // Offset: 0x0
    float m_XPlacement;
    // private System.Single m_YPlacement
    // Offset: 0x4
    float m_YPlacement;
    // private System.Single m_XAdvance
    // Offset: 0x8
    float m_XAdvance;
    // private System.Single m_YAdvance
    // Offset: 0xC
    float m_YAdvance;
    // Creating value type constructor for type: GlyphValueRecord
    GlyphValueRecord(float m_XPlacement_ = {}, float m_YPlacement_ = {}, float m_XAdvance_ = {}, float m_YAdvance_ = {}) : m_XPlacement{m_XPlacement_}, m_YPlacement{m_YPlacement_}, m_XAdvance{m_XAdvance_}, m_YAdvance{m_YAdvance_} {}
    // public System.Single get_xPlacement()
    // Offset: 0xA5AECC
    float get_xPlacement();
    // public System.Single get_yPlacement()
    // Offset: 0xA5AED4
    float get_yPlacement();
    // public System.Single get_xAdvance()
    // Offset: 0xA5AEDC
    float get_xAdvance();
    // public System.Single get_yAdvance()
    // Offset: 0xA5AEE4
    float get_yAdvance();
  }; // UnityEngine.TextCore.LowLevel.GlyphValueRecord
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::LowLevel::GlyphValueRecord, "UnityEngine.TextCore.LowLevel", "GlyphValueRecord");
#pragma pack(pop)