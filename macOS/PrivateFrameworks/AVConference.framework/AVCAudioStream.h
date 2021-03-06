//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VCMediaStreamDelegate.h"

@class AVCMediaStreamConfig, AVConferenceXPCClient, NSDictionary, NSObject<OS_dispatch_queue>, NSString, VCAudioStream;

@interface AVCAudioStream : NSObject <VCMediaStreamDelegate>
{
    AVConferenceXPCClient *_connection;
    id _delegate;
    VCAudioStream *_opaqueStream;
    AVCMediaStreamConfig *_configuration;
    NSDictionary *_capabilities;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

+ (id)capabilities;
@property(retain, nonatomic) NSDictionary *capabilities; // @synthesize capabilities=_capabilities;
@property(retain, nonatomic) AVCMediaStreamConfig *configuration; // @synthesize configuration=_configuration;
- (void)vcMediaStream:(id)arg1 updateFrequencyLevel:(id)arg2 isInputMeter:(BOOL)arg3;
- (void)vcMediaStream:(id)arg1 updateOutputFrequencyLevel:(id)arg2;
- (void)vcMediaStream:(id)arg1 updateInputFrequencyLevel:(id)arg2;
- (void)vcMediaStream:(id)arg1 didReceiveRTCPPackets:(id)arg2;
- (void)vcMediaStream:(id)arg1 didReceiveDTMFEventWithDigit:(BOOL)arg2;
- (void)vcMediaStreamDidRTCPTimeOut:(id)arg1;
- (void)vcMediaStreamDidRTPTimeOut:(id)arg1;
- (void)vcMediaStream:(id)arg1 didResumeStream:(BOOL)arg2 error:(id)arg3;
- (void)vcMediaStream:(id)arg1 didPauseStream:(BOOL)arg2 error:(id)arg3;
- (void)vcMediaStreamDidStop:(id)arg1;
- (void)vcMediaStream:(id)arg1 didStartStream:(BOOL)arg2 error:(id)arg3;
- (void)deregisterBlocksForDelegateNotifications;
- (void)registerBlocksForDelegateNotifications;
@property(nonatomic, getter=isOutputFrequencyMeteringEnabled) BOOL outputFrequencyMeteringEnabled;
@property(nonatomic, getter=isInputFrequencyMeteringEnabled) BOOL inputFrequencyMeteringEnabled;
@property(nonatomic) float volume;
@property(nonatomic) double rtcpSendIntervalSec;
@property(nonatomic) double rtcpTimeOutIntervalSec;
@property(nonatomic) double rtpTimeOutIntervalSec;
@property(nonatomic, getter=isRTCPTimeOutEnabled) BOOL rtcpTimeOutEnabled;
@property(nonatomic, getter=isRTPTimeOutEnabled) BOOL rtpTimeOutEnabled;
@property(nonatomic, getter=isRTCPEnabled) BOOL rtcpEnabled;
@property(nonatomic) long long direction;
- (void)startSynchronizeWithStream:(long long)arg1;
- (void)stopContinuousDTMF;
- (void)startContinuousDTMFWithDigit:(BOOL)arg1 volume:(unsigned char)arg2;
- (void)sendDTMFDigitString:(id)arg1 withVolume:(unsigned char)arg2 duration:(unsigned short)arg3 interval:(unsigned short)arg4;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)start;
- (BOOL)configure:(id)arg1 error:(id *)arg2;
@property(nonatomic) id <AVCAudioStreamDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)terminateSession;
- (void)refreshLoggingParameters;
- (id)initWithLocalAddress:(id)arg1 networkSockets:(id)arg2 IDSDestination:(id)arg3 isOriginator:(BOOL)arg4 callID:(id)arg5 error:(id *)arg6;
- (id)initWithIDSDestination:(id)arg1 isOriginator:(BOOL)arg2 callID:(id)arg3 error:(id *)arg4;
- (id)initWithIDSDestination:(id)arg1 isOriginator:(BOOL)arg2 error:(id *)arg3;
- (id)initWithNetworkSockets:(id)arg1 isOriginator:(BOOL)arg2 callID:(id)arg3 error:(id *)arg4;
- (id)initWithNetworkSockets:(id)arg1 isOriginator:(BOOL)arg2 error:(id *)arg3;
- (id)initWithLocalAddress:(id)arg1 isOriginator:(BOOL)arg2 callID:(id)arg3 error:(id *)arg4;
- (id)initWithLocalAddress:(id)arg1 isOriginator:(BOOL)arg2 error:(id *)arg3;
- (id)initWithLocalAddress:(id)arg1 callID:(id)arg2 error:(id *)arg3;
- (id)initWithLocalAddress:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

