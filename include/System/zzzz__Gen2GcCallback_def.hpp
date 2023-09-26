#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/ConstrainedExecution/zzzz__CriticalFinalizerObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Runtime::InteropServices {
struct GCHandle;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace System {
class Gen2GcCallback;
}
// Type: System::Gen2GcCallback
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3347))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2384))
// CS Name: System.Gen2GcCallback
class CORDL_TYPE Gen2GcCallback : public System::Runtime::ConstrainedExecution::CriticalFinalizerObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Gen2GcCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "Gen2GcCallback", modifiers: " const&", def_value: None }]
constexpr Gen2GcCallback(Gen2GcCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Gen2GcCallback", modifiers: "&&", def_value: None }]
constexpr Gen2GcCallback(Gen2GcCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Gen2GcCallback(void* ptr) noexcept : System::Runtime::ConstrainedExecution::CriticalFinalizerObject(ptr) {
}


  constexpr Gen2GcCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Gen2GcCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Gen2GcCallback& operator=(Gen2GcCallback&& o) noexcept = default;
  constexpr Gen2GcCallback& operator=(Gen2GcCallback const& o) noexcept = default;
                


// Fields

 System::Func_2<::bs_hook::Il2CppWrapperType,bool> __declspec(property(get=__get__callback, put=__set__callback))  _callback;

constexpr void __set__callback(System::Func_2<::bs_hook::Il2CppWrapperType,bool> value) ;

constexpr System::Func_2<::bs_hook::Il2CppWrapperType,bool> __get__callback() const;

 System::Runtime::InteropServices::GCHandle __declspec(property(get=__get__weakTargetObj, put=__set__weakTargetObj))  _weakTargetObj;

constexpr void __set__weakTargetObj(System::Runtime::InteropServices::GCHandle value) ;

constexpr System::Runtime::InteropServices::GCHandle __get__weakTargetObj() const;


// Methods

// Ctor Parameters []
explicit Gen2GcCallback() ;

/// @brief Method .ctor addr 0x245c2c4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Register addr 0x245c2cc size 0x80 virtual false final false
static void Register(System::Func_2<::bs_hook::Il2CppWrapperType,bool> callback, ::bs_hook::Il2CppWrapperType targetObj) ;

/// @brief Method Setup addr 0x245c34c size 0x28 virtual false final false
 void Setup(System::Func_2<::bs_hook::Il2CppWrapperType,bool> callback, ::bs_hook::Il2CppWrapperType targetObj) ;

/// @brief Method Finalize addr 0x245c374 size 0x1ac virtual true final false
 void Finalize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::Gen2GcCallback);
DEFINE_IL2CPP_ARG_TYPE(System::Gen2GcCallback, "System", "Gen2GcCallback");
