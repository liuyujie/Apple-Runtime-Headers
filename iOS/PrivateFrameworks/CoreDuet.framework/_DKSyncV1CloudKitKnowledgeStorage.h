//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKContainer, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSOperationQueue, _DKKnowledgeStorage;

@interface _DKSyncV1CloudKitKnowledgeStorage : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    CKContainer *_container;
    id <_DKKeyValueStore> _keyValueStore;
    _DKKnowledgeStorage *_storage;
    NSObject<OS_dispatch_group> *_group;
    NSOperationQueue *_operationQueue;
}

+ (void)setupWithStorage:(id)arg1;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property __weak _DKKnowledgeStorage *storage; // @synthesize storage=_storage;
@property(retain) id <_DKKeyValueStore> keyValueStore; // @synthesize keyValueStore=_keyValueStore;
@property(retain) CKContainer *container; // @synthesize container=_container;
@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (_Bool)_enqueueDatabaseOperation:(id)arg1;
- (id)_previousServerChangeTokenForRecordZoneID:(id)arg1;
- (id)_previousServerChangeTokenKeyForRecordZoneID:(id)arg1;
- (void)_resetPreviousServerChangeTokenForRecordZoneID:(id)arg1;
- (void)_setPreviousServerChangeToken:(id)arg1 forRecordZoneID:(id)arg2;
- (void)syncDown;
- (id)getLegacySyncToken;
- (id)initWithStorage:(id)arg1;

@end

