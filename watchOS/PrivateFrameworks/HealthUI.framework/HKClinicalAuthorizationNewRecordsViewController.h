//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthUI/HKViewController.h>

#import "HKHealthPrivacyServicePromptController.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class HKClinicalAuthorizationDisplayController, HKClinicalAuthorizationSequenceContext, NSString, UITableView;

@interface HKClinicalAuthorizationNewRecordsViewController : HKViewController <UITableViewDataSource, UITableViewDelegate, HKHealthPrivacyServicePromptController>
{
    HKClinicalAuthorizationSequenceContext *_context;
    id <HKHealthPrivacyServicePromptControllerDelegate> _delegate;
    UITableView *_tableView;
    HKClinicalAuthorizationDisplayController *_displayController;
    int _authorizationMode;
}

@property(nonatomic) int authorizationMode; // @synthesize authorizationMode=_authorizationMode;
@property(readonly, nonatomic) HKClinicalAuthorizationDisplayController *displayController; // @synthesize displayController=_displayController;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <HKHealthPrivacyServicePromptControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) HKClinicalAuthorizationSequenceContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateForCurrentContentSizeCategory;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)_shareAuthorizationModeCellPressed:(id)arg1;
- (void)_finishWithError:(id)arg1;
- (void)_doneButtonPressed:(id)arg1;
- (void)_updateShareAuthorizationModeSectionFooter;
- (id)_titleForShareAuthorizationModeFooter;
- (id)_formatStringForShareAuthorizationModeFooterWithMode:(int)arg1;
- (id)_shareAuthorizationModeCellForIndexPath:(id)arg1;
- (id)_visibleShareAuthorizationModeCellForMode:(int)arg1;
- (id)_indexPathForShareAuthorizationMode:(int)arg1;
- (int)_shareAuthorizationModeForIndexPath:(id)arg1;
- (_Bool)_indexPathIsValidRow:(id)arg1;
- (id)_createFooterView;
- (id)_createHeaderView;
- (void)_configureNavigationItem;
- (void)_configureTableView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithContext:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

