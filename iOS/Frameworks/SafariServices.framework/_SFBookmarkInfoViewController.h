//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SafariServices/_SFPopoverSizingTableViewController.h>

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "_SFBookmarkInfoViewControllerDelegate.h"
#import "_SFBookmarkTextEntryTableViewControllerDelegate.h"

@class NSArray, NSString, UITextField, WebBookmark, WebBookmarkCollection, _SFBookmarkTextEntryTableViewCell, _SFSiteIconView;

@interface _SFBookmarkInfoViewController : _SFPopoverSizingTableViewController <_SFBookmarkInfoViewControllerDelegate, _SFBookmarkTextEntryTableViewControllerDelegate, UITableViewDataSource, UITableViewDelegate>
{
    WebBookmarkCollection *_collection;
    WebBookmark *_parentBookmark;
    _Bool _addingBookmark;
    _Bool _saveWhenDismissed;
    _SFBookmarkTextEntryTableViewCell *_titleCell;
    _SFBookmarkTextEntryTableViewCell *_addressCell;
    _SFSiteIconView *_iconImageView;
    unsigned long long _editingField;
    _Bool _didSelectFolder;
    _Bool _folderPickerExpanded;
    _Bool _addingToFavorites;
    NSArray *_folders;
    long long _selectedFolderIndex;
    UITextField *_textFieldToRestoreFirstResponder;
    _Bool _enableAddFolder;
    id <_SFBookmarkInfoViewControllerDelegate> _delegate;
    WebBookmark *_bookmark;
}

@property(retain, nonatomic) WebBookmark *bookmark; // @synthesize bookmark=_bookmark;
@property(nonatomic) __weak id <_SFBookmarkInfoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)bookmarkInfoViewControllerShouldUseTranslucentAppearance:(id)arg1;
- (_Bool)bookmarkInfoViewControllerCanSaveBookmarkChanges:(id)arg1;
- (void)bookmarkInfoViewController:(id)arg1 didFinishWithResult:(_Bool)arg2;
- (id)backgroundColorUsingTranslucentAppearance:(_Bool)arg1;
- (void)updateTranslucentAppearance;
- (_Bool)hasTranslucentAppearance;
- (void)viewWillLayoutSubviews;
- (_Bool)_canEditFieldsInCurrentViewController;
- (void)dealloc;
- (_Bool)bookmarkTextEntryTableViewControllerShouldUseTranslucentAppearance:(id)arg1;
- (void)bookmarkTextEntryTableViewController:(id)arg1 dismissedWithText:(id)arg2;
- (void)_removeActionsForTextFields;
- (void)_addActionsForTextFields;
- (void)_valuesChanged;
- (_Bool)isEditingField;
- (void)_reloadFolderInfoForced:(_Bool)arg1;
- (void)_setFolderPickerExpanded:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_didChangeEditingTextField:(id)arg1;
- (void)_didBeginEditingTextField:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)_iconForViewCellGivenBookmark:(id)arg1;
- (id)_cellForParentBookmarkWithTableView:(id)arg1;
- (id)_cellForExpandedFolderAtIndex:(long long)arg1 withTableView:(id)arg2;
- (id)_cellForNewFolderRowWithTableView:(id)arg1;
- (id)_dequeueFolderPickerCellFromTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)_isIndexPathForNewFolderRow:(id)arg1;
- (long long)_numberOfExpandedFolderPickerRows;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)_createNewFolder;
- (void)_editField:(unsigned long long)arg1;
- (_Bool)canSaveChanges;
- (void)_updateSaveButton;
- (void)saveChanges;
- (void)setParent:(id)arg1;
- (void)_updateCellValues;
- (void)updateBookmarkIcon;
- (void)_updateIconViewFrame;
- (struct CGPoint)_centerForIconView;
- (void)reloadData;
- (_Bool)titleCellHasText;
- (void)_bookmarksDidReload:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)_titleCell;
- (void)loadView;
- (void)_createCellsIfNeeded;
- (struct UIEdgeInsets)_cellInset;
- (void)_returnWasPressedInTextField:(id)arg1;
- (void)cancel;
- (void)_saveButtonPressed;
- (id)initWithBookmarkForFavorites:(id)arg1 inCollection:(id)arg2 addingBookmark:(_Bool)arg3;
- (id)initWithBookmark:(id)arg1 inCollection:(id)arg2 addingBookmark:(_Bool)arg3;
- (id)initWithBookmark:(id)arg1 inCollection:(id)arg2 addingBookmark:(_Bool)arg3 toFavorites:(_Bool)arg4 willBeDisplayedModally:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
