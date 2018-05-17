//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PKEditPassesDetailsResponder.h"
#import "PKEditPassesPerformanceTestResponder.h"
#import "PKPassDeleteHandler.h"
#import "WLCardViewDelegate.h"

@class NSString, PKGroup, PKPass, PKPassView, UIBarButtonItem;

@interface PKEditSinglePassViewController : UIViewController <WLCardViewDelegate, PKPassDeleteHandler, PKEditPassesPerformanceTestResponder, PKEditPassesDetailsResponder>
{
    PKGroup *_group;
    PKPass *_pass;
    PKPassView *_passView;
    UIBarButtonItem *_deleteBarButton;
    UIBarButtonItem *_flexibleSpace;
    long long _performanceTest;
    NSString *_performanceTestName;
}

- (void).cxx_destruct;
- (void)showPassDetails;
- (void)passView:(id)arg1 didPresentPassDetailsViewController:(id)arg2;
- (id)pass;
- (id)group;
- (void)disableDeleteButton;
- (void)enableDeleteButton;
- (void)_deletePassConfirmed;
- (void)_deletePassPressed;
- (_Bool)handleDeletePassRequestWithPass:(id)arg1 forViewController:(id)arg2;
- (void)passWasUpdated:(id)arg1;
- (void)passViewSetup;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setPerformanceTestName:(id)arg1;
- (void)setPerformanceTest:(long long)arg1;
- (id)initWithGroup:(id)arg1 pass:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
