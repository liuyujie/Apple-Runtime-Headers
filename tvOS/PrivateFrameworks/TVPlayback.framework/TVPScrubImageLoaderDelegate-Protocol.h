//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TVPScrubImageLoader, UIImage;

@protocol TVPScrubImageLoaderDelegate <NSObject>
- (_Bool)okToPreloadImages;
- (void)scrubImageLoader:(TVPScrubImageLoader *)arg1 imageDidLoad:(UIImage *)arg2 requestedTime:(double)arg3 imageTime:(double)arg4;
- (void)scrubImageLoaderImagesDidBecomeUnavailable:(TVPScrubImageLoader *)arg1;
- (void)scrubImageLoaderImagesDidBecomeAvailable:(TVPScrubImageLoader *)arg1;
@end

