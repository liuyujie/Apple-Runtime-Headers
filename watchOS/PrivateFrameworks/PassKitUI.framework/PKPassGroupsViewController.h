//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PKForegroundActiveArbiterObserver.h"
#import "PKGroupsControllerDelegate.h"
#import "PKPGSVFooterViewDelegate.h"
#import "PKPassGroupStackViewDatasource.h"
#import "PKPassGroupStackViewDelegate.h"
#import "PKPassPersonalizationViewControllerDelegate.h"
#import "PKPaymentServiceDelegate.h"
#import "PKPaymentSetupDelegate.h"
#import "PKPeerPaymentAccountResolutionControllerDelegate.h"
#import "PKPerformActionViewControllerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSArray, NSMutableArray, NSString, NSTimer, PKGroupsController, PKPassGroupStackView, PKPaymentService, PKPeerPaymentAccountResolutionController, PKPeerPaymentService, _UIBackdropView;

@interface PKPassGroupsViewController : UIViewController <PKGroupsControllerDelegate, PKPassGroupStackViewDatasource, PKPassGroupStackViewDelegate, UIScrollViewDelegate, PKForegroundActiveArbiterObserver, PKPaymentServiceDelegate, PKPaymentSetupDelegate, PKPerformActionViewControllerDelegate, PKPeerPaymentAccountResolutionControllerDelegate, PKPGSVFooterViewDelegate, PKPassPersonalizationViewControllerDelegate>
{
    int _backdropStyle;
    _Bool _invalidated;
    PKPassGroupStackView *_groupStackView;
    _UIBackdropView *_headerBackground;
    _UIBackdropView *_footerBackground;
    PKPaymentService *_paymentService;
    unsigned int _modalCardIndex;
    int _presentationState;
    NSTimer *_allowDimmingTimer;
    NSTimer *_passViewedNotificationTimer;
    NSMutableArray *_blocksQueuedForUpdateCompletion;
    NSArray *_passUniqueIDsToExcludeFromFiltering;
    _Bool _persistentCardEmulationQueued;
    _Bool _viewAppeared;
    _Bool _viewAppearedBefore;
    _Bool _passesAreOutdated;
    _Bool _reloadingPasses;
    _Bool _backgroundMode;
    _Bool _inFailForward;
    _Bool _updatingBackdropSettings;
    CDStruct_14d1e09a _headerBackgroundVisibility;
    CDStruct_14d1e09a _footerBackgroundVisibility;
    unsigned int _instanceFooterSuppressionCounter;
    int _expressTransactionNotificationObserver;
    id <PKPassLibraryDataProvider> _passLibraryDataProvider;
    PKPeerPaymentService *_peerPaymentService;
    PKPeerPaymentAccountResolutionController *_peerPaymentAccountResolutionController;
    _Bool _handleFieldDetection;
    _Bool _welcomeStateEnabled;
    int _style;
    PKGroupsController *_groupsController;
    unsigned int _suppressedContent;
}

