//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFMessageDispatcher.h"

@class HMDAdminEnforcementMessageFilter, HMDHomeManager, HMDMessageFilterChain, HMDSecureRemoteMessageFilter, HMDSecureRemoteMessageTransport, NSMutableArray, NSMutableDictionary;

@interface HMDCentralMessageDispatcher : HMFMessageDispatcher
{
    HMDMessageFilterChain *_messageFilterChain;
    HMDAdminEnforcementMessageFilter *_adminMsgFilter;
    HMFMessageDispatcher *_recvDispatcher;
    NSMutableDictionary *_remoteGateways;
    HMDSecureRemoteMessageFilter *_secureRemoteMessageFilter;
    HMFMessageDispatcher *_notificationDispatcher;
    HMDHomeManager *_homeManager;
    NSMutableArray *_relayedMessages;
}

+ (_Bool)isWhitelistedLocalMessage:(id)arg1;
+ (id)defaultDispatcher;
+ (id)destinationWithTarget:(id)arg1 userID:(id)arg2 destination:(id)arg3 multicast:(_Bool)arg4;
@property(readonly, nonatomic) NSMutableArray *relayedMessages; // @synthesize relayedMessages=_relayedMessages;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) HMFMessageDispatcher *notificationDispatcher; // @synthesize notificationDispatcher=_notificationDispatcher;
@property(retain, nonatomic) HMDSecureRemoteMessageFilter *secureRemoteMessageFilter; // @synthesize secureRemoteMessageFilter=_secureRemoteMessageFilter;
@property(retain, nonatomic) NSMutableDictionary *remoteGateways; // @synthesize remoteGateways=_remoteGateways;
@property(retain, nonatomic) HMFMessageDispatcher *recvDispatcher; // @synthesize recvDispatcher=_recvDispatcher;
@property(retain, nonatomic) HMDAdminEnforcementMessageFilter *adminMsgFilter; // @synthesize adminMsgFilter=_adminMsgFilter;
@property(readonly, nonatomic) HMDMessageFilterChain *messageFilterChain; // @synthesize messageFilterChain=_messageFilterChain;
- (void).cxx_destruct;
- (void)_handleRelayedIDSMessage:(id)arg1 handledLocally:(_Bool)arg2;
- (void)relayInternalMessage:(id)arg1;
- (void)_handleLocalMessage:(id)arg1 targetUUID:(id)arg2;
- (_Bool)_checkAuthorizationForMessage:(id)arg1 errorReason:(id *)arg2;
- (void)dispatchMessage:(id)arg1;
- (void)deregisterReceiver:(id)arg1;
- (void)deregisterForMessage:(id)arg1 receiver:(id)arg2;
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 messageHandler:(CDUnknownBlockType)arg3;
- (void)configureHTTPTransport:(id)arg1;
- (void)disableMessageServer;
- (void)enableMessageServer;
- (id)httpMessageTransport;
- (void)configureHomeManager:(id)arg1;
- (void)configureNotificationDispatcher:(id)arg1;
- (void)reset;
- (void)updateLocalAdministratorName;
@property(readonly, nonatomic) HMDSecureRemoteMessageTransport *secureRemoteTransport;
- (void)dealloc;
- (id)initWithSecureRemoteTransport:(id)arg1 messageFilterChain:(id)arg2;
- (void)redispatchMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 toResidentForHomeWithUUID:(id)arg4;
- (void)relayMessage:(id)arg1;
- (id)prepareAnswerForRequestedCapabilities:(id)arg1;
- (void)removeHome:(id)arg1;
- (void)updateHome:(id)arg1 configurationVersion:(int)arg2;
- (void)electDeviceForUser:(id)arg1 destination:(id)arg2 deviceCapabilities:(id)arg3 responseTimeout:(double)arg4 responseQueue:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;
- (void)sendSecureMessage:(id)arg1 target:(id)arg2 userID:(id)arg3 destination:(id)arg4 responseQueue:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;
- (id)remoteAccessDeviceForHome:(id)arg1;
- (void)_setRemoteAccessDevice:(id)arg1 forHome:(id)arg2 sendNotification:(_Bool)arg3;
- (void)setRemoteAccessDevice:(id)arg1 forHome:(id)arg2;
- (void)setCompanionDevice:(id)arg1 forHome:(id)arg2;
- (void)handleSecureSessionError:(id)arg1;

@end

