//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BitrateLimits, NSMutableDictionary, VCAudioTier;

__attribute__((visibility("hidden")))
@interface VCAudioTierPicker : NSObject
{
    NSMutableDictionary *tierTablesForRedNumPayloads;
    VCAudioTier *defaultTier;
    VCAudioTier *fallbackTier;
    _Bool usingCellular;
    _Bool useCaseWatchContinuity;
    int operatingMode;
    BitrateLimits *bitrateLimits;
}

+ (id)valueForNetworkBitrate:(id)arg1 networkBitrate:(unsigned long)arg2;
+ (_Bool)shouldFilterTierForPayloadConfig:(id)arg1 bitRate:(unsigned long)arg2 packetsPerBundle:(unsigned long)arg3 operatingMode:(int)arg4 redNumPayloads:(unsigned long)arg5 cellular:(_Bool)arg6;
+ (id)selectHighestQualityAudioTiers:(id)arg1 forBitrateLimits:(id)arg2 isHardLimit:(_Bool)arg3;
+ (id)allPossibleCombinations:(id)arg1 supportedPacketsPerBundle:(id)arg2 redNumPayloads:(unsigned long)arg3 headerSize:(unsigned long)arg4 operatingMode:(int)arg5 usingCellular:(_Bool)arg6 useCaseWatchContinuity:(_Bool)arg7;
+ (_Bool)arrayHasObject:(id)arg1 withPayloadType:(int)arg2;
@property(readonly) VCAudioTier *defaultTier; // @synthesize defaultTier;
- (id)allAudioTiers;
- (id)tierForNetworkBitrate:(unsigned int)arg1 withRedNumPayloads:(unsigned int)arg2;
- (id)tierForNetworkBitrate:(unsigned int)arg1 withLegacyDuplication:(int)arg2;
- (void)printCreatedAudioTiers:(id)arg1;
- (void)dealloc;
- (id)initWithOperatingMode:(int)arg1 payloadConfigs:(id)arg2 packetsPerBundle:(id)arg3 supportedRedNumPayloads:(id)arg4 headerSize:(unsigned int)arg5 usingCellular:(_Bool)arg6 useCaseWatchContinuity:(_Bool)arg7 defaultMaxCap:(unsigned int)arg8;

@end

