//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

#import "PLSyncablePerson.h"

@class NSDictionary, NSSet, NSString, PLDetectedFace, PLDetectedFaceGroup;

@interface PLPerson : PLManagedObject <PLSyncablePerson>
{
}

+ (_Bool)resetAllWithError:(id *)arg1;
+ (id)predicateForPersistence;
+ (id)predicateForVisibleKeyFace;
+ (id)predicateForPersonsNeedingFaceCropGenerationForFaceObjectID:(id)arg1;
+ (id)_stringFromContact:(id)arg1 preferGivenName:(_Bool)arg2;
+ (id)displayNameFromContact:(id)arg1;
+ (id)fullNameFromContact:(id)arg1;
+ (void)batchFetchAssociatedPersonByFaceGroupUUIDWithFaceGroupUUIDs:(id)arg1 predicate:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)fetchPersonCountByAssetUUIDForAssetUUIDs:(id)arg1 predicate:(id)arg2 error:(id *)arg3;
+ (void)batchFetchPersonsByAssetUUIDWithAssetUUIDs:(id)arg1 predicate:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)batchFetchPersonUUIDsByAssetUUIDWithAssetUUIDs:(id)arg1 predicate:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)_batchFetchPersonUUIDsByAssetUUIDWithAssetUUIDs:(id)arg1 predicate:(id)arg2 inManagedObjectContext:(id)arg3 error:(id *)arg4;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (void)createAssociatedPersonForFaceGroup:(id)arg1 inManagedObjectContext:(id)arg2;
+ (void)createAssociatedPersonForFaceGroup:(id)arg1;
+ (id)personsWithUUIDs:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)personsWithPersonUri:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)allPersonsInManagedObjectContext:(id)arg1;
+ (id)personWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)personsMatchingPredicate:(id)arg1 fetchLimit:(unsigned int)arg2 sortDescriptors:(id)arg3 relationshipKeyPathsForPrefetching:(id)arg4 inManagedObjectContext:(id)arg5;
+ (id)insertIntoManagedObjectContext:(id)arg1 withPersonUUID:(id)arg2 fullName:(id)arg3 verifiedType:(int)arg4;
+ (id)insertIntoPhotoLibrary:(id)arg1 withPersonUUID:(id)arg2 fullName:(id)arg3 verifiedType:(int)arg4;
+ (void)enumerateAssetUUIDsForSearchIndexingWithPersonUUID:(id)arg1 managedObjectContext:(id)arg2 assetUUIDHandler:(CDUnknownBlockType)arg3;
+ (_Bool)person:(id)arg1 isBetterMergeTargetThanPerson:(id)arg2;
+ (void)resetCloudStateInPhotoLibrary:(id)arg1 hardReset:(_Bool)arg2;
+ (id)personsToPrefetchInManagedObjectContext:(id)arg1;
+ (id)personsToUploadInManagedObjectContext:(id)arg1 limit:(int)arg2;
+ (id)_predicateForSupportedVerifiedTypesForUpload;
+ (id)listOfSyncedProperties;
- (_Bool)dedupeGraphPersons:(id)arg1 error:(id *)arg2;
- (void)mergePersons:(id)arg1 withOptimalState:(id)arg2;
- (void)basicMergePersons:(id)arg1;
- (void)_basicMergePersons:(id)arg1;
- (id)finalMergeTargetPerson;
- (id)pickKeyFaceOptimalStateForContactDedupeWithPersons:(id)arg1;
- (void)prepareForUserInitiatedMergeWithPersons:(id)arg1;
- (id)reverseOrderedMergeTargetPersons;
- (id)pickOptimalStateForUserInitiatedMergeWithPersons:(id)arg1 nominalTarget:(id)arg2;
- (id)_nameRelatedMetadataKeys;
- (void)persistMetadataToFileSystem;
- (_Bool)isValidForPersistence;
- (void)refreshInvalidMergeCandidates;
- (void)refereshMergeCandidates;
- (void)refreshFaceCrops;
- (void)refreshRejectedFaces;
- (void)refreshFaces;
- (void)_refreshRelationshipForKey:(id)arg1;
@property(nonatomic) int effectiveVerifiedType;
- (void)rejectFaceIfPossible:(id)arg1 shouldCreateFaceCrop:(_Bool)arg2;
- (void)resetAllFacesToDefault;
- (id)faceGroupDescription;
- (id)debugLogDescription;
- (void)setKeyFace:(id)arg1 pickSource:(short)arg2;
- (id)mutableInvalidMergeCandidates;
- (id)mutableMergeCandidates;
- (id)mutableFaceCrops;
- (id)mutableRejectedFacesNeedingFaceCrops;
- (id)mutableRejectedFaces;
- (id)mutableFaces;
- (void)willSave;
- (void)prepareForDeletion;
- (_Bool)shouldIndexForSearch;
- (id)syncDescription;
@property(readonly, nonatomic) _Bool isTombstone;
@property(readonly, nonatomic) _Bool graphVerified;
@property(readonly, nonatomic) _Bool userVerified;
- (void)setKeyFaceToPicked;
@property(readonly, nonatomic) _Bool keyFaceIsPicked;
@property(readonly, retain, nonatomic) id localID;
- (void)setCPLSyncedMergeTarget:(id)arg1;
- (id)cplPersonChange;
- (id)cplFullRecord;
- (_Bool)isSyncableChange;
- (_Bool)supportsCloudUpload;

