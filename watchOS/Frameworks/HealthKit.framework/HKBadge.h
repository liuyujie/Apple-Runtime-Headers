//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSNumber, NSString;

@interface HKBadge : NSObject <NSCopying, NSSecureCoding>
{
    int _count;
    int _type;
}

+ (_Bool)supportsSecureCoding;
+ (id)numberBadgeWithCount:(int)arg1;
+ (id)errorBadge;
+ (id)indicatorBadge;
+ (id)zeroBadge;
+ (id)badgeFromKeyValueRepresentation:(id)arg1;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) id <NSObject> value;
@property(readonly, nonatomic, getter=isZeroBadge) _Bool zeroBadge;
@property(readonly, nonatomic, getter=isNumberBadge) _Bool numberBadge;
@property(readonly, nonatomic, getter=isIndicatorBadge) _Bool indicatorBadge;
@property(readonly, nonatomic, getter=isErrorBadge) _Bool errorBadge;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)badgeByIncrementingByCount:(int)arg1;
- (id)badgeByAggregatingWithBadge:(id)arg1;
- (id)initWithType:(int)arg1 count:(int)arg2;
@property(readonly, copy, nonatomic) NSString *stringValue;
@property(readonly, copy, nonatomic) NSNumber *keyValueRepresentation;

@end
