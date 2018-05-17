//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FCAppleAccount.h"

@class NSString;

@interface FCAppleAccount : NSObject <FCAppleAccount>
{
    _Bool _runningPPT;
    _Bool _iCloudAccountChanged;
    NSString *_DSID;
    NSString *_userStoreFrontID;
    NSString *_contentStoreFrontID;
    NSString *_overrideContentStoreFrontID;
}

+ (id)sharedAccount;
+ (void)enableStoreFrontLocking;
@property(copy, nonatomic) NSString *overrideContentStoreFrontID; // @synthesize overrideContentStoreFrontID=_overrideContentStoreFrontID;
@property(nonatomic) _Bool iCloudAccountChanged; // @synthesize iCloudAccountChanged=_iCloudAccountChanged;
@property(copy, nonatomic) NSString *contentStoreFrontID; // @synthesize contentStoreFrontID=_contentStoreFrontID;
@property(copy, nonatomic) NSString *userStoreFrontID; // @synthesize userStoreFrontID=_userStoreFrontID;
@property(copy, nonatomic) NSString *DSID; // @synthesize DSID=_DSID;
@property(getter=isRunningPPT) _Bool runningPPT; // @synthesize runningPPT=_runningPPT;
- (void).cxx_destruct;
- (void)t_stopOverridingContentStoreFrontID;
- (void)t_startOverridingContentStoreFrontID:(id)arg1;
- (void)_refreshUbiquityIdentityToken;
- (void)_setStoreFrontDependentPropertiesWithStoreFrontLockingEnabled:(_Bool)arg1;
- (void)checkAlliOSDevicesRunningMinimumOSVersion:(CDStruct_912cb5d2)arg1 orInactiveForTimeInterval:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)currentStoreFrontID;
@property(readonly, nonatomic) NSString *supportedContentStoreFrontID;
@property(readonly, nonatomic) _Bool isContentStoreFrontSupported;
- (_Bool)isUserSignedIntoiTunes;
- (id)iTunesAccountDSID;
- (id)iTunesAccountName;
@property(readonly, nonatomic) NSString *endpointConnectionClientID;
- (_Bool)isPrimaryAccountEmailAddress;
@property(readonly, nonatomic, getter=isUserSignedInToiCloud) _Bool userSignedInToiCloud;
@property(readonly, nonatomic, getter=isPrivateDataSyncingEnabled) _Bool privateDataSyncingEnabled;
- (void)_loadStoreFrontIfNeededWithCallbackAndAccessQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadStoreFrontIfNeeded;
- (void)loadStoreFrontIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
