//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PKGroupsControllerDelegate.h"
#import "PKPassGroupStackViewDatasource.h"
#import "PKPassGroupStackViewDelegate.h"
#import "PKPassPersonalizationViewControllerDelegate.h"
#import "PKPaymentSetupViewControllerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSArray, NSString, PKGroupsController, PKPassGroupStackView;

@interface PKAddPassesCardStackViewController : UIViewController <PKGroupsControllerDelegate, PKPassGroupStackViewDelegate, PKPassGroupStackViewDatasource, PKPaymentSetupViewControllerDelegate, PKPassPersonalizationViewControllerDelegate, UIScrollViewDelegate>
{
    NSArray *_passes;
    NSArray *_passDataArray;
    PKGroupsController *_groupsController;
    PKPassGroupStackView *_passGroupStackView;
    NSString *_personalizatonToken;
    unsigned int _presentationSource;
    id <PKAddPassesCardStackViewControllerDelegate> _delegate;
}

@property(nonatomic) id <PKAddPassesCardStackViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_configureAddOrNextButtonItemAsPending:(_Bool)arg1;
- (void)_configureNavigationItemTitle;
- (void)_nextButtonPressedForAutomaticPresentation:(id)arg1;
- (void)_nextButtonPressedForPersonalization:(id)arg1;
- (void)_addButtonPressed:(id)arg1;
- (void)_cancelButtonPressed:(id)arg1;
- (void)resetBrightness;
- (void)evaluateBrightness;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)passPersonalizationViewController:(id)arg1 didFinishPersonalizingPass:(id)arg2;
- (void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned int)arg3 toIndex:(unsigned int)arg4;
- (void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned int)arg3;
- (void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned int)arg3;
- (void)groupStackView:(id)arg1 didTransitionToState:(int)arg2 animated:(_Bool)arg3;
- (unsigned int)suppressedContent;
- (void)groupStackViewDidEndReordering:(id)arg1;
- (void)groupStackViewDidBeginReordering:(id)arg1;
- (void)groupStackView:(id)arg1 deleteConfirmedForPass:(id)arg2;
- (void)reloadGroupsForGroupStackView:(id)arg1;
- (unsigned int)indexOfSeparationGroup;
- (unsigned int)indexOfGroup:(id)arg1;
- (unsigned int)numberOfGroups;
- (id)groupAtIndex:(unsigned int)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithPasses:(id)arg1 passDataArray:(id)arg2 presentationSource:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
