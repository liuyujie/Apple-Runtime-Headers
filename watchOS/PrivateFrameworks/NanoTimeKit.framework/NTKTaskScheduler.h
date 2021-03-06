//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSLSBacklightObserver.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface NTKTaskScheduler : NSObject <CSLSBacklightObserver>
{
    NSMutableArray *_queuedTokens;
    NSMutableDictionary *_tasksByToken;
    unsigned int _nextToken;
    int _backlightStatus;
    _Bool _backlightIsOrWillBeOnAccordingToCSLPI;
    _Bool _havePowerAssertion;
    NSObject<OS_dispatch_queue> *_statusQueue;
    NSObject<OS_dispatch_queue> *_takePowerAssertionQueue;
    NSString *_taskSchedulerIdentifier;
}

- (void).cxx_destruct;
- (void)_queue_releasePowerAssertion;
- (void)_queue_takePowerAssertion;
- (void)_releasePowerAssertion;
- (void)_takePowerAssertionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setHavePowerAssertion:(_Bool)arg1;
- (_Bool)_havePowerAssertion;
- (_Bool)_backlightIsOff;
- (CDUnknownBlockType)_dequeueTask;
- (_Bool)_haveRemainingTasks;
- (void)_tryToPerformNextTask;
- (void)_handleCSLPIBacklightDidTurnOff;
- (void)_handleCSLPIBacklightWillTurnOn;
- (void)backlightDidChange:(id)arg1 from:(int)arg2 to:(int)arg3;
- (void)cancelAllTasks;
- (void)cancelTaskForToken:(struct NSNumber *)arg1;
- (struct NSNumber *)scheduleTask:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

