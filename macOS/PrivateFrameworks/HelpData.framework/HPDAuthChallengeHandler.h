//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HPDAuthenticationClient, HPDEnvironmentConfigClient, NSData, NSString;

@interface HPDAuthChallengeHandler : NSObject
{
    HPDEnvironmentConfigClient *_envConfigClient;
    HPDAuthenticationClient *_authClient;
    NSData *_trustExceptions;
    NSString *_serviceName;
    long long _resourceType;
    id <HPDAuthClientProtocol> _delegate;
}

@property(retain, nonatomic) HPDAuthenticationClient *authClient; // @synthesize authClient=_authClient;
@property __weak id <HPDAuthClientProtocol> delegate; // @synthesize delegate=_delegate;
@property long long resourceType; // @synthesize resourceType=_resourceType;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(copy) NSData *trustExceptions; // @synthesize trustExceptions=_trustExceptions;
- (void).cxx_destruct;
- (id)envConfigClient;
- (void)authenticateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_resolveServerTrustChallenge:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleServerTrustChallenge:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithServiceName:(id)arg1;

@end

