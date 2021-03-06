//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BKSProcessAssertion, NSLock;

@interface NRKWriteQueue : NSObject
{
    struct NSMutableArray *_waitingRequests;
    unsigned long long _commitThreshold;
    CDUnknownBlockType _currentDelayBlock;
    struct NSMutableDictionary *_allChangeRequests;
    NSLock *_queueLock;
    BKSProcessAssertion *_processAssertion;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_decrementProcessAssertion;
- (void)_incrementProcessAssertion;
- (void)reconnectRequestsToReminders:(struct NSDictionary *)arg1;
- (void)_commitAllWrites;
- (id)init;
- (void)_removeChangeRequestForID:(id)arg1;
- (void)_addNewChangeRequest:(id)arg1;
- (void)doChangeCommit:(id)arg1 withDelay:(_Bool)arg2;
@property(readonly) _Bool pendingWrites;
- (void)_enqueue:(id)arg1;

@end

