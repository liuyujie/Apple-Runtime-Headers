//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSValue.h"

@interface CMTimeRangeAsValue : NSValue
{
    CDStruct_e83c9415 _timeRange;
}

+ (_Bool)supportsSecureCoding;
+ (id)valueWithCMTimeRange:(CDStruct_e83c9415)arg1;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToValue:(id)arg1;
- (id)description;
- (const char *)objCType;
- (void)getValue:(void *)arg1;
- (CDStruct_e83c9415)CMTimeRangeValue;

@end
