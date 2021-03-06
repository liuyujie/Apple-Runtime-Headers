//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BiometricKitDelegateXpcProtocol.h"

@class BKDeviceDescriptor, BiometricKitXPCClient, NSString;

@interface BKDevice : NSObject <BiometricKitDelegateXpcProtocol>
{
    BiometricKitXPCClient *_xpcClient;
    BKDeviceDescriptor *_descriptor;
}

+ (BOOL)biometryAvailabilityInfo:(long long *)arg1 fromDeviceInfo:(long long)arg2 error:(id *)arg3;
+ (BOOL)lockoutState:(long long *)arg1 fromDeviceLockoutState:(int)arg2 error:(id *)arg3;
+ (id)deviceWithDescriptor:(id)arg1 error:(id *)arg2;
+ (BOOL)deviceAvailableWithError:(id *)arg1;
@property(retain, nonatomic) BKDeviceDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (void).cxx_destruct;
- (BOOL)isDelegate;
- (void)taskResumeStatus:(int)arg1 client:(unsigned long long)arg2;
- (void)templateUpdate:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3;
- (void)touchIDButtonPressed:(BOOL)arg1 client:(unsigned long long)arg2;
- (void)homeButtonPressed:(unsigned long long)arg1;
- (void)statusMessage:(unsigned int)arg1 details:(id)arg2 client:(unsigned long long)arg3;
- (void)statusMessage:(unsigned int)arg1 client:(unsigned long long)arg2;
- (void)matchResult:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3;
- (void)enrollFeedback:(id)arg1 client:(unsigned long long)arg2;
- (void)enrollUpdate:(id)arg1 client:(unsigned long long)arg2;
- (void)enrollResult:(id)arg1 client:(unsigned long long)arg2;
- (BOOL)biometryAvailability:(long long *)arg1 forUser:(unsigned int)arg2 error:(id *)arg3;
- (id)freeIdentityCountForUser:(unsigned int)arg1 error:(id *)arg2;
- (id)maxIdentityCountWithError:(id *)arg1;
- (id)identitiesForUser:(unsigned int)arg1 error:(id *)arg2;
- (id)identitiesWithError:(id *)arg1;
- (BOOL)removeAllIdentitiesForUser:(unsigned int)arg1 error:(id *)arg2;
- (BOOL)removeIdentity:(id)arg1 error:(id *)arg2;
- (BOOL)updateIdentity:(id)arg1 error:(id *)arg2;
- (id)identityForUUID:(id)arg1 error:(id *)arg2;
- (BOOL)forceBioLockoutIfLockedForUser:(unsigned int)arg1 error:(id *)arg2;
- (BOOL)forceBioLockoutForUser:(unsigned int)arg1 error:(id *)arg2;
- (BOOL)forceBioLockoutForAllUsersWithError:(id *)arg1;
- (BOOL)dropAllUnlockTokensWithError:(id *)arg1;
- (id)identitiesDatabaseHashForUser:(unsigned int)arg1 error:(id *)arg2;
- (id)identitiesDatabaseUUIDForUser:(unsigned int)arg1 error:(id *)arg2;
- (BOOL)bioLockoutState:(long long *)arg1 forUser:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)setSystemProtectedConfiguration:(id)arg1 credentialSet:(id)arg2 error:(id *)arg3;
- (BOOL)setProtectedConfiguration:(id)arg1 forUser:(unsigned int)arg2 credentialSet:(id)arg3 error:(id *)arg4;
- (id)systemProtectedConfigurationWithError:(id *)arg1;
- (id)effectiveProtectedConfigurationForUser:(unsigned int)arg1 error:(id *)arg2;
- (id)protectedConfigurationForUser:(unsigned int)arg1 error:(id *)arg2;
- (id)createPresenceDetectOperationWithError:(id *)arg1;
- (id)createMatchOperationWithError:(id *)arg1;
- (id)createEnrollOperationWithError:(id *)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

