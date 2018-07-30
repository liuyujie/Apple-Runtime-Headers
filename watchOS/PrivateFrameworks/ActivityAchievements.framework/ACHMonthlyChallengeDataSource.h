//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACHActivitySummaryUtility, ACHWorkoutUtility;

@interface ACHMonthlyChallengeDataSource : NSObject
{
    ACHWorkoutUtility *_workoutUtility;
    ACHActivitySummaryUtility *_activitySummaryUtility;
}

@property(nonatomic) __weak ACHActivitySummaryUtility *activitySummaryUtility; // @synthesize activitySummaryUtility=_activitySummaryUtility;
@property(nonatomic) __weak ACHWorkoutUtility *workoutUtility; // @synthesize workoutUtility=_workoutUtility;
- (void).cxx_destruct;
- (int)numberOfWorkoutsCompletedDuringDateInterval:(id)arg1;
- (int)numberOfDaysDoublingMoveGoalDuringDateComponentInterval:(id)arg1;
- (int)numberOfAllRingsClosedDuringDateComponentInterval:(id)arg1;
- (int)numberOfStandRingsClosedDuringDateComponentInterval:(id)arg1;
- (int)numberOfExerciseRingsClosedDuringDateComponentInterval:(id)arg1;
- (int)numberOfMoveRingsClosedDuringDateComponentInterval:(id)arg1;
- (double)walkingRunningDistanceDuringDateComponentInterval:(id)arg1;
- (double)exerciseMinutesDuringDateComponentInterval:(id)arg1;
- (double)caloriesDuringDateComponentInterval:(id)arg1;
- (double)valueForMonthlyChallengeType:(unsigned int)arg1 forDateComponentInterval:(id)arg2 inCalendar:(id)arg3;
- (id)initWithActivitySummaryUtility:(id)arg1 workoutUtility:(id)arg2;

@end
