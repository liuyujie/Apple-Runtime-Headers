//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PUICViewController.h"

@class NSString, PUICStatusBarGlobalContextViewAssertion, SFNanoTransitionController, UIImageView, UILabel, WKWebView;

__attribute__((visibility("hidden")))
@interface SFNanoPageInfoViewController : PUICViewController
{
    WKWebView *_webView;
    UILabel *_domainLabel;
    UIImageView *_securityIndicator;
    SFNanoTransitionController *_transitionController;
    _Bool _isSecure;
    NSString *_domain;
    PUICStatusBarGlobalContextViewAssertion *_statusBarAssertion;
}

+ (void)initialize;
- (void).cxx_destruct;
- (_Bool)prefersStatusBarHidden;
- (void)backButtonTapped;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithDomain:(id)arg1 isSecure:(_Bool)arg2;

@end