+ (void)endSuppressingFooter;
+ (void)beginSuppressingFooter;
+ (void)endTrackingAction;
+ (void)beginTrackingAction;
+ (_Bool)isPerformingAction;
@property(nonatomic, getter=isWelcomeStateEnabled) _Bool welcomeStateEnabled; // @synthesize welcomeStateEnabled=_welcomeStateEnabled;
@property _Bool handleFieldDetection; // @synthesize handleFieldDetection=_handleFieldDetection;
@property _Bool passesAreOutdated; // @synthesize passesAreOutdated=_passesAreOutdated;
@property(nonatomic) unsigned int suppressedContent; // @synthesize suppressedContent=_suppressedContent;
@property(readonly, nonatomic) PKGroupsController *groupsController; // @synthesize groupsController=_groupsController;
@property(readonly, nonatomic) int style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)paymentSetupDidFinish:(id)arg1;
- (void)_updateBackdropSettings;
- (void)updateRegionSupportIfNecessary;
- (void)_accessibilitySettingsDidChange:(id)arg1;
- (void)_handleFooterSupressionChange:(id)arg1;
- (void)_regionConfigurationDidChangeNotification;
- (void)_localeDidChangeNotification:(id)arg1;
- (void)_handleChildViewControllerRequestingServiceMode:(id)arg1;
- (void)_handleExpressNotification;
- (void)_registerForExpressTransactionNotifications:(_Bool)arg1;
- (void)_handlePeerPaymentAccountDidChangeNotification:(id)arg1;
- (void)_updatePeerPaymentAccount;
- (void)_warnFailForward;
- (id)_barcodePassDetailsViewControllerForBarcodePass:(id)arg1;
- (id)_paymentPassDetailsViewControllerForPaymentPass:(id)arg1;
- (id)_passFromGroupsControllerWithUniqueIdentifier:(id)arg1;
- (void)_updateFooterSuppressionWithContext:(id)arg1;
- (void)_updateFooterSuppressionAnimated:(_Bool)arg1;
- (void)_endSuppressingInstanceFooterWithContext:(id)arg1;
- (void)_beginSuppressingInstanceFooter;
- (void)_dismissPresentedVCsWithRequirements:(unsigned int)arg1 performAction:(CDUnknownBlockType)arg2;
- (void)_applyPresentationState;
- (void)_presentWithUpdatedPasses:(CDUnknownBlockType)arg1;
- (void)_handleProvisioningError:(id)arg1;
- (id)_paymentSetupNavigationControllerForProvisioningController:(id)arg1;
- (void)presentPaymentSetupController;
- (void)_presentAddPassesControllerWithPasses:(id)arg1;
- (id)_passPendingActivationToPresent;
- (id)_peerPaymentAccountResolutionController;
- (void)presentAutomaticPresentationControllerForPassWithUniqueID:(id)arg1;
- (void)addSimulatorPassWithURL:(id)arg1;
- (void)addVASPassWithIdentifier:(id)arg1;
- (void)startPaymentPreflight:(id)arg1 withPaymentSetupMode:(int)arg2 referrerIdentifier:(id)arg3 paymentNetwork:(id)arg4;
- (void)terminateFieldDetect;
- (void)invalidate;
@property(readonly, retain, nonatomic) PKPassGroupStackView *groupStackView;
- (void)performActionViewControllerDidPerformAction:(id)arg1;
- (void)performActionViewControllerDidCancel:(id)arg1;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(_Bool)arg2;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(_Bool)arg3;
- (void)presentActionViewControllerWithUniqueID:(id)arg1 actionType:(unsigned int)arg2;
- (void)presentPeerPaymentSetupWithCurrencyAmount:(id)arg1 flowState:(unsigned int)arg2 senderAddress:(id)arg3;
- (void)presentPeerPaymentTopUp;
- (void)_presentTransactionDetailsForTransaction:(id)arg1 paymentPass:(id)arg2;
- (void)presentTransactionDetailsForTransactionWithServiceIdentifier:(id)arg1;
- (void)presentTransactionDetailsForTransactionWithIdentifier:(id)arg1;
- (void)presentPassWithUniqueID:(id)arg1 context:(id)arg2 dismissVC:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)presentPassWithUniqueID:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)presentPassDetailsWithUniqueID:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)presentBarcodePassDetailsWithUniqueID:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)presentPaymentPassDetailsWithUniqueID:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)presentPassWithUniqueID:(id)arg1 animated:(_Bool)arg2 dismissVC:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)presentPassWithUniqueID:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setTableModalPresentationEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)presentGroupTableAnimated:(_Bool)arg1;
- (void)presentGroupTable;
- (void)presentPileOffscreen;
- (void)presentOffscreenAnimated:(_Bool)arg1 split:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)presentOffscreenAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)presentOnscreen:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)presentPaymentSetupInMode:(int)arg1 referrerIdentifier:(id)arg2 paymentNetwork:(id)arg3;
- (void)presentInitialState;
- (void)queuePersistentCardEmulation;
- (void)updatePassesIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)reloadPasses;
- (void)reloadPassesWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentPassWithFieldProperties:(id)arg1 fieldPassUniqueIdentifiers:(id)arg2 animated:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)presentPassWithFieldProperties:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)presentPassWithUpdateUserNotificationIdentifier:(id)arg1;
- (void)presentDefaultPaymentPassAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_presentGroupWithIndex:(unsigned int)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) _Bool presentingPass;
- (void)paymentDeviceDidEnterFieldWithProperties:(id)arg1;
- (id)groupsControllerShouldExcludePassesWithUniqueIDsFromFiltering:(id)arg1;
- (void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned int)arg3 toIndex:(unsigned int)arg4;
- (void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned int)arg3;
- (void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned int)arg3;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)passPersonalizationViewController:(id)arg1 didFinishPersonalizingPass:(id)arg2;
- (void)groupStackView:(id)arg1 didTransitionToState:(int)arg2 animated:(_Bool)arg3;
- (void)groupStackView:(id)arg1 wantsBottomContentSeparatorWithVisibility:(float)arg2 animated:(_Bool)arg3;
- (void)groupStackView:(id)arg1 wantsTopContentSeparatorWithVisibility:(float)arg2 animated:(_Bool)arg3;
- (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(CDStruct_973bafd3)arg2;
- (void)_passViewedNotificationTimerFired;
- (void)_clearPassViewedNotificationTimer;
- (void)_startPassViewedNotificationTimer;
- (void)_handleStatusBarChange:(id)arg1;
- (void)updateLockscreenIdleTimer;
- (void)allowIdleTimer;
- (void)groupStackView:(id)arg1 groupDidMoveFromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (void)groupStackViewDidEndReordering:(id)arg1;
- (void)groupStackViewDidBeginReordering:(id)arg1;
- (_Bool)groupStackViewShouldAllowReordering:(id)arg1;
- (void)groupStackView:(id)arg1 deleteConfirmedForPass:(id)arg2;
- (void)reloadGroupsForGroupStackView:(id)arg1;
- (void)viewTapped:(id)arg1;
- (id)footerForGroupStackView:(id)arg1;
- (id)groupStackView:(id)arg1 subheaderForPassType:(unsigned int)arg2;
- (id)groupStackView:(id)arg1 headerForPassType:(unsigned int)arg2;
- (_Bool)groupStackView:(id)arg1 willHaveHeaderViewForPassType:(unsigned int)arg2;
- (_Bool)groupStackView:(id)arg1 requiresHeaderForPassType:(unsigned int)arg2;
- (_Bool)groupStackViewShouldShowHeaderViews:(id)arg1;
- (id)featuredGroup;
- (unsigned int)indexOfSeparationGroup;
- (unsigned int)indexOfGroup:(id)arg1;
- (unsigned int)numberOfGroups;
- (id)groupAtIndex:(unsigned int)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)_accessBackgroundStateForType:(int)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_updateBackgroundType:(int)arg1 toVisibility:(float)arg2 animated:(_Bool)arg3;
- (void)viewWillLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (unsigned int)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (int)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)loadView;
- (void)dealloc;
- (id)initWithGroupsController:(id)arg1 style:(int)arg2;
- (id)initWithGroupsController:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

