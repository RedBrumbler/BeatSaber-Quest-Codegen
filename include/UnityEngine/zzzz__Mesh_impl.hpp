#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/Rendering/zzzz__VertexAttribute_def.hpp"
#include "UnityEngine/Rendering/zzzz__VertexAttributeDescriptor_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__CombineInstance_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/Rendering/zzzz__IndexFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__MeshUpdateFlags_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "UnityEngine/zzzz__BoneWeight_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MeshTopology_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__SubMeshDescriptor_def.hpp"
#include "UnityEngine/Rendering/zzzz__VertexAttributeFormat_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__BoneWeight1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: UnityEngine::UnityEngine__Mesh__MeshDataArray.get_Length
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UnityEngine__Mesh__MeshDataArray::*)()>(&UnityEngine::UnityEngine__Mesh__MeshDataArray::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b69208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UnityEngine__Mesh__MeshDataArray>::get(),
                            "get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UnityEngine__Mesh__MeshDataArray.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UnityEngine__Mesh__MeshDataArray::*)()>(&UnityEngine::UnityEngine__Mesh__MeshDataArray::Dispose)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2b69210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UnityEngine__Mesh__MeshDataArray>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UnityEngine__Mesh__MeshDataArray.ApplyToMeshAndDispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UnityEngine__Mesh__MeshDataArray::*)(UnityEngine::Mesh, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::UnityEngine__Mesh__MeshDataArray::ApplyToMeshAndDispose)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2b65b48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UnityEngine__Mesh__MeshDataArray>::get(),
                            "ApplyToMeshAndDispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Mesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UnityEngine__Mesh__MeshDataArray.ApplyToMeshesAndDispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UnityEngine__Mesh__MeshDataArray::*)(::ArrayW<UnityEngine::Mesh>, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::UnityEngine__Mesh__MeshDataArray::ApplyToMeshesAndDispose)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x2b65dcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UnityEngine__Mesh__MeshDataArray>::get(),
                            "ApplyToMeshesAndDispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Mesh>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UnityEngine__Mesh__MeshDataArray._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UnityEngine__Mesh__MeshDataArray::*)(UnityEngine::Mesh, bool)>(&UnityEngine::UnityEngine__Mesh__MeshDataArray::_ctor)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x2b65134;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UnityEngine__Mesh__MeshDataArray>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Mesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UnityEngine__Mesh__MeshDataArray._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UnityEngine__Mesh__MeshDataArray::*)(::ArrayW<UnityEngine::Mesh>, int32_t, bool)>(&UnityEngine::UnityEngine__Mesh__MeshDataArray::_ctor)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x2b65418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UnityEngine__Mesh__MeshDataArray>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Mesh>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UnityEngine__Mesh__MeshDataArray._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UnityEngine__Mesh__MeshDataArray::*)(int32_t)>(&UnityEngine::UnityEngine__Mesh__MeshDataArray::_ctor)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2b65858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UnityEngine__Mesh__MeshDataArray>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UnityEngine__Mesh__MeshDataArray.AcquireReadOnlyMeshData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Mesh, void*)>(&UnityEngine::UnityEngine__Mesh__MeshDataArray::AcquireReadOnlyMeshData)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b69394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UnityEngine__Mesh__MeshDataArray>::get(),
                            "AcquireReadOnlyMeshData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Mesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UnityEngine__Mesh__MeshDataArray.AcquireReadOnlyMeshDatas
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<UnityEngine::Mesh>, void*, int32_t)>(&UnityEngine::UnityEngine__Mesh__MeshDataArray::AcquireReadOnlyMeshDatas)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2b693d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UnityEngine__Mesh__MeshDataArray>::get(),
                            "AcquireReadOnlyMeshDatas",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Mesh>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UnityEngine__Mesh__MeshDataArray.ReleaseMeshDatas
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*, int32_t)>(&UnityEngine::UnityEngine__Mesh__MeshDataArray::ReleaseMeshDatas)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b692a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UnityEngine__Mesh__MeshDataArray>::get(),
                            "ReleaseMeshDatas",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UnityEngine__Mesh__MeshDataArray.CreateNewMeshDatas
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*, int32_t)>(&UnityEngine::UnityEngine__Mesh__MeshDataArray::CreateNewMeshDatas)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b6942c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UnityEngine__Mesh__MeshDataArray>::get(),
                            "CreateNewMeshDatas",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UnityEngine__Mesh__MeshDataArray.ApplyToMeshesImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<UnityEngine::Mesh>, void*, int32_t, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::UnityEngine__Mesh__MeshDataArray::ApplyToMeshesImpl)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2b69338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UnityEngine__Mesh__MeshDataArray>::get(),
                            "ApplyToMeshesImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Mesh>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UnityEngine__Mesh__MeshDataArray.ApplyToMeshImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Mesh, ::cordl_internals::intptr_t, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::UnityEngine__Mesh__MeshDataArray::ApplyToMeshImpl)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2b692e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UnityEngine__Mesh__MeshDataArray>::get(),
                            "ApplyToMeshImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Mesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  UnityEngine::UnityEngine__Mesh__MeshDataArray::operator System::IDisposable() const {
