//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VideoProcessing/VCPImageAnalyzer.h>

@class NSArray;

@interface VCPImageQualityAnalyzer : VCPImageAnalyzer
{
    float _irisPhotoOffsetSec;
    float _qualityScore;
    NSArray *_obstruction;
}

@property(readonly) float qualityScore; // @synthesize qualityScore=_qualityScore;
@property float irisPhotoOffsetSec; // @synthesize irisPhotoOffsetSec=_irisPhotoOffsetSec;
@property(retain) NSArray *obstruction; // @synthesize obstruction=_obstruction;
- (void).cxx_destruct;
- (int)analyzePixelBuffer:(struct __CVBuffer *)arg1 flags:(unsigned long long *)arg2 results:(id *)arg3 cancel:(CDUnknownBlockType)arg4;
- (float)computeNoiseLevel:(char *)arg1 width:(int)arg2 height:(int)arg3 stride:(long long)arg4 textureness:(char *)arg5;
- (float)computeRegionNoise:(char *)arg1 blkTextureness:(char *)arg2 average:(char *)arg3 width:(int)arg4 height:(int)arg5 stride:(long long)arg6;

@end
