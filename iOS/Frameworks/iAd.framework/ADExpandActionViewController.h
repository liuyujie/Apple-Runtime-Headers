//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iAd/ADActionViewController.h>

#import "WKNavigationDelegate.h"

@class ADCountdownButton, ADHomeButtonHandler, ADWebView, ADWebViewGestureRecognizer, NSString, NSURL, _WKRemoteObjectInterface;

@interface ADExpandActionViewController : ADActionViewController <WKNavigationDelegate>
{
    id <ADWebProcessProxy> _webProcessProxy;
    _Bool _adIsDismissing;
    _Bool _visible;
    _Bool _browserContextControllerDidLoad;
    _Bool _shouldBlockNavigation;
    _Bool _tapWasRecognized;
    ADWebView *_webView;
    ADCountdownButton *_dismissButton;
    NSURL *_URL;
    _WKRemoteObjectInterface *_remoteObjectInterface;
    ADWebViewGestureRecognizer *_gestureRecognizer;
    NSString *_creativeIdentifier;
    ADHomeButtonHandler *_homeButtonHandler;
    struct CGSize _maximumExpandedSize;
}

@property(retain, nonatomic) ADHomeButtonHandler *homeButtonHandler; // @synthesize homeButtonHandler=_homeButtonHandler;
@property(nonatomic) _Bool tapWasRecognized; // @synthesize tapWasRecognized=_tapWasRecognized;
@property(nonatomic) _Bool shouldBlockNavigation; // @synthesize shouldBlockNavigation=_shouldBlockNavigation;
@property(nonatomic) _Bool browserContextControllerDidLoad; // @synthesize browserContextControllerDidLoad=_browserContextControllerDidLoad;
@property(copy, nonatomic) NSString *creativeIdentifier; // @synthesize creativeIdentifier=_creativeIdentifier;
@property(retain, nonatomic) ADWebViewGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(retain, nonatomic) _WKRemoteObjectInterface *remoteObjectInterface; // @synthesize remoteObjectInterface=_remoteObjectInterface;
@property(nonatomic) struct CGSize maximumExpandedSize; // @synthesize maximumExpandedSize=_maximumExpandedSize;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) _Bool adIsDismissing; // @synthesize adIsDismissing=_adIsDismissing;
@property(retain, nonatomic) ADCountdownButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) ADWebView *webView; // @synthesize webView=_webView;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webProcessMRAIDJSODidCallOpen:(id)arg1;
- (void)webProcessMRAIDJSODidCallExpand:(id)arg1 withMaximumSize:(id)arg2;
- (void)webProcessMRAIDJSODidCallClose;
- (void)webProcessPlugInBrowserContextControllerGlobalObjectIsAvailableForFrame;
- (void)webProcessPlugInWillDestroyBrowserContextController;
- (void)webProcessPlugInDidCreateBrowserContextController;
- (void)_resetGestureFlags;
- (_Bool)_navigationIsBlocked;
- (void)_tapRecognized:(id)arg1;
- (id)_incrementCreativeIdentifier;
- (void)_requestOpenURL:(id)arg1;
- (void)_unregisterExportedObjectInterface;
- (void)_registerExportedObjectInterface;
- (void)_dismissKeyboard;
- (void)_dismissWithSystemEvent:(int)arg1;
- (void)_updateJSOExpandedSize;
- (void)_updateWebViewFrame;
- (void)_dismissButtonTapped;
- (void)dismiss;
@property(readonly, nonatomic) struct CGRect webViewFrame;
- (void)didSetAdSpace;
- (void)clientApplicationDidEnterBackground;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