// Remaining properties
@property(retain, nonatomic) PLDetectedFaceGroup *associatedFaceGroup; // @dynamic associatedFaceGroup;
@property(nonatomic) short cloudLocalState; // @dynamic cloudLocalState;
@property(nonatomic) int cloudVerifiedType; // @dynamic cloudVerifiedType;
@property(retain, nonatomic) NSSet *clusterRejectedFaces; // @dynamic clusterRejectedFaces;
@property(retain, nonatomic) NSDictionary *contactMatchingDictionary; // @dynamic contactMatchingDictionary;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSSet *detectedFaces; // @dynamic detectedFaces;
@property(retain, nonatomic) NSString *displayName; // @dynamic displayName;
@property(readonly, nonatomic) int faceCount; // @dynamic faceCount;
@property(retain, nonatomic) NSSet *faceCrops; // @dynamic faceCrops;
@property(retain, nonatomic) NSString *fullName; // @dynamic fullName;
@property(readonly) unsigned int hash;
@property(nonatomic) _Bool inPersonNamingModel; // @dynamic inPersonNamingModel;
@property(retain, nonatomic) NSSet *invalidMergeCandidates; // @dynamic invalidMergeCandidates;
@property(retain, nonatomic) PLDetectedFace *keyFace; // @dynamic keyFace;
@property(nonatomic) short keyFacePickSource; // @dynamic keyFacePickSource;
@property(nonatomic) unsigned int manualOrder; // @dynamic manualOrder;
@property(retain, nonatomic) NSSet *mergeCandidates; // @dynamic mergeCandidates;
@property(retain, nonatomic) NSSet *mergeSourcePersons; // @dynamic mergeSourcePersons;
@property(retain, nonatomic) PLPerson *mergeTargetPerson; // @dynamic mergeTargetPerson;
@property(retain, nonatomic) NSSet *personReferences; // @dynamic personReferences;
@property(retain, nonatomic) NSString *personUUID; // @dynamic personUUID;
@property(retain, nonatomic) NSString *personUri; // @dynamic personUri;
@property(retain, nonatomic) NSSet *rejectedFaces; // @dynamic rejectedFaces;
@property(retain, nonatomic) NSSet *rejectedFacesNeedingFaceCrops; // @dynamic rejectedFacesNeedingFaceCrops;
@property(readonly) Class superclass;
@property(nonatomic) int type; // @dynamic type;
@property(nonatomic) int verifiedType; // @dynamic verifiedType;

@end
