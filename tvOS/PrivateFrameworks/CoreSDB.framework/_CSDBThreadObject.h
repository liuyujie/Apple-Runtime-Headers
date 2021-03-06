//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSRunLoop, NSString, NSThread;

@interface _CSDBThreadObject : NSObject
{
    NSThread *_thread;
    NSString *_identifier;
    NSRunLoop *_runLoop;
    struct __CFRunLoopSource *_runLoopSource;
    NSString *_queueContext;
    NSObject<OS_dispatch_queue> *_queue;
}

- (_Bool)isCurrentThreadOtherwiseAssert:(_Bool)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 waitUntilDone:(_Bool)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1 afterDelay:(double)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (id)thread;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 qosClass:(unsigned short)arg2;
- (void)_threadedMain;

@end

