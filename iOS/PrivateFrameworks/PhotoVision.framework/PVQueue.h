//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, PVCanceler;

@interface PVQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    // Error parsing type: Ai, name: _currentlyExecutingTasksCount
    PVCanceler *_canceler;
    _Bool _terminating;
    _Bool _isConcurrent;
}

- (void).cxx_destruct;
- (void)terminate_sync;
- (void)resume;
- (void)suspend_async;
- (void)suspend_sync;
- (void)waitForCurrentTasksToFinish;
- (void)dispatch_barrier_sync:(CDUnknownBlockType)arg1;
- (void)dispatch_barrier_async:(CDUnknownBlockType)arg1;
- (void)execute_sync:(CDUnknownBlockType)arg1;
- (void)execute_after:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)execute_async:(CDUnknownBlockType)arg1;
- (id)initQueueWithName:(id)arg1 isSerial:(_Bool)arg2 qos_class:(unsigned int)arg3;

@end

