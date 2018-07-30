//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDate, NSString, TCSCallCenter;

@interface TCSCall : NSObject <NSSecureCoding>
{
    TCSCallCenter *_callCenter;
    float _lastLocalMeterLevel;
    float _lastRemoteMeterLevel;
    _Bool _isConnected;
    _Bool _isOutgoing;
    _Bool _isRemoteUplinkMuted;
    NSString *_contactIdentifier;
    NSString *_handleValue;
    int _status;
    NSString *_uniqueProxyIdentifier;
    int _disconnectedReason;
    NSDate *_dateAnsweredOrDialed;
    NSDate *_dateConnected;
    int _inputAudioPowerSpectrumToken;
    int _outputAudioPowerSpectrumToken;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) int outputAudioPowerSpectrumToken; // @synthesize outputAudioPowerSpectrumToken=_outputAudioPowerSpectrumToken;
@property(readonly, nonatomic) int inputAudioPowerSpectrumToken; // @synthesize inputAudioPowerSpectrumToken=_inputAudioPowerSpectrumToken;
@property(readonly, copy, nonatomic) NSDate *dateConnected; // @synthesize dateConnected=_dateConnected;
@property(readonly, copy, nonatomic) NSDate *dateAnsweredOrDialed; // @synthesize dateAnsweredOrDialed=_dateAnsweredOrDialed;
@property(readonly, nonatomic) int disconnectedReason; // @synthesize disconnectedReason=_disconnectedReason;
@property(readonly, copy, nonatomic) NSString *uniqueProxyIdentifier; // @synthesize uniqueProxyIdentifier=_uniqueProxyIdentifier;
@property(readonly, nonatomic) int status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSString *handleValue; // @synthesize handleValue=_handleValue;
@property(readonly, copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(readonly, nonatomic) _Bool isRemoteUplinkMuted; // @synthesize isRemoteUplinkMuted=_isRemoteUplinkMuted;
@property(readonly, nonatomic) _Bool isOutgoing; // @synthesize isOutgoing=_isOutgoing;
@property(readonly, nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (float)remoteMeterLevel;
- (float)localMeterLevel;
@property(readonly, nonatomic) _Bool isActive;
@property(readonly, nonatomic) _Bool isIncoming;
- (void)setUplinkMuted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isEqualToCall:(id)arg1;
- (void)setCallCenter:(id)arg1;
- (id)initWithCall:(id)arg1;

@end
