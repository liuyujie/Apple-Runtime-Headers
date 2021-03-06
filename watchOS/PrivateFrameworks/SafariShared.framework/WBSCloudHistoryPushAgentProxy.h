//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSCloudHistoryPushAgent.h"

@class NSString, NSXPCConnection;

@interface WBSCloudHistoryPushAgentProxy : NSObject <WBSCloudHistoryPushAgent>
{
    NSXPCConnection *_agentConnection;
}

- (void).cxx_destruct;
- (void)clearAcknowledgedPushNotifications;
- (void)acknowledgePendingPushNotifications;
- (void)queryMemoryFootprint:(CDUnknownBlockType)arg1;
- (id)queryMemoryFootprintWithError:(id *)arg1;
- (void)getPushNotifications:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

