//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Vision/VNPersonsModel.h>

@class NSDate, NSMutableDictionary, NSMutableIndexSet, VNPersonsModelFaceModel;

@interface VNMutablePersonsModel : VNPersonsModel
{
    VNPersonsModelFaceModel *_faceModel_DO_NOT_ACCESS_DIRECTLY;
    NSMutableDictionary *_personUniqueIdentifierToSerialNumberMapping;
    NSMutableDictionary *_serialNumberToFaceprintsMapping;
    NSMutableIndexSet *_availablePersonSerialNumbers;
    NSDate *_lastModificationDate;
}

+ (id)newModelFromVersion:(unsigned long long)arg1 objects:(id)arg2 error:(id *)arg3;
+ (id)supportedWriteVersions;
+ (id)_version2ModelWithObjects:(id)arg1 error:(id *)arg2;
+ (id)_version1ModelWithObjects:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (void)removePersonWithUniqueIdentifier:(id)arg1;
- (void)removeAllFaceObservationsFromPersonWithUniqueIdentifier:(id)arg1;
- (BOOL)removeFaceObservations:(id)arg1 fromPersonWithUniqueIdentifier:(id)arg2 error:(id *)arg3;
- (BOOL)addFaceprints:(id)arg1 toPersonWithUniqueIdentifier:(id)arg2 error:(id *)arg3;
- (BOOL)addFaceObservations:(id)arg1 toPersonWithUniqueIdentifier:(id)arg2 error:(id *)arg3;
- (BOOL)writeToURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)dataWithOptions:(id)arg1 error:(id *)arg2;
- (BOOL)_writeToUnopenedStream:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (BOOL)writeToStream:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (BOOL)_getModelWritingImplementation:(CDUnknownFunctionPointerType *)arg1 selector:(SEL *)arg2 version:(unsigned long long *)arg3 forOptions:(id)arg4;
- (BOOL)_getModelWritingImplementation:(CDUnknownFunctionPointerType *)arg1 selector:(SEL *)arg2 forVersion:(unsigned long long)arg3 readOnly:(BOOL)arg4;
- (id)faceCountsForAllPersons;
- (id)faceCountsForPersonsWithUniqueIdentifiers:(id)arg1;
- (unsigned long long)faceCountForPersonWithUniqueIdentifier:(id)arg1;
- (id)personUniqueIdentifiers;
- (unsigned long long)personCount;
- (BOOL)writeReadOnlyVersion2ToOutputStream:(id)arg1 options:(id)arg2 md5Context:(struct CC_MD5state_st *)arg3 error:(id *)arg4;
- (BOOL)writeVersion2ToOutputStream:(id)arg1 options:(id)arg2 md5Context:(struct CC_MD5state_st *)arg3 error:(id *)arg4;
- (BOOL)writeReadOnlyVersion1ToOutputStream:(id)arg1 options:(id)arg2 md5Context:(struct CC_MD5state_st *)arg3 error:(id *)arg4;
- (BOOL)_writeReadOnlyVersion:(unsigned long long)arg1 toOutputStream:(id)arg2 options:(id)arg3 md5Context:(struct CC_MD5state_st *)arg4 error:(id *)arg5;
- (BOOL)writeVersion1ToOutputStream:(id)arg1 options:(id)arg2 md5Context:(struct CC_MD5state_st *)arg3 error:(id *)arg4;
- (BOOL)_writeVersion1ConfigurationToOutputStream:(id)arg1 md5Context:(struct CC_MD5state_st *)arg2 error:(id *)arg3;
- (BOOL)_writeVersion1InformationToOutputStream:(id)arg1 md5Context:(struct CC_MD5state_st *)arg2 error:(id *)arg3;
- (id)upToDateFaceModelWithCanceller:(id)arg1 error:(id *)arg2;
- (unsigned long long)faceprintCountForPersonWithUniqueIdentifier:(id)arg1;
- (id)identitySerialNumberForPersonWithUniqueIdentifier:(id)arg1;
- (id)description;
- (void)_removeExistingFaceprints:(id)arg1 fromPersonWithUniqueIdentifier:(id)arg2;
- (void)_removeExistingFaceprints:(id)arg1 fromIdentityWithSerialNumber:(id)arg2;
- (void)_removePersonWithUniqueIdentifier:(id)arg1;
- (void)_removeAllFaceprintsFromIdentityWithSerialNumber:(id)arg1;
- (BOOL)_addUniqueFaceprints:(id)arg1 toPersonWithUniqueIdentifier:(id)arg2 error:(id *)arg3;
- (id)_uniqueFaceprintsWithRegistrationState:(BOOL)arg1 forFaceObservations:(id)arg2 ofPersonWithUniqueIdentifier:(id)arg3 error:(id *)arg4;
- (id)_uniqueFaceprintsWithRegistrationState:(BOOL)arg1 forFaceprints:(id)arg2 ofPersonWithUniqueIdentifier:(id)arg3 error:(id *)arg4;
- (id)_requestNewIdentitySerialNumberAndReturnError:(id *)arg1;
- (void)_modelWasModified;
- (id)initWithConfiguration:(id)arg1;

@end
