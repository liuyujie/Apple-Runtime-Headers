//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class HKMedicalDate;

@interface HKMedicalDateInterval : NSObject <NSSecureCoding, NSCopying>
{
    HKMedicalDate *_startDate;
    HKMedicalDate *_endDate;
}

+ (_Bool)supportsSecureCoding;
+ (id)medicalDateIntervalWithStartDate:(id)arg1 endDate:(id)arg2 error:(out id *)arg3;
+ (id)medicalDateIntervalWithEndDate:(id)arg1;
+ (id)medicalDateIntervalWithStartDate:(id)arg1;
@property(readonly, copy, nonatomic) HKMedicalDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, copy, nonatomic) HKMedicalDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)_initWithStartDate:(id)arg1 endDate:(id)arg2;

@end

