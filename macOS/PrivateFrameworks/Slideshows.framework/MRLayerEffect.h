//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Slideshows/MRLayer.h>

@class MCContainerEffect, MREffect, MRSlideProvider, NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface MRLayerEffect : MRLayer
{
    MREffect *mEffect;
    NSString *mEffectID;
    NSMutableDictionary *mSlideProvidersForElementIDs;
    NSArray *mSlideProviders;
    NSMutableDictionary *mSlideShowTimeScripts;
    NSMutableDictionary *mTextsForElementIDs;
    MRSlideProvider *mMultiImageModelInput;
    unsigned int mIndexOfFirstMultiImageInput;
    struct _NSRange mMultiImageSlideRange;
    BOOL mNeedsToUpdateEffect;
    BOOL mNeedsToUpdateTiming;
    BOOL mNeedsToUpdateSlides;
    BOOL mNeedsToUpdateTexts;
    BOOL mNeedsToUpdateEffectAttributes;
    BOOL mNeedsToUpdateEffectLiveAttributes;
    BOOL mSlidesAreReadonly;
    BOOL mHasRequestedMoreSlides;
    NSString *_panoramaPanningSlideID;
    double _panoramaPanningPreviousDelta;
    BOOL _panoramaPanningIsLandscape;
    BOOL _ignoresNextTimeSynchronization;
    double _previouslyRenderedContainerTime;
    BOOL _isInInteractiveMode;
    NSString *mTargetedElement;
    NSString *mEditedElement;
    MCContainerEffect *mContainer;
}

@property(readonly) NSDictionary *textsForElementIDs; // @synthesize textsForElementIDs=mTextsForElementIDs;
@property(readonly) NSDictionary *slideProvidersForElementIDs; // @synthesize slideProvidersForElementIDs=mSlideProvidersForElementIDs;
@property(readonly) MCContainerEffect *container; // @synthesize container=mContainer;
@property(copy, nonatomic) NSString *editedElement; // @synthesize editedElement=mEditedElement;
@property(copy, nonatomic) NSString *targetedElement; // @synthesize targetedElement=mTargetedElement;
@property(readonly) MREffect *effect; // @synthesize effect=mEffect;
@property(nonatomic) BOOL isInInteractiveMode; // @synthesize isInInteractiveMode=_isInInteractiveMode;
- (void)_removeAudioDucker:(id)arg1;
- (void)_addAudioDucker:(id)arg1;
- (void)_effectTriggeredStop;
- (struct CGSize)_rendererSize;
- (BOOL)_hideTextWhileEditing;
- (id)_effectAttributes;
- (void)_requestRendering;
@property(setter=suspendAsynchronousOperations:) BOOL asynchronousOperationsAreSuspended;
- (void)_stallRenderer;
- (id)_dumpLayerWithOptions:(unsigned long long)arg1;
- (long long)_maxLinesForTextElement:(id)arg1;
- (struct CGSize)_maxSizeForTextElement:(id)arg1;
- (void)getLazyDuration:(double *)arg1 lazyFactor:(double *)arg2 animationDuration:(double *)arg3 fromInterestingTime:(double)arg4;
- (double)interestingTimeForElement:(id)arg1;
- (double)interestingTimeForTime:(double)arg1;
- (BOOL)hasMoreSlidesFromTime:(double)arg1 backwards:(BOOL)arg2 startTime:(double *)arg3 duration:(double *)arg4;
- (BOOL)getStartTime:(double *)arg1 andDuration:(double *)arg2 forMovingToElementID:(id)arg3 backwards:(BOOL)arg4;
- (id)currentSlideInfos;
- (id)currentSlideInfoForElement:(id)arg1;
- (BOOL)hasSlides;
- (BOOL)getVerticesCoordinates:(struct CGPoint (*)[4])arg1 forElement:(id)arg2;
- (id)elementHitAtPoint:(struct CGPoint)arg1 localPoint:(struct CGPoint *)arg2;
- (void)animateCenterOfSlide:(id)arg1 to:(struct CGPoint)arg2 withDuration:(double)arg3 andInitialSpeed:(struct CGSize)arg4;
- (void)animateRotationOfSlide:(id)arg1 to:(double)arg2 withDuration:(double)arg3;
- (void)animateScaleOfSlide:(id)arg1 to:(double)arg2 withDuration:(double)arg3;
- (void)animateCenterOfSlide:(id)arg1 to:(struct CGPoint)arg2 withDuration:(double)arg3;
- (void)setMaxScale:(double)arg1 ofSlide:(id)arg2;
- (void)setRotation:(double)arg1 ofSlide:(id)arg2;
- (void)setScale:(double)arg1 ofSlide:(id)arg2;
- (void)setCenter:(struct CGPoint)arg1 ofSlide:(id)arg2;
- (void)setKenBurnsType:(int)arg1 ofSlide:(id)arg2;
- (void)setTime:(double)arg1 ofSlide:(id)arg2;
- (void)setPlayerHint:(id)arg1 ofSlide:(id)arg2;
- (void)setAssetPath:(id)arg1 ofSlide:(id)arg2;
- (BOOL)_setStateValue:(id)arg1 forKey:(id)arg2;
- (BOOL)_isNative3D;
- (BOOL)hasAudio;
- (BOOL)hasSomethingToRender;
- (void)setPixelSize:(struct CGSize)arg1;
- (BOOL)supportsDynamicExpansion;
- (id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)isAlphaFriendly;
- (BOOL)isOpaque;
- (void)unload;
- (BOOL)isLoadedForTime:(double)arg1;
- (void)preactivate;
- (void)setDuration:(double)arg1;
- (void)activate;
- (void)endMorphing;
- (void)beginMorphingToAspectRatio:(double)arg1 withDuration:(double)arg2;
- (void)synchronizeTime;
- (void)resumeOrPause:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)cleanup;
- (id)initWithEffectID:(id)arg1 andParameters:(id)arg2;
- (id)initWithPlug:(id)arg1 andParameters:(id)arg2 inSuperlayer:(id)arg3;
- (id)_retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)_renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)_unobservePlugOnDepreactivate;
- (void)_observePlugOnPreactivate;
- (void)_unobservePlug;
- (void)_observePlug;
- (void)_updateEffectAttributes;
- (void)_updateTexts;
- (void)_updateSlides;
- (void)_updateTiming;
- (void)_cleanupProviders;
- (void)_rebuildEffect;
- (double)panoramaPanningCancel:(id)arg1;
- (double)panoramaPanningEnd:(id)arg1;
- (double)panoramaPanningUpdate:(id)arg1;
- (double)panoramaPanningStart:(id)arg1;
- (double)pzrCancel:(id)arg1;
- (double)pzrEnd:(id)arg1;
- (double)pzrUpdate:(id)arg1;
- (double)pzrStart:(id)arg1;

@end
