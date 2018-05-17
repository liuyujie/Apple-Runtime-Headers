//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPAsyncOperation.h"

#import "MPMiddlewareOperation.h"

@class MPCFuture, MPCMediaRemoteMiddleware, MPCPlayerRequest, NSArray, NSError, NSString;

@interface MPCMediaRemoteMiddlewarePlaybackStateOperation : MPAsyncOperation <MPMiddlewareOperation>
{
    CDUnknownBlockType _invalidationHandler;
    NSArray *_invalidationObservers;
    MPCMediaRemoteMiddleware *_middleware;
    MPCPlayerRequest *_playerRequest;
    MPCFuture *_playbackStateFuture;
}

@property(retain, nonatomic) MPCFuture *playbackStateFuture; // @synthesize playbackStateFuture=_playbackStateFuture;
@property(retain, nonatomic) MPCPlayerRequest *playerRequest; // @synthesize playerRequest=_playerRequest;
@property(retain, nonatomic) MPCMediaRemoteMiddleware *middleware; // @synthesize middleware=_middleware;
@property(readonly, nonatomic) NSArray *invalidationObservers; // @synthesize invalidationObservers=_invalidationObservers;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
- (void).cxx_destruct;
- (id)timeoutDescription;
- (void)execute;
- (id)initWithMiddleware:(id)arg1 playerRequest:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSError *error;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
