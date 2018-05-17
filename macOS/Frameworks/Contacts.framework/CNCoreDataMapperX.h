//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNDataMapper.h"

@class CNCDPersistenceStack, NSString;

__attribute__((visibility("hidden")))
@interface CNCoreDataMapperX : NSObject <CNDataMapper>
{
    CNCDPersistenceStack *_persistenceStack;
}

+ (id)defaultContactsStoreDirectoryURL;
+ (BOOL)useAddressBookStack;
- (void).cxx_destruct;
- (BOOL)clearChangeHistoryForClientIdentifier:(id)arg1 toChangeAnchor:(id)arg2 error:(id *)arg3;
- (id)changeHistoryWithFetchRequest:(id)arg1 error:(id *)arg2;
- (BOOL)unregisterChangeHistoryClientIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)registerChangeHistoryClientIdentifier:(id)arg1 error:(id *)arg2;
- (id)_smartGroupsMatchingPredicate:(id)arg1 contactStore:(id)arg2;
- (id)_smartGroupsForAccountsWithIdentifiers:(id)arg1 contactStore:(id)arg2;
- (BOOL)_saveCustomPropertyValuesForRemoteRecords:(id)arg1 error:(id *)arg2;
- (BOOL)_saveAddedCustomProperties:(id)arg1 deletedCustomProperties:(id)arg2 error:(id *)arg3;
- (id)_persistentStoreURLForRecordWithIdentifier:(id)arg1;
- (id)_infosForAccountsWithIdentifiers:(id)arg1 error:(id *)arg2;
- (id)_groupsMatchingCoreDataPredicate:(id)arg1 error:(id *)arg2;
- (id)_customPropertyValuesForRecordWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)_createInfo;
- (id)_allCustomProperties;
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (BOOL)requestAccessForEntityType:(long long)arg1 error:(id *)arg2;
- (void)requestAccessForEntityType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)defaultContainerIdentifier;
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)groupsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)accountsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)containersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (BOOL)executeSaveRequest:(id)arg1 response:(id *)arg2 error:(id *)arg3;
- (BOOL)executeSaveRequest:(id)arg1 error:(id *)arg2;
- (BOOL)setMeContact:(id)arg1 error:(id *)arg2;
- (id)meContactIdentifiers:(id *)arg1;
- (id)contactObservableForFetchRequest:(id)arg1;
- (void)setNotificationSource:(id)arg1;
- (id)initWithPersistenceStack:(id)arg1;
- (id)initWithContactsEnvironment:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
