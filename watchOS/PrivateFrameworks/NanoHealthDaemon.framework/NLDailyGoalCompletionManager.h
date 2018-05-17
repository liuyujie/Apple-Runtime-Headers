//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HDDailyActivityGoalDetectionDelegate.h"
#import "NLCoachingSubmanager.h"

@class FITypicalDayActivityModel, HDProfile, NLBridgeSettings, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface NLDailyGoalCompletionManager : NSObject <NLCoachingSubmanager, HDDailyActivityGoalDetectionDelegate>
{
    HDProfile *_profile;
    NLBridgeSettings *_bridgeSettings;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_goalTypesToFireByCacheIndex;
    FITypicalDayActivityModel *typicalDayModel;
    id <NLCoachingSubmanagerDelegate> coachingSubmanagerDelegate;
}

+ (id)submanagerIdentifier;
@property(nonatomic) __weak id <NLCoachingSubmanagerDelegate> coachingSubmanagerDelegate; // @synthesize coachingSubmanagerDelegate;
@property(nonatomic) __weak FITypicalDayActivityModel *typicalDayModel; // @synthesize typicalDayModel;
- (void).cxx_destruct;
- (long long)_cacheIndexForDate:(id)arg1;
- (_Bool)requiresCoachingConditionsOnRequests;
- (int)minimumRecentActiveDays;
- (_Bool)requiresMoveGoal;
- (void)coachingAlertRequestDidCompleteWithResponse:(id)arg1;
- (void)wristOnStateChangedTo:(_Bool)arg1;
- (void)coachingAlertRequestsWereProcessed:(id)arg1 acceptedRequests:(id)arg2;
- (id)coachingAlertRequestsForPollingReason:(unsigned int)arg1;
- (_Bool)alertsEnabled;
- (id)coachingAlertRequestsWhenForcedWithArguments:(id)arg1;
- (void)daemonAndCoachingManagerReady;
- (void)concludeRunWithSuccess:(_Bool)arg1 cacheIndex:(long long)arg2;
- (void)runDailyGoalCompletionDetectionForGoalType:(unsigned int)arg1 cacheIndex:(long long)arg2 previousValue:(double)arg3 currentValue:(double)arg4 goalValue:(double)arg5 shouldAlert:(_Bool)arg6 goalMetHandler:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (void)_queue_addGoalTypeToNotify:(unsigned int)arg1 cacheIndex:(long long)arg2;
- (void)_queue_addDailyGoalTypePreviouslyMet:(unsigned int)arg1 cacheIndex:(long long)arg2;
- (_Bool)_areGoalCompletionAlertsEnabled;
- (void)_queue_setGoalTypesMet:(unsigned int)arg1 forCacheIndex:(long long)arg2;
- (unsigned int)_queue_goalTypesMetForCacheIndex:(long long)arg1;
- (_Bool)_queue_isDailyGoalTypeMet:(unsigned int)arg1 cacheIndex:(long long)arg2;
- (void)_queue_addGoalTypeToDailyGoalTypesMet:(unsigned int)arg1 cacheIndex:(long long)arg2;
- (void)_queue_clearAllDailyGoalTypesMetForCacheIndex:(long long)arg1;
- (id)_queue_allGoalTypesMetForCacheIndex:(long long)arg1;
- (id)_userDefaultsDomain;
- (void)_queue_resetDailyGoalTypesMetCacheIndex:(long long)arg1;
- (id)initWithProfile:(id)arg1 bridgeSettings:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
