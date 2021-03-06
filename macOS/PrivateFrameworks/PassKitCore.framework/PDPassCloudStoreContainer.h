//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PDCloudStoreContainer.h>

@interface PDPassCloudStoreContainer : PDCloudStoreContainer
{
    id <PDCloudStorePassManager> _passManager;
    BOOL _canInitializeContainer;
}

+ (void)invalidateServerChangeTokens;
- (void).cxx_destruct;
- (id)_ubiquitousCatalogOfRecord;
- (id)_catalogOfRecord;
- (BOOL)_isRemoteAssetItemFromRecordType:(id)arg1;
- (BOOL)_isPassCatalogItemFromRecordType:(id)arg1;
- (BOOL)_isPassItemFromRecordType:(id)arg1;
- (BOOL)_canInitializeContainer;
- (void)cloudStoreAccountChanged:(id)arg1;
- (void)readCachedContainerValues;
- (void)saveCachedContainerValues;
- (void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)processFetchedCloudStoreDataWithModifiedRecords:(id)arg1 deletedRecords:(id)arg2 operationGroupName:(id)arg3 shouldUpdateLocalDatabase:(BOOL)arg4 userInfo:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)setContainerState:(unsigned long long)arg1 retryCount:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)recordTypeForRecordID:(id)arg1;
- (BOOL)canInitializeContainer;
- (id)initWithDataSource:(id)arg1 passManager:(id)arg2;

@end

