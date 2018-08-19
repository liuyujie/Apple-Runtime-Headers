//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PXImportStatusManager.h"

@class NSHashTable, NSMutableDictionary, NSString;

@interface PXCMMPhotoKitImportStatusManager : NSObject <PXImportStatusManager>
{
    NSHashTable *_statusObservers;
    NSMutableDictionary *_simulatedStateByAssetID;
    _Bool _supportsStateSimulation;
}

@property(readonly, nonatomic) _Bool supportsStateSimulation; // @synthesize supportsStateSimulation=_supportsStateSimulation;
- (void).cxx_destruct;
- (void)removeImportStatusObserver:(id)arg1;
- (void)addImportStatusObserver:(id)arg1;
- (long long)_simulatedStateForAsset:(id)arg1;
- (void)completeSimulatedImportForAssetReference:(id)arg1 withSuccess:(_Bool)arg2;
- (void)beginSimulatedImportForAssetReference:(id)arg1;
- (void)_notifySimulationObserversForAssetReference:(id)arg1;
- (long long)importStateForAsset:(id)arg1;
- (id)init;
- (id)initAllowingSimulation:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
