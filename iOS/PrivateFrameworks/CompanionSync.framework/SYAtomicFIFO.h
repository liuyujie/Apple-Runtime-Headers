//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface SYAtomicFIFO : NSObject
{
    struct os_unfair_lock_s _lock;
    NSMutableArray *_store;
}

- (void).cxx_destruct;
@property(readonly) id tail;
@property(readonly) id head;
- (void)removeAllObjects;
- (id)dequeueUntil:(CDUnknownBlockType)arg1;
- (id)dequeue;
- (void)enqueue:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;

@end

