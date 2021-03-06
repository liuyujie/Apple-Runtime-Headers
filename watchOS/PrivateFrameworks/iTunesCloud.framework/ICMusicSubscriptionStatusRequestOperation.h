//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesCloud/ICAsyncOperation.h>

@class ICMusicSubscriptionStatusRequest;

@interface ICMusicSubscriptionStatusRequestOperation : ICAsyncOperation
{
    ICMusicSubscriptionStatusRequest *_request;
    CDUnknownBlockType _responseHandler;
}

@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(readonly, copy, nonatomic) ICMusicSubscriptionStatusRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)_performSubscriptionStatusURLRequestWithRequestContext:(id)arg1 subscriptionStatusURL:(id)arg2 allowsAuthentication:(_Bool)arg3 maximumRetryCount:(unsigned int)arg4 completion:(CDUnknownBlockType)arg5;
- (void)execute;
- (id)initWithRequest:(id)arg1;

@end

