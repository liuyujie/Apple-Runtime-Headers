//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TVMLKit/TVPlaylist.h>

@class TVPPlaylist;

@interface _TVMLPlaylist : TVPlaylist
{
    TVPPlaylist *_tvpObject;
}

+ (long long)_tvpPlaylistRepeatModeForTVPlaylistRepeatMode:(long long)arg1;
+ (long long)_tvpPlaylistEndActionForTVPlaylistEndAction:(long long)arg1;
@property(readonly, nonatomic) TVPPlaylist *tvpObject; // @synthesize tvpObject=_tvpObject;
- (void).cxx_destruct;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)setRepeatMode:(long long)arg1;
- (void)setEndAction:(long long)arg1;
- (id)init;

@end

