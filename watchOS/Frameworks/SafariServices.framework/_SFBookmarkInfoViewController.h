//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SafariServices/_SFPopoverSizingTableViewController.h>

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "_SFBookmarkTextEntryTableViewControllerDelegate.h"

@class NSArray, NSString, UITextField, WebBookmark, WebBookmarkCollection, _SFBookmarkTextEntryTableViewCell, _SFSiteIconView;

@interface _SFBookmarkInfoViewController : _SFPopoverSizingTableViewController <_SFBookmarkTextEntryTableViewControllerDelegate, UITableViewDataSource, UITableViewDelegate>
{
    WebBookmarkCollection *_collection;
    WebBookmark *_parentBookmark;
    _Bool _addingBookmark;
    _Bool _saveWhenDismissed;
    _SFBookmarkTextEntryTableViewCell *_titleCell;
    _SFBookmarkTextEntryTableViewCell *_addressCell;
    _SFSiteIconView *_iconImageView;
    unsigned int _editingField;
    _Bool _didSelectFolder;
    _Bool _folderPickerExpanded;
    _Bool _addingToFavorites;
    NSArray *_folders;
    int _selectedFolderIndex;
    UITextField *_textFieldToRestoreFirstResponder;
    id <_SFBookmarkInfoViewControllerDelegate> _delegate;
    WebBookmark *_bookmark;
}

@property(retain, nonatomic) WebBookmark *bookmark; // @synthesize bookmark=_bookmark;
@property(nonatomic) __weak id <_SFBookmarkInfoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
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
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)_iconForViewCellGivenBookmark:(id)arg1;
- (id)_cellForParentBookmarkWithTableView:(id)arg1;
- (id)_cellForExpandedFolderAtIndex:(int)arg1 withTableView:(id)arg2;
- (id)_dequeueFolderPickerCellFromTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)_numberOfExpandedFolderPickerRows;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)_editField:(unsigned int)arg1;
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
- (void)didRotateFromInterfaceOrientation:(int)arg1;
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
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

