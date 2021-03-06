//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"
#import "RWIDriverInterfaceDelegate.h"
#import "RWIManagerDelegate.h"
#import "WDServiceHost.h"
#import "WDSessionProvider.h"
#import "WDXPCService.h"

@class NSArray, NSMutableArray, NSString, NSTimer, WDHTTPDriverInterface, WDRemoteSessionManager;

@interface WDHTTPService : NSObject <RWIManagerDelegate, RWIDriverInterfaceDelegate, WDSessionProvider, WDServiceHost, NSXPCListenerDelegate, WDXPCService>
{
    WDRemoteSessionManager *_sessionManager;
    NSTimer *_inactivityAfterDisconnectTimer;
    WDHTTPDriverInterface *_driver;
    NSMutableArray *_driverClients;
}

+ (void)initialize;
@property(readonly, nonatomic) NSMutableArray *driverClients; // @synthesize driverClients=_driverClients;
@property(readonly, nonatomic) WDHTTPDriverInterface *driver; // @synthesize driver=_driver;
- (void).cxx_destruct;
- (void)fetchAttributesForLocalFiles:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)launchApplication:(id)arg1 forHost:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)destroySession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestSessionWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSArray *sessions;
- (BOOL)requestDriver:(id)arg1 shouldBeActive:(BOOL)arg2;
- (void)manager:(id)arg1 didRemoveTarget:(id)arg2;
- (void)manager:(id)arg1 didAddTarget:(id)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)driverInterface:(id)arg1 stateChanged:(long long)arg2;
- (void)stopServerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startServerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)configureServerWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getServerStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)_allowIncomingClientConnection:(id)arg1;
- (void)_inactivityAfterDisconnectTimerFired:(id)arg1;
- (void)_startInactivityAfterDisconnectTimer;
- (void)_removeDriverClient:(id)arg1;
- (void)_addDriverClient:(id)arg1;
- (CDUnknownBlockType)_defaultErrorHandler;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

