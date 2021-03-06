//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoMusicSync/NMSPodcastSizeCache.h>

@class NSMutableDictionary;

@interface NMSMutablePodcastSizeCache : NMSPodcastSizeCache
{
    NSMutableDictionary *_mutableRelationshipDict;
    NSMutableDictionary *_mutableEpisodeSizeInfoDict;
}

@property(retain) NSMutableDictionary *mutableEpisodeSizeInfoDict; // @synthesize mutableEpisodeSizeInfoDict=_mutableEpisodeSizeInfoDict;
@property(retain) NSMutableDictionary *mutableRelationshipDict; // @synthesize mutableRelationshipDict=_mutableRelationshipDict;
- (void).cxx_destruct;
- (id)_currentPodcastSizeDictionary;
- (void)synchronize;
- (void)setEpisodeSizeInfo:(id)arg1 forEpisode:(id)arg2;
- (void)setEpisodes:(id)arg1 forFeedURL:(id)arg2;
- (id)episodeSizeInfoDict;
- (id)itemsForFeedURL:(id)arg1;
- (id)relationshipDict;
- (id)init;

@end