return System::IDisposable(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_Ptrs", ty: "void*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UnityEngine__Mesh__MeshDataArray::UnityEngine__Mesh__MeshDataArray(void* m_Ptrs, int32_t m_Length) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Ptrs = m_Ptrs;
this->m_Length = m_Length;
}
constexpr void UnityEngine::UnityEngine__Mesh__MeshDataArray::__set_m_Ptrs(void* value)  {
::cordl_internals::setInstanceField<void*, 0x0>(this->__instance, std::forward<void*>(value));
}
constexpr void* UnityEngine::UnityEngine__Mesh__MeshDataArray::__get_m_Ptrs() const {
return ::cordl_internals::getInstanceField<void*, 0x0>(this->__instance);
}
constexpr void UnityEngine::UnityEngine__Mesh__MeshDataArray::__set_m_Length(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UnityEngine__Mesh__MeshDataArray::__get_m_Length() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
 int32_t UnityEngine::UnityEngine__Mesh__MeshDataArray::get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UnityEngine__Mesh__MeshDataArray>::get(),
                            "get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::UnityEngine__Mesh__MeshDataArray::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UnityEngine__Mesh__MeshDataArray>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::UnityEngine__Mesh__MeshDataArray::ApplyToMeshAndDispose(UnityEngine::Mesh mesh, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UnityEngine__Mesh__MeshDataArray>::get(),
                            "ApplyToMeshAndDispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Mesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, mesh, flags);
}
 void UnityEngine::UnityEngine__Mesh__MeshDataArray::ApplyToMeshesAndDispose(::ArrayW<UnityEngine::Mesh> meshes, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UnityEngine__Mesh__MeshDataArray>::get(),
                            "ApplyToMeshesAndDispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Mesh>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, meshes, flags);
}
/// @param checkReadWrite: bool (default: true)
 void UnityEngine::UnityEngine__Mesh__MeshDataArray::_ctor(UnityEngine::Mesh mesh, bool checkReadWrite)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UnityEngine__Mesh__MeshDataArray>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Mesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, mesh, checkReadWrite);
}
/// @param checkReadWrite: bool (default: true)
 void UnityEngine::UnityEngine__Mesh__MeshDataArray::_ctor(::ArrayW<UnityEngine::Mesh> meshes, int32_t meshesCount, bool checkReadWrite)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UnityEngine__Mesh__MeshDataArray>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Mesh>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, meshes, meshesCount, checkReadWrite);
}
 void UnityEngine::UnityEngine__Mesh__MeshDataArray::_ctor(int32_t meshesCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UnityEngine__Mesh__MeshDataArray>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, meshesCount);
}
 void UnityEngine::UnityEngine__Mesh__MeshDataArray::AcquireReadOnlyMeshData(UnityEngine::Mesh mesh, void* datas)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UnityEngine__Mesh__MeshDataArray>::get(),
                            "AcquireReadOnlyMeshData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Mesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mesh, datas);
}
 void UnityEngine::UnityEngine__Mesh__MeshDataArray::AcquireReadOnlyMeshDatas(::ArrayW<UnityEngine::Mesh> meshes, void* datas, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UnityEngine__Mesh__MeshDataArray>::get(),
                            "AcquireReadOnlyMeshDatas",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Mesh>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, meshes, datas, count);
}
 void UnityEngine::UnityEngine__Mesh__MeshDataArray::ReleaseMeshDatas(void* datas, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UnityEngine__Mesh__MeshDataArray>::get(),
                            "ReleaseMeshDatas",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, datas, count);
}
 void UnityEngine::UnityEngine__Mesh__MeshDataArray::CreateNewMeshDatas(void* datas, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UnityEngine__Mesh__MeshDataArray>::get(),
                            "CreateNewMeshDatas",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, datas, count);
}
 void UnityEngine::UnityEngine__Mesh__MeshDataArray::ApplyToMeshesImpl(::ArrayW<UnityEngine::Mesh> meshes, void* datas, int32_t count, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UnityEngine__Mesh__MeshDataArray>::get(),
                            "ApplyToMeshesImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Mesh>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, meshes, datas, count, flags);
}
 void UnityEngine::UnityEngine__Mesh__MeshDataArray::ApplyToMeshImpl(UnityEngine::Mesh mesh, ::cordl_internals::intptr_t data, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UnityEngine__Mesh__MeshDataArray>::get(),
                            "ApplyToMeshImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Mesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mesh, data, flags);
}
// Ctor Parameters [CppParam { name: "m_Ptr", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UnityEngine__Mesh__MeshData::UnityEngine__Mesh__MeshData(::cordl_internals::intptr_t m_Ptr) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Ptr = m_Ptr;
}
constexpr void UnityEngine::UnityEngine__Mesh__MeshData::__set_m_Ptr(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t UnityEngine::UnityEngine__Mesh__MeshData::__get_m_Ptr() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance);
}
//  Writing Method size for method: UnityEngine::Mesh.Internal_Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Mesh)>(&UnityEngine::Mesh::Internal_Create)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b60734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "Internal_Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Mesh>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2b60770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.FromInstanceID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Mesh (*)(int32_t)>(&UnityEngine::Mesh::FromInstanceID)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b607f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "FromInstanceID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.get_indexFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rendering::IndexFormat (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::get_indexFormat)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b6082c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_indexFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.set_indexFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(UnityEngine::Rendering::IndexFormat)>(&UnityEngine::Mesh::set_indexFormat)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b60868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_indexFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::IndexFormat>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetTotalIndexCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::GetTotalIndexCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b608ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetTotalIndexCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetIndexBufferParams
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, UnityEngine::Rendering::IndexFormat)>(&UnityEngine::Mesh::SetIndexBufferParams)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2b608e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetIndexBufferParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::IndexFormat>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.InternalSetIndexBufferData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::cordl_internals::intptr_t, int32_t, int32_t, int32_t, int32_t, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::InternalSetIndexBufferData)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2b6093c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "InternalSetIndexBufferData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.InternalSetIndexBufferDataFromArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Array, int32_t, int32_t, int32_t, int32_t, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::InternalSetIndexBufferDataFromArray)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2b609c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "InternalSetIndexBufferDataFromArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetVertexBufferParamsFromPtr
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, ::cordl_internals::intptr_t, int32_t)>(&UnityEngine::Mesh::SetVertexBufferParamsFromPtr)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2b60a44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetVertexBufferParamsFromPtr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetVertexBufferParamsFromArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, ::ArrayW<UnityEngine::Rendering::VertexAttributeDescriptor>)>(&UnityEngine::Mesh::SetVertexBufferParamsFromArray)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2b60aa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetVertexBufferParamsFromArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Rendering::VertexAttributeDescriptor>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.InternalSetVertexBufferData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, ::cordl_internals::intptr_t, int32_t, int32_t, int32_t, int32_t, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::InternalSetVertexBufferData)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2b60af4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "InternalSetVertexBufferData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.InternalSetVertexBufferDataFromArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, System::Array, int32_t, int32_t, int32_t, int32_t, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::InternalSetVertexBufferDataFromArray)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2b60b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "InternalSetVertexBufferDataFromArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetVertexAttributesAlloc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Array (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::GetVertexAttributesAlloc)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b60c0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetVertexAttributesAlloc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetVertexAttributesArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::Rendering::VertexAttributeDescriptor>)>(&UnityEngine::Mesh::GetVertexAttributesArray)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b60c48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetVertexAttributesArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Rendering::VertexAttributeDescriptor>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetVertexAttributesList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<UnityEngine::Rendering::VertexAttributeDescriptor>)>(&UnityEngine::Mesh::GetVertexAttributesList)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b60c8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetVertexAttributesList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Rendering::VertexAttributeDescriptor>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetVertexAttributeCountImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::GetVertexAttributeCountImpl)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b60cd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetVertexAttributeCountImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetVertexAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rendering::VertexAttributeDescriptor (UnityEngine::Mesh::*)(int32_t)>(&UnityEngine::Mesh::GetVertexAttribute)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2b60d0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetVertexAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetIndexStartImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (UnityEngine::Mesh::*)(int32_t)>(&UnityEngine::Mesh::GetIndexStartImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b60dbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetIndexStartImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetIndexCountImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (UnityEngine::Mesh::*)(int32_t)>(&UnityEngine::Mesh::GetIndexCountImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b60e00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetIndexCountImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetTrianglesCountImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (UnityEngine::Mesh::*)(int32_t)>(&UnityEngine::Mesh::GetTrianglesCountImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b60e44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetTrianglesCountImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetBaseVertexImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (UnityEngine::Mesh::*)(int32_t)>(&UnityEngine::Mesh::GetBaseVertexImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b60e88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetBaseVertexImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetTrianglesImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (UnityEngine::Mesh::*)(int32_t, bool)>(&UnityEngine::Mesh::GetTrianglesImpl)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2b60ecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetTrianglesImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetIndicesImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (UnityEngine::Mesh::*)(int32_t, bool)>(&UnityEngine::Mesh::GetIndicesImpl)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2b60f20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetIndicesImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetIndicesImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, UnityEngine::MeshTopology, UnityEngine::Rendering::IndexFormat, System::Array, int32_t, int32_t, bool, int32_t)>(&UnityEngine::Mesh::SetIndicesImpl)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2b60f74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetIndicesImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::IndexFormat>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetIndicesNativeArrayImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, UnityEngine::MeshTopology, UnityEngine::Rendering::IndexFormat, ::cordl_internals::intptr_t, int32_t, int32_t, bool, int32_t)>(&UnityEngine::Mesh::SetIndicesNativeArrayImpl)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2b61010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetIndicesNativeArrayImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::IndexFormat>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetTrianglesNonAllocImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(ByRef<::ArrayW<int32_t>>, int32_t, bool)>(&UnityEngine::Mesh::GetTrianglesNonAllocImpl)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2b610ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetTrianglesNonAllocImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetTrianglesNonAllocImpl16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(ByRef<::ArrayW<uint16_t>>, int32_t, bool)>(&UnityEngine::Mesh::GetTrianglesNonAllocImpl16)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2b61108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetTrianglesNonAllocImpl16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint16_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetIndicesNonAllocImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(ByRef<::ArrayW<int32_t>>, int32_t, bool)>(&UnityEngine::Mesh::GetIndicesNonAllocImpl)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2b61164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetIndicesNonAllocImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetIndicesNonAllocImpl16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(ByRef<::ArrayW<uint16_t>>, int32_t, bool)>(&UnityEngine::Mesh::GetIndicesNonAllocImpl16)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2b611c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetIndicesNonAllocImpl16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint16_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.PrintErrorCantAccessChannel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(UnityEngine::Rendering::VertexAttribute)>(&UnityEngine::Mesh::PrintErrorCantAccessChannel)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b6121c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "PrintErrorCantAccessChannel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttribute>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.HasVertexAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Mesh::*)(UnityEngine::Rendering::VertexAttribute)>(&UnityEngine::Mesh::HasVertexAttribute)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b61260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "HasVertexAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttribute>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetVertexAttributeDimension
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::Mesh::*)(UnityEngine::Rendering::VertexAttribute)>(&UnityEngine::Mesh::GetVertexAttributeDimension)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b612a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetVertexAttributeDimension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttribute>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetVertexAttributeFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rendering::VertexAttributeFormat (UnityEngine::Mesh::*)(UnityEngine::Rendering::VertexAttribute)>(&UnityEngine::Mesh::GetVertexAttributeFormat)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b612e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetVertexAttributeFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttribute>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetVertexAttributeStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::Mesh::*)(UnityEngine::Rendering::VertexAttribute)>(&UnityEngine::Mesh::GetVertexAttributeStream)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b6132c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetVertexAttributeStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttribute>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetVertexAttributeOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::Mesh::*)(UnityEngine::Rendering::VertexAttribute)>(&UnityEngine::Mesh::GetVertexAttributeOffset)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b61370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetVertexAttributeOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttribute>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetArrayForChannelImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(UnityEngine::Rendering::VertexAttribute, UnityEngine::Rendering::VertexAttributeFormat, int32_t, System::Array, int32_t, int32_t, int32_t, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::SetArrayForChannelImpl)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2b613b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetArrayForChannelImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttribute>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttributeFormat>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetNativeArrayForChannelImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(UnityEngine::Rendering::VertexAttribute, UnityEngine::Rendering::VertexAttributeFormat, int32_t, ::cordl_internals::intptr_t, int32_t, int32_t, int32_t, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::SetNativeArrayForChannelImpl)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2b61450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetNativeArrayForChannelImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttribute>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttributeFormat>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetAllocArrayFromChannelImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Array (UnityEngine::Mesh::*)(UnityEngine::Rendering::VertexAttribute, UnityEngine::Rendering::VertexAttributeFormat, int32_t)>(&UnityEngine::Mesh::GetAllocArrayFromChannelImpl)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2b614ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetAllocArrayFromChannelImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttribute>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttributeFormat>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetArrayFromChannelImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(UnityEngine::Rendering::VertexAttribute, UnityEngine::Rendering::VertexAttributeFormat, int32_t, System::Array)>(&UnityEngine::Mesh::GetArrayFromChannelImpl)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b61548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetArrayFromChannelImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttribute>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttributeFormat>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.get_vertexBufferCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::get_vertexBufferCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b615b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_vertexBufferCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetVertexBufferStride
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::Mesh::*)(int32_t)>(&UnityEngine::Mesh::GetVertexBufferStride)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b615f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetVertexBufferStride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetNativeVertexBufferPtr
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (UnityEngine::Mesh::*)(int32_t)>(&UnityEngine::Mesh::GetNativeVertexBufferPtr)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b61634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetNativeVertexBufferPtr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetNativeIndexBufferPtr
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::GetNativeIndexBufferPtr)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b61678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetNativeIndexBufferPtr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetVertexBufferImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GraphicsBuffer (UnityEngine::Mesh::*)(int32_t)>(&UnityEngine::Mesh::GetVertexBufferImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b616b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetVertexBufferImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetIndexBufferImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GraphicsBuffer (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::GetIndexBufferImpl)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b616f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetIndexBufferImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.get_vertexBufferTarget
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UnityEngine__GraphicsBuffer__Target (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::get_vertexBufferTarget)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b61734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_vertexBufferTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.set_vertexBufferTarget
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(UnityEngine::UnityEngine__GraphicsBuffer__Target)>(&UnityEngine::Mesh::set_vertexBufferTarget)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b61770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_vertexBufferTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UnityEngine__GraphicsBuffer__Target>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.get_indexBufferTarget
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UnityEngine__GraphicsBuffer__Target (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::get_indexBufferTarget)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b617b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_indexBufferTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.set_indexBufferTarget
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(UnityEngine::UnityEngine__GraphicsBuffer__Target)>(&UnityEngine::Mesh::set_indexBufferTarget)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b617f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_indexBufferTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UnityEngine__GraphicsBuffer__Target>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.get_blendShapeCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::get_blendShapeCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b61834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_blendShapeCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.ClearBlendShapes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::ClearBlendShapes)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b61870;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "ClearBlendShapes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetBlendShapeName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Mesh::*)(int32_t)>(&UnityEngine::Mesh::GetBlendShapeName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b618ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetBlendShapeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetBlendShapeIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::Mesh::*)(::StringW)>(&UnityEngine::Mesh::GetBlendShapeIndex)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b618f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetBlendShapeIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetBlendShapeFrameCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::Mesh::*)(int32_t)>(&UnityEngine::Mesh::GetBlendShapeFrameCount)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b61934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetBlendShapeFrameCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetBlendShapeFrameWeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::Mesh::*)(int32_t, int32_t)>(&UnityEngine::Mesh::GetBlendShapeFrameWeight)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2b61978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetBlendShapeFrameWeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetBlendShapeFrameVertices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, int32_t, ::ArrayW<UnityEngine::Vector3>, ::ArrayW<UnityEngine::Vector3>, ::ArrayW<UnityEngine::Vector3>)>(&UnityEngine::Mesh::GetBlendShapeFrameVertices)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2b619cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetBlendShapeFrameVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.AddBlendShapeFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::StringW, float_t, ::ArrayW<UnityEngine::Vector3>, ::ArrayW<UnityEngine::Vector3>, ::ArrayW<UnityEngine::Vector3>)>(&UnityEngine::Mesh::AddBlendShapeFrame)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2b61a40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "AddBlendShapeFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.HasBoneWeights
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::HasBoneWeights)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b61abc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "HasBoneWeights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetBoneWeightsImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::BoneWeight> (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::GetBoneWeightsImpl)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b61af8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetBoneWeightsImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetBoneWeightsImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::BoneWeight>)>(&UnityEngine::Mesh::SetBoneWeightsImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b61b34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetBoneWeightsImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::BoneWeight>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetBoneWeights
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(Unity::Collections::NativeArray_1<uint8_t>, Unity::Collections::NativeArray_1<UnityEngine::BoneWeight1>)>(&UnityEngine::Mesh::SetBoneWeights)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2b61b78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetBoneWeights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<UnityEngine::BoneWeight1>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.InternalSetBoneWeights
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::cordl_internals::intptr_t, int32_t, ::cordl_internals::intptr_t, int32_t)>(&UnityEngine::Mesh::InternalSetBoneWeights)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b61c60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "InternalSetBoneWeights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetAllBoneWeights
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Unity::Collections::NativeArray_1<UnityEngine::BoneWeight1> (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::GetAllBoneWeights)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2b61ccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetAllBoneWeights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetBonesPerVertex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Unity::Collections::NativeArray_1<uint8_t> (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::GetBonesPerVertex)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2b61df8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetBonesPerVertex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetAllBoneWeightsArraySize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::GetAllBoneWeightsArraySize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b61dbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetAllBoneWeightsArraySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetAllBoneWeightsArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::GetAllBoneWeightsArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b61d80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetAllBoneWeightsArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetBonesPerVertexArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::GetBonesPerVertexArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b61f18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetBonesPerVertexArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetBindposeCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::GetBindposeCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b61f54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetBindposeCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.get_bindposes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::Matrix4x4> (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::get_bindposes)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b61f90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_bindposes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.set_bindposes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::Matrix4x4>)>(&UnityEngine::Mesh::set_bindposes)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b61fcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_bindposes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Matrix4x4>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetBoneWeightsNonAllocImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(ByRef<::ArrayW<UnityEngine::BoneWeight>>)>(&UnityEngine::Mesh::GetBoneWeightsNonAllocImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b62010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetBoneWeightsNonAllocImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::BoneWeight>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetBindposesNonAllocImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(ByRef<::ArrayW<UnityEngine::Matrix4x4>>)>(&UnityEngine::Mesh::GetBindposesNonAllocImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b62054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetBindposesNonAllocImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::Matrix4x4>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.get_isReadable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::get_isReadable)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b62098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_isReadable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.get_canAccess
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::get_canAccess)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b620d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_canAccess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.get_vertexCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::get_vertexCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b61edc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_vertexCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.get_subMeshCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::get_subMeshCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b62110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_subMeshCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.set_subMeshCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t)>(&UnityEngine::Mesh::set_subMeshCount)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b6214c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_subMeshCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetSubMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, UnityEngine::Rendering::SubMeshDescriptor, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::SetSubMesh)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2b62190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetSubMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::SubMeshDescriptor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetSubMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rendering::SubMeshDescriptor (UnityEngine::Mesh::*)(int32_t)>(&UnityEngine::Mesh::GetSubMesh)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2b62248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetSubMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetAllSubMeshesAtOnceFromArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::Rendering::SubMeshDescriptor>, int32_t, int32_t, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::SetAllSubMeshesAtOnceFromArray)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b62318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetAllSubMeshesAtOnceFromArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Rendering::SubMeshDescriptor>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetAllSubMeshesAtOnceFromNativeArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::cordl_internals::intptr_t, int32_t, int32_t, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::SetAllSubMeshesAtOnceFromNativeArray)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b62384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetAllSubMeshesAtOnceFromNativeArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.get_bounds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Bounds (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::get_bounds)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2b623f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_bounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.set_bounds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(UnityEngine::Bounds)>(&UnityEngine::Mesh::set_bounds)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b6249c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_bounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Bounds>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.ClearImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(bool)>(&UnityEngine::Mesh::ClearImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b62524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "ClearImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.RecalculateBoundsImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::RecalculateBoundsImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b62568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "RecalculateBoundsImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.RecalculateNormalsImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::RecalculateNormalsImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b625ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "RecalculateNormalsImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.RecalculateTangentsImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::RecalculateTangentsImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b625f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "RecalculateTangentsImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.MarkDynamicImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::MarkDynamicImpl)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b62634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "MarkDynamicImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.MarkModified
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::MarkModified)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b62670;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "MarkModified",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.UploadMeshDataImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(bool)>(&UnityEngine::Mesh::UploadMeshDataImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b626ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "UploadMeshDataImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetTopologyImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::MeshTopology (UnityEngine::Mesh::*)(int32_t)>(&UnityEngine::Mesh::GetTopologyImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b626f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetTopologyImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.RecalculateUVDistributionMetricImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, float_t)>(&UnityEngine::Mesh::RecalculateUVDistributionMetricImpl)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2b62734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "RecalculateUVDistributionMetricImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.RecalculateUVDistributionMetricsImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(float_t)>(&UnityEngine::Mesh::RecalculateUVDistributionMetricsImpl)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2b62788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "RecalculateUVDistributionMetricsImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetUVDistributionMetric
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::Mesh::*)(int32_t)>(&UnityEngine::Mesh::GetUVDistributionMetric)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b627d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetUVDistributionMetric",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.CombineMeshesImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::CombineInstance>, bool, bool, bool)>(&UnityEngine::Mesh::CombineMeshesImpl)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b62818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "CombineMeshesImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::CombineInstance>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.OptimizeImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::OptimizeImpl)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b62884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "OptimizeImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.OptimizeIndexBuffersImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::OptimizeIndexBuffersImpl)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b628c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "OptimizeIndexBuffersImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.OptimizeReorderVertexBufferImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::OptimizeReorderVertexBufferImpl)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b628fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "OptimizeReorderVertexBufferImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetUVChannel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rendering::VertexAttribute (*)(int32_t)>(&UnityEngine::Mesh::GetUVChannel)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2b62938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetUVChannel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.DefaultDimensionForChannel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(UnityEngine::Rendering::VertexAttribute)>(&UnityEngine::Mesh::DefaultDimensionForChannel)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2b629b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "DefaultDimensionForChannel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttribute>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetSizedArrayForChannel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(UnityEngine::Rendering::VertexAttribute, UnityEngine::Rendering::VertexAttributeFormat, int32_t, System::Array, int32_t, int32_t, int32_t, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::SetSizedArrayForChannel)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x2b62a50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetSizedArrayForChannel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttribute>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttributeFormat>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetSizedNativeArrayForChannel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(UnityEngine::Rendering::VertexAttribute, UnityEngine::Rendering::VertexAttributeFormat, int32_t, ::cordl_internals::intptr_t, int32_t, int32_t, int32_t, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::SetSizedNativeArrayForChannel)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x2b62cf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetSizedNativeArrayForChannel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttribute>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttributeFormat>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.get_vertices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::Vector3> (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::get_vertices)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2b62f90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_vertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.set_vertices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::Vector3>)>(&UnityEngine::Mesh::set_vertices)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2b62fdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_vertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.get_normals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::Vector3> (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::get_normals)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2b6303c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_normals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.set_normals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::Vector3>)>(&UnityEngine::Mesh::set_normals)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2b63088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_normals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.get_tangents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::Vector4> (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::get_tangents)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2b630e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_tangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.set_tangents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::Vector4>)>(&UnityEngine::Mesh::set_tangents)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2b63134;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_tangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector4>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.get_uv
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::Vector2> (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::get_uv)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2b63194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_uv",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.set_uv
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::Vector2>)>(&UnityEngine::Mesh::set_uv)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2b631e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_uv",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector2>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.get_uv2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::Vector2> (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::get_uv2)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2b63240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_uv2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.set_uv2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::Vector2>)>(&UnityEngine::Mesh::set_uv2)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2b6328c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_uv2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector2>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.get_uv3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::Vector2> (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::get_uv3)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2b632ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_uv3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.set_uv3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::Vector2>)>(&UnityEngine::Mesh::set_uv3)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2b63338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_uv3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector2>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.get_uv4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::Vector2> (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::get_uv4)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2b63398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_uv4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.set_uv4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::Vector2>)>(&UnityEngine::Mesh::set_uv4)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2b633e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_uv4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector2>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.get_uv5
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::Vector2> (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::get_uv5)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2b63444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_uv5",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.set_uv5
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::Vector2>)>(&UnityEngine::Mesh::set_uv5)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2b63490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_uv5",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector2>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.get_uv6
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::Vector2> (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::get_uv6)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2b634f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_uv6",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.set_uv6
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::Vector2>)>(&UnityEngine::Mesh::set_uv6)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2b6353c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_uv6",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector2>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.get_uv7
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::Vector2> (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::get_uv7)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2b6359c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_uv7",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.set_uv7
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::Vector2>)>(&UnityEngine::Mesh::set_uv7)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2b635e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_uv7",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector2>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.get_uv8
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::Vector2> (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::get_uv8)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2b63648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_uv8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.set_uv8
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::Vector2>)>(&UnityEngine::Mesh::set_uv8)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2b63694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_uv8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector2>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.get_colors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::Color> (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::get_colors)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2b636f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_colors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.set_colors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::Color>)>(&UnityEngine::Mesh::set_colors)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2b63740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_colors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Color>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.get_colors32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::Color32> (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::get_colors32)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2b637a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_colors32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.set_colors32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::Color32>)>(&UnityEngine::Mesh::set_colors32)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2b637f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_colors32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Color32>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetVertices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<UnityEngine::Vector3>)>(&UnityEngine::Mesh::GetVertices)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2b6385c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetVertices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<UnityEngine::Vector3>)>(&UnityEngine::Mesh::SetVertices)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b6394c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetVertices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<UnityEngine::Vector3>, int32_t, int32_t)>(&UnityEngine::Mesh::SetVertices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b639b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetVertices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<UnityEngine::Vector3>, int32_t, int32_t, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::SetVertices)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2b639c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetVertices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::Vector3>)>(&UnityEngine::Mesh::SetVertices)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2b63a3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetVertices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::Vector3>, int32_t, int32_t)>(&UnityEngine::Mesh::SetVertices)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2b63aa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetVertices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::Vector3>, int32_t, int32_t, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::SetVertices)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b63b0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetNormals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<UnityEngine::Vector3>)>(&UnityEngine::Mesh::GetNormals)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2b63b78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetNormals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<UnityEngine::Vector3>)>(&UnityEngine::Mesh::SetNormals)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b63c68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetNormals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<UnityEngine::Vector3>, int32_t, int32_t)>(&UnityEngine::Mesh::SetNormals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b63cd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetNormals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<UnityEngine::Vector3>, int32_t, int32_t, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::SetNormals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2b63cdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetNormals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::Vector3>)>(&UnityEngine::Mesh::SetNormals)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2b63d58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetNormals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::Vector3>, int32_t, int32_t)>(&UnityEngine::Mesh::SetNormals)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2b63dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetNormals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::Vector3>, int32_t, int32_t, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::SetNormals)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b63e28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetTangents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<UnityEngine::Vector4>)>(&UnityEngine::Mesh::GetTangents)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2b63e94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetTangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector4>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetTangents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<UnityEngine::Vector4>)>(&UnityEngine::Mesh::SetTangents)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b63f84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetTangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector4>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetTangents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<UnityEngine::Vector4>, int32_t, int32_t)>(&UnityEngine::Mesh::SetTangents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b63ff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetTangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetTangents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<UnityEngine::Vector4>, int32_t, int32_t, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::SetTangents)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2b63ff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetTangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetTangents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::Vector4>)>(&UnityEngine::Mesh::SetTangents)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2b64074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetTangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector4>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetTangents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::Vector4>, int32_t, int32_t)>(&UnityEngine::Mesh::SetTangents)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2b640dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetTangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetTangents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::Vector4>, int32_t, int32_t, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::SetTangents)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b64144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetTangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetColors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<UnityEngine::Color>)>(&UnityEngine::Mesh::GetColors)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2b641b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Color>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetColors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<UnityEngine::Color>)>(&UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b642a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Color>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetColors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<UnityEngine::Color>, int32_t, int32_t)>(&UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b6430c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Color>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetColors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<UnityEngine::Color>, int32_t, int32_t, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2b64314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Color>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetColors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::Color>)>(&UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2b64390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Color>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetColors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::Color>, int32_t, int32_t)>(&UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2b643f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Color>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetColors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::Color>, int32_t, int32_t, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b64460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Color>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetColors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<UnityEngine::Color32>)>(&UnityEngine::Mesh::GetColors)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2b644cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Color32>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetColors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<UnityEngine::Color32>)>(&UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b645c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Color32>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetColors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<UnityEngine::Color32>, int32_t, int32_t)>(&UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b6462c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Color32>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetColors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<UnityEngine::Color32>, int32_t, int32_t, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2b64634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Color32>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetColors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::Color32>)>(&UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2b646c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Color32>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetColors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::Color32>, int32_t, int32_t)>(&UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2b64730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Color32>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetColors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::Color32>, int32_t, int32_t, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b64798;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Color32>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetUVs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, System::Collections::Generic::List_1<UnityEngine::Vector2>)>(&UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2b64804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector2>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetUVs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, System::Collections::Generic::List_1<UnityEngine::Vector3>)>(&UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2b64880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetUVs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, System::Collections::Generic::List_1<UnityEngine::Vector4>)>(&UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2b648fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector4>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetUVs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, System::Collections::Generic::List_1<UnityEngine::Vector2>, int32_t, int32_t)>(&UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b64878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetUVs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, System::Collections::Generic::List_1<UnityEngine::Vector2>, int32_t, int32_t, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2b64978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetUVs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, System::Collections::Generic::List_1<UnityEngine::Vector3>, int32_t, int32_t)>(&UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b648f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetUVs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, System::Collections::Generic::List_1<UnityEngine::Vector3>, int32_t, int32_t, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2b64a04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetUVs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, System::Collections::Generic::List_1<UnityEngine::Vector4>, int32_t, int32_t)>(&UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b64970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetUVs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, System::Collections::Generic::List_1<UnityEngine::Vector4>, int32_t, int32_t, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2b64a90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetUvsImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, int32_t, System::Array, int32_t, int32_t, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::SetUvsImpl)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2b64b1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetUvsImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetUVs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, ::ArrayW<UnityEngine::Vector2>)>(&UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2b64c28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector2>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetUVs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, ::ArrayW<UnityEngine::Vector3>)>(&UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2b64c88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetUVs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, ::ArrayW<UnityEngine::Vector4>)>(&UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2b64ce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector4>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetUVs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, ::ArrayW<UnityEngine::Vector2>, int32_t, int32_t)>(&UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2b64c70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetUVs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, ::ArrayW<UnityEngine::Vector2>, int32_t, int32_t, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2b64d48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetUVs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, ::ArrayW<UnityEngine::Vector3>, int32_t, int32_t)>(&UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2b64cd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetUVs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, ::ArrayW<UnityEngine::Vector3>, int32_t, int32_t, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2b64d60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetUVs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, ::ArrayW<UnityEngine::Vector4>, int32_t, int32_t)>(&UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2b64d30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetUVs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, ::ArrayW<UnityEngine::Vector4>, int32_t, int32_t, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2b64d78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetUVs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, System::Collections::Generic::List_1<UnityEngine::Vector2>)>(&UnityEngine::Mesh::GetUVs)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2b64d90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector2>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetUVs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, System::Collections::Generic::List_1<UnityEngine::Vector3>)>(&UnityEngine::Mesh::GetUVs)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2b64df4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetUVs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, System::Collections::Generic::List_1<UnityEngine::Vector4>)>(&UnityEngine::Mesh::GetUVs)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2b64e58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector4>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.get_vertexAttributeCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::get_vertexAttributeCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b64ebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_vertexAttributeCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetVertexAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::Rendering::VertexAttributeDescriptor> (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::GetVertexAttributes)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2b64ef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetVertexAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetVertexAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::Rendering::VertexAttributeDescriptor>)>(&UnityEngine::Mesh::GetVertexAttributes)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b64f84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetVertexAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Rendering::VertexAttributeDescriptor>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetVertexAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<UnityEngine::Rendering::VertexAttributeDescriptor>)>(&UnityEngine::Mesh::GetVertexAttributes)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b64fc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetVertexAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Rendering::VertexAttributeDescriptor>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetVertexBufferParams
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, ::ArrayW<UnityEngine::Rendering::VertexAttributeDescriptor>)>(&UnityEngine::Mesh::SetVertexBufferParams)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2b6500c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetVertexBufferParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Rendering::VertexAttributeDescriptor>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetVertexBufferParams
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, Unity::Collections::NativeArray_1<UnityEngine::Rendering::VertexAttributeDescriptor>)>(&UnityEngine::Mesh::SetVertexBufferParams)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2b65060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetVertexBufferParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<UnityEngine::Rendering::VertexAttributeDescriptor>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.AcquireReadOnlyMeshData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UnityEngine__Mesh__MeshDataArray (*)(UnityEngine::Mesh)>(&UnityEngine::Mesh::AcquireReadOnlyMeshData)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2b65108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "AcquireReadOnlyMeshData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Mesh>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.AcquireReadOnlyMeshData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UnityEngine__Mesh__MeshDataArray (*)(::ArrayW<UnityEngine::Mesh>)>(&UnityEngine::Mesh::AcquireReadOnlyMeshData)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2b6537c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "AcquireReadOnlyMeshData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Mesh>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.AcquireReadOnlyMeshData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UnityEngine__Mesh__MeshDataArray (*)(System::Collections::Generic::List_1<UnityEngine::Mesh>)>(&UnityEngine::Mesh::AcquireReadOnlyMeshData)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2b65750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "AcquireReadOnlyMeshData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Mesh>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.AllocateWritableMeshData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UnityEngine__Mesh__MeshDataArray (*)(int32_t)>(&UnityEngine::Mesh::AllocateWritableMeshData)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b65830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "AllocateWritableMeshData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.ApplyAndDisposeWritableMeshData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UnityEngine__Mesh__MeshDataArray, UnityEngine::Mesh, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::ApplyAndDisposeWritableMeshData)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2b659c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "ApplyAndDisposeWritableMeshData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UnityEngine__Mesh__MeshDataArray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Mesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.ApplyAndDisposeWritableMeshData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UnityEngine__Mesh__MeshDataArray, ::ArrayW<UnityEngine::Mesh>, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::ApplyAndDisposeWritableMeshData)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2b65c6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "ApplyAndDisposeWritableMeshData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UnityEngine__Mesh__MeshDataArray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Mesh>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.ApplyAndDisposeWritableMeshData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UnityEngine__Mesh__MeshDataArray, System::Collections::Generic::List_1<UnityEngine::Mesh>, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::ApplyAndDisposeWritableMeshData)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2b66010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "ApplyAndDisposeWritableMeshData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UnityEngine__Mesh__MeshDataArray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Mesh>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetVertexBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GraphicsBuffer (UnityEngine::Mesh::*)(int32_t)>(&UnityEngine::Mesh::GetVertexBuffer)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2b661cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetVertexBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetIndexBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GraphicsBuffer (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::GetIndexBuffer)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2b662a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetIndexBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.PrintErrorCantAccessIndices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::PrintErrorCantAccessIndices)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2b66364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "PrintErrorCantAccessIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.CheckCanAccessSubmesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Mesh::*)(int32_t, bool)>(&UnityEngine::Mesh::CheckCanAccessSubmesh)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2b663fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "CheckCanAccessSubmesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.CheckCanAccessSubmeshTriangles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Mesh::*)(int32_t)>(&UnityEngine::Mesh::CheckCanAccessSubmeshTriangles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b6653c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "CheckCanAccessSubmeshTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.CheckCanAccessSubmeshIndices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Mesh::*)(int32_t)>(&UnityEngine::Mesh::CheckCanAccessSubmeshIndices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b66544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "CheckCanAccessSubmeshIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.get_triangles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::get_triangles)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2b6654c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_triangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.set_triangles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<int32_t>)>(&UnityEngine::Mesh::set_triangles)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2b66600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_triangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetTriangles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (UnityEngine::Mesh::*)(int32_t)>(&UnityEngine::Mesh::GetTriangles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b66748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetTriangles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (UnityEngine::Mesh::*)(int32_t, bool)>(&UnityEngine::Mesh::GetTriangles)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2b66750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetTriangles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<int32_t>, int32_t)>(&UnityEngine::Mesh::GetTriangles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b667f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetTriangles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<int32_t>, int32_t, bool)>(&UnityEngine::Mesh::GetTriangles)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2b66800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetTriangles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<uint16_t>, int32_t, bool)>(&UnityEngine::Mesh::GetTriangles)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2b669bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetIndices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (UnityEngine::Mesh::*)(int32_t)>(&UnityEngine::Mesh::GetIndices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b66b78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetIndices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (UnityEngine::Mesh::*)(int32_t, bool)>(&UnityEngine::Mesh::GetIndices)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2b66b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetIndices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<int32_t>, int32_t)>(&UnityEngine::Mesh::GetIndices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b66c28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetIndices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<int32_t>, int32_t, bool)>(&UnityEngine::Mesh::GetIndices)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2b66c30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetIndices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<uint16_t>, int32_t, bool)>(&UnityEngine::Mesh::GetIndices)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2b66e90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetIndexStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (UnityEngine::Mesh::*)(int32_t)>(&UnityEngine::Mesh::GetIndexStart)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2b6702c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetIndexStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetIndexCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (UnityEngine::Mesh::*)(int32_t)>(&UnityEngine::Mesh::GetIndexCount)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2b66dcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetIndexCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetBaseVertex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (UnityEngine::Mesh::*)(int32_t)>(&UnityEngine::Mesh::GetBaseVertex)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2b670f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetBaseVertex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.CheckIndicesArrayRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, int32_t, int32_t)>(&UnityEngine::Mesh::CheckIndicesArrayRange)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2b671b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "CheckIndicesArrayRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetTrianglesImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, UnityEngine::Rendering::IndexFormat, System::Array, int32_t, int32_t, int32_t, bool, int32_t)>(&UnityEngine::Mesh::SetTrianglesImpl)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2b666a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetTrianglesImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::IndexFormat>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetTriangles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<int32_t>, int32_t)>(&UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2b67360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetTriangles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<int32_t>, int32_t, bool)>(&UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2b67400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetTriangles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<int32_t>, int32_t, bool, int32_t)>(&UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2b673a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetTriangles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<int32_t>, int32_t, int32_t, int32_t, bool, int32_t)>(&UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2b67454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetTriangles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<uint16_t>, int32_t, bool, int32_t)>(&UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2b674e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetTriangles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<uint16_t>, int32_t, int32_t, int32_t, bool, int32_t)>(&UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2b67538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetTriangles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<int32_t>, int32_t)>(&UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b675c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetTriangles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<int32_t>, int32_t, bool)>(&UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b67658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetTriangles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<int32_t>, int32_t, bool, int32_t)>(&UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2b675d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetTriangles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<int32_t>, int32_t, int32_t, int32_t, bool, int32_t)>(&UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2b67664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetTriangles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<uint16_t>, int32_t, bool, int32_t)>(&UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2b67734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetTriangles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<uint16_t>, int32_t, int32_t, int32_t, bool, int32_t)>(&UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2b677bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetIndices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<int32_t>, UnityEngine::MeshTopology, int32_t)>(&UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2b6788c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetIndices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<int32_t>, UnityEngine::MeshTopology, int32_t, bool)>(&UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2b67964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetIndices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<int32_t>, UnityEngine::MeshTopology, int32_t, bool, int32_t)>(&UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2b678f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetIndices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<int32_t>, int32_t, int32_t, UnityEngine::MeshTopology, int32_t, bool, int32_t)>(&UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2b679cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetIndices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<uint16_t>, UnityEngine::MeshTopology, int32_t, bool, int32_t)>(&UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2b67aa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetIndices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<uint16_t>, int32_t, int32_t, UnityEngine::MeshTopology, int32_t, bool, int32_t)>(&UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2b67b14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetIndices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<int32_t>, UnityEngine::MeshTopology, int32_t, bool, int32_t)>(&UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2b67be8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetIndices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<int32_t>, int32_t, int32_t, UnityEngine::MeshTopology, int32_t, bool, int32_t)>(&UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2b67c8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetIndices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<uint16_t>, UnityEngine::MeshTopology, int32_t, bool, int32_t)>(&UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2b67d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetIndices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<uint16_t>, int32_t, int32_t, UnityEngine::MeshTopology, int32_t, bool, int32_t)>(&UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2b67e40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetSubMeshes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::Rendering::SubMeshDescriptor>, int32_t, int32_t, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::SetSubMeshes)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x2b67f50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetSubMeshes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Rendering::SubMeshDescriptor>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetSubMeshes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::Rendering::SubMeshDescriptor>, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::SetSubMeshes)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2b6822c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetSubMeshes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Rendering::SubMeshDescriptor>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetSubMeshes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<UnityEngine::Rendering::SubMeshDescriptor>, int32_t, int32_t, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::SetSubMeshes)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2b68258;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetSubMeshes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Rendering::SubMeshDescriptor>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetSubMeshes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<UnityEngine::Rendering::SubMeshDescriptor>, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::SetSubMeshes)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2b682d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetSubMeshes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Rendering::SubMeshDescriptor>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetBindposes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<UnityEngine::Matrix4x4>)>(&UnityEngine::Mesh::GetBindposes)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2b68368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetBindposes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Matrix4x4>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetBoneWeights
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(System::Collections::Generic::List_1<UnityEngine::BoneWeight>)>(&UnityEngine::Mesh::GetBoneWeights)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2b6849c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetBoneWeights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::BoneWeight>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.get_boneWeights
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::BoneWeight> (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::get_boneWeights)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b685fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_boneWeights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.set_boneWeights
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::BoneWeight>)>(&UnityEngine::Mesh::set_boneWeights)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b68638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_boneWeights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::BoneWeight>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(bool)>(&UnityEngine::Mesh::Clear)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b6867c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::Clear)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2b686c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.RecalculateBounds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::RecalculateBounds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b68700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "RecalculateBounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.RecalculateNormals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::RecalculateNormals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b687fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "RecalculateNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.RecalculateTangents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::RecalculateTangents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b688f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "RecalculateTangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.RecalculateBounds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::RecalculateBounds)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2b68708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "RecalculateBounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.RecalculateNormals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::RecalculateNormals)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2b68804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "RecalculateNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.RecalculateTangents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::RecalculateTangents)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2b68900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "RecalculateTangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.RecalculateUVDistributionMetric
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, float_t)>(&UnityEngine::Mesh::RecalculateUVDistributionMetric)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2b689f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "RecalculateUVDistributionMetric",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.RecalculateUVDistributionMetrics
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(float_t)>(&UnityEngine::Mesh::RecalculateUVDistributionMetrics)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2b68afc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "RecalculateUVDistributionMetrics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.MarkDynamic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::MarkDynamic)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2b68bfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "MarkDynamic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.UploadMeshData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(bool)>(&UnityEngine::Mesh::UploadMeshData)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2b68c70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "UploadMeshData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.Optimize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::Optimize)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2b68cec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "Optimize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.OptimizeIndexBuffers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::OptimizeIndexBuffers)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2b68dd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "OptimizeIndexBuffers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.OptimizeReorderVertexBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)()>(&UnityEngine::Mesh::OptimizeReorderVertexBuffer)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2b68ec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "OptimizeReorderVertexBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetTopology
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::MeshTopology (UnityEngine::Mesh::*)(int32_t)>(&UnityEngine::Mesh::GetTopology)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2b68fb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetTopology",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.CombineMeshes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::CombineInstance>, bool, bool, bool)>(&UnityEngine::Mesh::CombineMeshes)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b69090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "CombineMeshes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::CombineInstance>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.CombineMeshes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::CombineInstance>, bool, bool)>(&UnityEngine::Mesh::CombineMeshes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2b690fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "CombineMeshes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::CombineInstance>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.CombineMeshes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::CombineInstance>, bool)>(&UnityEngine::Mesh::CombineMeshes)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2b6915c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "CombineMeshes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::CombineInstance>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.CombineMeshes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(::ArrayW<UnityEngine::CombineInstance>)>(&UnityEngine::Mesh::CombineMeshes)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2b691b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "CombineMeshes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::CombineInstance>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetVertexAttribute_Injected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, ByRef<UnityEngine::Rendering::VertexAttributeDescriptor>)>(&UnityEngine::Mesh::GetVertexAttribute_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2b60d68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetVertexAttribute_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Rendering::VertexAttributeDescriptor>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.SetSubMesh_Injected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, ByRef<UnityEngine::Rendering::SubMeshDescriptor>, UnityEngine::Rendering::MeshUpdateFlags)>(&UnityEngine::Mesh::SetSubMesh_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2b621ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetSubMesh_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Rendering::SubMeshDescriptor>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.GetSubMesh_Injected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(int32_t, ByRef<UnityEngine::Rendering::SubMeshDescriptor>)>(&UnityEngine::Mesh::GetSubMesh_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2b622c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetSubMesh_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Rendering::SubMeshDescriptor>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.get_bounds_Injected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(ByRef<UnityEngine::Bounds>)>(&UnityEngine::Mesh::get_bounds_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b62458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_bounds_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Bounds>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Mesh.set_bounds_Injected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Mesh::*)(ByRef<UnityEngine::Bounds>)>(&UnityEngine::Mesh::set_bounds_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b624e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_bounds_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Bounds>>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::Mesh::Internal_Create(UnityEngine::Mesh mono)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "Internal_Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Mesh>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mono);
}
// Ctor Parameters []
 UnityEngine::Mesh::Mesh()  : UnityEngine::Object(THROW_UNLESS(::il2cpp_utils::New<Mesh>())) {}
 void UnityEngine::Mesh::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Mesh UnityEngine::Mesh::FromInstanceID(int32_t id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "FromInstanceID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Mesh, false>(nullptr, ___internal_method, id);
}
 UnityEngine::Rendering::IndexFormat UnityEngine::Mesh::get_indexFormat()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_indexFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Rendering::IndexFormat, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Mesh::set_indexFormat(UnityEngine::Rendering::IndexFormat value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_indexFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::IndexFormat>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 uint32_t UnityEngine::Mesh::GetTotalIndexCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetTotalIndexCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Mesh::SetIndexBufferParams(int32_t indexCount, UnityEngine::Rendering::IndexFormat format)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetIndexBufferParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::IndexFormat>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, indexCount, format);
}
 void UnityEngine::Mesh::InternalSetIndexBufferData(::cordl_internals::intptr_t data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "InternalSetIndexBufferData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data, dataStart, meshBufferStart, count, elemSize, flags);
}
 void UnityEngine::Mesh::InternalSetIndexBufferDataFromArray(System::Array data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "InternalSetIndexBufferDataFromArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data, dataStart, meshBufferStart, count, elemSize, flags);
}
 void UnityEngine::Mesh::SetVertexBufferParamsFromPtr(int32_t vertexCount, ::cordl_internals::intptr_t attributesPtr, int32_t attributesCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetVertexBufferParamsFromPtr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, vertexCount, attributesPtr, attributesCount);
}
 void UnityEngine::Mesh::SetVertexBufferParamsFromArray(int32_t vertexCount, ::ArrayW<UnityEngine::Rendering::VertexAttributeDescriptor> attributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetVertexBufferParamsFromArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Rendering::VertexAttributeDescriptor>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, vertexCount, attributes);
}
 void UnityEngine::Mesh::InternalSetVertexBufferData(int32_t stream, ::cordl_internals::intptr_t data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "InternalSetVertexBufferData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, stream, data, dataStart, meshBufferStart, count, elemSize, flags);
}
 void UnityEngine::Mesh::InternalSetVertexBufferDataFromArray(int32_t stream, System::Array data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "InternalSetVertexBufferDataFromArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, stream, data, dataStart, meshBufferStart, count, elemSize, flags);
}
 System::Array UnityEngine::Mesh::GetVertexAttributesAlloc()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetVertexAttributesAlloc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Array, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::Mesh::GetVertexAttributesArray(::ArrayW<UnityEngine::Rendering::VertexAttributeDescriptor> attributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetVertexAttributesArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Rendering::VertexAttributeDescriptor>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, attributes);
}
 int32_t UnityEngine::Mesh::GetVertexAttributesList(System::Collections::Generic::List_1<UnityEngine::Rendering::VertexAttributeDescriptor> attributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetVertexAttributesList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Rendering::VertexAttributeDescriptor>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, attributes);
}
 int32_t UnityEngine::Mesh::GetVertexAttributeCountImpl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetVertexAttributeCountImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Rendering::VertexAttributeDescriptor UnityEngine::Mesh::GetVertexAttribute(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetVertexAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Rendering::VertexAttributeDescriptor, false>(const_cast<void*>(instance), ___internal_method, index);
}
 uint32_t UnityEngine::Mesh::GetIndexStartImpl(int32_t submesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetIndexStartImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, submesh);
}
 uint32_t UnityEngine::Mesh::GetIndexCountImpl(int32_t submesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetIndexCountImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, submesh);
}
 uint32_t UnityEngine::Mesh::GetTrianglesCountImpl(int32_t submesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetTrianglesCountImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, submesh);
}
 uint32_t UnityEngine::Mesh::GetBaseVertexImpl(int32_t submesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetBaseVertexImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, submesh);
}
 ::ArrayW<int32_t> UnityEngine::Mesh::GetTrianglesImpl(int32_t submesh, bool applyBaseVertex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetTrianglesImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(const_cast<void*>(instance), ___internal_method, submesh, applyBaseVertex);
}
 ::ArrayW<int32_t> UnityEngine::Mesh::GetIndicesImpl(int32_t submesh, bool applyBaseVertex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetIndicesImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(const_cast<void*>(instance), ___internal_method, submesh, applyBaseVertex);
}
 void UnityEngine::Mesh::SetIndicesImpl(int32_t submesh, UnityEngine::MeshTopology topology, UnityEngine::Rendering::IndexFormat indicesFormat, System::Array indices, int32_t arrayStart, int32_t arraySize, bool calculateBounds, int32_t baseVertex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetIndicesImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::IndexFormat>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, submesh, topology, indicesFormat, indices, arrayStart, arraySize, calculateBounds, baseVertex);
}
 void UnityEngine::Mesh::SetIndicesNativeArrayImpl(int32_t submesh, UnityEngine::MeshTopology topology, UnityEngine::Rendering::IndexFormat indicesFormat, ::cordl_internals::intptr_t indices, int32_t arrayStart, int32_t arraySize, bool calculateBounds, int32_t baseVertex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetIndicesNativeArrayImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::IndexFormat>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, submesh, topology, indicesFormat, indices, arrayStart, arraySize, calculateBounds, baseVertex);
}
 void UnityEngine::Mesh::GetTrianglesNonAllocImpl(ByRef<::ArrayW<int32_t>> values, int32_t submesh, bool applyBaseVertex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetTrianglesNonAllocImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, values, submesh, applyBaseVertex);
}
 void UnityEngine::Mesh::GetTrianglesNonAllocImpl16(ByRef<::ArrayW<uint16_t>> values, int32_t submesh, bool applyBaseVertex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetTrianglesNonAllocImpl16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint16_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, values, submesh, applyBaseVertex);
}
 void UnityEngine::Mesh::GetIndicesNonAllocImpl(ByRef<::ArrayW<int32_t>> values, int32_t submesh, bool applyBaseVertex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetIndicesNonAllocImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, values, submesh, applyBaseVertex);
}
 void UnityEngine::Mesh::GetIndicesNonAllocImpl16(ByRef<::ArrayW<uint16_t>> values, int32_t submesh, bool applyBaseVertex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetIndicesNonAllocImpl16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint16_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, values, submesh, applyBaseVertex);
}
 void UnityEngine::Mesh::PrintErrorCantAccessChannel(UnityEngine::Rendering::VertexAttribute ch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "PrintErrorCantAccessChannel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttribute>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ch);
}
 bool UnityEngine::Mesh::HasVertexAttribute(UnityEngine::Rendering::VertexAttribute attr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "HasVertexAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttribute>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, attr);
}
 int32_t UnityEngine::Mesh::GetVertexAttributeDimension(UnityEngine::Rendering::VertexAttribute attr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetVertexAttributeDimension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttribute>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, attr);
}
 UnityEngine::Rendering::VertexAttributeFormat UnityEngine::Mesh::GetVertexAttributeFormat(UnityEngine::Rendering::VertexAttribute attr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetVertexAttributeFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttribute>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Rendering::VertexAttributeFormat, false>(const_cast<void*>(instance), ___internal_method, attr);
}
 int32_t UnityEngine::Mesh::GetVertexAttributeStream(UnityEngine::Rendering::VertexAttribute attr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetVertexAttributeStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttribute>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, attr);
}
 int32_t UnityEngine::Mesh::GetVertexAttributeOffset(UnityEngine::Rendering::VertexAttribute attr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetVertexAttributeOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttribute>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, attr);
}
 void UnityEngine::Mesh::SetArrayForChannelImpl(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, System::Array values, int32_t arraySize, int32_t valuesStart, int32_t valuesCount, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetArrayForChannelImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttribute>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttributeFormat>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, channel, format, dim, values, arraySize, valuesStart, valuesCount, flags);
}
 void UnityEngine::Mesh::SetNativeArrayForChannelImpl(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::cordl_internals::intptr_t values, int32_t arraySize, int32_t valuesStart, int32_t valuesCount, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetNativeArrayForChannelImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttribute>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttributeFormat>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, channel, format, dim, values, arraySize, valuesStart, valuesCount, flags);
}
 System::Array UnityEngine::Mesh::GetAllocArrayFromChannelImpl(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetAllocArrayFromChannelImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttribute>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttributeFormat>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Array, false>(const_cast<void*>(instance), ___internal_method, channel, format, dim);
}
 void UnityEngine::Mesh::GetArrayFromChannelImpl(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, System::Array values)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetArrayFromChannelImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttribute>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttributeFormat>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, channel, format, dim, values);
}
 int32_t UnityEngine::Mesh::get_vertexBufferCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_vertexBufferCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::Mesh::GetVertexBufferStride(int32_t stream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetVertexBufferStride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, stream);
}
 ::cordl_internals::intptr_t UnityEngine::Mesh::GetNativeVertexBufferPtr(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetNativeVertexBufferPtr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(instance), ___internal_method, index);
}
 ::cordl_internals::intptr_t UnityEngine::Mesh::GetNativeIndexBufferPtr()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetNativeIndexBufferPtr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::GraphicsBuffer UnityEngine::Mesh::GetVertexBufferImpl(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetVertexBufferImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GraphicsBuffer, false>(const_cast<void*>(instance), ___internal_method, index);
}
 UnityEngine::GraphicsBuffer UnityEngine::Mesh::GetIndexBufferImpl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetIndexBufferImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GraphicsBuffer, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::UnityEngine__GraphicsBuffer__Target UnityEngine::Mesh::get_vertexBufferTarget()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_vertexBufferTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UnityEngine__GraphicsBuffer__Target, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Mesh::set_vertexBufferTarget(UnityEngine::UnityEngine__GraphicsBuffer__Target value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_vertexBufferTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UnityEngine__GraphicsBuffer__Target>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UnityEngine__GraphicsBuffer__Target UnityEngine::Mesh::get_indexBufferTarget()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_indexBufferTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UnityEngine__GraphicsBuffer__Target, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Mesh::set_indexBufferTarget(UnityEngine::UnityEngine__GraphicsBuffer__Target value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_indexBufferTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UnityEngine__GraphicsBuffer__Target>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t UnityEngine::Mesh::get_blendShapeCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_blendShapeCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Mesh::ClearBlendShapes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "ClearBlendShapes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::Mesh::GetBlendShapeName(int32_t shapeIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetBlendShapeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, shapeIndex);
}
 int32_t UnityEngine::Mesh::GetBlendShapeIndex(::StringW blendShapeName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetBlendShapeIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, blendShapeName);
}
 int32_t UnityEngine::Mesh::GetBlendShapeFrameCount(int32_t shapeIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetBlendShapeFrameCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, shapeIndex);
}
 float_t UnityEngine::Mesh::GetBlendShapeFrameWeight(int32_t shapeIndex, int32_t frameIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetBlendShapeFrameWeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, shapeIndex, frameIndex);
}
 void UnityEngine::Mesh::GetBlendShapeFrameVertices(int32_t shapeIndex, int32_t frameIndex, ::ArrayW<UnityEngine::Vector3> deltaVertices, ::ArrayW<UnityEngine::Vector3> deltaNormals, ::ArrayW<UnityEngine::Vector3> deltaTangents)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetBlendShapeFrameVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shapeIndex, frameIndex, deltaVertices, deltaNormals, deltaTangents);
}
 void UnityEngine::Mesh::AddBlendShapeFrame(::StringW shapeName, float_t frameWeight, ::ArrayW<UnityEngine::Vector3> deltaVertices, ::ArrayW<UnityEngine::Vector3> deltaNormals, ::ArrayW<UnityEngine::Vector3> deltaTangents)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "AddBlendShapeFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shapeName, frameWeight, deltaVertices, deltaNormals, deltaTangents);
}
 bool UnityEngine::Mesh::HasBoneWeights()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "HasBoneWeights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<UnityEngine::BoneWeight> UnityEngine::Mesh::GetBoneWeightsImpl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetBoneWeightsImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::BoneWeight>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Mesh::SetBoneWeightsImpl(::ArrayW<UnityEngine::BoneWeight> weights)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetBoneWeightsImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::BoneWeight>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, weights);
}
 void UnityEngine::Mesh::SetBoneWeights(Unity::Collections::NativeArray_1<uint8_t> bonesPerVertex, Unity::Collections::NativeArray_1<UnityEngine::BoneWeight1> weights)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetBoneWeights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<UnityEngine::BoneWeight1>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bonesPerVertex, weights);
}
 void UnityEngine::Mesh::InternalSetBoneWeights(::cordl_internals::intptr_t bonesPerVertex, int32_t bonesPerVertexSize, ::cordl_internals::intptr_t weights, int32_t weightsSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "InternalSetBoneWeights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bonesPerVertex, bonesPerVertexSize, weights, weightsSize);
}
 Unity::Collections::NativeArray_1<UnityEngine::BoneWeight1> UnityEngine::Mesh::GetAllBoneWeights()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetAllBoneWeights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Unity::Collections::NativeArray_1<UnityEngine::BoneWeight1>, false>(const_cast<void*>(instance), ___internal_method);
}
 Unity::Collections::NativeArray_1<uint8_t> UnityEngine::Mesh::GetBonesPerVertex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetBonesPerVertex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Unity::Collections::NativeArray_1<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::Mesh::GetAllBoneWeightsArraySize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetAllBoneWeightsArraySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::cordl_internals::intptr_t UnityEngine::Mesh::GetAllBoneWeightsArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetAllBoneWeightsArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::cordl_internals::intptr_t UnityEngine::Mesh::GetBonesPerVertexArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetBonesPerVertexArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::Mesh::GetBindposeCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetBindposeCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<UnityEngine::Matrix4x4> UnityEngine::Mesh::get_bindposes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_bindposes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::Matrix4x4>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Mesh::set_bindposes(::ArrayW<UnityEngine::Matrix4x4> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_bindposes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Matrix4x4>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::Mesh::GetBoneWeightsNonAllocImpl(ByRef<::ArrayW<UnityEngine::BoneWeight>> values)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetBoneWeightsNonAllocImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::BoneWeight>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, values);
}
 void UnityEngine::Mesh::GetBindposesNonAllocImpl(ByRef<::ArrayW<UnityEngine::Matrix4x4>> values)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetBindposesNonAllocImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::Matrix4x4>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, values);
}
 bool UnityEngine::Mesh::get_isReadable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_isReadable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::Mesh::get_canAccess()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_canAccess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::Mesh::get_vertexCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_vertexCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::Mesh::get_subMeshCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_subMeshCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Mesh::set_subMeshCount(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_subMeshCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
/// @param flags: UnityEngine::Rendering::MeshUpdateFlags (default: 0)
 void UnityEngine::Mesh::SetSubMesh(int32_t index, UnityEngine::Rendering::SubMeshDescriptor desc, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetSubMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::SubMeshDescriptor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, index, desc, flags);
}
 UnityEngine::Rendering::SubMeshDescriptor UnityEngine::Mesh::GetSubMesh(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetSubMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Rendering::SubMeshDescriptor, false>(const_cast<void*>(instance), ___internal_method, index);
}
/// @param flags: UnityEngine::Rendering::MeshUpdateFlags (default: 0)
 void UnityEngine::Mesh::SetAllSubMeshesAtOnceFromArray(::ArrayW<UnityEngine::Rendering::SubMeshDescriptor> desc, int32_t start, int32_t count, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetAllSubMeshesAtOnceFromArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Rendering::SubMeshDescriptor>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, desc, start, count, flags);
}
/// @param flags: UnityEngine::Rendering::MeshUpdateFlags (default: 0)
 void UnityEngine::Mesh::SetAllSubMeshesAtOnceFromNativeArray(::cordl_internals::intptr_t desc, int32_t start, int32_t count, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetAllSubMeshesAtOnceFromNativeArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, desc, start, count, flags);
}
 UnityEngine::Bounds UnityEngine::Mesh::get_bounds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_bounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Bounds, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Mesh::set_bounds(UnityEngine::Bounds value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_bounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Bounds>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::Mesh::ClearImpl(bool keepVertexLayout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "ClearImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keepVertexLayout);
}
 void UnityEngine::Mesh::RecalculateBoundsImpl(UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "RecalculateBoundsImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, flags);
}
 void UnityEngine::Mesh::RecalculateNormalsImpl(UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "RecalculateNormalsImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, flags);
}
 void UnityEngine::Mesh::RecalculateTangentsImpl(UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "RecalculateTangentsImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, flags);
}
 void UnityEngine::Mesh::MarkDynamicImpl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "MarkDynamicImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Mesh::MarkModified()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "MarkModified",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Mesh::UploadMeshDataImpl(bool markNoLongerReadable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "UploadMeshDataImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, markNoLongerReadable);
}
 UnityEngine::MeshTopology UnityEngine::Mesh::GetTopologyImpl(int32_t submesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetTopologyImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::MeshTopology, false>(const_cast<void*>(instance), ___internal_method, submesh);
}
 void UnityEngine::Mesh::RecalculateUVDistributionMetricImpl(int32_t uvSetIndex, float_t uvAreaThreshold)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "RecalculateUVDistributionMetricImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, uvSetIndex, uvAreaThreshold);
}
 void UnityEngine::Mesh::RecalculateUVDistributionMetricsImpl(float_t uvAreaThreshold)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "RecalculateUVDistributionMetricsImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, uvAreaThreshold);
}
 float_t UnityEngine::Mesh::GetUVDistributionMetric(int32_t uvSetIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetUVDistributionMetric",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, uvSetIndex);
}
 void UnityEngine::Mesh::CombineMeshesImpl(::ArrayW<UnityEngine::CombineInstance> combine, bool mergeSubMeshes, bool useMatrices, bool hasLightmapData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "CombineMeshesImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::CombineInstance>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, combine, mergeSubMeshes, useMatrices, hasLightmapData);
}
 void UnityEngine::Mesh::OptimizeImpl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "OptimizeImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Mesh::OptimizeIndexBuffersImpl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "OptimizeIndexBuffersImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Mesh::OptimizeReorderVertexBufferImpl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "OptimizeReorderVertexBufferImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Rendering::VertexAttribute UnityEngine::Mesh::GetUVChannel(int32_t uvIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetUVChannel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Rendering::VertexAttribute, false>(nullptr, ___internal_method, uvIndex);
}
 int32_t UnityEngine::Mesh::DefaultDimensionForChannel(UnityEngine::Rendering::VertexAttribute channel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "DefaultDimensionForChannel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttribute>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, channel);
}
template<typename T>
 ::ArrayW<T> UnityEngine::Mesh::GetAllocArrayFromChannel(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                        "GetAllocArrayFromChannel",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttribute>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttributeFormat>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>, false>(const_cast<void*>(instance), ___internal_method, channel, format, dim);
}
template<typename T>
 ::ArrayW<T> UnityEngine::Mesh::GetAllocArrayFromChannel(UnityEngine::Rendering::VertexAttribute channel)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                        "GetAllocArrayFromChannel",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttribute>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>, false>(const_cast<void*>(instance), ___internal_method, channel);
}
 void UnityEngine::Mesh::SetSizedArrayForChannel(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, System::Array values, int32_t valuesArrayLength, int32_t valuesStart, int32_t valuesCount, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetSizedArrayForChannel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttribute>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttributeFormat>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, channel, format, dim, values, valuesArrayLength, valuesStart, valuesCount, flags);
}
 void UnityEngine::Mesh::SetSizedNativeArrayForChannel(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::cordl_internals::intptr_t values, int32_t valuesArrayLength, int32_t valuesStart, int32_t valuesCount, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetSizedNativeArrayForChannel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttribute>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttributeFormat>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, channel, format, dim, values, valuesArrayLength, valuesStart, valuesCount, flags);
}
/// @param flags: UnityEngine::Rendering::MeshUpdateFlags (default: 0)
template<typename T>
 void UnityEngine::Mesh::SetArrayForChannel(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::ArrayW<T> values, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                        "SetArrayForChannel",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttribute>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttributeFormat>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, channel, format, dim, values, flags);
}
/// @param flags: UnityEngine::Rendering::MeshUpdateFlags (default: 0)
template<typename T>
 void UnityEngine::Mesh::SetArrayForChannel(UnityEngine::Rendering::VertexAttribute channel, ::ArrayW<T> values, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                        "SetArrayForChannel",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttribute>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, channel, values, flags);
}
template<typename T>
 void UnityEngine::Mesh::SetListForChannel(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, System::Collections::Generic::List_1<T> values, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                        "SetListForChannel",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttribute>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttributeFormat>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, channel, format, dim, values, start, length, flags);
}
template<typename T>
 void UnityEngine::Mesh::SetListForChannel(UnityEngine::Rendering::VertexAttribute channel, System::Collections::Generic::List_1<T> values, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                        "SetListForChannel",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttribute>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, channel, values, start, length, flags);
}
template<typename T>
 void UnityEngine::Mesh::GetListForChannel(System::Collections::Generic::List_1<T> buffer, int32_t capacity, UnityEngine::Rendering::VertexAttribute channel, int32_t dim)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                        "GetListForChannel",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttribute>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, capacity, channel, dim);
}
template<typename T>
 void UnityEngine::Mesh::GetListForChannel(System::Collections::Generic::List_1<T> buffer, int32_t capacity, UnityEngine::Rendering::VertexAttribute channel, int32_t dim, UnityEngine::Rendering::VertexAttributeFormat channelType)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                        "GetListForChannel",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttribute>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::VertexAttributeFormat>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, capacity, channel, dim, channelType);
}
 ::ArrayW<UnityEngine::Vector3> UnityEngine::Mesh::get_vertices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_vertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::Vector3>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Mesh::set_vertices(::ArrayW<UnityEngine::Vector3> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_vertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<UnityEngine::Vector3> UnityEngine::Mesh::get_normals()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_normals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::Vector3>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Mesh::set_normals(::ArrayW<UnityEngine::Vector3> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_normals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<UnityEngine::Vector4> UnityEngine::Mesh::get_tangents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_tangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::Vector4>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Mesh::set_tangents(::ArrayW<UnityEngine::Vector4> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_tangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector4>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<UnityEngine::Vector2> UnityEngine::Mesh::get_uv()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_uv",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::Vector2>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Mesh::set_uv(::ArrayW<UnityEngine::Vector2> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_uv",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<UnityEngine::Vector2> UnityEngine::Mesh::get_uv2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_uv2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::Vector2>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Mesh::set_uv2(::ArrayW<UnityEngine::Vector2> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_uv2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<UnityEngine::Vector2> UnityEngine::Mesh::get_uv3()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_uv3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::Vector2>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Mesh::set_uv3(::ArrayW<UnityEngine::Vector2> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_uv3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<UnityEngine::Vector2> UnityEngine::Mesh::get_uv4()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_uv4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::Vector2>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Mesh::set_uv4(::ArrayW<UnityEngine::Vector2> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_uv4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<UnityEngine::Vector2> UnityEngine::Mesh::get_uv5()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_uv5",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::Vector2>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Mesh::set_uv5(::ArrayW<UnityEngine::Vector2> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_uv5",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<UnityEngine::Vector2> UnityEngine::Mesh::get_uv6()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_uv6",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::Vector2>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Mesh::set_uv6(::ArrayW<UnityEngine::Vector2> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_uv6",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<UnityEngine::Vector2> UnityEngine::Mesh::get_uv7()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_uv7",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::Vector2>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Mesh::set_uv7(::ArrayW<UnityEngine::Vector2> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_uv7",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<UnityEngine::Vector2> UnityEngine::Mesh::get_uv8()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_uv8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::Vector2>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Mesh::set_uv8(::ArrayW<UnityEngine::Vector2> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_uv8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<UnityEngine::Color> UnityEngine::Mesh::get_colors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_colors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::Color>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Mesh::set_colors(::ArrayW<UnityEngine::Color> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_colors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Color>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<UnityEngine::Color32> UnityEngine::Mesh::get_colors32()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_colors32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::Color32>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Mesh::set_colors32(::ArrayW<UnityEngine::Color32> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_colors32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Color32>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::Mesh::GetVertices(System::Collections::Generic::List_1<UnityEngine::Vector3> vertices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, vertices);
}
 void UnityEngine::Mesh::SetVertices(System::Collections::Generic::List_1<UnityEngine::Vector3> inVertices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inVertices);
}
 void UnityEngine::Mesh::SetVertices(System::Collections::Generic::List_1<UnityEngine::Vector3> inVertices, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inVertices, start, length);
}
 void UnityEngine::Mesh::SetVertices(System::Collections::Generic::List_1<UnityEngine::Vector3> inVertices, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inVertices, start, length, flags);
}
 void UnityEngine::Mesh::SetVertices(::ArrayW<UnityEngine::Vector3> inVertices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inVertices);
}
 void UnityEngine::Mesh::SetVertices(::ArrayW<UnityEngine::Vector3> inVertices, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inVertices, start, length);
}
 void UnityEngine::Mesh::SetVertices(::ArrayW<UnityEngine::Vector3> inVertices, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inVertices, start, length, flags);
}
template<typename T>
 void UnityEngine::Mesh::SetVertices(Unity::Collections::NativeArray_1<T> inVertices)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                        "SetVertices",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inVertices);
}
template<typename T>
 void UnityEngine::Mesh::SetVertices(Unity::Collections::NativeArray_1<T> inVertices, int32_t start, int32_t length)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                        "SetVertices",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inVertices, start, length);
}
template<typename T>
 void UnityEngine::Mesh::SetVertices(Unity::Collections::NativeArray_1<T> inVertices, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                        "SetVertices",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inVertices, start, length, flags);
}
 void UnityEngine::Mesh::GetNormals(System::Collections::Generic::List_1<UnityEngine::Vector3> normals)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, normals);
}
 void UnityEngine::Mesh::SetNormals(System::Collections::Generic::List_1<UnityEngine::Vector3> inNormals)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inNormals);
}
 void UnityEngine::Mesh::SetNormals(System::Collections::Generic::List_1<UnityEngine::Vector3> inNormals, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inNormals, start, length);
}
 void UnityEngine::Mesh::SetNormals(System::Collections::Generic::List_1<UnityEngine::Vector3> inNormals, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inNormals, start, length, flags);
}
 void UnityEngine::Mesh::SetNormals(::ArrayW<UnityEngine::Vector3> inNormals)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inNormals);
}
 void UnityEngine::Mesh::SetNormals(::ArrayW<UnityEngine::Vector3> inNormals, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inNormals, start, length);
}
 void UnityEngine::Mesh::SetNormals(::ArrayW<UnityEngine::Vector3> inNormals, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inNormals, start, length, flags);
}
template<typename T>
 void UnityEngine::Mesh::SetNormals(Unity::Collections::NativeArray_1<T> inNormals)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                        "SetNormals",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inNormals);
}
template<typename T>
 void UnityEngine::Mesh::SetNormals(Unity::Collections::NativeArray_1<T> inNormals, int32_t start, int32_t length)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                        "SetNormals",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inNormals, start, length);
}
template<typename T>
 void UnityEngine::Mesh::SetNormals(Unity::Collections::NativeArray_1<T> inNormals, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                        "SetNormals",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inNormals, start, length, flags);
}
 void UnityEngine::Mesh::GetTangents(System::Collections::Generic::List_1<UnityEngine::Vector4> tangents)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetTangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector4>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tangents);
}
 void UnityEngine::Mesh::SetTangents(System::Collections::Generic::List_1<UnityEngine::Vector4> inTangents)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetTangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector4>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inTangents);
}
 void UnityEngine::Mesh::SetTangents(System::Collections::Generic::List_1<UnityEngine::Vector4> inTangents, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetTangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inTangents, start, length);
}
 void UnityEngine::Mesh::SetTangents(System::Collections::Generic::List_1<UnityEngine::Vector4> inTangents, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetTangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inTangents, start, length, flags);
}
 void UnityEngine::Mesh::SetTangents(::ArrayW<UnityEngine::Vector4> inTangents)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetTangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector4>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inTangents);
}
 void UnityEngine::Mesh::SetTangents(::ArrayW<UnityEngine::Vector4> inTangents, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetTangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inTangents, start, length);
}
 void UnityEngine::Mesh::SetTangents(::ArrayW<UnityEngine::Vector4> inTangents, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetTangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inTangents, start, length, flags);
}
template<typename T>
 void UnityEngine::Mesh::SetTangents(Unity::Collections::NativeArray_1<T> inTangents)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                        "SetTangents",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inTangents);
}
template<typename T>
 void UnityEngine::Mesh::SetTangents(Unity::Collections::NativeArray_1<T> inTangents, int32_t start, int32_t length)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                        "SetTangents",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inTangents, start, length);
}
template<typename T>
 void UnityEngine::Mesh::SetTangents(Unity::Collections::NativeArray_1<T> inTangents, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                        "SetTangents",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inTangents, start, length, flags);
}
 void UnityEngine::Mesh::GetColors(System::Collections::Generic::List_1<UnityEngine::Color> colors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Color>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, colors);
}
 void UnityEngine::Mesh::SetColors(System::Collections::Generic::List_1<UnityEngine::Color> inColors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Color>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inColors);
}
 void UnityEngine::Mesh::SetColors(System::Collections::Generic::List_1<UnityEngine::Color> inColors, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Color>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inColors, start, length);
}
 void UnityEngine::Mesh::SetColors(System::Collections::Generic::List_1<UnityEngine::Color> inColors, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Color>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inColors, start, length, flags);
}
 void UnityEngine::Mesh::SetColors(::ArrayW<UnityEngine::Color> inColors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Color>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inColors);
}
 void UnityEngine::Mesh::SetColors(::ArrayW<UnityEngine::Color> inColors, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Color>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inColors, start, length);
}
 void UnityEngine::Mesh::SetColors(::ArrayW<UnityEngine::Color> inColors, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Color>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inColors, start, length, flags);
}
 void UnityEngine::Mesh::GetColors(System::Collections::Generic::List_1<UnityEngine::Color32> colors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Color32>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, colors);
}
 void UnityEngine::Mesh::SetColors(System::Collections::Generic::List_1<UnityEngine::Color32> inColors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Color32>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inColors);
}
 void UnityEngine::Mesh::SetColors(System::Collections::Generic::List_1<UnityEngine::Color32> inColors, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Color32>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inColors, start, length);
}
 void UnityEngine::Mesh::SetColors(System::Collections::Generic::List_1<UnityEngine::Color32> inColors, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Color32>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inColors, start, length, flags);
}
 void UnityEngine::Mesh::SetColors(::ArrayW<UnityEngine::Color32> inColors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Color32>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inColors);
}
 void UnityEngine::Mesh::SetColors(::ArrayW<UnityEngine::Color32> inColors, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Color32>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inColors, start, length);
}
 void UnityEngine::Mesh::SetColors(::ArrayW<UnityEngine::Color32> inColors, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Color32>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inColors, start, length, flags);
}
template<typename T>
 void UnityEngine::Mesh::SetColors(Unity::Collections::NativeArray_1<T> inColors)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                        "SetColors",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inColors);
}
template<typename T>
 void UnityEngine::Mesh::SetColors(Unity::Collections::NativeArray_1<T> inColors, int32_t start, int32_t length)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                        "SetColors",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inColors, start, length);
}
template<typename T>
 void UnityEngine::Mesh::SetColors(Unity::Collections::NativeArray_1<T> inColors, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                        "SetColors",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inColors, start, length, flags);
}
template<typename T>
 void UnityEngine::Mesh::SetUvsImpl(int32_t uvIndex, int32_t dim, System::Collections::Generic::List_1<T> uvs, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                        "SetUvsImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, uvIndex, dim, uvs, start, length, flags);
}
 void UnityEngine::Mesh::SetUVs(int32_t channel, System::Collections::Generic::List_1<UnityEngine::Vector2> uvs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, channel, uvs);
}
 void UnityEngine::Mesh::SetUVs(int32_t channel, System::Collections::Generic::List_1<UnityEngine::Vector3> uvs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, channel, uvs);
}
 void UnityEngine::Mesh::SetUVs(int32_t channel, System::Collections::Generic::List_1<UnityEngine::Vector4> uvs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector4>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, channel, uvs);
}
 void UnityEngine::Mesh::SetUVs(int32_t channel, System::Collections::Generic::List_1<UnityEngine::Vector2> uvs, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, channel, uvs, start, length);
}
 void UnityEngine::Mesh::SetUVs(int32_t channel, System::Collections::Generic::List_1<UnityEngine::Vector2> uvs, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, channel, uvs, start, length, flags);
}
 void UnityEngine::Mesh::SetUVs(int32_t channel, System::Collections::Generic::List_1<UnityEngine::Vector3> uvs, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, channel, uvs, start, length);
}
 void UnityEngine::Mesh::SetUVs(int32_t channel, System::Collections::Generic::List_1<UnityEngine::Vector3> uvs, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, channel, uvs, start, length, flags);
}
 void UnityEngine::Mesh::SetUVs(int32_t channel, System::Collections::Generic::List_1<UnityEngine::Vector4> uvs, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, channel, uvs, start, length);
}
 void UnityEngine::Mesh::SetUVs(int32_t channel, System::Collections::Generic::List_1<UnityEngine::Vector4> uvs, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, channel, uvs, start, length, flags);
}
 void UnityEngine::Mesh::SetUvsImpl(int32_t uvIndex, int32_t dim, System::Array uvs, int32_t arrayStart, int32_t arraySize, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetUvsImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, uvIndex, dim, uvs, arrayStart, arraySize, flags);
}
 void UnityEngine::Mesh::SetUVs(int32_t channel, ::ArrayW<UnityEngine::Vector2> uvs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, channel, uvs);
}
 void UnityEngine::Mesh::SetUVs(int32_t channel, ::ArrayW<UnityEngine::Vector3> uvs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, channel, uvs);
}
 void UnityEngine::Mesh::SetUVs(int32_t channel, ::ArrayW<UnityEngine::Vector4> uvs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector4>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, channel, uvs);
}
 void UnityEngine::Mesh::SetUVs(int32_t channel, ::ArrayW<UnityEngine::Vector2> uvs, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, channel, uvs, start, length);
}
 void UnityEngine::Mesh::SetUVs(int32_t channel, ::ArrayW<UnityEngine::Vector2> uvs, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, channel, uvs, start, length, flags);
}
 void UnityEngine::Mesh::SetUVs(int32_t channel, ::ArrayW<UnityEngine::Vector3> uvs, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, channel, uvs, start, length);
}
 void UnityEngine::Mesh::SetUVs(int32_t channel, ::ArrayW<UnityEngine::Vector3> uvs, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, channel, uvs, start, length, flags);
}
 void UnityEngine::Mesh::SetUVs(int32_t channel, ::ArrayW<UnityEngine::Vector4> uvs, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, channel, uvs, start, length);
}
 void UnityEngine::Mesh::SetUVs(int32_t channel, ::ArrayW<UnityEngine::Vector4> uvs, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, channel, uvs, start, length, flags);
}
template<typename T>
 void UnityEngine::Mesh::SetUVs(int32_t channel, Unity::Collections::NativeArray_1<T> uvs)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                        "SetUVs",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, channel, uvs);
}
template<typename T>
 void UnityEngine::Mesh::SetUVs(int32_t channel, Unity::Collections::NativeArray_1<T> uvs, int32_t start, int32_t length)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                        "SetUVs",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, channel, uvs, start, length);
}
template<typename T>
 void UnityEngine::Mesh::SetUVs(int32_t channel, Unity::Collections::NativeArray_1<T> uvs, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                        "SetUVs",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, channel, uvs, start, length, flags);
}
template<typename T>
 void UnityEngine::Mesh::GetUVsImpl(int32_t uvIndex, System::Collections::Generic::List_1<T> uvs, int32_t dim)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                        "GetUVsImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, uvIndex, uvs, dim);
}
 void UnityEngine::Mesh::GetUVs(int32_t channel, System::Collections::Generic::List_1<UnityEngine::Vector2> uvs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, channel, uvs);
}
 void UnityEngine::Mesh::GetUVs(int32_t channel, System::Collections::Generic::List_1<UnityEngine::Vector3> uvs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, channel, uvs);
}
 void UnityEngine::Mesh::GetUVs(int32_t channel, System::Collections::Generic::List_1<UnityEngine::Vector4> uvs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector4>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, channel, uvs);
}
 int32_t UnityEngine::Mesh::get_vertexAttributeCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_vertexAttributeCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<UnityEngine::Rendering::VertexAttributeDescriptor> UnityEngine::Mesh::GetVertexAttributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetVertexAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::Rendering::VertexAttributeDescriptor>, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::Mesh::GetVertexAttributes(::ArrayW<UnityEngine::Rendering::VertexAttributeDescriptor> attributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetVertexAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Rendering::VertexAttributeDescriptor>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, attributes);
}
 int32_t UnityEngine::Mesh::GetVertexAttributes(System::Collections::Generic::List_1<UnityEngine::Rendering::VertexAttributeDescriptor> attributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetVertexAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Rendering::VertexAttributeDescriptor>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, attributes);
}
 void UnityEngine::Mesh::SetVertexBufferParams(int32_t vertexCount, ::ArrayW<UnityEngine::Rendering::VertexAttributeDescriptor> attributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetVertexBufferParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Rendering::VertexAttributeDescriptor>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, vertexCount, attributes);
}
 void UnityEngine::Mesh::SetVertexBufferParams(int32_t vertexCount, Unity::Collections::NativeArray_1<UnityEngine::Rendering::VertexAttributeDescriptor> attributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetVertexBufferParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<UnityEngine::Rendering::VertexAttributeDescriptor>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, vertexCount, attributes);
}
/// @param stream: int32_t (default: 0)
/// @param flags: UnityEngine::Rendering::MeshUpdateFlags (default: 0)
template<typename T>
 void UnityEngine::Mesh::SetVertexBufferData(Unity::Collections::NativeArray_1<T> data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t stream, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                        "SetVertexBufferData",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data, dataStart, meshBufferStart, count, stream, flags);
}
/// @param stream: int32_t (default: 0)
/// @param flags: UnityEngine::Rendering::MeshUpdateFlags (default: 0)
template<typename T>
 void UnityEngine::Mesh::SetVertexBufferData(::ArrayW<T> data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t stream, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                        "SetVertexBufferData",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data, dataStart, meshBufferStart, count, stream, flags);
}
/// @param stream: int32_t (default: 0)
/// @param flags: UnityEngine::Rendering::MeshUpdateFlags (default: 0)
template<typename T>
 void UnityEngine::Mesh::SetVertexBufferData(System::Collections::Generic::List_1<T> data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t stream, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                        "SetVertexBufferData",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data, dataStart, meshBufferStart, count, stream, flags);
}
 UnityEngine::UnityEngine__Mesh__MeshDataArray UnityEngine::Mesh::AcquireReadOnlyMeshData(UnityEngine::Mesh mesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "AcquireReadOnlyMeshData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Mesh>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UnityEngine__Mesh__MeshDataArray, false>(nullptr, ___internal_method, mesh);
}
 UnityEngine::UnityEngine__Mesh__MeshDataArray UnityEngine::Mesh::AcquireReadOnlyMeshData(::ArrayW<UnityEngine::Mesh> meshes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "AcquireReadOnlyMeshData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Mesh>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UnityEngine__Mesh__MeshDataArray, false>(nullptr, ___internal_method, meshes);
}
 UnityEngine::UnityEngine__Mesh__MeshDataArray UnityEngine::Mesh::AcquireReadOnlyMeshData(System::Collections::Generic::List_1<UnityEngine::Mesh> meshes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "AcquireReadOnlyMeshData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Mesh>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UnityEngine__Mesh__MeshDataArray, false>(nullptr, ___internal_method, meshes);
}
 UnityEngine::UnityEngine__Mesh__MeshDataArray UnityEngine::Mesh::AllocateWritableMeshData(int32_t meshCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "AllocateWritableMeshData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UnityEngine__Mesh__MeshDataArray, false>(nullptr, ___internal_method, meshCount);
}
/// @param flags: UnityEngine::Rendering::MeshUpdateFlags (default: 0)
 void UnityEngine::Mesh::ApplyAndDisposeWritableMeshData(UnityEngine::UnityEngine__Mesh__MeshDataArray data, UnityEngine::Mesh mesh, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "ApplyAndDisposeWritableMeshData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UnityEngine__Mesh__MeshDataArray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Mesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, mesh, flags);
}
/// @param flags: UnityEngine::Rendering::MeshUpdateFlags (default: 0)
 void UnityEngine::Mesh::ApplyAndDisposeWritableMeshData(UnityEngine::UnityEngine__Mesh__MeshDataArray data, ::ArrayW<UnityEngine::Mesh> meshes, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "ApplyAndDisposeWritableMeshData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UnityEngine__Mesh__MeshDataArray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Mesh>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, meshes, flags);
}
/// @param flags: UnityEngine::Rendering::MeshUpdateFlags (default: 0)
 void UnityEngine::Mesh::ApplyAndDisposeWritableMeshData(UnityEngine::UnityEngine__Mesh__MeshDataArray data, System::Collections::Generic::List_1<UnityEngine::Mesh> meshes, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "ApplyAndDisposeWritableMeshData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UnityEngine__Mesh__MeshDataArray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Mesh>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, meshes, flags);
}
 UnityEngine::GraphicsBuffer UnityEngine::Mesh::GetVertexBuffer(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetVertexBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GraphicsBuffer, false>(const_cast<void*>(instance), ___internal_method, index);
}
 UnityEngine::GraphicsBuffer UnityEngine::Mesh::GetIndexBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetIndexBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GraphicsBuffer, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Mesh::PrintErrorCantAccessIndices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "PrintErrorCantAccessIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::Mesh::CheckCanAccessSubmesh(int32_t submesh, bool errorAboutTriangles)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "CheckCanAccessSubmesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, submesh, errorAboutTriangles);
}
 bool UnityEngine::Mesh::CheckCanAccessSubmeshTriangles(int32_t submesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "CheckCanAccessSubmeshTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, submesh);
}
 bool UnityEngine::Mesh::CheckCanAccessSubmeshIndices(int32_t submesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "CheckCanAccessSubmeshIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, submesh);
}
 ::ArrayW<int32_t> UnityEngine::Mesh::get_triangles()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_triangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Mesh::set_triangles(::ArrayW<int32_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_triangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<int32_t> UnityEngine::Mesh::GetTriangles(int32_t submesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(const_cast<void*>(instance), ___internal_method, submesh);
}
 ::ArrayW<int32_t> UnityEngine::Mesh::GetTriangles(int32_t submesh, bool applyBaseVertex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(const_cast<void*>(instance), ___internal_method, submesh, applyBaseVertex);
}
 void UnityEngine::Mesh::GetTriangles(System::Collections::Generic::List_1<int32_t> triangles, int32_t submesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, triangles, submesh);
}
 void UnityEngine::Mesh::GetTriangles(System::Collections::Generic::List_1<int32_t> triangles, int32_t submesh, bool applyBaseVertex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, triangles, submesh, applyBaseVertex);
}
/// @param applyBaseVertex: bool (default: true)
 void UnityEngine::Mesh::GetTriangles(System::Collections::Generic::List_1<uint16_t> triangles, int32_t submesh, bool applyBaseVertex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, triangles, submesh, applyBaseVertex);
}
 ::ArrayW<int32_t> UnityEngine::Mesh::GetIndices(int32_t submesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(const_cast<void*>(instance), ___internal_method, submesh);
}
 ::ArrayW<int32_t> UnityEngine::Mesh::GetIndices(int32_t submesh, bool applyBaseVertex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(const_cast<void*>(instance), ___internal_method, submesh, applyBaseVertex);
}
 void UnityEngine::Mesh::GetIndices(System::Collections::Generic::List_1<int32_t> indices, int32_t submesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, indices, submesh);
}
 void UnityEngine::Mesh::GetIndices(System::Collections::Generic::List_1<int32_t> indices, int32_t submesh, bool applyBaseVertex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, indices, submesh, applyBaseVertex);
}
/// @param applyBaseVertex: bool (default: true)
 void UnityEngine::Mesh::GetIndices(System::Collections::Generic::List_1<uint16_t> indices, int32_t submesh, bool applyBaseVertex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, indices, submesh, applyBaseVertex);
}
/// @param flags: UnityEngine::Rendering::MeshUpdateFlags (default: 0)
template<typename T>
 void UnityEngine::Mesh::SetIndexBufferData(Unity::Collections::NativeArray_1<T> data, int32_t dataStart, int32_t meshBufferStart, int32_t count, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                        "SetIndexBufferData",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data, dataStart, meshBufferStart, count, flags);
}
/// @param flags: UnityEngine::Rendering::MeshUpdateFlags (default: 0)
template<typename T>
 void UnityEngine::Mesh::SetIndexBufferData(::ArrayW<T> data, int32_t dataStart, int32_t meshBufferStart, int32_t count, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                        "SetIndexBufferData",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data, dataStart, meshBufferStart, count, flags);
}
/// @param flags: UnityEngine::Rendering::MeshUpdateFlags (default: 0)
template<typename T>
 void UnityEngine::Mesh::SetIndexBufferData(System::Collections::Generic::List_1<T> data, int32_t dataStart, int32_t meshBufferStart, int32_t count, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                        "SetIndexBufferData",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data, dataStart, meshBufferStart, count, flags);
}
 uint32_t UnityEngine::Mesh::GetIndexStart(int32_t submesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetIndexStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, submesh);
}
 uint32_t UnityEngine::Mesh::GetIndexCount(int32_t submesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetIndexCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, submesh);
}
 uint32_t UnityEngine::Mesh::GetBaseVertex(int32_t submesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetBaseVertex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, submesh);
}
 void UnityEngine::Mesh::CheckIndicesArrayRange(int32_t valuesLength, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "CheckIndicesArrayRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, valuesLength, start, length);
}
 void UnityEngine::Mesh::SetTrianglesImpl(int32_t submesh, UnityEngine::Rendering::IndexFormat indicesFormat, System::Array triangles, int32_t trianglesArrayLength, int32_t start, int32_t length, bool calculateBounds, int32_t baseVertex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetTrianglesImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::IndexFormat>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, submesh, indicesFormat, triangles, trianglesArrayLength, start, length, calculateBounds, baseVertex);
}
 void UnityEngine::Mesh::SetTriangles(::ArrayW<int32_t> triangles, int32_t submesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, triangles, submesh);
}
 void UnityEngine::Mesh::SetTriangles(::ArrayW<int32_t> triangles, int32_t submesh, bool calculateBounds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, triangles, submesh, calculateBounds);
}
 void UnityEngine::Mesh::SetTriangles(::ArrayW<int32_t> triangles, int32_t submesh, bool calculateBounds, int32_t baseVertex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, triangles, submesh, calculateBounds, baseVertex);
}
/// @param calculateBounds: bool (default: true)
/// @param baseVertex: int32_t (default: 0)
 void UnityEngine::Mesh::SetTriangles(::ArrayW<int32_t> triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, triangles, trianglesStart, trianglesLength, submesh, calculateBounds, baseVertex);
}
/// @param calculateBounds: bool (default: true)
/// @param baseVertex: int32_t (default: 0)
 void UnityEngine::Mesh::SetTriangles(::ArrayW<uint16_t> triangles, int32_t submesh, bool calculateBounds, int32_t baseVertex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, triangles, submesh, calculateBounds, baseVertex);
}
/// @param calculateBounds: bool (default: true)
/// @param baseVertex: int32_t (default: 0)
 void UnityEngine::Mesh::SetTriangles(::ArrayW<uint16_t> triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, triangles, trianglesStart, trianglesLength, submesh, calculateBounds, baseVertex);
}
 void UnityEngine::Mesh::SetTriangles(System::Collections::Generic::List_1<int32_t> triangles, int32_t submesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, triangles, submesh);
}
 void UnityEngine::Mesh::SetTriangles(System::Collections::Generic::List_1<int32_t> triangles, int32_t submesh, bool calculateBounds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, triangles, submesh, calculateBounds);
}
 void UnityEngine::Mesh::SetTriangles(System::Collections::Generic::List_1<int32_t> triangles, int32_t submesh, bool calculateBounds, int32_t baseVertex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, triangles, submesh, calculateBounds, baseVertex);
}
/// @param calculateBounds: bool (default: true)
/// @param baseVertex: int32_t (default: 0)
 void UnityEngine::Mesh::SetTriangles(System::Collections::Generic::List_1<int32_t> triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, triangles, trianglesStart, trianglesLength, submesh, calculateBounds, baseVertex);
}
/// @param calculateBounds: bool (default: true)
/// @param baseVertex: int32_t (default: 0)
 void UnityEngine::Mesh::SetTriangles(System::Collections::Generic::List_1<uint16_t> triangles, int32_t submesh, bool calculateBounds, int32_t baseVertex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, triangles, submesh, calculateBounds, baseVertex);
}
/// @param calculateBounds: bool (default: true)
/// @param baseVertex: int32_t (default: 0)
 void UnityEngine::Mesh::SetTriangles(System::Collections::Generic::List_1<uint16_t> triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, triangles, trianglesStart, trianglesLength, submesh, calculateBounds, baseVertex);
}
 void UnityEngine::Mesh::SetIndices(::ArrayW<int32_t> indices, UnityEngine::MeshTopology topology, int32_t submesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, indices, topology, submesh);
}
 void UnityEngine::Mesh::SetIndices(::ArrayW<int32_t> indices, UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, indices, topology, submesh, calculateBounds);
}
 void UnityEngine::Mesh::SetIndices(::ArrayW<int32_t> indices, UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, indices, topology, submesh, calculateBounds, baseVertex);
}
/// @param calculateBounds: bool (default: true)
/// @param baseVertex: int32_t (default: 0)
 void UnityEngine::Mesh::SetIndices(::ArrayW<int32_t> indices, int32_t indicesStart, int32_t indicesLength, UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, indices, indicesStart, indicesLength, topology, submesh, calculateBounds, baseVertex);
}
/// @param calculateBounds: bool (default: true)
/// @param baseVertex: int32_t (default: 0)
 void UnityEngine::Mesh::SetIndices(::ArrayW<uint16_t> indices, UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, indices, topology, submesh, calculateBounds, baseVertex);
}
/// @param calculateBounds: bool (default: true)
/// @param baseVertex: int32_t (default: 0)
 void UnityEngine::Mesh::SetIndices(::ArrayW<uint16_t> indices, int32_t indicesStart, int32_t indicesLength, UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, indices, indicesStart, indicesLength, topology, submesh, calculateBounds, baseVertex);
}
/// @param calculateBounds: bool (default: true)
/// @param baseVertex: int32_t (default: 0)
template<typename T>
 void UnityEngine::Mesh::SetIndices(Unity::Collections::NativeArray_1<T> indices, UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                        "SetIndices",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, indices, topology, submesh, calculateBounds, baseVertex);
}
/// @param calculateBounds: bool (default: true)
/// @param baseVertex: int32_t (default: 0)
template<typename T>
 void UnityEngine::Mesh::SetIndices(Unity::Collections::NativeArray_1<T> indices, int32_t indicesStart, int32_t indicesLength, UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                        "SetIndices",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, indices, indicesStart, indicesLength, topology, submesh, calculateBounds, baseVertex);
}
/// @param calculateBounds: bool (default: true)
/// @param baseVertex: int32_t (default: 0)
 void UnityEngine::Mesh::SetIndices(System::Collections::Generic::List_1<int32_t> indices, UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, indices, topology, submesh, calculateBounds, baseVertex);
}
/// @param calculateBounds: bool (default: true)
/// @param baseVertex: int32_t (default: 0)
 void UnityEngine::Mesh::SetIndices(System::Collections::Generic::List_1<int32_t> indices, int32_t indicesStart, int32_t indicesLength, UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, indices, indicesStart, indicesLength, topology, submesh, calculateBounds, baseVertex);
}
/// @param calculateBounds: bool (default: true)
/// @param baseVertex: int32_t (default: 0)
 void UnityEngine::Mesh::SetIndices(System::Collections::Generic::List_1<uint16_t> indices, UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, indices, topology, submesh, calculateBounds, baseVertex);
}
/// @param calculateBounds: bool (default: true)
/// @param baseVertex: int32_t (default: 0)
 void UnityEngine::Mesh::SetIndices(System::Collections::Generic::List_1<uint16_t> indices, int32_t indicesStart, int32_t indicesLength, UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, indices, indicesStart, indicesLength, topology, submesh, calculateBounds, baseVertex);
}
/// @param flags: UnityEngine::Rendering::MeshUpdateFlags (default: 0)
 void UnityEngine::Mesh::SetSubMeshes(::ArrayW<UnityEngine::Rendering::SubMeshDescriptor> desc, int32_t start, int32_t count, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetSubMeshes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Rendering::SubMeshDescriptor>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, desc, start, count, flags);
}
/// @param flags: UnityEngine::Rendering::MeshUpdateFlags (default: 0)
 void UnityEngine::Mesh::SetSubMeshes(::ArrayW<UnityEngine::Rendering::SubMeshDescriptor> desc, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetSubMeshes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Rendering::SubMeshDescriptor>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, desc, flags);
}
/// @param flags: UnityEngine::Rendering::MeshUpdateFlags (default: 0)
 void UnityEngine::Mesh::SetSubMeshes(System::Collections::Generic::List_1<UnityEngine::Rendering::SubMeshDescriptor> desc, int32_t start, int32_t count, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetSubMeshes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Rendering::SubMeshDescriptor>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, desc, start, count, flags);
}
/// @param flags: UnityEngine::Rendering::MeshUpdateFlags (default: 0)
 void UnityEngine::Mesh::SetSubMeshes(System::Collections::Generic::List_1<UnityEngine::Rendering::SubMeshDescriptor> desc, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetSubMeshes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Rendering::SubMeshDescriptor>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, desc, flags);
}
/// @param flags: UnityEngine::Rendering::MeshUpdateFlags (default: 0)
template<typename T>
 void UnityEngine::Mesh::SetSubMeshes(Unity::Collections::NativeArray_1<T> desc, int32_t start, int32_t count, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                        "SetSubMeshes",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, desc, start, count, flags);
}
/// @param flags: UnityEngine::Rendering::MeshUpdateFlags (default: 0)
template<typename T>
 void UnityEngine::Mesh::SetSubMeshes(Unity::Collections::NativeArray_1<T> desc, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                        "SetSubMeshes",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, desc, flags);
}
 void UnityEngine::Mesh::GetBindposes(System::Collections::Generic::List_1<UnityEngine::Matrix4x4> bindposes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetBindposes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Matrix4x4>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bindposes);
}
 void UnityEngine::Mesh::GetBoneWeights(System::Collections::Generic::List_1<UnityEngine::BoneWeight> boneWeights)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetBoneWeights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::BoneWeight>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, boneWeights);
}
 ::ArrayW<UnityEngine::BoneWeight> UnityEngine::Mesh::get_boneWeights()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_boneWeights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::BoneWeight>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Mesh::set_boneWeights(::ArrayW<UnityEngine::BoneWeight> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_boneWeights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::BoneWeight>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::Mesh::Clear(bool keepVertexLayout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keepVertexLayout);
}
 void UnityEngine::Mesh::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Mesh::RecalculateBounds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "RecalculateBounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Mesh::RecalculateNormals()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "RecalculateNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Mesh::RecalculateTangents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "RecalculateTangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Mesh::RecalculateBounds(UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "RecalculateBounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, flags);
}
 void UnityEngine::Mesh::RecalculateNormals(UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "RecalculateNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, flags);
}
 void UnityEngine::Mesh::RecalculateTangents(UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "RecalculateTangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, flags);
}
/// @param uvAreaThreshold: float_t (default: 0.000000001)
 void UnityEngine::Mesh::RecalculateUVDistributionMetric(int32_t uvSetIndex, float_t uvAreaThreshold)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "RecalculateUVDistributionMetric",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, uvSetIndex, uvAreaThreshold);
}
/// @param uvAreaThreshold: float_t (default: 0.000000001)
 void UnityEngine::Mesh::RecalculateUVDistributionMetrics(float_t uvAreaThreshold)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "RecalculateUVDistributionMetrics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, uvAreaThreshold);
}
 void UnityEngine::Mesh::MarkDynamic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "MarkDynamic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Mesh::UploadMeshData(bool markNoLongerReadable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "UploadMeshData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, markNoLongerReadable);
}
 void UnityEngine::Mesh::Optimize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "Optimize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Mesh::OptimizeIndexBuffers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "OptimizeIndexBuffers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Mesh::OptimizeReorderVertexBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "OptimizeReorderVertexBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::MeshTopology UnityEngine::Mesh::GetTopology(int32_t submesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetTopology",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::MeshTopology, false>(const_cast<void*>(instance), ___internal_method, submesh);
}
 void UnityEngine::Mesh::CombineMeshes(::ArrayW<UnityEngine::CombineInstance> combine, bool mergeSubMeshes, bool useMatrices, bool hasLightmapData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "CombineMeshes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::CombineInstance>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, combine, mergeSubMeshes, useMatrices, hasLightmapData);
}
 void UnityEngine::Mesh::CombineMeshes(::ArrayW<UnityEngine::CombineInstance> combine, bool mergeSubMeshes, bool useMatrices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "CombineMeshes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::CombineInstance>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, combine, mergeSubMeshes, useMatrices);
}
 void UnityEngine::Mesh::CombineMeshes(::ArrayW<UnityEngine::CombineInstance> combine, bool mergeSubMeshes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "CombineMeshes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::CombineInstance>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, combine, mergeSubMeshes);
}
 void UnityEngine::Mesh::CombineMeshes(::ArrayW<UnityEngine::CombineInstance> combine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "CombineMeshes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::CombineInstance>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, combine);
}
 void UnityEngine::Mesh::GetVertexAttribute_Injected(int32_t index, ByRef<UnityEngine::Rendering::VertexAttributeDescriptor> ret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetVertexAttribute_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Rendering::VertexAttributeDescriptor>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, index, ret);
}
/// @param flags: UnityEngine::Rendering::MeshUpdateFlags (default: 0)
 void UnityEngine::Mesh::SetSubMesh_Injected(int32_t index, ByRef<UnityEngine::Rendering::SubMeshDescriptor> desc, UnityEngine::Rendering::MeshUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "SetSubMesh_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Rendering::SubMeshDescriptor>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::MeshUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, index, desc, flags);
}
 void UnityEngine::Mesh::GetSubMesh_Injected(int32_t index, ByRef<UnityEngine::Rendering::SubMeshDescriptor> ret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "GetSubMesh_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Rendering::SubMeshDescriptor>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, index, ret);
}
 void UnityEngine::Mesh::get_bounds_Injected(ByRef<UnityEngine::Bounds> ret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "get_bounds_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Bounds>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ret);
}
 void UnityEngine::Mesh::set_bounds_Injected(ByRef<UnityEngine::Bounds> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Mesh>::get(),
                            "set_bounds_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Bounds>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
