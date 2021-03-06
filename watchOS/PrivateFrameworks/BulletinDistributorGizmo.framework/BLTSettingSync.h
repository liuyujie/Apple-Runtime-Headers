//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <BulletinDistributorGizmo/BLTSettingSyncInternal.h>

#import "BLTWatchKitAppListDelegate.h"

@class BLTSectionIdentifierMapper, BLTSectionInfoList, BLTSectionInfoStore, BLTWatchKitAppList, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface BLTSettingSync : BLTSettingSyncInternal <BLTWatchKitAppListDelegate>
{
    BLTSectionIdentifierMapper *_sectionIdentifierMapper;
    NSMutableArray *_incomingSectionInfoQueue;
    NSObject<OS_dispatch_queue> *_queue;
    BLTWatchKitAppList *_watchKitAppList;
    NSMutableDictionary *_savedOverrides;
    id <BLTSettingSyncDelegate> _delegate;
    BLTSectionInfoStore *_sectionInfoStore;
    BLTSectionInfoList *_sectionInfoList;
}

@property(readonly, nonatomic) BLTSectionInfoList *sectionInfoList; // @synthesize sectionInfoList=_sectionInfoList;
@property(readonly, nonatomic) BLTSectionInfoStore *sectionInfoStore; // @synthesize sectionInfoStore=_sectionInfoStore;
@property(nonatomic) __weak id <BLTSettingSyncDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)watchKitAppList:(id)arg1 added:(id)arg2 removed:(id)arg3;
- (void)_handleReceivedUpdatedSectionInfoForSectionID:(id)arg1;
- (id)_queue_overriddenSectionInfoForSectionID:(id)arg1;
- (void)setNotificationsGrouping:(int)arg1 sectionID:(id)arg2;
- (void)setNotificationsLevel:(unsigned int)arg1 sectionID:(id)arg2 mirror:(_Bool)arg3 fromRemote:(_Bool)arg4;
- (void)_queue_setNotificationsLevel:(id)arg1 grouping:(id)arg2 sectionID:(id)arg3 sectionInfo:(id)arg4;
- (void)_queue_updateSectionInfoWithSavedOverrideForSectionID:(id)arg1;
- (void)_queue_updateSectionInfoWithSavedOverrides;
- (void)_queue_updateOverrideInfoForSectionID:(id)arg1 level:(id)arg2 bbGrouping:(id)arg3;
- (void)removeSectionWithSectionID:(id)arg1;
- (void)setSectionSubtypeParametersIcon:(id)arg1 forSectionID:(id)arg2 forSubtypeID:(int)arg3;
- (void)setSectionInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_processIncomingSectionInfoQueue;
- (void)_queue_applySectionInfoOverrides;
- (void)_queue_performMigrationIfNeeded;
- (id)muteSync;
- (void)dealloc;
- (id)initWithMapper:(id)arg1 sectionInfoStore:(id)arg2 sectionConfiguration:(id)arg3 appList:(id)arg4 queue:(id)arg5;
- (id)initWithSectionConfiguration:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

