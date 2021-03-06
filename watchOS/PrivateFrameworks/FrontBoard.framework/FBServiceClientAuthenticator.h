//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"

@class NSString;

@interface FBServiceClientAuthenticator : NSObject <BSDescriptionProviding>
{
    NSString *_entitlement;
    unsigned int _credentials;
}

+ (id)_errorForCode:(int)arg1 process:(id)arg2 failedEntitlement:(id)arg3;
+ (_Bool)authenticateAuditToken:(CDStruct_6ad76789)arg1 forEntitlement:(id)arg2 error:(out id *)arg3;
+ (id)sharedForegroundUIAppClientAuthenticator;
+ (id)sharedUIAppClientAuthenticator;
+ (id)sharedSystemClientAuthenticator;
@property(readonly, nonatomic) unsigned int credentials; // @synthesize credentials=_credentials;
@property(readonly, copy, nonatomic) NSString *entitlement; // @synthesize entitlement=_entitlement;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (int)_authenticateProcessHandle:(id)arg1 entitlement:(id)arg2 error:(out id *)arg3 withResult:(CDUnknownBlockType)arg4;
- (int)authenticateAuditToken:(CDStruct_6ad76789 *)arg1 forEntitlement:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (int)authenticateClient:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (int)authenticateAuditToken:(CDStruct_6ad76789 *)arg1 withResult:(CDUnknownBlockType)arg2;
- (_Bool)authenticateAuditToken:(id)arg1 error:(out id *)arg2;
- (_Bool)authenticateAuditToken:(id)arg1;
- (_Bool)authenticateClient:(id)arg1 error:(out id *)arg2;
- (_Bool)authenticateClient:(id)arg1;
- (id)initWithEntitlement:(id)arg1 additionalCredentials:(unsigned int)arg2;
- (id)initWithCredentials:(unsigned int)arg1;
- (id)initWithEntitlement:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

