//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MCPeerID, NSArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface MCSession : NSObject
{
    _Bool _AWDLDisabled;
    id <MCSessionDelegate> _delegate;
    _Bool _preferNCMOverEthernet;
    id <MCSessionPrivateDelegate> _privateDelegate;
    unsigned int _gckPID;
    MCPeerID *_myPeerID;
    NSArray *_securityIdentity;
    long long _encryptionPreference;
    struct OpaqueGCKSession *_gckSession;
    struct OpaqueAGPSession *_agpSession;
    NSMutableDictionary *_peerIDMap;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSMutableDictionary *_peerStates;
    NSMutableDictionary *_connectionPendingPeerEvents;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    unsigned long long _stateHandle;
    NSString *_sessionID;
    unsigned long long _maxPeers;
}

+ (id)stringForMCSessionSendDataMode:(long long)arg1;
+ (id)stringForSessionState:(long long)arg1;
@property(nonatomic) unsigned long long maxPeers; // @synthesize maxPeers=_maxPeers;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned long long stateHandle; // @synthesize stateHandle=_stateHandle;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSMutableDictionary *connectionPendingPeerEvents; // @synthesize connectionPendingPeerEvents=_connectionPendingPeerEvents;
@property(retain, nonatomic) NSMutableDictionary *peerStates; // @synthesize peerStates=_peerStates;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(retain, nonatomic) NSMutableDictionary *peerIDMap; // @synthesize peerIDMap=_peerIDMap;
@property(nonatomic) unsigned int gckPID; // @synthesize gckPID=_gckPID;
@property(nonatomic) struct OpaqueAGPSession *agpSession; // @synthesize agpSession=_agpSession;
@property(nonatomic) struct OpaqueGCKSession *gckSession; // @synthesize gckSession=_gckSession;
@property(readonly, nonatomic) long long encryptionPreference; // @synthesize encryptionPreference=_encryptionPreference;
@property(readonly, nonatomic) NSArray *securityIdentity; // @synthesize securityIdentity=_securityIdentity;
@property(readonly, nonatomic) MCPeerID *myPeerID; // @synthesize myPeerID=_myPeerID;
- (void)syncLogMaxConnectedPeers;
- (void)syncLogConnectedPeers;
- (void)logSessionInfo;
- (id)startStreamWithName:(id)arg1 toPeer:(id)arg2 error:(id *)arg3;
- (void)syncStartStreamWithName:(id)arg1 toPeer:(id)arg2 mcFD:(int)arg3 isResource:(_Bool)arg4;
- (void)disconnect;
- (id)sendResourceAtURL:(id)arg1 withName:(id)arg2 toPeer:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) NSArray *connectedPeers;
- (_Bool)sendData:(id)arg1 toPeers:(id)arg2 withMode:(long long)arg3 error:(id *)arg4;
- (void)syncSendData:(id)arg1 toPeers:(id)arg2 withDataMode:(long long)arg3;
- (void)cancelConnectPeer:(id)arg1;
- (void)connectPeer:(id)arg1 withNearbyConnectionData:(id)arg2;
- (void)syncConnectPeer:(id)arg1 withConnectionData:(id)arg2;
- (_Bool)isEncryptionPreferenceCompatible:(long long)arg1;
- (void)nearbyConnectionDataForPeer:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)syncGetConnectionDataForPeerState:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithPeer:(id)arg1 securityIdentity:(id)arg2 encryptionPreference:(long long)arg3;
- (id)initWithPeer:(id)arg1;
- (id)init;
- (void)syncHandleNetworkEvent:(CDStruct_68f9d01f *)arg1 pid:(unsigned int)arg2 freeEventWhenDone:(_Bool *)arg3;
- (void)syncPeer:(id)arg1 changeStateTo:(long long)arg2 shouldForceCallback:(_Bool)arg3;
- (unsigned long long)syncConnectedPeersCount;
- (void)cancelOutgoingStream:(id)arg1 toPeer:(id)arg2;
- (void)syncCancelOutgoingStream:(id)arg1 toPeer:(id)arg2;
- (void)cancelIncomingStream:(id)arg1 fromPeer:(id)arg2;
- (void)syncCancelIncomingStream:(id)arg1 fromPeer:(id)arg2;
- (void)startConnectionWithIndirectPID:(unsigned int)arg1;
- (struct os_state_data_s *)syncStateCapture;
- (id)syncDetailedDescription;
- (void)syncCloseStreamsForPeer:(id)arg1;
- (void)syncCloseOutgoingStream:(id)arg1 forPeer:(id)arg2 state:(id)arg3 error:(id)arg4 shouldTriggerCancelProgress:(_Bool)arg5;
- (void)syncCloseIncomingStream:(id)arg1 forPeer:(id)arg2 state:(id)arg3 error:(id)arg4 reason:(int)arg5 shouldTriggerCancelProgress:(_Bool)arg6;
- (void)syncSendXDataConnectionBlobPushToPID:(unsigned int)arg1 connectionBlob:(id)arg2;
- (void)syncSendXDataPeerIDPushToPID:(unsigned int)arg1;
- (void)syncSendXDataStreamCloseFromReceiverToPID:(unsigned int)arg1 streamID:(unsigned int)arg2 closeReason:(unsigned short)arg3;
- (void)syncSendXDataStreamCloseFromSenderToPID:(unsigned int)arg1 streamID:(unsigned int)arg2 closeReason:(unsigned short)arg3;
- (void)syncSendXDataStreamOpenResponseToPID:(unsigned int)arg1 withRequestID:(unsigned int)arg2 streamID:(unsigned int)arg3;
- (void)syncHandleXDataDataPacket:(char *)arg1 packetSize:(int)arg2 forPeer:(id)arg3 state:(id)arg4;
- (id)stringForEncryptionPreference:(long long)arg1;
- (id)description;
@property(nonatomic) id <MCSessionPrivateDelegate> privateDelegate;
@property(nonatomic) __weak id <MCSessionDelegate> delegate;
@property(nonatomic) _Bool preferNCMOverEthernet;
@property(nonatomic, getter=isAWDLDisabled) _Bool AWDLDisabled;
- (void)setHeartbeatTimeout:(unsigned long long)arg1;
- (long long)connectedInterfacesForPeer:(id)arg1;
- (void)peerDidDeclineInvitation:(id)arg1;
- (void)closeDirectConnectionsWithPeer:(id)arg1;
- (void)setICETimeoutForced:(_Bool)arg1;

@end

