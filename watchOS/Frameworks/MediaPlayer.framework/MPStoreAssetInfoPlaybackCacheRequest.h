//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface MPStoreAssetInfoPlaybackCacheRequest : NSObject <NSCopying>
{
    int _requestType;
    NSString *_redownloadParameters;
    NSString *_cloudUniversalLibraryID;
    unsigned long long _accountID;
    unsigned long long _delegatedAccountID;
    long long _storeSubscriptionAdamID;
    unsigned long long _storeCloudID;
    long long _storePurchasedAdamID;
    long long _storeRadioAdamID;
}

@property(nonatomic) long long storeRadioAdamID; // @synthesize storeRadioAdamID=_storeRadioAdamID;
@property(nonatomic) long long storePurchasedAdamID; // @synthesize storePurchasedAdamID=_storePurchasedAdamID;
@property(nonatomic) unsigned long long storeCloudID; // @synthesize storeCloudID=_storeCloudID;
@property(nonatomic) long long storeSubscriptionAdamID; // @synthesize storeSubscriptionAdamID=_storeSubscriptionAdamID;
@property(copy, nonatomic) NSString *cloudUniversalLibraryID; // @synthesize cloudUniversalLibraryID=_cloudUniversalLibraryID;
@property(copy, nonatomic) NSString *redownloadParameters; // @synthesize redownloadParameters=_redownloadParameters;
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;
@property(nonatomic) unsigned long long delegatedAccountID; // @synthesize delegatedAccountID=_delegatedAccountID;
@property(nonatomic) unsigned long long accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

