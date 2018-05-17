//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCalendar, NSDate, NSObject<OS_dispatch_queue>, NSSet;

@interface NLMonthlyChallengeEngine : NSObject
{
    NSDate *_currentDateOverride;
    NSCalendar *_currentCalendarOverride;
    _Bool _monthlyChallengeCreationInProgress;
    NSSet *_blocksToRunWhenCreationFinishes;
    id <NLMonthlyChallengeEngineDataSource> _dataProvider;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (_Bool)isChallengeProgressInDays:(id)arg1;
+ (_Bool)isChallengeProgressInAverages:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) id <NLMonthlyChallengeEngineDataSource> dataProvider; // @synthesize dataProvider=_dataProvider;
- (void).cxx_destruct;
- (id)currentCalendar;
- (id)currentDate;
- (void)setCurrentCalendarOverride:(id)arg1;
- (void)setCurrentDateOverride:(id)arg1;
- (id)_achievementDefinitionForDaysDoublingMoveGoal:(id)arg1 referenceProgressNumber:(id)arg2;
- (id)_achievementDefinitionForTotalWorkouts:(id)arg1 referenceProgressNumber:(id)arg2;
- (id)_achievementDefinitionForDaysMeetingStandGoal:(id)arg1 referenceProgressNumber:(id)arg2;
- (id)_achievementDefinitionForDaysMeetingExerciseGoal:(id)arg1 referenceProgressNumber:(id)arg2;
- (id)_achievementDefinitionForDaysMeetingMoveGoal:(id)arg1 referenceProgressNumber:(id)arg2;
- (id)_achievementDefinitionForDaysMeetingAllGoals:(id)arg1 referenceProgressNumber:(id)arg2;
- (id)_monthlyAchievementDefinitionTemplateForCurrentMonthWithProgressExpression:(id)arg1 goalExpression:(id)arg2 referenceProgress:(id)arg3;
- (id)_achievementDefinitionForCurrentMonthWithError:(id *)arg1;
- (unsigned int)_randomAvailableChallengeType;
- (id)_definitionForChallengeType:(unsigned int)arg1 error:(id *)arg2;
- (id)availableChallengeTypes;
- (unsigned int)_challengeTypeFromString:(id)arg1;
- (_Bool)_isChallengeOfTypeAvailable:(unsigned int)arg1;
- (unsigned int)_challengeTypeSuggestedOnDateUTC:(id)arg1;
- (unsigned int)_numberOfMoveGoalIncreasesDuringDateInterval:(id)arg1;
- (unsigned int)_achievementEarnedCountInDateInterval:(id)arg1 achievementIdentifier:(id)arg2;
- (id)_daysDoublingMoveGoalDefinitionForCurrentMonthWithError:(id *)arg1;
- (id)_totalWorkoutsDefinitionForCurrentMonthWithError:(id *)arg1;
- (id)_daysClosingStandRingDefinitionForCurrentMonthWithError:(id *)arg1;
- (id)_daysClosingExerciseRingDefinitionForCurrentMonthWithError:(id *)arg1;
- (id)_daysClosingMoveRingDefinitionForCurrentMonthWithError:(id *)arg1;
- (id)_daysClosingAllThreeRingsDefinitionForCurrentMonthWithError:(id *)arg1;
- (id)_numberValueForExpression:(id)arg1;
- (id)_dateIntervalForLastMonthInTargetCalendar:(id)arg1;
- (id)_dateIntervalForCurrentMonthUTC;
- (void)_persistAchievementDefinition:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_createMonthlyChallengeAchievementWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_isFirstWeekOfCurrentMonth;
- (_Bool)_monthlyChallengeAchievementExistsForCurrentMonth;
- (id)_definitionIdentifierForCurrentMonth;
- (void)_queue_deleteMonthlyChallengeWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_createMonthlyChallengeType:(id)arg1 goalOverride:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queue_runIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteMonthlyChallengeWithCompletion:(CDUnknownBlockType)arg1;
- (void)createMonthlyChallengeType:(id)arg1 goalOverride:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)runIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool canCreateNewMonthlyChallenge;
- (_Bool)_hasMinimumActiveDays;
- (_Bool)_achievementEnvironmentIsUpToDate;
- (void)_achievementDefinitionsChanged;
- (void)addBlockToBlocksToRunWhenCreationFinishes:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSSet *blocksToRunWhenCreationFinishes; // @synthesize blocksToRunWhenCreationFinishes=_blocksToRunWhenCreationFinishes;
@property(nonatomic) _Bool monthlyChallengeCreationInProgress; // @synthesize monthlyChallengeCreationInProgress=_monthlyChallengeCreationInProgress;
- (id)initWithDataSource:(id)arg1;

@end
