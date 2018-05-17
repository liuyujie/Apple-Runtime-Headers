//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

#import "AAUISignInControllerDelegate.h"
#import "DevicePINControllerDelegate.h"
#import "PSSpotlightSearchResultsControllerDelegate.h"
#import "RadiosPreferencesDelegate.h"
#import "UISearchBarDelegate.h"
#import "UISearchControllerDelegate.h"
#import "UISearchResultsUpdating.h"

@class AAUIProfilePictureStore, ACAccountStore, AIDAServiceOwnersManager, CSSearchQuery, EAAccessory, HFHomeSettingsVisibilityArbitrator, NSArray, NSDictionary, NSObject<OS_dispatch_queue>, NSSet, NSString, PSKeyboardNavigationSearchController, PSSpecifier, PSSpotlightSearchResultsController, PSUIClassKitVisibilityArbitrator, PSUIClassroomVisibilityArbitrator, UIViewController<PSController>, VSAccountStore;

@interface PSUIPrefsListController : PSListController <AAUISignInControllerDelegate, UISearchResultsUpdating, PSSpotlightSearchResultsControllerDelegate, UISearchBarDelegate, UISearchControllerDelegate, RadiosPreferencesDelegate, DevicePINControllerDelegate>
{
    _Bool _didFirstLoad;
    EAAccessory *_speakerAccessory;
    PSSpecifier *_eqSpecifier;
    PSSpecifier *_ethernetSpecifier;
    NSArray *_thirdPartySpecifiers;
    NSDictionary *_movedThirdPartySpecifiers;
    _Bool _initiallyLoadingThirdPartySpecifiers;
    _Bool _refreshingThirdPartySpecifiers;
    PSSpecifier *_notificationsSpecifier;
    PSSpecifier *_wallpaperSpecifier;
    PSSpecifier *_passcodeSpecifier;
    PSSpecifier *_appleAccountSpecifier;
    PSSpecifier *_videoSubscriberGroupSpecifier;
    PSSpecifier *_videoSubscriberSpecifier;
    PSSpecifier *_messagesSpecifier;
    PSSpecifier *_faceTimeSpecifier;
    PSSpecifier *_gameCenterSpecifier;
    PSSpecifier *_siriSpecifier;
    PSSpecifier *_tvSpecifier;
    PSSpecifier *_carrierSelectionSpecifier;
    PSSpecifier *_personalHotspotSpecifier;
    PSSpecifier *_classKitSpecifier;
    PSSpecifier *_classroomSpecifier;
    PSSpecifier *_homeKitSpecifier;
    PSSpecifier *_healthKitSpecifier;
    _Bool _wifiValueIsClean;
    _Bool _bluetoothValueIsClean;
    NSArray *_originalSpecifiers;
    NSSet *_originalDisplayIdentifiers;
    NSObject<OS_dispatch_queue> *_iconCacheQueue;
    NSDictionary *_iconCache;
    ACAccountStore *_accountStore;
    NSString *_pendingOffsetItemName;
    PSUIClassKitVisibilityArbitrator *_classKitVisibilityArbitrator;
    PSUIClassroomVisibilityArbitrator *_classroomVisibilityArbitrator;
    HFHomeSettingsVisibilityArbitrator *_homeKitVisibilityArbitrator;
    VSAccountStore *_videoSubscriberAccountStore;
    AIDAServiceOwnersManager *_serviceOwnersManager;
    AAUIProfilePictureStore *_profilePictureStore;
    PSSpecifier *_specifierToSelect;
    NSObject<OS_dispatch_queue> *_loadAllSpecifiersQueue;
    _Bool _skipSelectingGeneralOnLaunch;
    NSString *_bluetoothString;
    NSArray *_followupSpecifiers;
    PSKeyboardNavigationSearchController *_spotlightSearchController;
    PSSpotlightSearchResultsController *_spotlightResultsController;
    CSSearchQuery *_searchQuery;
    NSString *_wifiString;
}

