//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CDPContext;

@interface CDPDPCSController : NSObject
{
    id <CDPDProtectedCloudStorageProxy> _pcsProxy;
    CDPContext *_context;
}

@property(retain, nonatomic) CDPContext *context; // @synthesize context=_context;
@property(retain, nonatomic) id <CDPDProtectedCloudStorageProxy> pcsProxy; // @synthesize pcsProxy=_pcsProxy;
- (void).cxx_destruct;
- (id)_pcsConfigForPrimaryAccount;
- (id)_contextSetupDictionary;
- (void)_disableCDPWithCompletion:(CDUnknownBlockType)arg1;
- (void)disableCDPWithCompletion:(CDUnknownBlockType)arg1;
- (void)_enableCDPWithCompletion:(CDUnknownBlockType)arg1;
- (void)enableCDPWithCompletion:(CDUnknownBlockType)arg1;
- (struct _PCSIdentitySetData *)_getOrSetupIdentitySetRef:(id *)arg1;
- (_Bool)isCompanionInKeychainCircle:(id *)arg1;
- (_Bool)isCloudProtectionEnabledLocally:(id *)arg1;
- (void)_checkiCDPStatusNetwork:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_reauthenticateAndCheckiCDPStatusWithNetwork:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkiCDPStatusNetwork:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)recoverAndSynchronizeKeysWithCompletion:(CDUnknownBlockType)arg1;
- (void)recoverKeysWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithContext:(id)arg1 pcsProxy:(id)arg2;
- (id)init;

@end
