//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BSBaseXPCClient.h"

#import "FBSServiceFacilityClientMessaging.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface FBSServiceFacilityXPCClient : BSBaseXPCClient <FBSServiceFacilityClientMessaging>
{
    id <FBSServiceFacilityXPCClientDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    BOOL _connectionDenied;
    BOOL _invalidated;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // @synthesize calloutQueue=_calloutQueue;
- (void).cxx_destruct;
- (void)queue_handleMessage:(id)arg1;
- (void)queue_handleError:(id)arg1;
- (void)queue_connectionWasCreated;
- (void)queue_clientWasInvalidated;
- (void)sendMessage:(id)arg1 withType:(long long)arg2 replyHandler:(CDUnknownBlockType)arg3 waitForReply:(BOOL)arg4 timeout:(double)arg5;
- (void)sendMessage:(id)arg1 withType:(long long)arg2;
@property(retain, nonatomic) id <FBSServiceFacilityXPCClientDelegate> delegate;
- (void)dealloc;
- (id)initWithCalloutQueue:(id)arg1 endpoint:(id)arg2;
- (id)initWithServiceName:(id)arg1 endpoint:(id)arg2;
- (id)initWithCalloutQueue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

