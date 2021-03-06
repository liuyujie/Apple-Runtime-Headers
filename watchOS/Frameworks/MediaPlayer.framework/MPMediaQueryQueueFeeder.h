//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPQueueFeeder.h>

#import "MPAVRoutingControllerDelegate.h"
#import "MPRTCReportingItemSessionContaining.h"
#import "MPShuffleControllerDataSource.h"

@class MPMediaItem, MPMediaLibraryConnectionAssertion, MPMediaQuery, MPShuffleController, MSVMutableBidirectionalDictionary, NSArray, NSDictionary, NSString;

@interface MPMediaQueryQueueFeeder : MPQueueFeeder <MPAVRoutingControllerDelegate, MPRTCReportingItemSessionContaining, MPShuffleControllerDataSource>
{
    MPMediaLibraryConnectionAssertion *_connectionAssertion;
    unsigned long long _feederRevisionID;
    _Bool _hasValidItems;
    _Bool _isSiriInitiated;
    MPMediaQuery *_query;
    NSArray *_queryItems;
    MPShuffleController *_shuffleController;
    vector_bbba3654 _itemPIDs;
    MSVMutableBidirectionalDictionary *_indexToIdentifierCache;
    unsigned int _currentInvalidationRevision;
    NSDictionary *_startTimeModifications;
    NSDictionary *_endTimeModifications;
    _Bool _isPlaylistQueueFeeder;
    MPMediaItem *_cloudDialogAllowedMediaItem;
}

+ (id)_itemsForQuery:(id)arg1 shuffleType:(int)arg2;
+ (Class)playbackItemMetadataClass;
+ (id)audioSessionModeForMediaType:(unsigned int)arg1;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) MPMediaItem *cloudDialogAllowedMediaItem; // @synthesize cloudDialogAllowedMediaItem=_cloudDialogAllowedMediaItem;
@property(copy, nonatomic) MPMediaQuery *query; // @synthesize query=_query;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)_playbackIndexByApplyShuffleType:(int)arg1 withStartIndex:(unsigned int)arg2 startIndexMediaItem:(id)arg3 shouldKeepConsistentQueueOrder:(_Bool)arg4;
- (id)_identifierAtIndex:(unsigned int)arg1;
- (void)_verifyQueueInvalidationCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_reloadQueryItems;
- (id)_mediaItemForPID:(unsigned long long)arg1;
- (void)_invalidateMediaLibraryValues;
- (unsigned int)_indexForSongShuffledIndex:(unsigned int)arg1;
- (unsigned int)_indexForPersistentID:(unsigned long long)arg1;
- (void)_handleMediaLibraryDidChange;
- (id)_currentEmptyQueueError;
- (void)_libraryDidChangeNotification:(id)arg1;
- (void)_allowsHighQualityMusicStreamingOnCellularDidChangeNotification:(id)arg1;
- (unsigned int)unshuffledIndexOfAVItem:(id)arg1;
- (id)mediaItemAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfMediaItem:(id)arg1;
- (id)modelPlayEvent;
- (unsigned int)shuffleController:(id)arg1 countOfItemIdentifier:(id)arg2 withMaximumCount:(unsigned int)arg3;
- (id)shuffleController:(id)arg1 identifierForItemAtIndex:(unsigned int)arg2;
- (unsigned int)itemCountForShuffleController:(id)arg1;
@property(readonly, copy, nonatomic) NSString *rtcReportingPlayQueueSourceIdentifier;
- (_Bool)supportsAddToQueue;
- (id)playbackInfoForIdentifier:(id)arg1;
- (unsigned int)initialPlaybackQueueDepthForStartingIndex:(unsigned int)arg1;
- (id)identifierAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfItemWithIdentifier:(id)arg1;
- (void)shuffleItemsWithAnchor:(unsigned int *)arg1;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)player:(id)arg1 currentItemWillChangeFromItem:(id)arg2;
- (id)pathAtIndex:(unsigned int)arg1;
- (int)itemTypeForIndex:(unsigned int)arg1;
- (id)itemForIdentifier:(id)arg1;
- (unsigned int)itemCount;
- (Class)itemClass;
- (_Bool)hasValidItemAtIndex:(unsigned int)arg1;
- (id)copyRawItemAtIndex:(unsigned int)arg1;
- (void)applyVolumeNormalizationForItem:(id)arg1;
- (id)audioSessionModeForItemAtIndex:(unsigned int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)shouldReuseQueueFeederForPlaybackContext:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, copy, nonatomic) NSDictionary *rtcReportingSessionAdditionalUserInfo;
@property(readonly) Class superclass;

@end

