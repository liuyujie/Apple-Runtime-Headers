//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OldSpotlightDataWriter.h"

@class BookmarksController, NSString, NSTimer, WBSSiriIntelligenceDonor;

__attribute__((visibility("hidden")))
@interface SpotlightBookmarksWriter : NSObject <OldSpotlightDataWriter>
{
    NSTimer *_donationTimer;
    BookmarksController *_bookmarksController;
    WBSSiriIntelligenceDonor *_siriIntelligenceDonor;
}

+ (id)new;
@property(readonly, nonatomic) __weak WBSSiriIntelligenceDonor *siriIntelligenceDonor; // @synthesize siriIntelligenceDonor=_siriIntelligenceDonor;
@property(readonly, nonatomic) __weak BookmarksController *bookmarksController; // @synthesize bookmarksController=_bookmarksController;
- (void).cxx_destruct;
- (id)URLToVisitFromSpotlightCacheFile:(id)arg1 ofDataType:(id)arg2;
- (id)fileExtensionForDataType:(id)arg1;
- (void)addSpotlightCacheFilesForItems:(id)arg1 ofDataType:(id)arg2 inDirectory:(id)arg3;
- (void)deleteSpotlightCacheFilesForItems:(id)arg1 ofDataType:(id)arg2 inDirectory:(id)arg3;
- (void)_donateBookmarksToCoreSpotlight;
- (void)_bookmarksWereChanged:(id)arg1;
- (void)_scheduleBookmarksDonationAfterDelay:(double)arg1;
- (void)dealloc;
- (id)initWithBookmarksController:(id)arg1 siriIntelligenceDonor:(id)arg2;
- (id)init;
- (void)_removeCacheFileForBookmark:(id)arg1 inDirectory:(id)arg2;
- (void)_writeCacheFileForBookmark:(id)arg1 inDirectory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
