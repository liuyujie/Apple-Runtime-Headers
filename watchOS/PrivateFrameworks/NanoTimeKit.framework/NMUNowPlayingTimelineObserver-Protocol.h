//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMUNowPlayingTimeline, NMUNowPlayingTimelineEntry, NSArray;

@protocol NMUNowPlayingTimelineObserver <NSObject>

@optional
- (void)timelineDidUpdate:(NMUNowPlayingTimeline *)arg1;
- (void)timelineEntryPlayabilityDidChange:(NMUNowPlayingTimeline *)arg1;
- (void)timeline:(NMUNowPlayingTimeline *)arg1 didUpdateWithUpNextEntries:(NSArray *)arg2;
- (void)timeline:(NMUNowPlayingTimeline *)arg1 didUpdateWithCurrentEntry:(NMUNowPlayingTimelineEntry *)arg2;
@end
