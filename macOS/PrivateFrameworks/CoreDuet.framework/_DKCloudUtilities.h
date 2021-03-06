//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface _DKCloudUtilities : NSObject
{
    NSObject<OS_dispatch_queue> *_fetchQueue;
    BOOL _supportsDeviceToDeviceEncryption;
    BOOL _isSingleDevice;
}

+ (BOOL)isSyncAvailableAndEnabledWithVerboseLogging:(BOOL)arg1;
+ (BOOL)isSyncAvailableAndEnabled;
+ (void)setUnitTesting:(BOOL)arg1;
+ (BOOL)isUnitTesting;
+ (void)setCloudKitEnabled:(BOOL)arg1;
+ (BOOL)isCloudKitEnabled;
+ (id)containerIdentifier;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_performUpdateNumberOfSyncedDevicesWithAttempt:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_performUpdateNumberOfSyncedDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_updateNumberOfSyncedDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)deleteRemoteStateWithReply:(CDUnknownBlockType)arg1;
- (void)_updateAccountInfo:(id)arg1 error:(id)arg2;
- (void)_fetchAccountInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_fetchCloudKitConfigurationAndStatus;
- (void)_accountDidChange:(id)arg1;
@property(readonly, nonatomic) BOOL supportsDeviceToDeviceEncryption;
@property(readonly, nonatomic) BOOL isSiriCloudSyncEnabled;
@property(readonly, nonatomic) BOOL isSingleDevice;
- (void)setCloudSyncAvailable:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isCloudSyncAvailable;
- (id)containerKeyValueStore;
- (id)keyValueStore;
- (void)dealloc;
- (id)init;

@end

