//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString, NSURL, NSUUID;

__attribute__((visibility("hidden")))
@interface AuthenticationSessionRequest : NSObject <NSSecureCoding, NSCopying>
{
    NSUUID *_uuid;
    NSURL *_url;
    NSString *_callbackURLScheme;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *callbackURLScheme; // @synthesize callbackURLScheme=_callbackURLScheme;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithUUID:(id)arg1 url:(id)arg2 callbackURLScheme:(id)arg3;

@end

