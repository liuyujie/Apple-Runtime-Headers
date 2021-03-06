//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CTCellularPlanManager, PSListController, PSSimStatusCache, PSSpecifier, PSUICallingSubgroup, PSUICarrierSpaceGroup, PSUICellularPlanManagerCache, PSUICoreTelephonyCarrierBundleCache, PSUIMyNumberSubgroup, PSUINetworkSelectionSubgroup, PSUINetworkSettingsSubgroup, PSUISIMSubgroup;

@protocol PSUISubscriptionContextMenusFactory
- (CTCellularPlanManager *)createCellularPlanManager;
- (PSUICellularPlanManagerCache *)createCellularPlanManagerCache;
- (PSUICoreTelephonyCarrierBundleCache *)createCarrierBundleCache;
- (PSSimStatusCache *)createSimStatusCache;
- (PSUISIMSubgroup *)createSimSubgroup;
- (PSUINetworkSettingsSubgroup *)createNetworkSettingsSubgroup;
- (PSUIMyNumberSubgroup *)createMyNumberSubgroup;
- (PSUINetworkSelectionSubgroup *)createNetworkSelectionSubgroup;
- (PSUICarrierSpaceGroup *)createCarrierSpaceSubgroup;
- (PSUICallingSubgroup *)createCallingSubgroup;
- (_Bool)shouldPopViewControllerOnPlanRemoval;
- (PSSpecifier *)parentSpecifier;
- (PSSpecifier *)groupSpecifier;
- (PSListController *)hostController;
@end

