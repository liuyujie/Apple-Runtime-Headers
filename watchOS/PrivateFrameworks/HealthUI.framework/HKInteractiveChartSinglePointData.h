//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HKGraphSeriesChartData.h"

@class HKUnit, NSDateComponents, NSString;

@interface HKInteractiveChartSinglePointData : NSObject <HKGraphSeriesChartData>
{
    _Bool _representsRange;
    HKUnit *_unit;
    int _recordCount;
    NSDateComponents *_statisticsInterval;
    double _value;
    double _minValue;
    double _maxValue;
}

@property(retain, nonatomic) NSDateComponents *statisticsInterval; // @synthesize statisticsInterval=_statisticsInterval;
@property(nonatomic) double maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) double minValue; // @synthesize minValue=_minValue;
@property(nonatomic) int recordCount; // @synthesize recordCount=_recordCount;
@property(nonatomic) _Bool representsRange; // @synthesize representsRange=_representsRange;
@property(retain, nonatomic) HKUnit *unit; // @synthesize unit=_unit;
@property(nonatomic) double value; // @synthesize value=_value;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
