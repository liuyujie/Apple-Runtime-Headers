//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NPTOWatchCollectionList, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface NPTOSyncInfo : NSObject
{
    NPTOWatchCollectionList *_collectionsList;
    _Bool _isSyncing;
    NSObject<OS_dispatch_queue> *_workQ;
    NSMutableDictionary *_observers;
}

+ (id)sharedSyncInfo;
- (void).cxx_destruct;
- (void)_queue_notifyOfChangeForTarget:(int)arg1 collections:(id)arg2;
- (void)_queue_syncStatusChanged:(_Bool)arg1;
- (void)_queue_watchCollectionsChanged;
- (void)_queue_open;
- (void)_handleSyncStatusChangedNotification:(id)arg1;
- (void)_handleWatchCollectionsChanged:(id)arg1;
- (void)_enterForeground:(id)arg1;
- (void)_enterBackground:(id)arg1;
- (_Bool)isSyncing;
- (id)collectionsForCollectionTarget:(int)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 forCollectionTarget:(int)arg2;
- (void)dealloc;
- (id)init;

@end

