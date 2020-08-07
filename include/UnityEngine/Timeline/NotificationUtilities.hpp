// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: ScriptPlayable`1<T>
  template<typename T>
  struct ScriptPlayable_1;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
}
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TimeNotificationBehaviour
  class TimeNotificationBehaviour;
  // Forward declaring type: IMarker
  class IMarker;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.NotificationUtilities
  class NotificationUtilities : public ::Il2CppObject {
    public:
    // static public UnityEngine.Playables.ScriptPlayable`1<UnityEngine.Timeline.TimeNotificationBehaviour> CreateNotificationsPlayable(UnityEngine.Playables.PlayableGraph graph, System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.IMarker> markers, UnityEngine.GameObject go)
    // Offset: 0x1086D24
    static UnityEngine::Playables::ScriptPlayable_1<UnityEngine::Timeline::TimeNotificationBehaviour*> CreateNotificationsPlayable(UnityEngine::Playables::PlayableGraph graph, System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::IMarker*>* markers, UnityEngine::GameObject* go);
    // static public System.Boolean TrackTypeSupportsNotifications(System.Type type)
    // Offset: 0x1087574
    static bool TrackTypeSupportsNotifications(System::Type* type);
  }; // UnityEngine.Timeline.NotificationUtilities
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::NotificationUtilities*, "UnityEngine.Timeline", "NotificationUtilities");
#pragma pack(pop)