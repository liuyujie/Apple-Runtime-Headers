//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VCVideoStreamRateControlProtocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VCVideoStreamOWRDLossEventRateControl : NSObject <VCVideoStreamRateControlProtocol>
{
    double _packetLossRate;
    double _roundTripTime;
    double _firstReceiveTime;
    double _shortAverageLag;
    double _longAverageLag;
    double _owrd;
    unsigned int _firstSendTimestamp;
    unsigned int _previousSendTimestamp;
    unsigned int _previousTimestampDiff;
    int _sendTimestampWrappedAround;
    _Bool _lossEventBuffer[4];
    int _lossEventBufferIndex;
    double _lastLossEventTime;
    double _rampUpFrozenTime;
    double _rampUpFrozenDuration;
    double _rampDownOWRDThreshold;
    double _rampDownLossRateThreshold;
    double _rampDownLossEventBitrateThreshold;
    double _rampDownLossEventCountThreshold;
    double _rampUpNoLossEventDurationRatio;
    double _rampUpStatusRateLimitedThreshold;
    int _rampUpStatus;
    int _state;
    double _rateControlTime;
    unsigned int _targetBitrate;
    unsigned int _averageReceivedBitrate;
    unsigned short _currentTierIndex;
    unsigned short _minTierIndex;
    unsigned short _maxTierIndex;
    double _rateControlInterval;
}

@property(nonatomic) double rateControlInterval; // @synthesize rateControlInterval=_rateControlInterval;
@property(readonly, nonatomic) double owrd; // @synthesize owrd=_owrd;
@property(readonly, nonatomic) unsigned int targetBitrate; // @synthesize targetBitrate=_targetBitrate;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
- (id)className;
- (void)calculateOWRDWithTimestamp:(unsigned int)arg1 sampleRate:(unsigned int)arg2 time:(double)arg3;
- (void)resetLossEventBuffer;
- (int)lossEventCountThresholdForBitrate:(unsigned int)arg1;
- (int)lossEventCount;
- (void)updatePacketLossRate:(double)arg1 time:(double)arg2;
- (_Bool)shouldRampUp;
- (_Bool)shouldRampDown;
- (unsigned short)rampDownTier;
- (unsigned short)rampUpTier;
- (void)stateEnter;
- (void)stateExit;
- (void)stateChange:(int)arg1;
@property(readonly, nonatomic) double nowrdAcc;
@property(readonly, nonatomic) double nowrdShort;
@property(readonly, nonatomic) double nowrd;
- (void)printRateControlFullInfoWithLogDump:(void *)arg1 time:(double)arg2 videoStall:(_Bool)arg3 videoFrozenDuration:(double)arg4 averageTargetBitrate:(unsigned int)arg5;
- (void)updateRTPReceiveWithTimestamp:(unsigned int)arg1 sampleRate:(unsigned int)arg2 time:(double)arg3;
- (void)doRateControlWithTime:(double)arg1 roundTripTime:(double)arg2 packetLossRate:(double)arg3 operatingTierIndex:(unsigned short)arg4 averageReceivedBitrate:(unsigned int)arg5;
@property(readonly, copy) NSString *description;
- (void)setMaxTierIndex:(unsigned short)arg1 minTierIndex:(unsigned short)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

