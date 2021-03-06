//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetResourceLoadingRequest, NSDictionary, NSNumber, NSURL;

@interface TVPResourceLoadingRequest : NSObject
{
    AVAssetResourceLoadingRequest *_loadingRequest;
}

@property(readonly, nonatomic) AVAssetResourceLoadingRequest *loadingRequest; // @synthesize loadingRequest=_loadingRequest;
- (void).cxx_destruct;
- (id)init;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, copy, nonatomic) NSNumber *avRequestID;
- (void)finishLoadingWithError:(id)arg1;
- (void)finishLoadingWithResponseData:(id)arg1 renewalDate:(id)arg2;
- (void)finishLoadingWithResponse:(id)arg1 data:(id)arg2 renewalDate:(id)arg3 redirect:(id)arg4;
@property(readonly, nonatomic) _Bool isCancelled;
@property(readonly, nonatomic) NSURL *URL;
- (id)initWithAssetResourceLoadingRequest:(id)arg1;

@end

