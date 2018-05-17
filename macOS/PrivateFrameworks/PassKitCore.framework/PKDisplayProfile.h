//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface PKDisplayProfile : NSObject <NSSecureCoding, NSCopying>
{
    long long _type;
}

+ (BOOL)supportsSecureCoding;
+ (Class)classForDisplayProfileType:(long long)arg1;
+ (id)displayProfileOfType:(long long)arg1 withDictionary:(id)arg2 bundle:(id)arg3;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;

@end
