//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>;

@interface AVSampleBufferRenderSynchronizerInternal : NSObject
{
    float rate;
    struct OpaqueCMTimebase *readOnlyTimebase;
    NSMutableArray *renderers;
    NSMutableArray *timedRenderRemovals;
    NSObject<OS_dispatch_queue> *figSynchronizerAccessQueue;
    NSObject<OS_dispatch_queue> *rendererListQueue;
    struct OpaqueFigSampleBufferRenderSynchronizer *figSynchronizer;
}

@end
