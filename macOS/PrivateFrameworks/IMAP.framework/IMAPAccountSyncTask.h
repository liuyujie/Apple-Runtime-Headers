//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPTask.h>

#import "IMAPFetchMailboxStatusOperationDelegate.h"

@class IMAPTaskManager, NSMutableArray, NSMutableSet, NSProgress, NSString;

@interface IMAPAccountSyncTask : IMAPTask <IMAPFetchMailboxStatusOperationDelegate>
{
    NSMutableArray *_mailboxesNeedingStatus;
    NSMutableSet *_missedMailboxes;
    BOOL _userInitiated;
    id <IMAPAccount> _account;
    IMAPTaskManager *_taskManager;
    NSProgress *_checkProgress;
}

+ (id)signpostLog;
@property(readonly, nonatomic) NSProgress *checkProgress; // @synthesize checkProgress=_checkProgress;
@property(readonly) IMAPTaskManager *taskManager; // @synthesize taskManager=_taskManager;
@property(readonly) id <IMAPAccount> account; // @synthesize account=_account;
- (void).cxx_destruct;
@property(readonly) unsigned long long signpostID;
- (void)fetchMailboxStatusOperation:(id)arg1 missedMailboxes:(id)arg2;
- (void)fetchMailboxStatusOperation:(id)arg1 fetchedStatusesForMailboxNames:(id)arg2;
- (void)end;
- (void)operationFinished:(id)arg1;
- (void)recalculatePriorities;
- (long long)_nextNetworkPriorityAndOperation:(id *)arg1;
- (id)nextNetworkOperation;
- (void)cancel;
@property(nonatomic) BOOL userInitiated;
- (id)mailboxNameWithoutPII;
- (id)initWithMailboxName:(id)arg1;
- (id)initWithAccount:(id)arg1 taskManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

