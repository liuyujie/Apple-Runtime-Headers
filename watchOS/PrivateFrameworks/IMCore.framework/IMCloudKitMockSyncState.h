//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate;

@interface IMCloudKitMockSyncState : NSObject
{
    _Bool _IMCloudKitSyncingEnabled;
    _Bool _IMCloudKitIsSyncing;
    _Bool _IMCloudKitSyncPaused;
    _Bool _IMCloudKitIsEligibleForTruthZone;
    _Bool _IMCloudKitIsInExitState;
    _Bool _IMCloudKitIsRemovedFromBackup;
    _Bool _IMCloudKitStartingPeriodicSync;
    _Bool _IMCloudKitStartingInitialSync;
    _Bool _IMCloudKitStartingDisableDevices;
    NSDate *_IMCloudKitSyncDate;
    int _IMCloudKitStartingEnabledSettingChange;
    unsigned int _IMCloudKitSyncControllerSyncState;
    int _IMCloudKitSyncControllerSyncType;
    int _IMCloudKitSyncControllerSyncRecordType;
    NSArray *_IMCloudKitSyncErrors;
}

@property(retain) NSArray *IMCloudKitSyncErrors; // @synthesize IMCloudKitSyncErrors=_IMCloudKitSyncErrors;
@property int IMCloudKitSyncControllerSyncRecordType; // @synthesize IMCloudKitSyncControllerSyncRecordType=_IMCloudKitSyncControllerSyncRecordType;
@property int IMCloudKitSyncControllerSyncType; // @synthesize IMCloudKitSyncControllerSyncType=_IMCloudKitSyncControllerSyncType;
@property unsigned int IMCloudKitSyncControllerSyncState; // @synthesize IMCloudKitSyncControllerSyncState=_IMCloudKitSyncControllerSyncState;
@property _Bool IMCloudKitStartingDisableDevices; // @synthesize IMCloudKitStartingDisableDevices=_IMCloudKitStartingDisableDevices;
@property int IMCloudKitStartingEnabledSettingChange; // @synthesize IMCloudKitStartingEnabledSettingChange=_IMCloudKitStartingEnabledSettingChange;
@property _Bool IMCloudKitStartingInitialSync; // @synthesize IMCloudKitStartingInitialSync=_IMCloudKitStartingInitialSync;
@property _Bool IMCloudKitStartingPeriodicSync; // @synthesize IMCloudKitStartingPeriodicSync=_IMCloudKitStartingPeriodicSync;
@property(retain) NSDate *IMCloudKitSyncDate; // @synthesize IMCloudKitSyncDate=_IMCloudKitSyncDate;
@property _Bool IMCloudKitIsRemovedFromBackup; // @synthesize IMCloudKitIsRemovedFromBackup=_IMCloudKitIsRemovedFromBackup;
@property _Bool IMCloudKitIsInExitState; // @synthesize IMCloudKitIsInExitState=_IMCloudKitIsInExitState;
@property _Bool IMCloudKitIsEligibleForTruthZone; // @synthesize IMCloudKitIsEligibleForTruthZone=_IMCloudKitIsEligibleForTruthZone;
@property _Bool IMCloudKitSyncPaused; // @synthesize IMCloudKitSyncPaused=_IMCloudKitSyncPaused;
@property _Bool IMCloudKitIsSyncing; // @synthesize IMCloudKitIsSyncing=_IMCloudKitIsSyncing;
@property _Bool IMCloudKitSyncingEnabled; // @synthesize IMCloudKitSyncingEnabled=_IMCloudKitSyncingEnabled;
- (void).cxx_destruct;
- (id)convertToDictionary;

@end

