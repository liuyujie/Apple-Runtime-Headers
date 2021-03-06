//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSIndexPath, NSString, UITableView;

@interface VCUIAlternativeTranscriptionsView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    id <VCUIAlternativeTranscriptionsViewDelegate> _delegate;
    NSArray *_alternativeTranscriptions;
    UITableView *_tableView;
    NSIndexPath *_selectedIndexPath;
}

@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, copy, nonatomic) NSArray *alternativeTranscriptions; // @synthesize alternativeTranscriptions=_alternativeTranscriptions;
@property(nonatomic) __weak id <VCUIAlternativeTranscriptionsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (id)initWithAlternativeTranscriptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

