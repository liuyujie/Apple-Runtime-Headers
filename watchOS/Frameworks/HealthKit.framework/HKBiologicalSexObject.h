//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface HKBiologicalSexObject : NSObject <NSCopying, NSSecureCoding>
{
    int _biologicalSex;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) int biologicalSex; // @synthesize biologicalSex=_biologicalSex;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithBiologicalSex:(int)arg1;

@end

