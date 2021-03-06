//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccountStore, HMDeviceSetupOperationHandler, NSObject<OS_dispatch_queue>, SFDeviceOperationHandlerWiFiSetup, SFService, SFSession;

@interface SFDeviceRepairService : NSObject
{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    unsigned int _invalidateFlags;
    SFService *_sfService;
    SFSession *_sfSession;
    ACAccountStore *_accountStore;
    HMDeviceSetupOperationHandler *_homeKitSetupHandler;
    SFDeviceOperationHandlerWiFiSetup *_wifiSetupHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    unsigned long long _problemFlags;
    CDUnknownBlockType _progressHandler;
}

@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(nonatomic) unsigned long long problemFlags; // @synthesize problemFlags=_problemFlags;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)_saveRemoteVerifiedAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_saveAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)_nextTRServiceTypeForTRAccountServices:(id)arg1;
- (long long)_nextServiceTypeForTRAccountServices:(id)arg1;
- (void)_authenticateiTunesWithAuthResults:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_authenticateiCloudWithAuthResults:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_authenticateWithServiceType:(unsigned long long)arg1 authResults:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_authenticateWithServiceTypes:(id)arg1 authResults:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_authenticateAccount:(id)arg1 serviceType:(long long)arg2 password:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_authenticateAccount:(id)arg1 serviceType:(long long)arg2 companionDevice:(id)arg3 anisetteDataProvider:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_handleTRProxyAuthenticationRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleTRProxyDeviceRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleTRCompanionAuthenticationRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleFinishRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleGetProblemsRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleSessionEnded:(id)arg1;
- (void)_handleSessionStarted:(id)arg1;
- (void)_sfServiceStart;
- (void)_invalidate;
- (void)invalidateWithFlags:(unsigned int)arg1;
- (void)invalidate;
- (void)activate;
- (id)init;

@end

