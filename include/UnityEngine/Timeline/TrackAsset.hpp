// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Playables.PlayableAsset
#include "UnityEngine/Playables/PlayableAsset.hpp"
// Including type: UnityEngine.ISerializationCallbackReceiver
#include "UnityEngine/ISerializationCallbackReceiver.hpp"
// Including type: UnityEngine.Timeline.IPropertyPreview
#include "UnityEngine/Timeline/IPropertyPreview.hpp"
// Including type: UnityEngine.Timeline.ICurvesOwner
#include "UnityEngine/Timeline/ICurvesOwner.hpp"
// Including type: UnityEngine.Timeline.DiscreteTime
#include "UnityEngine/Timeline/DiscreteTime.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: UnityEngine.Timeline.MarkerList
#include "UnityEngine/Timeline/MarkerList.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: UnityEngine.Playables.Playable
#include "UnityEngine/Playables/Playable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TimelineClip
  class TimelineClip;
  // Forward declaring type: TrackBindingTypeAttribute
  class TrackBindingTypeAttribute;
  // Forward declaring type: TimelineAsset
  class TimelineAsset;
  // Forward declaring type: IMarker
  class IMarker;
  // Forward declaring type: IntervalTree`1<T>
  template<typename T>
  class IntervalTree_1;
  // Forward declaring type: RuntimeElement
  class RuntimeElement;
  // Forward declaring type: IPropertyCollector
  class IPropertyCollector;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationClip
  class AnimationClip;
  // Skipping declaration: ScriptableObject because it is already included!
  // Forward declaring type: GameObject
  class GameObject;
  // Skipping declaration: Object because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Skipping declaration: IPlayableAsset because it is already included!
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.TrackAsset
  class TrackAsset : public UnityEngine::Playables::PlayableAsset, public UnityEngine::ISerializationCallbackReceiver, public UnityEngine::Timeline::IPropertyPreview, public UnityEngine::Timeline::ICurvesOwner {
    public:
    // Nested type: UnityEngine::Timeline::TrackAsset::Versions
    struct Versions;
    // Nested type: UnityEngine::Timeline::TrackAsset::TrackAssetUpgrade
    class TrackAssetUpgrade;
    // Nested type: UnityEngine::Timeline::TrackAsset::TransientBuildData
    struct TransientBuildData;
    // Nested type: UnityEngine::Timeline::TrackAsset::$get_outputs$d__65
    class $get_outputs$d__65;
    // Nested type: UnityEngine::Timeline::TrackAsset::$$c
    class $$c;
    // Autogenerated type: UnityEngine.Timeline.TrackAsset/TransientBuildData
    struct TransientBuildData : public System::ValueType {
      public:
      // public System.Collections.Generic.List`1<UnityEngine.Timeline.TrackAsset> trackList
      // Offset: 0x0
      System::Collections::Generic::List_1<UnityEngine::Timeline::TrackAsset*>* trackList;
      // public System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip> clipList
      // Offset: 0x8
      System::Collections::Generic::List_1<UnityEngine::Timeline::TimelineClip*>* clipList;
      // public System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker> markerList
      // Offset: 0x10
      System::Collections::Generic::List_1<UnityEngine::Timeline::IMarker*>* markerList;
      // Creating value type constructor for type: TransientBuildData
      TransientBuildData(System::Collections::Generic::List_1<UnityEngine::Timeline::TrackAsset*>* trackList_ = {}, System::Collections::Generic::List_1<UnityEngine::Timeline::TimelineClip*>* clipList_ = {}, System::Collections::Generic::List_1<UnityEngine::Timeline::IMarker*>* markerList_ = {}) : trackList{trackList_}, clipList{clipList_}, markerList{markerList_} {}
      // static public UnityEngine.Timeline.TrackAsset/TransientBuildData Create()
      // Offset: 0x18F3C24
      static UnityEngine::Timeline::TrackAsset::TransientBuildData Create();
      // public System.Void Clear()
      // Offset: 0xA59878
      void Clear();
    }; // UnityEngine.Timeline.TrackAsset/TransientBuildData
    // static field const value: static private System.Int32 k_LatestVersion
    static constexpr const int k_LatestVersion = 3;
    // Get static field: static private System.Int32 k_LatestVersion
    static int _get_k_LatestVersion();
    // Set static field: static private System.Int32 k_LatestVersion
    static void _set_k_LatestVersion(int value);
    // private System.Int32 m_Version
    // Offset: 0x18
    int m_Version;
    // UnityEngine.AnimationClip m_AnimClip
    // Offset: 0x20
    UnityEngine::AnimationClip* m_AnimClip;
    // Get static field: static private UnityEngine.Timeline.TrackAsset/TransientBuildData s_BuildData
    static UnityEngine::Timeline::TrackAsset::TransientBuildData _get_s_BuildData();
    // Set static field: static private UnityEngine.Timeline.TrackAsset/TransientBuildData s_BuildData
    static void _set_s_BuildData(UnityEngine::Timeline::TrackAsset::TransientBuildData value);
    // static field const value: static System.String kDefaultCurvesName
    static constexpr const char* kDefaultCurvesName = "Track Parameters";
    // Get static field: static System.String kDefaultCurvesName
    static ::Il2CppString* _get_kDefaultCurvesName();
    // Set static field: static System.String kDefaultCurvesName
    static void _set_kDefaultCurvesName(::Il2CppString* value);
    // Get static field: static private System.Action`3<UnityEngine.Timeline.TimelineClip,UnityEngine.GameObject,UnityEngine.Playables.Playable> OnClipPlayableCreate
    static System::Action_3<UnityEngine::Timeline::TimelineClip*, UnityEngine::GameObject*, UnityEngine::Playables::Playable>* _get_OnClipPlayableCreate();
    // Set static field: static private System.Action`3<UnityEngine.Timeline.TimelineClip,UnityEngine.GameObject,UnityEngine.Playables.Playable> OnClipPlayableCreate
    static void _set_OnClipPlayableCreate(System::Action_3<UnityEngine::Timeline::TimelineClip*, UnityEngine::GameObject*, UnityEngine::Playables::Playable>* value);
    // Get static field: static private System.Action`3<UnityEngine.Timeline.TrackAsset,UnityEngine.GameObject,UnityEngine.Playables.Playable> OnTrackAnimationPlayableCreate
    static System::Action_3<UnityEngine::Timeline::TrackAsset*, UnityEngine::GameObject*, UnityEngine::Playables::Playable>* _get_OnTrackAnimationPlayableCreate();
    // Set static field: static private System.Action`3<UnityEngine.Timeline.TrackAsset,UnityEngine.GameObject,UnityEngine.Playables.Playable> OnTrackAnimationPlayableCreate
    static void _set_OnTrackAnimationPlayableCreate(System::Action_3<UnityEngine::Timeline::TrackAsset*, UnityEngine::GameObject*, UnityEngine::Playables::Playable>* value);
    // private System.Boolean m_Locked
    // Offset: 0x28
    bool m_Locked;
    // private System.Boolean m_Muted
    // Offset: 0x29
    bool m_Muted;
    // private System.String m_CustomPlayableFullTypename
    // Offset: 0x30
    ::Il2CppString* m_CustomPlayableFullTypename;
    // private UnityEngine.AnimationClip m_Curves
    // Offset: 0x38
    UnityEngine::AnimationClip* m_Curves;
    // private UnityEngine.Playables.PlayableAsset m_Parent
    // Offset: 0x40
    UnityEngine::Playables::PlayableAsset* m_Parent;
    // private System.Collections.Generic.List`1<UnityEngine.ScriptableObject> m_Children
    // Offset: 0x48
    System::Collections::Generic::List_1<UnityEngine::ScriptableObject*>* m_Children;
    // private System.Int32 m_ItemsHash
    // Offset: 0x50
    int m_ItemsHash;
    // private UnityEngine.Timeline.TimelineClip[] m_ClipsCache
    // Offset: 0x58
    ::Array<UnityEngine::Timeline::TimelineClip*>* m_ClipsCache;
    // private UnityEngine.Timeline.DiscreteTime m_Start
    // Offset: 0x60
    UnityEngine::Timeline::DiscreteTime m_Start;
    // private UnityEngine.Timeline.DiscreteTime m_End
    // Offset: 0x68
    UnityEngine::Timeline::DiscreteTime m_End;
    // private System.Boolean m_CacheSorted
    // Offset: 0x70
    bool m_CacheSorted;
    // private System.Nullable`1<System.Boolean> m_SupportsNotifications
    // Offset: 0x71
    System::Nullable_1<bool> m_SupportsNotifications;
    // Get static field: static private UnityEngine.Timeline.TrackAsset[] s_EmptyCache
    static ::Array<UnityEngine::Timeline::TrackAsset*>* _get_s_EmptyCache();
    // Set static field: static private UnityEngine.Timeline.TrackAsset[] s_EmptyCache
    static void _set_s_EmptyCache(::Array<UnityEngine::Timeline::TrackAsset*>* value);
    // private System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset> m_ChildTrackCache
    // Offset: 0x78
    System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset*>* m_ChildTrackCache;
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Timeline.TrackBindingTypeAttribute> s_TrackBindingTypeAttributeCache
    static System::Collections::Generic::Dictionary_2<System::Type*, UnityEngine::Timeline::TrackBindingTypeAttribute*>* _get_s_TrackBindingTypeAttributeCache();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Timeline.TrackBindingTypeAttribute> s_TrackBindingTypeAttributeCache
    static void _set_s_TrackBindingTypeAttributeCache(System::Collections::Generic::Dictionary_2<System::Type*, UnityEngine::Timeline::TrackBindingTypeAttribute*>* value);
    // protected internal System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip> m_Clips
    // Offset: 0x80
    System::Collections::Generic::List_1<UnityEngine::Timeline::TimelineClip*>* m_Clips;
    // private UnityEngine.Timeline.MarkerList m_Markers
    // Offset: 0x88
    UnityEngine::Timeline::MarkerList m_Markers;
    // protected System.Void OnBeforeTrackSerialize()
    // Offset: 0x18EDC30
    void OnBeforeTrackSerialize();
    // protected System.Void OnAfterTrackDeserialize()
    // Offset: 0x18EDC34
    void OnAfterTrackDeserialize();
    // System.Void OnUpgradeFromVersion(System.Int32 oldVersion)
    // Offset: 0x18EDC38
    void OnUpgradeFromVersion(int oldVersion);
    // private System.Void UpgradeToLatestVersion()
    // Offset: 0x18EE18C
    void UpgradeToLatestVersion();
    // static System.Void add_OnClipPlayableCreate(System.Action`3<UnityEngine.Timeline.TimelineClip,UnityEngine.GameObject,UnityEngine.Playables.Playable> value)
    // Offset: 0x18EE19C
    static void add_OnClipPlayableCreate(System::Action_3<UnityEngine::Timeline::TimelineClip*, UnityEngine::GameObject*, UnityEngine::Playables::Playable>* value);
    // static System.Void remove_OnClipPlayableCreate(System.Action`3<UnityEngine.Timeline.TimelineClip,UnityEngine.GameObject,UnityEngine.Playables.Playable> value)
    // Offset: 0x18EE28C
    static void remove_OnClipPlayableCreate(System::Action_3<UnityEngine::Timeline::TimelineClip*, UnityEngine::GameObject*, UnityEngine::Playables::Playable>* value);
    // static System.Void add_OnTrackAnimationPlayableCreate(System.Action`3<UnityEngine.Timeline.TrackAsset,UnityEngine.GameObject,UnityEngine.Playables.Playable> value)
    // Offset: 0x18EE37C
    static void add_OnTrackAnimationPlayableCreate(System::Action_3<UnityEngine::Timeline::TrackAsset*, UnityEngine::GameObject*, UnityEngine::Playables::Playable>* value);
    // static System.Void remove_OnTrackAnimationPlayableCreate(System.Action`3<UnityEngine.Timeline.TrackAsset,UnityEngine.GameObject,UnityEngine.Playables.Playable> value)
    // Offset: 0x18EE46C
    static void remove_OnTrackAnimationPlayableCreate(System::Action_3<UnityEngine::Timeline::TrackAsset*, UnityEngine::GameObject*, UnityEngine::Playables::Playable>* value);
    // public System.Double get_start()
    // Offset: 0x18EE55C
    double get_start();
    // public System.Double get_end()
    // Offset: 0x18EE6E0
    double get_end();
    // public System.Boolean get_muted()
    // Offset: 0x18EE7D4
    bool get_muted();
    // public System.Void set_muted(System.Boolean value)
    // Offset: 0x18EE7DC
    void set_muted(bool value);
    // public System.Boolean get_mutedInHierarchy()
    // Offset: 0x18EE7E8
    bool get_mutedInHierarchy();
    // public UnityEngine.Timeline.TimelineAsset get_timelineAsset()
    // Offset: 0x18EB3F4
    UnityEngine::Timeline::TimelineAsset* get_timelineAsset();
    // public UnityEngine.Playables.PlayableAsset get_parent()
    // Offset: 0x18EE990
    UnityEngine::Playables::PlayableAsset* get_parent();
    // System.Void set_parent(UnityEngine.Playables.PlayableAsset value)
    // Offset: 0x18EE998
    void set_parent(UnityEngine::Playables::PlayableAsset* value);
    // public System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TimelineClip> GetClips()
    // Offset: 0x18EE9A0
    System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TimelineClip*>* GetClips();
    // UnityEngine.Timeline.TimelineClip[] get_clips()
    // Offset: 0x18EE9A4
    ::Array<UnityEngine::Timeline::TimelineClip*>* get_clips();
    // public System.Boolean get_isEmpty()
    // Offset: 0x18EEA6C
    bool get_isEmpty();
    // public System.Boolean get_hasClips()
    // Offset: 0x18EEAE4
    bool get_hasClips();
    // public System.Boolean get_isSubTrack()
    // Offset: 0x18EB880
    bool get_isSubTrack();
    // public System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset> GetChildTracks()
    // Offset: 0x18EECAC
    System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset*>* GetChildTracks();
    // System.String get_customPlayableTypename()
    // Offset: 0x18EEEA0
    ::Il2CppString* get_customPlayableTypename();
    // System.Void set_customPlayableTypename(System.String value)
    // Offset: 0x18EEEA8
    void set_customPlayableTypename(::Il2CppString* value);
    // System.Void set_curves(UnityEngine.AnimationClip value)
    // Offset: 0x18EEEB8
    void set_curves(UnityEngine::AnimationClip* value);
    // System.Collections.Generic.List`1<UnityEngine.ScriptableObject> get_subTracksObjects()
    // Offset: 0x18EEF14
    System::Collections::Generic::List_1<UnityEngine::ScriptableObject*>* get_subTracksObjects();
    // public System.Boolean get_locked()
    // Offset: 0x18EEF1C
    bool get_locked();
    // public System.Void set_locked(System.Boolean value)
    // Offset: 0x18EEF24
    void set_locked(bool value);
    // public System.Boolean get_lockedInHierarchy()
    // Offset: 0x18EEF30
    bool get_lockedInHierarchy();
    // public System.Boolean get_supportsNotifications()
    // Offset: 0x18EF0D8
    bool get_supportsNotifications();
    // private System.Void __internalAwake()
    // Offset: 0x18EF17C
    void __internalAwake();
    // public UnityEngine.Playables.Playable CreateTrackMixer(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go, System.Int32 inputCount)
    // Offset: 0x18EF32C
    UnityEngine::Playables::Playable CreateTrackMixer(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject* go, int inputCount);
    // public UnityEngine.Timeline.TimelineClip CreateDefaultClip()
    // Offset: 0x18EF40C
    UnityEngine::Timeline::TimelineClip* CreateDefaultClip();
    // public UnityEngine.Timeline.TimelineClip CreateClip()
    // Offset: 0xFFFFFFFF
    template<class T>
    UnityEngine::Timeline::TimelineClip* CreateClip() {
      static_assert(std::is_convertible_v<T, UnityEngine::ScriptableObject*> && std::is_base_of_v<UnityEngine::Playables::IPlayableAsset, std::remove_pointer_t<T>>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<UnityEngine::Timeline::TimelineClip*>(this, "CreateClip", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()})));
    }
    // public UnityEngine.Timeline.IMarker CreateMarker(System.Type type, System.Double time)
    // Offset: 0x18EF6E0
    UnityEngine::Timeline::IMarker* CreateMarker(System::Type* type, double time);
    // public T CreateMarker(System.Double time)
    // Offset: 0xFFFFFFFF
    template<class T>
    T CreateMarker(double time) {
      static_assert(std::is_convertible_v<T, UnityEngine::ScriptableObject*> && std::is_base_of_v<UnityEngine::Timeline::IMarker, std::remove_pointer_t<T>>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>(this, "CreateMarker", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, time)));
    }
    // public System.Boolean DeleteMarker(UnityEngine.Timeline.IMarker marker)
    // Offset: 0x18EF6F0
    bool DeleteMarker(UnityEngine::Timeline::IMarker* marker);
    // public System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.IMarker> GetMarkers()
    // Offset: 0x18EE190
    System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::IMarker*>* GetMarkers();
    // public System.Int32 GetMarkerCount()
    // Offset: 0x18EEBDC
    int GetMarkerCount();
    // public UnityEngine.Timeline.IMarker GetMarker(System.Int32 idx)
    // Offset: 0x18EF6FC
    UnityEngine::Timeline::IMarker* GetMarker(int idx);
    // UnityEngine.Timeline.TimelineClip CreateClip(System.Type requestedType)
    // Offset: 0x18EF708
    UnityEngine::Timeline::TimelineClip* CreateClip(System::Type* requestedType);
    // UnityEngine.Timeline.TimelineClip CreateAndAddNewClipOfType(System.Type requestedType)
    // Offset: 0x18EF6AC
    UnityEngine::Timeline::TimelineClip* CreateAndAddNewClipOfType(System::Type* requestedType);
    // UnityEngine.Timeline.TimelineClip CreateClipOfType(System.Type requestedType)
    // Offset: 0x18EFB04
    UnityEngine::Timeline::TimelineClip* CreateClipOfType(System::Type* requestedType);
    // UnityEngine.Timeline.TimelineClip CreateClipFromPlayableAsset(UnityEngine.Playables.IPlayableAsset asset)
    // Offset: 0x18F0070
    UnityEngine::Timeline::TimelineClip* CreateClipFromPlayableAsset(UnityEngine::Playables::IPlayableAsset* asset);
    // private UnityEngine.Timeline.TimelineClip CreateClipFromAsset(UnityEngine.ScriptableObject playableAsset)
    // Offset: 0x18EFDB8
    UnityEngine::Timeline::TimelineClip* CreateClipFromAsset(UnityEngine::ScriptableObject* playableAsset);
    // System.Collections.Generic.IEnumerable`1<UnityEngine.ScriptableObject> GetMarkersRaw()
    // Offset: 0x18F0568
    System::Collections::Generic::IEnumerable_1<UnityEngine::ScriptableObject*>* GetMarkersRaw();
    // System.Void ClearMarkers()
    // Offset: 0x18F0570
    void ClearMarkers();
    // System.Void AddMarker(UnityEngine.ScriptableObject e)
    // Offset: 0x18F057C
    void AddMarker(UnityEngine::ScriptableObject* e);
    // System.Boolean DeleteMarkerRaw(UnityEngine.ScriptableObject marker)
    // Offset: 0x18F0588
    bool DeleteMarkerRaw(UnityEngine::ScriptableObject* marker);
    // private System.Int32 GetTimeRangeHash()
    // Offset: 0x18F05CC
    int GetTimeRangeHash();
    // System.Void AddClip(UnityEngine.Timeline.TimelineClip newClip)
    // Offset: 0x18EFD10
    void AddClip(UnityEngine::Timeline::TimelineClip* newClip);
    // private UnityEngine.Playables.Playable CreateNotificationsPlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.Playables.Playable mixerPlayable, UnityEngine.GameObject go, UnityEngine.Playables.Playable timelinePlayable)
    // Offset: 0x18F0A58
    UnityEngine::Playables::Playable CreateNotificationsPlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::Playables::Playable mixerPlayable, UnityEngine::GameObject* go, UnityEngine::Playables::Playable timelinePlayable);
    // UnityEngine.Playables.Playable CreatePlayableGraph(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go, UnityEngine.Timeline.IntervalTree`1<UnityEngine.Timeline.RuntimeElement> tree, UnityEngine.Playables.Playable timelinePlayable)
    // Offset: 0x18ED110
    UnityEngine::Playables::Playable CreatePlayableGraph(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject* go, UnityEngine::Timeline::IntervalTree_1<UnityEngine::Timeline::RuntimeElement*>* tree, UnityEngine::Playables::Playable timelinePlayable);
    // UnityEngine.Playables.Playable CompileClips(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go, System.Collections.Generic.IList`1<UnityEngine.Timeline.TimelineClip> timelineClips, UnityEngine.Timeline.IntervalTree`1<UnityEngine.Timeline.RuntimeElement> tree)
    // Offset: 0x18F125C
    UnityEngine::Playables::Playable CompileClips(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject* go, System::Collections::Generic::IList_1<UnityEngine::Timeline::TimelineClip*>* timelineClips, UnityEngine::Timeline::IntervalTree_1<UnityEngine::Timeline::RuntimeElement*>* tree);
    // private System.Void GatherCompilableTracks(System.Collections.Generic.IList`1<UnityEngine.Timeline.TrackAsset> tracks)
    // Offset: 0x18F17A8
    void GatherCompilableTracks(System::Collections::Generic::IList_1<UnityEngine::Timeline::TrackAsset*>* tracks);
    // private System.Void GatherNotificiations(System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker> markers)
    // Offset: 0x18F0C48
    void GatherNotificiations(System::Collections::Generic::List_1<UnityEngine::Timeline::IMarker*>* markers);
    // UnityEngine.Playables.Playable OnCreateClipPlayableGraph(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go, UnityEngine.Timeline.IntervalTree`1<UnityEngine.Timeline.RuntimeElement> tree)
    // Offset: 0x18F1B40
    UnityEngine::Playables::Playable OnCreateClipPlayableGraph(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject* go, UnityEngine::Timeline::IntervalTree_1<UnityEngine::Timeline::RuntimeElement*>* tree);
    // System.Void ConfigureTrackAnimation(UnityEngine.Timeline.IntervalTree`1<UnityEngine.Timeline.RuntimeElement> tree, UnityEngine.GameObject go, UnityEngine.Playables.Playable blend)
    // Offset: 0x18F1654
    void ConfigureTrackAnimation(UnityEngine::Timeline::IntervalTree_1<UnityEngine::Timeline::RuntimeElement*>* tree, UnityEngine::GameObject* go, UnityEngine::Playables::Playable blend);
    // System.Void SortClips()
    // Offset: 0x18EC4A8
    void SortClips();
    // System.Void ClearClipsInternal()
    // Offset: 0x18F21A8
    void ClearClipsInternal();
    // System.Void ClearSubTracksInternal()
    // Offset: 0x18F2228
    void ClearSubTracksInternal();
    // System.Void OnClipMove()
    // Offset: 0x18F22A0
    void OnClipMove();
    // UnityEngine.Timeline.TimelineClip CreateNewClipContainerInternal()
    // Offset: 0x18F030C
    UnityEngine::Timeline::TimelineClip* CreateNewClipContainerInternal();
    // System.Void AddChild(UnityEngine.Timeline.TrackAsset child)
    // Offset: 0x18F22A8
    void AddChild(UnityEngine::Timeline::TrackAsset* child);
    // System.Void MoveLastTrackBefore(UnityEngine.Timeline.TrackAsset asset)
    // Offset: 0x18F2370
    void MoveLastTrackBefore(UnityEngine::Timeline::TrackAsset* asset);
    // System.Boolean RemoveSubTrack(UnityEngine.Timeline.TrackAsset child)
    // Offset: 0x18F259C
    bool RemoveSubTrack(UnityEngine::Timeline::TrackAsset* child);
    // System.Void RemoveClip(UnityEngine.Timeline.TimelineClip clip)
    // Offset: 0x18F2634
    void RemoveClip(UnityEngine::Timeline::TimelineClip* clip);
    // System.Void GetEvaluationTime(System.Double outStart, System.Double outDuration)
    // Offset: 0x18F26AC
    void GetEvaluationTime(double& outStart, double& outDuration);
    // System.Void GetSequenceTime(System.Double outStart, System.Double outDuration)
    // Offset: 0x18F2C6C
    void GetSequenceTime(double& outStart, double& outDuration);
    // UnityEngine.GameObject GetGameObjectBinding(UnityEngine.Playables.PlayableDirector director)
    // Offset: 0x18F331C
    UnityEngine::GameObject* GetGameObjectBinding(UnityEngine::Playables::PlayableDirector* director);
    // System.Boolean ValidateClipType(System.Type clipType)
    // Offset: 0x18EF894
    bool ValidateClipType(System::Type* clipType);
    // protected System.Void OnCreateClip(UnityEngine.Timeline.TimelineClip clip)
    // Offset: 0x18F349C
    void OnCreateClip(UnityEngine::Timeline::TimelineClip* clip);
    // private System.Void UpdateDuration()
    // Offset: 0x18EE5D0
    void UpdateDuration();
    // protected internal System.Int32 CalculateItemsHash()
    // Offset: 0x18F34A0
    int CalculateItemsHash();
    // protected UnityEngine.Playables.Playable CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject gameObject, UnityEngine.Timeline.TimelineClip clip)
    // Offset: 0x18F3754
    UnityEngine::Playables::Playable CreatePlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject* gameObject, UnityEngine::Timeline::TimelineClip* clip);
    // System.Void Invalidate()
    // Offset: 0x18EE0DC
    void Invalidate();
    // System.Double GetNotificationDuration()
    // Offset: 0x18F2908
    double GetNotificationDuration();
    // System.Boolean CanCompileClips()
    // Offset: 0x18F39D0
    bool CanCompileClips();
    // System.Boolean IsCompilable()
    // Offset: 0x18EC118
    bool IsCompilable();
    // private System.Void UpdateChildTrackCache()
    // Offset: 0x18EECD0
    void UpdateChildTrackCache();
    // System.Int32 Hash()
    // Offset: 0x18F3A34
    int Hash();
    // private System.Int32 GetClipsHash()
    // Offset: 0x18F3540
    int GetClipsHash();
    // static protected System.Int32 GetAnimationClipHash(UnityEngine.AnimationClip clip)
    // Offset: 0x18F3658
    static int GetAnimationClipHash(UnityEngine::AnimationClip* clip);
    // private System.Boolean HasNotifications()
    // Offset: 0x18F28FC
    bool HasNotifications();
    // private System.Boolean CanCompileNotifications()
    // Offset: 0x18F1B04
    bool CanCompileNotifications();
    // private System.Boolean CanCompileClipsRecursive()
    // Offset: 0x18F0F60
    bool CanCompileClipsRecursive();
    // private System.Void UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
    // Offset: 0x18EDC3C
    // Implemented from: UnityEngine.ISerializationCallbackReceiver
    // Base method: System.Void ISerializationCallbackReceiver::OnBeforeSerialize()
    void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();
    // private System.Void UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
    // Offset: 0x18EDDA8
    // Implemented from: UnityEngine.ISerializationCallbackReceiver
    // Base method: System.Void ISerializationCallbackReceiver::OnAfterDeserialize()
    void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();
    // public override System.Double get_duration()
    // Offset: 0x18EE754
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: System.Double PlayableAsset::get_duration()
    double get_duration();
    // public System.Boolean get_hasCurves()
    // Offset: 0x18EEB40
    // Implemented from: UnityEngine.Timeline.ICurvesOwner
    // Base method: System.Boolean ICurvesOwner::get_hasCurves()
    bool get_hasCurves();
    // public override System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding> get_outputs()
    // Offset: 0x18EEBE8
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding> PlayableAsset::get_outputs()
    System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>* get_outputs();
    // public UnityEngine.AnimationClip get_curves()
    // Offset: 0x18EEEB0
    // Implemented from: UnityEngine.Timeline.ICurvesOwner
    // Base method: UnityEngine.AnimationClip ICurvesOwner::get_curves()
    UnityEngine::AnimationClip* get_curves();
    // private System.String UnityEngine.Timeline.ICurvesOwner.get_defaultCurvesName()
    // Offset: 0x18EEEC0
    // Implemented from: UnityEngine.Timeline.ICurvesOwner
    // Base method: System.String ICurvesOwner::get_defaultCurvesName()
    ::Il2CppString* UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName();
    // private UnityEngine.Object UnityEngine.Timeline.ICurvesOwner.get_asset()
    // Offset: 0x18EEF08
    // Implemented from: UnityEngine.Timeline.ICurvesOwner
    // Base method: UnityEngine.Object ICurvesOwner::get_asset()
    UnityEngine::Object* UnityEngine_Timeline_ICurvesOwner_get_asset();
    // private UnityEngine.Object UnityEngine.Timeline.ICurvesOwner.get_assetOwner()
    // Offset: 0x18EEF0C
    // Implemented from: UnityEngine.Timeline.ICurvesOwner
    // Base method: UnityEngine.Object ICurvesOwner::get_assetOwner()
    UnityEngine::Object* UnityEngine_Timeline_ICurvesOwner_get_assetOwner();
    // private UnityEngine.Timeline.TrackAsset UnityEngine.Timeline.ICurvesOwner.get_targetTrack()
    // Offset: 0x18EEF10
    // Implemented from: UnityEngine.Timeline.ICurvesOwner
    // Base method: UnityEngine.Timeline.TrackAsset ICurvesOwner::get_targetTrack()
    UnityEngine::Timeline::TrackAsset* UnityEngine_Timeline_ICurvesOwner_get_targetTrack();
    // public System.Void CreateCurves(System.String curvesClipName)
    // Offset: 0x18EF25C
    // Implemented from: UnityEngine.Timeline.ICurvesOwner
    // Base method: System.Void ICurvesOwner::CreateCurves(System.String curvesClipName)
    void CreateCurves(::Il2CppString* curvesClipName);
    // public override UnityEngine.Playables.Playable CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go)
    // Offset: 0x18EF3AC
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: UnityEngine.Playables.Playable PlayableAsset::CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go)
    UnityEngine::Playables::Playable CreatePlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject* go);
    // public System.Void GatherProperties(UnityEngine.Playables.PlayableDirector director, UnityEngine.Timeline.IPropertyCollector driver)
    // Offset: 0x18F2C7C
    // Implemented from: UnityEngine.Timeline.IPropertyPreview
    // Base method: System.Void IPropertyPreview::GatherProperties(UnityEngine.Playables.PlayableDirector director, UnityEngine.Timeline.IPropertyCollector driver)
    void GatherProperties(UnityEngine::Playables::PlayableDirector* director, UnityEngine::Timeline::IPropertyCollector* driver);
    // protected System.Void .ctor()
    // Offset: 0x18F3A74
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: System.Void PlayableAsset::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TrackAsset* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0x18F3B50
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // UnityEngine.Timeline.TrackAsset
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TrackAsset*, "UnityEngine.Timeline", "TrackAsset");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TrackAsset::TransientBuildData, "UnityEngine.Timeline", "TrackAsset/TransientBuildData");
#pragma pack(pop)