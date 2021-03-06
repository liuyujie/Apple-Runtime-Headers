//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUI/GKDashboardCollectionViewController.h>

#import "UISearchBarDelegate.h"
#import "UITextFieldDelegate.h"

@class NSArray, NSString, UIButton, UITextField;

@interface GKGameSessionPlayerPickerViewController : GKDashboardCollectionViewController <UITextFieldDelegate, UISearchBarDelegate>
{
    _Bool _shouldIgnoreClearSelection;
    NSString *_message;
    CDUnknownBlockType _completionHandler;
    NSArray *_initiallySelectedPlayers;
    UIButton *_sendButton;
    UIButton *_customizeMessageButton;
    UITextField *_messageField;
}

@property(nonatomic) __weak UITextField *messageField; // @synthesize messageField=_messageField;
@property(nonatomic) __weak UIButton *customizeMessageButton; // @synthesize customizeMessageButton=_customizeMessageButton;
@property(nonatomic) __weak UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(nonatomic) _Bool shouldIgnoreClearSelection; // @synthesize shouldIgnoreClearSelection=_shouldIgnoreClearSelection;
@property(retain, nonatomic) NSArray *initiallySelectedPlayers; // @synthesize initiallySelectedPlayers=_initiallySelectedPlayers;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)setSearchText:(id)arg1;
- (void)_updateButtonEnableState;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)cancel:(id)arg1;
- (void)addMessage:(id)arg1;
- (void)send:(id)arg1;
- (void)clearSelection;
- (id)preferredFocusEnvironments;
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;
- (void)selectPlayersAtIndexPaths:(id)arg1;
- (void)dataUpdated:(_Bool)arg1 withError:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithMaxSelectable:(long long)arg1 unavailablePlayers:(id)arg2 hiddenPlayers:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

