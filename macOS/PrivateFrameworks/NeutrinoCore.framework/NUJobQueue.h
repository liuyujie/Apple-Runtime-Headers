//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NUJobPriorityQueue;

@interface NUJobQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NUJobPriorityQueue *_hiQueue;
    NUJobPriorityQueue *_loQueue;
    long long _updateGroupLevel;
    long long _stage;
}

@property(readonly) long long stage; // @synthesize stage=_stage;
- (void).cxx_destruct;
- (void)_finishedPriorityQueue:(id)arg1;
- (void)finishedPriorityQueue:(id)arg1;
- (void)_startRunningIfNeeded;
- (void)_decrementGroupLevel;
- (void)_incrementGroupLevel;
- (void)_addJobs:(id)arg1;
- (void)removeJob:(id)arg1;
- (void)_removeJob:(id)arg1;
- (void)_addJob:(id)arg1;
- (void)addJobs:(id)arg1;
- (void)addJob:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)init;
- (id)initWithStage:(long long)arg1;

@end
