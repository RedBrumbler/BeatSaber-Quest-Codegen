// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request
  class Request;
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: ProductList
  class ProductList;
  // Forward declaring type: PurchaseList
  class PurchaseList;
  // Forward declaring type: Purchase
  class Purchase;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.IAP
  class IAP : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: IAP
    IAP() noexcept {}
    // static public Oculus.Platform.Request ConsumePurchase(System.String sku)
    // Offset: 0x14C43E0
    static Oculus::Platform::Request* ConsumePurchase(::Il2CppString* sku);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.ProductList> GetProductsBySKU(System.String[] skus)
    // Offset: 0x14C44F4
    static Oculus::Platform::Request_1<Oculus::Platform::Models::ProductList*>* GetProductsBySKU(::Array<::Il2CppString*>* skus);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.PurchaseList> GetViewerPurchases()
    // Offset: 0x14C4624
    static Oculus::Platform::Request_1<Oculus::Platform::Models::PurchaseList*>* GetViewerPurchases();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.PurchaseList> GetViewerPurchasesDurableCache()
    // Offset: 0x14C4730
    static Oculus::Platform::Request_1<Oculus::Platform::Models::PurchaseList*>* GetViewerPurchasesDurableCache();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.Purchase> LaunchCheckoutFlow(System.String sku)
    // Offset: 0x14C483C
    static Oculus::Platform::Request_1<Oculus::Platform::Models::Purchase*>* LaunchCheckoutFlow(::Il2CppString* sku);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.ProductList> GetNextProductListPage(Oculus.Platform.Models.ProductList list)
    // Offset: 0x14C49A0
    static Oculus::Platform::Request_1<Oculus::Platform::Models::ProductList*>* GetNextProductListPage(Oculus::Platform::Models::ProductList* list);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.PurchaseList> GetNextPurchaseListPage(Oculus.Platform.Models.PurchaseList list)
    // Offset: 0x14C4B1C
    static Oculus::Platform::Request_1<Oculus::Platform::Models::PurchaseList*>* GetNextPurchaseListPage(Oculus::Platform::Models::PurchaseList* list);
  }; // Oculus.Platform.IAP
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::IAP*, "Oculus.Platform", "IAP");
// Writing MetadataGetter for method: Oculus::Platform::IAP::ConsumePurchase
// Il2CppName: ConsumePurchase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request* (*)(::Il2CppString*)>(&Oculus::Platform::IAP::ConsumePurchase)> {
  const MethodInfo* get() {
    static auto* sku = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::IAP*), "ConsumePurchase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sku});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::IAP::GetProductsBySKU
// Il2CppName: GetProductsBySKU
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::ProductList*>* (*)(::Array<::Il2CppString*>*)>(&Oculus::Platform::IAP::GetProductsBySKU)> {
  const MethodInfo* get() {
    static auto* skus = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::IAP*), "GetProductsBySKU", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{skus});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::IAP::GetViewerPurchases
// Il2CppName: GetViewerPurchases
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::PurchaseList*>* (*)()>(&Oculus::Platform::IAP::GetViewerPurchases)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::IAP*), "GetViewerPurchases", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::IAP::GetViewerPurchasesDurableCache
// Il2CppName: GetViewerPurchasesDurableCache
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::PurchaseList*>* (*)()>(&Oculus::Platform::IAP::GetViewerPurchasesDurableCache)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::IAP*), "GetViewerPurchasesDurableCache", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::IAP::LaunchCheckoutFlow
// Il2CppName: LaunchCheckoutFlow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::Purchase*>* (*)(::Il2CppString*)>(&Oculus::Platform::IAP::LaunchCheckoutFlow)> {
  const MethodInfo* get() {
    static auto* sku = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::IAP*), "LaunchCheckoutFlow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sku});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::IAP::GetNextProductListPage
// Il2CppName: GetNextProductListPage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::ProductList*>* (*)(Oculus::Platform::Models::ProductList*)>(&Oculus::Platform::IAP::GetNextProductListPage)> {
  const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "ProductList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::IAP*), "GetNextProductListPage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::IAP::GetNextPurchaseListPage
// Il2CppName: GetNextPurchaseListPage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::PurchaseList*>* (*)(Oculus::Platform::Models::PurchaseList*)>(&Oculus::Platform::IAP::GetNextPurchaseListPage)> {
  const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "PurchaseList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::IAP*), "GetNextPurchaseListPage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list});
  }
};
