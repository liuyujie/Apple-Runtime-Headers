//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBWallpaperDefaults;

@interface SBFWallpaperDefaults : NSObject
{
    SBWallpaperDefaults *_defaultsStore;
}

+ (id)defaults;
@property(readonly, nonatomic) SBWallpaperDefaults *defaultsStore; // @synthesize defaultsStore=_defaultsStore;
- (void).cxx_destruct;
- (id)nameForVariant:(int)arg1;
- (void)setName:(id)arg1 forLocations:(int)arg2;
- (void)resetNameDefaults;
- (double)stillTimeInVideoForVariant:(int)arg1;
- (double)stillTimeInVideo;
- (void)setStillTimeInVideo:(double)arg1;
- (void)resetStillTimeInVideoDefaults;
- (_Bool)hasVideoForVariant:(int)arg1;
- (_Bool)hasVideo;
- (void)setHasVideo:(_Bool)arg1;
- (void)resetHasVideoDefaults;
- (_Bool)isPortraitForVariant:(int)arg1;
- (void)setPortrait:(_Bool)arg1 forLocations:(int)arg2;
- (void)resetPortraitDefaults;
- (_Bool)magnifyEnabledForVariant:(int)arg1;
- (void)setMagnifyEnabled:(_Bool)arg1 forLocations:(int)arg2;
- (void)resetMagnifyDefaults;
- (_Bool)supportsCroppingForVariant:(int)arg1;
- (void)setSupportsCropping:(_Bool)arg1 forLocations:(int)arg2;
- (struct CGRect)cropRectForVariant:(int)arg1;
- (void)setCropRect:(struct CGRect)arg1 forLocations:(int)arg2;
- (void)resetCroppingDefaults;
- (float)zoomScaleForVariant:(int)arg1;
- (void)setZoomScale:(float)arg1 forLocations:(int)arg2;
- (void)resetZoomScaleDefaults;
- (float)parallaxFactorForVariant:(int)arg1;
- (void)setParallaxFactor:(float)arg1 forLocations:(int)arg2;
- (void)resetParallaxFactorDefaults;
- (void)setWallpaperOptions:(id)arg1 forLocations:(int)arg2;
- (id)wallpaperOptionsForVariant:(int)arg1;
- (void)resetDefaults;
- (id)description;
- (id)init;
- (id)initWithDefaultsStore:(id)arg1;

@end

