//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "VCUICreateVoiceShortcutViewControllerDelegate.h"

@class NSString, UITextView;

@interface VCUIActionDonationDetailsViewController : UIViewController <VCUICreateVoiceShortcutViewControllerDelegate>
{
    id <VCActionDonation> _donation;
}

+ (void)initialize;
@property(readonly, nonatomic) id <VCActionDonation> donation; // @synthesize donation=_donation;
- (void).cxx_destruct;
- (void)createVoiceShortcutViewController:(id)arg1 didCreateVoiceShortcut:(id)arg2;
- (void)createVoiceShortcutViewControllerDidCancel:(id)arg1;
- (void)createVoiceShortcut;
- (void)loadView;
- (id)initWithDonation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UITextView *view; // @dynamic view;

@end

