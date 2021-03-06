//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBSURLCompletionDatabase.h"

#import "WBSURLCompletionDataSource.h"

@class NSObject<OS_dispatch_queue>, NSString, WebBookmarkList;

__attribute__((visibility("hidden")))
@interface URLCompletionDatabase : WBSURLCompletionDatabase <WBSURLCompletionDataSource>
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    BOOL _reloadNotificationPending;
    BOOL _enumeratingBookmarkMatches;
    BOOL _enumeratingHistoryMatches;
    WebBookmarkList *_topBookmark;
}

+ (id)sharedCompletionDatabase;
@property __weak WebBookmarkList *topBookmark; // @synthesize topBookmark=_topBookmark;
@property(readonly, nonatomic, getter=isEnumeratingHistoryMatches) BOOL enumeratingHistoryMatches; // @synthesize enumeratingHistoryMatches=_enumeratingHistoryMatches;
@property(readonly, nonatomic, getter=isEnumeratingBookmarkMatches) BOOL enumeratingBookmarkMatches; // @synthesize enumeratingBookmarkMatches=_enumeratingBookmarkMatches;
- (void).cxx_destruct;
- (void)_historyOrBookmarksDidChange:(id)arg1;
- (id)fakeBookmarkMatchDataWithURLString:(id)arg1 title:(id)arg2;
- (void)enumerateMatchDataForTypedStringHint:(id)arg1 options:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)getBestMatchesForTypedString:(id)arg1 topHits:(id *)arg2 matches:(id *)arg3 limit:(unsigned long long)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

