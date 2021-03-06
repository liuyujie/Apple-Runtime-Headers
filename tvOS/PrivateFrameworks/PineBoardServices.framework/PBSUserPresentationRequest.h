//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDictionary;

@interface PBSUserPresentationRequest : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _type;
    NSDictionary *_options;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 options:(id)arg2;

@end

