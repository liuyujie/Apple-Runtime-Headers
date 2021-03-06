//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSError.h"

@interface PKCloudStoreError : NSError
{
}

+ (BOOL)_isCloudKitErrorDomain:(id)arg1;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
- (id)_allPartialErrors;
- (long long)_code;
- (BOOL)isInitializationTimeOutError;
- (BOOL)isPCSError;
- (BOOL)isKeychainSyncingInProgress;
- (BOOL)isNetworkUnavailable;
- (BOOL)isManateeNotAvailableError;
- (BOOL)isUnrecoverableDecryptionError;
- (BOOL)isPartialError;
- (BOOL)isChangeTokenExpired;
- (id)initWithError:(id)arg1;
- (id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;

@end

