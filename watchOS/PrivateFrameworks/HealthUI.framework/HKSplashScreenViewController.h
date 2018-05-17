//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthUI/HKViewController.h>

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class HKSplashScreenView, NSMutableArray, NSString, UIButton;

@interface HKSplashScreenViewController : HKViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray *_splashItems;
    int _splashVersion;
}

+ (id)splashScreenForSplashScreenVersion:(int)arg1;
+ (void)markSplashScreenAtVersion:(int)arg1;
@property(nonatomic) int splashVersion; // @synthesize splashVersion=_splashVersion;
@property(retain, nonatomic) NSMutableArray *splashItems; // @synthesize splashItems=_splashItems;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)addSplashScreenViewControllerItem:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
@property(readonly, nonatomic) HKSplashScreenView *splashScreenView;
@property(readonly) UIButton *continueButton;
- (id)initForSplashScreenVersion:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
