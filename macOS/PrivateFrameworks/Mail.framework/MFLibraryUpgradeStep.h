//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFSqliteHandle, NSProgress;

@interface MFLibraryUpgradeStep : NSObject
{
    NSProgress *_progress;
    MFSqliteHandle *_handle;
}

+ (BOOL)needToPerformFromMinorVersion:(unsigned long long)arg1 initialLastWriteMinorVersion:(unsigned long long)arg2 fromBackBooting:(char *)arg3;
+ (BOOL)requiredAfterBackbooting;
@property(readonly, nonatomic) MFSqliteHandle *handle; // @synthesize handle=_handle;
@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (id)adjustSmartMailboxCriterion:(id)arg1 adjustmentBlock:(CDUnknownBlockType)arg2;
- (id)_urlStringForMailboxDirectory:(id)arg1 account:(id)arg2 levelFromAccountDirectory:(unsigned long long)arg3;
- (id)mailboxFileSystemPathsByDatabaseURLForAccounts:(id)arg1;
@property(readonly, nonatomic) BOOL shouldRecalculateMessageCounts;
- (void)dealloc;
- (id)init;
- (id)initWithSQLHandle:(id)arg1;

@end

