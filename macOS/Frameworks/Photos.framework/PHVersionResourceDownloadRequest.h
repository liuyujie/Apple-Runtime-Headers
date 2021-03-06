//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Photos/PHAssetResourceDownloadRequest.h>

@class NSArray, PFDispatchQueue, RDVersionResourceRequest;

@interface PHVersionResourceDownloadRequest : PHAssetResourceDownloadRequest
{
    BOOL _completed;
    PFDispatchQueue *_queue;
    NSArray *_cloudResourceTypes;
    RDVersionResourceRequest *_resourceRequest;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic, getter=isCompleted) BOOL completed; // @synthesize completed=_completed;
@property(retain, nonatomic) RDVersionResourceRequest *resourceRequest; // @synthesize resourceRequest=_resourceRequest;
@property(readonly, nonatomic) NSArray *cloudResourceTypes; // @synthesize cloudResourceTypes=_cloudResourceTypes;
@property(readonly, nonatomic) PFDispatchQueue *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)cancel;
- (void)submit:(CDUnknownBlockType)arg1;
- (id)initWithAssetResource:(id)arg1 cloudResourceTypes:(id)arg2;

@end

