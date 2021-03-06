//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetWriterInputHelper, AVAssetWriterInputPassDescriptionResponder, AVKeyPathDependencyManager, AVWeakReference, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface AVAssetWriterInputInternal : NSObject
{
    AVWeakReference *weakReference;
    AVAssetWriterInputHelper *helper;
    NSObject<OS_dispatch_queue> *helperQueue;
    AVWeakReference *weakReferenceToAttachedAdaptor;
    AVWeakReference *weakReferenceToAssetWriter;
    AVKeyPathDependencyManager *keyPathDependencyManager;
    int numberOfAppendFailures;
    NSObject<OS_dispatch_queue> *appendFailureReadWriteQueue;
    AVAssetWriterInputPassDescriptionResponder *passDescriptionResponder;
}

@end

