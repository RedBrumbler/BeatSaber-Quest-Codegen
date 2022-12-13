// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: Easing
  class Easing;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::Easing);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Easing*, "", "Easing");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Easing
  // [TokenAttribute] Offset: FFFFFFFF
  class Easing : public ::Il2CppObject {
    public:
    // static public System.Single Linear(System.Single t)
    // Offset: 0x161E3A4
    static float Linear(float t);
    // static public System.Single InSine(System.Single t)
    // Offset: 0x161E3A8
    static float InSine(float t);
    // static public System.Single OutSine(System.Single t)
    // Offset: 0x161E430
    static float OutSine(float t);
    // static public System.Single InOutSine(System.Single t)
    // Offset: 0x161E4AC
    static float InOutSine(float t);
    // static public System.Single InQuad(System.Single t)
    // Offset: 0x161E534
    static float InQuad(float t);
    // static public System.Single OutQuad(System.Single t)
    // Offset: 0x161E53C
    static float OutQuad(float t);
    // static public System.Single InOutQuad(System.Single t)
    // Offset: 0x161E550
    static float InOutQuad(float t);
    // static public System.Single InCubic(System.Single t)
    // Offset: 0x161E580
    static float InCubic(float t);
    // static public System.Single OutCubic(System.Single t)
    // Offset: 0x161E58C
    static float OutCubic(float t);
    // static public System.Single InOutCubic(System.Single t)
    // Offset: 0x161E608
    static float InOutCubic(float t);
    // static public System.Single InQuart(System.Single t)
    // Offset: 0x161E6B4
    static float InQuart(float t);
    // static public System.Single OutQuart(System.Single t)
    // Offset: 0x161E6C4
    static float OutQuart(float t);
    // static public System.Single InOutQuart(System.Single t)
    // Offset: 0x161E740
    static float InOutQuart(float t);
    // static public System.Single InQuint(System.Single t)
    // Offset: 0x161E7F0
    static float InQuint(float t);
    // static public System.Single OutQuint(System.Single t)
    // Offset: 0x161E804
    static float OutQuint(float t);
    // static public System.Single InOutQuint(System.Single t)
    // Offset: 0x161E880
    static float InOutQuint(float t);
    // static public System.Single InExpo(System.Single t)
    // Offset: 0x161E934
    static float InExpo(float t);
    // static public System.Single OutExpo(System.Single t)
    // Offset: 0x161E9C8
    static float OutExpo(float t);
    // static public System.Single InOutExpo(System.Single t)
    // Offset: 0x161EA50
    static float InOutExpo(float t);
    // static public System.Single InCirc(System.Single t)
    // Offset: 0x161EB28
    static float InCirc(float t);
    // static public System.Single OutCirc(System.Single t)
    // Offset: 0x161EBB4
    static float OutCirc(float t);
    // static public System.Single InOutCirc(System.Single t)
    // Offset: 0x161EC50
    static float InOutCirc(float t);
    // static public System.Single InBack(System.Single t)
    // Offset: 0x161ED34
    static float InBack(float t);
    // static public System.Single OutBack(System.Single t)
    // Offset: 0x161ED60
    static float OutBack(float t);
    // static public System.Single InOutBack(System.Single t)
    // Offset: 0x161EE04
    static float InOutBack(float t);
    // static public System.Single InElastic(System.Single t)
    // Offset: 0x161EEE8
    static float InElastic(float t);
    // static public System.Single OutElastic(System.Single t)
    // Offset: 0x161EFA4
    static float OutElastic(float t);
    // static public System.Single InOutElastic(System.Single t)
    // Offset: 0x161F064
    static float InOutElastic(float t);
    // static public System.Single InBounce(System.Single t)
    // Offset: 0x161F194
    static float InBounce(float t);
    // static public System.Single OutBounce(System.Single t)
    // Offset: 0x161F1BC
    static float OutBounce(float t);
    // static public System.Single InOutBounce(System.Single t)
    // Offset: 0x161F27C
    static float InOutBounce(float t);
  }; // Easing
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::Easing::Linear
// Il2CppName: Linear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::Easing::Linear)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Easing*), "Linear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Easing::InSine
// Il2CppName: InSine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::Easing::InSine)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Easing*), "InSine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Easing::OutSine
// Il2CppName: OutSine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::Easing::OutSine)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Easing*), "OutSine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Easing::InOutSine
// Il2CppName: InOutSine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::Easing::InOutSine)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Easing*), "InOutSine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Easing::InQuad
// Il2CppName: InQuad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::Easing::InQuad)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Easing*), "InQuad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Easing::OutQuad
// Il2CppName: OutQuad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::Easing::OutQuad)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Easing*), "OutQuad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Easing::InOutQuad
// Il2CppName: InOutQuad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::Easing::InOutQuad)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Easing*), "InOutQuad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Easing::InCubic
// Il2CppName: InCubic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::Easing::InCubic)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Easing*), "InCubic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Easing::OutCubic
// Il2CppName: OutCubic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::Easing::OutCubic)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Easing*), "OutCubic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Easing::InOutCubic
// Il2CppName: InOutCubic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::Easing::InOutCubic)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Easing*), "InOutCubic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Easing::InQuart
// Il2CppName: InQuart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::Easing::InQuart)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Easing*), "InQuart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Easing::OutQuart
// Il2CppName: OutQuart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::Easing::OutQuart)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Easing*), "OutQuart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Easing::InOutQuart
// Il2CppName: InOutQuart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::Easing::InOutQuart)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Easing*), "InOutQuart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Easing::InQuint
// Il2CppName: InQuint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::Easing::InQuint)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Easing*), "InQuint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Easing::OutQuint
// Il2CppName: OutQuint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::Easing::OutQuint)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Easing*), "OutQuint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Easing::InOutQuint
// Il2CppName: InOutQuint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::Easing::InOutQuint)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Easing*), "InOutQuint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Easing::InExpo
// Il2CppName: InExpo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::Easing::InExpo)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Easing*), "InExpo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Easing::OutExpo
// Il2CppName: OutExpo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::Easing::OutExpo)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Easing*), "OutExpo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Easing::InOutExpo
// Il2CppName: InOutExpo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::Easing::InOutExpo)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Easing*), "InOutExpo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Easing::InCirc
// Il2CppName: InCirc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::Easing::InCirc)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Easing*), "InCirc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Easing::OutCirc
// Il2CppName: OutCirc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::Easing::OutCirc)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Easing*), "OutCirc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Easing::InOutCirc
// Il2CppName: InOutCirc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::Easing::InOutCirc)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Easing*), "InOutCirc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Easing::InBack
// Il2CppName: InBack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::Easing::InBack)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Easing*), "InBack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Easing::OutBack
// Il2CppName: OutBack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::Easing::OutBack)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Easing*), "OutBack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Easing::InOutBack
// Il2CppName: InOutBack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::Easing::InOutBack)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Easing*), "InOutBack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Easing::InElastic
// Il2CppName: InElastic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::Easing::InElastic)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Easing*), "InElastic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Easing::OutElastic
// Il2CppName: OutElastic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::Easing::OutElastic)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Easing*), "OutElastic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Easing::InOutElastic
// Il2CppName: InOutElastic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::Easing::InOutElastic)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Easing*), "InOutElastic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Easing::InBounce
// Il2CppName: InBounce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::Easing::InBounce)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Easing*), "InBounce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Easing::OutBounce
// Il2CppName: OutBounce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::Easing::OutBounce)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Easing*), "OutBounce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Easing::InOutBounce
// Il2CppName: InOutBounce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::Easing::InOutBounce)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Easing*), "InOutBounce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
