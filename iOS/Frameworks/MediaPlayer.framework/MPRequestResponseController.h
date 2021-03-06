//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface MPRequestResponseController : NSObject
{
    long long _numberOfObservers;
    long long _requestRevision;
    _Bool _shouldAutomaticallyLoad;
    _Bool _needsReload;
    id <MPRequestCancellationToken> _cancelToken;
    double _retryInterval;
    NSObject<OS_dispatch_source> *_retryTimer;
    id _request;
    id _response;
    id <MPRequestResponseControllerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // @synthesize calloutQueue=_calloutQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <MPRequestResponseControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_onQueue_reloadIfNeeded;
- (void)_onQueue_scheduleRetryAfterInterval:(double)arg1;
- (void)_responseDidInvalidate:(id)arg1;
- (void)reloadIfNeeded;
- (void)setNeedsReloadForSignificantRequestChange;
- (void)setNeedsReload;
- (void)endAutomaticResponseLoading;
- (void)beginAutomaticResponseLoading;
@property(retain, nonatomic) id response; // @synthesize response=_response;
@property(retain, nonatomic) id request; // @synthesize request=_request;
- (id)init;

@end

