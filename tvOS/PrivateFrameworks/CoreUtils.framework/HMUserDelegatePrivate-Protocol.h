//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMAssistantAccessControl, HMFPairingIdentity, HMHome, HMUser;

@protocol HMUserDelegatePrivate <NSObject>

@optional
- (void)user:(HMUser *)arg1 didUpdatePairingIdentity:(HMFPairingIdentity *)arg2;
- (void)user:(HMUser *)arg1 didUpdateAssistantAccessControl:(HMAssistantAccessControl *)arg2 forHome:(HMHome *)arg3;
@end
