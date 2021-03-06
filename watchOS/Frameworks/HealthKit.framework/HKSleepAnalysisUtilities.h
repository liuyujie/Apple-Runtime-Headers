//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HKSleepAnalysisUtilities : NSObject
{
}

+ (id)_aggregatedPeriodsForPeriodsBySource:(id)arg1 orderedSources:(id)arg2;
+ (id)_periodsBySourceForSamples:(id)arg1 calendar:(id)arg2;
+ (id)_samplesBySourceForSamples:(id)arg1;
+ (id)sleepAnalysisIntervalForStartDate:(id)arg1 endDate:(id)arg2 calendar:(id)arg3 stratOfDayTransform:(CDUnknownBlockType)arg4;
+ (id)sleepAnalysisForSleepDays:(id)arg1;
+ (id)sleepDaysFromQueryResult:(id)arg1 calendar:(id)arg2 startOfDayTransform:(CDUnknownBlockType)arg3 orderedSources:(id)arg4;
+ (id)sleepPeriodsFromSamples:(id)arg1 calendar:(id)arg2;
+ (void)categorizeSleepPeriods:(id)arg1 dateInterval:(id)arg2 calendar:(id)arg3;
+ (id)sortedSleepPeriodSegmentsFromSleepSamples:(id)arg1;
+ (id)dateIntervalBoundingSleepPeriods:(id)arg1;
+ (_Bool)findBedtimeAlarmAndUpdateSleepPeriods:(id)arg1 calendar:(id)arg2 startOfDayTransform:(CDUnknownBlockType)arg3;
+ (void)enumerateSleepPeriodsForAnalysis:(id)arg1 calendar:(id)arg2 dateInterval:(id)arg3 dateComponents:(id)arg4 analysisBlock:(CDUnknownBlockType)arg5;
+ (id)sleepPeriodSegmentsFromSleepSamples:(id)arg1 minimumInterSegmentTimeInterval:(double)arg2 categoryValue:(int)arg3;
+ (double)durationFromDateIntervals:(id)arg1;
+ (id)boundingDateIntervalsForDateIntervals:(id)arg1;
+ (id)filterSleepDays:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
+ (id)filterSleepPeriods:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
+ (id)filterSleepSamples:(id)arg1 categoryValue:(int)arg2;
+ (id)sleepAnalysisDateIntervalWithCalendar:(id)arg1 visibleRangeStartDate:(id)arg2 visibleRangeEndDate:(id)arg3 startOfDayTransform:(CDUnknownBlockType)arg4;

@end

