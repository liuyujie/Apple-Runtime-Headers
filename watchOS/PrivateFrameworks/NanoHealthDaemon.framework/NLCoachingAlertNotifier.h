//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NLActivityAchievementDefinitionAlertObserver.h"
#import "NLActivityCarouselServiceProvider.h"
#import "NLActivityCoachingAlertObserver.h"
#import "NLActivitySedentaryAlertObserver.h"

@class NSMutableSet<NLActivityAchievementDefinitionAlertObserver>, NSMutableSet<NLActivityCarouselServiceProvider>, NSMutableSet<NLActivityCoachingAlertObserver>, NSMutableSet<NLActivitySedentaryAlertObserver>, NSObject<OS_dispatch_queue>, NSString;

@interface NLCoachingAlertNotifier : NSObject <NLActivitySedentaryAlertObserver, NLActivityCoachingAlertObserver, NLActivityAchievementDefinitionAlertObserver, NLActivityCarouselServiceProvider>
{
    NSMutableSet<NLActivitySedentaryAlertObserver> *_sedentaryObservers;
    NSMutableSet<NLActivityCoachingAlertObserver> *_coachingObservers;
    NSMutableSet<NLActivityAchievementDefinitionAlertObserver> *_achievementDefinitionAlertObservers;
    NSMutableSet<NLActivityCarouselServiceProvider> *_carouselServiceObservers;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)fetchWellnessComplicationOnCurrentClockFaceWithCompletion:(CDUnknownBlockType)arg1;
- (void)showAchievementDefinitionAlertForIdentifier:(id)arg1;
- (void)showCoachingAlertRequests:(id)arg1;
- (void)hideSedentaryActivityAlert;
- (void)showSedentaryAlertOfType:(int)arg1 withTimeoutDate:(id)arg2 withActiveHourCount:(int)arg3 withTotalCount:(int)arg4 wheelchairUser:(_Bool)arg5 experimentInstance:(id)arg6;
- (void)unregisterForActivityAlerts:(id)arg1;
- (void)registerForActivityAlerts:(id)arg1 notificationTypes:(unsigned int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
