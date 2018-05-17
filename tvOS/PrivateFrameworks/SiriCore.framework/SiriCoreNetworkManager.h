//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSObject<OS_dispatch_queue>, NSObject<OS_nw_path_evaluator>, SiriCoreWiFiManagerClient;

@interface SiriCoreNetworkManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_observers;
    NSObject<OS_nw_path_evaluator> *_pathEvaluator;
    int _pathStatus;
    _Bool _pathUsesCellular;
    SiriCoreWiFiManagerClient *_wiFiManagerClient;
    _Bool _hasSymptomsBasedInstantCellQuality;
    _Bool _symptomsBasedInstantCellQualityIsGood;
    _Bool _hasSymptomsBasedInstantWiFiQuality;
    _Bool _symptomsBasedInstantWiFiQualityIsGood;
    _Bool _hasSymptomsBasedHistoricalCellQuality;
    _Bool _symptomsBasedHistoricalCellQualityIsGood;
    _Bool _hasSymptomsBasedHistoricalWiFiQuality;
    _Bool _symptomsBasedHistoricalWiFiQualityIsGood;
    _Bool _lastFetchInProgress;
    double _lastSuccessfulSymptomsFetch;
}

+ (void)releaseDormancySuspendAssertion:(void *)arg1;
+ (void)acquireDormancySuspendAssertion:(const void **)arg1;
+ (long long)connectionTypeForInterface:(id)arg1;
+ (id)connectionTypeForInterfaceName:(id)arg1 isCellular:(_Bool)arg2;
+ (void)getCarrierName:(id *)arg1 andSignalStrength:(id *)arg2;
+ (long long)connectionSubTypeForCellularInterface;
+ (void)_ifnameTypeForName:(char *)arg1 isWiFi:(_Bool *)arg2 isCellular:(_Bool *)arg3;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)_getConnectionSuccessRate:(id)arg1 hasMetric:(_Bool *)arg2;
- (void)disableWiFiTimeout;
- (void)enableWiFiTimeout;
- (void)forceFastDormancy;
- (long long)_reportWiFiHistoricalQuality;
- (long long)_reportWiFiInstantQuality;
- (long long)_reportCellularHistoricalQuality;
- (long long)_reportCellularInstantQuality;
- (void)getQualityReport:(CDUnknownBlockType)arg1;
- (long long)anyNetworkQuality;
- (long long)wifiNetworkQuality;
- (long long)cellularNetworkQuality;
- (void)getNetworkPerformanceFeed;
- (void)_getNetworkPerformanceFeed;
- (void)stopMonitoringNetwork;
- (void)_stopMonitoringNetwork;
- (void)startMonitoringNetworkForHost:(id)arg1;
- (void)_pathUpdated:(id)arg1;
- (id)_wiFiManagerClient;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)_init;

@end
