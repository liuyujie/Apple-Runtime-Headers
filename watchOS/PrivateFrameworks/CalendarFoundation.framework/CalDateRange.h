//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CalDateRangeProtocol.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate, NSString;

@interface CalDateRange : NSObject <NSCopying, CalDateRangeProtocol, NSSecureCoding>
{
    NSDate *_startDate;
    NSDate *_endDate;
}

+ (_Bool)rangesIntersectWithStartDate1:(id)arg1 endDate1:(id)arg2 startDate2:(id)arg3 endDate2:(id)arg4 allowSinglePointIntersection:(_Bool)arg5;
+ (_Bool)rangesIntersectWithStartDate1:(id)arg1 endDate1:(id)arg2 startDate2:(id)arg3 endDate2:(id)arg4;
+ (_Bool)range:(id)arg1 intersectsRangeWithStartDate:(id)arg2 endDate:(id)arg3 allowSinglePointIntersection:(_Bool)arg4;
+ (_Bool)range:(id)arg1 intersectsRangeWithStartDate:(id)arg2 endDate:(id)arg3;
+ (_Bool)range:(id)arg1 intersectsRange:(id)arg2 allowSinglePointIntersection:(_Bool)arg3;
+ (_Bool)range:(id)arg1 intersectsRange:(id)arg2;
+ (_Bool)supportsSecureCoding;
+ (id)rangeByExpandingRange:(id)arg1 direction:(int)arg2 components:(id)arg3 calendar:(id)arg4;
+ (id)rangeByExpandingRange:(id)arg1 direction:(int)arg2 duration:(double)arg3;
+ (id)rangeByExpandingRange:(id)arg1 direction:(int)arg2 multiplier:(unsigned int)arg3;
+ (id)rangeWithRange:(id)arg1;
+ (id)rangeWithStartDate:(id)arg1 duration:(double)arg2;
+ (id)rangeWithStartDate:(id)arg1 endDate:(id)arg2;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (id)midnightsForRangeInTimeZoneString:(id)arg1;
- (id)_calculateMidnightsInCalendar:(id)arg1;
- (id)midpoint;
- (id)briefDescription;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)subtractRange:(id)arg1;
- (id)unionRange:(id)arg1;
- (id)intersectionWithRange:(id)arg1;
- (_Bool)intersectsRangeWithStartDate:(id)arg1 endDate:(id)arg2 allowSinglePointIntersection:(_Bool)arg3;
- (_Bool)intersectsRangeWithStartDate:(id)arg1 endDate:(id)arg2;
- (_Bool)intersectsRange:(id)arg1 allowSinglePointIntersection:(_Bool)arg2;
- (_Bool)intersectsRange:(id)arg1;
- (_Bool)containsRange:(id)arg1;
- (_Bool)containsDate:(id)arg1;
- (void)setStartDate:(id)arg1 duration:(double)arg2;
- (void)setStartDate:(id)arg1 endDate:(id)arg2;
- (void)setDuration:(double)arg1;
@property(readonly, nonatomic) double duration;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned int hash;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 duration:(double)arg2;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
