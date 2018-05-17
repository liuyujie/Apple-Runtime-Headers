//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMDaemonCore/IMDCKAbstractSyncController.h>

#import "IMDXPCEventStreamHandlerDelegate.h"

@class CKFetchRecordZonesOperation, IMTimer, NSDate, NSString, NSTimer;

@interface IMDCKSyncController : IMDCKAbstractSyncController <IMDXPCEventStreamHandlerDelegate>
{
    NSDate *_syncStartDate;
    NSTimer *_longRunningSyncTimer;
    IMTimer *_nightlySyncTimer;
    long long _initialSyncAttempts;
    CKFetchRecordZonesOperation *_cloudKitMetricsFetchOp;
    NSDate *_lastLogDumpDate;
    NSDate *_lastRestoreFailureLogDumpDate;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSDate *lastRestoreFailureLogDumpDate; // @synthesize lastRestoreFailureLogDumpDate=_lastRestoreFailureLogDumpDate;
@property(retain, nonatomic) NSDate *lastLogDumpDate; // @synthesize lastLogDumpDate=_lastLogDumpDate;
@property(retain, nonatomic) CKFetchRecordZonesOperation *cloudKitMetricsFetchOp; // @synthesize cloudKitMetricsFetchOp=_cloudKitMetricsFetchOp;
@property(nonatomic) long long initialSyncAttempts; // @synthesize initialSyncAttempts=_initialSyncAttempts;
@property(retain, nonatomic) IMTimer *nightlySyncTimer; // @synthesize nightlySyncTimer=_nightlySyncTimer;
@property(retain, nonatomic) NSTimer *longRunningSyncTimer; // @synthesize longRunningSyncTimer=_longRunningSyncTimer;
@property(retain, nonatomic) NSDate *syncStartDate; // @synthesize syncStartDate=_syncStartDate;
- (void).cxx_destruct;
- (void)performOneTimeAccountUpgradeCheckIfNeeded;
- (BOOL)enforceAccountsMatchForMocAndShowDialogIfNeeded;
- (void)handleAKUserInfoChangedNotification:(id)arg1;
- (void)updateSecurityLevelDowngradedIfNeeded:(CDUnknownBlockType)arg1;
- (void)eventStreamHandler:(id)arg1 didReceiveEventWithName:(id)arg2 userInfo:(id)arg3;
- (id)syncStateDebuggingInfo:(id)arg1;
- (BOOL)isSyncing;
- (void)_noteMeticsForSyncEndedWithSuccces:(BOOL)arg1;
- (void)syncChatsWithMessageContext:(id)arg1;
- (void)_writeDownSyncDateUseManatee:(BOOL)arg1;
- (long long)_manualSyncAttemptCount;
- (long long)_periodicSyncAttemptCount;
- (void)_noteSyncEnded;
- (void)_noteMetricsForSyncStartFrom:(id)arg1 fullSync:(BOOL)arg2;
- (void)_noteDownSyncStartedWithIsPeriodicSync:(BOOL)arg1;
- (void)_autoBugCaptureWithSubType:(id)arg1 debugDescription:(id)arg2;
- (void)_beginExitStateCleanupIfNeededWithActivity:(id)arg1 useNonHSA2ManateeDatabase:(BOOL)arg2;
- (void)_ifCloudKitAbleToSyncIsFullSync:(BOOL)arg1 callBlock:(CDUnknownBlockType)arg2 activity:(id)arg3;
- (void)_callSyncWithCompletion:(CDUnknownBlockType)arg1 activity:(id)arg2;
- (void)_syncChatsWithActivity:(id)arg1;
- (id)_sharedDatabaseManager;
- (BOOL)_isSyncingToStingRay;
- (void)syncDeletesToCloudKitWithCompletion:(CDUnknownBlockType)arg1;
- (void)_beginPeriodicSyncWithActivity:(id)arg1 deviceConditionsToCheck:(unsigned long long)arg2 attemptCount:(unsigned long long)arg3 useStingRay:(BOOL)arg4 syncChatsCompletionBlock:(CDUnknownBlockType)arg5;
- (void)_beginPeriodicSyncWithActivity:(id)arg1 deviceConditionsToCheck:(unsigned long long)arg2 attemptCount:(unsigned long long)arg3;
- (id)_recordManager;
- (void)_reloadChatRegistryOnMainThread;
- (void)_nukeCKData;
- (void)_dealWithEncryptionKeyLostErrorIfApplicable:(id)arg1;
- (BOOL)_errorIndicatesDeviceNotGoodForSync:(id)arg1;
- (void)beginInitialSyncAttemptCount:(unsigned long long)arg1;
- (void)collectLogsIfNeeded;
- (void)sendRestoreFailuresLogDumpsIfNeeded;
- (void)sendRestoreFailuresLogDumps;
- (void)_deleteRestoreFailuresDirectory;
- (BOOL)_withinAnHourOfLogDumpHour;
- (unsigned long long)_currentHour;
- (BOOL)_hasDumpedRestoreFailureLogsInPastHour;
- (BOOL)_hasDumpedLogsInPastHour;
- (void)recordMetricIsCloudKitEnabled;
- (void)performMetricForSuccessfulSync;
- (void)clearLocalCloudKitSyncState;
- (void)clearCKRelatedDefaults;
- (void)kickOffCloudKitSyncIfNeededOnImagentLaunch;
- (void)beginComingBackOnlineSync;
- (void)_syncDeletesOrClearTombstones;
- (BOOL)_accountHasMultipleDevices;
- (BOOL)_serverDoesNotSingleDeviceLimitation;
- (BOOL)_chatSyncedRecently;
- (double)_minimumChatComingOnlineSyncInterval;
- (BOOL)_serverDoesNotAllowComingBackOnlineChatSync;
- (void)beginFullSyncPeriodic:(BOOL)arg1 deviceConditionsToCheck:(unsigned long long)arg2 activity:(id)arg3;
- (void)beginChatSyncPeriodic:(BOOL)arg1 activity:(id)arg2;
- (void)beginInitialSync;
- (void)performInitialSyncOnFirstConnectionOfImagentIfNeeded;
- (void)dealloc;
- (id)init;
- (void)kickOffEagerSyncIfApplicable;
- (void)_nightlySyncTimerFired;
- (void)_kickOffNightlyPeriodicSyncIfApplicable;
- (void)_logIMAutomaticHistorySyncDidNotOccurMetricsUnderFirstUnlock:(BOOL)arg1 isSyncing:(BOOL)arg2 deviceConditionsAllowSync:(BOOL)arg3 syncNotCompletedRecently:(BOOL)arg4;
- (BOOL)_syncNotCompletedRecently;
- (double)_IMAHDAgentFallbackIntervalInSeconds;
- (void)_dispatchNotification:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)_dateForNext24LogDumpAtHour:(long long)arg1 timeNow:(id)arg2 dumpNow:(char *)arg3;
- (void)registerForAccountNotifications;
- (void)_accountDidChange:(id)arg1;
- (void)_postMetricsToCloudKitOnAutomaticHistoryDeletionAgentLaunch;
- (unsigned long long)_maxTimeToDeferInSeconds;
- (long long)syncControllerRecordType;
- (id)statsCollector;
- (id)rampManager;
- (id)attachmentSyncController;
- (id)exitManager;
- (id)chatSyncController;
- (id)messageSyncController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
