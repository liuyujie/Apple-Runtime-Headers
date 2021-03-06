//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "PQLBindable.h"

@class BRCServerChangeState, NSDate, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BRCServerPersistedState : NSObject <NSSecureCoding, NSCopying, PQLBindable>
{
    NSMutableDictionary *_pendingMigrations;
    long long _nextRank;
    NSDate *_lastSyncDownDate;
    BRCServerChangeState *_sharedDatabaseChangeState;
}

+ (BOOL)supportsSecureCoding;
@property(retain) BRCServerChangeState *sharedDatabaseChangeState; // @synthesize sharedDatabaseChangeState=_sharedDatabaseChangeState;
@property(retain, nonatomic) NSDate *lastSyncDownDate; // @synthesize lastSyncDownDate=_lastSyncDownDate;
@property(nonatomic) long long nextRank; // @synthesize nextRank=_nextRank;
- (void).cxx_destruct;
- (id)dumpMigrationQueriesForContainerID:(id)arg1;
- (void)migrationQueryForContainerID:(id)arg1 key:(id)arg2 didCompleteWithContinuationCursor:(id)arg3;
- (id)migrationQueryKeyForContainerID:(id)arg1 continuationCursor:(id *)arg2;
- (void)initiateMigrationQueryForContainerIDs:(id)arg1 key:(id)arg2;
- (BOOL)containerIDIsPendingMigration:(id)arg1;
- (void)saveToDB:(id)arg1;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithState:(id)arg1;
- (id)init;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

