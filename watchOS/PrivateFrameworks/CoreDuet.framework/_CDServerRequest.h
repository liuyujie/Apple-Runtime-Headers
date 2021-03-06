//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDelegate.h"
#import "NSURLSessionDownloadDelegate.h"

@class NSHTTPURLResponse, NSMutableData, NSMutableURLRequest, NSOperationQueue, NSString, NSURLSession;

@interface _CDServerRequest : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate>
{
    CDUnknownBlockType _responseHandler;
    NSOperationQueue *_sessionQueue;
    NSURLSession *_session;
    NSMutableURLRequest *_request;
    NSHTTPURLResponse *_httpResponse;
    NSMutableData *_responseData;
}

+ (void)addHTTPIfModifiedSinceToHeaders:(id)arg1 date:(id)arg2;
@property(retain) NSMutableData *responseData; // @synthesize responseData=_responseData;
@property(retain) NSHTTPURLResponse *httpResponse; // @synthesize httpResponse=_httpResponse;
@property(retain) NSMutableURLRequest *request; // @synthesize request=_request;
@property(retain) NSURLSession *session; // @synthesize session=_session;
@property(retain) NSOperationQueue *sessionQueue; // @synthesize sessionQueue=_sessionQueue;
@property(copy) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
@property(readonly, copy) NSString *description;
- (id)startDataTaskWithURI:(id)arg1 headers:(id)arg2 timeoutInterval:(double)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (id)startDownloadTaskWithURI:(id)arg1 headers:(id)arg2 timeoutInterval:(double)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (id)_requestForMethod:(id)arg1 URI:(id)arg2 queryItems:(id)arg3 headers:(id)arg4 body:(id)arg5 timeoutInterval:(double)arg6;
- (id)_newDefaultSession;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

