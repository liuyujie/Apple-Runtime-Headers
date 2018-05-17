//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PepperUICore/PUICActionContentController.h>

#import "PUICTableViewDataSource.h"
#import "PUICTableViewDelegate.h"

@class NSArray, NSIndexPath, NSString, PUICStatusBarOccludedAssertion, PUICTableView;

@interface PUICActionSheetController : PUICActionContentController <PUICTableViewDataSource, PUICTableViewDelegate>
{
    PUICStatusBarOccludedAssertion *_statusBarOccludedAssertion;
    _Bool _allowsMultipleSelection;
    NSArray *_groups;
    PUICTableView *_tableView;
    NSIndexPath *_lastSelectedIndexPath;
}

+ (void)_setupActionSheetControllerSpec;
+ (id)actionSheetControllerWithActions:(id)arg1 title:(id)arg2;
+ (id)actionSheetControllerWithGroups:(id)arg1;
+ (id)actionSheetController;
@property(retain, nonatomic) NSIndexPath *lastSelectedIndexPath; // @synthesize lastSelectedIndexPath=_lastSelectedIndexPath;
@property(retain, nonatomic) PUICTableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(nonatomic) _Bool allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
@property(readonly, copy, nonatomic) NSArray *selectedRows;
- (void)setGroups:(id)arg1 reloadSheet:(_Bool)arg2;
- (void)reloadActionSheet;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <PUICActionSheetControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
