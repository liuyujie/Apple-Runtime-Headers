//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDataDelegate.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSURLSession;

__attribute__((visibility("hidden")))
@interface AVAssetCustomURLBridgeForNSURLSession : NSObject <NSURLSessionDataDelegate>
{
    NSMutableDictionary *_taskToRequest;
    NSURLSession *_session;
    struct OpaqueFigCustomURLHandler *_handler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void)dealloc;
- (id)initWithFigAsset:(struct OpaqueFigAsset *)arg1;
- (id)init;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (long)_cancelRequestID:(unsigned long long)arg1;
- (long)_handleRequest:(struct __CFDictionary *)arg1 requestID:(unsigned long long)arg2 canHandleRequestOut:(_Bool *)arg3;
- (id)_lookupRequestForDataTask:(id)arg1;
- (void)_unregisterRequestForDataTask:(id)arg1;
- (void)_registerRequest:(struct __CFDictionary *)arg1 id:(unsigned long long)arg2 forDataTask:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

