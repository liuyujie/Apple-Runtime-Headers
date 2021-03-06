//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HDAWDHealthKitGymKitWorkoutEvent, HKPersistentTimer;

@interface HDFitnessMachineAnalyticsCollector : NSObject
{
    HDAWDHealthKitGymKitWorkoutEvent *_gymKitWorkoutEvent;
    HKPersistentTimer *_authorizationTimer;
}

@property(retain, nonatomic) HKPersistentTimer *authorizationTimer; // @synthesize authorizationTimer=_authorizationTimer;
@property(retain, nonatomic) HDAWDHealthKitGymKitWorkoutEvent *gymKitWorkoutEvent; // @synthesize gymKitWorkoutEvent=_gymKitWorkoutEvent;
- (void).cxx_destruct;
- (void)workoutEnded;
- (long long)_failureReasonForError:(id)arg1;
- (void)workoutFailedWithError:(id)arg1;
- (void)setFitnessMachineType:(unsigned long long)arg1 manufacturer:(id)arg2;
- (void)_recordTimeToAuthorize;
- (void)userIsAuthorized;
- (void)userBeganPairing;
- (void)_reset;
- (id)init;

@end

