//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSPointerArray, NURenderNode;

@interface NURenderContext : NSObject
{
    NSPointerArray *_jobs;
    NSObject<OS_dispatch_queue> *_queue;
    NURenderNode *_lastPrepareNode;
    NURenderNode *_lastRenderNode;
}

@property(retain) NURenderNode *lastRenderNode; // @synthesize lastRenderNode=_lastRenderNode;
@property(retain) NURenderNode *lastPrepareNode; // @synthesize lastPrepareNode=_lastPrepareNode;
- (void).cxx_destruct;
- (void)cancelAllRequests;
- (void)cancelAllJobs;
- (void)_cancelAllJobs;
- (void)addJob:(id)arg1;
- (void)_jobFinished:(id)arg1;
- (void)removeJob:(id)arg1;
- (void)_removeJob:(id)arg1;
@property(readonly) long long jobCount;
@property(readonly) NSArray *jobs;
- (id)init;

@end

