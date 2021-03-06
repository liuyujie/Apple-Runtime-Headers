//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObjectContext.h"

@class NSMutableDictionary, NSMutableSet, NSObject<OS_xpc_object>, PLDelayedFiledSystemDeletions, PLDelayedSaveActions, PLMergePolicy, PLPhotoLibrary;

@interface PLManagedObjectContext : NSManagedObjectContext
{
    _Bool _hasMetadataChanges;
    _Bool _isConnectedToChangeHub;
    _Bool _mergingChanges;
    _Bool _savingDuringMerge;
    _Bool _isInitializingSingletons;
    _Bool _isLoadingPhotoLibrary;
    _Bool _isBackingALAssetsLibrary;
    _Bool _isObservingChangesForPTPNotificationDelegate;
    PLMergePolicy *_mergePolicy;
    PLDelayedFiledSystemDeletions *_delayedDeletions;
    NSMutableSet *_avalancheUUIDsForUpdate;
    NSMutableDictionary *_uuidsForCloudDeletion;
    _Bool _syncChangeMarker;
    NSMutableDictionary *_updatedObjectsAttributes;
    NSMutableDictionary *_updatedObjectsRelationships;
    PLPhotoLibrary *_photoLibrary;
    id <PLManagedObjectContextPTPNotificationDelegate> _ptpNotificationDelegate;
    PLDelayedSaveActions *_delayedSaveActions;
    _Bool _regenerateVideoThumbnails;
    NSObject<OS_xpc_object> *changeHubConnection;
    int _changeSource;
}

