//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSObject<OS_dispatch_queue>;

@interface ITIdleTimerState : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSHashTable *_idleTimerDisableAssertions;
    id <BSInvalidatable> _stateCaptureAssertion;
}

+ (_Bool)isIdleTimerServiceAvailable;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_addStateCaptureHandler;
- (id)_queue_newAssertionToDisableIdleTimerForReason:(id)arg1;
- (id)newAssertionToDisableIdleTimerForReason:(id)arg1;
- (void)dealloc;
- (id)_init;

@end

