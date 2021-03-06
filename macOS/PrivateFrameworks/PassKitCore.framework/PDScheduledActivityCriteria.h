//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate, NSString;

@interface PDScheduledActivityCriteria : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_priorityKey;
    long long _gracePeriod;
    BOOL _requireMainsPower;
    BOOL _requireScreenSleep;
    BOOL _requireNetworkConnectivity;
    BOOL _repeating;
    NSDate *_startDate;
    NSDate *_endDate;
    double _repeatInterval;
    NSString *_reason;
}

+ (BOOL)supportsSecureCoding;
+ (id)maintenanceActivityCriteriaWithStartDate:(id)arg1;
+ (id)priorityActivityCriteriaWithStartDate:(id)arg1;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(nonatomic) double repeatInterval; // @synthesize repeatInterval=_repeatInterval;
@property(nonatomic, getter=isRepeating) BOOL repeating; // @synthesize repeating=_repeating;
@property(nonatomic) BOOL requireNetworkConnectivity; // @synthesize requireNetworkConnectivity=_requireNetworkConnectivity;
@property(nonatomic) BOOL requireScreenSleep; // @synthesize requireScreenSleep=_requireScreenSleep;
@property(nonatomic) BOOL requireMainsPower; // @synthesize requireMainsPower=_requireMainsPower;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (id)xpcActivityCriteria;
- (BOOL)isEqualToScheduledAcivityCriteria:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPriorityKey:(id)arg1 gracePeriod:(long long)arg2 startDate:(id)arg3;
- (id)init;

@end