+ (id)sanitizedErrorFromError:(id)arg1;
+ (_Bool)assetsLibraryLoggingEnabled;
+ (void)handleUnknownMergeEvent;
+ (_Bool)_isAssetLibraryFetchingAlbum:(id)arg1;
+ (void)mergeChangesFromRemoteContextSave:(id)arg1 intoAllContextsNotIdenticalTo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)mergeIntoAllContextsChangesFromRemoteContextSave:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)changeNotificationObjectIDKeys;
+ (id)changeNotificationObjectIDMutationKeys;
+ (id)changeNotificationObjectKeys;
+ (id)changeNotificationObjectMutationKeys;
+ (void)recordChangedKeys:(id)arg1 forObjectID:(id)arg2 inAttributesByOID:(id)arg3 relationshipsByOID:(id)arg4;
+ (void)recordChangedProperties:(id)arg1 forObjectID:(id)arg2 inAttributesByOID:(id)arg3 relationshipsByOID:(id)arg4;
+ (id)relationshipNamesForIndexValues:(unsigned long long)arg1 entity:(id)arg2;
+ (unsigned long long)indexValueForRelationshipNames:(id)arg1 entity:(id)arg2;
+ (id)attributeNamesForIndexValues:(unsigned long long)arg1 entity:(id)arg2;
+ (unsigned long long)indexValueForAttributeNames:(id)arg1 entity:(id)arg2;
+ (id)_propertyNamesForIndexValues:(unsigned long long)arg1 entity:(id)arg2 propertyNamesByIndexByEntityNames:(id)arg3;
+ (unsigned long long)_indexValueForPropertyNames:(id)arg1 entityName:(id)arg2 indexesByPropertyNamesByEntityNames:(id)arg3;
+ (id)_indexesByRelationshipNamesByEntityNames;
+ (id)_relationshipNamesByIndexByEntityNames;
+ (id)_indexesByAttributeNamesByEntityNames;
+ (id)_attributeNamesByIndexByEntityNames;
+ (void)__prepareEntityPropertyLookups;
+ (id)allContextsNotIdenticalTo:(id)arg1;
+ (id)allContexts;
+ (id)sharedContextList;
+ (id)sharedPersistentStoreCoordinator;
+ (_Bool)shouldUseXPCPhotoLibraryStore;
+ (id)managedObjectModel;
+ (id)managedObjectModelURL;
+ (_Bool)storeIsOldEnough;
+ (void)_getStoreURL:(id *)arg1 options:(id *)arg2 forFileURL:(id)arg3 enableNotifications:(_Bool)arg4;
+ (void)_getStoreURL:(id *)arg1 options:(id *)arg2 enableNotifications:(_Bool)arg3;
+ (void)getStoreURL:(id *)arg1 options:(id *)arg2;
+ (void)getStoreURL:(id *)arg1;
+ (_Bool)hasConfiguredPhotoLibrary;
+ (void)_configurePersistentStoreCoordinator:(id)arg1;
+ (_Bool)_rebuildAndRetryPersistentStoreWithURL:(id)arg1 options:(id)arg2 coordinator:(id)arg3 forced:(_Bool)arg4;
+ (_Bool)_openAndMigrateStoreWithURL:(id)arg1 options:(id)arg2 coordinator:(id)arg3 forceSourceModelVersion:(id)arg4;
+ (void)recordVersion:(int)arg1 forStore:(id)arg2 extraMetadata:(id)arg3;
+ (_Bool)hasAtLeastOneAsset;
+ (id)databasePath;
+ (_Bool)databaseIsMissing;
+ (void)removeAsidePhotosDatabase;
+ (void)removePhotosDatabase;
+ (_Bool)_destroyPhotosDatabaseAndMoveOldStoreAside:(_Bool)arg1;
+ (id)_asideDatabasePath;
+ (_Bool)canMergeRemoteChanges;
+ (_Bool)_shouldRequestModelMigratorCreateDatabaseOnRebuildAndRetry;
+ (id)contextForDatabaseCreation:(const char *)arg1;
+ (id)contextForPhotoLibrary:(id)arg1 name:(const char *)arg2;
@property(nonatomic) _Bool isBackingALAssetsLibrary; // @synthesize isBackingALAssetsLibrary=_isBackingALAssetsLibrary;
@property(nonatomic) _Bool isLoadingPhotoLibrary; // @synthesize isLoadingPhotoLibrary=_isLoadingPhotoLibrary;
@property(nonatomic) _Bool isInitializingSingletons; // @synthesize isInitializingSingletons=_isInitializingSingletons;
@property(nonatomic) int changeSource; // @synthesize changeSource=_changeSource;
@property(nonatomic) _Bool regenerateVideoThumbnails; // @synthesize regenerateVideoThumbnails=_regenerateVideoThumbnails;
@property(nonatomic) _Bool hasMetadataChanges; // @synthesize hasMetadataChanges=_hasMetadataChanges;
@property(retain, nonatomic) PLDelayedFiledSystemDeletions *delayedDeletions; // @synthesize delayedDeletions=_delayedDeletions;
@property(readonly, nonatomic) _Bool savingDuringMerge; // @synthesize savingDuringMerge=_savingDuringMerge;
@property(readonly, nonatomic) _Bool mergingChanges; // @synthesize mergingChanges=_mergingChanges;
@property(nonatomic) NSObject<OS_xpc_object> *changeHubConnection; // @synthesize changeHubConnection;
- (void)tearDownLocalChangeNotifications;
- (void)setupLocalChangeNotifications;
- (void)_informPTPDelegateAboutChangesFromRemoteContextSaveNotification:(id)arg1;
- (void)_getInsertedIDs:(id)arg1 deletedIDs:(id)arg2 changedIDs:(id)arg3 adjustedIDs:(id)arg4 ofEntityKind:(id)arg5 fromRemoteContextDidSaveObjectIDsNotification:(id)arg6;
- (_Bool)_adjustmentTimestampChangedChangedAttribute:(id)arg1 from:(id)arg2;
- (void)_mergeChangesFromDidSaveDictionary:(id)arg1 usingObjectIDs:(_Bool)arg2;
- (void)_notifyALAssetsLibraryWithChanges:(id)arg1 usingObjectIDs:(_Bool)arg2;
- (id)pl_fetchObjectsWithIDs:(id)arg1;
- (id)pl_fetchObjectsWithIDs:(id)arg1 rootEntity:(id)arg2;
- (_Bool)_tooManyAssetChangesToHandle:(unsigned int)arg1;
- (void)updateTransactionAuthor;
- (_Bool)getAndClearSyncChangeMarker;
- (void)recordSyncChangeMarker;
- (id)getAndClearRecordedObjectsForCloudDeletion;
- (void)_addCloudUUID:(id)arg1 forDeletionType:(int)arg2;
- (void)recordCloudDeletionForObject:(id)arg1;
- (id)getAndClearRecordedAvalancheUUIDsForUpdate;
- (void)recordAvalancheUUIDForUpdate:(id)arg1;
- (void)registerFilesystemDeletionInfo:(id)arg1;
- (_Bool)hasPreviouslyMergedDeleteForObject:(id)arg1;
- (void)_destroyDelayedSaveActions;
- (void)_createDelayedSaveActionsWithTransaction:(id)arg1;
@property(readonly, retain, nonatomic) PLDelayedSaveActions *delayedSaveActions;
- (void)getAndClearUpdatedObjectsAttributes:(id *)arg1 relationships:(id *)arg2;
- (void)_recordChangedKeys:(id)arg1 forObjectID:(id)arg2;
- (void)recordChangesFromTriggerModifiedObjectIDs:(id)arg1;
- (void)recordManagedObjectWillSave:(id)arg1;
- (void)disconnectFromChangeHub;
- (void)connectToChangeHub;
- (_Bool)obtainPermanentIDsForObjects:(id)arg1 error:(id *)arg2;
- (_Bool)save:(id *)arg1;
- (unsigned int)countForFetchRequest:(id)arg1 error:(id *)arg2;
- (id)executeFetchRequest:(id)arg1 error:(id *)arg2;
- (id)existingObjectWithID:(id)arg1 error:(id *)arg2;
- (id)pathManager;
- (_Bool)isReadOnly;
- (void)withDispatchGroup:(id)arg1 performBlock:(CDUnknownBlockType)arg2;
- (void)setGlobalValue:(id)arg1 forKey:(id)arg2;
- (id)globalValueForKey:(id)arg1;
@property(readonly, nonatomic) _Bool isUserInterfaceContext;
@property(nonatomic) id <PLManagedObjectContextPTPNotificationDelegate> ptpNotificationDelegate; // @synthesize ptpNotificationDelegate=_ptpNotificationDelegate;
@property(nonatomic) PLPhotoLibrary *photoLibrary;
- (void)dealloc;
- (id)initWithConcurrencyType:(unsigned int)arg1 useSharedPersistentStoreCoordinator:(_Bool)arg2;

@end

