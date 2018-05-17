//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface MPMediaDownloadManager : NSObject
{
}

+ (id)sharedManager;
- (id)activeDownloadForStoreID:(long long)arg1;
- (id)activeDownloadForMediaItemPersistentID:(long long)arg1;
- (_Bool)hasActiveDownloads;
- (void)cancelDownloads:(id)arg1;
- (void)sendKeepLocalStatusChanged:(int)arg1 forLibraryIdentifier:(long long)arg2 entityType:(int)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)enqueueAssetForDownload:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSArray *allMediaDownloadLibraryIdentifiers;
- (void)prioritizeDownload:(long long)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)_init;
- (id)init;

@end
