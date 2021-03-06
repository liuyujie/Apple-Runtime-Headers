//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/GKDashboardCollectionViewController.h>

#import "GKComposeControllerDelegate.h"
#import "NSTextFieldDelegate.h"
#import "UISearchBarDelegate.h"

@class GKComposeController, NSArray, NSLayoutConstraint, NSSegmentedControl, NSString, NSTextField, NSView, UIButton;

@interface GKDashboardMultiplayerPickerViewController : GKDashboardCollectionViewController <NSTextFieldDelegate, UISearchBarDelegate, GKComposeControllerDelegate>
{
    BOOL _supportsNearby;
    BOOL _shouldIgnoreClearSelection;
    BOOL _shouldApplyInitialOffset;
    NSString *_message;
    CDUnknownBlockType _completionHandler;
    id <GKDashboardNearbyBrowserDelegate> _nearbyDelegate;
    NSArray *_initiallySelectedPlayers;
    NSTextField *_descriptionLabel;
    UIButton *_sendButton;
    UIButton *_customizeMessageButton;
    NSTextField *_messageField;
    NSView *_scrollingHeader;
    NSLayoutConstraint *_scrollingHeaderTopConstraint;
    double _scrollingHeaderTopConstraintConstant;
    NSLayoutConstraint *_customizeMessageBottomConstraint;
    double _initialCustomizeMessageBottomConstraintConstant;
    NSSegmentedControl *_sectionControl;
    GKComposeController *_composeController;
    struct NSEdgeInsets _initialInsets;
}

@property(retain, nonatomic) GKComposeController *composeController; // @synthesize composeController=_composeController;
@property(nonatomic) NSSegmentedControl *sectionControl; // @synthesize sectionControl=_sectionControl;
@property(nonatomic) double initialCustomizeMessageBottomConstraintConstant; // @synthesize initialCustomizeMessageBottomConstraintConstant=_initialCustomizeMessageBottomConstraintConstant;
@property(nonatomic) NSLayoutConstraint *customizeMessageBottomConstraint; // @synthesize customizeMessageBottomConstraint=_customizeMessageBottomConstraint;
@property(nonatomic) BOOL shouldApplyInitialOffset; // @synthesize shouldApplyInitialOffset=_shouldApplyInitialOffset;
@property(nonatomic) struct NSEdgeInsets initialInsets; // @synthesize initialInsets=_initialInsets;
@property(nonatomic) double scrollingHeaderTopConstraintConstant; // @synthesize scrollingHeaderTopConstraintConstant=_scrollingHeaderTopConstraintConstant;
@property(nonatomic) NSLayoutConstraint *scrollingHeaderTopConstraint; // @synthesize scrollingHeaderTopConstraint=_scrollingHeaderTopConstraint;
@property(nonatomic) NSView *scrollingHeader; // @synthesize scrollingHeader=_scrollingHeader;
@property(nonatomic) NSTextField *messageField; // @synthesize messageField=_messageField;
@property(nonatomic) UIButton *customizeMessageButton; // @synthesize customizeMessageButton=_customizeMessageButton;
@property(nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(nonatomic) NSTextField *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) BOOL shouldIgnoreClearSelection; // @synthesize shouldIgnoreClearSelection=_shouldIgnoreClearSelection;
@property(retain, nonatomic) NSArray *initiallySelectedPlayers; // @synthesize initiallySelectedPlayers=_initiallySelectedPlayers;
@property(nonatomic) id <GKDashboardNearbyBrowserDelegate> nearbyDelegate; // @synthesize nearbyDelegate=_nearbyDelegate;
@property(nonatomic) BOOL supportsNearby; // @synthesize supportsNearby=_supportsNearby;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)setSearchText:(id)arg1;
- (void)doneWithComposeController;
- (void)composeControllerWasCancelled:(id)arg1;
- (void)composeController:(id)arg1 didFinishWithMessage:(id)arg2;
- (void)_updateButtonEnableState;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)cancel:(id)arg1;
- (void)addMessage:(id)arg1;
- (void)send:(id)arg1;
- (void)contactSkipSelected:(id)arg1;
- (void)segmentSectionChanged:(id)arg1;
- (void)clearSelection;
- (id)preferredFocusEnvironments;
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;
- (void)selectPlayersAtIndexPaths:(id)arg1 askDelegateFirst:(BOOL)arg2;
- (void)dataUpdated:(BOOL)arg1 withError:(id)arg2;
@property(nonatomic) BOOL excludesContacts;
- (void)applyInitialContentOffset;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)dealloc;
- (id)initWithMaxSelectable:(long long)arg1 hiddenPlayers:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

