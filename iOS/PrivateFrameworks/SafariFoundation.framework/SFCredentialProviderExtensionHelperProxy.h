//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SFCredentialProviderExtensionHelperProtocol.h"

@class NSXPCConnection;

@interface SFCredentialProviderExtensionHelperProxy : NSObject <SFCredentialProviderExtensionHelperProtocol>
{
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (void)removeCredentialIdentityStoreForApplication:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchCredentialIdentitiesMatchingDomains:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)replaceCredentialIdentitiesWithIdentities:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeAllCredentialIdentitiesWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeCredentialIdentities:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveCredentialIdentities:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getCredentialProviderExtensionStateWithCompletion:(CDUnknownBlockType)arg1;
- (id)_proxyObject;
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end
