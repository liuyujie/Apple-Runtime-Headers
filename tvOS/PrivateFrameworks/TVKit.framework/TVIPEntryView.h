//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TVPasscodeDigitViewDelegate.h"

@class NSArray, NSString, UIButton;

@interface TVIPEntryView : UIView <TVPasscodeDigitViewDelegate>
{
    id <TVIPEntryViewDelegate> _delegate;
    NSArray *_digitViews;
    NSArray *_dotViews;
    NSString *_ipString;
    UIButton *_doneButton;
}

@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) NSString *ipString; // @synthesize ipString=_ipString;
@property(retain, nonatomic) NSArray *dotViews; // @synthesize dotViews=_dotViews;
@property(retain, nonatomic) NSArray *digitViews; // @synthesize digitViews=_digitViews;
@property(nonatomic) __weak id <TVIPEntryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)_octetForBlockIndex:(unsigned long long)arg1;
- (void)_updateDigitLimits;
- (void)doneButton:(id)arg1;
- (void)passcodeDigitView:(id)arg1 didChangeText:(id)arg2;
- (void)passcodeDigitViewDidResignFirstResponder:(id)arg1;
- (void)passcodeDigitViewDidBecomeFirstResponder:(id)arg1;
@property(copy, nonatomic) NSString *IPAddress;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)preferredFocusEnvironments;
- (_Bool)canBecomeFocused;
- (id)initWithIPAddress:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

