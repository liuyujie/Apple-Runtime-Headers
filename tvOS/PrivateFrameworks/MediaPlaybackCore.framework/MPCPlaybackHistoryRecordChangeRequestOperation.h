//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPAsyncOperation.h"

@class MPCPlaybackHistoryRecordChangeRequest, NSOperationQueue;

@interface MPCPlaybackHistoryRecordChangeRequestOperation : MPAsyncOperation
{
    NSOperationQueue *_operationQueue;
    MPCPlaybackHistoryRecordChangeRequest *_request;
    CDUnknownBlockType _responseHandler;
}

@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) MPCPlaybackHistoryRecordChangeRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)_finishChangeRequestOperationWithError:(id)arg1;
- (void)execute;

@end

