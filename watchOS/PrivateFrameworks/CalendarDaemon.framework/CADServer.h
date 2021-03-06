//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CalActivatable.h"
#import "ClientConnectionDelegate.h"
#import "DatabaseChangeHandling.h"
#import "NSXPCListenerDelegate.h"

@class BirthdayCalendarManager, CDBDataProtectionObserver, LocalAttachmentCleanUpSupport, NSArray, NSLock, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSString, NSXPCListener;

@interface CADServer : NSObject <NSXPCListenerDelegate, ClientConnectionDelegate, DatabaseChangeHandling, CalActivatable>
{
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _backgroundTaskCount;
    NSXPCListener *_NSXPCListener;
    NSObject<OS_xpc_object> *_xpcConnection;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    BirthdayCalendarManager *_birthdayManager;
    LocalAttachmentCleanUpSupport *_localAttachmentCleanupManager;
    NSMutableSet *_clientConnections;
    NSLock *_connectionLock;
    unsigned int _birthdayManagerGeneration;
    NSArray *_signalSensors;
    _Bool _active;
    CDBDataProtectionObserver *_dataProtectionObserver;
    NSArray *_modules;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) NSArray *modules; // @synthesize modules=_modules;
@property(retain, nonatomic) CDBDataProtectionObserver *dataProtectionObserver; // @synthesize dataProtectionObserver=_dataProtectionObserver;
- (void).cxx_destruct;
- (void)_enableICloudBackups;
- (void)_dumpState;
- (void)_exitWithStatus:(int)arg1;
- (void)_deactivateAndExitWithStatus:(int)arg1;
-     // Error parsing type: v12@0:4^{CalDatabase={__CFRuntimeBase=IAI}i^{CPRecordStore}^{CalEventOccurrenceCache}^{CalScheduledTaskCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=l[40c]}II^{__CFArray}^{__CFString}^{__CFArray}ii^{__CFString}^{__CFString}^{__CFString}i@?{_opaque_pthread_mutex_t=l[40c]}B^{__CFArray}^{__CFArray}^{__CFArray}^{__CFArray}B@B}8, name: idleChangeTrackingClientCleanupDatabase:
-     // Error parsing type: v12@0:4^{CalDatabase={__CFRuntimeBase=IAI}i^{CPRecordStore}^{CalEventOccurrenceCache}^{CalScheduledTaskCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=l[40c]}II^{__CFArray}^{__CFString}^{__CFArray}ii^{__CFString}^{__CFString}^{__CFString}i@?{_opaque_pthread_mutex_t=l[40c]}B^{__CFArray}^{__CFArray}^{__CFArray}^{__CFArray}B@B}8, name: identityOrphanCleanupDatabase:
- (void)_registerForIdleChangeTrackingClientCleanup;
- (void)_registerForIdentityOrphanCleanup;
- (void)_registerMaintenanceActivities;
- (void)_registerForNotifications;
- (void)_updateOccurrenceCacheTimeZone;
- (_Bool)_trimAndExtendOccurrenceCache;
- (void)_tearDownSignalHandlers;
- (void)_setUpSignalHandlers;
- (void)_stopBirthdayManager;
- (void)_startBirthdayManager;
- (void)_protectedDataDidBecomeAvailable;
- (void)_finishInitializationWithDataAvailable;
- (void)_handleXPCConnection:(id)arg1;
- (void)clientConnectionDied:(id)arg1;
- (void)_handleDatabaseChanged;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)deactivate;
- (void)activate;
- (void)dealloc;
- (id)initWithModules:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

