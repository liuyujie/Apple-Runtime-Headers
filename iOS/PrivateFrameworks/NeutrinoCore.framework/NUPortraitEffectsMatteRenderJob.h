//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/NURenderJob.h>

@class AVPortraitEffectsMatte, CIRenderTask, NUCVPixelBuffer;

@interface NUPortraitEffectsMatteRenderJob : NURenderJob
{
    CIRenderTask *_renderTask;
    NUCVPixelBuffer *_portraitMatteBuffer;
    AVPortraitEffectsMatte *_portraitEffectsMatte;
}

@property(retain) AVPortraitEffectsMatte *portraitEffectsMatte; // @synthesize portraitEffectsMatte=_portraitEffectsMatte;
- (void).cxx_destruct;
- (id)result;
- (void)cleanUp;
- (_Bool)complete:(out id *)arg1;
- (_Bool)render:(out id *)arg1;
- (_Bool)prepare:(out id *)arg1;
- (id)newRenderPipelineStateForEvaluationMode:(long long)arg1;
- (id)scalePolicy;
- (_Bool)wantsRenderScaleClampedToNativeScale;
- (_Bool)wantsRenderNodeCached;
- (_Bool)wantsPrepareNodeCached;
- (_Bool)wantsOutputImage;
- (_Bool)wantsOutputGeometry;

@end

