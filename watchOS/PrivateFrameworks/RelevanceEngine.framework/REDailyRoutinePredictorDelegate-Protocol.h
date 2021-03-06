//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class REDailyRoutinePredictor;

@protocol REDailyRoutinePredictorDelegate <NSObject>

@optional
- (void)dailyRoutinePredictorDidEndEveningRoutine:(REDailyRoutinePredictor *)arg1;
- (void)dailyRoutinePredictorDidBeginEveningRoutine:(REDailyRoutinePredictor *)arg1;
- (void)dailyRoutinePredictorDidEndMorningRoutine:(REDailyRoutinePredictor *)arg1;
- (void)dailyRoutinePredictorDidBeginMorningRoutine:(REDailyRoutinePredictor *)arg1;
- (void)dailyRoutinePredictorDidUpdatedPredictedRoutines:(REDailyRoutinePredictor *)arg1;
@end

