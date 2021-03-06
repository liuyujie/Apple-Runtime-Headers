//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <KnowledgeMonitor/_DKMonitor.h>

#import "NWNetworkOfInterestManagerDelegate.h"

@class NSArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NWNetworkOfInterest, NWNetworkOfInterestManager, _CDContextualKeyPath;

@interface _DKNetworkQualityMonitor : _DKMonitor <NWNetworkOfInterestManagerDelegate>
{
    BOOL _initialized;
    BOOL _enabled;
    NSArray *_noiKeyPaths;
    NSObject<OS_dispatch_queue> *_noiManagerQueue;
    NWNetworkOfInterestManager *_noiManager;
    NWNetworkOfInterest *_noi;
    long long _previousQuality;
    long long _interfaceType;
    _CDContextualKeyPath *_qualityKeyPath;
    _CDContextualKeyPath *_predictedQualityKeyPath;
    _CDContextualKeyPath *_discretionaryInvitedKeyPath;
    _CDContextualKeyPath *_statusKeyPath;
    NSMutableDictionary *_statusDictionary;
}

+ (id)entitlements;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) BOOL initialized; // @synthesize initialized=_initialized;
@property(retain, nonatomic) NSMutableDictionary *statusDictionary; // @synthesize statusDictionary=_statusDictionary;
@property(retain, nonatomic) _CDContextualKeyPath *statusKeyPath; // @synthesize statusKeyPath=_statusKeyPath;
@property(retain, nonatomic) _CDContextualKeyPath *discretionaryInvitedKeyPath; // @synthesize discretionaryInvitedKeyPath=_discretionaryInvitedKeyPath;
@property(retain, nonatomic) _CDContextualKeyPath *predictedQualityKeyPath; // @synthesize predictedQualityKeyPath=_predictedQualityKeyPath;
@property(retain, nonatomic) _CDContextualKeyPath *qualityKeyPath; // @synthesize qualityKeyPath=_qualityKeyPath;
@property(nonatomic) long long interfaceType; // @synthesize interfaceType=_interfaceType;
@property(nonatomic) long long previousQuality; // @synthesize previousQuality=_previousQuality;
@property(retain, nonatomic) NWNetworkOfInterest *noi; // @synthesize noi=_noi;
@property(retain, nonatomic) NWNetworkOfInterestManager *noiManager; // @synthesize noiManager=_noiManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *noiManagerQueue; // @synthesize noiManagerQueue=_noiManagerQueue;
@property(retain, nonatomic) NSArray *noiKeyPaths; // @synthesize noiKeyPaths=_noiKeyPaths;
- (void).cxx_destruct;
- (id)loadState;
- (void)saveState;
- (void)synchronouslyReflectCurrentValue;
- (void)stop;
- (void)start;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)didStopTrackingAllNOIs:(id)arg1;
- (void)didStopTrackingNOI:(id)arg1;
- (void)didStartTrackingNOI:(id)arg1;
- (void)updatePowerCostUL;
- (void)updatePowerCostDL;
- (void)updateDiscretionaryTrafficInvited;
- (void)updateInstantQuality;
- (void)updatePredictionAsync;
- (id)predictionTimelineFromNOIPredictions:(id)arg1;
- (id)initForInterfaceType:(long long)arg1 connectionStatusKeyPath:(id)arg2 qualityKeyPath:(id)arg3 predictedQualityKeyPath:(id)arg4 discretionaryInvitedPath:(id)arg5;

@end

