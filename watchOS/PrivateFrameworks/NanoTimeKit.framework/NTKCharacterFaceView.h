//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKFaceView.h>

#import "UIGestureRecognizerDelegate.h"

@class NSString, NTKCharacterTimeView, NTKUtilityComplicationFactory, UIColor, UITapGestureRecognizer, UIView;

@interface NTKCharacterFaceView : NTKFaceView <UIGestureRecognizerDelegate>
{
    NTKCharacterTimeView *_characterTimeView;
    UIView *_circleView;
    UIView *_handsView;
    NTKUtilityComplicationFactory *_complicationFactory;
    UITapGestureRecognizer *_timeTapRecognizer;
    unsigned int _isContentLoaded:1;
    int _prevDataMode;
    unsigned int _optionCharacter;
    UIColor *_optionClothingColor;
    float _optionClothingDesaturation;
}

+ (void)_prewarm;
- (void).cxx_destruct;
- (void)_endScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_scrubToDate:(id)arg1 animated:(_Bool)arg2;
- (void)_startScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)_supportsTimeScrubbing;
- (struct CGRect)_tapToSpeakRect;
- (void)_faceTapped:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)applyToForegroundZoomFraction:(float)arg1 faceScale:(float)arg2;
- (void)_cleanupAfterZoom;
- (void)_setZoomFraction:(float)arg1 iconDiameter:(float)arg2;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(float)arg2 maxDiameter:(float)arg3;
- (_Bool)_usesCustomZoom;
- (void)_performWristRaiseAnimation;
- (void)_prepareWristRaiseAnimation;
- (float)_verticalPaddingForStatusBar;
- (void)_updateComplicationViewsAlphasWithAnimation:(_Bool)arg1;
- (void)_cleanupAfterEditing;
- (void)_prepareForEditing;
- (void)_applyBreathingFraction:(float)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_applyTransitionFraction:(float)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(int)arg4 slot:(id)arg5;
- (void)_applyOption:(id)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_renderSynchronouslyWithImageQueueDiscard:(_Bool)arg1;
- (void)_applyRubberBandingFraction:(float)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_applyShowsCanonicalContent;
- (void)_applyDataMode;
- (void)_applyDataModeFromOldDataMode:(int)arg1;
- (void)_unloadSnapshotContentViews;
- (void)_loadSnapshotContentViews;
- (void)_applyForegroundAlphaForTransitionFraction:(float)arg1 fromEditMode:(int)arg2 toEditMode:(int)arg3;
- (_Bool)_fadesComplicationSlot:(id)arg1 inEditMode:(int)arg2;
- (void)_configureForTransitionFraction:(float)arg1 fromEditMode:(int)arg2 toEditMode:(int)arg3;
- (void)_configureForEditMode:(int)arg1;
- (float)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (unsigned int)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (id)_keylineViewForCustomEditMode:(int)arg1 slot:(id)arg2;
- (_Bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(int)arg1;
- (int)_legacyLayoutOverrideforComplicationType:(unsigned int)arg1 slot:(id)arg2;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (id)_newLegacyViewForComplication:(id)arg1 family:(int)arg2 slot:(id)arg3;
- (void)_loadLayoutRules;
- (int)_utilitySlotForSlot:(id)arg1;
- (_Bool)_needsForegroundContainerView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
