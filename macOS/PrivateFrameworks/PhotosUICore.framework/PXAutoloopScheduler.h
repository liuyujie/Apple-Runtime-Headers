//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, NSMutableArray, NSObject<OS_dispatch_queue>, _PXAutoloopSchedulerRequest;

@interface PXAutoloopScheduler : NSObject
{
    NSMutableArray *_pendingRequests;
    NSMapTable *_assetUUIDToPendingRequest;
    _PXAutoloopSchedulerRequest *_currentRequest;
    NSObject<OS_dispatch_queue> *_schedulerQueue;
    struct {
        char respondsToAssetUUIDToFavorizeForAutoloopScheduler;
    } _delegateFlags;
    BOOL _shouldSimulateRequest;
    id <PXAutoloopSchedulerDelegate> _delegate;
}

+ (id)sharedScheduler;
@property(nonatomic) BOOL shouldSimulateRequest; // @synthesize shouldSimulateRequest=_shouldSimulateRequest;
@property(nonatomic) __weak id <PXAutoloopSchedulerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_nextRequest;
- (void)_startNextPendingRequest;
- (void)_scheduleNextPendingRequest;
- (void)_removeScheduleRequest:(id)arg1;
- (void)_addRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)cancelRequest:(id)arg1;
- (void)scheduleRequests:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

