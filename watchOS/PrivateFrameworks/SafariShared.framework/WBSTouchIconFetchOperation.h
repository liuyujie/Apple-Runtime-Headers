//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SafariShared/WBSWebViewMetadataFetchOperation.h>

#import "WBSTouchIconObserver.h"

@class NSArray, NSSet, NSString, NSTimer, _WKRemoteObjectInterface;

@interface WBSTouchIconFetchOperation : WBSWebViewMetadataFetchOperation <WBSTouchIconObserver>
{
    _WKRemoteObjectInterface *_touchIconObserverInterface;
    NSTimer *_loadingTimeoutTimer;
    NSArray *_pendingTouchIconURLs;
    NSSet *_touchIconURLs;
    int _state;
    _Bool _allowFetchingOverCellularNetwork;
    CDUnknownBlockType _completionHandler;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)didFetchTouchIconURLs:(id)arg1 andFaviconURLs:(id)arg2 forURL:(id)arg3;
- (void)willClearWebView;
- (void)didCreateWebView;
- (void)didFailFetch;
- (void)_downloadPendingTouchIconURLs;
- (void)_downloadFirstValidImageWithURLs:(id)arg1 failureHandler:(CDUnknownBlockType)arg2;
- (void)_scheduleTimeoutWithTimeInterval:(double)arg1;
- (void)clearWebView;
- (void)startOffscreenFetching;
- (void)_tearDownRemoteObjectProxies;
- (void)_setUpRemoteObjectProxies;
- (void)didCompleteWithResult:(id)arg1;
- (void)loadRequest;
- (void)resetState;
- (id)webViewConfiguration;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned int hash;
@property(readonly, copy) NSString *description;
- (id)initWithRequest:(id)arg1 allowFetchingOverCellularNetwork:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
