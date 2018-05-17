//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AVCAudioStreamConfig : NSObject
{
    int _codecType;
    _Bool _cnEnabled;
    unsigned int _cnPayloadType;
    unsigned int _dtmfPayloadType;
    unsigned int _dtmfTimestampRate;
    unsigned int _ptime;
    unsigned int _maxPtime;
    int _audioStreamMode;
    unsigned int _codecRateModeMask;
    int _preferredCodecRateMode;
    _Bool _octetAligned;
    _Bool _dtxEnabled;
    _Bool _latencySensitiveMode;
    unsigned int _numRedundantPayloads;
    unsigned int _txRedPayloadType;
    unsigned int _rxRedPayloadType;
}

+ (int)clientCodecRateModeForCodecRateMode:(int)arg1;
+ (int)codecRateModeForClientCodecRateMode:(int)arg1;
+ (unsigned int)clientCodecRateMaskForCodecRateMode:(unsigned int)arg1;
+ (unsigned int)codecRateMaskForClientCodecRateMode:(unsigned int)arg1;
+ (int)clientStreamModeWithStreamMode:(int)arg1;
+ (int)streamModeWithClientStreamMode:(int)arg1;
+ (int)clientCodecTypeWithCodecType:(int)arg1;
+ (int)codecTypeWithClientCodecType:(int)arg1;
@property(nonatomic) unsigned int rxRedPayloadType; // @synthesize rxRedPayloadType=_rxRedPayloadType;
@property(nonatomic) unsigned int txRedPayloadType; // @synthesize txRedPayloadType=_txRedPayloadType;
@property(nonatomic) unsigned int numRedundantPayloads; // @synthesize numRedundantPayloads=_numRedundantPayloads;
@property(nonatomic, getter=isLatencySensitiveMode) _Bool latencySensitiveMode; // @synthesize latencySensitiveMode=_latencySensitiveMode;
@property(nonatomic) int preferredCodecRateMode; // @synthesize preferredCodecRateMode=_preferredCodecRateMode;
@property(nonatomic) unsigned int codecRateModeMask; // @synthesize codecRateModeMask=_codecRateModeMask;
@property(nonatomic, getter=isDTXEnabled) _Bool dtxEnabled; // @synthesize dtxEnabled=_dtxEnabled;
@property(nonatomic, getter=isOctectAligned) _Bool octetAligned; // @synthesize octetAligned=_octetAligned;
@property(nonatomic) unsigned int maxPtime; // @synthesize maxPtime=_maxPtime;
@property(nonatomic) unsigned int ptime; // @synthesize ptime=_ptime;
@property(nonatomic) unsigned int dtmfTimestampRate; // @synthesize dtmfTimestampRate=_dtmfTimestampRate;
@property(nonatomic) unsigned int dtmfPayloadType; // @synthesize dtmfPayloadType=_dtmfPayloadType;
@property(nonatomic) unsigned int cnPayloadType; // @synthesize cnPayloadType=_cnPayloadType;
@property(nonatomic, getter=isCNEnabled) _Bool cnEnabled; // @synthesize cnEnabled=_cnEnabled;
@property(nonatomic) int codecType; // @synthesize codecType=_codecType;
@property(nonatomic) int audioStreamMode; // @synthesize audioStreamMode=_audioStreamMode;
- (id)dictionary;
- (void)setUpWithDictionary:(id)arg1;
- (_Bool)isRedValid;
- (_Bool)isCNValid;
- (_Bool)isDTMFValid;
- (_Bool)isValid;
- (id)init;

@end
