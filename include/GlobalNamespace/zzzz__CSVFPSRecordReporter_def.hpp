#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
namespace GlobalNamespace {
struct GlobalNamespace__FPSRecorder__FPSRecord;
}
// Forward declare root types
namespace GlobalNamespace {
class CSVFPSRecordReporter;
}
namespace GlobalNamespace {
struct GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup;
}
// Type: ::FPSReportSetup
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5935))
// CS Name: CSVFPSRecordReporter::FPSReportSetup
struct CORDL_TYPE GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_period", ty: "float_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup(float_t _period) noexcept;


                    constexpr GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup(GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup const&) = default;
                    constexpr GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup(GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup&&) = default;
                    constexpr GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup& operator=(GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup& operator=(GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get__period, put=__set__period))  _period;

constexpr void __set__period(float_t value) ;

constexpr float_t __get__period() const;


// Properties

 float_t __declspec(property(get=get_period))  period;


// Methods

/// @brief Method get_period addr 0x21cb5b0 size 0x8 virtual false final false
 float_t get_period() ;

/// @brief Method .ctor addr 0x21cb5b8 size 0x8 virtual false final false
 void _ctor(float_t period) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CSVFPSRecordReporter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5936))
// CS Name: CSVFPSRecordReporter
class CORDL_TYPE CSVFPSRecordReporter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using FPSReportSetup = GlobalNamespace::GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CSVFPSRecordReporter() = default;

// Ctor Parameters [CppParam { name: "", ty: "CSVFPSRecordReporter", modifiers: " const&", def_value: None }]
constexpr CSVFPSRecordReporter(CSVFPSRecordReporter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CSVFPSRecordReporter", modifiers: "&&", def_value: None }]
constexpr CSVFPSRecordReporter(CSVFPSRecordReporter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CSVFPSRecordReporter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CSVFPSRecordReporter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CSVFPSRecordReporter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CSVFPSRecordReporter& operator=(CSVFPSRecordReporter&& o) noexcept = default;
  constexpr CSVFPSRecordReporter& operator=(CSVFPSRecordReporter const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__period, put=__set__period))  _period;

constexpr void __set__period(float_t value) ;

constexpr float_t __get__period() const;


// Methods

// Ctor Parameters [CppParam { name: "reportSetup", ty: "GlobalNamespace::GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup", modifiers: "", def_value: None }]
explicit CSVFPSRecordReporter(GlobalNamespace::GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup reportSetup) ;

/// @brief Method .ctor addr 0x21cabc8 size 0x28 virtual false final false
 void _ctor(GlobalNamespace::GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup reportSetup) ;

/// @brief Method GenerateReport addr 0x21cabf0 size 0x9b8 virtual false final false
 void GenerateReport(GlobalNamespace::GlobalNamespace__FPSRecorder__FPSRecord record, ::StringW recordOutputPathAndName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::CSVFPSRecordReporter);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CSVFPSRecordReporter, "", "CSVFPSRecordReporter");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup, "", "CSVFPSRecordReporter/FPSReportSetup");
