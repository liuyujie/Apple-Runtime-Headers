//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VNSizeRange;

@interface VNSupportedImageSize : NSObject
{
    BOOL _orientationAgnostic;
    unsigned int _idealImageFormat;
    unsigned int _idealOrientation;
    VNSizeRange *_pixelsWideRange;
    VNSizeRange *_pixelsHighRange;
    unsigned long long _aspectRatioHandling;
}

@property(readonly, nonatomic, getter=isOrientationAgnostic) BOOL orientationAgnostic; // @synthesize orientationAgnostic=_orientationAgnostic;
@property(readonly, nonatomic) unsigned int idealOrientation; // @synthesize idealOrientation=_idealOrientation;
@property(readonly, nonatomic) unsigned int idealImageFormat; // @synthesize idealImageFormat=_idealImageFormat;
@property(readonly, nonatomic) unsigned long long aspectRatioHandling; // @synthesize aspectRatioHandling=_aspectRatioHandling;
@property(readonly, nonatomic) VNSizeRange *pixelsHighRange; // @synthesize pixelsHighRange=_pixelsHighRange;
@property(readonly, nonatomic) VNSizeRange *pixelsWideRange; // @synthesize pixelsWideRange=_pixelsWideRange;
- (void).cxx_destruct;
- (BOOL)isAllowedPixelsWide:(unsigned long long)arg1 pixelsHigh:(unsigned long long)arg2;
- (id)initWithIdealFormat:(unsigned int)arg1 pixelsWideRange:(id)arg2 pixelsHighRange:(id)arg3 aspectRatioHandling:(unsigned long long)arg4 idealOrientation:(unsigned int)arg5 orientationAgnostic:(BOOL)arg6;

@end

