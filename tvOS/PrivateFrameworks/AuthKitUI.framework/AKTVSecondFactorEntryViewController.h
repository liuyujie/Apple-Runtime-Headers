//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "_TVDigitEntryViewControllerDelegate.h"

@class NSString, _TVDigitEntryViewController;

@interface AKTVSecondFactorEntryViewController : UIViewController <_TVDigitEntryViewControllerDelegate>
{
    _Bool _didPerformAction;
    CDUnknownBlockType _ak_cancelAction;
    CDUnknownBlockType _ak_regenerateCodeAction;
    CDUnknownBlockType _ak_codeEnteredAction;
    _TVDigitEntryViewController *_pinViewController;
    id _codeEntryObserver;
}

@property(nonatomic) _Bool didPerformAction; // @synthesize didPerformAction=_didPerformAction;
@property(retain, nonatomic) id codeEntryObserver; // @synthesize codeEntryObserver=_codeEntryObserver;
@property(readonly, nonatomic) _TVDigitEntryViewController *pinViewController; // @synthesize pinViewController=_pinViewController;
@property(copy, nonatomic) CDUnknownBlockType ak_codeEnteredAction; // @synthesize ak_codeEnteredAction=_ak_codeEnteredAction;
@property(copy, nonatomic) CDUnknownBlockType ak_regenerateCodeAction; // @synthesize ak_regenerateCodeAction=_ak_regenerateCodeAction;
@property(copy, nonatomic) CDUnknownBlockType ak_cancelAction; // @synthesize ak_cancelAction=_ak_cancelAction;
- (void).cxx_destruct;
- (void)performCancelAction;
- (void)performRegenerateCodeAction;
- (void)performCodeEnteredAction;
- (void)digitEntryViewControllerDidFinish:(id)arg1;
- (void)digitEntryViewControllerDidCancel:(id)arg1;
- (void)_resendCode:(id)arg1;
- (void)jiggleDigitField;
@property(copy, nonatomic) NSString *reason;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

