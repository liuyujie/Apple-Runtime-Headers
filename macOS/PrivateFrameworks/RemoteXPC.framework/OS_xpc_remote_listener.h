//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface OS_xpc_remote_listener : NSObject
{
    NSObject<OS_dispatch_queue> *queue;
    int type;
    CDUnknownBlockType accept_handler;
    CDUnknownBlockType cancel_handler;
    _Bool canceled;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
