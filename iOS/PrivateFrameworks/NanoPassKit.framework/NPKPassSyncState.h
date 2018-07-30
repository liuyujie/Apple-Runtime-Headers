//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSData, NSMutableDictionary;

@interface NPKPassSyncState : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_syncStateItems;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSMutableDictionary *syncStateItems; // @synthesize syncStateItems=_syncStateItems;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToPassSyncState:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSData *syncStateHash;
- (_Bool)stateContainsSyncStateItem:(id)arg1;
- (_Bool)diffWithBaselineState:(id)arg1 representsMaterialDifferenceFromState:(id)arg2;
- (_Bool)stateIsSubsetOfUnionOfPassSyncStates:(id)arg1;
- (id)commonBaselinePassSyncStateWithState:(id)arg1;
- (id)passSyncStateByRemovingPassWithUniqueID:(id)arg1;
- (id)passSyncStateByAddingOrUpdatingSyncStateItem:(id)arg1;
- (id)passSyncStateByApplyingChange:(id)arg1;
- (void)compareWithBaselinePassSyncState:(id)arg1 outAddedPassUniqueIDs:(id *)arg2 outUpdatedPassUniqueIDs:(id *)arg3 outRemovedPassUniqueIDs:(id *)arg4;
- (id)description;
- (id)initWithSyncStateItems:(id)arg1;
- (id)initWithPasses:(id)arg1;
- (id)init;
- (id)protoSyncState;
- (id)initWithProtoSyncState:(id)arg1;

@end
