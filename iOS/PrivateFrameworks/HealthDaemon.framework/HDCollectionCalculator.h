//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKStatisticsCollection;

@interface HDCollectionCalculator : NSObject
{
    HKStatisticsCollection *_collection;
    long long _currentPeriodIndex;
    _Bool _bucketSetup;
    _Bool _shouldComputeEndDate;
    _Bool _detailBySource;
    _Bool _firstValueAdded;
    double _currentStartDate;
    double _currentEndDate;
    unsigned long long _currentBucket;
}

@property(readonly, nonatomic) _Bool firstValueAdded; // @synthesize firstValueAdded=_firstValueAdded;
@property(readonly, nonatomic) unsigned long long currentBucket; // @synthesize currentBucket=_currentBucket;
@property(readonly, nonatomic) double currentEndDate; // @synthesize currentEndDate=_currentEndDate;
@property(readonly, nonatomic) double currentStartDate; // @synthesize currentStartDate=_currentStartDate;
@property(nonatomic) _Bool detailBySource; // @synthesize detailBySource=_detailBySource;
- (void).cxx_destruct;
- (double)endDateForBucket:(unsigned long long)arg1;
- (double)startDateForBucket:(unsigned long long)arg1;
- (void)_didAddFirstValue;
- (_Bool)advanceBucket;
- (_Bool)hasData;
- (void)addValue:(double)arg1 startTime:(double)arg2 endTime:(double)arg3 sourceID:(long long)arg4;
- (void)setStartTime:(double)arg1 endTime:(double)arg2;
- (id)initWithStatisticsCollection:(id)arg1;
- (id)initForSingleStatistics;

@end
