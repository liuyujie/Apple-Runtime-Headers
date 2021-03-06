//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSData, NSString, WBSCloudHistoryConfiguration;

@protocol WBSCloudHistoryDataStore
- (void)replayPersistedLongLivedSaveOperationWithID:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)fetchNumberOfDevicesInSyncCircleWithCompletion:(void (^)(unsigned long long, NSError *))arg1;
- (void)fetchRecordsWithServerChangeTokenData:(NSData *)arg1 completion:(void (^)(WBSCloudHistoryFetchResult *, unsigned long long, NSError *))arg2;
- (void)saveCloudHistoryVisits:(NSArray *)arg1 tombstones:(NSArray *)arg2 longLivedOperationPersistenceCompletion:(void (^)(NSString *))arg3 completion:(void (^)(NSError *))arg4;
- (void)initializePushNotifications:(void (^)(NSError *))arg1;
- (id)initWithConfiguration:(WBSCloudHistoryConfiguration *)arg1;
@end

