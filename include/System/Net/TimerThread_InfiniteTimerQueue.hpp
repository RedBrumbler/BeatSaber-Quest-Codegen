// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.TimerThread
#include "System/Net/TimerThread.hpp"
// Including type: System.Net.TimerThread/System.Net.Queue
#include "System/Net/TimerThread_Queue.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::TimerThread::InfiniteTimerQueue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::TimerThread::InfiniteTimerQueue*, "System.Net", "TimerThread/InfiniteTimerQueue");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.TimerThread/System.Net.InfiniteTimerQueue
  // [TokenAttribute] Offset: FFFFFFFF
  class TimerThread::InfiniteTimerQueue : public ::System::Net::TimerThread::Queue {
    public:
    // System.Void .ctor()
    // Offset: 0x1BCC1C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimerThread::InfiniteTimerQueue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::TimerThread::InfiniteTimerQueue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimerThread::InfiniteTimerQueue*, creationType>()));
    }
  }; // System.Net.TimerThread/System.Net.InfiniteTimerQueue
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::TimerThread::InfiniteTimerQueue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
