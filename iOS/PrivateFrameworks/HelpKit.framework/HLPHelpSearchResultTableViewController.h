//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class NSArray, UILabel, UIView;

@interface HLPHelpSearchResultTableViewController : UITableViewController
{
    UILabel *_footerLabel;
    NSArray *_searchResults;
    UIView *_footerView;
}

@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateWithSearchText:(id)arg1 searchResults:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end
