//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TVPScrubImageLoaderDelegate.h"

@class NSObject<TVPPlayback>, NSObject<TVPTransportBarThumbnailScrubbing>, NSString, NSTimer, TVPPlayer, TVPScrubImageLoader;

__attribute__((visibility("hidden")))
@interface TVPScrubImageCoordinator : NSObject <TVPScrubImageLoaderDelegate>
{
    _Bool _inScrubMode;
    _Bool _hasScrubbed;
    _Bool _scrubbingConfiguredForCurrentMediaItem;
    _Bool _currentMediaItemHasPlayed;
    NSObject<TVPPlayback> *_mainContentPlayer;
    TVPPlayer *_scrubPlayer;
    NSObject<TVPTransportBarThumbnailScrubbing> *_thumbnailScrubber;
    TVPScrubImageLoader *_scrubImageLoader;
    double _wallClockTimeOfLastSeek;
    double _imageTime;
    NSTimer *_limitReadAheadTimer;
}

@property(nonatomic) _Bool currentMediaItemHasPlayed; // @synthesize currentMediaItemHasPlayed=_currentMediaItemHasPlayed;
@property(nonatomic) _Bool scrubbingConfiguredForCurrentMediaItem; // @synthesize scrubbingConfiguredForCurrentMediaItem=_scrubbingConfiguredForCurrentMediaItem;
@property(retain, nonatomic) NSTimer *limitReadAheadTimer; // @synthesize limitReadAheadTimer=_limitReadAheadTimer;
@property(nonatomic) double imageTime; // @synthesize imageTime=_imageTime;
@property(nonatomic) double wallClockTimeOfLastSeek; // @synthesize wallClockTimeOfLastSeek=_wallClockTimeOfLastSeek;
@property(retain, nonatomic) TVPScrubImageLoader *scrubImageLoader; // @synthesize scrubImageLoader=_scrubImageLoader;
@property(retain, nonatomic) NSObject<TVPTransportBarThumbnailScrubbing> *thumbnailScrubber; // @synthesize thumbnailScrubber=_thumbnailScrubber;
@property(retain, nonatomic) TVPPlayer *scrubPlayer; // @synthesize scrubPlayer=_scrubPlayer;
@property(retain, nonatomic) NSObject<TVPPlayback> *mainContentPlayer; // @synthesize mainContentPlayer=_mainContentPlayer;
@property(nonatomic) _Bool hasScrubbed; // @synthesize hasScrubbed=_hasScrubbed;
@property(nonatomic) _Bool inScrubMode; // @synthesize inScrubMode=_inScrubMode;
- (void).cxx_destruct;
- (_Bool)_okToPreloadImages;
- (void)_limitReadAheadTimerFired:(id)arg1;
- (void)_cleanUpScrubber;
- (void)_configureScrubberForCurrentMediaItem;
- (void)_mainContentPlayerStateDidChange:(id)arg1;
- (void)_currentMediaItemDidChange:(id)arg1;
- (_Bool)okToPreloadImages;
- (void)scrubImageLoader:(id)arg1 imageDidLoad:(id)arg2 requestedTime:(double)arg3 imageTime:(double)arg4;
- (void)scrubImageLoaderImagesDidBecomeUnavailable:(id)arg1;
- (void)scrubImageLoaderImagesDidBecomeAvailable:(id)arg1;
- (void)scrubDidEndAtTime:(double)arg1;
- (void)scrubWillEndAtTime:(double)arg1;
- (void)scrubDidStart;
- (void)_setImageTime:(double)arg1 forceUpdate:(_Bool)arg2;
- (void)setInScrubMode:(_Bool)arg1 animated:(_Bool)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 thumbnailScrubber:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
