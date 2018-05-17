//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMCSOperationStateTimeRange.h"

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface MMCSOperationStateTimeRange : NSObject <MMCSOperationStateTimeRange>
{
    unsigned int _operationState;
    NSDate *_startDate;
    double _duration;
}

+ (id)describedSortedRanges:(id)arg1;
+ (id)descriptionWithOperationState:(unsigned int)arg1 absoluteStart:(double)arg2 duration:(double)arg3;
+ (id)stringForOperationState:(unsigned int)arg1;
@property(readonly) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly) unsigned int operationState; // @synthesize operationState=_operationState;
- (void).cxx_destruct;
@property(readonly) double relativeStart;
@property(readonly) double absoluteStop;
- (int)compareStopTime:(id)arg1;
- (int)compareStartTime:(id)arg1;
@property(readonly) double executing;
@property(readonly) double queueing;
@property(readonly) double absoluteStart;
@property(readonly, copy) NSString *description;
- (id)initWithOperationState:(unsigned int)arg1 startDate:(id)arg2 duration:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
