//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTCellularPlanItem, NSArray, NSDictionary;

@interface PSUICellularPlanManagerCache : NSObject
{
    _Bool _cacheIsValid;
    NSArray *_planItems;
    NSDictionary *_referenceMap;
    CTCellularPlanItem *_selectedPlanItem;
    _Bool _hasSubscriptions;
    _Bool _isMultipleDataPlanSupportAvailable;
    _Bool _shouldShowOldUI;
    _Bool _isAnyLocalFlowTypeSupported;
    _Bool _isWebUIFlowSupported;
    _Bool _isActivationCodeFlowSupported;
    _Bool _isCarrierItemFlowSupported;
    _Bool _carrierListFetchInProgress;
    NSArray *_cachedCarrierItems;
}

+ (id)sharedInstance;
@property _Bool carrierListFetchInProgress; // @synthesize carrierListFetchInProgress=_carrierListFetchInProgress;
@property(retain) NSArray *cachedCarrierItems; // @synthesize cachedCarrierItems=_cachedCarrierItems;
- (void).cxx_destruct;
- (id)subscriptionContextForPlanItem:(id)arg1 cachedSubscriptionContexts:(id)arg2;
- (void)clearCachedCarrierItems;
@property(readonly, nonatomic) NSArray *carrierItems;
@property(readonly, nonatomic) _Bool isCarrierItemFlowSupported;
@property(readonly, nonatomic) _Bool isActivationCodeFlowSupported;
@property(readonly, nonatomic) _Bool isWebUIFlowSupported;
@property(readonly, nonatomic) _Bool isAnyLocalFlowTypeSupported;
@property(readonly, nonatomic) _Bool shouldShowNewUI;
- (_Bool)shouldShowOldUI;
@property(readonly, nonatomic) _Bool shouldShowPlanSelector;
@property(readonly, nonatomic) _Bool isAnyPlanActivating;
@property(readonly, nonatomic) _Bool isSelectedPlanActivating;
@property(readonly, nonatomic) _Bool shouldShowAccountSetup;
@property(readonly, nonatomic) _Bool hasSubscriptions;
@property(readonly, nonatomic) _Bool isMultipleDataPlanSupportAvailable;
- (void)setSelectedPlanItemForData:(id)arg1;
@property(retain, nonatomic) CTCellularPlanItem *selectedPlanItem;
- (id)planFromReference:(id)arg1;
@property(readonly, nonatomic) NSArray *embeddedPlanItems;
@property(readonly, nonatomic) NSArray *planItems;
@property(readonly, nonatomic) _Bool shouldShowDataPlanList;
@property(readonly, nonatomic) _Bool shouldShowAddPlan;
- (void)_fetchPlanItemsIfNeeded;
- (void)_carrierInfoDidChange;
- (void)_invalidatePlanItemsCache;
- (void)_planInfoDidChange;
- (void)dealloc;
- (id)init;

@end

