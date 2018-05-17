//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface WRMClientInterface : NSObject
{
    NSObject<OS_xpc_object> *mConnection;
    int mProcessId;
    NSObject<OS_dispatch_queue> *mQueue;
    CDUnknownBlockType mNotificationBlock;
}

- (void)unregisterClient;
- (void)registerClient:(int)arg1 queue:(id)arg2 notificationHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

@end
