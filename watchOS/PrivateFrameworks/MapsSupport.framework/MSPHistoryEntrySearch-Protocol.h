//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSPHistoryEntry.h"

@class GEOMapRegion, NSString;

@protocol MSPHistoryEntrySearch <MSPHistoryEntry>
- (GEOMapRegion *)mapRegion;
- (NSString *)languageCode;
- (NSString *)locationDisplayString;
- (NSString *)query;
@end

