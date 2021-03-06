//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMDUser, HMFPairingIdentity;

@protocol HMDAccessoryUserManagement <NSObject>
@property(readonly, copy) HMFPairingIdentity *pairingIdentity;
@property(readonly) _Bool supportsUserManagement;
- (void)pairingsWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)removeUser:(HMDUser *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)addUser:(HMDUser *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end

