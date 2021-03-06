//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HKSampleTypeUpdateControllerObserver.h"

@class HKActivitySummaryDataProvider, HKHealthStore, HKSampleTypeUpdateController, HKUnitPreferenceController, NSArray, NSMutableDictionary, NSString;

@interface HKChartDataCacheController : NSObject <HKSampleTypeUpdateControllerObserver>
{
    NSArray *_chartCachesByTimeScopeAndDisplayTypeIdentifier;
    struct NSMutableDictionary *_chartCachesByDisplayTypeIdentifier;
    NSMutableDictionary *_currentValueDataProvidersByDisplayType;
    NSMutableDictionary *_alternateCurrentValueDataProvidersByDisplayType;
    NSMutableDictionary *_secondaryValueDataProviders;
    HKActivitySummaryDataProvider *_activitySummaryDataProvider;
    HKSampleTypeUpdateController *_updateController;
    HKHealthStore *_healthStore;
    HKUnitPreferenceController *_unitController;
}

@property(retain, nonatomic) HKUnitPreferenceController *unitController; // @synthesize unitController=_unitController;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(retain, nonatomic) HKSampleTypeUpdateController *updateController; // @synthesize updateController=_updateController;
- (void).cxx_destruct;
- (id)activitySummaryDataProviderWithHealthStore:(id)arg1 dateCache:(id)arg2 displayTypeController:(id)arg3 unitController:(id)arg4;
- (id)_createAlternateCurrentValueDataProviderForDisplayType:(id)arg1 healthStore:(id)arg2 updateController:(id)arg3 dateCache:(id)arg4;
- (id)_createCurrentValueDataProviderForDisplayType:(id)arg1 healthStore:(id)arg2 updateController:(id)arg3 dateCache:(id)arg4;
- (id)alternateCurrentValueDataProviderForDisplayType:(id)arg1 healthStore:(id)arg2 updateController:(id)arg3 dateCache:(id)arg4;
- (id)currentValueDataProviderForDisplayType:(id)arg1 healthStore:(id)arg2 updateController:(id)arg3 dateCache:(id)arg4;
- (void)_subscribeForUpdatesForDisplayType:(id)arg1;
- (id)_chartCacheIdentifiersFromStartDate:(id)arg1 endDate:(id)arg2;
- (id)_chartCacheIdentifiersFromSamples:(id)arg1;
- (void)updateController:(id)arg1 didReceiveUpdateForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4;
- (id)_generateChartCacheForDisplayType:(id)arg1 timeScope:(int)arg2;
- (id)_chartCacheForDisplayType:(id)arg1 timeScope:(int)arg2 chartCachesByDisplayTypeIdentifier:(struct NSMutableDictionary *)arg3;
- (id)_timeScopeBasedChartCacheForDisplayType:(id)arg1 timeScope:(int)arg2;
- (id)allInteractiveChartsCaches;
- (id)interactiveChartsCacheForDisplayType:(id)arg1 timeScope:(int)arg2;
- (id)initWithHealthStore:(id)arg1 unitController:(id)arg2 updateController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

