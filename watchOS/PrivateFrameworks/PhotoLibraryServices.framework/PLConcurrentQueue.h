//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>;

@interface PLConcurrentQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableArray *_internalQueue_pendingBlocks;
    int _internalQueue_usedWidth;
    NSObject<OS_dispatch_queue> *_targetQueue;
    int _width;
}

@property(readonly, nonatomic) int width; // @synthesize width=_width;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // @synthesize targetQueue=_targetQueue;
- (void)_internalQueue_tryDispatchingNextPendingBlock;
- (void)dispatchAsync:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithTargetQueue:(id)arg1 width:(int)arg2;
- (id)init;

@end

