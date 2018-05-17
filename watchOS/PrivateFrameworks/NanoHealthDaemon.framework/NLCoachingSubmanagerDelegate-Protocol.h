//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKActivitySummary, NLCoachingPreferences, NSCalendar, NSDate, NSString;

@protocol NLCoachingSubmanagerDelegate <NSObject>
- (NSDate *)currentDate;
- (NSCalendar *)currentCalendar;
- (void)createMonthlyChallenge;
- (_Bool)canCreateNewMonthlyChallenge;
- (HKActivitySummary *)currentActivitySummary;
- (NLCoachingPreferences *)coachingPreferences;
- (NSDate *)firstOnWristTodayDate;
- (NSDate *)mostRecentOnWristDateForSubmanager:(id <NLCoachingSubmanager>)arg1;
- (void)cancelScheduledTaskForSubmanager:(id <NLCoachingSubmanager>)arg1 withIdentifier:(NSString *)arg2;
- (_Bool)isTaskScheduledForSubmanager:(id <NLCoachingSubmanager>)arg1 withIdentifier:(NSString *)arg2;
- (void)scheduleTaskForSubmanager:(id <NLCoachingSubmanager>)arg1 withIdentifier:(NSString *)arg2 atDate:(NSDate *)arg3;
- (void)requestPollForSubmanager:(id <NLCoachingSubmanager>)arg1;
@end
