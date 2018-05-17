//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BSBaseXPCClient.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface _CSLSSetViewOnWakeClient : BSBaseXPCClient
{
    NSMutableDictionary *_wakeItemsDictionary;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)queue_connectionWasInterrupted;
- (void)queue_handleMessage:(id)arg1;
- (void)_sendMessageType:(int)arg1 withMessage:(CDUnknownBlockType)arg2 withReplyHandler:(CDUnknownBlockType)arg3 waitForReply:(_Bool)arg4;
- (void)sendViewOnWakeMessage:(id)arg1 withID:(id)arg2 withPriority:(unsigned int)arg3 synchronous:(_Bool)arg4 whileActiveOnly:(_Bool)arg5;
- (void)_queue_setViewOnWake:(id)arg1 withID:(id)arg2 withPriority:(unsigned int)arg3 synchronous:(_Bool)arg4 whileActiveOnly:(_Bool)arg5;
- (void)setViewOnWake:(id)arg1 withID:(id)arg2 withPriority:(unsigned int)arg3 synchronous:(_Bool)arg4 whileActiveOnly:(_Bool)arg5;
- (id)init;

@end
