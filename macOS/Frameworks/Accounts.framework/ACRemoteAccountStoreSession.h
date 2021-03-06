//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCProxyCreating.h"

@class NSString, NSXPCConnection;

@interface ACRemoteAccountStoreSession : NSObject <NSXPCProxyCreating>
{
    NSXPCConnection *_connection;
    struct os_unfair_lock_s _connectionLock;
    BOOL _hasConfiguredRemoteAccountStore;
    BOOL _xpcConnectionHasBeenInvalidated;
    BOOL _notificationsEnabled;
    NSString *_spoofedBundleID;
}

@property(nonatomic) BOOL notificationsEnabled; // @synthesize notificationsEnabled=_notificationsEnabled;
@property(copy, nonatomic) NSString *spoofedBundleID; // @synthesize spoofedBundleID=_spoofedBundleID;
- (void).cxx_destruct;
- (void)disconnect;
- (void)connect;
- (void)_configureRemoteAccountStoreIfNecessary;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxy;
- (void)_setConnectionInvalidated;
- (void)_setConnectionInterrupted;
- (id)_connection;
- (void)_configureConnection;
- (id)initWithXPCConnection:(id)arg1;

@end

