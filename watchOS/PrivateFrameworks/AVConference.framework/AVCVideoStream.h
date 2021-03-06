//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VCMediaStreamDelegate.h"

@class AVCMediaStreamConfig, AVConferenceXPCClient, NSDictionary, NSObject<OS_dispatch_queue>, NSString, VCVideoStream;

@interface AVCVideoStream : NSObject <VCMediaStreamDelegate>
{
    AVConferenceXPCClient *_connection;
    AVCMediaStreamConfig *_configuration;
    id _delegate;
    VCVideoStream *_opaqueStream;
    int _streamToken;
    NSDictionary *_capabilities;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

+ (id)capabilities;
+ (id)extractClientUplinkQualityInfoDictionary:(id)arg1;
+ (id)extractClientDownlinkQualityInfoDictionary:(id)arg1;
@property(retain, nonatomic) AVCMediaStreamConfig *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSDictionary *capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, nonatomic) int streamToken; // @synthesize streamToken=_streamToken;
- (void)vcMediaStream:(id)arg1 didUpdateVideoConfiguration:(_Bool)arg2 error:(id)arg3 dictionary:(id)arg4;
- (void)vcMediaStream:(id)arg1 uplinkQualityDidChange:(id)arg2;
- (void)vcMediaStream:(id)arg1 downlinkQualityDidChange:(id)arg2;
- (void)vcMediaStream:(id)arg1 didReceiveRTCPPackets:(id)arg2;
- (void)vcMediaStreamDidRTCPTimeOut:(id)arg1;
- (void)vcMediaStreamDidRTPTimeOut:(id)arg1;
- (void)vcMediaStream:(id)arg1 didResumeStream:(_Bool)arg2 error:(id)arg3;
- (void)vcMediaStream:(id)arg1 didPauseStream:(_Bool)arg2 error:(id)arg3;
- (void)vcMediaStreamDidStop:(id)arg1;
- (void)vcMediaStream:(id)arg1 didStartStream:(_Bool)arg2 error:(id)arg3;
- (void)deregisterBlocksForDelegateNotifications;
- (void)registerBlocksForDelegateNotifications;
@property(nonatomic) double rtcpSendIntervalSec;
@property(nonatomic) double rtcpTimeOutIntervalSec;
@property(nonatomic) double rtpTimeOutIntervalSec;
@property(nonatomic, getter=isRTCPTimeOutEnabled) _Bool rtcpTimeOutEnabled;
@property(nonatomic, getter=isRTPTimeOutEnabled) _Bool rtpTimeOutEnabled;
@property(nonatomic, getter=isRTCPEnabled) _Bool rtcpEnabled;
@property(nonatomic) int direction;
- (void)requestLastDecodedFrame;
- (id)getStats;
- (void)updateVideoConfiguration:(id)arg1;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)start;
- (_Bool)configure:(id)arg1 error:(id *)arg2;
- (void)refreshLoggingParameters;
@property(nonatomic) id <AVCVideoStreamDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)terminateSession;
- (id)initWithLocalAddress:(id)arg1 networkSockets:(id)arg2 IDSDestination:(id)arg3 callID:(id)arg4 error:(id *)arg5;
- (id)initWithIDSDestination:(id)arg1 callID:(id)arg2 error:(id *)arg3;
- (id)initWithNetworkSockets:(id)arg1 callID:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

