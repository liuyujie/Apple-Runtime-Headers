//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "LAUIAuthenticationViewControllerDelegate.h"
#import "PreferencesViewController.h"

@class LAUIAuthenticationViewController, NSObject<InlineAuthorizationViewControllerDelegate>, NSString;

__attribute__((visibility("hidden")))
@interface InlineAuthorizationViewController : NSViewController <LAUIAuthenticationViewControllerDelegate, PreferencesViewController>
{
    LAUIAuthenticationViewController *_laViewController;
    NSString *_title;
    NSString *_subtitle;
    NSString *_subtitleNoTouchID;
    NSString *_dfrMessage;
    NSObject<InlineAuthorizationViewControllerDelegate> *_delegate;
}

+ (id)viewControllerForPasswordsAuthorization;
@property(nonatomic) __weak NSObject<InlineAuthorizationViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancelAuthentication;
- (void)_processAuthenticationResult:(BOOL)arg1 error:(id)arg2;
- (void)loadView;
- (void)focusDefaultViewWithHostWindow:(id)arg1;
- (void)attemptAuthorization;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 subtitleNoTouchID:(id)arg3 dfrMessage:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double minimumPaneHeight;
@property(readonly) Class superclass;

@end

