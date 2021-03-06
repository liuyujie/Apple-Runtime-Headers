//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NAIdentifiable.h"

@class NSString;

@interface HFMediaAccessControlDescriptor : NSObject <NAIdentifiable>
{
    _Bool _accessRequiresPassword;
    unsigned long long _access;
    NSString *_accessPassword;
}

+ (id)na_identity;
+ (_Bool)accessClassificationSupportsPassword:(unsigned long long)arg1;
+ (id)descriptorWithAccess:(unsigned long long)arg1 requiresPassword:(_Bool)arg2 password:(id)arg3;
+ (id)defaultAccessControl;
@property(readonly, copy, nonatomic) NSString *accessPassword; // @synthesize accessPassword=_accessPassword;
@property(readonly, nonatomic) _Bool accessRequiresPassword; // @synthesize accessRequiresPassword=_accessRequiresPassword;
@property(readonly, nonatomic) unsigned long long access; // @synthesize access=_access;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool accessSupportsPassword;
- (id)init;
- (id)initWithAccess:(unsigned long long)arg1 requiresPassword:(_Bool)arg2 password:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