+ (void)setAirplaneMode:(_Bool)arg1;
+ (_Bool)airplaneMode;
+ (id)radiosPreferences;
@property(copy, nonatomic) NSString *wifiString; // @synthesize wifiString=_wifiString;
@property(retain, nonatomic) CSSearchQuery *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(retain, nonatomic) PSSpotlightSearchResultsController *spotlightResultsController; // @synthesize spotlightResultsController=_spotlightResultsController;
@property(retain, nonatomic) PSKeyboardNavigationSearchController *spotlightSearchController; // @synthesize spotlightSearchController=_spotlightSearchController;
@property(retain, nonatomic) NSArray *followupSpecifiers; // @synthesize followupSpecifiers=_followupSpecifiers;
@property(copy, nonatomic) NSString *bluetoothString; // @synthesize bluetoothString=_bluetoothString;
@property(nonatomic) _Bool skipSelectingGeneralOnLaunch; // @synthesize skipSelectingGeneralOnLaunch=_skipSelectingGeneralOnLaunch;
- (void).cxx_destruct;
- (void)didDismissSearchController:(id)arg1;
- (_Bool)searchBarShouldEndEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)dismissPopover;
- (_Bool)_canSelectSpecifierAtIndexPath:(id)arg1;
- (void)_tabKeyPressed;
- (void)_downArrowKeyPressed;
- (void)_upArrowKeyPressed;
- (id)keyCommands;
- (_Bool)canBecomeFirstResponder;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)searchResultsController:(id)arg1 iconForCategory:(id)arg2;
- (long long)searchResultsController:(id)arg1 sortCategory1:(id)arg2 sortCategory2:(id)arg3;
- (void)searchResultsController:(id)arg1 didSelectURL:(id)arg2;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)_videoSubscriberAccountAvailabilityDidChange:(id)arg1;
- (void)_videoSubscriberAccountStoreDidChange:(id)arg1;
- (id)videoSubscriberAccountValue:(id)arg1;
- (_Bool)shouldDeferPushForSpecifierID:(id)arg1;
- (void)suspend;
- (id)configurePasscodeSpecifierFromSpecifiers:(id)arg1;
- (void)didCancelEnteringPIN;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)bluetoothPowerChanged:(id)arg1;
- (id)bluetoothValue:(id)arg1;
- (void)bluetoothValueFetch:(id)arg1;
- (void)iMessageSupportMayHaveChanged;
- (void)lazyLoadSpecialBundleForSpecifier:(id)arg1;
- (id)cellularDataStatusForSpecifier:(id)arg1;
- (void)airplaneModeChanged;
- (id)phoneStatusForSpecifier:(id)arg1;
- (id)cellularDisabledStatusForSpecifier:(id)arg1;
- (void)reloadCellularRelatedSpecifiers;
- (id)getAirplaneMode:(id)arg1;
- (void)confirmationSpecifierCancelled:(id)arg1;
- (void)confirmationSpecifierConfirmed:(id)arg1;
- (void)_setAirplaneMode:(_Bool)arg1;
- (void)setAirplaneMode:(id)arg1 specifier:(id)arg2;
- (void)_beginObservingAccountStoreDidChangeNotification;
- (id)_profilePictureStore;
- (id)_accountStore;
- (id)_serviceOwnersManager;
- (void)appleAccountsDidChange;
- (void)signInControllerDidCancel:(id)arg1;
- (void)signInController:(id)arg1 didCompleteWithSuccess:(_Bool)arg2 error:(id)arg3;
- (void)_presentAppleAccountSignInController:(id)arg1;
- (void)_setupAppleAccountSpecifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setupAppleAccountSpecifierAsync:(id)arg1;
- (void)appleAccountSpecifierWasTappedWhileInCachedState:(id)arg1;
- (void)_setupAppleAccountSpecifier:(id)arg1 title:(id)arg2;
- (void)_setupAppleAccountSpecifierForLogin:(id)arg1;
- (void)_setupAppleAccountSpecifier:(id)arg1;
- (void)setupPrimaryAppleAccountGroup:(id)arg1;
- (id)appleAccountIconLocalCacheURLForKey:(id)arg1;
- (id)getTetheringStatus:(id)arg1;
- (void)updateEthernet;
- (_Bool)shouldShowEthernetSpecifier;
- (id)wifiNetwork:(id)arg1;
- (void)wifiGetCurrentWiFiNetwork;
- (void)updateWifi;
- (void)willBecomeActive;
- (void)willEnterForeground;
- (void)updateShowsCarrierSettingsMenuVisibility;
- (void)setShowsCarrierSettingsMenu:(_Bool)arg1;
- (void)networkChanged;
- (id)currentNetwork:(id)arg1;
- (id)getAllSpecifiers;
- (void)_insertOrRemovePaymentSpecifierAsNeededCompletion:(CDUnknownBlockType)arg1;
- (_Bool)deviceSupportsApplePay;
- (void)_localeChanged;
- (void)_newCarrierNotification;
- (void)_simStatusChanged:(struct __CFString *)arg1;
@property(readonly, nonatomic) __weak UIViewController<PSController> *categoryController;
- (id)specifierForBundle:(id)arg1;
- (void)loadPPTTestSpecifiers:(int)arg1;
- (void)_reallyLoadThirdPartySpecifiersForApps:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)loadThirdPartySpecifierIfNeededForBundleID:(id)arg1;
- (void)_loadThirdPartySpecifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)_loadThirdPartySpecifiersIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)setDesiredVerticalContentOffsetItemNamed:(id)arg1;
- (id)dndGlobalState:(id)arg1;
- (_Bool)handlePendingURL;
- (id)specifiers;
- (id)passbookSpecifier;
- (void)showDeviceSupervisionInfo;
- (void)updateAccountSpecifiers;
- (void)updateHomeKitSpecifier;
- (void)updateClassroomSpecifier;
- (void)updateClassKitSpecifier;
- (_Bool)shouldShowClassKitSpecifier;
- (_Bool)shouldShowClassroomSpecifier;
- (void)updateRestrictedSettings;
- (_Bool)isSpecifierHiddenDueToRestrictions:(id)arg1;
- (_Bool)isBundleIDHiddenDueToRestrictions:(id)arg1;
- (void)displayIdentifiersChanged;
- (_Bool)shouldReloadSpecifiersOnResume;
- (void)refresh3rdPartyBundles;
- (void)removeAndReload3rdPartyBundles;
- (void)popToRoot;
- (void)insertMovedThirdPartySpecifiersAnimated:(_Bool)arg1;
- (id)_specifierDictionaryForDeveloperBundlePath:(id)arg1 identifier:(id)arg2;
- (id)_specifierDictionaryForBundlePath:(id)arg1 identifier:(id)arg2 internalIcon:(_Bool)arg3 searchPlist:(id)arg4;
- (_Bool)_showSOS;
- (_Bool)_showCarrier;
- (void)_showControllerFromSpecifier:(id)arg1;
- (id)_sidebarSpecifierForCategoryController;
- (void)showPINSheet:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)testSpecifierCountAfterBlock:(CDUnknownBlockType)arg1;
- (void)reloadAsyncSpecifiers;
- (void)updateFollowupSpecifiers;
- (void)setupDaemonsIfNeeded;
- (id)identifierForSelectedIndex;
- (id)generalViewController;
- (void)selectGeneralCategoryForced:(_Bool)arg1 showController:(_Bool)arg2;
- (void)selectGeneralCategoryForced:(_Bool)arg1;
- (void)selectGeneralCategory;
- (void)checkDeveloperSettingsState;
- (long long)navigationItemLargeTitleDisplayMode;
- (void)loadView;
- (void)dealloc;
- (id)init;
- (void)_showDetailTargetDidChange:(id)arg1;
- (void)insertOrderedSpecifier:(id)arg1 animated:(_Bool)arg2;
- (long long)insertionIndexForSpecifier:(id)arg1 inSpecifiers:(id)arg2;
- (id)_primarySpecifierOrdering;
- (void)rerootNavigationController;
- (void)reloadSpecifiers;
- (void)clearCache;
- (void)setSpeakerAccessory:(id)arg1 eqAvailable:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
