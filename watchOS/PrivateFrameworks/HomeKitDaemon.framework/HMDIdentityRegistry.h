//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFDumpState.h"
#import "HMFLogging.h"

@class NSArray, NSMutableArray, NSRecursiveLock, NSString;

@interface HMDIdentityRegistry : HMFObject <HMFLogging, HMFDumpState>
{
    NSMutableArray *_registeredIdentities;
    NSRecursiveLock *_lock;
}

+ (id)logCategory;
+ (id)sharedRegistry;
@property(readonly, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
- (void).cxx_destruct;
- (id)dumpState;
- (void)reset;
- (void)deregisterIdentity:(id)arg1 object:(id)arg2;
- (void)registerIdentity:(id)arg1 account:(id)arg2 object:(id)arg3;
- (void)registerIdentity:(id)arg1 device:(id)arg2 object:(id)arg3;
- (id)accountsForIdentity:(id)arg1;
- (id)identitiesForAccount:(id)arg1;
- (id)identitiesForDevice:(id)arg1;
- (id)identityForIdentifier:(id)arg1;
@property(readonly) NSArray *registeredIdentities;
- (id)attributeDescriptions;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

