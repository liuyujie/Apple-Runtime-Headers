//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate, NSDateInterval, NSPredicate;

@interface ATXActionCriteria : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _lockScreenEligible;
    NSDate *_startDate;
    NSDate *_endDate;
    NSPredicate *_predicate;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(readonly, nonatomic) _Bool lockScreenEligible; // @synthesize lockScreenEligible=_lockScreenEligible;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)json;
- (_Bool)isRelevant:(id)arg1;
@property(readonly, nonatomic) NSDateInterval *dateInterval;
- (id)init;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 lockScreenEligible:(_Bool)arg3 predicate:(id)arg4;

@end

