//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupFieldsViewController.h>

#import "PKExplanationViewDelegate.h"
#import "PKPeerPaymentAccountResolutionControllerDelegate.h"

@class NSArray, NSString, PKPeerPaymentIdentityVerificationController;

@interface PKPeerPaymentIdentityVerificationViewController : PKPaymentSetupFieldsViewController <PKExplanationViewDelegate, PKPeerPaymentAccountResolutionControllerDelegate>
{
    PKPeerPaymentIdentityVerificationController *_controller;
    NSArray *_visibleFieldIdentifiers;
    unsigned int _identityVerificaionError;
    NSString *_headerTitle;
    NSString *_headerSubtitle;
}

@property(retain, nonatomic) NSString *headerSubtitle; // @synthesize headerSubtitle=_headerSubtitle;
@property(retain, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
- (void).cxx_destruct;
- (void)_terminateFlow;
- (void)_handleCancelButtonTapped:(id)arg1;
- (void)_showNavigationBarSpinner:(_Bool)arg1;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)handleNextButtonTapped:(id)arg1;
- (id)visibleFieldIdentifiers;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(_Bool)arg2;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(_Bool)arg3;
- (id)pkui_navigationBarTintColor;
- (_Bool)pkui_prefersNavigationBarShadowHidden;
- (id)initWithController:(id)arg1 setupDelegate:(id)arg2 visibleFieldIdentifiers:(id)arg3;
- (id)initWithController:(id)arg1 visibleFieldIdentifiers:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

