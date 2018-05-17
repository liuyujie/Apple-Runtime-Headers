//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "VSAutoAuthenticationViewController.h"
#import "VSAutoAuthenticationViewDelegate.h"

@class NSString, UITapGestureRecognizer, VSActivityIndicatorViewController, VSAutoAuthenticationView, VSAutoAuthenticationViewModel, VSViewModel;

__attribute__((visibility("hidden")))
@interface VSAutoAuthenticationViewController_tvOS : UIViewController <VSAutoAuthenticationViewDelegate, VSAutoAuthenticationViewController>
{
    _Bool _cancellationAllowed;
    id <VSAuthenticationViewControllerDelegate> _delegate;
    VSAutoAuthenticationViewModel *_viewModel;
    VSAutoAuthenticationView *_autoAuthenticationView;
    UITapGestureRecognizer *_menuRecognizer;
    VSActivityIndicatorViewController *_signingInIndicatorViewController;
}

@property(retain, nonatomic) VSActivityIndicatorViewController *signingInIndicatorViewController; // @synthesize signingInIndicatorViewController=_signingInIndicatorViewController;
@property(retain, nonatomic) UITapGestureRecognizer *menuRecognizer; // @synthesize menuRecognizer=_menuRecognizer;
@property(retain, nonatomic) VSAutoAuthenticationView *autoAuthenticationView; // @synthesize autoAuthenticationView=_autoAuthenticationView;
@property(readonly, nonatomic) VSViewModel *viewModel;
@property(nonatomic) __weak id <VSAuthenticationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isCancellationAllowed) _Bool cancellationAllowed; // @synthesize cancellationAllowed=_cancellationAllowed;
- (void).cxx_destruct;
- (void)_showAutoAuthenticationView;
- (void)_hideAutoAuthenticationView;
- (void)_hideSigningInIndicatorViewController;
- (void)_showSigningInIndicatorViewController;
- (void)_presentError:(id)arg1;
- (void)_menuButtonPressed:(id)arg1;
- (void)_stopObservingViewModel:(id)arg1;
- (void)_startObservingViewModel:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)autoAuthenticationViewDidSelectManualSignIn:(id)arg1;
- (void)autoAuthenticationViewDidSelectSignIn:(id)arg1;
@property(readonly, nonatomic) struct CGSize preferredLogoSize;
- (void)setViewModel:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
