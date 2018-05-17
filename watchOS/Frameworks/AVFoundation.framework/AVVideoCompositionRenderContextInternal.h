//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVVideoComposition, NSDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface AVVideoCompositionRenderContextInternal : NSObject
{
    NSDictionary *_basisProperties;
    struct CGSize _size;
    struct CGAffineTransform _renderTransform;
    float _renderScale;
    struct {
        int horizontalSpacing;
        int verticalSpacing;
    } _pixelAspectRatio;
    CDStruct_b8308255 _edgeWidths;
    _Bool _highQualityRendering;
    NSDictionary *_clientRequiredPixelBufferAttributes;
    NSDictionary *_destinationDesiredPixelBufferAttributes;
    NSString *_destinationDesiredPixelBufferYCbCrMatrix;
    NSString *_destinationDesiredPixelBufferColorPrimaries;
    NSString *_destinationDesiredPixelBufferTransferFunction;
    int pixelFormatFamily;
    struct __CFDictionary *_pixelAspectRatioDict;
    struct __CFDictionary *_cleanApertureDict;
    CDStruct_79c71658 _destinationPixelBufferDimensions;
    NSObject<OS_dispatch_queue> *_pixelBufferPoolQ;
    struct __CVPixelBufferPool *_pixelBufferPool;
    AVVideoComposition *_videoComposition;
}

- (void)dealloc;
- (void)finalize;
- (void)_willDeallocOrFinalize;

@end
