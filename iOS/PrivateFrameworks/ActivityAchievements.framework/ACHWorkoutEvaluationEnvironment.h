//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACHWorkoutEvaluationWorkoutProperties;

@interface ACHWorkoutEvaluationEnvironment : NSObject
{
    ACHWorkoutEvaluationWorkoutProperties *_workout;
    unsigned long long _numberOfFirstPartyWorkoutsOver5MinutesWithType;
    unsigned long long _numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek;
    double _bestKilocaloriesForType;
}

@property(readonly, nonatomic) double bestKilocaloriesForType; // @synthesize bestKilocaloriesForType=_bestKilocaloriesForType;
@property(readonly, nonatomic) unsigned long long numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek; // @synthesize numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek=_numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek;
@property(readonly, nonatomic) unsigned long long numberOfFirstPartyWorkoutsOver5MinutesWithType; // @synthesize numberOfFirstPartyWorkoutsOver5MinutesWithType=_numberOfFirstPartyWorkoutsOver5MinutesWithType;
@property(readonly, nonatomic) ACHWorkoutEvaluationWorkoutProperties *workout; // @synthesize workout=_workout;
- (void).cxx_destruct;
- (id)initWithWorkout:(id)arg1 numberOfFirstPartyWorkoutsOver5MinutesWithType:(unsigned long long)arg2 numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek:(unsigned long long)arg3 bestKilocaloriesForType:(double)arg4;

@end
