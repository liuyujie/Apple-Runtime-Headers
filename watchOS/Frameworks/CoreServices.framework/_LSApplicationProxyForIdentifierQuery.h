//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreServices/_LSBundleQuery.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _LSApplicationProxyForIdentifierQuery : _LSBundleQuery
{
    NSString *_identifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)alwaysAllowedBundleIdentifiers;
+ (id)queryWithIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)_requiresDatabaseMappingEntitlement;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end

