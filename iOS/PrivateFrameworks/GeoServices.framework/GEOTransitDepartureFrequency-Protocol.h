//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@protocol GEOTransitDepartureFrequency <NSObject>
@property(readonly, nonatomic) long long maxFrequency;
@property(readonly, nonatomic) long long minFrequency;
@property(readonly, nonatomic) long long displayFrequency;
@property(readonly, nonatomic) _Bool isEstimate;
@property(readonly, nonatomic) long long frequencyType;
@property(readonly, nonatomic) double frequencyForSorting;
@property(readonly, nonatomic) NSDate *lastTimeInFrequency;
@property(readonly, nonatomic) NSDate *firstTimeInFrequency;
- (_Bool)isValidAtDate:(NSDate *)arg1;
@end

