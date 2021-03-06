//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NMRNowPlayingControllerDelegate.h"
#import "NMROriginObserverDelegate.h"

@class NMRNowPlayingController, NMROrigin, NMUNowPlayingTimelineEntry, NSArray, NSHashTable, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface NMUNowPlayingTimeline : NSObject <NMROriginObserverDelegate, NMRNowPlayingControllerDelegate>
{
    NMRNowPlayingController *_nowPlayingController;
    NMROrigin *_activeOrigin;
    NMUNowPlayingTimelineEntry *_currentEntry;
    NMUNowPlayingTimelineEntry *_pendingEntryWithMatchingTimestamp;
    NSMutableArray *_previousEntries;
    NSMutableArray *_upNextEntries;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_timelineQueue;
    NSObject<OS_dispatch_queue> *_archivingQueue;
    NSObject<OS_dispatch_source> *_pendingUpdateTimer;
    unsigned int _mode;
}

+ (unsigned int)_filteringOptionWithMode:(unsigned int)arg1;
+ (id)sharedTimeline;
@property(readonly, nonatomic) unsigned int mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)_cloudAvailabilityDidChangeNotification:(id)arg1;
- (void)originObserver:(id)arg1 didUpdateTimestampForOrigin:(id)arg2;
- (void)originObserver:(id)arg1 didUpdatePlaybackQueueForOrigin:(id)arg2;
- (void)originObserver:(id)arg1 didUpdatePlaybackStateForOrigin:(id)arg2;
- (void)originObserver:(id)arg1 didUpdateNowPlayingApplicationBundleIdentifierForOrigin:(id)arg2;
- (void)originObserver:(id)arg1 didUpdateNowPlayingInfoForOrigin:(id)arg2;
- (void)activeNowPlayingOriginDidUpdateForController:(id)arg1;
- (void)_playabilityConditionsDidChange;
- (void)_archivePreviousEntries:(id)arg1;
- (id)_archivedPreviousEntries;
- (void)_reloadAssetAvailabilityFromArchive;
- (void)_beginObservingDistributedAssetAvailability;
- (void)_beginObservingUpNext;
- (void)_notifyObservers:(CDUnknownBlockType)arg1;
- (void)_cancelPendingUpdate;
- (void)_schedulePendingUpdateWithEntry:(id)arg1;
- (void)_updateWithCurrentPlaybackQueue;
- (void)_updateCurrentEntryAndNotifyObservers:(id)arg1;
- (void)_updateWithCurrentNowPlayingState;
- (void)archivePreviousEntries;
- (void)enumeratePreviousEntriesUsingBlock:(CDUnknownBlockType)arg1;
- (int)assetAvailabilityForEntry:(id)arg1;
- (_Bool)shouldObserveDistributedAssetAvailability;
- (_Bool)shouldObserveUpNext;
- (id)entryForDate:(id)arg1;
@property(readonly, nonatomic) NMROrigin *activeOrigin;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) NSArray *upNextEntries;
@property(readonly, nonatomic) NSArray *previousEntries;
@property(readonly, nonatomic) NMUNowPlayingTimelineEntry *currentEntry;
- (void)dealloc;
- (id)initWithMode:(unsigned int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

