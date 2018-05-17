//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_KSTextReplacementSyncProtocol.h"

@class NSObject<OS_dispatch_queue>, NSObject<_KSTextReplacementStoreProtocol>, NSString, _KSTextReplacementCKStore, _KSTextReplacementLegacyStore;

@interface _KSTextReplacementManager : NSObject <_KSTextReplacementSyncProtocol>
{
    NSObject<OS_dispatch_queue> *_migrationQueue;
    BOOL _didMigrateForCurrentAccount;
    BOOL _pendingMigration;
    BOOL _deviceDidMigrateOnCloud;
    BOOL _didCheckMigrationOnCloud;
    _KSTextReplacementCKStore *_ckStore;
    _KSTextReplacementLegacyStore *_legacyStore;
    NSObject<_KSTextReplacementStoreProtocol> *_textReplacementStore;
    NSString *_directoryPath;
    id <_KSMigrationDelegate> _delegate;
}

+ (id)textReplacementStoreWithTestDirectory:(id)arg1 withDelegate:(id)arg2 forceMigration:(BOOL)arg3 forceCloudKitSync:(BOOL)arg4;
@property(nonatomic) __weak id <_KSMigrationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL didCheckMigrationOnCloud; // @synthesize didCheckMigrationOnCloud=_didCheckMigrationOnCloud;
@property(nonatomic) BOOL deviceDidMigrateOnCloud; // @synthesize deviceDidMigrateOnCloud=_deviceDidMigrateOnCloud;
@property(nonatomic) BOOL pendingMigration; // @synthesize pendingMigration=_pendingMigration;
@property(nonatomic) BOOL didMigrateForCurrentAccount; // @synthesize didMigrateForCurrentAccount=_didMigrateForCurrentAccount;
@property(copy, nonatomic) NSString *directoryPath; // @synthesize directoryPath=_directoryPath;
@property(retain, nonatomic) NSObject<_KSTextReplacementStoreProtocol> *textReplacementStore; // @synthesize textReplacementStore=_textReplacementStore;
@property(retain, nonatomic) _KSTextReplacementLegacyStore *legacyStore; // @synthesize legacyStore=_legacyStore;
@property(retain, nonatomic) _KSTextReplacementCKStore *ckStore; // @synthesize ckStore=_ckStore;
- (void).cxx_destruct;
- (void)recordSyncStatus;
- (double)minimumUptimeRemaining;
- (void)requestSync:(unsigned long long)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)requestSyncWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)deviceDidMigrate;
- (void)respondToMigrationCompletion;
- (void)_migrateEntriesSinceDate:(id)arg1 repeatCount:(unsigned long long)arg2;
- (void)migrateLegacyStore;
- (void)pullMigrationSettings;
- (void)_migrateDevice;
- (void)respondToMigrationCompatibilityChange:(id)arg1;
- (void)migrateLocallyCheckCompatibility:(BOOL)arg1;
- (void)checkForMigration;
- (void)notifyTextReplacementDidChange;
- (void)dealloc;
- (void)pushAllLocalRecordsOnceIfNeeded;
- (void)resetMigrationState;
- (void)accountDidChange:(id)arg1;
- (BOOL)shouldMigrateToCloudKit;
- (id)initWithDirectoryPath:(id)arg1;
- (id)initWithDirectoryPath:(id)arg1 ignoreMigrationBatchCheck:(BOOL)arg2 forceCloudKitSync:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
