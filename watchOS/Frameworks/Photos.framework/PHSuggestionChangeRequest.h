//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PHInsertChangeRequest.h"
#import "PHUpdateChangeRequest.h"

@class NSManagedObjectID, NSString, PHChangeRequestHelper, PHObjectPlaceholder, PHRelationshipChangeRequestHelper;

@interface PHSuggestionChangeRequest : NSObject <PHInsertChangeRequest, PHUpdateChangeRequest>
{
    _Bool _clientEntitled;
    PHChangeRequestHelper *_helper;
    NSString *_clientName;
    int _clientProcessID;
    PHRelationshipChangeRequestHelper *_keyAssetsHelper;
    PHRelationshipChangeRequestHelper *_representativeAssetsHelper;
}

+ (void)deleteSuggestions:(id)arg1;
+ (id)changeRequestForSuggestion:(id)arg1;
+ (_Bool)canGenerateUUIDWithoutEntitlements;
+ (id)creationRequestForSuggestion;
+ (id)creationRequestForSuggestionWithType:(unsigned short)arg1 subtype:(unsigned short)arg2 keyAssets:(id)arg3 representativeAssets:(id)arg4 creationDate:(id)arg5 relevantUntilDate:(id)arg6 version:(int)arg7;
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *representativeAssetsHelper; // @synthesize representativeAssetsHelper=_representativeAssetsHelper;
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *keyAssetsHelper; // @synthesize keyAssetsHelper=_keyAssetsHelper;
@property(readonly, nonatomic) int clientProcessID; // @synthesize clientProcessID=_clientProcessID;
@property(readonly, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly, nonatomic, getter=isClientEntitled) _Bool clientEntitled; // @synthesize clientEntitled=_clientEntitled;
@property(readonly, nonatomic) PHChangeRequestHelper *helper; // @synthesize helper=_helper;
- (void).cxx_destruct;
- (void)_calculateAndSetExpungeDate;
- (void)didMutate;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, getter=isMutated) _Bool mutated;
@property(readonly, getter=isNew) _Bool new;
- (_Bool)applyMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (void)markReactivated;
- (void)markRetired;
- (void)markDeclined;
- (void)markAccepted;
- (void)markActive;
- (void)setStartAndEndDatesWithKeyAssets:(id)arg1 representativeAssets:(id)arg2;
- (void)setFeaturesProperties:(id)arg1;
- (void)setActionProperties:(id)arg1;
- (void)setRepresentativeAssets:(id)arg1;
- (void)setKeyAssets:(id)arg1;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) NSString *title;
- (void)setFeaturesData:(id)arg1;
- (id)featuresData;
- (void)setActionData:(id)arg1;
- (id)actionData;
- (void)setExpungeDate:(id)arg1;
- (id)expungeDate;
- (void)setRelevantUntilDate:(id)arg1;
- (id)relevantUntilDate;
- (void)setActivationDate:(id)arg1;
- (id)activationDate;
- (void)setEndDate:(id)arg1;
- (id)endDate;
- (void)setStartDate:(id)arg1;
- (id)startDate;
- (void)setCreationDate:(id)arg1;
- (id)creationDate;
- (void)setVersion:(int)arg1;
- (int)version;
@property(nonatomic) unsigned short notificationState;
- (void)setState:(unsigned short)arg1;
- (unsigned short)state;
- (void)setSubtype:(unsigned short)arg1;
- (unsigned short)subtype;
- (void)setType:(unsigned short)arg1;
- (unsigned short)type;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (_Bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
@property(readonly, nonatomic) NSString *managedEntityName;
- (_Bool)validateMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (_Bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id *)arg3;
- (_Bool)prepareForPhotoLibraryCheck:(id)arg1 error:(id *)arg2;
- (_Bool)prepareForServicePreflightCheck:(id *)arg1;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initForNewObject;
@property(readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedSuggestion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
