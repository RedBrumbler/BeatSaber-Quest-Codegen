// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Priority_Queue
namespace Priority_Queue {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Priority_Queue.FastPriorityQueueNode
  class FastPriorityQueueNode : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xE299B4
    // private System.Single <Priority>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    float Priority;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xE299C4
    // private System.Int32 <QueueIndex>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    int QueueIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: FastPriorityQueueNode
    FastPriorityQueueNode(float Priority_ = {}, int QueueIndex_ = {}) noexcept : Priority{Priority_}, QueueIndex{QueueIndex_} {}
    // public System.Single get_Priority()
    // Offset: 0x10A8020
    float get_Priority();
    // protected internal System.Void set_Priority(System.Single value)
    // Offset: 0x10A8028
    void set_Priority(float value);
    // public System.Int32 get_QueueIndex()
    // Offset: 0x10A8030
    int get_QueueIndex();
    // System.Void set_QueueIndex(System.Int32 value)
    // Offset: 0x10A8038
    void set_QueueIndex(int value);
    // public System.Void .ctor()
    // Offset: 0x10A8040
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FastPriorityQueueNode* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::FastPriorityQueueNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FastPriorityQueueNode*, creationType>()));
    }
  }; // Priority_Queue.FastPriorityQueueNode
  #pragma pack(pop)
  static check_size<sizeof(FastPriorityQueueNode), 20 + sizeof(int)> __Priority_Queue_FastPriorityQueueNodeSizeCheck;
  static_assert(sizeof(FastPriorityQueueNode) == 0x18);
  // Writing MetadataGetter for method: FastPriorityQueueNode::get_Priority
  // Il2CppName: get_Priority
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (FastPriorityQueueNode::*)()>(&FastPriorityQueueNode::get_Priority)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(FastPriorityQueueNode*), "get_Priority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: FastPriorityQueueNode::set_Priority
  // Il2CppName: set_Priority
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (FastPriorityQueueNode::*)(float)>(&FastPriorityQueueNode::set_Priority)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(FastPriorityQueueNode*), "set_Priority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
    }
  };
  // Writing MetadataGetter for method: FastPriorityQueueNode::get_QueueIndex
  // Il2CppName: get_QueueIndex
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (FastPriorityQueueNode::*)()>(&FastPriorityQueueNode::get_QueueIndex)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(FastPriorityQueueNode*), "get_QueueIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: FastPriorityQueueNode::set_QueueIndex
  // Il2CppName: set_QueueIndex
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (FastPriorityQueueNode::*)(int)>(&FastPriorityQueueNode::set_QueueIndex)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(FastPriorityQueueNode*), "set_QueueIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: FastPriorityQueueNode::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (FastPriorityQueueNode::*)()>(&FastPriorityQueueNode::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(FastPriorityQueueNode*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (FastPriorityQueueNode::*)()>(&FastPriorityQueueNode::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(FastPriorityQueueNode*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(Priority_Queue::FastPriorityQueueNode*, "Priority_Queue", "FastPriorityQueueNode");
