//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Celestial/FigCaptureSourceFormat.h>

@interface FigCaptureSourceDepthDataFormat : FigCaptureSourceFormat
{
}

@property(readonly) float portraitEffectsMatteMainImageDownscalingFactor;
- (CDStruct_79c71658)depthEngineOutputDimensions;
@property(readonly) CDStruct_79c71658 highResStillImageDimensions;
@property(readonly) float fieldOfView;
@property(readonly) float maxSupportedFrameRate;
@property(readonly) float minSupportedFrameRate;
@property(readonly) CDStruct_79c71658 dimensions;
- (struct opaqueCMFormatDescription *)formatDescription;
- (unsigned long)mediaType;
- (id)copyWithNewPixelFormat:(unsigned long)arg1;

@end

