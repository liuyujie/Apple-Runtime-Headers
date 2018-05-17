//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate, NSNumber, NSUUID;

@interface CMSignificantElevationSample : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long fRecordId;
    NSUUID *fSourceId;
    NSDate *fStartDate;
    NSDate *fEndDate;
    NSNumber *fElevationAscended;
    NSNumber *fElevationDescended;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSNumber *elevationDescended; // @synthesize elevationDescended=fElevationDescended;
@property(readonly, nonatomic) NSNumber *elevationAscended; // @synthesize elevationAscended=fElevationAscended;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=fEndDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=fStartDate;
@property(readonly, nonatomic) NSUUID *sourceId; // @synthesize sourceId=fSourceId;
@property(readonly, nonatomic) unsigned long long recordId; // @synthesize recordId=fRecordId;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFilteredElevation:(const struct CLElevationChangeEntry *)arg1;
- (id)initWithSignificantElevation:(const struct CLSignificantElevation *)arg1;
- (id)initWithRecordId:(unsigned long long)arg1 sourceId:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 elevationAscended:(id)arg5 elevationDescended:(id)arg6;

@end
