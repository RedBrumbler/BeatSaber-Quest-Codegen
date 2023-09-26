#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class MainCamera;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__GraphyController___Start_d__5;
}
namespace GlobalNamespace {
class GraphyController;
}
namespace GlobalNamespace {
struct GlobalNamespace__GraphyController__InitData;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5941))
// CS Name: GraphyController::InitData
struct CORDL_TYPE GlobalNamespace__GraphyController__InitData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_enableFPSModule", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_enableMemoryModule", ty: "bool", modifiers: "", def_value: None }]
constexpr GlobalNamespace__GraphyController__InitData(bool _enableFPSModule, bool _enableMemoryModule) noexcept;


                    constexpr GlobalNamespace__GraphyController__InitData(GlobalNamespace__GraphyController__InitData const&) = default;
                    constexpr GlobalNamespace__GraphyController__InitData(GlobalNamespace__GraphyController__InitData&&) = default;
                    constexpr GlobalNamespace__GraphyController__InitData& operator=(GlobalNamespace__GraphyController__InitData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__GraphyController__InitData& operator=(GlobalNamespace__GraphyController__InitData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x2};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GraphyController__InitData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get__enableFPSModule, put=__set__enableFPSModule))  _enableFPSModule;

constexpr void __set__enableFPSModule(bool value) ;

constexpr bool __get__enableFPSModule() const;

 bool __declspec(property(get=__get__enableMemoryModule, put=__set__enableMemoryModule))  _enableMemoryModule;

constexpr void __set__enableMemoryModule(bool value) ;

constexpr bool __get__enableMemoryModule() const;


// Properties

 bool __declspec(property(get=get_enableFPSModule))  enableFPSModule;

 bool __declspec(property(get=get_enableMemoryModule))  enableMemoryModule;


// Methods

/// @brief Method get_enableFPSModule addr 0x21cbf88 size 0x8 virtual false final false
 bool get_enableFPSModule() ;

/// @brief Method get_enableMemoryModule addr 0x21cbf90 size 0x8 virtual false final false
 bool get_enableMemoryModule() ;

/// @brief Method .ctor addr 0x21cabac size 0x14 virtual false final false
 void _ctor(bool enableFPSModule, bool enableMemoryModule) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<Start>d__5
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5942))
// CS Name: GraphyController::<Start>d__5
class CORDL_TYPE GlobalNamespace__GraphyController___Start_d__5 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__GraphyController___Start_d__5() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GraphyController___Start_d__5", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GraphyController___Start_d__5(GlobalNamespace__GraphyController___Start_d__5 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GraphyController___Start_d__5", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GraphyController___Start_d__5(GlobalNamespace__GraphyController___Start_d__5&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GraphyController___Start_d__5(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__GraphyController___Start_d__5& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GraphyController___Start_d__5& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GraphyController___Start_d__5& operator=(GlobalNamespace__GraphyController___Start_d__5&& o) noexcept = default;
  constexpr GlobalNamespace__GraphyController___Start_d__5& operator=(GlobalNamespace__GraphyController___Start_d__5 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::GraphyController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::GraphyController value) ;

constexpr GlobalNamespace::GraphyController __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__GraphyController___Start_d__5(int32_t __1__state) ;

/// @brief Method .ctor addr 0x21cbf58 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x21cbf98 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x21cbf9c size 0xf8 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x21cc094 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x21cc09c size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x21cc0dc size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GraphyController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5943))
// CS Name: GraphyController
class CORDL_TYPE GraphyController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__5 = GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5;

using InitData = GlobalNamespace::GlobalNamespace__GraphyController__InitData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GraphyController() = default;

// Ctor Parameters [CppParam { name: "", ty: "GraphyController", modifiers: " const&", def_value: None }]
constexpr GraphyController(GraphyController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GraphyController", modifiers: "&&", def_value: None }]
constexpr GraphyController(GraphyController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GraphyController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr GraphyController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GraphyController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GraphyController& operator=(GraphyController&& o) noexcept = default;
  constexpr GraphyController& operator=(GraphyController const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__enableFPSModule, put=__set__enableFPSModule))  _enableFPSModule;

constexpr void __set__enableFPSModule(bool value) ;

constexpr bool __get__enableFPSModule() const;

 bool __declspec(property(get=__get__enableMemoryModule, put=__set__enableMemoryModule))  _enableMemoryModule;

constexpr void __set__enableMemoryModule(bool value) ;

constexpr bool __get__enableMemoryModule() const;

 GlobalNamespace::MainCamera __declspec(property(get=__get__mainCamera, put=__set__mainCamera))  _mainCamera;

constexpr void __set__mainCamera(GlobalNamespace::MainCamera value) ;

constexpr GlobalNamespace::MainCamera __get__mainCamera() const;


// Methods

/// @brief Method Inject addr 0x21cbecc size 0x24 virtual false final false
 void Inject(GlobalNamespace::GlobalNamespace__GraphyController__InitData initData, GlobalNamespace::MainCamera mainCamera) ;

/// @brief Method Start addr 0x21cbef0 size 0x68 virtual false final false
 System::Collections::IEnumerator Start() ;

// Ctor Parameters []
explicit GraphyController() ;

/// @brief Method .ctor addr 0x21cbf80 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GraphyController___Start_d__5, "", "GraphyController/<Start>d__5");
NEED_NO_BOX(GlobalNamespace::GraphyController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GraphyController, "", "GraphyController");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GraphyController__InitData, "", "GraphyController/InitData");
