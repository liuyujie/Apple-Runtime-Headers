//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NLFirstGlanceEngineDataSource.h"

@class ACHAchievementStore, FITypicalDayActivityModel, HDProfile, NSString;

@interface NLFirstGlanceEngineDataSource : NSObject <NLFirstGlanceEngineDataSource>
{
    HDProfile *_profile;
    FITypicalDayActivityModel *_typicalDayModel;
    ACHAchievementStore *_achievementStore;
}

@property(nonatomic) __weak ACHAchievementStore *achievementStore; // @synthesize achievementStore=_achievementStore;
@property(nonatomic) __weak FITypicalDayActivityModel *typicalDayModel; // @synthesize typicalDayModel=_typicalDayModel;
@property(nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (id)allActivitySharingFriends;
- (double)projectedDayDuration;
- (id)activitySummariesDuringInterval:(id)arg1 calendar:(id)arg2;
- (id)yesterdayActivitySummary;
- (double)recommendedGoalInCaloriesForDate:(id)arg1;
- (id)workoutsCompletedDuringInterval:(id)arg1;
- (id)monthlyChallengeForDate:(id)arg1 calendar:(id)arg2;
- (id)achievementsCompletedOnDay:(id)arg1 calendar:(id)arg2;
- (id)achievementWithUniqueName:(id)arg1;
- (id)weeklySummaryInfoForDate:(id)arg1;
- (int)firstDayOfFitnessWeek;
- (id)initWithProfile:(id)arg1 typicalDayModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

