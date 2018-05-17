//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PSYSyncStateObserverDelegate.h"

@class NSMapTable, NSObject<OS_dispatch_queue>, NSString, PSYSyncStateObserver, PSYWatchSyncClientState;

@interface PSYSyncClientStateObserver : NSObject <PSYSyncStateObserverDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _supportsMigrationSync;
    PSYSyncStateObserver *_legacySyncStateObserver;
    PSYWatchSyncClientState *_syncState;
    NSMapTable *_syncClientObservers;
    NSMapTable *_syncStateObservers;
}

+ (id)sharedSyncSessionState;
@property(retain, nonatomic) NSMapTable *syncStateObservers; // @synthesize syncStateObservers=_syncStateObservers;
@property(retain, nonatomic) NSMapTable *syncClientObservers; // @synthesize syncClientObservers=_syncClientObservers;
- (void).cxx_destruct;
- (void)syncStateObserverDidChangeSyncState:(id)arg1;
- (void)_queue_enumerateSyncStateObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)_queue_enumerateSyncClientObserversWithBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) PSYWatchSyncClientState *syncState; // @synthesize syncState=_syncState;
- (void)_refreshSyncState;
- (int)_syncStateForActivity:(id)arg1;
- (int)syncStateForActivity:(id)arg1;
- (void)removeSyncStateObserver:(id)arg1;
- (void)addSyncStateObserver:(id)arg1;
- (void)removeSyncClientObserver:(id)arg1 forActivity:(id)arg2;
- (void)addSyncClientObserver:(id)arg1 forActivity:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
