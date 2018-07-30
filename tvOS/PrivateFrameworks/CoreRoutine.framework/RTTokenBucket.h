//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RTTokenBucket : NSObject
{
    double _fillRate;
    double _capacity;
    double _operationCost;
    double _tokenBucket;
    double _lastArrivalTime;
    double _totalInterArrivalTime;
    double _wastedTokens;
    double _totalTokensGenerated;
    double _totalTokensConsumed;
    unsigned long long _totalOperations;
    unsigned long long _operationsAllowed;
    double _interArrivalTime;
    double _lastBucketFill;
}

@property(nonatomic) double lastBucketFill; // @synthesize lastBucketFill=_lastBucketFill;
@property(nonatomic) double interArrivalTime; // @synthesize interArrivalTime=_interArrivalTime;
- (void)dumpStatistics;
- (void)reset;
- (unsigned long long)countOfOperationsAllowedWithCost:(double)arg1;
- (unsigned long long)countOfOperationsAllowed;
- (double)timeIntervalUntilOperationAllowedWithCost:(double)arg1;
- (double)timeIntervalUntilOperationAllowed;
- (_Bool)operationAllowed;
- (_Bool)operationAllowedWithCost:(double)arg1;
- (_Bool)_consumeTokens:(unsigned long long)arg1;
- (void)_replenishTokens;
- (id)initWithFillRate:(double)arg1 capacity:(double)arg2 initialAllocation:(double)arg3;
- (id)initWithFillRate:(double)arg1 capacity:(double)arg2;
- (id)init;

@end
