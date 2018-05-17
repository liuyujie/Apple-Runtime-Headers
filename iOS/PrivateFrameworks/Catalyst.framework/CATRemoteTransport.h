//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Catalyst/CATTransport.h>

#import "CATRemoteConnectionDelegate.h"

@class CATRemoteConnection, NSMutableDictionary, NSString;

@interface CATRemoteTransport : CATTransport <CATRemoteConnectionDelegate>
{
    CATRemoteConnection *mConnection;
    NSMutableDictionary *mOperationByUUID;
    _Bool mConnectionHasOpened;
    id <CATRemoteTransportDelegate> _remoteTransportDelegate;
}

+ (void)createRemoteTransportPairWithTransport:(id *)arg1 andTransport:(id *)arg2;
+ (id)new;
@property(nonatomic) __weak id <CATRemoteTransportDelegate> remoteTransportDelegate; // @synthesize remoteTransportDelegate=_remoteTransportDelegate;
- (void).cxx_destruct;
- (void)remoteTransportSendMessageOperation:(id)arg1 sendData:(id)arg2;
- (void)connectionDidClose:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didInterruptWithError:(id)arg2;
- (void)connection:(id)arg1 didFailToSendData:(id)arg2 userInfo:(id)arg3 error:(id)arg4;
- (void)connection:(id)arg1 didSendData:(id)arg2 userInfo:(id)arg3;
- (void)connectionDidSecure:(id)arg1;
- (void)connection:(id)arg1 encounteredTrustDecisionWhileTryingToSecure:(id)arg2;
- (void)connectionWillSecure:(id)arg1;
- (void)setName:(id)arg1;
- (id)name;
- (id)operationToSendMessage:(id)arg1;
- (void)invalidateConnection;
- (void)suspendConnection;
- (void)resumeConnection;
@property(readonly, nonatomic) struct __SecTrust *peerTrust;
- (id)initWithRemoteConnection:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
