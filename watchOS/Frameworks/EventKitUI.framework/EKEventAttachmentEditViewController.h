//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKEditItemViewController.h>

#import "EKEventAttachmentCellControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UITableView;

__attribute__((visibility("hidden")))
@interface EKEventAttachmentEditViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate, EKEventAttachmentCellControllerDelegate>
{
    UITableView *_table;
    NSArray *_cellControllers;
    id <EKEventAttachmentEditViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <EKEventAttachmentEditViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)owningEventForAttachmentCellController:(id)arg1;
- (id)parentViewControllerForAttachmentCellController:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithFrame:(struct CGRect)arg1 attachments:(id)arg2 sourceIsManaged:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

