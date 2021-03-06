//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVCaptureAudioDataOutputSampleBufferDelegate.h"
#import "AVCaptureDepthDataOutputDelegate.h"
#import "AVCaptureMetadataOutputObjectsDelegate.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"

@class AVCaptureDataOutputSynchronizerInternal, NSArray, NSObject<OS_dispatch_queue>, NSString;

@interface AVCaptureDataOutputSynchronizer : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate, AVCaptureMetadataOutputObjectsDelegate, AVCaptureDepthDataOutputDelegate>
{
    AVCaptureDataOutputSynchronizerInternal *_internal;
}

+ (void)initialize;
- (void)_dispatchSynchronizedDataWithTimestamp:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)_earliestSlaveSynchronizedDataQueueTimestamp;
- (_Bool)_allSlaveSynchronizedDataOutputsContainTimestampEqualToOrGreaterThanMasterTimestamp:(CDStruct_1b6d18a9)arg1;
- (void)_adjustSynchronizedDataTimestamps;
- (void)_dispatchRipenedSynchronizedData;
- (void)_appendSynchronizedData:(id)arg1 forCaptureOutput:(id)arg2;
- (void)_overrideDataOutputDelegatesForDelegateCallbackQueue:(id)arg1;
- (void)_createTimestampHistoryQueuesForMetadataOutputStoragesWithNoTimestampAdjustmentQueues;
- (void)_assignTimestampAdjustmentQueueToDataOutputStorageWithCommonProvenance;
- (int)_computedMasterSynchronizedDataQueueMaxDepthForDataOutputs:(id)arg1;
- (void)depthDataOutput:(id)arg1 didDropDepthData:(id)arg2 timestamp:(CDStruct_1b6d18a9)arg3 connection:(id)arg4 reason:(int)arg5;
- (void)depthDataOutput:(id)arg1 didOutputDepthData:(id)arg2 timestamp:(CDStruct_1b6d18a9)arg3 connection:(id)arg4;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property(readonly, nonatomic) id <AVCaptureDataOutputSynchronizerDelegate> delegate;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
@property(readonly, retain) NSArray *dataOutputs;
- (void)dealloc;
- (id)initWithDataOutputs:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

