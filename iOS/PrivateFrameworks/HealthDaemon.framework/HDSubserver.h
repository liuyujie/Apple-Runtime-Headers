//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HDDiagnosticObject.h"

@class HDDaemon, HDHealthStoreServer, HDProfile, HDXPCClient, NSObject<OS_dispatch_queue>, NSString;

@interface HDSubserver : NSObject <HDDiagnosticObject>
{
    HDDaemon *_daemon;
    HDHealthStoreServer *_server;
    HDXPCClient *_client;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) HDXPCClient *client; // @synthesize client=_client;
@property(readonly, nonatomic) __weak HDHealthStoreServer *server; // @synthesize server=_server;
@property(readonly, nonatomic) __weak HDDaemon *daemon; // @synthesize daemon=_daemon;
- (void).cxx_destruct;
- (id)diagnosticDescription;
- (void)requirePrivateHealthKitEntitlementUsingBlock:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)requireEntitlement:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)invalidate;
- (id)initWithParentServer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

